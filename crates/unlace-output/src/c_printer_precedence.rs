//! c_printer: precedence.

use super::*;

// ---------------------------------------------------------------------------
// Operator precedence — IDA's scheme (lower = tighter)
// ---------------------------------------------------------------------------
//
// This mirrors Hex-Rays' off_4E0320 lookup table, ported via sub_25F3C0
// (`research/decompiled-references/hexrays/ida_dump/hexx64/all/sub_25F3C0.c`).  In IDA's scheme,
// a *lower* precedence value binds *tighter* — opposite of the textbook
// "higher binds tighter" convention.  We adopt IDA's numbering so the
// algorithm in `needs_parens` ports directly without sign flips.
//
// Levels:
//   0  — leaf (variable, constant, call, postfix, etc. — never parenthesized
//          by needs_parens; they handle their own grouping)
//   2  — unary prefix (!, ~, -)
//   3  — multiplicative (*, /, %)
//   4  — additive (+, -)
//   5  — shift (<<, >>)
//   6  — relational (<, <=, >, >=)
//   7  — equality (==, !=)
//   8  — bitwise AND (&)
//   9  — bitwise XOR (^)
//   10 — bitwise OR (|)
//   11 — logical AND (&&)
//   12 — logical OR (||)
//   13 — ternary ?:
//   14 — assignment

/// IDA-scheme precedence (lower = tighter).  Mirrors the off_4E0320 table.
pub(super) fn ida_precedence(op: IrOp) -> u8 {
    match op {
        // Unary prefix
        IrOp::IntNegate | IrOp::BoolNegate | IrOp::Int2comp | IrOp::FloatNeg => 2,

        // Multiplicative
        IrOp::IntMult
        | IrOp::FloatMult
        | IrOp::IntDiv
        | IrOp::IntSdiv
        | IrOp::FloatDiv
        | IrOp::IntRem
        | IrOp::IntSrem => 3,

        // Additive
        IrOp::IntAdd
        | IrOp::FloatAdd
        | IrOp::IntSub
        | IrOp::FloatSub
        | IrOp::Ptradd
        | IrOp::Ptrsub => 4,

        // Shifts
        IrOp::IntLeft | IrOp::IntRight | IrOp::IntSright => 5,

        // Relational
        IrOp::IntLess
        | IrOp::IntLessequal
        | IrOp::IntSless
        | IrOp::IntSlessequal
        | IrOp::FloatLess
        | IrOp::FloatLessequal => 6,

        // Equality
        IrOp::IntEqual | IrOp::IntNotequal | IrOp::FloatEqual | IrOp::FloatNotequal => 7,

        // Bitwise AND
        IrOp::IntAnd => 8,

        // Bitwise XOR
        IrOp::IntXor | IrOp::BoolXor => 9,

        // Bitwise OR
        IrOp::IntOr => 10,

        // Logical AND
        IrOp::BoolAnd => 11,

        // Logical OR
        IrOp::BoolOr => 12,

        // Ternary (conditional select)
        IrOp::Select => 13,

        // Calls, copies, loads — leaves
        _ => 0,
    }
}

/// Encode the IDA `cot_*` opcode number for an IrOp.  This is what
/// `needs_parens` switches on, mirroring the bitmasks in sub_25F3C0.
///
/// We map only the opcodes that the IDA algorithm tests against:
///   17 = cot_lor   (||)
///   18 = cot_land  (&&)
///   19 = cot_bor   (|)
///   20 = cot_xor   (^)
///   21 = cot_band  (&)
///   35 = cot_add   (+)
///   36 = cot_sub   (-)
///   37 = cot_mul   (*)
///   38 = cot_sdiv  (signed /)
///   39 = cot_udiv  (unsigned /)
///   40 = cot_smod  (signed %)
///   41 = cot_umod  (unsigned %)
///   42 = cot_fadd  (float +)  — treated as associative like add
///   47 = cot_bnot  (~)
///   56 = cot_call
///
/// Every opcode in the algorithm's "compare" / "shift" branches is identified
/// by precedence (not opcode), so they don't need an entry here.  Anything
/// that doesn't appear in sub_25F3C0's bitmasks returns 0.
pub(super) fn ida_opcode(op: IrOp) -> u8 {
    match op {
        IrOp::BoolOr => 17,
        IrOp::BoolAnd => 18,
        IrOp::IntOr => 19,
        IrOp::IntXor | IrOp::BoolXor => 20,
        IrOp::IntAnd => 21,
        IrOp::IntAdd | IrOp::Ptradd => 35,
        IrOp::IntSub | IrOp::Ptrsub => 36,
        IrOp::IntMult => 37,
        IrOp::IntSdiv => 38,
        IrOp::IntDiv => 39,
        IrOp::IntSrem => 40,
        IrOp::IntRem => 41,
        IrOp::FloatAdd => 42,
        IrOp::IntNegate => 47,
        IrOp::Call | IrOp::Callind => 56,
        _ => 0,
    }
}

