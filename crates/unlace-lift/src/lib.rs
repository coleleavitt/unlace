//! Lifter facade -- dispatches to the appropriate architecture lifter.

use unlace_ir::{ArchId, LiftError, LiftedInsn, Lifter, RegisterFile};

pub use unlace_lift_6502::M6502Lifter;
pub use unlace_lift_8051::I8051Lifter;
pub use unlace_lift_agx::AgxLifter;
pub use unlace_lift_amdgpu::AmdGpuLifter;
pub use unlace_lift_appleagx::AppleAgxLifter;
pub use unlace_lift_arc::ArcLifter;
pub use unlace_lift_arm::ArmLifter;
pub use unlace_lift_avr::AvrLifter;
pub use unlace_lift_ebpf::EbpfLifter;
pub use unlace_lift_evm::EvmLifter;
pub use unlace_lift_hexagon::HexagonLifter;
pub use unlace_lift_m68k::M68kLifter;
pub use unlace_lift_mips::MipsLifter;
pub use unlace_lift_msp430::Msp430Lifter;
pub use unlace_lift_pic::Pic16Lifter;
pub use unlace_lift_ppc::PpcLifter;
pub use unlace_lift_riscv::RiscVLifter;
pub use unlace_lift_rx::RxLifter;
pub use unlace_lift_sass::SassLifter;
pub use unlace_lift_sharc::SharcBlackfinLifter;
pub use unlace_lift_sparc::SparcLifter;
pub use unlace_lift_spirv::SpirVLifter;
pub use unlace_lift_stm8::Stm8Lifter;
pub use unlace_lift_superh::SuperHLifter;
pub use unlace_lift_ti::TiLifter;
pub use unlace_lift_tricore::TriCoreLifter;
pub use unlace_lift_v850::V850Lifter;
pub use unlace_lift_wasm::WasmLifter;
pub use unlace_lift_x86::X86Lifter;
pub use unlace_lift_xtensa::XtensaLifter;
pub use unlace_lift_z80::Z80Lifter;

/// Construct a lifter for the given architecture.
pub fn get_lifter(arch: ArchId) -> Box<dyn Lifter> {
    lift_trace_lazy(|| format!("select arch={arch:?}"));
    match arch {
        ArchId::X86 | ArchId::X86_64 => Box::new(X86Lifter::new()),
        ArchId::Arm => Box::new(ArmLifter::new_arm32()),
        ArchId::AArch64 => Box::new(ArmLifter::new_aarch64()),
        ArchId::RiscV64 => Box::new(RiscVLifter::new()),
        ArchId::Mips => Box::new(MipsLifter::new_mips32()),
        ArchId::Mips64 => Box::new(MipsLifter::new_mips64()),
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
        ArchId::SharcBlackfin => Box::new(SharcBlackfinLifter::blackfin()),
        ArchId::Sharc => Box::new(SharcBlackfinLifter::sharc()),
        ArchId::TiC6x => Box::new(TiLifter::new_c6x()),
        ArchId::TiC28x => Box::new(TiLifter::new_c28x()),
        ArchId::Sparc => Box::new(SparcLifter::new()),
        ArchId::Wasm => Box::new(WasmLifter::new()),
        ArchId::Mos6502 => Box::new(M6502Lifter::new()),
        ArchId::I8051 => Box::new(I8051Lifter::new()),
        ArchId::Pic16 => Box::new(Pic16Lifter::new()),
        ArchId::RxRenesas => Box::new(RxLifter::new()),
        ArchId::Z80 => Box::new(Z80Lifter::new()),
        ArchId::Stm8 => Box::new(Stm8Lifter::new()),
        ArchId::SpirV => Box::new(SpirVLifter::new()),
        ArchId::AppleAgx => Box::new(AppleAgxLifter::new()),
        _ => Box::new(StubLifter::new(arch)),
    }
}

fn lift_trace(message: &str) {
    tracing::debug!(target: "unlace::lift", "{message}");
}

fn lift_trace_lazy(make_message: impl FnOnce() -> String) {
    if tracing::enabled!(target: "unlace::lift", tracing::Level::DEBUG) {
        lift_trace(&make_message());
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
    fn test_sparc_and_wasm_lifters_are_registered() {
        // The StubLifter has an empty register file; the real per-arch lifters
        // populate one. Use that to assert a non-stub lifter was returned.
        let sparc = get_lifter(ArchId::Sparc);
        assert_eq!(sparc.arch(), ArchId::Sparc);
        assert!(
            !sparc.register_file().registers.is_empty(),
            "SPARC should resolve to the real SparcLifter, not the stub"
        );

        let wasm = get_lifter(ArchId::Wasm);
        assert_eq!(wasm.arch(), ArchId::Wasm);
        assert!(
            !wasm.register_file().registers.is_empty(),
            "Wasm should resolve to the real WasmLifter, not the stub"
        );
    }

    #[test]
    fn test_additional_lifters_are_registered() {
        // Each of these per-arch lifters populates a register file; the stub
        // does not. A non-empty register file proves dispatch reached the real
        // lifter rather than the StubLifter fallback.
        for arch in [
            ArchId::Mos6502,
            ArchId::I8051,
            ArchId::Pic16,
            ArchId::RxRenesas,
            ArchId::Z80,
            ArchId::Stm8,
            ArchId::SpirV,
            ArchId::AppleAgx,
        ] {
            let lifter = get_lifter(arch);
            assert_eq!(lifter.arch(), arch);
            assert!(
                !lifter.register_file().registers.is_empty(),
                "{arch:?} should resolve to its real lifter, not the stub"
            );
        }
    }

    #[test]
    fn test_facade_preserves_arch_identity_for_modeful_lifters() {
        for arch in [
            ArchId::Arm,
            ArchId::AArch64,
            ArchId::Mips,
            ArchId::Mips64,
            ArchId::SharcBlackfin,
            ArchId::Sharc,
        ] {
            let lifter = get_lifter(arch);
            assert_eq!(lifter.arch(), arch, "facade must preserve {arch:?}");
            assert!(
                !lifter.register_file().registers.is_empty(),
                "{arch:?} should expose a real register file"
            );
        }
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
