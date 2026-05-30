//! If-else chain flattening post-pass.
//!
//! Walks the HIR and rewrites
//!
//! ```c
//! if (a) X else { if (b) Y else Z }
//! ```
//!
//! as
//!
//! ```c
//! if (a) X else if (b) Y else Z
//! ```
//!
//! by unwrapping `else_body: Some(vec![If { ... }])` whose only child is a
//! single `If`. Repeated to a fixed point so a 5-level nested chain becomes a
//! flat else-if cascade.
//!
//! After flattening, [`simplify_chain_conditions`] removes redundant
//! conditions in the cascade:
//!
//! - `if (a) X else if (a) Y` → `if (a) X` (`Y` unreachable, `a` is false in
//!   the else branch).
//! - `if (a) X else if (!a) Y` → `if (a) X else Y` (`!a` is implicit in the
//!   else branch).
//!
//! Run **after** the main structurer and **before** the C printer.

use unlace_ir::ssa::{SsaFunction, SsaVarnode, VarnodeSlot};
use unlace_ir::{IrInsn, IrOp};

use std::collections::BTreeMap;

use crate::hir::{HirFunction, HirNode};

/// Flatten every nested if-else chain in `func.body`.
pub fn flatten_if_else_chains(func: &mut HirFunction) {
    func.body = flatten_nodes(std::mem::take(&mut func.body));
}

/// Eliminate redundant conditions in flat `else if` chains.
///
/// Requires `func` to have already been flattened by
/// [`flatten_if_else_chains`]; otherwise the simplifier sees `Block`-wrapped
/// inner Ifs and silently does nothing.
pub fn simplify_chain_conditions(func: &mut HirFunction, ssa: &SsaFunction) {
    let def_map = build_def_map(ssa);
    func.body = simplify_nodes(std::mem::take(&mut func.body), &def_map);
}

fn build_def_map(ssa: &SsaFunction) -> BTreeMap<SsaVarnode, IrInsn> {
    let mut map = BTreeMap::new();
    for (&(bid, idx, ref slot), sv) in &ssa.var_map {
        if *slot != VarnodeSlot::Output {
            continue;
        }
        if let Some(block) = ssa.function.blocks.get(&bid)
            && let Some(insn) = block.insns.get(idx)
        {
            map.insert(*sv, insn.clone());
        }
    }
    map
}

fn simplify_nodes(nodes: Vec<HirNode>, def_map: &BTreeMap<SsaVarnode, IrInsn>) -> Vec<HirNode> {
    nodes
        .into_iter()
        .map(|n| simplify_node(n, def_map))
        .collect()
}

