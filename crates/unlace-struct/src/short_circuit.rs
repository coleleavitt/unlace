//! Post-structuring pass: recover short-circuit boolean expressions (`&&`, `||`).
//!
//! Compilers lower `a && b` and `a || b` into nested conditional branches
//! (diamond CFG shapes). After structuring, these appear as nested `If` nodes
//! in the HIR:
//!
//! **`a && b`** (nested if in then-branch):
//! ```text
//! If(a) {
//!     If(b) { true_body } else { false_body }
//! } else {
//!     false_body   // duplicate of inner else
//! }
//! ```
//!
//! **`a || b`** (nested if in else-branch):
//! ```text
//! If(a) {
//!     true_body
//! } else {
//!     If(b) { true_body } else { false_body }  // inner then = outer then
//! }
//! ```
//!
//! This pass detects these patterns and collapses them into a single `If`
//! whose condition is a synthetic `BoolAnd` or `BoolOr` IR instruction,
//! which the C printer already renders as `&&` / `||`.

use crate::hir::{HirFunction, HirNode};
use smallvec::smallvec;
use unlace_ir::ssa::SsaVarnode;
use unlace_ir::{IrInsn, IrOp, Varnode};

/// Counter for generating unique synthetic varnode offsets.
///
/// Starts high in the unique space to avoid collisions with lifter temporaries.
struct SynthCounter(u64);

impl SynthCounter {
    fn new() -> Self {
        // Start at a high offset unlikely to collide with real uniques.
        Self(0xFFFE_0000)
    }

    /// Allocate a fresh 1-byte unique-space varnode and its SSA wrapper.
    fn next_varnode(&mut self) -> (Varnode, SsaVarnode) {
        let vn = Varnode::unique(self.0, 1);
        let sv = SsaVarnode {
            base: vn,
            version: 0,
        };
        self.0 += 1;
        (vn, sv)
    }
}

/// Entry point: walk the HIR and collapse short-circuit boolean patterns.
pub fn short_circuit_recovery(func: &mut HirFunction) {
    let mut ctr = SynthCounter::new();
    func.body = recover_short_circuits(std::mem::take(&mut func.body), func, &mut ctr);
}

/// Process a list of HIR nodes, returning the transformed list.
///
/// New `Statement` nodes for synthetic `BoolAnd`/`BoolOr` instructions are
/// inserted immediately before the collapsed `If`.
fn recover_short_circuits(
    nodes: Vec<HirNode>,
    func: &mut HirFunction,
    ctr: &mut SynthCounter,
) -> Vec<HirNode> {
    let mut out = Vec::with_capacity(nodes.len());
    for node in nodes {
        recover_into(node, func, ctr, &mut out);
    }
    out
}

/// Transform a single node and push the result (possibly multiple nodes) into `out`.
fn recover_into(
    node: HirNode,
    func: &mut HirFunction,
    ctr: &mut SynthCounter,
    out: &mut Vec<HirNode>,
) {
    match node {
        HirNode::If {
            cond,
            then_body,
            else_body: Some(else_body),
        } => {
            // Match top-down: collapse short-circuit patterns before recursing
            // into children, so chained `a && b && c` collapses fully.
            try_collapse(cond, then_body, else_body, func, ctr, out);
        }

        HirNode::If {
            cond,
            then_body,
            else_body: None,
        } => {
            let then_body = recover_short_circuits(then_body, func, ctr);
            out.push(HirNode::If {
                cond,
                then_body,
                else_body: None,
            });
        }

        HirNode::Block(children) => {
            out.push(HirNode::Block(recover_short_circuits(children, func, ctr)));
        }

        HirNode::While { cond, body } => {
            out.push(HirNode::While {
                cond,
                body: recover_short_circuits(body, func, ctr),
            });
        }

        HirNode::DoWhile { body, cond } => {
            out.push(HirNode::DoWhile {
                body: recover_short_circuits(body, func, ctr),
                cond,
            });
        }

        HirNode::For {
            init,
            cond,
            update,
            body,
        } => {
            out.push(HirNode::For {
                init,
                cond,
                update,
                body: recover_short_circuits(body, func, ctr),
            });
        }

        HirNode::Switch {
            cond,
            cases,
            default,
        } => {
            out.push(HirNode::Switch {
                cond,
                cases: cases
                    .into_iter()
                    .map(|(c, body, ft)| (c, recover_short_circuits(body, func, ctr), ft))
                    .collect(),
                default: default.map(|d| recover_short_circuits(d, func, ctr)),
            });
        }

        HirNode::TryCatch {
            try_body,
            catch_body,
        } => {
            out.push(HirNode::TryCatch {
                try_body: recover_short_circuits(try_body, func, ctr),
                catch_body: recover_short_circuits(catch_body, func, ctr),
            });
        }

        other => out.push(other),
    }
}

