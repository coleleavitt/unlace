//! S3 -- Definition web: SSA/heritage + the simplification rule pools.
//!
//! Stage-aligned module group; declared flatly at the crate root via re-export in
//! `lib.rs` so public paths (`unlace_decomp::<module>`) are unchanged.

#[doc(hidden)]
pub mod calleeflags;
pub mod calleehomes;
pub mod calleememory;
pub mod globalarrayanchor;
pub mod globalcallranges;
pub mod regnarrow;
pub mod ruleaction_1;
pub mod ruleaction_4;
pub mod stackstoreguard;
pub mod subflow;
