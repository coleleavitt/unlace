//! c_printer: macros.

use super::*;

// ---------------------------------------------------------------------------
// `cot_sizeof` / `cot_alignof` formatters
//
// These are reachable today only via direct callers (they have no IR
// producer); see the cot-coverage audit at the top of this file. Centralizing
// the syntax here means that when a future HIR `Sizeof(...)` / `Alignof(...)`
// node lands, the printer wiring is already in place and matches IDA's
// surface form.
// ---------------------------------------------------------------------------

/// Emit `sizeof(<type>)` for a type-as-argument form (IDA's `cot_sizeof`
/// applied to a `cot_type`). The caller is responsible for already having
/// formatted `type_str` as a valid C type-name (e.g. `"int *"`).
///
/// Currently has no in-tree caller; the helper exists so that when a HIR
/// `Sizeof(Type)` node lands, the printer wiring is one call away.
#[allow(dead_code)]
pub(crate) fn emit_sizeof_type(type_str: &str) -> String {
    format!("sizeof({})", type_str)
}

/// Emit `sizeof(<expr>)` for an expression argument (IDA's `cot_sizeof`
/// applied to any non-`cot_type`).
#[allow(dead_code)]
pub(crate) fn emit_sizeof_expr(expr: &str) -> String {
    format!("sizeof({})", expr)
}

/// Emit `_Alignof(<type>)` per C11 (IDA's `cot_alignof`). We use the C11
/// keyword rather than the GCC `__alignof` extension because it's portable
/// and matches how IDA renders `cot_alignof` in modern profiles.
#[allow(dead_code)]
pub(crate) fn emit_alignof_type(type_str: &str) -> String {
    format!("_Alignof({})", type_str)
}

/// t255: Recognize IDA-style byte/word truncation masks at the IntAnd emit
/// site.
///
/// Patterns matched (LHS is the IntAnd insn we're emitting):
///   * `x & 0xFF`   → `LOBYTE(x)`
///   * `x & 0xFFFF` → `LOWORD(x)`
///
/// The constant must live on the right (canonical IR form). Returns `None`
/// if the mask is unrecognized so the caller can fall back to plain `&`.
pub(super) fn try_emit_int_and_byte_macro(
    insn: &IrInsn,
    stmt_idx: u32,
    ctx: &mut PrintCtx,
) -> Option<String> {
    if insn.inputs.len() < 2 {
        return None;
    }
    let mask_vn = &insn.inputs[1];
    if mask_vn.space != SpaceId::Const {
        return None;
    }
    let src = emit_operand_resolved(&insn.inputs[0], 0, stmt_idx, ctx);
    match mask_vn.offset {
        0xFF => Some(format!("LOBYTE({})", src)),
        0xFFFF => Some(format!("LOWORD({})", src)),
        _ => None,
    }
}

/// t255: Recognize IDA-style byte-extract patterns at the IntRight emit site.
///
/// Patterns (RHS shift amount is a constant; LHS may itself be an IntAnd
/// against a single-byte mask):
///   * `(x & 0xFF00)    >> 8`  → `BYTE1(x)`
///   * `(x & 0xFF0000)  >> 16` → `BYTE2(x)`
///   * `(x & 0xFF000000)>> 24` → `BYTE3(x)`
///   * `x >> 16` (output size 4) → `HIWORD(x)`
///   * `x >> 32` (output size 8) → `HIDWORD(x)`
///
/// Walks one step back via `sv_defining_stmt` to inspect the LHS producer
/// for the chained `(x & mask) >> N` form.
pub(super) fn try_emit_int_right_byte_macro(
    insn: &IrInsn,
    stmt_idx: u32,
    ctx: &mut PrintCtx,
) -> Option<String> {
    if insn.inputs.len() < 2 {
        return None;
    }
    let shift_vn = &insn.inputs[1];
    if shift_vn.space != SpaceId::Const {
        return None;
    }
    let shift = shift_vn.offset;

    // Try the chained `(x & mask) >> N` form first.
    let lhs_vn = &insn.inputs[0];
    if lhs_vn.space != SpaceId::Const {
        // Look up the producer of the LHS through SSA.
        let lhs_sv = ctx
            .stmt_inputs
            .get(&stmt_idx)
            .and_then(|svs| svs.iter().find(|s| s.base == *lhs_vn).copied());
        if let Some(sv) = lhs_sv
            && let Some(&def_stmt) = ctx.sv_defining_stmt.get(&sv)
        {
            let producer = ctx.stmt_insns.get(&def_stmt).cloned();
            if let Some(p) = producer
                && p.op == IrOp::IntAnd
                && p.inputs.len() >= 2
                && p.inputs[1].space == SpaceId::Const
            {
                let mask = p.inputs[1].offset;
                let inner_src = emit_operand_resolved(&p.inputs[0], 0, def_stmt, ctx);
                match (mask, shift) {
                    (0xFF00, 8) => return Some(format!("BYTE1({})", inner_src)),
                    (0xFF0000, 16) => return Some(format!("BYTE2({})", inner_src)),
                    (0xFF000000, 24) => return Some(format!("BYTE3({})", inner_src)),
                    _ => {}
                }
            }
        }
    }

    // Bare `x >> N` patterns: HIWORD (DWORD result, shift 16) and
    // HIDWORD (QWORD result, shift 32).
    let output_size = insn.output.map_or(0, |v| v.size);
    let src = emit_operand_resolved(&insn.inputs[0], 0, stmt_idx, ctx);
    match (output_size, shift) {
        // Note: HIWORD takes the upper word of a DWORD (output size 2 from
        // a DWORD-typed source). We match on the *input* size via the LHS
        // varnode width since the IR result of `>>` keeps the source width.
        _ if shift == 16 && lhs_vn.size == 4 => Some(format!("HIWORD({})", src)),
        _ if shift == 32 && lhs_vn.size == 8 => Some(format!("HIDWORD({})", src)),
        _ => None,
    }
}

