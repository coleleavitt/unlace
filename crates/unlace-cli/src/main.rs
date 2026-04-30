mod args;
mod pipeline;

use std::fs;
use std::io::Write;

use anyhow::{Context, Result, bail};
use clap::Parser;
use tracing_subscriber::EnvFilter;

use unlace_ir::ssa::build_ssa;
use unlace_ir::ArchId;
use unlace_loader::{ElfLoader, Loader};
use unlace_lift::get_lifter;

use crate::args::{Args, Cmd};

fn main() -> Result<()> {
    let args = Args::parse();

    match args.cmd {
        Cmd::Decompile {
            binary,
            function,
            emit,
            arch,
            output,
            all: _,
            verbose,
        } => {
            init_tracing(verbose);
            run_decompile(&binary, function.as_deref(), emit, arch.as_deref(), output.as_deref())
        }
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

fn run_decompile(
    binary_path: &std::path::Path,
    function_filter: Option<&str>,
    emit: args::EmitFormat,
    arch_override: Option<&str>,
    output_path: Option<&std::path::Path>,
) -> Result<()> {
    let data = fs::read(binary_path)
        .with_context(|| format!("failed to read '{}'", binary_path.display()))?;

    if !ElfLoader::can_load(&data) {
        bail!("'{}' is not a valid ELF binary", binary_path.display());
    }

    let image = ElfLoader::load(&data)
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

    if !matches!(image.arch, ArchId::X86_64 | ArchId::X86) {
        bail!(
            "architecture {} is not yet supported for decompilation (only x86-64 for now)",
            image.arch,
        );
    }

    let lifter = get_lifter(image.arch);
    let functions = pipeline::discover_functions(&image, function_filter)?;

    tracing::info!(count = functions.len(), "discovered functions");

    let mut all_output = String::new();

    for func_entry in &functions {
        tracing::info!(name = %func_entry.name, addr = %format_args!("{:#x}", func_entry.addr), "decompiling");

        let ir_func = match pipeline::lift_function(&image, lifter.as_ref(), func_entry) {
            Ok(f) => f,
            Err(e) => {
                tracing::warn!(name = %func_entry.name, err = %e, "skipping function");
                continue;
            }
        };

        let mut ssa = build_ssa(ir_func);

        if let Err(e) = pipeline::run_passes(&mut ssa) {
            tracing::warn!(name = %func_entry.name, err = %e, "pass pipeline failed; emitting unoptimized");
        }

        match pipeline::emit_output(emit, &ssa) {
            Ok(text) => all_output.push_str(&text),
            Err(e) => {
                tracing::warn!(name = %func_entry.name, err = %e, "output emission failed");
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
