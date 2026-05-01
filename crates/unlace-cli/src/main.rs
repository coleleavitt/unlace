mod args;
mod batch;
mod pipeline;

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

use crate::args::{Args, Cmd};
use crate::batch::BatchConfig;
use crate::pipeline::PipelineConfig;

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
        } => {
            init_tracing(verbose);
            let config = PipelineConfig {
                timeout: Duration::from_secs(timeout),
            };
            load_plugins(plugin_dir.as_deref()).and_then(|mgr| {
                run_decompile(
                    &binary,
                    function.as_deref(),
                    emit,
                    arch.as_deref(),
                    output.as_deref(),
                    &config,
                    &mgr,
                )
            })
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
        let requested = parse_arch(override_str)?;
        if requested != image.arch {
            bail!(
                "architecture mismatch: binary is {}, but --arch={} was specified",
                image.arch,
                override_str,
            );
        }
    }

    if !matches!(image.arch, ArchId::X86_64 | ArchId::X86 | ArchId::AArch64) {
        bail!(
            "architecture {} is not yet supported for decompilation",
            image.arch,
        );
    }

    let lifter = get_lifter(image.arch);
    let functions = pipeline::discover_functions(&image, function_filter)?;

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

    tracing::info!(count = functions.len(), "discovered functions");

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

fn parse_arch(s: &str) -> Result<ArchId> {
    match s.to_lowercase().as_str() {
        "x86" | "i386" | "i686" => Ok(ArchId::X86),
        "x86_64" | "x86-64" | "amd64" => Ok(ArchId::X86_64),
        "arm" | "armv7" => Ok(ArchId::Arm),
        "aarch64" | "arm64" => Ok(ArchId::AArch64),
        "riscv64" | "riscv" => Ok(ArchId::RiscV64),
        "mips" => Ok(ArchId::Mips),
        "mips64" => Ok(ArchId::Mips64),
        "ppc" | "powerpc" => Ok(ArchId::Ppc),
        "ppc64" | "powerpc64" => Ok(ArchId::Ppc64),
        "v850" => Ok(ArchId::V850),
        "arc" => Ok(ArchId::Arc),
        _ => bail!("unknown architecture: '{s}'"),
    }
}
