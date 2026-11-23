//! S6 -- Variable & storage model: HighVariables, merge, stack layout.
//!
//! Stage-aligned module group; declared flatly at the crate root via re-export in
//! `lib.rs` so public paths (`unlace_decomp::<module>`) are unchanged.

pub mod coreaction_cleanup;
pub mod coreaction_stackptr;
pub mod funcdata_facing;
pub mod funcdata_spacebase;
pub mod kuna_arrayextent;
pub mod kuna_calleepop;
pub mod kuna_calleepopframe;
pub mod kuna_calleepopslot;
pub mod kuna_endptrbound;
pub mod kuna_fputruncviews;
pub mod kuna_globalorder;
pub mod kuna_loadorder;
pub mod kuna_localstackviews;
pub mod kuna_savedregisterspills;
pub mod kuna_stackalias;
pub mod kuna_stackloadcover;
pub mod kuna_stackobjectalias;
pub mod kuna_stackobjectasserts;
pub mod kuna_stackobjects;
pub mod kuna_stackparamviews;
pub mod kuna_stackuses;
pub mod kuna_stackvaluecopies;
pub mod kuna_stackvalueorder;
pub mod kuna_stackvalueviews;
pub mod kuna_stackviews;
pub mod kuna_storereach;

pub mod kuna_callarrayextent;
#[cfg(test)]
mod kuna_calltransport_tests;
#[cfg(test)]
mod kuna_nulterminator_tests;
#[cfg(test)]
mod kuna_registerepochs_tests;
pub mod kuna_stackstruct;