/// t256: Recognize the rebuilt signed-overflow polynomial at the IntSless
/// emit site.
///
/// Patterns:
///   * `(a ^ b ^ -1) & (a ^ (a + b)) < 0`  → `__OFADD__(a, b)`
///   * `(a ^ b)      & (a ^ (a - b)) < 0`  → `__OFSUB__(a, b)`
///
/// Returns `None` if the LHS / RHS don't match the canonical shape.
/// The RHS must be the constant `0`. The LHS unfolds through SSA via
/// `sv_defining_stmt`, so it works even when the polynomial spans
/// several IR statements.
pub(super) fn try_emit_open_overflow_macro(
    insn: &IrInsn,
    stmt_idx: u32,
    ctx: &mut PrintCtx,
) -> Option<String> {
    if insn.inputs.len() < 2 {
        return None;
    }
    // RHS must be the constant `0`.
    if insn.inputs[1].space != SpaceId::Const || insn.inputs[1].offset != 0 {
        return None;
    }
    let lhs = &insn.inputs[0];
    if lhs.space == SpaceId::Const {
        return None;
    }
    // Look up the AND producer plus the stmt-idx where it lives — we need
    // that idx to resolve the producer's own inputs through SSA.
    let (producer, and_stmt) = producer_insn_with_stmt(lhs, stmt_idx, ctx)?;
    if producer.op != IrOp::IntAnd || producer.inputs.len() < 2 {
        return None;
    }

    // Left arg of the AND: `a ^ b ^ -1` for OFADD, or `a ^ b` for OFSUB.
    // Right arg of the AND: `a ^ (a + b)` for OFADD, or `a ^ (a - b)` for OFSUB.
    let and_lhs = &producer.inputs[0];
    let and_rhs = &producer.inputs[1];
    let (and_lhs_prod, _) = producer_insn_with_stmt(and_lhs, and_stmt, ctx)?;
    let (and_rhs_prod, _) = producer_insn_with_stmt(and_rhs, and_stmt, ctx)?;
    if and_lhs_prod.op != IrOp::IntXor || and_rhs_prod.op != IrOp::IntXor {
        return None;
    }

    let (a_vn, b_vn, is_add) = decode_open_overflow(&and_lhs_prod, &and_rhs_prod, and_stmt, ctx)?;
    let a = emit_operand_resolved(&a_vn, 0, stmt_idx, ctx);
    let b = emit_operand_resolved(&b_vn, 1, stmt_idx, ctx);
    Some(if is_add {
        format!("__OFADD__({}, {})", a, b)
    } else {
        format!("__OFSUB__({}, {})", a, b)
    })
}

/// Lookup helper: from a Varnode that appears as an input of `at_stmt`,
/// follow SSA to the producer `IrInsn`. Returns `(insn, def_stmt_idx)`
/// so callers can resolve the producer's own inputs.
pub(super) fn producer_insn_with_stmt(
    vn: &Varnode,
    at_stmt: u32,
    ctx: &PrintCtx,
) -> Option<(IrInsn, u32)> {
    if vn.space == SpaceId::Const {
        return None;
    }
    let sv = ctx
        .stmt_inputs
        .get(&at_stmt)
        .and_then(|svs| svs.iter().find(|s| s.base == *vn).copied())?;
    let &def_stmt = ctx.sv_defining_stmt.get(&sv)?;
    let insn = ctx.stmt_insns.get(&def_stmt).cloned()?;
    Some((insn, def_stmt))
}

pub(super) fn producer_insn(vn: &Varnode, at_stmt: u32, ctx: &PrintCtx) -> Option<IrInsn> {
    producer_insn_with_stmt(vn, at_stmt, ctx).map(|(i, _)| i)
}