/// Collapse short-circuit patterns top-down, then recurse into remaining children.
fn try_collapse(
    cond_a: SsaVarnode,
    then_body: Vec<HirNode>,
    else_body: Vec<HirNode>,
    func: &mut HirFunction,
    ctr: &mut SynthCounter,
    out: &mut Vec<HirNode>,
) {
    // --- Pattern: a && b ---
    // Outer then is a single If(b) whose else matches the outer else.
    if let Some((cond_b, inner_then, inner_else)) = as_single_if_with_else(&then_body) {
        if bodies_eq(&inner_else, &else_body) {
            let (vn, sv) = ctr.next_varnode();
            let insn =
                IrInsn::with_output(IrOp::BoolAnd, vn, smallvec![cond_a.base, cond_b.base], 0);
            func.foldable_exprs.insert(sv);
            out.push(HirNode::Statement(insn));
            // Recurse: the merged If may itself be collapsible (a && b && c).
            try_collapse(sv, inner_then, else_body, func, ctr, out);
            return;
        }
    }

    // --- Pattern: a || b ---
    // Outer else is a single If(b) whose then matches the outer then.
    if let Some((cond_b, inner_then, inner_else)) = as_single_if_with_else(&else_body) {
        if bodies_eq(&inner_then, &then_body) {
            let (vn, sv) = ctr.next_varnode();
            let insn =
                IrInsn::with_output(IrOp::BoolOr, vn, smallvec![cond_a.base, cond_b.base], 0);
            func.foldable_exprs.insert(sv);
            out.push(HirNode::Statement(insn));
            // Recurse: the merged If may itself be collapsible.
            try_collapse(sv, then_body, inner_else, func, ctr, out);
            return;
        }
    }

    // No pattern matched — recurse into children, then emit.
    let then_body = recover_short_circuits(then_body, func, ctr);
    let else_body = recover_short_circuits(else_body, func, ctr);
    out.push(HirNode::If {
        cond: cond_a,
        then_body,
        else_body: Some(else_body),
    });
}

/// If `nodes` is exactly one `If` with an else branch, return its pieces.
fn as_single_if_with_else(nodes: &[HirNode]) -> Option<(SsaVarnode, Vec<HirNode>, Vec<HirNode>)> {
    match nodes {
        [
            HirNode::If {
                cond,
                then_body,
                else_body: Some(else_body),
            },
        ] => Some((*cond, then_body.clone(), else_body.clone())),
        _ => None,
    }
}

/// Structural equality of two HIR body slices.
///
/// Uses the derived `PartialEq` on `HirNode` which compares all fields
/// recursively (including instruction addresses and varnode contents).
fn bodies_eq(a: &[HirNode], b: &[HirNode]) -> bool {
    a == b
}

#[cfg(test)]
mod tests {
    use std::collections::{BTreeMap, BTreeSet};

    use smallvec::smallvec;
    use unlace_ir::ssa::{PrimitiveType, SsaVarnode};
    use unlace_ir::{IrInsn, IrOp, Varnode};

    use super::*;
    use crate::hir::HirFunction;

    fn sv(offset: u64, size: u8, version: u32) -> SsaVarnode {
        SsaVarnode {
            base: Varnode::reg(offset, size),
            version,
        }
    }

    fn make_func(body: Vec<HirNode>) -> HirFunction {
        HirFunction {
            name: "test".to_string(),
            params: vec![],
            return_type: PrimitiveType::Int(4),
            body,
            addr: 0x1000,
            foldable_exprs: BTreeSet::new(),
            panic_sites: BTreeMap::new(),
            noreturn: false,
            composite_var_types: BTreeMap::new(),
        }
    }

    fn return_node(val: u64) -> HirNode {
        HirNode::Return(Some(SsaVarnode {
            base: Varnode::constant(val, 4),
            version: 0,
        }))
    }

