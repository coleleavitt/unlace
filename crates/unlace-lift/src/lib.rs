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
pub fn provide_all(slots: &mut crate::passhooks::KunaHookSlots) {
    crate::syscallregs::provide(slots);
    crate::indirectreturn::provide(slots);
    crate::loweredswitchexact::provide(slots);
    crate::flow::provide(slots);
    crate::highslice_guard::provide(slots);
    crate::switchextent::provide(slots);
    crate::switchtrim::provide(slots);
    crate::chkstkdarwin::provide(slots);
    crate::fastfailnoreturn::provide(slots);
    crate::litpoolconst::provide(slots);
    crate::fpuemu::provide(slots);
    crate::goreg::provide(slots);
    crate::lanefuse::provide(slots);
    crate::mzdgroup::provide(slots);
    crate::msvcftol::provide(slots);
    crate::objcarc::provide(slots);
    crate::switchrunon::provide(slots);
    crate::arithhelpers::provide(slots);
    crate::switchguardrange::provide(slots);
    crate::loweredswitchvalue::provide(slots);
    crate::constselectjump::provide(slots);
    crate::rawswitch::provide(slots);
    crate::jumpassist::provide(slots);
    crate::atomics::provide(slots);
}

/// This crate's unit tests link without the driver, so they define the driver's hook symbol
/// themselves: the hooks of this crate and the crates below it, and a stub that panics, naming
/// itself, for each hook a higher crate provides (`KunaHookSlots::finish_with_stubs`).
#[cfg(test)]
mod unprovided {
    use unlace_middle::passhooks::{KunaHookSlots, KunaHooks};

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
