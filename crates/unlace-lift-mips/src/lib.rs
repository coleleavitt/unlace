//! MIPS64 → IR lifter via capstone.

mod lift;
mod ops;
mod register_file;

pub use lift::MipsLifter;
