//! Post-structuring pass: recover short-circuit boolean expressions (`&&`, `||`).
//!
//! Compilers lower `a && b` and `a || b` into chains of conditional branches.
//! The structurer turns those chains into nested `If` nodes, and the DREAM
//! condition refinement peels one atomic reaching-condition factor per
//! nesting level (a `NotPred` factor becomes an `If` with an empty then-arm).
//! This pass folds the nesting back into one `If` whose condition is a
//! synthetic `BoolAnd` / `BoolOr` / `BoolNegate` instruction, which the C
//! printer renders as `&&` / `||` / `!`.
//!
//! A *guard* is an `If` with exactly one non-empty arm. Its condition is the
//! test when the then-arm is the non-empty one, and the negated test when
//! only the else-arm is non-empty. With `lit(x)` for that condition:
//!
//! ```text
//! if (a) { if (b) { X } }                  -> if (a && b) { X }
//! if (a) { } else { if (b) { } else { X } } -> if (!a && !b) { X }
//! guard(a) { guard(b) { X } }              -> if (lit(a) && lit(b)) { X }
//! if (a) { if (b) { X } else { Y } } else { Y } -> if (a && b) { X } else { Y }
//! if (a) { X } else { if (b) { X } else { Y } } -> if (a || b) { X } else { Y }
//! if (a) { X } else { guard(b) { X } }     -> if (a || lit(b)) { X }
//! if (a) { guard(b) { Y } } else { Y }     -> if (!a || lit(b)) { Y }
//! guard(a) { X } guard(b) { X }            -> if (lit(a) || lit(b)) { X }
//! ```
//!
//! The combined condition is the reaching condition of `X`: the conjunction
//! (or disjunction) of the peeled factors, each with its own polarity. The
//! last rule only applies when `X` never falls through, since otherwise
//! `a && b` would run `X` twice.
//!
//! Every inner `If` must be the only node of its enclosing arm, so the inner
//! test has no statements of its own that the merge could reorder. Hoisting
//! such statements above the outer test is not safe in general: on x86 they
//! usually rewrite the flag registers and locals that the outer test reads.

use crate::hir::{HirFunction, HirNode};
use smallvec::SmallVec;
use unlace_ir::ssa::SsaVarnode;
use unlace_ir::{IrInsn, IrOp, Varnode};

/// Entry point: walk the HIR and collapse short-circuit boolean patterns.
pub fn short_circuit_recovery(func: &mut HirFunction) {
    let body = std::mem::take(&mut func.body);
    let mut recovery = Recovery {
        func,
        // High in the unique space to avoid collisions with lifter temporaries.
        next_unique: 0xFFFE_0000,
    };
    let body = recovery.recover_nodes(body);
    func.body = body;
}

/// An `If` with exactly one non-empty arm: `body` runs when `cond` is true,
/// or when it is false if `negated` is set.
#[derive(Clone, Copy)]
struct Guard<'a> {
    cond: SsaVarnode,
    negated: bool,
    body: &'a [HirNode],
}

impl<'a> Guard<'a> {
    fn from_arms(
        cond: SsaVarnode,
        then_body: &'a [HirNode],
        else_body: Option<&'a [HirNode]>,
    ) -> Option<Self> {
        let else_body = else_body.unwrap_or_default();
        match (then_body.is_empty(), else_body.is_empty()) {
            (false, true) => Some(Guard {
                cond,
                negated: false,
                body: then_body,
            }),
            (true, false) => Some(Guard {
                cond,
                negated: true,
                body: else_body,
            }),
            _ => None,
        }
    }

    fn of_node(node: &'a HirNode) -> Option<Self> {
        match node {
            HirNode::If {
                cond,
                then_body,
                else_body,
            } => Self::from_arms(*cond, then_body, else_body.as_deref()),
            _ => None,
        }
    }

    /// The guard of `body` when `body` is exactly one guard.
    fn single(body: &'a [HirNode]) -> Option<Self> {
        match body {
            [node] => Self::of_node(node),
            _ => None,
        }
    }
}

/// Recovery state: the function (for `foldable_exprs`) and the next free
/// unique-space offset for synthetic condition varnodes.
struct Recovery<'f> {
    func: &'f mut HirFunction,
    next_unique: u64,
}