/// Context describing a child expression's parent for parenthesization
/// decisions.  Mirrors the `a1` (this), `a2` (parent_op), `a3` (parent
/// expression node) arguments of IDA's sub_25F3C0.
#[derive(Clone, Copy, Debug, Default)]
pub(super) struct ParentCtx {
    /// Parent operator opcode (`None` = no parent / top-level expression).
    pub(super) parent_op: Option<IrOp>,
    /// True if the child is the right-hand operand of `parent_op`.
    /// (Mirrors `*(parent + 32) == this` in the IDA dump.)
    pub(super) child_is_right: bool,
}

impl ParentCtx {
    /// No parent — top-level expression.  Never parenthesizes.
    pub(super) const fn top() -> Self {
        Self {
            parent_op: None,
            child_is_right: false,
        }
    }

    /// Parent is `op`, child is the left operand.
    pub(super) const fn lhs_of(op: IrOp) -> Self {
        Self {
            parent_op: Some(op),
            child_is_right: false,
        }
    }

    /// Parent is `op`, child is the right operand.
    pub(super) const fn rhs_of(op: IrOp) -> Self {
        Self {
            parent_op: Some(op),
            child_is_right: true,
        }
    }
}

/// Decide whether the child expression `child_op` needs parentheses when
/// nested inside the context described by `parent`.
///
/// Direct port of Hex-Rays' `sub_25F3C0`
/// (`research/decompiled-references/hexrays/ida_dump/hexx64/all/sub_25F3C0.c`).  See the file
/// header for the level numbering convention.
pub(super) fn needs_parens(child_op: IrOp, parent: ParentCtx) -> bool {
    // No parent → never paren.
    let Some(parent_op) = parent.parent_op else {
        return false;
    };

    let child_prec = ida_precedence(child_op);
    let parent_prec = ida_precedence(parent_op);
    let child_opc = ida_opcode(child_op);
    let parent_opc = ida_opcode(parent_op);

    // `v7 = parent_prec`, `v8 = child_prec` in the IDA dump.
    // Default `result = 1` (paren), then refine.

    // Branch 1: parent_prec < child_prec (parent strictly tighter) → paren.
    if parent_prec < child_prec {
        return true;
    }

    // Branch 2: parent_prec > child_prec (parent strictly looser).  Almost
    // always safe to drop parens — except for the "mixed-precedence trap":
    // shift/relational/equality nested under bitwise/logical, where C's
    // precedence surprises most readers (e.g. `a & b == c` parses as
    // `a & (b == c)`).
    if parent_prec > child_prec {
        // GCC's -Wparentheses flags `a != b < c` even though C parses it as
        // `a != (b < c)`. Keep generated C warning-clean under the semantic
        // gate's -Werror while preserving the intended tree.
        if matches!(
            parent_op,
            IrOp::IntEqual | IrOp::IntNotequal | IrOp::FloatEqual | IrOp::FloatNotequal
        ) && matches!(
            child_op,
            IrOp::IntLess
                | IrOp::IntSless
                | IrOp::FloatLess
                | IrOp::IntLessequal
                | IrOp::IntSlessequal
                | IrOp::FloatLessequal
        ) {
            return true;
        }

        // child_prec ∈ [3, 7]  (== shift, relational, equality)
        // parent_prec == 5 (shift, the "v7 == 5" idiom for `a + b << c`)
        //              || parent_prec ∈ [8, 10] (band/xor/bor)
        let child_is_shift_or_compare = (3..=7).contains(&child_prec);
        let parent_is_band_or_higher = parent_prec == 5 || (8..=10).contains(&parent_prec);
        return child_is_shift_or_compare && parent_is_band_or_higher;
    }

    // Branch 3: parent_prec == child_prec.

    // Comparison level (relational or equality): ALWAYS paren — `a == b == c`
    // is legal C but almost never what the original source meant.
    if (6..=7).contains(&parent_prec) {
        return true;
    }

    // Now we dispatch on the *child opcode*.

    // 3a: child opcode > 0x2D (45).  Covers cot_bnot (47), postinc (53),
    // postdec (54).
    if child_opc > 0x2D {
        if child_opc == 47 {
            // ~x — paren only if parent is a call (postfix-style `(~x)()`).
            return parent_opc == 56;
        }
        if matches!(child_opc, 53 | 54) {
            // x++, x-- — paren only if parent is `&` (cot_ref = 51).
            // Unlace doesn't currently emit postinc/postdec from IR, so this
            // branch is dead but kept for parity with sub_25F3C0.
            return parent_opc == 51;
        }
        // Other > 0x2D opcodes (assignments, compounds): default fallthrough
        // handled below.
    } else if child_opc > 0x2B {
        // 3b: 0x2B < child_opc <= 0x2D — these are `cot_idx` (44) and
        // `cot_asg` (1)…  Actually opcodes 44-45.  Paren if right operand.
        // Unlace doesn't emit these either; preserved for fidelity.
        return parent.child_is_right;
    } else if (1..=42).contains(&child_opc) {
        // 3c: child is a binary op in the [cot_asg .. cot_fadd] range.
        let bit = 1u64 << child_opc;

        // Associative ops: never paren (left-assoc, same-level chain).
        //   1=asg, 17=lor, 18=land, 19=bor, 20=xor, 21=band, 35=add, 42=fadd
        const ASSOCIATIVE_MASK: u64 = 0x408003E0002;
        if bit & ASSOCIATIVE_MASK != 0 {
            return false;
        }

        // Right-associative trap: paren only if right operand.
        //   38=sdiv, 39=udiv, 40=smod, 41=umod
        const RIGHT_ASSOC_MASK: u64 = 0x3C000000000;
        if bit & RIGHT_ASSOC_MASK != 0 {
            return parent.child_is_right;
        }

        // cot_mul (37): flat-chain with another mul, else paren if right.
        if child_opc == 37 {
            if parent_opc == 37 {
                return false;
            }
            return parent.child_is_right;
        }

        // Fall through: cot_sub (36), cot_shl (33), cot_shr (34), and
        // anything else not specifically handled above — fall into default.
    }

    // 3d: Default branch — leaves (`child_prec <= 2`) never paren when same
    // precedence (the parent is also a unary, which can't happen in
    // practice — but the IDA code returns 0 here).  Otherwise paren only
    // when the child is the right operand.
    if child_prec <= 2 {
        return false;
    }
    parent.child_is_right
}

/// Return `true` if `op` is a binary operator that we emit via `emit_binop`.
#[allow(dead_code)]
pub(super) fn is_binop(op: IrOp) -> bool {
    matches!(
        op,
        IrOp::IntAdd
            | IrOp::FloatAdd
            | IrOp::IntSub
            | IrOp::FloatSub
            | IrOp::IntMult
            | IrOp::FloatMult
            | IrOp::IntDiv
            | IrOp::IntSdiv
            | IrOp::FloatDiv
            | IrOp::IntRem
            | IrOp::IntSrem
            | IrOp::IntAnd
            | IrOp::IntOr
            | IrOp::IntXor
            | IrOp::IntLeft
            | IrOp::IntRight
            | IrOp::IntSright
            | IrOp::BoolAnd
            | IrOp::BoolOr
            | IrOp::BoolXor
            | IrOp::IntEqual
            | IrOp::FloatEqual
            | IrOp::IntNotequal
            | IrOp::FloatNotequal
            | IrOp::IntLess
            | IrOp::IntSless
            | IrOp::FloatLess
            | IrOp::IntLessequal
            | IrOp::IntSlessequal
            | IrOp::FloatLessequal
            | IrOp::Ptradd
            | IrOp::Ptrsub
    )
}
