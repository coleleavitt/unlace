//! Spec -- behaviour a processor or compiler spec declares: `<modelrule>` parameter
//! assignment and aggregate classification, `<prefersplit>` register splits, and the
//! `<segmentop>` segmented-addressing model.
//!
//! Stage-aligned module group; declared flatly at the crate root via re-export in
//! `lib.rs` so public paths (`unlace_decomp::<module>`) are unchanged.

pub mod aggregateabi;
pub mod modelrules;
pub mod prefersplit;
pub mod segmentize;
