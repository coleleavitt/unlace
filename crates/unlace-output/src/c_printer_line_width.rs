//! c_printer: line width.

use super::*;

// ---------------------------------------------------------------------------
// Expression-width pre-measurement (port of IDA `sub_262260`)
// ---------------------------------------------------------------------------

/// Estimate the rendered column width of an SSA expression *without*
/// emitting it.
///
/// IDA's `sub_262260` is consulted by `sub_267EB0` (the line-break
/// decider) to decide whether a sub-expression fits the remaining row
/// before committing to a one-line rendering. Unlace's printer doesn't
/// have a single-pass width oracle, so this helper walks the IR
/// recursively and approximates the post-emit length. The walker is
/// read-only (`&PrintCtx`) so it can be called mid-emit without
/// disturbing the fresh-name allocator.
///
/// Coverage:
/// * **Constants** — width of `format_constant` for the input's value/size.
/// * **Variables** — looks up the operand's recorded name (DWARF /
///   coalesced / cached `vN`); falls back to `"vN"` ≈ 3 columns.
/// * **Binary ops** — `lhs + " op " + rhs`; +2 if a parenthesisation rule
///   would wrap the side (precedence-blind, conservative).
/// * **Unary ops** — `op + child`; +2 if the child is itself binary.
/// * **Calls** — `name + "(" + sum(args) + (n-1)*2 + ")"` (commas + spaces).
/// * **Loads** — `*(<addr>)` ⇒ `addr + 3`.
/// * **Casts** (`IntZext` / `IntSext` / `FloatFloat2int` family) —
///   `"(<type>)" + child`; the type prefix is approximated as 8 columns.
pub(super) fn measure_expr_width(insn: &IrInsn, stmt_idx: u32, ctx: &PrintCtx) -> usize {
    fn measure_operand(vn: &Varnode, stmt_idx: u32, ctx: &PrintCtx) -> usize {
        if vn.space == SpaceId::Const {
            return format_constant_ctx(vn.offset, vn.size, ConstContext::Signed).len();
        }
        if let Some(name) = ctx.base_names.get(vn) {
            return name.len();
        }
        if let Some(name) = ctx.name_overrides.get(vn) {
            return name.len();
        }
        if let Some(inputs) = ctx.stmt_inputs.get(&stmt_idx)
            && let Some(sv) = inputs.iter().find(|sv| sv.base == *vn)
        {
            if let Some(name) = ctx.var_names.get(sv) {
                return name.len();
            }
            if let Some(name) = ctx.merged_names.get(sv) {
                return name.len();
            }
        }
        // Default `vN` placeholder width — three chars covers v1..v99,
        // four for v100+; pick the larger as a small safety margin.
        4
    }

    fn measure_inputs(insn: &IrInsn, stmt_idx: u32, ctx: &PrintCtx) -> Vec<usize> {
        insn.inputs
            .iter()
            .map(|vn| measure_operand(vn, stmt_idx, ctx))
            .collect()
    }

    match insn.op {
        // Binary ops: `lhs OP rhs` plus surrounding spaces; +2 if
        // a conservative wrap rule applies (we don't have full
        // precedence context here, so assume no extra parens).
        IrOp::IntAdd
        | IrOp::IntSub
        | IrOp::IntMult
        | IrOp::IntDiv
        | IrOp::IntSdiv
        | IrOp::IntRem
        | IrOp::IntSrem
        | IrOp::IntAnd
        | IrOp::IntOr
        | IrOp::IntXor
        | IrOp::IntLeft
        | IrOp::IntRight
        | IrOp::IntSright
        | IrOp::IntEqual
        | IrOp::IntNotequal
        | IrOp::IntLess
        | IrOp::IntSless
        | IrOp::IntLessequal
        | IrOp::IntSlessequal
        | IrOp::BoolAnd
        | IrOp::BoolOr
        | IrOp::BoolXor
        | IrOp::FloatAdd
        | IrOp::FloatSub
        | IrOp::FloatMult
        | IrOp::FloatDiv
        | IrOp::FloatEqual
        | IrOp::FloatNotequal
        | IrOp::FloatLess
        | IrOp::FloatLessequal => {
            let widths = measure_inputs(insn, stmt_idx, ctx);
            let lhs = widths.first().copied().unwrap_or(0);
            let rhs = widths.get(1).copied().unwrap_or(0);
            // op token is 1..3 columns ('+', '<<', '<=', '&&', etc.).
            // Use 2 as a stable average; wraps don't depend on the
            // exact byte length of the operator.
            let op_token = 2;
            lhs + 1 + op_token + 1 + rhs
        }

        // Unary ops: `op + child`. Operator is one column ('-', '~', '!').
        IrOp::IntNegate | IrOp::Int2comp | IrOp::BoolNegate | IrOp::FloatNeg | IrOp::FloatAbs => {
            let widths = measure_inputs(insn, stmt_idx, ctx);
            let child = widths.first().copied().unwrap_or(0);
            1 + child
        }

        // Casts: `(<type>)<child>`. Type-string width is approximated
        // as 8 columns (`unsigned`, `__int64`, etc. cluster around 6-9).
        IrOp::IntZext
        | IrOp::IntSext
        | IrOp::FloatInt2float
        | IrOp::FloatFloat2float
        | IrOp::FloatFloat2int => {
            let widths = measure_inputs(insn, stmt_idx, ctx);
            let child = widths.first().copied().unwrap_or(0);
            8 + child
        }

        // Loads: `*(<addr>)` — 3 fixed columns plus the address operand.
        IrOp::Load => {
            let widths = measure_inputs(insn, stmt_idx, ctx);
            let addr = if widths.len() >= 2 {
                widths[1]
            } else {
                widths.first().copied().unwrap_or(0)
            };
            3 + addr
        }

        // Calls: `<name>(<args, comma-separated>)`. Inputs[0] is the
        // call target (name or const-address); inputs[1..] are args.
        IrOp::Call | IrOp::Callind | IrOp::Callother => {
            let widths = measure_inputs(insn, stmt_idx, ctx);
            let name = widths.first().copied().unwrap_or(0);
            let args: usize = widths.iter().skip(1).sum();
            let arg_count = widths.len().saturating_sub(1);
            let separators = arg_count.saturating_sub(1) * 2;
            name + 1 + args + separators + 1
        }

        // Copy: a transparent rename, width is the operand alone.
        IrOp::Copy => {
            let widths = measure_inputs(insn, stmt_idx, ctx);
            widths.first().copied().unwrap_or(0)
        }

        // Catch-all: emit an approximate width based on operand sum
        // plus a small overhead for the opcode glue.
        _ => {
            let widths = measure_inputs(insn, stmt_idx, ctx);
            widths.iter().sum::<usize>() + 4
        }
    }
}

