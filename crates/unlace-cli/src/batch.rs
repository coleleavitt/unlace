use std::collections::BTreeMap;
use std::fs;
use std::io::Write;
use std::path::Path;

use anyhow::{Context, Result, bail};
use rayon::prelude::*;
use regex::Regex;

use unlace_ir::ArchId;
use unlace_ir::ssa::SsaFunction;
use unlace_lift::get_lifter;
use unlace_loader::{
    BinaryImage, DwarfInfo, ElfLoader, Loader, MachoLoader, PeLoader, import_dwarf,
};

use crate::args::EmitFormat;
use crate::pipeline::{self, FunctionEntry, PipelineConfig};

pub struct BatchConfig {
    pub jobs: usize,
    pub emit: EmitFormat,
    pub timeout_secs: u64,
    /// When true, run whole-program interprocedural analysis between
    /// lift+passes and emit phases.
    pub interproc: bool,
    /// Process every discovered function. No-op today (current default).
    pub all_functions: bool,
    /// Optional regex name filter, compiled once by the caller.
    pub scope: Option<Regex>,
    /// Cap on interproc fixed-point iterations (0 = pass through to default).
    pub max_iterations: usize,
}

/// Drop entries whose name doesn't match `re`. Errors if the filter empties the set.
fn apply_scope_filter(functions: &mut Vec<pipeline::FunctionEntry>, re: &Regex) -> Result<()> {
    let before = functions.len();
    functions.retain(|f| re.is_match(&f.name));
    tracing::info!(
        kept = functions.len(),
        dropped = before - functions.len(),
        "scope filter"
    );
    if functions.is_empty() {
        bail!("--scope regex matched zero functions");
    }
    Ok(())
}

pub struct BatchResult {
    pub addr: u64,
    pub name: String,
    pub output: Result<String>,
}

const SEPARATOR_CHAR: char = '═';
const SEPARATOR_LEN: usize = 60;

pub fn run_batch(
    binary_path: &Path,
    config: &BatchConfig,
    arch_override: Option<&str>,
    output_dir: Option<&Path>,
) -> Result<()> {
    let data = fs::read(binary_path)
        .with_context(|| format!("failed to read '{}'", binary_path.display()))?;

    let image = if ElfLoader::can_load(&data) {
        ElfLoader::load(&data)
    } else if MachoLoader::can_load(&data) {
        MachoLoader::load(&data)
    } else if PeLoader::can_load(&data) {
        PeLoader::load(&data)
    } else {
        bail!(
            "'{}' is not a recognized binary format (ELF, Mach-O, or PE)",
            binary_path.display(),
        );
    }
    .with_context(|| format!("failed to parse '{}'", binary_path.display()))?;

    tracing::info!(arch = %image.arch, entry = %format_args!("{:#x}", image.entry), "loaded binary");

    if let Some(override_str) = arch_override {
        let requested = crate::parse_arch(override_str)?;
        if requested != image.arch {
            bail!(
                "architecture mismatch: binary is {}, but --arch={} was specified",
                image.arch,
                override_str,
            );
        }
    }

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

    let mut functions = pipeline::discover_functions(&image, None)?;
    tracing::info!(count = functions.len(), "discovered functions for batch");
    if let Some(re) = config.scope.as_ref() {
        apply_scope_filter(&mut functions, re)?;
    }

    let dwarf = match import_dwarf(&image) {
        Ok(d) if !d.functions.is_empty() || !d.structs.is_empty() => {
            tracing::info!(
                functions = d.functions.len(),
                structs = d.structs.len(),
                "loaded DWARF debug info",
            );
            Some(d)
        }
        Ok(_) => None,
        Err(e) => {
            tracing::debug!(err = %e, "DWARF import failed; continuing without type info");
            None
        }
    };

    let thread_count = if config.jobs == 0 {
        std::thread::available_parallelism()
            .map(|n| n.get())
            .unwrap_or(1)
    } else {
        config.jobs
    };

    let pool = rayon::ThreadPoolBuilder::new()
        .num_threads(thread_count)
        .build()
        .context("failed to create thread pool")?;

    tracing::info!(
        threads = thread_count,
        functions = functions.len(),
        "starting batch decompilation"
    );

    // RTTI is scanned once and shared across all parallel decompilation
    // jobs — it's read-only and the structured layout is needed by the
    // C printer for class layout / vtable annotations.
    let rtti = unlace_loader::scan_rtti(&image);
    let rtti_opt = if rtti.is_empty() { None } else { Some(&rtti) };

    let results: Vec<BatchResult> = if config.interproc {
        pool.install(|| decompile_interproc(&image, &functions, config, dwarf.as_ref(), rtti_opt))
    } else {
        pool.install(|| {
            decompile_all_parallel(&image, &functions, config, dwarf.as_ref(), rtti_opt)
        })
    };

    if let Some(dir) = output_dir {
        write_per_file(dir, &results)?;
    } else {
        write_merged(&results);
    }

    let succeeded = results.iter().filter(|r| r.output.is_ok()).count();
    let failed = results.len() - succeeded;
    tracing::info!(succeeded, failed, total = results.len(), "batch complete");

    Ok(())
}

