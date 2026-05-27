//! HIR-level loop-invariant code motion (LICM).
//!
//! Walks the HIR tree and, for each `While`/`DoWhile`/`For` loop, hoists
//! statements that:
//!
//!   1. Are pure (no Load/Store/Call/Branch/Indirect/etc. — see
//!      [`is_side_effecting`] below; only side-effect-free arithmetic /
//!      bitwise / comparison / Copy ops qualify).
//!   2. Read no varnode that is written inside the loop body (operands are
//!      loop-invariant).
//!   3. Write a varnode that is *not* the loop's induction variable in the
//!      `For` case (so we don't hoist the update target out from under the
//!      `for` step).
//!
//! Hoisted statements are emitted immediately before the loop, preserving
//! source order. Nested loops are visited innermost-first so that an
//! invariant outer-loop statement that becomes invariant only after an
//! inner-loop hoist still has a chance to bubble out one level per
//! invocation. Run the pass to fixed-point if multi-level hoisting is
//! desired.
//!
//! The pass is intentionally conservative on the "what to hoist" axis:
//!
//! * It walks only the **top-level** statements inside each loop body —
//!   statements nested inside an inner `If`/`Switch`/`Block`/etc. are not
//!   considered candidates this round (they may execute conditionally,
//!   which complicates safety).
//! * It treats *any* output varnode written by a control-flow node we
//!   cannot inspect (Call, Goto, complex constructs) as "modified" by
//!   flooding every output we walk past into the modified-set.
//!
//! These restrictions can be relaxed later; the MVP focuses on the
//! common shape `while (cond) { x = LOOP_INVARIANT_EXPR; … }`.

use unlace_ir::{IrInsn, IrOp, Varnode};

use std::collections::BTreeSet;

use crate::hir::HirNode;

/// Hoist loop-invariant statements out of `While`/`DoWhile`/`For` loops in
/// `body` (in place). Nested loops are processed innermost-first.
pub fn hoist_loop_invariants(body: &mut Vec<HirNode>) {
    // First recurse into all child constructs so that inner loops are
    // simplified before we evaluate the outer one's invariance.
    for node in body.iter_mut() {
        recurse_into_children(node);
    }

    // Now scan for top-level loops in this list. Build a new list where
    // each loop is preceded by its hoisted statements.
    let mut out: Vec<HirNode> = Vec::with_capacity(body.len());
    for node in std::mem::take(body) {
        match node {
            HirNode::While {
                cond,
                body: mut loop_body,
            } => {
                let hoisted = extract_invariants(&mut loop_body, None);
                out.extend(hoisted);
                out.push(HirNode::While {
                    cond,
                    body: loop_body,
                });
            }
            HirNode::DoWhile {
                body: mut loop_body,
                cond,
            } => {
                let hoisted = extract_invariants(&mut loop_body, None);
                out.extend(hoisted);
                out.push(HirNode::DoWhile {
                    body: loop_body,
                    cond,
                });
            }
            HirNode::For {
                init,
                cond,
                update,
                body: mut loop_body,
            } => {
                // Protect the For's induction variable: the `update` insn's
                // output (if any) must continue to be written inside the
                // loop step. We forbid hoisting any statement that writes
                // it (or reads it — though that's already covered by the
                // modified-set since `update` runs inside the loop).
                let iv = update.output;
                let hoisted = extract_invariants(&mut loop_body, iv);
                out.extend(hoisted);
                out.push(HirNode::For {
                    init,
                    cond,
                    update,
                    body: loop_body,
                });
            }
            other => out.push(other),
        }
    }
    *body = out;
}

