use std::fs;
use std::io::Write;
use std::time::Duration;

use anyhow::{Context, Result, bail};
use clap::Parser;
use tracing_subscriber::EnvFilter;

use unlace_ir::ArchId;
use unlace_lift::get_lifter;
use unlace_loader::{ElfLoader, Loader, MachoLoader, PeLoader, import_dwarf};
use unlace_plugin::PluginManager;

use unlace_cli::annotations::{self, AnnotationDb};
use unlace_cli::args::{self, Args, Cmd};
use unlace_cli::batch::{self, BatchConfig};
use unlace_cli::pipeline::{self, PipelineConfig};

fn main() {
    let args = Args::parse();

    let result = match args.cmd {
        Cmd::Decompile {
            binary,
            function,
            emit,
            arch,
            output,
            all: _,
            verbose,
            timeout,
            plugin_dir,
            max_width,
            tab_width,
            annotations_load,
            annotations_save,
        } => {
            init_tracing(verbose);
            let print_config = if max_width.is_some() || tab_width.is_some() {
                let mut cfg = unlace_output::PrintConfig::from_env();
                if let Some(w) = max_width {
                    cfg.max_line_width = w;
                }
                if let Some(t) = tab_width {
                    cfg.tab_width = t;
                }
                Some(cfg)
            } else {
                None
            };
            let annotation_db = resolve_annotations(&binary, annotations_load.as_deref())
                .unwrap_or_else(|e| {
                    tracing::warn!(err = %e, "failed to load annotations; continuing without");
                    None
                });
            let config = PipelineConfig {
                timeout: Duration::from_secs(timeout),
                print_config,
                annotations: annotation_db.clone(),
            };
            let result = load_plugins(plugin_dir.as_deref()).and_then(|mgr| {
                run_decompile(
                    &binary,
                    function.as_deref(),
                    emit,
                    arch.as_deref(),
                    output.as_deref(),
                    &config,
                    &mgr,
                )
            });
            if let Some(path) = annotations_save.as_deref() {
                let to_save = annotation_db.unwrap_or_default();
                if let Err(e) = to_save.save(path) {
                    tracing::warn!(err = %e, "failed to write annotations sidecar");
                }
            }
            result
        }
        Cmd::Siggen {
            archive,
            output,
            pattern_len,
            crc_len,
            min_function_len,
            verbose,
        } => {
            init_tracing(verbose);
            run_siggen(
                &archive,
                output.as_deref(),
                unlace_loader::SigGenerateOptions {
                    pattern_len,
                    crc_len,
                    min_function_len,
                },
            )
        }
        Cmd::Batch {
            binary,
            jobs,
            emit,
            arch,
            output_dir,
            merged: _,
            timeout,
            verbose,
        } => {
            init_tracing(verbose);
            let config = BatchConfig {
                jobs,
                emit,
                timeout_secs: timeout,
            };
            batch::run_batch(&binary, &config, arch.as_deref(), output_dir.as_deref())
        }
    };

    if let Err(e) = result {
        eprintln!("Error: {e:#}");
        std::process::exit(1);
    }
}

fn run_siggen(
    archive_path: &std::path::Path,
    output_path: Option<&std::path::Path>,
    options: unlace_loader::SigGenerateOptions,
) -> Result<()> {
    let patterns =
        unlace_loader::generate_archive_patterns(archive_path, options).with_context(|| {
            format!(
                "failed to generate signatures from '{}'",
                archive_path.display()
            )
        })?;
    let toml = unlace_loader::render_patterns_toml(&patterns);
    if let Some(path) = output_path {
        fs::write(path, toml)
            .with_context(|| format!("failed to write signature output to '{}'", path.display()))?;
    } else {
        let mut stdout = std::io::stdout().lock();
        stdout.write_all(toml.as_bytes())?;
    }
    tracing::info!(count = patterns.len(), archive = %archive_path.display(), "generated FLIRT patterns");
    Ok(())
}

fn init_tracing(verbose: u8) {
    let filter = match verbose {
        0 => "warn",
        1 => "info",
        2 => "debug",
        _ => "trace",
    };
    tracing_subscriber::fmt()
        .with_env_filter(
            EnvFilter::try_from_default_env().unwrap_or_else(|_| EnvFilter::new(filter)),
        )
        .with_writer(std::io::stderr)
        .init();
}