fn decompile_all_parallel(
    image: &BinaryImage,
    functions: &[FunctionEntry],
    config: &BatchConfig,
    dwarf: Option<&DwarfInfo>,
    rtti: Option<&unlace_loader::RttiInfo>,
) -> Vec<BatchResult> {
    let lifter = get_lifter(image.arch);
    let pipeline_config = PipelineConfig {
        timeout: std::time::Duration::from_secs(config.timeout_secs),
        print_config: None,
        annotations: None,
    };

    let mut indexed: BTreeMap<u64, &FunctionEntry> = BTreeMap::new();
    for entry in functions {
        indexed.entry(entry.addr).or_insert(entry);
    }

    let sorted: Vec<&FunctionEntry> = indexed.into_values().collect();

    sorted
        .par_iter()
        .map(|entry| {
            let output = pipeline::decompile_function_with_symbols(
                image,
                lifter.as_ref(),
                entry,
                config.emit,
                &pipeline_config,
                dwarf,
                functions,
                rtti,
            );
            BatchResult {
                addr: entry.addr,
                name: entry.name.clone(),
                output,
            }
        })
        .collect::<Vec<_>>()
        .into_iter()
        .collect::<Vec<_>>()
}

/// Three-phase interprocedural decompilation (Phase 1 parallel, Phase 2 sequential, Phase 3 parallel).
/// NOTE: The SSA map for a large binary can consume significant memory since we hold *all* functions' SSA simultaneously.
fn decompile_interproc(
    image: &BinaryImage,
    functions: &[FunctionEntry],
    config: &BatchConfig,
    dwarf: Option<&DwarfInfo>,
    rtti: Option<&unlace_loader::RttiInfo>,
) -> Vec<BatchResult> {
    let lifter = get_lifter(image.arch);
    let pipeline_config = PipelineConfig {
        timeout: std::time::Duration::from_secs(config.timeout_secs),
        print_config: None,
        annotations: None,
    };
    let mut indexed: BTreeMap<u64, &FunctionEntry> = BTreeMap::new();
    for entry in functions {
        indexed.entry(entry.addr).or_insert(entry);
    }
    let sorted: Vec<&FunctionEntry> = indexed.into_values().collect();

    // Phase 1: parallel lift + passes
    tracing::info!(
        count = sorted.len(),
        "interproc phase 1: lift + passes (parallel)"
    );
    let phase1: Vec<(u64, String, Result<SsaFunction, anyhow::Error>)> = sorted
        .par_iter()
        .map(|entry| {
            let r = pipeline::lift_and_run_passes(
                image,
                lifter.as_ref(),
                entry,
                &pipeline_config,
                dwarf,
                functions,
            );
            (entry.addr, entry.name.clone(), r)
        })
        .collect();
    let mut ssa_map: BTreeMap<u64, SsaFunction> = BTreeMap::new();
    let mut failures: Vec<BatchResult> = Vec::new();
    for (addr, name, result) in phase1 {
        match result {
            Ok(ssa) => {
                ssa_map.insert(addr, ssa);
            }
            Err(e) => {
                failures.push(BatchResult {
                    addr,
                    name,
                    output: Err(e),
                });
            }
        }
    }

    // Phase 1.5: whole-program printf format-string parse. The
    // per-function pre-pass inside `lift_and_run_passes` already
    // populates `variadic_call_types` for each function in isolation; this
    // whole-program sweep is a belt-and-braces safety net using the union
    // of all discovered functions as the symbol-resolution context, which
    // catches sites whose Call target was only resolvable once every
    // function was lifted. Additive merge guarantees idempotence.
    let total_variadic_sites =
        pipeline::run_whole_program_printf_parse(&mut ssa_map, image, functions);
    tracing::info!(
        variadic_call_sites = total_variadic_sites,
        "interproc phase 1.5: whole-program printf format-string parse"
    );

    // Phase 2: sequential interproc fixpoint
    tracing::info!(
        functions = ssa_map.len(),
        "interproc phase 2: whole-program fixed-point (sequential)"
    );
    if let Err(e) = pipeline::run_whole_program_interproc(&mut ssa_map, config.max_iterations) {
        tracing::warn!(err = %e, "interprocedural fixed-point failed; emitting with per-function results");
    }

    // Phase 3: parallel emit
    tracing::info!(
        functions = ssa_map.len(),
        "interproc phase 3: emit output (parallel)"
    );
    let emit_entries: Vec<(u64, String, SsaFunction)> = ssa_map
        .into_iter()
        .map(|(addr, ssa)| {
            let name = sorted
                .iter()
                .find(|e| e.addr == addr)
                .map(|e| e.name.clone())
                .unwrap_or_else(|| format!("sub_{addr:x}"));
            (addr, name, ssa)
        })
        .collect();
    let mut emit_results: Vec<BatchResult> = emit_entries
        .into_par_iter()
        .map(|(addr, name, mut ssa)| {
            let entry = sorted
                .iter()
                .find(|e| e.addr == addr)
                .map(|e| FunctionEntry {
                    name: e.name.clone(),
                    addr: e.addr,
                    size: e.size,
                })
                .unwrap_or(FunctionEntry {
                    name: name.clone(),
                    addr,
                    size: 0,
                });
            let output = pipeline::emit_function_interproc(
                &mut ssa,
                image,
                &entry,
                config.emit,
                &pipeline_config,
                dwarf,
                functions,
                rtti,
            );
            BatchResult { addr, name, output }
        })
        .collect();
    emit_results.append(&mut failures);
    emit_results
}

