//! S6 -- Variable & storage model: HighVariables, merge, stack layout.
//!
//! Stage-aligned module group; declared flatly at the crate root via re-export in
//! `lib.rs` so public paths (`unlace_decomp::<module>`) are unchanged.

pub mod calleesaved;
pub mod coalescecap;
pub mod merge;
pub mod phiarm;
pub mod typemerge;
pub mod varmap;
