//! Target architecture identifier.

use std::fmt;

/// Target architecture identifier, derived from the ELF `e_machine` field
/// (or equivalent in PE/Mach-O).
#[derive(Debug, Clone, Copy, PartialEq, Eq, Hash, serde::Serialize, serde::Deserialize)]
pub enum ArchId {
    X86,
    X86_64,
    Arm,
    AArch64,
    RiscV64,
    Mips,
    Mips64,
    Ppc,
    Ppc64,
    V850,
    Arc,
    Wasm,
    Ebpf,
    Avr,
    Z80,
    RxRenesas,
    Agx,
    AmdGpu,
    Stm8,
    Unknown(u16),
}

impl fmt::Display for ArchId {
    fn fmt(&self, f: &mut fmt::Formatter<'_>) -> fmt::Result {
        match self {
            Self::X86 => f.write_str("x86"),
            Self::X86_64 => f.write_str("x86_64"),
            Self::Arm => f.write_str("arm"),
            Self::AArch64 => f.write_str("aarch64"),
            Self::RiscV64 => f.write_str("riscv64"),
            Self::Mips => f.write_str("mips"),
            Self::Mips64 => f.write_str("mips64"),
            Self::Ppc => f.write_str("ppc"),
            Self::Ppc64 => f.write_str("ppc64"),
            Self::V850 => f.write_str("v850"),
            Self::Arc => f.write_str("arc"),
            Self::Wasm => f.write_str("wasm"),
            Self::Ebpf => f.write_str("ebpf"),
            Self::Avr => f.write_str("avr"),
            Self::Z80 => f.write_str("z80"),
            Self::RxRenesas => f.write_str("rx"),
            Self::Agx => f.write_str("agx"),
            Self::AmdGpu => f.write_str("amdgpu"),
            Self::Stm8 => f.write_str("stm8"),
            Self::Unknown(id) => write!(f, "unknown({id:#x})"),
        }
    }
}