impl Recovery<'_> {
    /// Process a list of HIR nodes, returning the transformed list.
    fn recover_nodes(&mut self, nodes: Vec<HirNode>) -> Vec<HirNode> {
        let mut out = Vec::with_capacity(nodes.len());
        let mut idx = 0;
        while idx < nodes.len() {
            if let Some(first) = Guard::of_node(&nodes[idx])
                && ends_in_jump(first.body)
                && let Some(second) = nodes.get(idx + 1).and_then(Guard::of_node)
                && first.body == second.body
            {
                let lhs = self.literal(first, &mut out);
                let rhs = self.literal(second, &mut out);
                let cond = self.synth(IrOp::BoolOr, &[lhs, rhs], &mut out);
                self.recover_if(cond, first.body.to_vec(), None, &mut out);
                idx += 2;
                continue;
            }
            self.recover_into(nodes[idx].clone(), &mut out);
            idx += 1;
        }
        out
    }

    /// Transform a single node and push the result (possibly several nodes,
    /// synthetic condition statements first) into `out`.
    fn recover_into(&mut self, node: HirNode, out: &mut Vec<HirNode>) {
        match node {
            HirNode::If {
                cond,
                then_body,
                else_body,
            } => self.recover_if(cond, then_body, else_body, out),

            HirNode::IfCmp {
                cmp_op,
                cmp_lhs,
                cmp_rhs,
                then_body,
                else_body,
                addr,
            } => {
                out.push(HirNode::IfCmp {
                    cmp_op,
                    cmp_lhs,
                    cmp_rhs,
                    then_body: self.recover_nodes(then_body),
                    else_body: else_body.map(|body| self.recover_nodes(body)),
                    addr,
                });
            }

            HirNode::Block(children) => {
                out.push(HirNode::Block(self.recover_nodes(children)));
            }

            HirNode::While { cond, body } => {
                out.push(HirNode::While {
                    cond,
                    body: self.recover_nodes(body),
                });
            }

            HirNode::DoWhile { body, cond } => {
                out.push(HirNode::DoWhile {
                    body: self.recover_nodes(body),
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
                    body: self.recover_nodes(body),
                });
            }

            HirNode::Switch {
                cond,
                cases,
                default,
                jumptable_addr,
                jumptable_cases,
            } => {
                out.push(HirNode::Switch {
                    cond,
                    cases: cases
                        .into_iter()
                        .map(|(c, body, ft)| (c, self.recover_nodes(body), ft))
                        .collect(),
                    default: default.map(|d| self.recover_nodes(d)),
                    jumptable_addr,
                    jumptable_cases,
                });
            }

            HirNode::TryCatch {
                try_body,
                catch_arms,
            } => {
                out.push(HirNode::TryCatch {
                    try_body: self.recover_nodes(try_body),
                    catch_arms: catch_arms
                        .into_iter()
                        .map(|(ty, body)| (ty, self.recover_nodes(body)))
                        .collect(),
                });
            }

            HirNode::TryFinally {
                try_body,
                finally_body,
            } => {
                out.push(HirNode::TryFinally {
                    try_body: self.recover_nodes(try_body),
                    finally_body: self.recover_nodes(finally_body),
                });
            }

            HirNode::GuardedIf {
                cond_code,
                then_body,
                else_body,
            } => {
                out.push(HirNode::GuardedIf {
                    cond_code,
                    then_body: self.recover_nodes(then_body),
                    else_body: self.recover_nodes(else_body),
                });
            }

            HirNode::Commented { pre, post, inner } => {
                let mut recovered = self.recover_nodes(vec![*inner]);
                let inner = if recovered.len() == 1 {
                    recovered.pop().expect("len checked")
                } else {
                    HirNode::Block(recovered)
                };
                out.push(HirNode::Commented {
                    pre,
                    post,
                    inner: Box::new(inner),
                });
            }

            other => out.push(other),
        }
    }

    /// Collapse short-circuit patterns rooted at one `If`, top-down, so a
    /// chain like `a && b && c` collapses fully, then recurse into the arms.
    fn recover_if(
        &mut self,
        cond: SsaVarnode,
        then_body: Vec<HirNode>,
        else_body: Option<Vec<HirNode>>,
        out: &mut Vec<HirNode>,
    ) {
        if let Some(outer) = Guard::from_arms(cond, &then_body, else_body.as_deref())
            && let Some(inner) = Guard::single(outer.body)
        {
            let lhs = self.literal(outer, out);
            let rhs = self.literal(inner, out);
            let cond = self.synth(IrOp::BoolAnd, &[lhs, rhs], out);
            self.recover_if(cond, inner.body.to_vec(), None, out);
            return;
        }
        match else_body {
            Some(else_body) if !then_body.is_empty() && !else_body.is_empty() => {
                self.recover_if_else(cond, then_body, else_body, out);
            }
            else_body => out.push(HirNode::If {
                cond,
                then_body: self.recover_nodes(then_body),
                else_body: else_body.map(|body| self.recover_nodes(body)),
            }),
        }
    }

    /// [`Self::recover_if`] for an `If` whose two arms both have statements.
    fn recover_if_else(
        &mut self,
        cond_a: SsaVarnode,
        then_body: Vec<HirNode>,
        else_body: Vec<HirNode>,
        out: &mut Vec<HirNode>,
    ) {
        // if (a) { if (b) { X } else { Y } } else { Y }
        if let Some((cond_b, inner_then, inner_else)) = as_single_if_with_else(&then_body)
            && inner_else == else_body.as_slice()
        {
            let cond = self.synth(IrOp::BoolAnd, &[cond_a, cond_b], out);
            self.recover_if(cond, inner_then.to_vec(), Some(else_body), out);
            return;
        }

        // if (a) { X } else { if (b) { X } else { Y } }
        if let Some((cond_b, inner_then, inner_else)) = as_single_if_with_else(&else_body)
            && inner_then == then_body.as_slice()
        {
            let cond = self.synth(IrOp::BoolOr, &[cond_a, cond_b], out);
            self.recover_if(cond, then_body, Some(inner_else.to_vec()), out);
            return;
        }

        // if (a) { X } else { guard(b) { X } }
        if let Some(inner) = Guard::single(&else_body)
            && inner.body == then_body.as_slice()
        {
            let rhs = self.literal(inner, out);
            let cond = self.synth(IrOp::BoolOr, &[cond_a, rhs], out);
            self.recover_if(cond, then_body, None, out);
            return;
        }

        // if (a) { guard(b) { Y } } else { Y }
        if let Some(inner) = Guard::single(&then_body)
            && inner.body == else_body.as_slice()
        {
            let lhs = self.synth(IrOp::BoolNegate, &[cond_a], out);
            let rhs = self.literal(inner, out);
            let cond = self.synth(IrOp::BoolOr, &[lhs, rhs], out);
            self.recover_if(cond, else_body, None, out);
            return;
        }

        out.push(HirNode::If {
            cond: cond_a,
            then_body: self.recover_nodes(then_body),
            else_body: Some(self.recover_nodes(else_body)),
        });
    }

    /// The condition under which `guard.body` runs.
    fn literal(&mut self, guard: Guard<'_>, out: &mut Vec<HirNode>) -> SsaVarnode {
        if guard.negated {
            self.synth(IrOp::BoolNegate, &[guard.cond], out)
        } else {
            guard.cond
        }
    }

    /// Emit `op(inputs)` into a fresh 1-byte unique varnode, mark it foldable
    /// so the printer inlines it into the `If` condition, and return it.
    fn synth(&mut self, op: IrOp, inputs: &[SsaVarnode], out: &mut Vec<HirNode>) -> SsaVarnode {
        let output = Varnode::unique(self.next_unique, 1);
        self.next_unique += 1;
        let inputs: SmallVec<[Varnode; 3]> = inputs.iter().map(|input| input.base).collect();
        out.push(HirNode::Statement(IrInsn::with_output(
            op, output, inputs, 0,
        )));
        let output = SsaVarnode {
            base: output,
            version: 0,
        };
        self.func.foldable_exprs.insert(output);
        output
    }
}

