//! S6 -- Variable & storage model: HighVariables, merge, stack layout.
//!
//! Stage-aligned module group; declared flatly at the crate root via re-export in
//! `lib.rs` so public paths (`unlace_decomp::<module>`) are unchanged.

pub mod arrayextent;
pub mod callarrayextent;
pub mod calleepop;
pub mod calleepopframe;
pub mod calleepopslot;
pub mod coreaction_stackptr;
pub mod endptrbound;
pub mod funcdata_facing;
pub mod funcdata_spacebase;
pub mod localstackviews;
pub mod stackobjectalias;
pub mod stackobjectasserts;
pub mod stackobjects;
pub mod stackparamviews;
pub mod stackstruct;
pub mod stackuses;
pub mod stackvaluecopies;
pub mod stackvalueviews;
pub mod stackviews;
pub mod storereach;
