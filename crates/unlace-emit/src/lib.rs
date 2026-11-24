//! The decompiler's emit band, split out of unlace-decomp (crate-split step 9).
//!
//! It holds P9: the printers (`printc` and its per-language profiles), the output-language plane
//! (`kuna_lang` and the type spellers), the final casting and rendering actions and the report
//! surfaces built from the printed function. It builds on unlace-middle, unlace-lift,
//! unlace-structure and unlace-bandb; the driver reaches it through the pass hooks and the flat
//! module paths. The folder keeps unlace-decomp's phase layout; every module is re-exported flat at
//! the crate root, unlace-bandb (which re-exports the bands below it) is re-exported too, and
//! unlace-decomp re-exports this crate, so `crate::<module>` paths read the same in every crate.
//!
//! Lints are inherited from the workspace (`[lints] workspace = true`).

mod p9_emit;

pub use p9_emit::*;
#[doc(hidden)]
pub use unlace_bandb::*;
pub use unlace_ctree::{ctree, ctreebuild};

/// The pass hooks this crate's own modules provide: each module's `provide`, in the driver's
/// order. The driver composes the crates' tables into the default pipeline's
/// (`unlace_decomp::PASS_HOOKS`); a crate's unit tests compose the crates at or below it.
pub fn provide_all(slots: &mut crate::passhooks::KunaHookSlots) {
    crate::coreaction_casts::provide(slots);
    crate::bitcast::provide(slots);
    crate::printc::provide(slots);
    crate::lang::provide(slots);
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
            unlace_lift::provide_all(&mut slots);
            unlace_structure::provide_all(&mut slots);
            unlace_bandb_base::provide_all(&mut slots);
            unlace_bandb_core::provide_all(&mut slots);
            unlace_bandb::provide_all(&mut slots);
            super::provide_all(&mut slots);
            slots.finish_with_stubs()
        })
    }
}
