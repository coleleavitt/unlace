//! S4 -- Call & prototype model.
//!
//! Stage-aligned module group; declared flatly at the crate root via re-export in
//! `lib.rs` so public paths (`unlace_decomp::<module>`) are unchanged.

pub mod armpairparam; // (unlace) unprototyped 64-bit parameters in an aligned register pair
pub mod carryuse; // (unlace) the carry test of a returned sum is not a competing use
pub mod fspec;
pub mod retindexuse; // (unlace) a return value that also indexes a load
