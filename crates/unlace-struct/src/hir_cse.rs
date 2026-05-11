//! HIR-level common subexpression elimination (CSE).
//!
//! Walks a flat statement list and looks for two `Statement(IrInsn)` nodes
//! that compute the same expression (same opcode + same operand varnodes,
//! in order) with no intervening write to any of the operands. When such a
//! pair is found, the second occurrence is rewritten as a plain `Copy` of
//! the first occurrence's output, sparing the recompute.
//!
//! Example transformation:
//!
//! ```text
//! t1 = a + b;   // first occurrence
//! …             // (no writes to a or b)
//! t2 = a + b;   // duplicate — becomes  t2 = COPY t1
//! ```
//!
//! Pre-conditions for the rewrite:
//!
//!   * Both insns must have an output.
//!   * Same opcode.
//!   * Same input varnode list (length + element-wise equality).
//!   * The opcode is "pure" — Load/Store/Call*/Branch*/Return/New/etc.
//!     are excluded because they may observe or mutate state.
//!   * Neither the output nor any of the operands has been overwritten
//!     by an intervening statement between the two occurrences.
//!
//! This is a single-pass linear scan; complex control-flow nesting (If,
//! Switch, loops) is **not** crossed for the MVP — when the walker
//! encounters a non-`Statement` node, the per-input "last-write" tracking
//! is conservatively invalidated (everything currently in flight is
//! marked killed). The pass is still useful inside straight-line regions
//! (the common shape after structuring).

use std::collections::HashMap;

use unlace_ir::{IrInsn, IrOp, Varnode};

use crate::hir::HirNode;

/// Eliminate common subexpressions in `body`, in place.
///
/// The walker is recursive: for each child `Vec<HirNode>` (`If` arms,
/// `While`/`DoWhile`/`For` bodies, `Switch` cases, etc.) the function
/// recurses so CSE applies inside nested constructs as well. CSE does
/// **not** cross the boundary into a nested construct (the contents of
/// an `If` arm are CSE'd independently of the surrounding region).
pub fn eliminate_common_subexpressions(body: &mut Vec<HirNode>) {
    // Recurse into children first (so the nested transforms are visible
    // when we walk this level's statement window).
    for node in body.iter_mut() {
        recurse_into_children(node);
    }

    // Now do CSE on this flat list.
    cse_flat(body);
}

fn recurse_into_children(node: &mut HirNode) {
    match node {
        HirNode::Block(children) => eliminate_common_subexpressions(children),
        HirNode::If { then_body, else_body, .. } => {
            eliminate_common_subexpressions(then_body);
            if let Some(eb) = else_body {
                eliminate_common_subexpressions(eb);
            }
        }
        HirNode::While { body, .. }
        | HirNode::DoWhile { body, .. }
        | HirNode::For { body, .. } => {
            eliminate_common_subexpressions(body);
        }
        HirNode::Switch { cases, default, .. } => {
            for (_, body, _) in cases.iter_mut() {
                eliminate_common_subexpressions(body);
            }
            if let Some(d) = default {
                eliminate_common_subexpressions(d);
            }
        }
        HirNode::TryCatch { try_body, catch_arms } => {
            eliminate_common_subexpressions(try_body);
            for (_, body) in catch_arms.iter_mut() {
                eliminate_common_subexpressions(body);
            }
        }
        HirNode::TryFinally { try_body, finally_body } => {
            eliminate_common_subexpressions(try_body);
            eliminate_common_subexpressions(finally_body);
        }
        HirNode::Commented { inner, .. } => recurse_into_children(inner),
        HirNode::GuardedIf { then_body, else_body, .. } => {
            eliminate_common_subexpressions(then_body);
            eliminate_common_subexpressions(else_body);
        }
        HirNode::IfCmp { then_body, else_body, .. } => {
            eliminate_common_subexpressions(then_body);
            if let Some(eb) = else_body {
                eliminate_common_subexpressions(eb);
            }
        }
        _ => {}
    }
}

/// Key used for expression-equality lookup: opcode + operand list.
#[derive(Hash, Eq, PartialEq, Clone)]
struct ExprKey {
    op: IrOp,
    inputs: Vec<Varnode>,
}

