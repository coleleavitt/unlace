//! The `unlace-engine` analysis core (a Rust port of the Ghidra decompiler) behind
//! `--engine ghidra`.
//!
//! unlace's loader and discovery choose the functions and their names; the engine decompiles each
//! function in a fresh `Program`, so the text of a function does not depend on which functions
//! were decompiled before it or on which worker ran it.

mod prelude;
mod prototypes;

use std::collections::{BTreeMap, BTreeSet};
use std::path::Path;
use std::sync::Arc;
use std::time::{Duration, Instant};

use anyhow::Context as _;
use rayon::prelude::*;
use serde::{Deserialize, Serialize};
use unlace_engine::output_style::OutputStyle;
use unlace_engine::program::{Program, ProgramOptions, Prototypes, SymbolLoading};
use unlace_passes::libc_signatures;
use unlace_passes::noreturn::NORETURN_NAMES;

use unlace_ir::data_layout::DataLayout;
use unlace_loader::{
    BinaryImage, ElfLoader, Loader, MachoLoader, PeLoader, import_dwarf_with_sidecar,
};

use crate::args::{Engine, EngineStyle};
use crate::pipeline::{self, FunctionEntry};

pub use prelude::prelude_for;
pub use prototypes::{DataModel, known_prototypes};

/// The `[engine]` section of the configuration file.
#[derive(Clone, Copy, Debug, PartialEq, Eq, Serialize, Deserialize)]
#[serde(default, deny_unknown_fields)]
pub struct EngineConfig {
    /// Engine of `decompile` and `batch` when `--engine` is not given.
    pub default: Engine,
    /// Naming of `ghidra` engine output when `--engine-style` is not given.
    pub style: EngineStyle,
    /// Fold loads from read-only sections into constants.
    pub propagate_readonly: bool,
}

impl Default for EngineConfig {
    fn default() -> Self {
        Self {
            default: Engine::Legacy,
            style: EngineStyle::Ida,
            propagate_readonly: true,
        }
    }
}

/// Settings of an engine run.
#[derive(Clone, Debug, Default)]
pub struct EngineOptions {
    /// Worker threads; 0 uses one per CPU.
    pub jobs: usize,
    pub style: OutputStyle,
    pub propagate_readonly: bool,
}

impl EngineOptions {
    /// The options of `config`, with `style` overriding its naming style.
    pub fn new(config: &EngineConfig, style: Option<EngineStyle>, jobs: usize) -> Self {
        Self {
            jobs,
            style: style.unwrap_or(config.style).into(),
            propagate_readonly: config.propagate_readonly,
        }
    }
}

/// The result of decompiling one function.
#[derive(Debug)]
pub struct FunctionOutput {
    pub function: FunctionEntry,
    pub text: Result<String, String>,
    pub elapsed: Duration,
}

/// Decompile `targets` of the image `bytes`. `known` names every function unlace discovered, so
/// calls to functions without a symbol print with unlace's names; `prototypes` are applied to each
/// target and its callees. Results are in `targets` order.
pub fn decompile_functions(
    image_name: &str,
    bytes: &[u8],
    known: &[FunctionEntry],
    prototypes: Prototypes,
    targets: &[FunctionEntry],
    options: &EngineOptions,
) -> anyhow::Result<Vec<FunctionOutput>> {
    let names: BTreeMap<u64, String> = known
        .iter()
        .map(|function| (function.addr, function.name.clone()))
        .collect();
    let program_options = ProgramOptions {
        style: options.style,
        function_names: Arc::new(names),
        propagate_readonly: options.propagate_readonly,
        prototypes,
        no_return_names: Arc::new(no_return_names()),
    };
    let decompile = |function: &FunctionEntry| {
        let started = Instant::now();
        let text = decompile_one(image_name, bytes, function, &program_options);
        tracing::debug!(
            target: "unlace::engine",
            function = %function.name,
            addr = function.addr,
            ok = text.is_ok(),
            elapsed_us = started.elapsed().as_micros() as u64,
            "decompiled"
        );
        FunctionOutput {
            function: function.clone(),
            text,
            elapsed: started.elapsed(),
        }
    };
    let pool = rayon::ThreadPoolBuilder::new()
        .num_threads(options.jobs)
        .build()?;
    Ok(pool.install(|| targets.par_iter().map(decompile).collect()))
}

