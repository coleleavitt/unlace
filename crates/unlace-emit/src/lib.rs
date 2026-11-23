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

/// This crate's unit tests link without the driver, so they define the driver's hook symbol
/// themselves, as a table of hooks that panic when called (`KunaHooks::unprovided`).
#[cfg(test)]
mod unprovided {
    #[unsafe(no_mangle)]
    fn __unlace_default_pass_hooks() -> &'static unlace_middle::kuna_passhooks::KunaHooks {
        static HOOKS: std::sync::OnceLock<unlace_middle::kuna_passhooks::KunaHooks> =
            std::sync::OnceLock::new();
        HOOKS.get_or_init(unlace_middle::kuna_passhooks::KunaHooks::unprovided)
    }
}
