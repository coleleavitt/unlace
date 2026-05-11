//! SPARC v8/v9 → IR lifter (native decoder).
//!
//! SPARC instructions are 4-byte fixed-width big-endian. This crate decodes
//! the primary SPARC v8 integer instruction set and lifts to the unlace IR.
//!
//! Register file: g0-g7, o0-o7, l0-l7, i0-i7 (32 regs × 4 bytes for v8).
//! g0 is hardwired to zero.

mod decode;
mod lift;

pub use lift::SparcLifter;

#[cfg(test)]
mod tests;