/// Resolve which annotation DB (if any) should be loaded for `binary`.
///
/// * Explicit `--annotations-load` always wins (and errors if missing).
/// * Otherwise the default sidecar `<binary>.unlace.json` is used *only* if
///   it already exists — absence is not an error.
fn resolve_annotations(
    binary: &std::path::Path,
    explicit: Option<&std::path::Path>,
) -> Result<Option<AnnotationDb>> {
    if let Some(path) = explicit {
        return AnnotationDb::load(path).map(Some);
    }
    let sidecar = annotations::default_path(binary);
    if sidecar.exists() {
        return AnnotationDb::load(&sidecar).map(Some);
    }
    Ok(None)
}

fn load_plugins(dir: Option<&std::path::Path>) -> Result<PluginManager> {
    let mut mgr = PluginManager::new();
    if let Some(dir) = dir {
        let count = mgr
            .load_from_dir(dir)
            .with_context(|| format!("failed to load plugins from '{}'", dir.display()))?;
        tracing::info!(count, dir = %dir.display(), "loaded plugins");
    }
    Ok(mgr)
}

fn run_decompile(
    binary_path: &std::path::Path,
    function_filter: Option<&str>,
    emit: args::EmitFormat,
    arch_override: Option<&str>,
    output_path: Option<&std::path::Path>,
    config: &PipelineConfig,
    _plugin_mgr: &PluginManager,
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
        let requested = unlace_cli::parse_arch(override_str)?;
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
            | ArchId::Msp430
            | ArchId::M68k
            | ArchId::Ppc
            | ArchId::Ppc64
    ) {
        bail!(
            "architecture {} is not yet supported for decompilation",
            image.arch,
        );
    }

    let lifter = get_lifter(image.arch);
    let mut functions = pipeline::discover_functions(&image, function_filter)?;

    let dwarf = match import_dwarf(&image) {
        Ok(d) if !d.functions.is_empty() || !d.structs.is_empty() => {
            tracing::info!(
                functions = d.functions.len(),
                structs = d.structs.len(),
                "loaded DWARF debug info",
            );
            pipeline::drop_dwarf_duplicate_subfunctions(&mut functions, &d);
            Some(d)
        }
        Ok(_) => None,
        Err(e) => {
            tracing::debug!(err = %e, "DWARF import failed; continuing without type info");
            None
        }
    };

    tracing::info!(count = functions.len(), "discovered functions");

    // Scan RTTI once for the whole binary; the C printer uses it to
    // emit class hierarchy + reconstructed vtable layouts.
    let rtti = unlace_loader::scan_rtti(&image);
    let rtti_opt = if rtti.is_empty() { None } else { Some(&rtti) };

    let mut all_output = String::new();

    for func_entry in &functions {
        tracing::info!(name = %func_entry.name, addr = %format_args!("{:#x}", func_entry.addr), "decompiling");

        match pipeline::decompile_function_with_symbols(
            &image,
            lifter.as_ref(),
            func_entry,
            emit,
            config,
            dwarf.as_ref(),
            &functions,
            rtti_opt,
        ) {
            Ok(text) => all_output.push_str(&text),
            Err(e) => {
                tracing::warn!(name = %func_entry.name, err = %e, "function decompilation failed");
                all_output.push_str(&format!(
                    "/* decompilation failed for '{}': {} */\n",
                    func_entry.name, e
                ));
            }
        }
    }

    if matches!(emit, args::EmitFormat::C) {
        all_output = unlace_output::strip_ida_typedefs(&all_output);
        all_output = unlace_output::dedupe_rtti_hierarchy(&all_output);
    }

    if let Some(path) = output_path {
        let mut file = fs::File::create(path)
            .with_context(|| format!("failed to create '{}'", path.display()))?;
        file.write_all(all_output.as_bytes())?;
        tracing::info!(path = %path.display(), "wrote output");
    } else {
        print!("{all_output}");
    }

    Ok(())
}

// `parse_arch` moved to `unlace_cli::parse_arch` (lib.rs) so the
// library's `batch` module can also use it.
