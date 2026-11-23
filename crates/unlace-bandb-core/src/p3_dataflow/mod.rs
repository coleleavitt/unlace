//! S3 -- Definition web: SSA/heritage + the simplification rule pools.
//!
//! Stage-aligned module group; declared flatly at the crate root via re-export in
//! `lib.rs` so public paths (`unlace_decomp::<module>`) are unchanged.

#[doc(hidden)]
pub mod kuna_calleeflags;
pub mod kuna_calleehomes;
pub mod kuna_calleememory;
pub mod kuna_globalarrayanchor;
pub mod kuna_globalcallranges;
pub mod kuna_regnarrow;
pub mod kuna_stackstoreguard;
pub mod ruleaction_1;
pub mod ruleaction_4;
pub mod subflow;
