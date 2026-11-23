//! S6 -- Variable & storage model: HighVariables, merge, stack layout.
//!
//! Stage-aligned module group; declared flatly at the crate root via re-export in
//! `lib.rs` so public paths (`unlace_decomp::<module>`) are unchanged.

pub mod coreaction_cleanup;
pub mod kuna_fputruncviews;
pub mod kuna_globalorder;
pub mod kuna_loadorder;
pub mod kuna_savedregisterspills;
pub mod kuna_stackalias;
pub mod kuna_stackloadcover;
pub mod kuna_stackvalueorder;

#[cfg(test)]
mod kuna_calltransport_tests;
#[cfg(test)]
mod kuna_nulterminator_tests;
#[cfg(test)]
mod kuna_registerepochs_tests;