fn simplify_node(node: HirNode, def_map: &BTreeMap<SsaVarnode, IrInsn>) -> HirNode {
    match node {
        HirNode::If {
            cond,
            then_body,
            else_body,
        } => {
            let then_body = simplify_nodes(then_body, def_map);
            let else_body = else_body.map(|eb| simplify_nodes(eb, def_map));

            let else_body = match else_body {
                Some(eb) => simplify_else_against_outer(cond, eb, def_map),
                None => None,
            };

            HirNode::If {
                cond,
                then_body,
                else_body,
            }
        }
        HirNode::IfCmp {
            cmp_op,
            cmp_lhs,
            cmp_rhs,
            then_body,
            else_body,
            addr,
        } => HirNode::IfCmp {
            cmp_op,
            cmp_lhs,
            cmp_rhs,
            then_body: simplify_nodes(then_body, def_map),
            else_body: else_body.map(|eb| simplify_nodes(eb, def_map)),
            addr,
        },
        HirNode::Block(children) => HirNode::Block(simplify_nodes(children, def_map)),
        HirNode::While { cond, body } => HirNode::While {
            cond,
            body: simplify_nodes(body, def_map),
        },
        HirNode::DoWhile { body, cond } => HirNode::DoWhile {
            body: simplify_nodes(body, def_map),
            cond,
        },
        HirNode::For {
            init,
            cond,
            update,
            body,
        } => HirNode::For {
            init,
            cond,
            update,
            body: simplify_nodes(body, def_map),
        },
        HirNode::Switch {
            cond,
            cases,
            default,
            jumptable_addr,
            jumptable_cases,
        } => HirNode::Switch {
            cond,
            cases: cases
                .into_iter()
                .map(|(c, body, ft)| (c, simplify_nodes(body, def_map), ft))
                .collect(),
            default: default.map(|d| simplify_nodes(d, def_map)),
            jumptable_addr,
            jumptable_cases,
        },
        HirNode::TryCatch {
            try_body,
            catch_arms,
        } => HirNode::TryCatch {
            try_body: simplify_nodes(try_body, def_map),
            catch_arms: catch_arms
                .into_iter()
                .map(|(ty, body)| (ty, simplify_nodes(body, def_map)))
                .collect(),
        },
        HirNode::TryFinally {
            try_body,
            finally_body,
        } => HirNode::TryFinally {
            try_body: simplify_nodes(try_body, def_map),
            finally_body: simplify_nodes(finally_body, def_map),
        },
        HirNode::GuardedIf {
            cond_code,
            then_body,
            else_body,
        } => HirNode::GuardedIf {
            cond_code,
            then_body: simplify_nodes(then_body, def_map),
            else_body: simplify_nodes(else_body, def_map),
        },
        HirNode::Commented { pre, post, inner } => HirNode::Commented {
            pre,
            post,
            inner: Box::new(simplify_node(*inner, def_map)),
        },
        other => other,
    }
}

/// Inspect the head of `else_body` against the outer `cond` and rewrite when
/// the inner condition is identical or complementary.
fn simplify_else_against_outer(
    outer: SsaVarnode,
    else_body: Vec<HirNode>,
    def_map: &BTreeMap<SsaVarnode, IrInsn>,
) -> Option<Vec<HirNode>> {
    if else_body.is_empty() {
        return None;
    }

    let HirNode::If {
        cond: inner,
        then_body,
        else_body: inner_else,
    } = &else_body[0]
    else {
        return Some(else_body);
    };

    if conditions_equivalent(outer, *inner, def_map) {
        let Some(ie) = inner_else else {
            return None;
        };
        let collapsed = ie.clone();
        let mut rest: Vec<HirNode> = collapsed;
        rest.extend(else_body.into_iter().skip(1));
        return if rest.is_empty() { None } else { Some(rest) };
    }

    if conditions_complementary(outer, *inner, def_map) {
        let mut rest = then_body.clone();
        if let Some(ie) = inner_else {
            rest.extend(ie.iter().cloned());
        }
        rest.extend(else_body.into_iter().skip(1));
        return if rest.is_empty() { None } else { Some(rest) };
    }

    Some(else_body)
}

/// `a` and `b` denote the same boolean expression, ignoring SSA versioning.
fn conditions_equivalent(
    a: SsaVarnode,
    b: SsaVarnode,
    _def_map: &BTreeMap<SsaVarnode, IrInsn>,
) -> bool {
    a == b
}

/// `b == !a` (or vice versa) via `BoolNegate` on the same operand.
fn conditions_complementary(
    a: SsaVarnode,
    b: SsaVarnode,
    def_map: &BTreeMap<SsaVarnode, IrInsn>,
) -> bool {
    is_negation_of(b, a, def_map) || is_negation_of(a, b, def_map)
}

fn is_negation_of(
    candidate: SsaVarnode,
    target: SsaVarnode,
    def_map: &BTreeMap<SsaVarnode, IrInsn>,
) -> bool {
    let Some(insn) = def_map.get(&candidate) else {
        return false;
    };
    if insn.op != IrOp::BoolNegate || insn.inputs.len() != 1 {
        return false;
    }
    let inner_vn = insn.inputs[0];
    inner_vn == target.base
}

