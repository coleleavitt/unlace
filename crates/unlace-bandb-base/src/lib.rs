//! The base of Band B, split out of unlace-bandb (crate-split step 10).
//!
//! Band B (P3-P6) is one fixpoint, but only part of its module graph is cyclic: this crate holds
//! the modules the cyclic core (unlace-bandb-core) reads and the passes unrelated to it, all of
//! which form a DAG over the crates below. It keeps the phase folders of unlace-decomp; every
//! module is re-exported flat at the crate root, unlace-structure (which re-exports the bands
//! below it) is re-exported too, and the crates above re-export this one, so `crate::<module>`
//! paths read the same in every crate (`notes/crate-architecture.md`, step 10).
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
pub use unlace_structure::*;

/// The pass hooks this crate's own modules provide: each module's `provide`, in the driver's
/// order. The driver composes the crates' tables into the default pipeline's
/// (`unlace_decomp::PASS_HOOKS`); a crate's unit tests compose the crates at or below it.
pub fn provide_all(slots: &mut crate::kuna_passhooks::KunaHookSlots) {
    crate::kuna_calltransport::provide(slots);
    crate::funcdata_union::provide(slots);
    crate::kuna_exclusivearguse::provide(slots);
    crate::kuna_exclusivecallret::provide(slots);
    crate::kuna_multiregargs::provide(slots);
    crate::kuna_noreturnretuse::provide(slots);
    crate::kuna_sharedpush::provide(slots);
    crate::kuna_spillargtrial::provide(slots);
    crate::kuna_zeroidiomuse::provide(slots);
    crate::kuna_indirectanchor::provide(slots);
    crate::kuna_calleeprotostack::provide(slots);
    crate::kuna_inputtile::provide(slots);
    crate::kuna_msvcbyval::provide(slots);
    crate::kuna_splitstorekeep::provide(slots);
    crate::kuna_stackreadscope::provide(slots);
    crate::kuna_varargretreg::provide(slots);
    crate::kuna_haltloopguard::provide(slots);
    crate::kuna_memoryguard::provide(slots);
    crate::kuna_renamereads::provide(slots);
    crate::kuna_spillstoreguard::provide(slots);
    crate::kuna_wrapsplit::provide(slots);
    crate::kuna_dynamiclocals::provide(slots);
    crate::kuna_joincalloutput::provide(slots);
    crate::kuna_octeoneffects::provide(slots);
    crate::kuna_varargtransfer::provide(slots);
    crate::kuna_globalvalue::provide(slots);
    crate::kuna_pointeevalue::provide(slots);
    crate::kuna_tiedphitrim::provide(slots);
    crate::kuna_isolated::provide(slots);
    crate::kuna_stablenames::provide(slots);
    crate::kuna_guardedreadtrim::provide(slots);
    crate::kuna_protomerge::provide(slots);
    crate::kuna_spsolve::provide(slots);
    crate::kuna_stackparamalign::provide(slots);
    crate::kuna_vectorabi::provide(slots);
    crate::kuna_floatregister::provide(slots);
    crate::kuna_inputparamgap::provide(slots);
    crate::kuna_inputrefinement::provide(slots);
    crate::kuna_inputstorage::provide(slots);
    crate::kuna_narrowext::provide(slots);
    crate::kuna_nulterminator::provide(slots);
    crate::kuna_stackaddrargtrial::provide(slots);
    crate::kuna_stackarggap::provide(slots);
    crate::kuna_swifterror::provide(slots);
    crate::kuna_varargstackargs::provide(slots);
    crate::kuna_partialglobalload::provide(slots);
    crate::kuna_persistcalls::provide(slots);
    crate::kuna_prunedssa::provide(slots);
    crate::kuna_swiftcall::provide(slots);
    crate::kuna_dfunaffected::provide(slots);
    crate::kuna_x87intrinsic::provide(slots);
    crate::kuna_retpushedhalf::provide(slots);
    crate::kuna_customreturn::provide(slots);
    crate::kuna_varargsave::provide(slots);
    crate::kuna_arraysize::provide(slots);
    crate::kuna_condexeretuse::provide(slots);
    crate::kuna_calleepurge::provide(slots);
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
            super::provide_all(&mut slots);
            slots.finish_with_stubs()
        })
    }
}