/// Recurse into every body-bearing child of `node` so nested loops are
/// hoisted before their enclosing context is evaluated.
fn recurse_into_children(node: &mut HirNode) {
    match node {
        HirNode::Block(children) => hoist_loop_invariants(children),
        HirNode::If {
            then_body,
            else_body,
            ..
        } => {
            hoist_loop_invariants(then_body);
            if let Some(eb) = else_body {
                hoist_loop_invariants(eb);
            }
        }
        HirNode::While { body, .. } | HirNode::DoWhile { body, .. } => {
            hoist_loop_invariants(body);
        }
        HirNode::For { body, .. } => {
            hoist_loop_invariants(body);
        }
        HirNode::Switch { cases, default, .. } => {
            for (_, body, _) in cases.iter_mut() {
                hoist_loop_invariants(body);
            }
            if let Some(d) = default {
                hoist_loop_invariants(d);
            }
        }
        HirNode::TryCatch {
            try_body,
            catch_arms,
        } => {
            hoist_loop_invariants(try_body);
            for (_, body) in catch_arms.iter_mut() {
                hoist_loop_invariants(body);
            }
        }
        HirNode::TryFinally {
            try_body,
            finally_body,
        } => {
            hoist_loop_invariants(try_body);
            hoist_loop_invariants(finally_body);
        }
        HirNode::Commented { inner, .. } => recurse_into_children(inner),
        HirNode::GuardedIf {
            then_body,
            else_body,
            ..
        } => {
            hoist_loop_invariants(then_body);
            hoist_loop_invariants(else_body);
        }
        HirNode::IfCmp {
            then_body,
            else_body,
            ..
        } => {
            hoist_loop_invariants(then_body);
            if let Some(eb) = else_body {
                hoist_loop_invariants(eb);
            }
        }
        // All other variants either contain no `Vec<HirNode>` we'd recurse
        // into (Statement, Return, Goto, Label, Break, Continue, Ternary,
        // TailCall, ObjcBlock, Asm, GuardedTernary, CselTernary) or are
        // terminal markers.
        _ => {}
    }
}

/// Scan `loop_body` top-level statements; pull out invariant ones and
/// return them in source order. `iv_guard` (when `Some(v)`) is the For-loop
/// induction varnode that must NOT be hoisted as a write target.
fn extract_invariants(loop_body: &mut Vec<HirNode>, iv_guard: Option<Varnode>) -> Vec<HirNode> {
    // Pass 1: compute the "modified inside the loop" varnode set. We
    // conservatively flag the output of every node we walk through —
    // including those inside nested constructs — as modified.
    let mut modified: BTreeSet<Varnode> = BTreeSet::new();
    for node in loop_body.iter() {
        collect_modified(node, &mut modified);
    }

    // Pass 2: walk top-level statements; pull out those that are pure,
    // whose inputs are all loop-invariant (not in `modified`), and whose
    // output is NOT itself in `modified` from a *different* statement.
    //
    // The "not in modified" check on the output is what prevents us from
    // hoisting two statements that both write the same temp (which would
    // change observable behaviour). We approximate this by also requiring
    // that the candidate's own output appears exactly once across all
    // direct top-level Statement nodes in `loop_body`.
    let write_counts = count_top_level_writes(loop_body);

    let original = std::mem::take(loop_body);
    let mut hoisted: Vec<HirNode> = Vec::new();
    let mut kept: Vec<HirNode> = Vec::with_capacity(original.len());

    for node in original {
        if let HirNode::Statement(insn) = &node
            && is_hoistable(insn, &modified, &write_counts, iv_guard)
        {
            hoisted.push(node);
            continue;
        }
        kept.push(node);
    }

    *loop_body = kept;
    hoisted
}

