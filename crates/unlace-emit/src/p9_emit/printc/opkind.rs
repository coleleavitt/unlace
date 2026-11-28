//! The opcode-to-emit-kind dispatch (`op_emit_kind`).

use super::*;

// ===========================================================================
// Opcode -> token dispatch (printc.hh:289-351)
// ===========================================================================

/// How a `PcodeOp` is pushed onto the RPN stack by the `PrintC` `op*` override
/// (the C++ inline bodies in printc.hh:289-351).
///
/// This is the *data* half of those overrides: which [`OpToken`] and which RPN
/// form.  The *emission* (the actual `opBinary`/`opUnary`/`opFunc`/`opTypeCast`
/// call that pushes onto the stack and drives `Emit`) is the W9 stub.
#[derive(Debug, Clone, Copy)]
pub enum OpEmitKind {
    /// `opBinary(&token, op)` — a binary operator (printc.hh `opBinary` form).
    Binary(&'static OpToken),
    /// `opUnary(&token, op)` — a unary-prefix operator (printc.hh `opUnary` form).
    Unary(&'static OpToken),
    /// `opFunc(op)` — a functional `name(args)` form (printc.cc:444).
    Func,
    /// `opTypeCast(op)` — a type-cast form (printc.cc:468).
    TypeCast,
    /// The op has a hand-written override (`opLoad`/`opStore`/`opCall`/… and the
    /// no-op `opMultiequal`/`opIndirect`); not a simple table entry.
    Custom,
}

/// C++ `TypeOpSubpiece::computeByteOffsetForComposite(op)` (typeop.cc:2197): the
/// byte offset of the truncated piece into the assumed composite input, by
/// endianness.  `byteOff = isBigEndian ? (in0Size - outSize - lsb) : lsb`.
pub(super) fn subpiece_byte_offset_for_composite(fd: &Funcdata, op: OpId) -> int8 {
    let o = match fd.obank().get(op) {
        Some(o) => o,
        None => return 0,
    };
    let lsb = o
        .get_in(1)
        .and_then(|v| fd.vbank().get(v))
        .map(|v| v.get_offset() as int8)
        .unwrap_or(0);
    let in0 = match o.get_in(0) {
        Some(v) => v,
        None => return lsb,
    };
    let big_endian = fd
        .vbank()
        .get(in0)
        .map(|v| v.get_space().is_big_endian())
        .unwrap_or(false);
    if big_endian {
        let in0_size = fd.vbank().get(in0).map(|v| v.get_size()).unwrap_or(0) as int8;
        let out_size = o
            .get_out()
            .and_then(|v| fd.vbank().get(v))
            .map(|v| v.get_size())
            .unwrap_or(0) as int8;
        in0_size - out_size - lsb
    } else {
        lsb
    }
}

/// The token/form each `PcodeOp` maps to in the C++ `PrintC` inline `op*`
/// overrides (printc.hh:289-351).
///
/// Returns the [`OpEmitKind`] for the opcodes whose override is a one-line
/// `opBinary`/`opUnary`/`opFunc`/`opTypeCast` delegation; [`OpEmitKind::Custom`]
/// for the opcodes with a hand-written body in printc.cc (those are stub-noted).
/// This is the faithful dispatch table; the emission it feeds is the W9 stub.
pub fn op_emit_kind(opcode: unlace_num::opcodes::OpCode) -> OpEmitKind {
    use tokens::*;
    use unlace_num::opcodes::OpCode::*;
    match opcode {
        // Comparisons (printc.hh:289-294, 319-322).
        CPUI_INT_EQUAL => OpEmitKind::Binary(&EQUAL),
        CPUI_INT_NOTEQUAL => OpEmitKind::Binary(&NOT_EQUAL),
        CPUI_INT_SLESS => OpEmitKind::Binary(&LESS_THAN),
        CPUI_INT_SLESSEQUAL => OpEmitKind::Binary(&LESS_EQUAL),
        CPUI_INT_LESS => OpEmitKind::Binary(&LESS_THAN),
        CPUI_INT_LESSEQUAL => OpEmitKind::Binary(&LESS_EQUAL),
        CPUI_FLOAT_EQUAL => OpEmitKind::Binary(&EQUAL),
        CPUI_FLOAT_NOTEQUAL => OpEmitKind::Binary(&NOT_EQUAL),
        CPUI_FLOAT_LESS => OpEmitKind::Binary(&LESS_THAN),
        CPUI_FLOAT_LESSEQUAL => OpEmitKind::Binary(&LESS_EQUAL),
        // Integer arithmetic (printc.hh:297-313).
        CPUI_INT_ADD => OpEmitKind::Binary(&BINARY_PLUS),
        CPUI_INT_SUB => OpEmitKind::Binary(&BINARY_MINUS),
        CPUI_INT_XOR => OpEmitKind::Binary(&BITWISE_XOR),
        CPUI_INT_AND => OpEmitKind::Binary(&BITWISE_AND),
        CPUI_INT_OR => OpEmitKind::Binary(&BITWISE_OR),
        CPUI_INT_LEFT => OpEmitKind::Binary(&SHIFT_LEFT),
        CPUI_INT_RIGHT => OpEmitKind::Binary(&SHIFT_RIGHT),
        CPUI_INT_SRIGHT => OpEmitKind::Binary(&SHIFT_SRIGHT),
        CPUI_INT_MULT => OpEmitKind::Binary(&MULTIPLY),
        CPUI_INT_DIV => OpEmitKind::Binary(&DIVIDE),
        CPUI_INT_SDIV => OpEmitKind::Binary(&DIVIDE),
        CPUI_INT_REM => OpEmitKind::Binary(&MODULO),
        CPUI_INT_SREM => OpEmitKind::Binary(&MODULO),
        // Integer unary (printc.hh:302-303).
        CPUI_INT_2COMP => OpEmitKind::Unary(&UNARY_MINUS),
        CPUI_INT_NEGATE => OpEmitKind::Unary(&BITWISE_NOT),
        // Integer functional (printc.hh:299-301).
        CPUI_INT_CARRY => OpEmitKind::Func,
        CPUI_INT_SCARRY => OpEmitKind::Func,
        CPUI_INT_SBORROW => OpEmitKind::Func,
        // Boolean (printc.hh:316-318).
        CPUI_BOOL_XOR => OpEmitKind::Binary(&BOOLEAN_XOR),
        CPUI_BOOL_AND => OpEmitKind::Binary(&BOOLEAN_AND),
        CPUI_BOOL_OR => OpEmitKind::Binary(&BOOLEAN_OR),
        // Float arithmetic (printc.hh:324-336).
        CPUI_FLOAT_ADD => OpEmitKind::Binary(&FLOAT_PLUS),
        CPUI_FLOAT_DIV => OpEmitKind::Binary(&DIVIDE),
        CPUI_FLOAT_MULT => OpEmitKind::Binary(&FLOAT_MULTIPLY),
        CPUI_FLOAT_SUB => OpEmitKind::Binary(&BINARY_MINUS),
        CPUI_FLOAT_NEG => OpEmitKind::Unary(&UNARY_MINUS),
        CPUI_FLOAT_NAN => OpEmitKind::Func,
        CPUI_FLOAT_ABS => OpEmitKind::Func,
        CPUI_FLOAT_SQRT => OpEmitKind::Func,
        CPUI_FLOAT_CEIL => OpEmitKind::Func,
        CPUI_FLOAT_FLOOR => OpEmitKind::Func,
        CPUI_FLOAT_ROUND => OpEmitKind::Func,
        CPUI_FLOAT_FLOAT2FLOAT => OpEmitKind::TypeCast,
        CPUI_FLOAT_TRUNC => OpEmitKind::TypeCast,
        // Cast (printc.hh:341).
        CPUI_CAST => OpEmitKind::TypeCast,
        // Misc functional (printc.hh:339, 350-351).
        CPUI_PIECE => OpEmitKind::Func,
        CPUI_POPCOUNT => OpEmitKind::Func,
        CPUI_LZCOUNT => OpEmitKind::Func,
        // Everything else has a hand-written override (printc.cc) or is a no-op
        // (opMultiequal/opIndirect, printc.hh:337-338).
        _ => OpEmitKind::Custom,
    }
}
