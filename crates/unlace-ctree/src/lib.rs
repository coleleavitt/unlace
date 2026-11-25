//! The decompiler's C syntax tree (`docs/architecture/ctree.md`).
//!
//! The statement tree of one printed function, built from the final structured block tree after
//! structuring (P8) and read by the printer (P9). It builds on unlace-middle only; unlace-emit
//! depends on it. unlace-middle is re-exported flat at the crate root, so `crate::<module>` paths
//! read the same here as in the other bands.
//!
//! Lints are inherited from the workspace (`[lints] workspace = true`).

pub mod ctree;
pub mod ctreebuild;

#[doc(hidden)]
pub use unlace_middle::*;

/// This crate's unit tests link without the driver, so they define the driver's hook symbol
/// themselves: the hooks of the crates below it, and a stub that panics, naming itself, for
/// each hook a higher crate provides (`UnlaceHookSlots::finish_with_stubs`).
#[cfg(test)]
mod unprovided;