/// Recursively flag every output varnode written by any descendant Statement
/// (or analogous output-bearing variant) as "modified".
fn collect_modified(node: &HirNode, modified: &mut BTreeSet<Varnode>) {
    match node {
        HirNode::Statement(insn) => {
            if let Some(out) = insn.output {
                modified.insert(out);
            }
        }
        HirNode::Block(children) => {
            for c in children {
                collect_modified(c, modified);
            }
        }
        HirNode::If {
            then_body,
            else_body,
            ..
        } => {
            for c in then_body {
                collect_modified(c, modified);
            }
            if let Some(eb) = else_body {
                for c in eb {
                    collect_modified(c, modified);
                }
            }
        }
        HirNode::While { body, .. } | HirNode::DoWhile { body, .. } | HirNode::For { body, .. } => {
            for c in body {
                collect_modified(c, modified);
            }
            if let HirNode::For { update, init, .. } = node {
                if let Some(out) = update.output {
                    modified.insert(out);
                }
                if let Some(init_insn) = init
                    && let Some(out) = init_insn.output
                {
                    modified.insert(out);
                }
            }
        }
        HirNode::Switch { cases, default, .. } => {
            for (_, body, _) in cases {
                for c in body {
                    collect_modified(c, modified);
                }
            }
            if let Some(d) = default {
                for c in d {
                    collect_modified(c, modified);
                }
            }
        }
        HirNode::TryCatch {
            try_body,
            catch_arms,
        } => {
            for c in try_body {
                collect_modified(c, modified);
            }
            for (_, body) in catch_arms {
                for c in body {
                    collect_modified(c, modified);
                }
            }
        }
        HirNode::TryFinally {
            try_body,
            finally_body,
        } => {
            for c in try_body {
                collect_modified(c, modified);
            }
            for c in finally_body {
                collect_modified(c, modified);
            }
        }
        HirNode::Commented { inner, .. } => collect_modified(inner, modified),
        HirNode::Ternary { output, .. } => {
            modified.insert(*output);
        }
        HirNode::GuardedIf {
            then_body,
            else_body,
            ..
        } => {
            for c in then_body {
                collect_modified(c, modified);
            }
            for c in else_body {
                collect_modified(c, modified);
            }
        }
        HirNode::GuardedTernary { output, .. } => {
            modified.insert(*output);
        }
        HirNode::CselTernary { output, .. } => {
            modified.insert(*output);
        }
        HirNode::IfCmp {
            then_body,
            else_body,
            ..
        } => {
            for c in then_body {
                collect_modified(c, modified);
            }
            if let Some(eb) = else_body {
                for c in eb {
                    collect_modified(c, modified);
                }
            }
        }
        // No writes to surface for: Return, Goto, Label, Break, Continue,
        // TailCall, ObjcBlock, Asm. (TailCall and ObjcBlock are treated as
        // side-effecting and won't pass `is_hoistable` anyway; Return /
        // Goto / Label / Break / Continue are control-flow markers.)
        _ => {}
    }
}

/// Count how many times each varnode appears as a top-level `Statement`
/// output in `nodes`. Used to refuse hoisting when the same lvalue is
/// rewritten elsewhere in the loop.
fn count_top_level_writes(nodes: &[HirNode]) -> BTreeSet<Varnode> {
    // We only care about "written more than once" — store the set of
    // varnodes that appear at least twice as top-level outputs.
    let mut seen_once: BTreeSet<Varnode> = BTreeSet::new();
    let mut seen_twice: BTreeSet<Varnode> = BTreeSet::new();
    for node in nodes {
        if let HirNode::Statement(insn) = node
            && let Some(out) = insn.output
            && !seen_once.insert(out)
        {
            seen_twice.insert(out);
        }
    }
    seen_twice
}

/// Decide whether `insn` is a safe hoist candidate given the loop's
/// modified-varnode set, the multi-write set, and an optional induction
/// variable to preserve.
fn is_hoistable(
    insn: &IrInsn,
    modified: &BTreeSet<Varnode>,
    multi_writes: &BTreeSet<Varnode>,
    iv_guard: Option<Varnode>,
) -> bool {
    // Must have an output (we lift a definition).
    let Some(out) = insn.output else {
        return false;
    };

    // Side-effecting ops cannot be hoisted; they may observe / mutate
    // shared state and reordering across the loop header is unsafe.
    if is_side_effecting(insn.op) {
        return false;
    }

    // Refuse if any input is modified inside the loop.
    for input in &insn.inputs {
        if modified.contains(input) {
            return false;
        }
    }

    // Refuse if this lvalue is written multiple times — moving one copy
    // would observably change which write "wins" on the loop's final
    // iteration vs. its hoisted predecessor.
    if multi_writes.contains(&out) {
        return false;
    }

    // Refuse to hoist a write to the For-loop induction variable.
    if let Some(iv) = iv_guard {
        if out == iv {
            return false;
        }
        // Also refuse if the candidate reads the IV — should already be
        // covered by `modified` since `update` writes to it, but belt and
        // braces for callers passing IV without seeding modified-set.
        for input in &insn.inputs {
            if *input == iv {
                return false;
            }
        }
    }

    true
}

