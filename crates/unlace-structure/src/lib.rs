//! The decompiler's structure band, split out of unlace-decomp (crate-split step 9).
//!
//! It holds P7 (region recovery over the block graph) and P8 (control-flow structuring: the
//! collapse rules, the region structurer, goto reduction and the kuna structuring passes). It
//! builds on unlace-middle and unlace-lift; the passes above it reach it through the pass hooks
//! and the flat module paths. The folders keep unlace-decomp's phase layout; every module is
//! re-exported flat at the crate root, unlace-lift (which re-exports unlace-middle) is re-exported too, and unlace-decomp
//! re-exports this crate, so `crate::<module>` paths read the same in every crate.
//!
//! Lints are inherited from the workspace (`[lints] workspace = true`).

mod p7_regions;
mod p8_structure;

pub use p7_regions::*;
pub use p8_structure::*;
#[doc(hidden)]
pub use unlace_lift::*;

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
