//! Lifter facade -- dispatches to the appropriate architecture lifter.
//!
//! The x86 and ARM lifters are always built. Every other lifter is
//! experimental and compiled only with its `arch-*` cargo feature (or
//! `all-arches`); [`unlace_ir::arch_support::product_tier`] names the feature
//! for each architecture.

use unlace_ir::arch_support::{ProductTier, product_tier};
use unlace_ir::{ArchId, Lifter};

#[cfg(feature = "arch-6502")]
pub use unlace_lift_6502::M6502Lifter;
#[cfg(feature = "arch-8051")]
pub use unlace_lift_8051::I8051Lifter;
#[cfg(feature = "arch-agx")]
pub use unlace_lift_agx::AgxLifter;
#[cfg(feature = "arch-amdgpu")]
pub use unlace_lift_amdgpu::AmdGpuLifter;
#[cfg(feature = "arch-appleagx")]
pub use unlace_lift_appleagx::AppleAgxLifter;
#[cfg(feature = "arch-arc")]
pub use unlace_lift_arc::ArcLifter;
pub use unlace_lift_arm::ArmLifter;
#[cfg(feature = "arch-avr")]
pub use unlace_lift_avr::AvrLifter;
#[cfg(feature = "arch-ebpf")]
pub use unlace_lift_ebpf::EbpfLifter;
#[cfg(feature = "arch-evm")]
pub use unlace_lift_evm::EvmLifter;
#[cfg(feature = "arch-hexagon")]
pub use unlace_lift_hexagon::HexagonLifter;
#[cfg(feature = "arch-m68k")]
pub use unlace_lift_m68k::M68kLifter;
#[cfg(feature = "arch-mips")]
pub use unlace_lift_mips::MipsLifter;
#[cfg(feature = "arch-msp430")]
pub use unlace_lift_msp430::Msp430Lifter;
#[cfg(feature = "arch-pic")]
pub use unlace_lift_pic::Pic16Lifter;
#[cfg(feature = "arch-ppc")]
pub use unlace_lift_ppc::PpcLifter;
#[cfg(feature = "arch-riscv")]
pub use unlace_lift_riscv::RiscVLifter;
#[cfg(feature = "arch-rx")]
pub use unlace_lift_rx::RxLifter;
#[cfg(feature = "arch-sass")]
pub use unlace_lift_sass::SassLifter;
#[cfg(feature = "arch-sharc")]
pub use unlace_lift_sharc::SharcBlackfinLifter;
#[cfg(feature = "arch-sparc")]
pub use unlace_lift_sparc::SparcLifter;
#[cfg(feature = "arch-spirv")]
pub use unlace_lift_spirv::SpirVLifter;
#[cfg(feature = "arch-stm8")]
pub use unlace_lift_stm8::Stm8Lifter;
#[cfg(feature = "arch-superh")]
pub use unlace_lift_superh::SuperHLifter;
#[cfg(feature = "arch-ti")]
pub use unlace_lift_ti::TiLifter;
#[cfg(feature = "arch-tricore")]
pub use unlace_lift_tricore::TriCoreLifter;
#[cfg(feature = "arch-v850")]
pub use unlace_lift_v850::V850Lifter;
#[cfg(feature = "arch-wasm")]
pub use unlace_lift_wasm::WasmLifter;
pub use unlace_lift_x86::X86Lifter;
#[cfg(feature = "arch-xtensa")]
pub use unlace_lift_xtensa::XtensaLifter;
#[cfg(feature = "arch-z80")]
pub use unlace_lift_z80::Z80Lifter;

/// Why [`get_lifter`] cannot produce a lifter for an architecture.
#[derive(Debug, Clone, Copy, PartialEq, Eq, thiserror::Error)]
pub enum LifterUnavailable {
    #[error(
        "architecture {arch} is experimental and not enabled in this build; \
         rebuild with --features {feature}"
    )]
    NotEnabled { arch: ArchId, feature: &'static str },
    #[error("architecture {arch} has no lifter")]
    NoLifter { arch: ArchId },
}

impl LifterUnavailable {
    fn for_arch(arch: ArchId) -> Self {
        match product_tier(arch) {
            ProductTier::Experimental { feature } => Self::NotEnabled { arch, feature },
            ProductTier::Supported | ProductTier::Unsupported => Self::NoLifter { arch },
        }
    }
}

