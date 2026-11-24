//! S3 -- Definition web: SSA/heritage + the simplification rule pools.
//!
//! Stage-aligned module group; declared flatly at the crate root via re-export in
//! `lib.rs` so public paths (`unlace_decomp::<module>`) are unchanged.

pub mod coreaction_early;
#[cfg(test)]
mod globalarrayanchor_tests;
pub mod globalcallstore;
pub mod globalfieldstore;
pub mod globalorderkeep;
pub mod indexaliasguard;
#[cfg(test)]
mod indirectanchor_tests;
pub mod leafmemory;
pub mod narrowload; // (unlace) a narrow LOAD keeps its own width
pub mod opaquedomain;
pub mod opaqueglobals;
pub mod opaqueoffset;
pub mod opaquepredicate;
pub mod pairrefine;
pub mod repframecopy;
pub mod ruleaction_3;
pub mod ruleaction_5;
pub mod ruleaction_6;
#[cfg(test)]
mod ruleaction_7_ptrflow_tests;
#[cfg(test)]
mod ruleaction_7_tests;
pub mod ruleaction_8;
pub mod stackbytecopy;
pub mod stackeffects;
#[cfg(test)]
mod storecopyeffects_tests;
