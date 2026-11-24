//! The decompiler's Band B, split out of unlace-decomp (crate-split step 9).
//!
//! It holds the passes that co-iterate inside `mainloop`: P3 (dataflow: SSA simplification and
//! the rule pools), P4 (the call and prototype model), P5 (type inference) and P6 (variables,
//! merge and stack layout). It holds the passes above the fixpoint's cyclic core (unlace-bandb-core) and builds on it and
//! on unlace-bandb-base (the modules below or beside the core, step 10); the
//! passes above it reach it through the pass hooks and the flat module paths. The folders keep
//! unlace-decomp's phase layout; every module is re-exported flat at the crate root,
//! unlace-bandb-core (which re-exports the bands below it) is re-exported too, and unlace-decomp
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
pub use unlace_bandb_core::*;

/// The pass hooks this crate's own modules provide: each module's `provide`, in the driver's
/// order. The driver composes the crates' tables into the default pipeline's
/// (`unlace_decomp::PASS_HOOKS`); a crate's unit tests compose the crates at or below it.
pub fn provide_all(slots: &mut crate::passhooks::UnlaceHookSlots) {
    crate::callresultuse::provide(slots);
    crate::calleepreserves::provide(slots);
    crate::calleeretpreserves::provide(slots);
    crate::pairrefine::provide(slots);
    crate::registerslots::provide(slots);
    crate::stackeffects::provide(slots);
    crate::leafmemory::provide(slots);
    crate::callmechanisms::provide(slots);
    crate::fputruncviews::provide(slots);
    crate::globalorder::provide(slots);
    crate::loadorder::provide(slots);
    crate::stackvalueorder::provide(slots);
    crate::qualifiedcall::provide(slots);
    crate::x87emptyreturn::provide(slots);
    crate::indexaliasguard::provide(slots);
}

/// This crate's unit tests link without the driver, so they define the driver's hook symbol
/// themselves: the hooks of this crate and the crates below it, and a stub that panics, naming
/// itself, for each hook a higher crate provides (`UnlaceHookSlots::finish_with_stubs`).
#[cfg(test)]
mod unprovided {
    use unlace_middle::passhooks::{UnlaceHookSlots, UnlaceHooks};

    #[unsafe(no_mangle)]
    fn __unlace_default_pass_hooks() -> &'static UnlaceHooks {
        static HOOKS: std::sync::OnceLock<UnlaceHooks> = std::sync::OnceLock::new();
        HOOKS.get_or_init(|| {
            let mut slots = UnlaceHookSlots::default();
            unlace_middle::provide_all(&mut slots);
            unlace_lift::provide_all(&mut slots);
            unlace_structure::provide_all(&mut slots);
            unlace_bandb_base::provide_all(&mut slots);
            unlace_bandb_core::provide_all(&mut slots);
            super::provide_all(&mut slots);
            slots.finish_with_stubs()
        })
    }
}
