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
pub mod pipeline;
pub mod project;
pub mod lsp;
pub mod tui;

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
        "msp430" | "msp" => Ok(ArchId::Msp430),
        "m68k" | "m68000" | "68000" | "68020" | "coldfire" => Ok(ArchId::M68k),
        "ebpf" | "bpf" => Ok(ArchId::Ebpf),
        "sbpf" | "sbf" | "solana-bpf" | "solana_bpf" => Ok(ArchId::Sbpf),
        "sass" | "nvidia-sass" | "nv-sass" | "sm70" | "sm_70" => Ok(ArchId::NvidiaSass),
        "xtensa" | "esp32" | "esp8266" | "lx6" | "lx106" => Ok(ArchId::Xtensa),
        "tricore" | "tc" | "tc1" | "tc1.6" | "tc1.6.2" => Ok(ArchId::TriCore),
        "amdgpu" | "amd-gpu" | "gcn" | "rdna" => Ok(ArchId::AmdGpu),
        "sharc" | "blackfin" | "bfin" | "sharc-blackfin" | "adsp" => Ok(ArchId::SharcBlackfin),
        "c6x" | "tic6x" | "ti-c6x" | "tms320c6x" | "c6000" => Ok(ArchId::TiC6x),
        "c28x" | "tic28x" | "ti-c28x" | "tms320c28x" | "c2000" => Ok(ArchId::TiC28x),
        "evm" | "ethereum" | "ethereum-vm" => Ok(ArchId::Evm),
        _ => bail!("unknown architecture: '{s}'"),
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn parse_nvidia_sass_aliases() {
        for alias in ["sass", "nvidia-sass", "nv-sass", "sm70", "sm_70"] {
            assert_eq!(parse_arch(alias).unwrap(), ArchId::NvidiaSass);
        }
    }
}
