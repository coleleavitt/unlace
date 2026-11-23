//! S3 -- Definition web: SSA/heritage + the simplification rule pools.
//!
//! Stage-aligned module group; declared flatly at the crate root via re-export in
//! `lib.rs` so public paths (`unlace_decomp::<module>`) are unchanged.

pub mod coreaction_early;
#[cfg(test)]
mod kuna_globalarrayanchor_tests;
pub mod kuna_globalcallstore;
pub mod kuna_globalfieldstore;
pub mod kuna_globalorderkeep;
pub mod kuna_indexaliasguard;
#[cfg(test)]
mod kuna_indirectanchor_tests;
pub mod kuna_leafmemory;
pub mod kuna_narrowload; // (kuna) a narrow LOAD keeps its own width
pub mod kuna_opaquedomain;
pub mod kuna_opaqueglobals;
pub mod kuna_opaquepredicate;
pub mod kuna_pairrefine;
pub mod kuna_repframecopy;
pub mod kuna_stackbytecopy;
pub mod kuna_stackeffects;
#[cfg(test)]
mod kuna_storecopyeffects_tests;
pub mod ruleaction_3;
pub mod ruleaction_5;
pub mod ruleaction_6;
#[cfg(test)]
mod ruleaction_7_ptrflow_tests;
#[cfg(test)]
mod ruleaction_7_tests;
pub mod ruleaction_8;
