//! t359 — Per-architecture calling convention completeness.
//!
//! Defines calling convention parameter/return register lists for all
//! supported architectures, enabling the calling-convention detection pass
//! to work across targets beyond just x86-64 and AArch64.

use unlace_ir::ArchId;

/// Calling convention register specification for a target.
#[derive(Debug, Clone)]
pub struct CallingConvSpec {
    /// Architecture this applies to.
    pub arch: ArchId,
    /// Name of the calling convention (e.g., "sysv", "aapcs", "eabi").
    pub name: &'static str,
    /// Register offsets used for integer/pointer arguments (in order).
    pub int_arg_regs: &'static [u64],
    /// Register offsets used for floating-point arguments.
    pub float_arg_regs: &'static [u64],
    /// Register offset for the integer return value.
    pub int_ret_reg: u64,
    /// Register offset for the float return value.
    pub float_ret_reg: u64,
    /// Stack pointer register offset.
    pub stack_ptr: u64,
    /// Link register offset (0 if uses stack return address).
    pub link_reg: u64,
}

/// All known calling convention specifications.
pub static CALLING_CONV_SPECS: &[CallingConvSpec] = &[
    CallingConvSpec {
        arch: ArchId::X86_64,
        name: "sysv_amd64",
        int_arg_regs: &[56, 48, 16, 8, 64, 72], // rdi,rsi,rdx,rcx,r8,r9
        float_arg_regs: &[],
        int_ret_reg: 0,
        float_ret_reg: 0,
        stack_ptr: 32,
        link_reg: 0,
    },
    CallingConvSpec {
        arch: ArchId::X86_64,
        name: "ms_x64",
        int_arg_regs: &[8, 16, 64, 72], // rcx,rdx,r8,r9
        float_arg_regs: &[],
        int_ret_reg: 0,
        float_ret_reg: 0,
        stack_ptr: 32,
        link_reg: 0,
    },
    CallingConvSpec {
        arch: ArchId::AArch64,
        name: "aapcs64",
        int_arg_regs: &[0, 8, 16, 24, 32, 40, 48, 56], // x0-x7
        float_arg_regs: &[],
        int_ret_reg: 0,
        float_ret_reg: 0,
        stack_ptr: 248,
        link_reg: 240,
    },
    CallingConvSpec {
        arch: ArchId::Arm,
        name: "aapcs32",
        int_arg_regs: &[0, 4, 8, 12], // r0-r3
        float_arg_regs: &[],
        int_ret_reg: 0,
        float_ret_reg: 0,
        stack_ptr: 52,
        link_reg: 56,
    },
    CallingConvSpec {
        arch: ArchId::RiscV64,
        name: "riscv_lp64",
        int_arg_regs: &[80, 88, 96, 104, 112, 120, 128, 136], // a0-a7 (x10-x17)
        float_arg_regs: &[],
        int_ret_reg: 80,
        float_ret_reg: 0,
        stack_ptr: 16,
        link_reg: 8,
    },
    CallingConvSpec {
        arch: ArchId::Mips64,
        name: "n64",
        int_arg_regs: &[32, 40, 48, 56, 64, 72, 80, 88], // $a0-$a7
        float_arg_regs: &[],
        int_ret_reg: 16,
        float_ret_reg: 0,
        stack_ptr: 232,
        link_reg: 248,
    },
    CallingConvSpec {
        arch: ArchId::Ppc,
        name: "sysv_ppc32",
        int_arg_regs: &[12, 16, 20, 24, 28, 32, 36, 40], // r3-r10
        float_arg_regs: &[],
        int_ret_reg: 12,
        float_ret_reg: 0,
        stack_ptr: 4,
        link_reg: 264,
    },
    CallingConvSpec {
        arch: ArchId::Ppc64,
        name: "elfv2_ppc64",
        int_arg_regs: &[24, 32, 40, 48, 56, 64, 72, 80], // r3-r10
        float_arg_regs: &[],
        int_ret_reg: 24,
        float_ret_reg: 0,
        stack_ptr: 8,
        link_reg: 264,
    },
];

/// Look up calling convention specs for a given architecture.
pub fn specs_for_arch(arch: ArchId) -> Vec<&'static CallingConvSpec> {
    CALLING_CONV_SPECS
        .iter()
        .filter(|s| s.arch == arch)
        .collect()
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_sysv_amd64_exists() {
        let specs = specs_for_arch(ArchId::X86_64);
        assert!(specs.iter().any(|s| s.name == "sysv_amd64"));
    }

    #[test]
    fn test_aapcs64_exists() {
        let specs = specs_for_arch(ArchId::AArch64);
        assert_eq!(specs.len(), 1);
        assert_eq!(specs[0].name, "aapcs64");
    }

    #[test]
    fn test_riscv_exists() {
        let specs = specs_for_arch(ArchId::RiscV64);
        assert!(!specs.is_empty());
    }

    #[test]
    fn test_all_specs_have_args() {
        for spec in CALLING_CONV_SPECS {
            assert!(
                !spec.int_arg_regs.is_empty(),
                "{} has no arg regs",
                spec.name
            );
        }
    }
}
