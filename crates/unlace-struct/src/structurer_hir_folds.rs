//! structurer: hir folds.

use super::*;

/// t167: collapse `GuardedIf { then=[v=a], else=[v=b] }` into a
/// [`HirNode::GuardedTernary`] (`v = cond_<cc> ? a : b;`) when both arms
/// are exactly one `Copy` to the same output varnode and the arms have
/// no side effects.
///
/// "No side effects" is enforced by requiring `IrOp::Copy` (no Load,
/// Store, Call, or Callother). The structurer guarantees both branches
/// are single statements via the input pattern; we additionally check
/// that each statement is a plain `Statement(IrInsn)` (rejecting nested
/// blocks / commented wrappers / further if-nests).
///
/// Recurses into all child node bodies so nested IT-block ternaries fold
/// too. Idempotent.
pub(super) fn fold_guarded_ternary(nodes: &mut Vec<HirNode>) {
    for node in nodes.iter_mut() {
        fold_guarded_ternary_in_children(node);
    }
    let len = nodes.len();
    let mut taken = Vec::with_capacity(len);
    for node in std::mem::take(nodes) {
        match node {
            HirNode::GuardedIf {
                cond_code,
                then_body,
                else_body,
            } => match try_fold_guarded_ternary(cond_code, &then_body, &else_body) {
                Some(folded) => taken.push(folded),
                None => taken.push(HirNode::GuardedIf {
                    cond_code,
                    then_body,
                    else_body,
                }),
            },
            other => taken.push(other),
        }
    }
    *nodes = taken;
}

pub(super) fn fold_guarded_ternary_in_children(node: &mut HirNode) {
    match node {
        HirNode::Block(children) => fold_guarded_ternary(children),
        HirNode::If {
            then_body,
            else_body,
            ..
        } => {
            fold_guarded_ternary(then_body);
            if let Some(eb) = else_body {
                fold_guarded_ternary(eb);
            }
        }
        HirNode::While { body, .. } | HirNode::DoWhile { body, .. } => {
            fold_guarded_ternary(body);
        }
        HirNode::For { body, .. } => fold_guarded_ternary(body),
        HirNode::Switch { cases, default, .. } => {
            for (_, body, _) in cases {
                fold_guarded_ternary(body);
            }
            if let Some(def) = default {
                fold_guarded_ternary(def);
            }
        }
        HirNode::TryCatch {
            try_body,
            catch_arms,
        } => {
            fold_guarded_ternary(try_body);
            for (_ty, body) in catch_arms {
                fold_guarded_ternary(body);
            }
        }
        HirNode::TryFinally {
            try_body,
            finally_body,
        } => {
            fold_guarded_ternary(try_body);
            fold_guarded_ternary(finally_body);
        }
        HirNode::TryExcept {
            try_body,
            except_body,
            ..
        } => {
            fold_guarded_ternary(try_body);
            fold_guarded_ternary(except_body);
        }
        HirNode::Commented { inner, .. } => fold_guarded_ternary_in_children(inner),
        HirNode::GuardedIf {
            then_body,
            else_body,
            ..
        } => {
            fold_guarded_ternary(then_body);
            fold_guarded_ternary(else_body);
        }
        HirNode::IfCmp {
            then_body,
            else_body,
            ..
        } => {
            fold_guarded_ternary(then_body);
            if let Some(eb) = else_body {
                fold_guarded_ternary(eb);
            }
        }
        HirNode::Statement(_)
        | HirNode::Return(_)
        | HirNode::Goto(_)
        | HirNode::Label(_)
        | HirNode::Ternary { .. }
        | HirNode::GuardedTernary { .. }
        | HirNode::CselTernary { .. }
        | HirNode::TailCall { .. }
        | HirNode::Continue
        | HirNode::Break
        | HirNode::ObjcBlock { .. }
        | HirNode::Asm { .. } => {}
    }
}

