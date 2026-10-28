//! `unlace-cli` library facade.
//!
//! The `unlace` binary (`src/main.rs`) is the primary consumer of these
//! modules, but exposing them as a library lets downstream test / fuzz
//! crates (notably [`unlace-fuzz`](../unlace_fuzz/index.html)) drive the
//! end-to-end load → lift → SSA → passes → c_printer pipeline without
//! re-implementing the orchestration logic.

pub mod annotations;
pub mod args;
pub mod batch;
pub mod binary_input;
pub mod cache;
pub mod identify_packer;
pub mod lsp;
pub mod pipeline;
pub mod profiling;
pub mod project;
pub mod quality;

use anyhow::{Result, bail};
use unlace_ir::ArchId;

/// Parse a user-supplied `--arch` override string into an
/// [`ArchId`].
///
/// Lives in the library (not `main.rs`) because [`batch::run_batch`]
/// — also a library function — needs to honour the same `--arch`
/// override semantics, and Rust will not let a library module reach
/// into a sibling binary's private items.
pub fn parse_arch(s: &str) -> Result<ArchId> {
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
        "agx" | "apple-agx" | "apple_agx" | "mseries-gpu" | "m-series-gpu" => Ok(ArchId::Agx),
        _ => bail!("unknown architecture: '{s}'"),
    }
}