/// If `nodes` is exactly one `If` with an else branch, return its pieces.
fn as_single_if_with_else(nodes: &[HirNode]) -> Option<(SsaVarnode, &[HirNode], &[HirNode])> {
    match nodes {
        [
            HirNode::If {
                cond,
                then_body,
                else_body: Some(else_body),
            },
        ] => Some((*cond, then_body, else_body)),
        _ => None,
    }
}

/// Whether control never falls out of the end of `body`.
fn ends_in_jump(body: &[HirNode]) -> bool {
    matches!(
        body.last(),
        Some(
            HirNode::Return(_)
                | HirNode::Goto(_)
                | HirNode::Break
                | HirNode::Continue
                | HirNode::TailCall { .. }
        )
    )
}

#[cfg(test)]
mod tests {
    use std::collections::{BTreeMap, BTreeSet};

    use smallvec::smallvec;
    use unlace_ir::ssa::{PrimitiveType, SsaVarnode};
    use unlace_ir::{IrOp, Varnode};

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
            go_defer_sites: Vec::new(),
            rust_async: None,
            noreturn: false,
            composite_var_types: BTreeMap::new(),
            is_ctor: false,
            is_dtor: false,
            class_name: None,
            merged_names: BTreeMap::new(),
            objc_dispatch_calls: BTreeMap::new(),
            go_defer_recover_calls: BTreeMap::new(),
            indirect_branch_kinds: BTreeMap::new(),
            byref_boxes: BTreeMap::new(),
            byref_params: std::collections::BTreeSet::new(),
            var_role_names: std::collections::BTreeMap::new(),
            finalized_signature: None,
            byref_locals: std::collections::BTreeSet::new(),
            stack_frame: None,
            cpp_lambda_captures: Vec::new(),
            vtable_call_targets: BTreeMap::new(),
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
    // test_collapse_without_else
    // ---------------------------------------------------------------
    // if(a) { if(b) { X } } — recover as if(a && b) { X }.
    #[test]
    fn test_collapse_without_else() {
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

        let mut func = make_func(body);
        short_circuit_recovery(&mut func);

        assert_eq!(func.body.len(), 2);
        assert!(matches!(&func.body[0], HirNode::Statement(insn) if insn.op == IrOp::BoolAnd));
        assert!(matches!(
            &func.body[1],
            HirNode::If {
                else_body: None,
                ..
            }
        ));
    }

