//! The decompiler's Band B, split out of unlace-decomp (crate-split step 9).
//!
//! It holds the passes that co-iterate inside `mainloop`: P3 (dataflow: SSA simplification and
//! the rule pools), P4 (the call and prototype model), P5 (type inference) and P6 (variables,
//! merge and stack layout). It builds on unlace-middle, unlace-lift, unlace-structure and unlace-bandb-base (the modules of
//! P3-P6 outside the fixpoint's cyclic core, step 10); the
//! passes above it reach it through the pass hooks and the flat module paths. The folders keep
//! unlace-decomp's phase layout; every module is re-exported flat at the crate root,
//! unlace-bandb-base (which re-exports the bands below it) is re-exported too, and unlace-decomp
//! re-exports this crate, so `crate::<module>` paths read the same in every crate.
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
    crate::kuna_callresultuse::provide(slots);
    crate::kuna_stackparamviews::provide(slots);
    crate::kuna_stackviews::provide(slots);
    crate::kuna_voidret::provide(slots);
    crate::coreaction_infertypes::provide(slots);
    crate::kuna_armfloatargs::provide(slots);
    crate::kuna_armfloatreturn::provide(slots);
    crate::kuna_calleememory::provide(slots);
    crate::kuna_calleepreserves::provide(slots);
    crate::kuna_calleeretpreserves::provide(slots);
    crate::kuna_localstackviews::provide(slots);
    crate::kuna_pairrefine::provide(slots);
    crate::kuna_passthrough::provide(slots);
    crate::kuna_registerslots::provide(slots);
    crate::kuna_stackeffects::provide(slots);
    crate::kuna_leafmemory::provide(slots);
    crate::kuna_callmechanisms::provide(slots);
    crate::kuna_fputruncviews::provide(slots);
    crate::kuna_globalorder::provide(slots);
    crate::kuna_loadorder::provide(slots);
    crate::kuna_stackvalueorder::provide(slots);
    crate::kuna_qualifiedcall::provide(slots);
    crate::kuna_typedcallabi::provide(slots);
    crate::kuna_vfpvariadic::provide(slots);
    crate::kuna_stackstoreguard::provide(slots);
    crate::kuna_arrayextent::provide(slots);
    crate::kuna_x87emptyreturn::provide(slots);
    crate::kuna_bejoin::provide(slots);
    crate::kuna_callwide::provide(slots);
    crate::kuna_inputhints::provide(slots);
    crate::kuna_globalcallranges::provide(slots);
    crate::kuna_indexaliasguard::provide(slots);
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