pub(super) fn try_fold_guarded_ternary(
    cond_code: u8,
    then_body: &[HirNode],
    else_body: &[HirNode],
) -> Option<HirNode> {
    let then_insn = match then_body {
        [HirNode::Statement(insn)] => insn,
        _ => return None,
    };
    let else_insn = match else_body {
        [HirNode::Statement(insn)] => insn,
        _ => return None,
    };

    // Both arms must be plain Copy ops — no Load/Store/Call/Callother
    // (any of those carries observable side effects and selecting on a
    // predicate would alter program semantics).
    if then_insn.op != IrOp::Copy || else_insn.op != IrOp::Copy {
        return None;
    }

    let then_out = then_insn.output?;
    let else_out = else_insn.output?;
    if then_out != else_out {
        return None;
    }

    // The `guard` field on the inner IrInsns is the per-insn IT-cond the
    // lifter stamped (the same cond that was hoisted onto the surrounding
    // GuardedIf); we don't need to re-check it here. We do strip it from
    // the cloned insns so the rendered ternary expression doesn't carry
    // a stale predicate.
    let mut then_insn = then_insn.clone();
    let mut else_insn = else_insn.clone();
    then_insn.guard = None;
    else_insn.guard = None;

    Some(HirNode::GuardedTernary {
        cond_code,
        then_insn,
        else_insn,
        output: then_out,
    })
}

// ---------------------------------------------------------------------------
// t180: AArch64 CMP+CSEL → CselTernary fold.
//
// The AArch64 lifter emits CSEL as
//
//   Callother(const(CALLOTHER_AARCH64_CSEL=0x330, 8),
//             cond_varnode,
//             Rn,                       // true_val
//             Rm,                       // false_val
//             const(cc_u8, 1))          // capstone ARM64_CC_* (1..=14)
//   → Rd
//
// preceded by a CMP/SUBS which lifts to `IntSub` plus NZCV flag writes.
// This pass walks a body and, whenever it finds a CSEL Callother whose
// preceding non-control-flow statement is the IntSub of a CMP/SUBS,
// rewrites the Callother into a `HirNode::CselTernary` carrying the
// explicit comparison opcode (derived from the cc) and the IntSub's
// operands as the comparison LHS/RHS.
//
// Both the IntSub and any trailing flag writes are left intact; downstream
// dead-code elimination prunes the now-unused NZCV writes when nothing else
// reads them. Leaving them avoids accidental data-loss if a later CSEL/Bcc
// in the same block reads the same flag state.
// ---------------------------------------------------------------------------

/// Canonical AArch64 CSEL callother tag — kept in lockstep with
/// `unlace_lift_arm::lift::CALLOTHER_AARCH64_CSEL` (0x330). Duplicated
/// here to keep `unlace-struct` from taking a build-time dep on the
/// per-arch lifter crate.
pub(super) const CALLOTHER_AARCH64_CSEL_TAG: u64 = 0x330;

/// Map a capstone `ARM64_CC_*` value (1..=14) to the (Int-op, swap?) pair
/// the C printer should render. `swap` is true when the cc translates to
/// a comparison whose canonical Int-op needs operands flipped (e.g. GT is
/// `Rn > Rm` in source, but `IntSless(Rm, Rn)` in IR). Returns `None` for
/// AL/NV/INVALID and any unsigned-only / V-flag-only conditions that
/// don't have a clean two-operand integer-comparison form (HS/LO/HI/LS
/// fall back to GuardedTernary-style rendering via the caller's bail-out).
pub(super) fn aarch64_cc_to_int_op(cc: u8) -> Option<(IrOp, bool)> {
    match cc {
        1 => Some((IrOp::IntEqual, false)),       // EQ:  Z == 1  ↔ a == b
        2 => Some((IrOp::IntNotequal, false)),    // NE:  Z == 0  ↔ a != b
        3 => Some((IrOp::IntLessequal, true)),    // HS:  C == 1  ↔ a >= b (unsigned)
        4 => Some((IrOp::IntLess, false)),        // LO:  C == 0  ↔ a < b  (unsigned)
        9 => Some((IrOp::IntLessequal, true)), // HI:  C&!Z    ↔ a > b  (unsigned, swap+swap of <=)
        10 => Some((IrOp::IntLessequal, false)), // LS:  !C|Z    ↔ a <= b (unsigned)
        11 => Some((IrOp::IntSlessequal, true)), // GE:  N == V  ↔ a >= b (signed)
        12 => Some((IrOp::IntSless, false)),   // LT:  N != V  ↔ a < b  (signed)
        13 => Some((IrOp::IntSlessequal, true)), // GT:  !Z&N==V ↔ a > b  (signed)
        14 => Some((IrOp::IntSlessequal, false)), // LE:  Z|N!=V  ↔ a <= b (signed)
        _ => None,                             // 5/6 (MI/PL), 7/8 (VS/VC), 0/15/16 — bail
    }
}

