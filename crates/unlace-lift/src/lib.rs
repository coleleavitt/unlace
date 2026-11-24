//! The decompiler's lift band, split out of unlace-decomp (crate-split step 9).
//!
//! It holds P1 (image and code partition: architecture and loader binding, the image-level
//! partition passes) and P2 (flow and op-graph recovery: lift, CFG, switch recovery, call
//! fixups). It builds only on unlace-middle; the passes above it reach it through the pass hooks
//! and the flat module paths. The folders keep unlace-decomp's phase layout; every module is
//! re-exported flat at the crate root, unlace-middle is re-exported too, and unlace-decomp
//! re-exports this crate, so `crate::<module>` paths read the same in every crate.
//!
//! Lints are inherited from the workspace (`[lints] workspace = true`).

mod p1_partition;
mod p2_lift;

pub use p1_partition::*;
pub use p2_lift::*;
#[doc(hidden)]
pub use unlace_middle::*;

/// The pass hooks this crate's own modules provide: each module's `provide`, in the driver's
/// order. The driver composes the crates' tables into the default pipeline's
/// (`unlace_decomp::PASS_HOOKS`); a crate's unit tests compose the crates at or below it.
pub fn provide_all(slots: &mut crate::kuna_passhooks::KunaHookSlots) {
    crate::kuna_syscallregs::provide(slots);
    crate::kuna_indirectreturn::provide(slots);
    crate::kuna_loweredswitchexact::provide(slots);
    crate::flow::provide(slots);
    crate::kuna_highslice_guard::provide(slots);
    crate::kuna_switchextent::provide(slots);
    crate::kuna_switchtrim::provide(slots);
    crate::kuna_chkstkdarwin::provide(slots);
    crate::kuna_fastfailnoreturn::provide(slots);
    crate::kuna_litpoolconst::provide(slots);
    crate::kuna_fpuemu::provide(slots);
    crate::kuna_goreg::provide(slots);
    crate::kuna_lanefuse::provide(slots);
    crate::kuna_mzdgroup::provide(slots);
    crate::kuna_msvcftol::provide(slots);
    crate::kuna_objcarc::provide(slots);
    crate::kuna_switchrunon::provide(slots);
    crate::kuna_arithhelpers::provide(slots);
    crate::kuna_switchguardrange::provide(slots);
    crate::kuna_loweredswitchvalue::provide(slots);
    crate::kuna_constselectjump::provide(slots);
    crate::kuna_rawswitch::provide(slots);
    crate::kuna_jumpassist::provide(slots);
    crate::kuna_atomics::provide(slots);
}

/// This crate's unit tests link without the driver, so they define the driver's hook symbol
/// themselves: the hooks of this crate and the crates below it, and a stub that panics, naming
/// itself, for each hook a higher crate provides (`KunaHookSlots::finish_with_stubs`).
#[cfg(test)]
mod unprovided {
    use unlace_middle::kuna_passhooks::{KunaHookSlots, KunaHooks};

    #[unsafe(no_mangle)]
    fn __unlace_default_pass_hooks() -> &'static KunaHooks {
        static HOOKS: std::sync::OnceLock<KunaHooks> = std::sync::OnceLock::new();
        HOOKS.get_or_init(|| {
            let mut slots = KunaHookSlots::default();
            unlace_middle::provide_all(&mut slots);
            super::provide_all(&mut slots);
            slots.finish_with_stubs()
        })
    }
}