impl ExprKey {
    fn of(insn: &IrInsn) -> Self {
        Self {
            op: insn.op,
            inputs: insn.inputs.iter().copied().collect(),
        }
    }
}

/// CSE the flat statement list `nodes` in place.
///
/// Tracks a map from each previously-seen ExprKey to the output Varnode of
/// its defining statement. When a later statement's key hits the map, the
/// later statement is rewritten to a `Copy(prior_output)` — but only if
/// none of the operands (and the prior output) have been killed by an
/// intervening write since they were last recorded.
fn cse_flat(nodes: &mut [HirNode]) {
    // expr -> (output_varnode_of_first_occurrence, "generation" stamp at that
    //         occurrence — used to detect intervening writes).
    let mut available: HashMap<ExprKey, (Varnode, u64)> = HashMap::new();

    // For each varnode we've seen as either an input or an output, track
    // the generation number at which it was last written. A statement is
    // a valid CSE replacement if every operand in its ExprKey (and the
    // recorded output) has not been written since the map entry was
    // recorded — i.e. each operand's last-write generation < entry's
    // stored generation.
    let mut last_write: HashMap<Varnode, u64> = HashMap::new();
    let mut generation: u64 = 0;

    for node in nodes.iter_mut() {
        match node {
            HirNode::Statement(insn) => {
                let (rewrite_to_copy_of, can_cse) = match insn.output {
                    Some(_) if !is_side_effecting(insn.op) && !insn.inputs.is_empty() => {
                        let key = ExprKey::of(insn);
                        let mut cse_target: Option<Varnode> = None;
                        if let Some(&(prior_out, recorded_gen)) = available.get(&key) {
                            // Verify no intervening write to any operand
                            // OR to the prior output.
                            let operands_ok = insn.inputs.iter().all(|v| {
                                last_write.get(v).copied().unwrap_or(0) <= recorded_gen
                            });
                            let prior_out_ok =
                                last_write.get(&prior_out).copied().unwrap_or(0)
                                    <= recorded_gen;
                            if operands_ok && prior_out_ok {
                                cse_target = Some(prior_out);
                            }
                        }
                        (cse_target, true)
                    }
                    _ => (None, false),
                };

                // Bump generation before recording this insn's effects, so
                // the new entry's recorded_gen is strictly greater than
                // any prior last-write of its operands.
                generation += 1;

                if let Some(prior_out) = rewrite_to_copy_of {
                    // Rewrite this insn as Copy(prior_out). Keep the
                    // original output varnode (callers expect it).
                    let output = insn.output.expect("checked above");
                    let addr = insn.addr;
                    let guard = insn.guard;
                    *insn = IrInsn {
                        op: IrOp::Copy,
                        output: Some(output),
                        inputs: smallvec::smallvec![prior_out],
                        addr,
                        guard,
                    };
                    // Record the write to `output`.
                    last_write.insert(output, generation);
                    // Track that `output` is now a copy of `prior_out` —
                    // the Copy itself becomes available for further CSE,
                    // but we skip recording it as a redundant ExprKey
                    // because a `Copy` operand is not a useful CSE seed.
                } else {
                    // Record operand reads (no write effect, just kept
                    // for future invalidation logic). Then record the
                    // write to `insn.output` (if any).
                    if can_cse && insn.output.is_some() {
                        let key = ExprKey::of(insn);
                        let output = insn.output.expect("can_cse");
                        // Only record if this is the FIRST occurrence
                        // (don't blow away a still-valid prior entry —
                        // but we already checked it was invalid above
                        // when can_cse path didn't produce a target, so
                        // overwriting is fine and correct).
                        available.insert(key, (output, generation));
                    }
                    if let Some(out) = insn.output {
                        last_write.insert(out, generation);
                        // A write to `out` invalidates any cached expr
                        // that names `out` as an operand. We don't proactively
                        // purge them; the operands_ok check at lookup time
                        // detects this via last_write comparison.
                    }
                }
            }
            _ => {
                // Non-Statement node: we cross a region boundary or have
                // a node whose semantics we can't easily inspect. Be
                // conservative and invalidate all cached expressions
                // (drop the map; subsequent statements start fresh).
                available.clear();
                // Also drop last_write — we have no idea what was modified.
                last_write.clear();
                generation = generation.saturating_add(1);
            }
        }
    }
}