/// Return true if `insn` is the IntSub a CMP or SUBS produces. CMP/SUBS
/// both lift as `IntSub` with the two compared operands as inputs and a
/// unique-space result. We don't distinguish them — the structurer just
/// needs the comparison operands.
pub(super) fn is_cmp_subs_insn(insn: &IrInsn) -> bool {
    insn.op == IrOp::IntSub && insn.inputs.len() >= 2
}

/// Return true if `insn` is the AArch64 CSEL `Callother`.
pub(super) fn is_aarch64_csel_callother(insn: &IrInsn) -> bool {
    if insn.op != IrOp::Callother || insn.inputs.is_empty() {
        return false;
    }
    let tag = &insn.inputs[0];
    tag.space == SpaceId::Const && tag.offset == CALLOTHER_AARCH64_CSEL_TAG
}

/// Walk `nodes` in order; whenever a `Statement(csel_callother)` is
/// preceded (within the same body) by an `IntSub` `Statement` whose write
/// is not consumed by an intervening non-flag Statement, fold them into
/// a [`HirNode::CselTernary`]. Recurses into child bodies. Idempotent.
pub(super) fn fold_csel_ternary(nodes: &mut [HirNode]) {
    for node in nodes.iter_mut() {
        fold_csel_ternary_in_children(node);
    }
    let mut i = 0;
    while i < nodes.len() {
        // Find a CSEL Callother.
        let csel = match &nodes[i] {
            HirNode::Statement(insn) if is_aarch64_csel_callother(insn) => insn.clone(),
            _ => {
                i += 1;
                continue;
            }
        };
        // Need at least 5 inputs: tag, cond, true_val, false_val, cc_byte.
        if csel.inputs.len() < 5 {
            i += 1;
            continue;
        }
        let cc_vn = &csel.inputs[4];
        if cc_vn.space != SpaceId::Const || cc_vn.size != 1 {
            i += 1;
            continue;
        }
        let cc = cc_vn.offset as u8;
        let (cmp_op, swap) = match aarch64_cc_to_int_op(cc) {
            Some(p) => p,
            None => {
                i += 1;
                continue;
            }
        };
        let true_val = csel.inputs[2];
        let false_val = csel.inputs[3];
        let Some(output) = csel.output else {
            i += 1;
            continue;
        };

        // Scan backward for the nearest IntSub Statement, skipping over
        // intervening flag-write Statements (writes to register-space
        // offsets in the NZCV byte range 264..=267 or the packed 272 slot
        // for AArch64 — we also accept register-space writes whose output
        // is one byte wide as flag-shaped, since `emit_sub_flags` produces
        // exactly that shape). Anything else aborts the search.
        let mut found: Option<&IrInsn> = None;
        for j in (0..i).rev() {
            match &nodes[j] {
                HirNode::Statement(prev) => {
                    if is_cmp_subs_insn(prev) {
                        found = Some(prev);
                        break;
                    }
                    // Allow flag-byte writes to flow through.
                    if let Some(out) = prev.output
                        && out.space == SpaceId::Register
                        && out.size == 1
                    {
                        continue;
                    }
                    break;
                }
                _ => break,
            }
        }
        let Some(cmp_insn) = found else {
            i += 1;
            continue;
        };
        let (cmp_lhs, cmp_rhs) = if swap {
            (cmp_insn.inputs[1], cmp_insn.inputs[0])
        } else {
            (cmp_insn.inputs[0], cmp_insn.inputs[1])
        };

        nodes[i] = HirNode::CselTernary {
            cmp_op,
            cmp_lhs,
            cmp_rhs,
            true_val,
            false_val,
            output,
            addr: csel.addr,
        };
        i += 1;
    }
}

