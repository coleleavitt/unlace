//! (unlace `charnum`) A `char` constant that is zero or not printable prints as a number where
//! it is ordered against a value or takes part in arithmetic.
//!
//! `PrintC::pushCharConstant` spells every constant of a character type as a quoted literal, so a
//! signed byte test prints `'\\0' <= c` and a step prints `c + '\\x01'`; Hex-Rays prints
//! `c >= 0` and `c + 1` (decimal for signed, hex for unsigned). A printable character keeps its
//! literal everywhere, and so does any constant an equality, a store, a copy or a call argument
//! reads, except a non-printable one in an equality (`c == '\\x03'` prints `c == 3`).

use unlace_base::types::uintb;

use crate::context::OpId;
use crate::funcdata::Funcdata;
use unlace_num::opcodes::OpCode;

crate::unlace_flag!(
    /// (unlace `charnum`) Print a zero or non-printable `char` constant as a number in an ordered
    /// comparison, in arithmetic, and (when not zero) in an equality.
    CharNum,
    "charnum",
    "numeric non-printable char constants in comparisons and arithmetic",
    unset: false,
    shipped: false
);

/// Does the one-byte character constant `val` that `op` reads print as a number?
pub fn as_number(fd: &Funcdata, op: OpId, val: uintb) -> bool {
    let printable = (0x20..0x7f).contains(&val);
    if printable {
        return false;
    }
    let Some(code) = fd.obank().get(op).map(|o| o.code()) else {
        return false;
    };
    match code {
        OpCode::CPUI_INT_LESS
        | OpCode::CPUI_INT_LESSEQUAL
        | OpCode::CPUI_INT_SLESS
        | OpCode::CPUI_INT_SLESSEQUAL
        | OpCode::CPUI_INT_ADD
        | OpCode::CPUI_INT_SUB
        | OpCode::CPUI_INT_MULT
        | OpCode::CPUI_INT_DIV
        | OpCode::CPUI_INT_SDIV
        | OpCode::CPUI_INT_REM
        | OpCode::CPUI_INT_SREM
        | OpCode::CPUI_INT_AND
        | OpCode::CPUI_INT_OR
        | OpCode::CPUI_INT_XOR => true,
        OpCode::CPUI_INT_EQUAL | OpCode::CPUI_INT_NOTEQUAL => val != 0,
        _ => false,
    }
}

#[cfg(test)]
mod tests {
    #[test]
    fn printable_range() {
        assert!((0x20..0x7f).contains(&0x41u64));
        assert!(!(0x20..0x7f).contains(&0u64));
        assert!(!(0x20..0x7f).contains(&0x7fu64));
    }
}
