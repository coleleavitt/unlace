//! MIPS64 → IR lifter via capstone.

mod lift;
mod ops;
mod register_file;

pub use lift::{CALLOTHER_MIPS_BITSWAP, CALLOTHER_MIPS_DBITSWAP, MipsLifter};
