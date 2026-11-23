//! S4 -- Call & prototype model.
//!
//! Stage-aligned module group; declared flatly at the crate root via re-export in
//! `lib.rs` so public paths (`unlace_decomp::<module>`) are unchanged.

pub mod fspec;
pub mod kuna_aggregateabi;
pub mod modelrules; // (kuna) a big-endian pair a call hands back to the RETURN untouched is one value