/// Inspect the two halves of `LHS & RHS` and decode them into `(a, b, is_add)`
/// where `is_add == true` for `__OFADD__` and `false` for `__OFSUB__`. Returns
/// `None` if the shapes don't match.
pub(super) fn decode_open_overflow(
    and_lhs_xor: &IrInsn,
    and_rhs_xor: &IrInsn,
    at_stmt: u32,
    ctx: &PrintCtx,
) -> Option<(Varnode, Varnode, bool)> {
    // and_rhs_xor: `a ^ (a ± b)`. Find which side is the add/sub producer.
    let r0 = &and_rhs_xor.inputs[0];
    let r1 = &and_rhs_xor.inputs[1];

    // Try both orderings.
    for (a_side, sum_side) in [(r0, r1), (r1, r0)] {
        let Some(sum_prod) = producer_insn(sum_side, at_stmt, ctx) else {
            continue;
        };
        let is_add = match sum_prod.op {
            IrOp::IntAdd => true,
            IrOp::IntSub => false,
            _ => continue,
        };
        if sum_prod.inputs.len() < 2 {
            continue;
        }
        // sum_prod.inputs = [a, b]. The `a` must equal `a_side`.
        let a_in_sum = &sum_prod.inputs[0];
        let b_in_sum = &sum_prod.inputs[1];
        if a_in_sum != a_side {
            continue;
        }

        // and_lhs_xor: `a ^ b [^ -1]`. For OFADD we expect a nested xor with -1.
        // Walk it: the constant `-1` appears either as a direct operand or as
        // the second xor input. Accept either flat (3-input) or nested xor.
        let saw_neg_one = and_lhs_xor
            .inputs
            .iter()
            .any(|v| v.space == SpaceId::Const && v.offset as i64 == -1)
            || and_lhs_xor.inputs.iter().any(|v| {
                producer_insn(v, at_stmt, ctx)
                    .map(|p| {
                        p.op == IrOp::IntXor
                            && p.inputs.iter().any(|inner| {
                                inner.space == SpaceId::Const && inner.offset as i64 == -1
                            })
                    })
                    .unwrap_or(false)
            });
        // For OFSUB, `a_lhs` is plain `a ^ b` (no -1).
        let ofadd_match = is_add && saw_neg_one;
        let ofsub_match = !is_add && !saw_neg_one;
        if !ofadd_match && !ofsub_match {
            continue;
        }

        // Confirm both `a` and `b` appear in the and_lhs_xor expression.
        // Flatten one level of xor in case it's nested with -1.
        let mut flat: Vec<Varnode> = Vec::new();
        for v in &and_lhs_xor.inputs {
            if let Some(p) = producer_insn(v, at_stmt, ctx)
                && p.op == IrOp::IntXor
            {
                flat.extend(p.inputs.iter().copied());
                continue;
            }
            flat.push(*v);
        }
        let has_a = flat.iter().any(|v| v == a_in_sum);
        let has_b = flat.iter().any(|v| v == b_in_sum);
        if has_a && has_b {
            return Some((*a_in_sum, *b_in_sum, is_add));
        }
    }
    None
}

/// Emit an IDA-style SUBPIECE macro based on output size and byte offset.
///
/// Known patterns map to named macros (LOBYTE, BYTE1, LOWORD, etc.);
/// anything else falls back to `(cast)((x) >> shift)`.
///
/// `input_size` enables size-equality elision: a SUBPIECE that takes the full
/// width of its source at offset 0 is the identity, so we skip the cast.
pub(super) fn emit_subpiece_macro(
    src: &str,
    byte_offset: u64,
    output_size: u8,
    input_size: u8,
) -> String {
    if byte_offset == 0 && output_size == input_size && output_size != 0 {
        return src.to_string();
    }
    match (output_size, byte_offset) {
        (1, 0) => format!("LOBYTE({})", src),
        (1, 1) => format!("BYTE1({})", src),
        (1, 2) => format!("BYTE2({})", src),
        (1, 3) => format!("BYTE3({})", src),
        (2, 0) => format!("LOWORD({})", src),
        (2, 2) => format!("HIWORD({})", src),
        (4, 0) => format!("LODWORD({})", src),
        (4, 4) => format!("HIDWORD({})", src),
        _ => {
            let cast = match output_size {
                1 => "(_BYTE)",
                2 => "(_WORD)",
                4 => "(_DWORD)",
                8 => "(_QWORD)",
                16 => "(_OWORD)",
                _ => "(_DWORD)",
            };
            if byte_offset == 0 {
                format!("{}({})", cast, src)
            } else {
                format!("{}(({}) >> {})", cast, src, byte_offset * 8)
            }
        }
    }
}