pub(super) fn fold_csel_ternary_in_children(node: &mut HirNode) {
    match node {
        HirNode::Block(children) => fold_csel_ternary(children),
        HirNode::If {
            then_body,
            else_body,
            ..
        } => {
            fold_csel_ternary(then_body);
            if let Some(eb) = else_body {
                fold_csel_ternary(eb);
            }
        }
        HirNode::While { body, .. } | HirNode::DoWhile { body, .. } => {
            fold_csel_ternary(body);
        }
        HirNode::For { body, .. } => fold_csel_ternary(body),
        HirNode::Switch { cases, default, .. } => {
            for (_, body, _) in cases {
                fold_csel_ternary(body);
            }
            if let Some(def) = default {
                fold_csel_ternary(def);
            }
        }
        HirNode::TryCatch {
            try_body,
            catch_arms,
        } => {
            fold_csel_ternary(try_body);
            for (_, arm_body) in catch_arms.iter_mut() {
                fold_csel_ternary(arm_body);
            }
        }
        HirNode::TryFinally {
            try_body,
            finally_body,
        } => {
            fold_csel_ternary(try_body);
            fold_csel_ternary(finally_body);
        }
        HirNode::TryExcept {
            try_body,
            except_body,
            ..
        } => {
            fold_csel_ternary(try_body);
            fold_csel_ternary(except_body);
        }
        HirNode::Commented { inner, .. } => fold_csel_ternary_in_children(inner),
        HirNode::GuardedIf {
            then_body,
            else_body,
            ..
        } => {
            fold_csel_ternary(then_body);
            fold_csel_ternary(else_body);
        }
        HirNode::IfCmp {
            then_body,
            else_body,
            ..
        } => {
            fold_csel_ternary(then_body);
            if let Some(eb) = else_body {
                fold_csel_ternary(eb);
            }
        }
        HirNode::Statement(_)
        | HirNode::Return(_)
        | HirNode::Goto(_)
        | HirNode::Label(_)
        | HirNode::Ternary { .. }
        | HirNode::GuardedTernary { .. }
        | HirNode::CselTernary { .. }
        | HirNode::TailCall { .. }
        | HirNode::Continue
        | HirNode::Break
        | HirNode::ObjcBlock { .. }
        | HirNode::Asm { .. } => {}
    }
}

// ---------------------------------------------------------------------------
// t189: AArch64 CMP+Bcc → HirNode::IfCmp fold
//
// Mirror of `fold_csel_ternary` (t180) for conditional branches. The lifter
// emits Bcc as a `Cbranch` whose cond is one of the NZCV flag bytes (ZF/NF
// directly for EQ/MI, or a small chain of BoolNegate / BoolXor / BoolAnd /
// BoolOr over the flag bytes for compound cond codes). After the structurer
// has rewritten the CFG into an `If` node with the same cond SSA varnode, we
// walk every `Block` body and look for the shape
//
//   Statement(IntSub …)           ; CMP / SUBS
//   Statement(IntSless → NF)      ; flag-byte writes
//   Statement(IntEqual → ZF)
//   …
//   [Statement(BoolXor(NF, VF)) / BoolNegate(...)]   ; cc dataflow (optional)
//   If { cond: <ssa of ZF/NF/that-unique>, then, else }
//
// and rewrite the trailing If into `HirNode::IfCmp` carrying the explicit
// (cmp_op, cmp_lhs, cmp_rhs) recovered from the cc + the CMP operands.
//
// Like `fold_csel_ternary`, the pass leaves the flag-byte and Bool*
// statements in place; downstream DCE can prune them when nothing else
// reads them. Walks all nested bodies. Idempotent.
// ---------------------------------------------------------------------------