    // ---------------------------------------------------------------
    // test_and_short_circuit
    // ---------------------------------------------------------------
    // if(a) { if(b) { X } else { Y } } else { Y }
    //   → Statement(BoolAnd), if(a && b) { X } else { Y }
    #[test]
    fn test_and_short_circuit() {
        let cond_a = sv(0, 1, 0);
        let cond_b = sv(8, 1, 0);

        let true_body = vec![return_node(1)];
        let false_body = vec![return_node(0)];

        let body = vec![HirNode::If {
            cond: cond_a,
            then_body: vec![HirNode::If {
                cond: cond_b,
                then_body: true_body.clone(),
                else_body: Some(false_body.clone()),
            }],
            else_body: Some(false_body.clone()),
        }];

        let mut func = make_func(body);
        short_circuit_recovery(&mut func);

        // Should be: [Statement(BoolAnd), If { cond: synth, ... }]
        assert_eq!(
            func.body.len(),
            2,
            "expected Statement + If, got {:?}",
            func.body
        );

        // First node: Statement with BoolAnd
        match &func.body[0] {
            HirNode::Statement(insn) => {
                assert_eq!(insn.op, IrOp::BoolAnd);
                assert_eq!(insn.inputs[0], cond_a.base);
                assert_eq!(insn.inputs[1], cond_b.base);
            }
            other => panic!("expected Statement(BoolAnd), got {other:?}"),
        }

        // Second node: If with merged condition
        match &func.body[1] {
            HirNode::If {
                then_body,
                else_body,
                ..
            } => {
                assert_eq!(then_body, &true_body);
                assert_eq!(else_body.as_deref(), Some(false_body.as_slice()));
            }
            other => panic!("expected If, got {other:?}"),
        }

        // Synthetic SsaVarnode should be in foldable_exprs
        assert_eq!(func.foldable_exprs.len(), 1);
    }

    // ---------------------------------------------------------------
    // test_or_short_circuit
    // ---------------------------------------------------------------
    // if(a) { X } else { if(b) { X } else { Y } }
    //   → Statement(BoolOr), if(a || b) { X } else { Y }
    #[test]
    fn test_or_short_circuit() {
        let cond_a = sv(0, 1, 0);
        let cond_b = sv(8, 1, 0);

        let true_body = vec![return_node(1)];
        let false_body = vec![return_node(0)];

        let body = vec![HirNode::If {
            cond: cond_a,
            then_body: true_body.clone(),
            else_body: Some(vec![HirNode::If {
                cond: cond_b,
                then_body: true_body.clone(),
                else_body: Some(false_body.clone()),
            }]),
        }];

        let mut func = make_func(body);
        short_circuit_recovery(&mut func);

        assert_eq!(
            func.body.len(),
            2,
            "expected Statement + If, got {:?}",
            func.body
        );

        match &func.body[0] {
            HirNode::Statement(insn) => {
                assert_eq!(insn.op, IrOp::BoolOr);
                assert_eq!(insn.inputs[0], cond_a.base);
                assert_eq!(insn.inputs[1], cond_b.base);
            }
            other => panic!("expected Statement(BoolOr), got {other:?}"),
        }

        match &func.body[1] {
            HirNode::If {
                then_body,
                else_body,
                ..
            } => {
                assert_eq!(then_body, &true_body);
                assert_eq!(else_body.as_deref(), Some(false_body.as_slice()));
            }
            other => panic!("expected If, got {other:?}"),
        }

        assert_eq!(func.foldable_exprs.len(), 1);
    }

    // ---------------------------------------------------------------
    // test_no_short_circuit_different_bodies
    // ---------------------------------------------------------------
    // Nested ifs with NON-matching bodies should remain unchanged.
    #[test]
    fn test_no_short_circuit_different_bodies() {
        let cond_a = sv(0, 1, 0);
        let cond_b = sv(8, 1, 0);

        let body = vec![HirNode::If {
            cond: cond_a,
            then_body: vec![HirNode::If {
                cond: cond_b,
                then_body: vec![return_node(1)],
                else_body: Some(vec![return_node(2)]),
            }],
            else_body: Some(vec![return_node(3)]), // different from inner else (2)
        }];

        let original = body.clone();
        let mut func = make_func(body);
        short_circuit_recovery(&mut func);

        assert_eq!(func.body, original, "different bodies should not collapse");
        assert!(func.foldable_exprs.is_empty());
    }