fn decompile_one(
    image_name: &str,
    bytes: &[u8],
    function: &FunctionEntry,
    options: &ProgramOptions,
) -> Result<String, String> {
    let mut program = Program::from_image_with_options(
        image_name,
        bytes.to_vec(),
        None,
        SymbolLoading::Full,
        options,
    )
    .map_err(|error| error.explain().to_string())?;
    program
        .decompile(function.addr)
        .map_err(|error| error.explain().to_string())
}

/// Load `binary` with unlace's loader, discover its functions (symbols, debug info, prologue
/// scan, recursive descent), and decompile those matching `filter` (a name or hex address).
pub fn decompile_binary(
    path: &Path,
    filter: Option<&str>,
    options: &EngineOptions,
) -> anyhow::Result<Vec<FunctionOutput>> {
    let bytes =
        std::fs::read(path).with_context(|| format!("failed to read '{}'", path.display()))?;
    let image =
        load_image(&bytes).with_context(|| format!("failed to load '{}'", path.display()))?;
    let mut known = pipeline::discover_functions(&image, None)?;
    let dwarf = import_dwarf_with_sidecar(&image, None).ok();
    if let Some(dwarf) = &dwarf {
        pipeline::drop_dwarf_duplicate_subfunctions(&mut known, dwarf);
    }
    let pointer = u32::from(DataLayout::for_arch(image.arch).pointer_size);
    let model = DataModel {
        long: if PeLoader::can_load(&bytes) {
            4
        } else {
            pointer
        },
        pointer,
    };
    let prototypes = Arc::new(known_prototypes(&known, dwarf.as_ref(), model));
    let mut targets = match filter {
        Some(_) => pipeline::discover_functions(&image, filter)?,
        None => known.clone(),
    };
    targets.sort_by_key(|function| function.addr);
    targets.dedup_by_key(|function| function.addr);
    decompile_functions(
        &path.to_string_lossy(),
        &bytes,
        &known,
        prototypes,
        &targets,
        options,
    )
}

fn load_image(bytes: &[u8]) -> anyhow::Result<BinaryImage> {
    let image = if ElfLoader::can_load(bytes) {
        ElfLoader::load(bytes)
    } else if MachoLoader::can_load(bytes) {
        MachoLoader::load(bytes)
    } else if PeLoader::can_load(bytes) {
        PeLoader::load(bytes)
    } else {
        anyhow::bail!("not a recognized format (ELF, Mach-O, or PE)");
    };
    Ok(image?)
}

/// unlace's roster of functions that never return: the noreturn pass names and the libc
/// signatures marked noreturn.
fn no_return_names() -> BTreeSet<String> {
    let libc = libc_signatures::iter_signatures()
        .filter(|signature| signature.noreturn)
        .map(|signature| signature.name);
    NORETURN_NAMES
        .iter()
        .copied()
        .chain(libc)
        .map(str::to_string)
        .collect()
}

/// Join the per-function results into one C translation unit.
pub fn render_c(outputs: &[FunctionOutput], style: OutputStyle) -> String {
    let mut body = String::new();
    for output in outputs {
        match &output.text {
            Ok(text) => body.push_str(text),
            Err(error) => body.push_str(&format!(
                "\n/* decompilation failed for '{}' at {:#x}: {} */\n",
                output.function.name,
                output.function.addr,
                error.trim_end()
            )),
        }
    }
    let mut out = prelude_for(&body, style);
    out.push_str(&body);
    out
}

/// Write each function to `<dir>/<name>_<addr>.c` with the declarations it needs.
pub fn write_per_function(
    dir: &Path,
    outputs: &[FunctionOutput],
    style: OutputStyle,
) -> anyhow::Result<()> {
    std::fs::create_dir_all(dir)
        .with_context(|| format!("failed to create '{}'", dir.display()))?;
    for output in outputs {
        let path = dir.join(crate::batch::sanitize_filename(
            &output.function.name,
            output.function.addr,
        ));
        let text = render_c(std::slice::from_ref(output), style);
        std::fs::write(&path, text)
            .with_context(|| format!("failed to write '{}'", path.display()))?;
    }
    Ok(())
}
