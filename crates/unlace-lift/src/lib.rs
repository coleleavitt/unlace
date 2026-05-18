//! Lifter facade -- dispatches to the appropriate architecture lifter.

use unlace_ir::{ArchId, LiftError, LiftedInsn, Lifter, RegisterFile};

pub use unlace_lift_agx::AgxLifter;
pub use unlace_lift_amdgpu::AmdGpuLifter;
pub use unlace_lift_arc::ArcLifter;
pub use unlace_lift_arm::ArmLifter;
pub use unlace_lift_avr::AvrLifter;
pub use unlace_lift_ebpf::EbpfLifter;
pub use unlace_lift_evm::EvmLifter;
pub use unlace_lift_hexagon::HexagonLifter;
pub use unlace_lift_m68k::M68kLifter;
pub use unlace_lift_mips::MipsLifter;
pub use unlace_lift_msp430::Msp430Lifter;
pub use unlace_lift_ppc::PpcLifter;
pub use unlace_lift_riscv::RiscVLifter;
pub use unlace_lift_sass::SassLifter;
pub use unlace_lift_sharc::SharcBlackfinLifter;
pub use unlace_lift_superh::SuperHLifter;
pub use unlace_lift_ti::TiLifter;
pub use unlace_lift_tricore::TriCoreLifter;
pub use unlace_lift_v850::V850Lifter;
pub use unlace_lift_x86::X86Lifter;
pub use unlace_lift_xtensa::XtensaLifter;

/// Construct a lifter for the given architecture.
pub fn get_lifter(arch: ArchId) -> Box<dyn Lifter> {
    match arch {
        ArchId::X86 | ArchId::X86_64 => Box::new(X86Lifter::new()),
        ArchId::Arm | ArchId::AArch64 => Box::new(ArmLifter::new()),
        ArchId::RiscV64 => Box::new(RiscVLifter::new()),
        ArchId::Mips | ArchId::Mips64 => Box::new(MipsLifter::new()),
        ArchId::Ppc => Box::new(PpcLifter::ppc32_be()),
        ArchId::Ppc64 => Box::new(PpcLifter::ppc64_be()),
        ArchId::V850 => Box::new(V850Lifter::new()),
        ArchId::Arc => Box::new(ArcLifter::new()),
        ArchId::TriCore => Box::new(TriCoreLifter::new()),
        ArchId::Ebpf => Box::new(EbpfLifter::new()),
        ArchId::Sbpf => Box::new(EbpfLifter::new()),
        ArchId::Avr => Box::new(AvrLifter::new()),
        ArchId::Msp430 => Box::new(Msp430Lifter::new()),
        ArchId::AmdGpu => Box::new(AmdGpuLifter::new()),
        ArchId::Agx => Box::new(AgxLifter::new()),
        ArchId::M68k => Box::new(M68kLifter::new()),
        ArchId::Hexagon => Box::new(HexagonLifter::new()),
        ArchId::SuperH => Box::new(SuperHLifter::new()),
        ArchId::Xtensa => Box::new(XtensaLifter::new()),
        ArchId::NvidiaSass => Box::new(SassLifter::new()),
        ArchId::Evm => Box::new(EvmLifter::new()),
        ArchId::SharcBlackfin | ArchId::Sharc => Box::new(SharcBlackfinLifter::new()),
        ArchId::TiC6x => Box::new(TiLifter::new_c6x()),
        ArchId::TiC28x => Box::new(TiLifter::new_c28x()),
        _ => Box::new(StubLifter::new(arch)),
    }
}

/// Fallback lifter that emits [`IrOp::Unimplemented`] for unsupported architectures.
struct StubLifter {
    arch: ArchId,
    reg_file: RegisterFile,
}

impl StubLifter {
    fn new(arch: ArchId) -> Self {
        Self {
            arch,
            reg_file: RegisterFile {
                registers: Vec::new(),
            },
        }
    }
}

impl Lifter for StubLifter {
    fn arch(&self) -> ArchId {
        self.arch
    }

    fn register_file(&self) -> &RegisterFile {
        &self.reg_file
    }

    fn lift_insn(&self, _bytes: &[u8], addr: u64) -> Result<LiftedInsn, LiftError> {
        use unlace_ir::{IrInsn, IrOp};
        Ok(LiftedInsn {
            len: 1,
            ir_ops: vec![IrInsn::without_output(
                IrOp::Unimplemented,
                smallvec::smallvec![],
                addr,
            )],
        })
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    use unlace_ir::IrOp;

    #[test]
    fn test_stub_lifters_produce_unimplemented() {
        let l = get_lifter(ArchId::Arc);
        let result = l.lift_insn(&[0xDE, 0xAD, 0xBE, 0xEF], 0x1000);
        assert!(result.is_ok(), "ARC stub lifter should not error");
        let lifted = result.expect("lifter should succeed");
        assert_eq!(lifted.ir_ops[0].op, IrOp::Unimplemented);
    }
}
