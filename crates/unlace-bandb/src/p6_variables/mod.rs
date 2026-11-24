//! S6 -- Variable & storage model: HighVariables, merge, stack layout.
//!
//! Stage-aligned module group; declared flatly at the crate root via re-export in
//! `lib.rs` so public paths (`unlace_decomp::<module>`) are unchanged.

pub mod coreaction_cleanup;
pub mod fputruncviews;
pub mod globalorder;
pub mod loadorder;
pub mod savedregisterspills;
pub mod stackalias;
pub mod stackloadcover;
pub mod stackvalueorder;

#[cfg(test)]
mod calltransport_tests;
#[cfg(test)]
mod nulterminator_tests;
#[cfg(test)]
mod registerepochs_tests;
