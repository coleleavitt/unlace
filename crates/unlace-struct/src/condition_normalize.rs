//! SAILR-style condition normalization over structured HIR.
//!
//! This pass removes condition tests that are provably redundant from the
//! surrounding structured context. It is intentionally local and exact: a nested
//! `if (c)` reached from an outer `if (c)` true arm keeps only its then-arm, and
//! a nested `if (c)` reached from the outer false arm keeps only its else-arm.
//! It also drops conditionals whose normalized arms are structurally identical.

use crate::hir::{HirFunction, HirNode};
use unlace_ir::ssa::SsaVarnode;

#[derive(Clone, Debug)]
struct Fact {
    cond: SsaVarnode,
    value: bool,
}

/// Remove exact duplicate condition tests from nested structured scopes.
pub fn normalize_conditions(func: &mut HirFunction) {
    func.body = normalize_scope(std::mem::take(&mut func.body), &[]);
}

fn normalize_scope(nodes: Vec<HirNode>, facts: &[Fact]) -> Vec<HirNode> {
    nodes
        .into_iter()
        .flat_map(|node| normalize_node(node, facts))
        .collect()
}

fn normalize_node(node: HirNode, facts: &[Fact]) -> Vec<HirNode> {
    match node {
        HirNode::If {
            cond,
            then_body,
            else_body,
        } => normalize_if(cond, then_body, else_body, facts),
        HirNode::IfCmp {
            cmp_op,
            cmp_lhs,
            cmp_rhs,
            then_body,
            else_body,
            addr,
        } => vec![HirNode::IfCmp {
            cmp_op,
            cmp_lhs,
            cmp_rhs,
            then_body: normalize_scope(then_body, facts),
            else_body: else_body.map(|body| normalize_scope(body, facts)),
            addr,
        }],
        HirNode::Block(children) => vec![HirNode::Block(normalize_scope(children, facts))],
        HirNode::While { cond, body } => vec![HirNode::While {
            cond,
            body: normalize_scope(body, &[]),
        }],
        HirNode::DoWhile { body, cond } => vec![HirNode::DoWhile {
            body: normalize_scope(body, &[]),
            cond,
        }],
        HirNode::For {
            init,
            cond,
            update,
            body,
        } => vec![HirNode::For {
            init,
            cond,
            update,
            body: normalize_scope(body, &[]),
        }],
        HirNode::Switch {
            cond,
            cases,
            default,
            jumptable_addr,
            jumptable_cases,
        } => vec![HirNode::Switch {
            cond,
            cases: cases
                .into_iter()
                .map(|(case, body, fallthrough)| (case, normalize_scope(body, facts), fallthrough))
                .collect(),
            default: default.map(|body| normalize_scope(body, facts)),
            jumptable_addr,
            jumptable_cases,
        }],
        HirNode::TryCatch {
            try_body,
            catch_arms,
        } => vec![HirNode::TryCatch {
            try_body: normalize_scope(try_body, facts),
            catch_arms: catch_arms
                .into_iter()
                .map(|(ty, body)| (ty, normalize_scope(body, facts)))
                .collect(),
        }],
        HirNode::TryFinally {
            try_body,
            finally_body,
        } => vec![HirNode::TryFinally {
            try_body: normalize_scope(try_body, facts),
            finally_body: normalize_scope(finally_body, facts),
        }],
        HirNode::GuardedIf {
            cond_code,
            then_body,
            else_body,
        } => vec![HirNode::GuardedIf {
            cond_code,
            then_body: normalize_scope(then_body, facts),
            else_body: normalize_scope(else_body, facts),
        }],
        HirNode::Commented { pre, post, inner } => {
            let mut normalized = normalize_node(*inner, facts);
            let inner = if normalized.len() == 1 {
                normalized.pop().expect("len checked")
            } else {
                HirNode::Block(normalized)
            };
            vec![HirNode::Commented {
                pre,
                post,
                inner: Box::new(inner),
            }]
        }
        other => vec![other],
    }
}