    #[test]
    fn test_nested_if_without_else_recovers_and() {
        let cond_a = sv(0, 1, 0);
        let cond_b = sv(8, 1, 0);
        let true_body = vec![return_node(1)];

        let body = vec![HirNode::If {
            cond: cond_a,
            then_body: vec![HirNode::If {
                cond: cond_b,
                then_body: true_body.clone(),
                else_body: None,
            }],
            else_body: None,
        }];

        let mut func = make_func(body);
        short_circuit_recovery(&mut func);

        assert_eq!(func.body.len(), 2, "expected Statement + If");
        match &func.body[0] {
            HirNode::Statement(insn) => {
                assert_eq!(insn.op, IrOp::BoolAnd);
                assert_eq!(insn.inputs[0], cond_a.base);
                assert_eq!(insn.inputs[1], cond_b.base);
            }
            other => panic!("expected Statement(BoolAnd), got {other:?}"),
        }
        match &func.body[1] {
            HirNode::If {
                then_body,
                else_body,
                ..
            } => {
                assert_eq!(then_body, &true_body);
                assert!(else_body.is_none());
            }
            other => panic!("expected If, got {other:?}"),
        }
        assert_eq!(func.foldable_exprs.len(), 1);
    }

    #[test]
    fn test_sequential_identical_ifs_recover_or() {
        let cond_a = sv(0, 1, 0);
        let cond_b = sv(8, 1, 0);
        let true_body = vec![return_node(1)];

        let body = vec![
            HirNode::If {
                cond: cond_a,
                then_body: true_body.clone(),
                else_body: None,
            },
            HirNode::If {
                cond: cond_b,
                then_body: true_body.clone(),
                else_body: None,
            },
        ];

        let mut func = make_func(body);
        short_circuit_recovery(&mut func);

        assert_eq!(func.body.len(), 2, "expected Statement + If");
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
                assert!(else_body.is_none());
            }
            other => panic!("expected If, got {other:?}"),
        }
        assert_eq!(func.foldable_exprs.len(), 1);
    }

    #[test]
    fn test_sequential_different_ifs_do_not_recover_or() {
        let cond_a = sv(0, 1, 0);
        let cond_b = sv(8, 1, 0);

        let body = vec![
            HirNode::If {
                cond: cond_a,
                then_body: vec![return_node(1)],
                else_body: None,
            },
            HirNode::If {
                cond: cond_b,
                then_body: vec![return_node(2)],
                else_body: None,
            },
        ];
        let original = body.clone();

        let mut func = make_func(body);
        short_circuit_recovery(&mut func);

        assert_eq!(func.body, original, "different bodies should not collapse");
        assert!(func.foldable_exprs.is_empty());
    }

    #[test]
    fn test_empty_then_else_chain_recovers_negated_and() {
        let not_a = sv(0, 1, 0);
        let not_b = sv(8, 1, 0);
        let true_body = vec![return_node(1)];

        let body = vec![HirNode::If {
            cond: not_a,
            then_body: vec![],
            else_body: Some(vec![HirNode::If {
                cond: not_b,
                then_body: vec![],
                else_body: Some(true_body.clone()),
            }]),
        }];

        let mut func = make_func(body);
        short_circuit_recovery(&mut func);

        assert_eq!(func.body.len(), 4, "expected 2 negates + BoolAnd + If");
        assert!(matches!(&func.body[0], HirNode::Statement(insn) if insn.op == IrOp::BoolNegate));
        assert!(matches!(&func.body[1], HirNode::Statement(insn) if insn.op == IrOp::BoolNegate));
        assert!(matches!(&func.body[2], HirNode::Statement(insn) if insn.op == IrOp::BoolAnd));
        match &func.body[3] {
            HirNode::If {
                then_body,
                else_body,
                ..
            } => {
                assert_eq!(then_body, &true_body);
                assert!(else_body.is_none());
            }
            other => panic!("expected If, got {other:?}"),
        }
        assert_eq!(func.foldable_exprs.len(), 3);
    }

    // (a && b) || c:
    //   if(a) { if(b) { X } else { if(c) { X } else { Y } } }
    //   else { if(c) { X } else { Y } }
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
        let body = vec![HirNode::If {
            cond: cond_a,
            then_body: vec![HirNode::If {
                cond: cond_b,
                then_body: true_body.clone(),
                else_body: Some(vec![inner_c.clone()]),
            }],
            else_body: Some(vec![inner_c]),
        }];

        let func = assert_equivalent(body, &[cond_a, cond_b, cond_c]);
        assert_eq!(ops(&func.body), [IrOp::BoolAnd, IrOp::BoolOr]);
        assert_eq!(
            func.body.last(),
            Some(&HirNode::If {
                cond: synth_cond(&func.body[1]),
                then_body: true_body,
                else_body: Some(false_body),
            })
        );
    }

    // if (a) { if (b) { } else { X } } -> if (a && !b) { X }
    #[test]
    fn and_with_negated_inner_guard() {
        let (a, b) = (sv(0, 1, 0), sv(8, 1, 0));
        let body = vec![HirNode::If {
            cond: a,
            then_body: vec![HirNode::If {
                cond: b,
                then_body: vec![],
                else_body: Some(vec![return_node(1)]),
            }],
            else_body: None,
        }];

        let func = assert_equivalent(body, &[a, b]);
        assert_eq!(ops(&func.body), [IrOp::BoolNegate, IrOp::BoolAnd]);
        assert_eq!(statement(&func.body[0]).inputs[..], [b.base]);
        assert_eq!(
            statement(&func.body[1]).inputs[..],
            [a.base, synth_cond(&func.body[0]).base]
        );
        assert_single_guarded_return(&func.body, 1);
    }

    // if (a) { } else { if (b) { X } } -> if (!a && b) { X }
    #[test]
    fn and_with_negated_outer_guard() {
        let (a, b) = (sv(0, 1, 0), sv(8, 1, 0));
        let body = vec![HirNode::If {
            cond: a,
            then_body: vec![],
            else_body: Some(vec![HirNode::If {
                cond: b,
                then_body: vec![return_node(1)],
                else_body: None,
            }]),
        }];

        let func = assert_equivalent(body, &[a, b]);
        assert_eq!(ops(&func.body), [IrOp::BoolNegate, IrOp::BoolAnd]);
        assert_eq!(
            statement(&func.body[1]).inputs[..],
            [synth_cond(&func.body[0]).base, b.base]
        );
        assert_single_guarded_return(&func.body, 1);
    }

    // `if (!a) { } else if (!b) { } else { X }` runs X exactly when
    // `a && b`. With `na`/`nb` the already-negated tests, the recovered
    // guard is `!na && !nb`.
    #[test]
    fn empty_then_else_if_chain_is_a_conjunction() {
        let (na, nb) = (sv(0, 1, 0), sv(8, 1, 0));
        let body = vec![HirNode::If {
            cond: na,
            then_body: vec![],
            else_body: Some(vec![HirNode::If {
                cond: nb,
                then_body: vec![],
                else_body: Some(vec![return_node(1)]),
            }]),
        }];

        let func = assert_equivalent(body, &[na, nb]);
        assert_eq!(
            ops(&func.body),
            [IrOp::BoolNegate, IrOp::BoolNegate, IrOp::BoolAnd]
        );
        assert_single_guarded_return(&func.body, 1);
    }

    // if (a) { X } else { if (b) { X } } -> if (a || b) { X }
    #[test]
    fn or_without_inner_else() {
        let (a, b) = (sv(0, 1, 0), sv(8, 1, 0));
        let body = vec![HirNode::If {
            cond: a,
            then_body: vec![return_node(1)],
            else_body: Some(vec![HirNode::If {
                cond: b,
                then_body: vec![return_node(1)],
                else_body: None,
            }]),
        }];

        let func = assert_equivalent(body, &[a, b]);
        assert_eq!(ops(&func.body), [IrOp::BoolOr]);
        assert_eq!(statement(&func.body[0]).inputs[..], [a.base, b.base]);
        assert_single_guarded_return(&func.body, 1);
    }

    // if (a) { if (b) { Y } } else { Y } -> if (!a || b) { Y }
    #[test]
    fn or_with_negated_outer_test() {
        let (a, b) = (sv(0, 1, 0), sv(8, 1, 0));
        let body = vec![HirNode::If {
            cond: a,
            then_body: vec![HirNode::If {
                cond: b,
                then_body: vec![return_node(1)],
                else_body: None,
            }],
            else_body: Some(vec![return_node(1)]),
        }];

        let func = assert_equivalent(body, &[a, b]);
        assert_eq!(ops(&func.body), [IrOp::BoolNegate, IrOp::BoolOr]);
        assert_single_guarded_return(&func.body, 1);
    }

    // a || b || c with no final else.
    #[test]
    fn or_chain_without_final_else() {
        let (a, b, c) = (sv(0, 1, 0), sv(8, 1, 0), sv(16, 1, 0));
        let body = vec![HirNode::If {
            cond: a,
            then_body: vec![return_node(1)],
            else_body: Some(vec![HirNode::If {
                cond: b,
                then_body: vec![return_node(1)],
                else_body: Some(vec![HirNode::If {
                    cond: c,
                    then_body: vec![return_node(1)],
                    else_body: None,
                }]),
            }]),
        }];

        let func = assert_equivalent(body, &[a, b, c]);
        assert_eq!(ops(&func.body), [IrOp::BoolOr, IrOp::BoolOr]);
        assert_single_guarded_return(&func.body, 1);
    }

    // `if (a) { X } if (b) { X }` runs X twice when both hold, unless X
    // leaves the block.
    #[test]
    fn sequential_ifs_with_fallthrough_body_stay_separate() {
        let (a, b) = (sv(0, 1, 0), sv(8, 1, 0));
        let call = HirNode::Statement(IrInsn::without_output(
            IrOp::Call,
            smallvec![Varnode::constant(0x2000, 8)],
            0x1100,
        ));
        let body = vec![
            HirNode::If {
                cond: a,
                then_body: vec![call.clone()],
                else_body: None,
            },
            HirNode::If {
                cond: b,
                then_body: vec![call],
                else_body: None,
            },
        ];
        let original = body.clone();

        let mut func = make_func(body);
        short_circuit_recovery(&mut func);
        assert_eq!(func.body, original);
    }

    // The DREAM splice peels one reaching-condition factor per `If`, putting
    // a `NotPred` body in the else-arm. The pass folds the factors back into
    // the full reaching condition `p0 && !p1` of the block.
    #[test]
    fn spliced_reaching_condition_folds_into_one_guard() {
        use crate::condition_refinement::StructuredNode;
        use crate::reaching_conditions::Cond;
        use crate::region_splice::splice_structured;
        use unlace_ir::BlockId;

        let (p0, p1) = (sv(0, 1, 0), sv(8, 1, 0));
        let node = StructuredNode::If {
            cond: Cond::Pred(0),
            then: Box::new(StructuredNode::If {
                cond: Cond::NotPred(1),
                then: Box::new(StructuredNode::Block(2)),
                els: None,
            }),
            els: None,
        };
        let node_to_block = BTreeMap::from([(2, BlockId(2))]);
        let bodies = BTreeMap::from([(BlockId(2), vec![return_node(1)])]);
        let pred_cond = BTreeMap::from([(0, p0), (1, p1)]);
        let body = splice_structured(&node, &node_to_block, &bodies, &pred_cond);

        let func = assert_equivalent(body, &[p0, p1]);
        assert_eq!(ops(&func.body), [IrOp::BoolNegate, IrOp::BoolAnd]);
        assert_single_guarded_return(&func.body, 1);
    }

    /// Run the pass and check, for every assignment of `conds`, that the
    /// result takes the same path (returns the same value, or falls through)
    /// as the input. Returns the transformed function.
    fn assert_equivalent(body: Vec<HirNode>, conds: &[SsaVarnode]) -> HirFunction {
        let mut func = make_func(body.clone());
        short_circuit_recovery(&mut func);
        for bits in 0..1u32 << conds.len() {
            let mut env: BTreeMap<Varnode, bool> = conds
                .iter()
                .enumerate()
                .map(|(i, c)| (c.base, bits & (1 << i) != 0))
                .collect();
            let expected = run(&body, &mut env.clone());
            assert_eq!(
                run(&func.body, &mut env),
                expected,
                "assignment {bits:#b}: {:?}",
                func.body
            );
        }
        func
    }

    /// Evaluate `If` nodes and synthetic boolean statements. `Some(v)` is
    /// the returned constant, `None` falling off the end.
    fn run(nodes: &[HirNode], env: &mut BTreeMap<Varnode, bool>) -> Option<Option<u64>> {
        for node in nodes {
            let ret = match node {
                HirNode::Statement(insn) => {
                    let input = |i: usize| env[&insn.inputs[i]];
                    let value = match insn.op {
                        IrOp::BoolAnd => input(0) && input(1),
                        IrOp::BoolOr => input(0) || input(1),
                        IrOp::BoolNegate => !input(0),
                        op => panic!("unexpected statement {op:?}"),
                    };
                    env.insert(insn.output.expect("synthetic output"), value);
                    None
                }
                HirNode::If {
                    cond,
                    then_body,
                    else_body,
                } => {
                    if env[&cond.base] {
                        run(then_body, env)
                    } else {
                        run(else_body.as_deref().unwrap_or_default(), env)
                    }
                }
                HirNode::Return(value) => Some(value.map(|v| v.base.offset)),
                other => panic!("unexpected node {other:?}"),
            };
            if ret.is_some() {
                return ret;
            }
        }
        None
    }

    fn statement(node: &HirNode) -> &IrInsn {
        match node {
            HirNode::Statement(insn) => insn,
            other => panic!("expected Statement, got {other:?}"),
        }
    }

    fn synth_cond(node: &HirNode) -> SsaVarnode {
        SsaVarnode {
            base: statement(node).output.expect("synthetic output"),
            version: 0,
        }
    }

    /// The ops of the leading synthetic statements.
    fn ops(body: &[HirNode]) -> Vec<IrOp> {
        body.iter()
            .map_while(|node| match node {
                HirNode::Statement(insn) => Some(insn.op),
                _ => None,
            })
            .collect()
    }

    /// `body` is synthetic statements followed by one else-less `If` on the
    /// last of them, returning `value`.
    fn assert_single_guarded_return(body: &[HirNode], value: u64) {
        let [.., last_stmt, guard] = body else {
            panic!("expected statements + If, got {body:?}");
        };
        assert_eq!(
            guard,
            &HirNode::If {
                cond: synth_cond(last_stmt),
                then_body: vec![return_node(value)],
                else_body: None,
            }
        );
    }
}