/// Same purity classification as `hir_licm::is_side_effecting`. Inlined
/// here to keep modules independent.
const fn is_side_effecting(op: IrOp) -> bool {
    matches!(
        op,
        IrOp::Store
            | IrOp::Call
            | IrOp::Callind
            | IrOp::Return
            | IrOp::Branch
            | IrOp::Cbranch
            | IrOp::Branchind
            | IrOp::New
            | IrOp::Callother
            | IrOp::Cpoolref
            | IrOp::Indirect
            | IrOp::Load
    )
}

// ───── Tests ────────────────────────────────────────────────────────────────

#[cfg(test)]
mod tests {
    use super::*;
    use unlace_ir::{IrInsn, IrOp, Varnode};

    fn stmt(op: IrOp, output: Varnode, inputs: Vec<Varnode>, addr: u64) -> HirNode {
        HirNode::Statement(IrInsn::with_output(op, output, inputs, addr))
    }

    /// Two `t = a + b` statements with no intervening write to a or b →
    /// the second becomes `t2 = Copy(t1)`.
    #[test]
    fn duplicate_expression_becomes_copy() {
        let a = Varnode::reg(0, 4);
        let b = Varnode::reg(8, 4);
        let t1 = Varnode::unique(0, 4);
        let t2 = Varnode::unique(8, 4);

        let mut body = vec![
            stmt(IrOp::IntAdd, t1, vec![a, b], 0x1000),
            stmt(IrOp::IntAdd, t2, vec![a, b], 0x1004),
        ];

        eliminate_common_subexpressions(&mut body);

        assert_eq!(body.len(), 2);
        // First statement: unchanged.
        match &body[0] {
            HirNode::Statement(insn) => {
                assert_eq!(insn.op, IrOp::IntAdd);
                assert_eq!(insn.output, Some(t1));
                assert_eq!(insn.inputs.as_slice(), &[a, b]);
            }
            other => panic!("expected Statement, got {other:?}"),
        }
        // Second statement: rewritten to Copy(t1) with output still t2.
        match &body[1] {
            HirNode::Statement(insn) => {
                assert_eq!(insn.op, IrOp::Copy, "expected CSE → Copy");
                assert_eq!(insn.output, Some(t2));
                assert_eq!(
                    insn.inputs.as_slice(),
                    &[t1],
                    "Copy should source the first occurrence's output"
                );
            }
            other => panic!("expected Statement, got {other:?}"),
        }
    }

    /// Two `t = a + b` statements with an intervening write to `a` →
    /// the second must NOT be eliminated (the value of `a + b` may have
    /// changed).
    #[test]
    fn intervening_write_blocks_elimination() {
        let a = Varnode::reg(0, 4);
        let b = Varnode::reg(8, 4);
        let t1 = Varnode::unique(0, 4);
        let t2 = Varnode::unique(8, 4);
        let one = Varnode::constant(1, 4);

        let mut body = vec![
            stmt(IrOp::IntAdd, t1, vec![a, b], 0x1000),
            // Intervening write: a = a + 1
            stmt(IrOp::IntAdd, a, vec![a, one], 0x1004),
            // Now `a + b` is a different expression — must NOT be CSE'd.
            stmt(IrOp::IntAdd, t2, vec![a, b], 0x1008),
        ];

        eliminate_common_subexpressions(&mut body);

        assert_eq!(body.len(), 3);
        // Third statement: still an IntAdd, not a Copy.
        match &body[2] {
            HirNode::Statement(insn) => {
                assert_eq!(
                    insn.op,
                    IrOp::IntAdd,
                    "expected NO CSE when operand was rewritten in between"
                );
                assert_eq!(insn.output, Some(t2));
                assert_eq!(insn.inputs.as_slice(), &[a, b]);
            }
            other => panic!("expected Statement, got {other:?}"),
        }
    }
}
