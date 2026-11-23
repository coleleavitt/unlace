//! The decompiler's Band B, split out of unlace-decomp (crate-split step 9).
//!
//! It holds the passes that co-iterate inside `mainloop`: P3 (dataflow: SSA simplification and
//! the rule pools), P4 (the call and prototype model), P5 (type inference) and P6 (variables,
//! merge and stack layout). It builds on unlace-middle, unlace-lift and unlace-structure; the
//! passes above it reach it through the pass hooks and the flat module paths. The folders keep
//! unlace-decomp's phase layout; every module is re-exported flat at the crate root,
//! unlace-structure (which re-exports the bands below it) is re-exported too, and unlace-decomp
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
pub use unlace_structure::*;

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