/// Return true if `vn` is one of the AArch64 NZCV per-flag bytes
/// (NF=264, ZF=265, CF=266, VF=267) or the packed `ARM_NZCV` (272).
pub(super) fn is_aarch64_flag_varnode(vn: &Varnode) -> bool {
    vn.space == SpaceId::Register
        && ((vn.size == 1 && (264..=267).contains(&vn.offset))
            || (vn.size == 4 && vn.offset == 272))
}

/// Return true if `vn` is a 1-byte register-space write that looks like a
/// flag-byte commit (NZCV per-flag bytes or any other 1-byte register
/// write — the structurer is tolerant here, matching `fold_csel_ternary`).
pub(super) fn is_flag_byte_write(insn: &IrInsn) -> bool {
    insn.output
        .map(|o| o.space == SpaceId::Register && (o.size == 1 || (o.size == 4 && o.offset == 272)))
        .unwrap_or(false)
}

/// Walk the trailing Bool* statements just before an `If` and recover the
/// AArch64 condition code that produced them.
///
/// Returns the index into `body` *before* the recognized dataflow (so the
/// caller can keep scanning further back for the IntSub) and the
/// (IrOp, swap) pair the cc maps to via `aarch64_cc_to_int_op`.
///
/// Recognizes:
///   * direct ZF read (no Bool* dataflow) → cc = EQ
///   * direct NF read                       → cc = MI
///   * `BoolNegate(ZF)` → cc = NE
///   * `BoolNegate(NF)` → cc = PL (no integer mapping — bails)
///   * `BoolXor(NF, VF)` → cc = LT
///   * `BoolNegate(BoolXor(NF, VF))` → cc = GE
///
/// `cond_base` is the base Varnode of the If's cond SsaVarnode.
pub(super) fn recover_aarch64_bcc_cc(
    body: &[HirNode],
    if_index: usize,
    cond_base: &Varnode,
) -> Option<(u8, usize)> {
    // Direct ZF / NF read (EQ / MI).
    if cond_base.space == SpaceId::Register && cond_base.size == 1 {
        match cond_base.offset {
            265 => return Some((1, if_index)), // ZF → EQ
            264 => return Some((4, if_index)), // NF → MI (we bail below since no int mapping)
            _ => {}
        }
    }

    // Look for `Statement(BoolXor | BoolNegate | ...)` immediately before
    // the If whose output equals `cond_base`.
    let mut i = if_index;
    if i == 0 {
        return None;
    }
    i -= 1;
    let last = match &body[i] {
        HirNode::Statement(insn) => insn,
        _ => return None,
    };
    if last.output.as_ref() != Some(cond_base) {
        return None;
    }

    match last.op {
        // NE: BoolNegate(ZF)
        IrOp::BoolNegate if last.inputs.len() == 1 => {
            let inp = &last.inputs[0];
            if inp.space == SpaceId::Register && inp.size == 1 && inp.offset == 265 {
                return Some((2, i)); // NE
            }
            // GE: BoolNegate(t) where t = BoolXor(NF, VF) immediately prior.
            if i > 0
                && let HirNode::Statement(prev) = &body[i - 1]
                && prev.op == IrOp::BoolXor
                && prev.inputs.len() == 2
                && prev.output.as_ref() == Some(inp)
                && is_register_flag(&prev.inputs[0], 264)
                && is_register_flag(&prev.inputs[1], 267)
            {
                return Some((11, i - 1)); // GE
            }
            // PL: BoolNegate(NF) — no integer-op mapping, bail.
            None
        }
        // LT: BoolXor(NF, VF)
        IrOp::BoolXor
            if last.inputs.len() == 2
                && is_register_flag(&last.inputs[0], 264)
                && is_register_flag(&last.inputs[1], 267) =>
        {
            Some((12, i)) // LT
        }
        _ => None,
    }
}

pub(super) fn is_register_flag(vn: &Varnode, offset: u64) -> bool {
    vn.space == SpaceId::Register && vn.size == 1 && vn.offset == offset
}

