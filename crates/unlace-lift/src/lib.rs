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
