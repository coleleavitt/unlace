//! S4 -- Call & prototype model.
//!
//! Stage-aligned module group; declared flatly at the crate root via re-export in
//! `lib.rs` so public paths (`unlace_decomp::<module>`) are unchanged.

pub mod fspec;
pub mod kuna_armpairparam; // (kuna) unprototyped 64-bit parameters in an aligned register pair
pub mod kuna_retindexuse; // (kuna) a return value that also indexes a load
