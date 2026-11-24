//! S4 -- Call & prototype model.
//!
//! Stage-aligned module group; declared flatly at the crate root via re-export in
//! `lib.rs` so public paths (`unlace_decomp::<module>`) are unchanged.

pub mod armpairparam; // (kuna) unprototyped 64-bit parameters in an aligned register pair
pub mod carryuse; // (kuna) the carry test of a returned sum is not a competing use
pub mod fspec;
pub mod retindexuse; // (kuna) a return value that also indexes a load
