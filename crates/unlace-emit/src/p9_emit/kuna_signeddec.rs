//! (kuna `signeddec`) A signed integer constant prints in decimal, as Hex-Rays'
//! `DEFAULT_RADIX 0` does ("decimal for signed, hex for unsigned").
//!
//! Ghidra chooses the base by `mostNaturalBase` (decimal up to 10, then whichever base has
//! more trailing zeros), so a signed bound prints `0x3b` and `1000` in one function. With the
//! option, a constant read as `int` whose magnitude is below 0x10000 prints in decimal unless a
//! bitwise op reads it (a mask or a shift count keeps the natural base) or a symbol or type
//! fixes its format.

use unlace_base::types::uintb;

use crate::context::OpId;
use crate::funcdata::Funcdata;
use unlace_num::opcodes::OpCode;

crate::kuna_flag!(
    /// (kuna `signeddec`) Print a small signed integer constant in decimal outside bitwise ops.
    SignedDec,
    "signeddec",
    "decimal signed constants",
    unset: false,
    shipped: false
);

/// Does the signed constant `val` of `sz` bytes that `op` reads print in decimal?
pub fn decimal(fd: &Funcdata, op: OpId, val: uintb, sz: i32) -> bool {
    let bits = u32::try_from(sz.clamp(1, 8)).unwrap_or(8) * 8;
    let signed = if bits >= 64 {
        val as i64
    } else {
        let shift = 64 - bits;
        ((val << shift) as i64) >> shift
    };
    if signed.unsigned_abs() >= 0x10000 {
        return false;
    }
    !fd.obank().get(op).is_some_and(|o| {
        matches!(
            o.code(),
            OpCode::CPUI_INT_AND
                | OpCode::CPUI_INT_OR
                | OpCode::CPUI_INT_XOR
                | OpCode::CPUI_INT_LEFT
                | OpCode::CPUI_INT_RIGHT
                | OpCode::CPUI_INT_SRIGHT
        )
    })
}