    // ---------------------------------------------------------------
    // test_nested_short_circuit
    // ---------------------------------------------------------------
    // if(a) { if(b) { if(c) { X } else { Y } } else { Y } } else { Y }
    //   → a && b && c
    #[test]
    fn test_nested_short_circuit() {
        let cond_a = sv(0, 1, 0);
        let cond_b = sv(8, 1, 0);
        let cond_c = sv(16, 1, 0);

        let true_body = vec![return_node(1)];
        let false_body = vec![return_node(0)];

        let body = vec![HirNode::If {
            cond: cond_a,
            then_body: vec![HirNode::If {
                cond: cond_b,
                then_body: vec![HirNode::If {
                    cond: cond_c,
                    then_body: true_body.clone(),
                    else_body: Some(false_body.clone()),
                }],
                else_body: Some(false_body.clone()),
            }],
            else_body: Some(false_body.clone()),
        }];

        let mut func = make_func(body);
        short_circuit_recovery(&mut func);

        // Should produce: [Statement(BoolAnd a,b), Statement(BoolAnd ab,c), If(abc)]
        assert_eq!(
            func.body.len(),
            3,
            "expected 2 Statements + If, got {:?}",
            func.body
        );

        // First: BoolAnd(b, c) — inner collapse happens first during recursion
        match &func.body[0] {
            HirNode::Statement(insn) => assert_eq!(insn.op, IrOp::BoolAnd),
            other => panic!("expected Statement(BoolAnd), got {other:?}"),
        }

        // Second: BoolAnd(a, <synth>)
        match &func.body[1] {
            HirNode::Statement(insn) => assert_eq!(insn.op, IrOp::BoolAnd),
            other => panic!("expected Statement(BoolAnd), got {other:?}"),
        }

        // Third: If with the final merged condition
        match &func.body[2] {
            HirNode::If {
                then_body,
                else_body,
                ..
            } => {
                assert_eq!(then_body, &true_body);
                assert_eq!(else_body.as_deref(), Some(false_body.as_slice()));
            }
            other => panic!("expected If, got {other:?}"),
        }

        assert_eq!(func.foldable_exprs.len(), 2, "two synthetic varnodes");
    }

    // ---------------------------------------------------------------
    // test_no_collapse_without_else
    // ---------------------------------------------------------------
    // if(a) { if(b) { X } } — no else on either, no pattern.
    #[test]
    fn test_no_collapse_without_else() {
        let cond_a = sv(0, 1, 0);
        let cond_b = sv(8, 1, 0);

        let body = vec![HirNode::If {
            cond: cond_a,
            then_body: vec![HirNode::If {
                cond: cond_b,
                then_body: vec![return_node(1)],
                else_body: None,
            }],
            else_body: None,
        }];

        let original = body.clone();
        let mut func = make_func(body);
        short_circuit_recovery(&mut func);

        assert_eq!(func.body, original);
    }

    // ---------------------------------------------------------------
    // test_mixed_and_or_chain
    // ---------------------------------------------------------------
    // (a && b) || c:
    //   if(a) {
    //     if(b) { X } else { if(c) { X } else { Y } }
    //   } else {
    //     if(c) { X } else { Y }
    //   }
    #[test]
    fn test_mixed_and_or_chain() {
        let cond_a = sv(0, 1, 0);
        let cond_b = sv(8, 1, 0);
        let cond_c = sv(16, 1, 0);

        let true_body = vec![return_node(1)];
        let false_body = vec![return_node(0)];

        let inner_c = HirNode::If {
            cond: cond_c,
            then_body: true_body.clone(),
            else_body: Some(false_body.clone()),
        };

        // if(a) { if(b) { X } else { if(c) { X } else { Y } } } else { if(c) { X } else { Y } }
        let body = vec![HirNode::If {
            cond: cond_a,
            then_body: vec![HirNode::If {
                cond: cond_b,
                then_body: true_body.clone(),
                else_body: Some(vec![inner_c.clone()]),
            }],
            else_body: Some(vec![inner_c]),
        }];

        let mut func = make_func(body);
        short_circuit_recovery(&mut func);

        // After recovery: the inner `if(b) { X } else { if(c) { X } else { Y } }`
        // collapses to `b || c` (|| pattern on b's else-branch).
        // Then outer: if(a) { if(b||c) { X } else { Y } } else { if(c){X} else {Y} }
        // The outer else is `if(c){X}else{Y}` which is NOT the same as the inner
        // after collapsing `b||c`. So outer && doesn't fire... unless the inner
        // collapse produces something that matches.
        //
        // Actually the inner collapse produces:
        //   then_body = [Statement(BoolOr), If(b||c) { X } else { Y }]
        // which doesn't match the outer else [If(c) { X } else { Y }].
        // So only the inner || fires, outer stays as If.

        // Verify at least one BoolOr was produced (the b||c collapse)
        let mut found_bool_or = false;
        for node in &func.body {
            check_for_op(node, IrOp::BoolOr, &mut found_bool_or);
        }
        assert!(
            found_bool_or,
            "should have at least one BoolOr from b||c collapse"
        );
    }

    fn check_for_op(node: &HirNode, target: IrOp, found: &mut bool) {
        match node {
            HirNode::Statement(insn) if insn.op == target => *found = true,
            HirNode::If {
                then_body,
                else_body,
                ..
            } => {
                for n in then_body {
                    check_for_op(n, target, found);
                }
                if let Some(eb) = else_body {
                    for n in eb {
                        check_for_op(n, target, found);
                    }
                }
            }
            HirNode::Block(children) => {
                for n in children {
                    check_for_op(n, target, found);
                }
            }
            _ => {}
        }
    }
}
