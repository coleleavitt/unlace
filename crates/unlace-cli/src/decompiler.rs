//! Whole-binary decompilation shared by `unlace decompile` and in-process
//! callers such as the MCP server.

use anyhow::{Result, bail};
use unlace_ir::{ArchId, Lifter};
use unlace_lift::get_lifter;
use unlace_loader::{BinaryImage, DwarfInfo, RttiInfo, import_dwarf_with_sidecar};

use crate::args::EmitFormat;
use crate::pipeline::{self, FunctionEntry, PipelineConfig};
use crate::profiling::{self, TraceField};

/// Everything `unlace decompile` computes once per binary before it
/// decompiles individual functions.
pub struct Decompiler<'img> {
    image: &'img BinaryImage,
    lifter: Box<dyn Lifter>,
    functions: Vec<FunctionEntry>,
    dwarf: Option<DwarfInfo>,
    config: PipelineConfig,
    rtti: RttiInfo,
}

/// The text one function contributes to the decompiler output.
#[derive(Clone, Debug, PartialEq, Eq)]
pub enum FunctionOutput {
    Decompiled(String),
    /// The pipeline failed; the text is a C comment naming the error.
    Failed(String),
}

impl FunctionOutput {
    pub fn text(&self) -> &str {
        match self {
            Self::Decompiled(text) | Self::Failed(text) => text,
        }
    }
}

impl<'img> Decompiler<'img> {
    /// Check that `image` has a decompilation-capable lifter, discover its
    /// functions (only those matching `filter` when set), import DWARF, and
    /// build the whole-binary symbol context and RTTI scan.
    pub fn prepare(
        image: &'img BinaryImage,
        filter: Option<&str>,
        config: &PipelineConfig,
    ) -> Result<Self> {
        if !matches!(
            image.arch,
            ArchId::X86_64
                | ArchId::X86
                | ArchId::AArch64
                | ArchId::Mips64
                | ArchId::RiscV64
                | ArchId::V850
                | ArchId::Arc
                | ArchId::Agx
                | ArchId::Ppc
                | ArchId::Ppc64
        ) {
            bail!(
                "architecture {} is not yet supported for decompilation",
                image.arch,
            );
        }

        let lifter = {
            let _span = profiling::phase("decompile.get-lifter");
            get_lifter(image.arch)?
        };
        let (mut functions, dwarf) = discover_with_dwarf(image, config.dwarf_sidecar.as_deref())?;

        let mut effective_config = config.clone();
        effective_config.symbol_context = Some({
            let _span = profiling::phase("decompile.symbol-context");
            std::sync::Arc::new(pipeline::build_symbol_context_with_config(
                image,
                &functions,
                &config.flirt,
            ))
        });
        // The symbol context covers every function, so calls out of a
        // selected function still get symbol and library (FLIRT) names.
        if let Some(filter) = filter {
            functions = pipeline::select_functions(functions, filter)?;
        }

        // Scan RTTI once for the whole binary; the C printer uses it to
        // emit class hierarchy + reconstructed vtable layouts.
        let rtti = {
            let _span = profiling::phase("decompile.scan-rtti");
            unlace_loader::scan_rtti(image)
        };

        Ok(Self {
            image,
            lifter,
            functions,
            dwarf,
            config: effective_config,
            rtti,
        })
    }

    /// The functions selected by [`Decompiler::prepare`], in output order.
    pub fn functions(&self) -> &[FunctionEntry] {
        &self.functions
    }

    pub fn decompile(&self, entry: &FunctionEntry, emit: EmitFormat) -> FunctionOutput {
        let rtti = (!self.rtti.is_empty()).then_some(&self.rtti);
        let outcome = std::panic::catch_unwind(std::panic::AssertUnwindSafe(|| {
            pipeline::decompile_function_with_symbols(
                self.image,
                self.lifter.as_ref(),
                entry,
                emit,
                &self.config,
                self.dwarf.as_ref(),
                &self.functions,
                rtti,
            )
        }));
        let error = match outcome {
            Ok(Ok(text)) => return FunctionOutput::Decompiled(text),
            Ok(Err(e)) => e.to_string(),
            Err(payload) => format!("panicked: {}", panic_message(payload.as_ref())),
        };
        profiling::diagnostic(
            "warn",
            "function decompilation failed",
            [
                TraceField::text("function", entry.name.clone()),
                TraceField::text("err", error.clone()),
            ],
        );
        FunctionOutput::Failed(format!(
            "/* decompilation failed for '{}': {} */\n",
            entry.name, error
        ))
    }

