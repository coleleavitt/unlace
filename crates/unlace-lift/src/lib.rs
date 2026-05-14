//! Lifter facade -- dispatches to the appropriate architecture lifter.

use unlace_ir::{ArchId, LiftError, LiftedInsn, Lifter, RegisterFile};

pub use unlace_lift_agx::AgxLifter;
pub use unlace_lift_arc::ArcLifter;
pub use unlace_lift_arm::ArmLifter;
pub use unlace_lift_avr::AvrLifter;
pub use unlace_lift_ebpf::EbpfLifter;
pub use unlace_lift_ebpf::EbpfLifter;
pub use unlace_lift_ebpf::EbpfLifter;
pub use unlace_lift_ebpf::EbpfLifter;
pub use unlace_lift_ebpf::EbpfLifter;
pub use unlace_lift_ebpf::EbpfLifter;
pub use unlace_lift_ebpf::EbpfLifter;
pub use unlace_lift_ebpf::EbpfLifter;
pub use unlace_lift_avr::AvrLifter;
pub use unlace_lift_ebpf::EbpfLifter;
pub use unlace_lift_m68k::M68kLifter;
pub use unlace_lift_ebpf::{EbpfLifter, SbpfLifter};
pub use unlace_lift_hexagon::HexagonLifter;
pub use unlace_lift_mips::MipsLifter;
pub use unlace_lift_msp430::Msp430Lifter;
pub use unlace_lift_ppc::PpcLifter;
pub use unlace_lift_ppc::PpcLifter;
pub use unlace_lift_ppc::{PpcEndian, PpcLifter, PpcMode};

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum LifterEndian {
    Little,
    Big,
}
pub use unlace_lift_riscv::RiscVLifter;
pub use unlace_lift_sass::SassLifter;
pub use unlace_lift_superh::SuperHLifter;
pub use unlace_lift_tricore::TriCoreLifter;
pub use unlace_lift_v850::V850Lifter;
pub use unlace_lift_x86::X86Lifter;
pub use unlace_lift_xtensa::XtensaLifter;

struct UnimplementedLifter {
    arch_id: ArchId,
    register_file: RegisterFile,
}

impl UnimplementedLifter {
    fn new(arch_id: ArchId) -> Self {
        Self {
            arch_id,
            register_file: RegisterFile {
                registers: Vec::new(),
            },
        }
    }
}

impl Lifter for UnimplementedLifter {
    fn arch(&self) -> ArchId {
        self.arch_id
    }

    fn lift_insn(&self, _bytes: &[u8], _addr: u64) -> Result<LiftedInsn, LiftError> {
        Err(LiftError::Unsupported)
    }

    fn register_file(&self) -> &RegisterFile {
        &self.register_file
    }
}

pub fn get_lifter(arch: ArchId) -> Box<dyn Lifter> {
    get_lifter_with_endian(arch, None)
}

