//! S3 -- Definition web: SSA/heritage + the simplification rule pools.
//!
//! Stage-aligned module group; declared flatly at the crate root via re-export in
//! `lib.rs` so public paths (`unlace_decomp::<module>`) are unchanged.

pub mod heritage;
pub mod kuna_calloverlap;
pub mod kuna_loadguardreads;
pub mod kuna_revisitrefine;
pub mod kuna_segmentize;