    /// Decompile every selected function and apply [`finish_output`]; this is
    /// the text `unlace decompile` prints.
    pub fn decompile_all(&self, emit: EmitFormat) -> String {
        let mut output = String::new();
        for entry in &self.functions {
            output.push_str(self.decompile(entry, emit).text());
        }
        finish_output(emit, output)
    }
}

/// Decompile `binary_path` the way `unlace decompile` does with the built-in
/// default [`Config`](crate::config::Config) (no config file is read), its
/// default annotation sidecar, and the given per-function wall-clock
/// `timeout`, and return the emitted text.
pub fn decompile_path(
    binary_path: &std::path::Path,
    filter: Option<&str>,
    emit: EmitFormat,
    timeout: std::time::Duration,
) -> Result<String> {
    let image = crate::load::open_image(binary_path)?;
    let config = PipelineConfig {
        timeout,
        annotations: crate::annotations::load_default(binary_path)?,
        ..PipelineConfig::default()
    };
    Ok(Decompiler::prepare(&image, filter, &config)?.decompile_all(emit))
}

/// Discover the functions of `image` and import its DWARF (from `dwarf_sidecar` when set),
/// dropping functions DWARF shows to be parts of another. This is the function list every
/// whole-binary command selects from.
pub fn discover_with_dwarf(
    image: &BinaryImage,
    dwarf_sidecar: Option<&[u8]>,
) -> Result<(Vec<FunctionEntry>, Option<DwarfInfo>)> {
    let mut functions = {
        let _span = profiling::phase("decompile.discover-functions");
        pipeline::discover_functions(image, None)?
    };
    profiling::record_items("decompile.discover-functions", functions.len() as u64);

    let dwarf = {
        let _span = profiling::phase("decompile.import-dwarf");
        match import_dwarf_with_sidecar(image, dwarf_sidecar) {
            Ok(d) if !d.functions.is_empty() || !d.structs.is_empty() => {
                profiling::record_items("decompile.import-dwarf", d.functions.len() as u64);
                profiling::diagnostic(
                    "info",
                    "loaded DWARF debug info",
                    [
                        TraceField::count("functions", d.functions.len() as u64),
                        TraceField::count("structs", d.structs.len() as u64),
                    ],
                );
                pipeline::drop_dwarf_duplicate_subfunctions(&mut functions, &d);
                Some(d)
            }
            Ok(_) => None,
            Err(e) => {
                profiling::diagnostic(
                    "debug",
                    "DWARF import failed; continuing without type info",
                    [TraceField::text("err", e.to_string())],
                );
                None
            }
        }
    };

    profiling::diagnostic(
        "info",
        "discovered functions",
        [TraceField::count("count", functions.len() as u64)],
    );
    Ok((functions, dwarf))
}

/// Whole-output cleanup applied once every function has been emitted.
pub fn finish_output(emit: EmitFormat, mut output: String) -> String {
    let _span = profiling::phase("decompile.post-process");
    if matches!(emit, EmitFormat::C) {
        output = unlace_output::dedupe_ida_typedefs(&output);
        output = unlace_output::declare_pseudo_c_externals(&output);
        output = unlace_output::dedupe_rtti_hierarchy(&output);
    }
    output
}

fn panic_message(payload: &(dyn std::any::Any + Send)) -> &str {
    payload
        .downcast_ref::<&str>()
        .copied()
        .or_else(|| payload.downcast_ref::<String>().map(String::as_str))
        .unwrap_or("non-string panic payload")
}
