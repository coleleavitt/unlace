use std::collections::BTreeMap;
use std::fs;
use std::io::Write;
use std::path::Path;

use anyhow::{Context, Result, bail};
use rayon::prelude::*;

use unlace_ir::ArchId;
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
            | ArchId::Ppc
            | ArchId::Ppc64
            | ArchId::TiC6x
            | ArchId::TiC28x
    ) {
        bail!(
            "architecture {} is not yet supported for decompilation",
            image.arch,
        );
    }

    let functions = pipeline::discover_functions(&image, None)?;
    tracing::info!(count = functions.len(), "discovered functions for batch");

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

    let results: Vec<BatchResult> = pool.install(|| {
        decompile_all_parallel(&image, &functions, config, dwarf.as_ref(), rtti_opt)
    });

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

fn write_merged(results: &[BatchResult]) {
    let mut sorted: Vec<&BatchResult> = results.iter().collect();
    sorted.sort_by_key(|r| r.addr);

    let mut buf = String::new();
    for result in sorted {
        let sep: String = std::iter::repeat_n(SEPARATOR_CHAR, SEPARATOR_LEN).collect();
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
        };

        let data = fs::read(fixture("medium.elf")).unwrap();
        let image = ElfLoader::load(&data).unwrap();
        let functions = pipeline::discover_functions(&image, None).unwrap();

        let results = decompile_all_parallel(&image, &functions, &config, None, None);

        let mut output = String::new();
        let mut sorted: Vec<&BatchResult> = results.iter().collect();
        sorted.sort_by_key(|r| r.addr);
        for result in &sorted {
            let sep: String = std::iter::repeat_n(SEPARATOR_CHAR, SEPARATOR_LEN).collect();
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
}
