//! Lifter facade -- dispatches to the appropriate architecture lifter.

use unlace_ir::{ArchId, LiftError, LiftedInsn, Lifter, RegisterFile};

pub use unlace_lift_arc::ArcLifter;
pub use unlace_lift_arm::ArmLifter;
pub use unlace_lift_avr::AvrLifter;
pub use unlace_lift_ebpf::EbpfLifter;
pub use unlace_lift_hexagon::HexagonLifter;
pub use unlace_lift_mips::MipsLifter;
pub use unlace_lift_ppc::PpcLifter;
pub use unlace_lift_riscv::RiscVLifter;
pub use unlace_lift_v850::V850Lifter;
pub use unlace_lift_x86::X86Lifter;

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
    match arch {
        ArchId::X86 | ArchId::X86_64 => Box::new(X86Lifter::new()),
        ArchId::Arm | ArchId::AArch64 => Box::new(ArmLifter::new()),
        ArchId::RiscV64 => Box::new(RiscVLifter::new()),
        ArchId::Mips | ArchId::Mips64 => Box::new(MipsLifter::new()),
        ArchId::Ppc | ArchId::Ppc64 => Box::new(PpcLifter::new()),
        ArchId::V850 => Box::new(V850Lifter::new()),
        ArchId::Arc => Box::new(ArcLifter::new()),
        ArchId::Ebpf => Box::new(EbpfLifter::new()),
        ArchId::Avr => Box::new(AvrLifter::new()),
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
    fn test_get_lifter_ppc() {
        let l = get_lifter(ArchId::Ppc);
        assert_eq!(l.arch(), ArchId::Ppc);
        assert!(!l.register_file().registers.is_empty());
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
    fn test_get_lifter_hexagon() {
        let l = get_lifter(ArchId::Hexagon);
        assert_eq!(l.arch(), ArchId::Hexagon);
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