fn normalize_if(
    cond: SsaVarnode,
    then_body: Vec<HirNode>,
    else_body: Option<Vec<HirNode>>,
    facts: &[Fact],
) -> Vec<HirNode> {
    let then_facts = with_fact(facts, cond, true);
    let else_facts = with_fact(facts, cond, false);
    let then_body = normalize_scope(then_body, &then_facts);
    let else_body = else_body.map(|body| normalize_scope(body, &else_facts));

    if let Some(value) = lookup_fact(facts, cond) {
        return if value {
            then_body
        } else {
            else_body.unwrap_or_default()
        };
    }

    if else_body.as_ref().is_some_and(|body| *body == then_body) {
        return then_body;
    }

    if then_body.is_empty() && else_body.as_ref().is_none_or(Vec::is_empty) {
        return Vec::new();
    }

    vec![HirNode::If {
        cond,
        then_body,
        else_body,
    }]
}

fn with_fact(facts: &[Fact], cond: SsaVarnode, value: bool) -> Vec<Fact> {
    let mut out = facts.to_vec();
    out.push(Fact { cond, value });
    out
}

fn lookup_fact(facts: &[Fact], cond: SsaVarnode) -> Option<bool> {
    facts
        .iter()
        .rev()
        .find_map(|fact| (fact.cond == cond).then_some(fact.value))
}

#[cfg(test)]
mod tests {
    use std::collections::{BTreeMap, BTreeSet};

    use unlace_ir::Varnode;
    use unlace_ir::ssa::{PrimitiveType, SsaVarnode};

    use super::*;

    fn sv(offset: u64) -> SsaVarnode {
        SsaVarnode {
            base: Varnode::unique(offset, 1),
            version: 0,
        }
    }

    fn ret(value: u64) -> HirNode {
        HirNode::Return(Some(SsaVarnode {
            base: Varnode::constant(value, 4),
            version: 0,
        }))
    }

    fn make_func(body: Vec<HirNode>) -> HirFunction {
        HirFunction {
            name: "test".into(),
            params: vec![],
            return_type: PrimitiveType::Unknown,
            body,
            addr: 0,
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
            byref_params: BTreeSet::new(),
            var_role_names: BTreeMap::new(),
            finalized_signature: None,
            byref_locals: BTreeSet::new(),
            stack_frame: None,
            cpp_lambda_captures: Vec::new(),
            vtable_call_targets: BTreeMap::new(),
        }
    }

    #[test]
    fn removes_duplicate_true_arm_condition() {
        let c = sv(1);
        let mut hir = make_func(vec![HirNode::If {
            cond: c,
            then_body: vec![HirNode::If {
                cond: c,
                then_body: vec![ret(1)],
                else_body: Some(vec![ret(2)]),
            }],
            else_body: None,
        }]);

        normalize_conditions(&mut hir);

        assert_eq!(
            hir.body,
            vec![HirNode::If {
                cond: c,
                then_body: vec![ret(1)],
                else_body: None,
            }]
        );
    }

    #[test]
    fn removes_duplicate_false_arm_condition() {
        let c = sv(1);
        let mut hir = make_func(vec![HirNode::If {
            cond: c,
            then_body: vec![ret(1)],
            else_body: Some(vec![HirNode::If {
                cond: c,
                then_body: vec![ret(2)],
                else_body: Some(vec![ret(3)]),
            }]),
        }]);

        normalize_conditions(&mut hir);

        assert_eq!(
            hir.body,
            vec![HirNode::If {
                cond: c,
                then_body: vec![ret(1)],
                else_body: Some(vec![ret(3)]),
            }]
        );
    }

    #[test]
    fn identical_arms_replace_condition() {
        let c = sv(1);
        let mut hir = make_func(vec![HirNode::If {
            cond: c,
            then_body: vec![ret(1)],
            else_body: Some(vec![ret(1)]),
        }]);

        normalize_conditions(&mut hir);

        assert_eq!(hir.body, vec![ret(1)]);
    }
}
