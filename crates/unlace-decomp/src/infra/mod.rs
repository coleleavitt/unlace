//! Infra -- Orchestration, scheduling & framework.
//!
//! Stage-aligned module group; declared flatly at the crate root via re-export in
//! `lib.rs` so public paths (`unlace_decomp::<module>`) are unchanged.

pub mod analyzesigs;
#[cfg(test)]
mod bandb_tests;
pub mod callgraph;
pub mod decompile_drive;
pub mod graph;
pub mod hooks;
pub mod libdecomp;
#[cfg(test)]
mod lift_tests;
#[cfg(test)]
mod middle_tests;
pub mod paramid;
pub mod signature;
pub mod universalaction;
