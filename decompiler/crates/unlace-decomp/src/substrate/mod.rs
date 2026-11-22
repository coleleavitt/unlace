//! Substrate -- shared IR, containers, and rewrite helpers used by every stage.
//!
//! Stage-aligned module group; declared flatly at the crate root via re-export in
//! `lib.rs` so public paths (`unlace_decomp::<module>`) are unchanged.

pub mod addtreestate;
pub mod block;
pub mod context;
pub mod dtype;
pub mod expression;
pub mod funcdata;
pub mod funcdata_block;
pub mod funcdata_encode;
pub mod funcdata_op;
pub mod funcdata_printraw;
pub mod funcdata_varnode;
pub(crate) mod kuna_budget;
pub(crate) mod kuna_checkedarena;
pub mod kuna_fnmemory;
pub mod kuna_hostmem;
pub mod op;
pub mod transform;
pub mod varnode;
