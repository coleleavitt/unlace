//! MIPS64 → IR lifter via capstone.

mod dsp;
mod lift;
mod ops;
mod register_file;

pub use lift::{CALLOTHER_MIPS_BITSWAP, CALLOTHER_MIPS_DBITSWAP, MipsLifter};