/// Mirror of `unlace_passes::dce::is_side_effecting`. Inlined here to avoid
/// a crate-level dependency cycle between unlace-struct and unlace-passes.
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
    use unlace_ir::ssa::SsaVarnode;
    use unlace_ir::{IrInsn, IrOp, Varnode};

    fn stmt(op: IrOp, output: Varnode, inputs: Vec<Varnode>, addr: u64) -> HirNode {
        HirNode::Statement(IrInsn::with_output(op, output, inputs, addr))
    }

    fn dummy_cond() -> SsaVarnode {
        SsaVarnode {
            base: Varnode::reg(0, 1),
            version: 0,
        }
    }

    /// An assignment whose RHS operands are never written inside the loop
    /// (and the LHS is never re-assigned) must be hoisted above the loop.
    #[test]
    fn invariant_assignment_is_hoisted() {
        // Setup:
        //   while (cond) {
        //       inv = a + b;      // a, b never modified inside loop → invariant
        //       a   = inv + 1;    // uses inv but modifies a; not a candidate
        //                         //   (a is written above; but written only once,
        //                         //    so we'd check inputs — `inv` is modified
        //                         //    inside the loop above, so this stays).
        //   }
        let a = Varnode::reg(0, 4);
        let b = Varnode::reg(8, 4);
        let inv = Varnode::unique(0, 4);
        let inv_stmt = stmt(IrOp::IntAdd, inv, vec![a, b], 0x1000);
        // Second statement: x = inv + 1 — but this would also be a candidate
        // because inv is written inside the loop (modified) so x's input
        // (inv) is "modified", so x is NOT hoistable. Good.
        let x = Varnode::reg(16, 4);
        let one = Varnode::constant(1, 4);
        let x_stmt = stmt(IrOp::IntAdd, x, vec![inv, one], 0x1004);

        let mut body = vec![HirNode::While {
            cond: dummy_cond(),
            body: vec![inv_stmt.clone(), x_stmt.clone()],
        }];

        hoist_loop_invariants(&mut body);

        // Expected layout:
        //   [inv_stmt, while { [x_stmt] }]
        assert_eq!(body.len(), 2, "expected hoisted stmt + loop, got {body:#?}");
        match &body[0] {
            HirNode::Statement(insn) => assert_eq!(insn.output, Some(inv)),
            other => panic!("expected hoisted Statement, got {other:?}"),
        }
        match &body[1] {
            HirNode::While { body: inner, .. } => {
                assert_eq!(inner.len(), 1, "loop body should retain only x_stmt");
                match &inner[0] {
                    HirNode::Statement(i) => assert_eq!(i.output, Some(x)),
                    other => panic!("expected x_stmt in loop, got {other:?}"),
                }
            }
            other => panic!("expected While, got {other:?}"),
        }
    }

    /// A statement whose RHS depends on a variable modified inside the
    /// loop must NOT be hoisted.
    #[test]
    fn non_invariant_assignment_stays_inside_loop() {
        // Setup:
        //   while (cond) {
        //       i = i + 1;        // i depends on i (modified inside loop)
        //   }
        let i = Varnode::reg(0, 4);
        let one = Varnode::constant(1, 4);
        let inc_stmt = stmt(IrOp::IntAdd, i, vec![i, one], 0x1000);

        let mut body = vec![HirNode::While {
            cond: dummy_cond(),
            body: vec![inc_stmt.clone()],
        }];

        hoist_loop_invariants(&mut body);

        // Nothing hoisted; loop body unchanged.
        assert_eq!(body.len(), 1, "expected exactly one node (the loop)");
        match &body[0] {
            HirNode::While { body: inner, .. } => {
                assert_eq!(inner.len(), 1);
                match &inner[0] {
                    HirNode::Statement(insn) => {
                        assert_eq!(insn.output, Some(i));
                        assert_eq!(insn.op, IrOp::IntAdd);
                    }
                    other => panic!("expected Statement, got {other:?}"),
                }
            }
            other => panic!("expected While, got {other:?}"),
        }
    }
}