pub fn get_lifter_with_endian(arch: ArchId, endian: Option<LifterEndian>) -> Box<dyn Lifter> {
    match arch {
        ArchId::X86 | ArchId::X86_64 => Box::new(X86Lifter::new()),
        ArchId::Arm | ArchId::AArch64 => Box::new(ArmLifter::new()),
        ArchId::RiscV64 => Box::new(RiscVLifter::new()),
        ArchId::Mips | ArchId::Mips64 => Box::new(MipsLifter::new()),
        ArchId::Ppc => Box::new(PpcLifter::new_ppc32_be()),
        ArchId::Ppc64 => Box::new(PpcLifter::new_ppc64_be()),
        ArchId::Ppc | ArchId::Ppc64 => Box::new(PpcLifter::new()),
        ArchId::M68k => Box::new(M68kLifter::new()),
        ArchId::Ppc | ArchId::Ppc64 => Box::new(PpcLifter::new()),
        ArchId::Ppc | ArchId::Ppc64 => Box::new(PpcLifter::new()),
        ArchId::Ppc => match endian {
            Some(LifterEndian::Little) => Box::new(PpcLifter::ppc32_le()),
            _ => Box::new(PpcLifter::ppc32_be()),
        },
        ArchId::Ppc64 => match endian {
            Some(LifterEndian::Little) => Box::new(PpcLifter::ppc64_le()),
            _ => Box::new(PpcLifter::ppc64_be()),
        },
        ArchId::V850 => Box::new(V850Lifter::new()),
        ArchId::Arc => Box::new(ArcLifter::new()),
        ArchId::TriCore => Box::new(TriCoreLifter::new()),
        ArchId::Ebpf => Box::new(EbpfLifter::new()),
        ArchId::Sbpf => Box::new(SbpfLifter::new()),
        ArchId::Avr => Box::new(AvrLifter::new()),
        ArchId::Agx => Box::new(AgxLifter::new()),
        ArchId::Msp430 => Box::new(Msp430Lifter::new()),
        ArchId::NvidiaSass => Box::new(SassLifter::new()),
        ArchId::Xtensa => Box::new(XtensaLifter::new()),
        ArchId::SuperH => Box::new(SuperHLifter::new()),
        ArchId::Xtensa => Box::new(XtensaLifter::new()),
        ArchId::Hexagon => Box::new(HexagonLifter::new()),
        other => Box::new(UnimplementedLifter::new(other)),
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    use unlace_ir::IrOp;

    #[test]
    fn test_get_lifter_arm() {
        let l = get_lifter(ArchId::AArch64);
        assert_eq!(l.arch(), ArchId::AArch64);
        assert!(!l.register_file().registers.is_empty());
    }

    #[test]
    fn test_get_lifter_riscv() {
        let l = get_lifter(ArchId::RiscV64);
        assert_eq!(l.arch(), ArchId::RiscV64);
        assert!(!l.register_file().registers.is_empty());
    }

    #[test]
    fn test_get_lifter_mips() {
        let l = get_lifter(ArchId::Mips64);
        assert_eq!(l.arch(), ArchId::Mips64);
        assert!(!l.register_file().registers.is_empty());
    }

    #[test]
    fn test_get_lifter_m68k() {
        let l = get_lifter(ArchId::M68k);
        assert_eq!(l.arch(), ArchId::M68k);
        assert!(!l.register_file().registers.is_empty());
    }

    #[test]
    fn test_get_lifter_ppc() {
        let l = get_lifter(ArchId::Ppc);
        assert_eq!(l.arch(), ArchId::Ppc);
        assert_eq!(l.register_file().registers[0].varnode.size, 4);
        assert!(!l.register_file().registers.is_empty());
        assert_eq!(l.register_file().registers[0].varnode.size, 4);
    }

    #[test]
    fn test_get_lifter_ppc64() {
        let l = get_lifter(ArchId::Ppc64);
        assert_eq!(l.arch(), ArchId::Ppc64);
        assert!(!l.register_file().registers.is_empty());
        assert_eq!(l.register_file().registers[0].varnode.size, 8);

        let l64 = get_lifter(ArchId::Ppc64);
        assert_eq!(l64.arch(), ArchId::Ppc64);
        assert_eq!(l64.register_file().registers[0].varnode.size, 8);
    }

    #[test]
    fn test_get_lifter_v850() {
        let l = get_lifter(ArchId::V850);
        assert_eq!(l.arch(), ArchId::V850);
        assert!(!l.register_file().registers.is_empty());
    }

    #[test]
    fn test_get_lifter_arc() {
        let l = get_lifter(ArchId::Arc);
        assert_eq!(l.arch(), ArchId::Arc);
        assert!(!l.register_file().registers.is_empty());
    }

    #[test]
    fn test_get_lifter_agx() {
        let l = get_lifter(ArchId::Agx);
        assert_eq!(l.arch(), ArchId::Agx);
    fn test_get_lifter_msp430() {
        let l = get_lifter(ArchId::Msp430);
        assert_eq!(l.arch(), ArchId::Msp430);
    fn test_get_lifter_sbpf() {
        let l = get_lifter(ArchId::Sbpf);
        assert_eq!(l.arch(), ArchId::Sbpf);
    fn test_get_lifter_sass() {
        let l = get_lifter(ArchId::NvidiaSass);
        assert_eq!(l.arch(), ArchId::NvidiaSass);
    fn test_get_lifter_xtensa() {
        let l = get_lifter(ArchId::Xtensa);
        assert_eq!(l.arch(), ArchId::Xtensa);
    fn test_get_lifter_superh() {
        let l = get_lifter(ArchId::SuperH);
        assert_eq!(l.arch(), ArchId::SuperH);
    fn test_get_lifter_xtensa() {
        let l = get_lifter(ArchId::Xtensa);
        assert_eq!(l.arch(), ArchId::Xtensa);
    fn test_get_lifter_hexagon() {
        let l = get_lifter(ArchId::Hexagon);
        assert_eq!(l.arch(), ArchId::Hexagon);
    fn test_get_lifter_tricore() {
        let l = get_lifter(ArchId::TriCore);
        assert_eq!(l.arch(), ArchId::TriCore);
        assert!(!l.register_file().registers.is_empty());
    }

    #[test]
    fn test_get_lifter_unknown_returns_fallback() {
        let l = get_lifter(ArchId::Unknown(0xFFFF));
        assert_eq!(l.arch(), ArchId::Unknown(0xFFFF));
        assert!(l.register_file().registers.is_empty());
        let result = l.lift_insn(&[0x00], 0);
        assert!(result.is_err());
    }

    #[test]
    fn test_stub_lifters_produce_unimplemented() {
        let l = get_lifter(ArchId::Arc);
        let result = l.lift_insn(&[0xDE, 0xAD, 0xBE, 0xEF], 0x1000);
        assert!(result.is_ok(), "ARC stub lifter should not error");
        let lifted = result.expect("lifter should succeed");
        assert_eq!(lifted.ir_ops[0].op, IrOp::Unimplemented);
    }
}