/// Scan `body` and rewrite trailing `If { cond = NZCV-derived }` patterns
/// into `HirNode::IfCmp`. Recurses into child bodies. Idempotent.
pub(super) fn fold_aarch64_bcc_if(nodes: &mut [HirNode]) {
    for node in nodes.iter_mut() {
        fold_aarch64_bcc_if_in_children(node);
    }

    // Find every `If` whose `cond.base` is a flag-shaped Varnode (or a unique
    // produced by Bool* dataflow over flag bytes) and try to rewrite it.
    let mut i = 0;
    while i < nodes.len() {
        let (cond_base, addr_hint) = match &nodes[i] {
            HirNode::If { cond, .. } => (cond.base, 0u64),
            _ => {
                i += 1;
                continue;
            }
        };

        // The cc dataflow lives in trailing Statement(Bool*) entries OR the
        // cond is a raw flag byte. Try to recover the cc.
        let Some((cc, dataflow_start)) = recover_aarch64_bcc_cc(nodes, i, &cond_base) else {
            i += 1;
            continue;
        };

        // Map cc → (cmp_op, swap). EQ/NE/GE/LT all map cleanly.
        let (cmp_op, swap) = match aarch64_cc_to_int_op(cc) {
            Some(p) => p,
            None => {
                i += 1;
                continue;
            }
        };

        // Walk further backwards from `dataflow_start` for the IntSub the
        // CMP/SUBS lifted, skipping flag-byte commits. Anything else aborts.
        let mut found: Option<&IrInsn> = None;
        if dataflow_start > 0 {
            for j in (0..dataflow_start).rev() {
                match &nodes[j] {
                    HirNode::Statement(prev) => {
                        if is_cmp_subs_insn(prev) {
                            found = Some(prev);
                            break;
                        }
                        if is_flag_byte_write(prev) {
                            continue;
                        }
                        break;
                    }
                    _ => break,
                }
            }
        }
        let Some(cmp_insn) = found else {
            i += 1;
            continue;
        };

        let (cmp_lhs, cmp_rhs) = if swap {
            (cmp_insn.inputs[1], cmp_insn.inputs[0])
        } else {
            (cmp_insn.inputs[0], cmp_insn.inputs[1])
        };

        let addr = if addr_hint != 0 {
            addr_hint
        } else {
            // Use the IntSub's address as the IfCmp's anchor (no separate Bcc
            // address is tracked at this layer).
            cmp_insn.addr
        };

        // Take the If node and split it into IfCmp.
        let (then_body, else_body) = match std::mem::replace(&mut nodes[i], HirNode::Block(vec![]))
        {
            HirNode::If {
                then_body,
                else_body,
                ..
            } => (then_body, else_body),
            other => {
                // Restore and bail (shouldn't happen — we matched If above).
                nodes[i] = other;
                i += 1;
                continue;
            }
        };

        nodes[i] = HirNode::IfCmp {
            cmp_op,
            cmp_lhs,
            cmp_rhs,
            then_body,
            else_body,
            addr,
        };
        i += 1;
    }
}