/// Construct a lifter for the given architecture.
///
/// Experimental architectures whose cargo feature is not enabled return
/// [`LifterUnavailable::NotEnabled`] instead of a lifter.
pub fn get_lifter(arch: ArchId) -> Result<Box<dyn Lifter>, LifterUnavailable> {
    lift_trace_lazy(|| format!("select arch={arch:?}"));
    let lifter: Box<dyn Lifter> = match arch {
        ArchId::X86 | ArchId::X86_64 => Box::new(X86Lifter::new()),
        ArchId::Arm => Box::new(ArmLifter::new_arm32()),
        ArchId::AArch64 => Box::new(ArmLifter::new_aarch64()),
        #[cfg(feature = "arch-riscv")]
        ArchId::RiscV64 => Box::new(RiscVLifter::new()),
        #[cfg(feature = "arch-mips")]
        ArchId::Mips => Box::new(MipsLifter::new_mips32()),
        #[cfg(feature = "arch-mips")]
        ArchId::Mips64 => Box::new(MipsLifter::new_mips64()),
        #[cfg(feature = "arch-ppc")]
        ArchId::Ppc => Box::new(PpcLifter::ppc32_be()),
        #[cfg(feature = "arch-ppc")]
        ArchId::Ppc64 => Box::new(PpcLifter::ppc64_be()),
        #[cfg(feature = "arch-v850")]
        ArchId::V850 => Box::new(V850Lifter::new()),
        #[cfg(feature = "arch-arc")]
        ArchId::Arc => Box::new(ArcLifter::new()),
        #[cfg(feature = "arch-tricore")]
        ArchId::TriCore => Box::new(TriCoreLifter::new()),
        #[cfg(feature = "arch-ebpf")]
        ArchId::Ebpf => Box::new(EbpfLifter::new()),
        #[cfg(feature = "arch-ebpf")]
        ArchId::Sbpf => Box::new(EbpfLifter::new()),
        #[cfg(feature = "arch-avr")]
        ArchId::Avr => Box::new(AvrLifter::new()),
        #[cfg(feature = "arch-msp430")]
        ArchId::Msp430 => Box::new(Msp430Lifter::new()),
        #[cfg(feature = "arch-amdgpu")]
        ArchId::AmdGpu => Box::new(AmdGpuLifter::new()),
        #[cfg(feature = "arch-agx")]
        ArchId::Agx => Box::new(AgxLifter::new()),
        #[cfg(feature = "arch-m68k")]
        ArchId::M68k => Box::new(M68kLifter::new()),
        #[cfg(feature = "arch-hexagon")]
        ArchId::Hexagon => Box::new(HexagonLifter::new()),
        #[cfg(feature = "arch-superh")]
        ArchId::SuperH => Box::new(SuperHLifter::new()),
        #[cfg(feature = "arch-xtensa")]
        ArchId::Xtensa => Box::new(XtensaLifter::new()),
        #[cfg(feature = "arch-sass")]
        ArchId::NvidiaSass => Box::new(SassLifter::new()),
        #[cfg(feature = "arch-evm")]
        ArchId::Evm => Box::new(EvmLifter::new()),
        #[cfg(feature = "arch-sharc")]
        ArchId::SharcBlackfin => Box::new(SharcBlackfinLifter::blackfin()),
        #[cfg(feature = "arch-sharc")]
        ArchId::Sharc => Box::new(SharcBlackfinLifter::sharc()),
        #[cfg(feature = "arch-ti")]
        ArchId::TiC6x => Box::new(TiLifter::new_c6x()),
        #[cfg(feature = "arch-ti")]
        ArchId::TiC28x => Box::new(TiLifter::new_c28x()),
        #[cfg(feature = "arch-sparc")]
        ArchId::Sparc => Box::new(SparcLifter::new()),
        #[cfg(feature = "arch-wasm")]
        ArchId::Wasm => Box::new(WasmLifter::new()),
        #[cfg(feature = "arch-6502")]
        ArchId::Mos6502 => Box::new(M6502Lifter::new()),
        #[cfg(feature = "arch-8051")]
        ArchId::I8051 => Box::new(I8051Lifter::new()),
        #[cfg(feature = "arch-pic")]
        ArchId::Pic16 => Box::new(Pic16Lifter::new()),
        #[cfg(feature = "arch-rx")]
        ArchId::RxRenesas => Box::new(RxLifter::new()),
        #[cfg(feature = "arch-z80")]
        ArchId::Z80 => Box::new(Z80Lifter::new()),
        #[cfg(feature = "arch-stm8")]
        ArchId::Stm8 => Box::new(Stm8Lifter::new()),
        #[cfg(feature = "arch-spirv")]
        ArchId::SpirV => Box::new(SpirVLifter::new()),
        #[cfg(feature = "arch-appleagx")]
        ArchId::AppleAgx => Box::new(AppleAgxLifter::new()),
        _ => return Err(LifterUnavailable::for_arch(arch)),
    };
    Ok(lifter)
}