// ---------------------------------------------------------------------------
// Line-break pre-decision (port of IDA `sub_267EB0`)
// ---------------------------------------------------------------------------

/// Decide whether the printer should emit a soft break *before* `insn`.
///
/// IDA's `sub_267EB0` walks the citree before committing each
/// sub-expression to one line. The rules below mirror the exact branch
/// order in that 69-line function and are paired with
/// [`measure_expr_width`] as the width oracle:
///
/// 1. **Same-operator chain** — if the parent and child share the same
///    binary op (`a + b + c`), never break: chained associative
///    operators read better packed together.
/// 2. **Operator family** — bitwise and/xor go together
///    (`{IntXor, IntAnd}`), additive ops go together
///    (`{IntAdd, IntSub, FloatAdd, FloatSub}`), and multiplicative
///    ops go together (`{IntMult, IntS?div, IntS?rem, FloatMult,
///    FloatDiv}`). Two ops in the same family don't break.
/// 3. **Hard floor** — if `available_cols < 20` we always break: there
///    isn't room for a meaningful sub-expression here.
/// 4. **Width oracle** — measure the child's width via
///    [`measure_expr_width`]; break iff it exceeds `available_cols`.
/// 5. **Default** — fits, no break.
#[allow(dead_code)]
pub(super) fn should_break_before(
    insn: &IrInsn,
    parent_op: Option<IrOp>,
    available_cols: usize,
    ctx: &PrintCtx,
) -> bool {
    fn family(op: IrOp) -> Option<u8> {
        match op {
            IrOp::IntXor | IrOp::IntAnd => Some(0),
            IrOp::IntAdd | IrOp::IntSub | IrOp::FloatAdd | IrOp::FloatSub => Some(1),
            IrOp::IntMult
            | IrOp::IntSdiv
            | IrOp::IntDiv
            | IrOp::IntSrem
            | IrOp::IntRem
            | IrOp::FloatMult
            | IrOp::FloatDiv => Some(2),
            _ => None,
        }
    }

    if let Some(p) = parent_op {
        if p == insn.op {
            return false;
        }
        if let (Some(fp), Some(fc)) = (family(p), family(insn.op))
            && fp == fc
        {
            return false;
        }
    }

    if available_cols < 20 {
        return true;
    }

    measure_expr_width(insn, 0, ctx) > available_cols
}
