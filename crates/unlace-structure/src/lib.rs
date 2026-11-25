//! The decompiler's structure band, split out of unlace-decomp (crate-split step 9).
//!
//! It holds P7 (region recovery over the block graph) and P8 (control-flow structuring: the
//! collapse rules, the region structurer, goto reduction and the unlace structuring passes). It
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

/// The pass hooks this crate's own modules provide: each module's `provide`, in the driver's
/// order. The driver composes the crates' tables into the default pipeline's
/// (`unlace_decomp::PASS_HOOKS`); a crate's unit tests compose the crates at or below it.
pub fn provide_all(slots: &mut crate::passhooks::UnlaceHookSlots) {
    crate::clonephiorder::provide(slots);
    crate::orchain::provide(slots);
    crate::retsplitglobal::provide(slots);
    crate::retsplitlimit::provide(slots);
    crate::rettriangle::provide(slots);
}

/// This crate's unit tests link without the driver, so they define the driver's hook symbol
/// themselves: the hooks of this crate and the crates below it, and a stub that panics, naming
/// itself, for each hook a higher crate provides (`UnlaceHookSlots::finish_with_stubs`).
#[cfg(test)]
mod unprovided;