fn lift_trace(message: &str) {
    tracing::debug!(target: "unlace::lift", "{message}");
}

fn lift_trace_lazy(make_message: impl FnOnce() -> String) {
    if tracing::enabled!(target: "unlace::lift", tracing::Level::DEBUG) {
        lift_trace(&make_message());
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    use unlace_ir::arch_support::all_arches;

    #[test]
    fn supported_arches_always_resolve_with_identity() {
        for &arch in all_arches() {
            if product_tier(arch) != ProductTier::Supported {
                continue;
            }
            let Ok(lifter) = get_lifter(arch) else {
                panic!("{arch:?} is supported and must always lift");
            };
            assert!(
                !lifter.register_file().registers.is_empty(),
                "{arch:?} should expose a real register file"
            );
        }
    }

    #[test]
    fn unavailable_lifters_report_their_product_tier() {
        let manifest = include_str!("../Cargo.toml");
        for &arch in all_arches() {
            match (get_lifter(arch), product_tier(arch)) {
                (Ok(_), ProductTier::Supported | ProductTier::Experimental { .. }) => {}
                (Err(LifterUnavailable::NotEnabled { feature, .. }), tier) => {
                    assert_eq!(tier.feature(), Some(feature), "{arch:?}");
                    assert!(
                        manifest.contains(&format!("\n{feature} = [\"dep:")),
                        "{arch:?}: feature `{feature}` must be declared in Cargo.toml"
                    );
                }
                (Err(LifterUnavailable::NoLifter { .. }), ProductTier::Unsupported) => {}
                (result, tier) => panic!(
                    "{arch:?}: inconsistent facade result {:?} for {tier:?}",
                    result.err()
                ),
            }
        }
    }

    #[test]
    fn experimental_arch_without_feature_is_a_typed_error() {
        if cfg!(feature = "arch-mips") {
            return;
        }
        let Err(err) = get_lifter(ArchId::Mips64) else {
            panic!("mips64 must not lift without `arch-mips`");
        };
        assert_eq!(
            err,
            LifterUnavailable::NotEnabled {
                arch: ArchId::Mips64,
                feature: "arch-mips"
            }
        );
        assert_eq!(
            err.to_string(),
            "architecture mips64 is experimental and not enabled in this build; \
             rebuild with --features arch-mips"
        );
    }

    #[test]
    fn facade_preserves_arch_identity_for_modeful_lifters() {
        for arch in [ArchId::Arm, ArchId::AArch64, ArchId::X86_64] {
            let lifter = get_lifter(arch).expect("supported arch");
            assert_eq!(lifter.arch(), arch, "facade must preserve {arch:?}");
        }
    }

    #[test]
    fn unknown_arch_has_no_lifter() {
        assert!(matches!(
            get_lifter(ArchId::Unknown(0xffff)),
            Err(LifterUnavailable::NoLifter { .. })
        ));
    }

    #[cfg(feature = "all-arches")]
    #[test]
    fn all_arches_feature_registers_every_experimental_lifter() {
        for &arch in all_arches() {
            if !matches!(product_tier(arch), ProductTier::Experimental { .. }) {
                continue;
            }
            let Ok(lifter) = get_lifter(arch) else {
                panic!("{arch:?} must resolve with `all-arches`");
            };
            assert!(
                !lifter.register_file().registers.is_empty(),
                "{arch:?} should resolve to its real lifter"
            );
        }
    }

    #[cfg(feature = "arch-arc")]
    #[test]
    fn arc_lifter_marks_undecoded_bytes_unimplemented() {
        let lifter = get_lifter(ArchId::Arc).expect("arc lifter is enabled");
        let lifted = lifter
            .lift_insn(&[0xDE, 0xAD, 0xBE, 0xEF], 0x1000)
            .expect("ARC lifter should not error");
        assert_eq!(lifted.ir_ops[0].op, unlace_ir::IrOp::Unimplemented);
    }
}