fn write_merged(results: &[BatchResult]) {
    let mut sorted: Vec<&BatchResult> = results.iter().collect();
    sorted.sort_by_key(|r| r.addr);

    let mut buf = String::new();
    for result in sorted {
        let sep: String = std::iter::repeat(SEPARATOR_CHAR)
            .take(SEPARATOR_LEN)
            .collect();
        buf.push_str(&format!(
            "// {} {} @ {:#x} {}\n",
            sep, result.name, result.addr, sep
        ));
        match &result.output {
            Ok(text) => buf.push_str(text),
            Err(e) => buf.push_str(&format!("/* FAILED: {} \u{2014} {} */\n", result.name, e)),
        }
        buf.push('\n');
    }

    print!("{buf}");
}

fn write_per_file(dir: &Path, results: &[BatchResult]) -> Result<()> {
    fs::create_dir_all(dir)
        .with_context(|| format!("failed to create output directory '{}'", dir.display()))?;

    let mut sorted: Vec<&BatchResult> = results.iter().collect();
    sorted.sort_by_key(|r| r.addr);

    for result in sorted {
        let filename = sanitize_filename(&result.name, result.addr);
        let path = dir.join(filename);
        let content = match &result.output {
            Ok(text) => text.clone(),
            Err(e) => format!("/* FAILED: {} \u{2014} {} */\n", result.name, e),
        };
        let mut file = fs::File::create(&path)
            .with_context(|| format!("failed to create '{}'", path.display()))?;
        file.write_all(content.as_bytes())?;
        tracing::debug!(path = %path.display(), "wrote function output");
    }

    Ok(())
}

