//! SPARC v8 → IR lifter (native decoder).
//!
//! SPARC instructions are 4-byte fixed-width big-endian. This crate decodes
//! the primary SPARC v8 integer instruction set and lifts to the unlace IR.
//!
//! Register file layout (register windows):
//!   - g0-g7: global registers (g0 is hardwired to zero)
//!   - o0-o7: output registers (o6 = stack pointer, o7 = return address)
//!   - l0-l7: local registers
//!   - i0-i7: input registers (i6 = frame pointer, i7 = return address)
//!
//! SAVE rotates the window so that the caller's outs become the callee's ins.
//! RESTORE reverses this operation.

mod decode;
pub mod lift;

pub use lift::SparcLifter;

#[cfg(test)]
mod tests;
