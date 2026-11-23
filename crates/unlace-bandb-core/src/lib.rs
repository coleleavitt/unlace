//! The cyclic core of Band B, split out of unlace-bandb (crate-split step 10).
//!
//! Band B (P3-P6) is one fixpoint. This crate holds the 81 modules of its strongly connected
//! component, the modules of all four phases that reach each other; unlace-bandb-base below holds
//! what they read, unlace-bandb above holds the passes that read them. It keeps the phase folders
//! of unlace-decomp; every module is re-exported flat at the crate root, unlace-bandb-base (which
//! re-exports the bands below it) is re-exported too, and unlace-bandb re-exports this crate, so
//! `crate::<module>` paths read the same in every crate (`notes/crate-architecture.md`, step 10).
//!
//! Lints are inherited from the workspace (`[lints] workspace = true`).

mod p3_dataflow;
mod p4_calls;
mod p5_types;
mod p6_variables;

pub use p3_dataflow::*;
pub use p4_calls::*;
pub use p5_types::*;
pub use p6_variables::*;
#[doc(hidden)]
pub use unlace_bandb_base::*;

/// The pass hooks this crate's own modules provide: each module's `provide`, in the driver's
/// order. The driver composes the crates' tables into the default pipeline's
/// (`unlace_decomp::PASS_HOOKS`); a crate's unit tests compose the crates at or below it.
pub fn provide_all(slots: &mut crate::kuna_passhooks::KunaHookSlots) {
    crate::funcdata_spacebase::provide(slots);
    crate::funcdata_facing::provide(slots);
    crate::kuna_calleereginputs::provide(slots);
    crate::kuna_stackparamviews::provide(slots);
    crate::kuna_stackviews::provide(slots);
    crate::kuna_voidret::provide(slots);
    crate::coreaction_infertypes::provide(slots);
    crate::kuna_armfloatargs::provide(slots);
    crate::kuna_armfloatreturn::provide(slots);
    crate::kuna_calleememory::provide(slots);
    crate::kuna_localstackviews::provide(slots);
    crate::kuna_passthrough::provide(slots);
    crate::kuna_typedcallabi::provide(slots);
    crate::kuna_vfpvariadic::provide(slots);
    crate::kuna_stackstoreguard::provide(slots);
    crate::kuna_arrayextent::provide(slots);
    crate::kuna_bejoin::provide(slots);
    crate::kuna_callwide::provide(slots);
    crate::kuna_inputhints::provide(slots);
    crate::kuna_globalcallranges::provide(slots);
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
            unlace_lift::provide_all(&mut slots);
            unlace_structure::provide_all(&mut slots);
            unlace_bandb_base::provide_all(&mut slots);
            super::provide_all(&mut slots);
            slots.finish_with_stubs()
        })
    }
}