pub(super) fn fold_aarch64_bcc_if_in_children(node: &mut HirNode) {
    match node {
        HirNode::Block(children) => fold_aarch64_bcc_if(children),
        HirNode::If {
            then_body,
            else_body,
            ..
        } => {
            fold_aarch64_bcc_if(then_body);
            if let Some(eb) = else_body {
                fold_aarch64_bcc_if(eb);
            }
        }
        HirNode::IfCmp {
            then_body,
            else_body,
            ..
        } => {
            fold_aarch64_bcc_if(then_body);
            if let Some(eb) = else_body {
                fold_aarch64_bcc_if(eb);
            }
        }
        HirNode::While { body, .. } | HirNode::DoWhile { body, .. } => {
            fold_aarch64_bcc_if(body);
        }
        HirNode::For { body, .. } => fold_aarch64_bcc_if(body),
        HirNode::Switch { cases, default, .. } => {
            for (_, body, _) in cases {
                fold_aarch64_bcc_if(body);
            }
            if let Some(def) = default {
                fold_aarch64_bcc_if(def);
            }
        }
        HirNode::TryCatch {
            try_body,
            catch_arms,
        } => {
            fold_aarch64_bcc_if(try_body);
            for (_, arm_body) in catch_arms.iter_mut() {
                fold_aarch64_bcc_if(arm_body);
            }
        }
        HirNode::TryFinally {
            try_body,
            finally_body,
        } => {
            fold_aarch64_bcc_if(try_body);
            fold_aarch64_bcc_if(finally_body);
        }
        HirNode::TryExcept {
            try_body,
            except_body,
            ..
        } => {
            fold_aarch64_bcc_if(try_body);
            fold_aarch64_bcc_if(except_body);
        }
        HirNode::Commented { inner, .. } => fold_aarch64_bcc_if_in_children(inner),
        HirNode::GuardedIf {
            then_body,
            else_body,
            ..
        } => {
            fold_aarch64_bcc_if(then_body);
            fold_aarch64_bcc_if(else_body);
        }
        HirNode::Statement(_)
        | HirNode::Return(_)
        | HirNode::Goto(_)
        | HirNode::Label(_)
        | HirNode::Ternary { .. }
        | HirNode::GuardedTernary { .. }
        | HirNode::CselTernary { .. }
        | HirNode::TailCall { .. }
        | HirNode::Continue
        | HirNode::Break
        | HirNode::ObjcBlock { .. }
        | HirNode::Asm { .. } => {}
    }
}

// Suppress the dead_code lint for `is_aarch64_flag_varnode` — it's a helper
// kept for future expansion (packed-NZCV consumers) but not yet used.
#[allow(dead_code)]
const _: fn(&Varnode) -> bool = is_aarch64_flag_varnode;

/// Fuse adjacent [`HirNode::GuardedIf`] lanes whose cond codes are either the
/// first lane's condition or its inverse (`cc ^ 1`, ARM A8.3) into one
/// `GuardedIf` carrying all true-lane nodes in `then_body` and all false-lane
/// nodes in `else_body`.
///
/// The lifter emits one `GuardedIf` per contiguous IT-lane run. A shallow
/// pairwise fuse is enough for `ITE` and one-sided 4-slot blocks like `ITEEE`,
/// but it leaves deep alternating blocks (`ITETE`, `ITET`, `ITTE`) as multiple
/// sibling if/else statements. Collapse the whole maximal T/E lane run at once
/// so any legal 1..=4-slot IT block structures as a single source-level
/// conditional. AL (0xE) has no architectural inverse and is skipped to keep
/// the post-pass safe for any future AL-guarded emission.
pub(super) fn fuse_guarded_if_else(nodes: &mut Vec<HirNode>) {
    let mut i = 0;
    while i < nodes.len() {
        let HirNode::GuardedIf {
            cond_code: first_cc,
            else_body,
            ..
        } = &nodes[i]
        else {
            i += 1;
            continue;
        };
        if !else_body.is_empty() || *first_cc == 0xE {
            i += 1;
            continue;
        }

        let first_cc = *first_cc;
        let inverse_cc = first_cc ^ 1;
        let mut end = i;
        let mut then_body = Vec::new();
        let mut else_body = Vec::new();
        let mut saw_inverse = false;

        while end < nodes.len() {
            let HirNode::GuardedIf {
                cond_code,
                then_body: lane_body,
                else_body: lane_else,
            } = &nodes[end]
            else {
                break;
            };
            if !lane_else.is_empty() || *cond_code == 0xE {
                break;
            }
            if *cond_code == first_cc {
                then_body.extend(lane_body.iter().cloned());
            } else if *cond_code == inverse_cc {
                saw_inverse = true;
                else_body.extend(lane_body.iter().cloned());
            } else {
                break;
            }
            end += 1;
        }

        if saw_inverse && end > i + 1 {
            nodes.splice(
                i..end,
                [HirNode::GuardedIf {
                    cond_code: first_cc,
                    then_body,
                    else_body,
                }],
            );
            i += 1;
        } else {
            i += 1;
        }
    }
}