fn flatten_nodes(nodes: Vec<HirNode>) -> Vec<HirNode> {
    nodes.into_iter().map(flatten_node).collect()
}

fn flatten_node(node: HirNode) -> HirNode {
    match node {
        HirNode::If {
            cond,
            then_body,
            else_body,
        } => {
            let then_body = flatten_nodes(then_body);
            let else_body = else_body.map(|eb| {
                let eb = flatten_nodes(eb);
                unwrap_single_if(eb)
            });
            HirNode::If {
                cond,
                then_body,
                else_body,
            }
        }
        HirNode::IfCmp {
            cmp_op,
            cmp_lhs,
            cmp_rhs,
            then_body,
            else_body,
            addr,
        } => HirNode::IfCmp {
            cmp_op,
            cmp_lhs,
            cmp_rhs,
            then_body: flatten_nodes(then_body),
            else_body: else_body.map(flatten_nodes),
            addr,
        },
        HirNode::Block(children) => HirNode::Block(flatten_nodes(children)),
        HirNode::While { cond, body } => HirNode::While {
            cond,
            body: flatten_nodes(body),
        },
        HirNode::DoWhile { body, cond } => HirNode::DoWhile {
            body: flatten_nodes(body),
            cond,
        },
        HirNode::For {
            init,
            cond,
            update,
            body,
        } => HirNode::For {
            init,
            cond,
            update,
            body: flatten_nodes(body),
        },
        HirNode::Switch {
            cond,
            cases,
            default,
            jumptable_addr,
            jumptable_cases,
        } => HirNode::Switch {
            cond,
            cases: cases
                .into_iter()
                .map(|(c, body, ft)| (c, flatten_nodes(body), ft))
                .collect(),
            default: default.map(flatten_nodes),
            jumptable_addr,
            jumptable_cases,
        },
        HirNode::TryCatch {
            try_body,
            catch_arms,
        } => HirNode::TryCatch {
            try_body: flatten_nodes(try_body),
            catch_arms: catch_arms
                .into_iter()
                .map(|(ty, body)| (ty, flatten_nodes(body)))
                .collect(),
        },
        HirNode::TryFinally {
            try_body,
            finally_body,
        } => HirNode::TryFinally {
            try_body: flatten_nodes(try_body),
            finally_body: flatten_nodes(finally_body),
        },
        HirNode::GuardedIf {
            cond_code,
            then_body,
            else_body,
        } => HirNode::GuardedIf {
            cond_code,
            then_body: flatten_nodes(then_body),
            else_body: flatten_nodes(else_body),
        },
        HirNode::Commented { pre, post, inner } => HirNode::Commented {
            pre,
            post,
            inner: Box::new(flatten_node(*inner)),
        },
        other => other,
    }
}

/// If `else_body` is `[Block([If { .. }])]` or `[If { .. }]`, replace the
/// outer wrapper with the inner If as the sole element of the else.
///
/// `Block` unwrapping handles structurer output that wraps single nodes; the
/// C printer then sees `else if (..) { .. }` directly.
fn unwrap_single_if(else_body: Vec<HirNode>) -> Vec<HirNode> {
    if else_body.len() != 1 {
        return else_body;
    }

    let inner = match &else_body[0] {
        HirNode::Block(children) if children.len() == 1 => Some(children[0].clone()),
        HirNode::If { .. } => Some(else_body[0].clone()),
        _ => None,
    };

    match inner {
        Some(if_node @ HirNode::If { .. }) => vec![if_node],
        _ => else_body,
    }
}

#[cfg(test)]
mod tests {
    use std::collections::{BTreeMap, BTreeSet};

    use smallvec::smallvec;
    use unlace_ir::ssa::{PrimitiveType, SsaVarnode};
    use unlace_ir::{IrInsn, IrOp, Varnode};

    use super::*;

    fn sv(version: u32) -> SsaVarnode {
        SsaVarnode {
            base: Varnode::reg(256, 1),
            version,
        }
    }