fn sanitize_filename(name: &str, addr: u64) -> String {
    let sanitized: String = name
        .chars()
        .map(|c| {
            if c.is_alphanumeric() || c == '_' {
                c
            } else {
                '_'
            }
        })
        .collect();

    if sanitized.is_empty() {
        format!("func_{addr:x}.c")
    } else {
        format!("{sanitized}.c")
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    use std::path::PathBuf;

    fn fixture(name: &str) -> PathBuf {
        let manifest = env!("CARGO_MANIFEST_DIR");
        PathBuf::from(format!("{manifest}/../../fixtures/{name}"))
    }

    #[test]
    fn test_batch_discovers_functions() {
        let data = fs::read(fixture("medium.elf")).unwrap();
        let image = ElfLoader::load(&data).unwrap();
        let functions = pipeline::discover_functions(&image, None).unwrap();
        assert!(
            functions.len() >= 5,
            "medium.elf should have >=5 functions, found {}",
            functions.len()
        );
    }

    #[test]
    fn test_batch_merged_output() {
        let config = BatchConfig {
            jobs: 2,
            emit: EmitFormat::C,
            timeout_secs: 30,
            interproc: false,
            all_functions: false,
            scope: None,
            max_iterations: 0,
        };

        let data = fs::read(fixture("medium.elf")).unwrap();
        let image = ElfLoader::load(&data).unwrap();
        let functions = pipeline::discover_functions(&image, None).unwrap();

        let results = decompile_all_parallel(&image, &functions, &config, None, None);

        let mut output = String::new();
        let mut sorted: Vec<&BatchResult> = results.iter().collect();
        sorted.sort_by_key(|r| r.addr);
        for result in &sorted {
            let sep: String = std::iter::repeat(SEPARATOR_CHAR)
                .take(SEPARATOR_LEN)
                .collect();
            output.push_str(&format!(
                "// {} {} @ {:#x} {}\n",
                sep, result.name, result.addr, sep
            ));
            match &result.output {
                Ok(text) => output.push_str(text),
                Err(e) => {
                    output.push_str(&format!("/* FAILED: {} \u{2014} {} */\n", result.name, e))
                }
            }
            output.push('\n');
        }

        let separator_count = output.matches("// ═").count();
        assert!(
            separator_count >= 2,
            "merged output should have multiple separators, found {separator_count}"
        );
    }

    #[test]
    fn test_batch_output_dir() {
        let tmp = tempfile::tempdir().unwrap();
        let config = BatchConfig {
            jobs: 2,
            emit: EmitFormat::C,
            timeout_secs: 30,
            interproc: false,
            all_functions: false,
            scope: None,
            max_iterations: 0,
        };

        let data = fs::read(fixture("medium.elf")).unwrap();
        let image = ElfLoader::load(&data).unwrap();
        let functions = pipeline::discover_functions(&image, None).unwrap();
        let results = decompile_all_parallel(&image, &functions, &config, None, None);

        write_per_file(tmp.path(), &results).unwrap();

        let c_files: Vec<_> = fs::read_dir(tmp.path())
            .unwrap()
            .filter_map(|e| e.ok())
            .filter(|e| e.path().extension().is_some_and(|ext| ext == "c"))
            .collect();

        assert!(
            c_files.len() >= 2,
            "output-dir should contain .c files, found {}",
            c_files.len()
        );
    }

    #[test]
    fn test_batch_error_resilience() {
        let config = BatchConfig {
            jobs: 1,
            emit: EmitFormat::C,
            timeout_secs: 0,
            interproc: false,
            all_functions: false,
            scope: None,
            max_iterations: 0,
        };

        let data = fs::read(fixture("medium.elf")).unwrap();
        let image = ElfLoader::load(&data).unwrap();
        let functions = pipeline::discover_functions(&image, None).unwrap();
        assert!(!functions.is_empty());

        let results = decompile_all_parallel(&image, &functions, &config, None, None);

        assert_eq!(results.len(), functions.len());
        let has_failures = results.iter().any(|r| r.output.is_err());
        assert!(
            has_failures,
            "timeout=0 should cause at least some failures"
        );
    }

    #[test]
    fn test_batch_jobs_flag() {
        let config = BatchConfig {
            jobs: 1,
            emit: EmitFormat::C,
            timeout_secs: 30,
            interproc: false,
            all_functions: false,
            scope: None,
            max_iterations: 0,
        };

        let data = fs::read(fixture("hello_world.elf")).unwrap();
        let image = ElfLoader::load(&data).unwrap();
        let functions = pipeline::discover_functions(&image, None).unwrap();

        let results = decompile_all_parallel(&image, &functions, &config, None, None);
        let succeeded = results.iter().filter(|r| r.output.is_ok()).count();
        assert!(
            succeeded > 0,
            "single-threaded batch should decompile at least one function"
        );
    }

    #[test]
    fn test_sanitize_filename() {
        assert_eq!(sanitize_filename("main", 0x1000), "main.c");
        assert_eq!(
            sanitize_filename("std::vector<int>", 0x2000),
            "std__vector_int_.c"
        );
        assert_eq!(sanitize_filename("", 0x3000), "func_3000.c");
    }

    #[test]
    fn test_batch_interproc_produces_output() {
        let config = BatchConfig {
            jobs: 2,
            emit: EmitFormat::C,
            timeout_secs: 60,
            interproc: true,
            all_functions: false,
            scope: None,
            max_iterations: 0,
        };
        let data = fs::read(fixture("medium.elf")).unwrap();
        let image = ElfLoader::load(&data).unwrap();
        let functions = pipeline::discover_functions(&image, None).unwrap();
        let pool = rayon::ThreadPoolBuilder::new()
            .num_threads(2)
            .build()
            .unwrap();
        let results: Vec<BatchResult> =
            pool.install(|| decompile_interproc(&image, &functions, &config, None, None));
        let succeeded = results.iter().filter(|r| r.output.is_ok()).count();
        assert!(
            succeeded >= 2,
            "interproc batch should decompile at least 2 functions, got {succeeded}"
        );
    }
}
