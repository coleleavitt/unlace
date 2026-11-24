//! S2 -- Flow & op-graph recovery: lift, CFG, jump tables, p-code injection.
//!
//! Stage-aligned module group; declared flatly at the crate root via re-export in
//! `lib.rs` so public paths (`unlace_decomp::<module>`) are unchanged.

pub mod deflatten;
pub mod jumptable;