    fn stmt(addr: u64) -> HirNode {
        HirNode::Statement(IrInsn::with_output(
            IrOp::Copy,
            Varnode::reg(8, 4),
            smallvec![Varnode::constant(0, 4)],
            addr,
        ))
    }

    fn make_hir(body: Vec<HirNode>) -> HirFunction {
        HirFunction {
            name: "test".into(),
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

    /// Count the maximum nesting depth of `If.else_body` wrappers.
    /// A flat else-if chain has depth equal to the chain length but each
    /// nested If is the *only* node in its else, never wrapped in Block.
    fn else_body_block_wrap_depth(node: &HirNode) -> usize {
        match node {
            HirNode::If {
                else_body: Some(eb),
                ..
            } => {
                let here = match &eb[..] {
                    [HirNode::Block(_)] => 1,
                    _ => 0,
                };
                let inner_depth = eb.iter().map(else_body_block_wrap_depth).max().unwrap_or(0);
                here + inner_depth
            }
            _ => 0,
        }
    }

    #[test]
    fn flattens_two_level_nesting_wrapped_in_block() {
        // if (a) X else { Block { if (b) Y else Z } }
        let inner_if = HirNode::If {
            cond: sv(2),
            then_body: vec![stmt(0x2010)],
            else_body: Some(vec![stmt(0x2020)]),
        };
        let outer = HirNode::If {
            cond: sv(1),
            then_body: vec![stmt(0x2000)],
            else_body: Some(vec![HirNode::Block(vec![inner_if])]),
        };

        let mut hir = make_hir(vec![outer]);
        flatten_if_else_chains(&mut hir);

        let HirNode::If {
            else_body: Some(eb),
            ..
        } = &hir.body[0]
        else {
            panic!("expected If at top, got {:?}", hir.body[0]);
        };
        assert_eq!(eb.len(), 1, "else body should have a single child");
        assert!(
            matches!(&eb[0], HirNode::If { .. }),
            "else body should be a bare If, got {:?}",
            eb[0]
        );
        assert_eq!(else_body_block_wrap_depth(&hir.body[0]), 0);
    }

    #[test]
    fn flattens_already_bare_if_unchanged() {
        let inner = HirNode::If {
            cond: sv(2),
            then_body: vec![stmt(0x3010)],
            else_body: None,
        };
        let outer = HirNode::If {
            cond: sv(1),
            then_body: vec![stmt(0x3000)],
            else_body: Some(vec![inner]),
        };

        let mut hir = make_hir(vec![outer.clone()]);
        flatten_if_else_chains(&mut hir);

        assert_eq!(hir.body[0], outer, "already-flat chain must be untouched");
    }

    #[test]
    fn flattens_three_level_chain_recursively() {
        // if a X else { Block [ if b Y else { Block [ if c Z else W ] } ] }
        let level3 = HirNode::If {
            cond: sv(3),
            then_body: vec![stmt(0x4030)],
            else_body: Some(vec![stmt(0x4040)]),
        };
        let level2 = HirNode::If {
            cond: sv(2),
            then_body: vec![stmt(0x4020)],
            else_body: Some(vec![HirNode::Block(vec![level3])]),
        };
        let level1 = HirNode::If {
            cond: sv(1),
            then_body: vec![stmt(0x4010)],
            else_body: Some(vec![HirNode::Block(vec![level2])]),
        };

        let mut hir = make_hir(vec![level1]);
        flatten_if_else_chains(&mut hir);

        assert_eq!(else_body_block_wrap_depth(&hir.body[0]), 0);

        let HirNode::If {
            else_body: Some(eb1),
            ..
        } = &hir.body[0]
        else {
            panic!()
        };
        let HirNode::If {
            else_body: Some(eb2),
            ..
        } = &eb1[0]
        else {
            panic!()
        };
        assert!(matches!(&eb2[0], HirNode::If { .. }));
    }

    #[test]
    fn does_not_flatten_else_with_multiple_statements() {
        let inner_if = HirNode::If {
            cond: sv(2),
            then_body: vec![stmt(0x5010)],
            else_body: None,
        };
        let outer = HirNode::If {
            cond: sv(1),
            then_body: vec![stmt(0x5000)],
            else_body: Some(vec![inner_if, stmt(0x5020)]),
        };

        let mut hir = make_hir(vec![outer.clone()]);
        flatten_if_else_chains(&mut hir);

        let HirNode::If {
            else_body: Some(eb),
            ..
        } = &hir.body[0]
        else {
            panic!()
        };
        assert_eq!(eb.len(), 2, "two-element else must stay multi-stmt");
    }

    fn negate_insn(out: SsaVarnode, of: Varnode) -> IrInsn {
        IrInsn::with_output(IrOp::BoolNegate, out.base, smallvec![of], 0x6000)
    }

    #[test]
    fn drops_redundant_identical_condition_in_chain() {
        let outer_cond = sv(1);
        let inner_branch = HirNode::If {
            cond: outer_cond,
            then_body: vec![stmt(0x6010)],
            else_body: Some(vec![stmt(0x6020)]),
        };
        let outer = HirNode::If {
            cond: outer_cond,
            then_body: vec![stmt(0x6000)],
            else_body: Some(vec![inner_branch]),
        };

        let def_map: BTreeMap<SsaVarnode, IrInsn> = BTreeMap::new();
        let result = simplify_node(outer, &def_map);

        let HirNode::If { else_body, .. } = result else {
            panic!("expected outer If preserved")
        };
        let eb = else_body.expect("expected else body to keep collapsed branch");
        assert_eq!(
            eb.len(),
            1,
            "redundant inner branch should collapse to its else body, got {eb:?}"
        );
        assert!(
            matches!(&eb[0], HirNode::Statement(_)),
            "expected the inner else body to be hoisted, got {:?}",
            eb[0]
        );
    }

    #[test]
    fn drops_complementary_condition_in_chain() {
        let a_sv = sv(1);
        let not_a_sv = SsaVarnode {
            base: Varnode::reg(257, 1),
            version: 1,
        };

        let mut def_map: BTreeMap<SsaVarnode, IrInsn> = BTreeMap::new();
        def_map.insert(not_a_sv, negate_insn(not_a_sv, a_sv.base));

        let inner_branch = HirNode::If {
            cond: not_a_sv,
            then_body: vec![stmt(0x7010)],
            else_body: None,
        };
        let outer = HirNode::If {
            cond: a_sv,
            then_body: vec![stmt(0x7000)],
            else_body: Some(vec![inner_branch]),
        };

        let result = simplify_node(outer, &def_map);

        let HirNode::If { else_body, .. } = result else {
            panic!("expected outer If preserved")
        };
        let eb = else_body.expect("expected else body to inherit the inner then-body");
        assert_eq!(eb.len(), 1, "expected single hoisted statement, got {eb:?}");
        assert!(
            matches!(&eb[0], HirNode::Statement(_)),
            "expected hoisted then-body, got {:?}",
            eb[0]
        );
    }

    #[test]
    fn distinct_conditions_remain_in_chain() {
        let cond_a = sv(1);
        let cond_b = SsaVarnode {
            base: Varnode::reg(258, 1),
            version: 1,
        };

        let inner = HirNode::If {
            cond: cond_b,
            then_body: vec![stmt(0x8010)],
            else_body: None,
        };
        let outer = HirNode::If {
            cond: cond_a,
            then_body: vec![stmt(0x8000)],
            else_body: Some(vec![inner.clone()]),
        };

        let def_map: BTreeMap<SsaVarnode, IrInsn> = BTreeMap::new();
        let result = simplify_node(outer.clone(), &def_map);

        assert_eq!(result, outer, "unrelated conditions must remain untouched");
    }
}
