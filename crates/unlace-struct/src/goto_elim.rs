//! Forward-goto cleanup and fake-loop elimination for HIR.

use std::collections::BTreeSet;

use crate::hir::{HirFunction, HirNode, LabelId};

/// Remove redundant forward gotos and convert fake `while { break; }` regions
/// into `if` statements.
pub fn eliminate_forward_gotos(func: &mut HirFunction) {
    cleanup_scope(&mut func.body);
    strip_unused_labels(&mut func.body);
}

fn cleanup_scope(nodes: &mut Vec<HirNode>) {
    for node in nodes.iter_mut() {
        cleanup_children(node);
    }
    remove_goto_to_next_label(nodes);
    remove_if_tail_goto_to_next_label(nodes);
    while_break_to_if(nodes);
}

fn cleanup_children(node: &mut HirNode) {
    match node {
        HirNode::Block(children) => cleanup_scope(children),
        HirNode::If {
            then_body,
            else_body,
            ..
        } => {
            cleanup_scope(then_body);
            if let Some(else_body) = else_body {
                cleanup_scope(else_body);
            }
        }
        HirNode::While { body, .. } | HirNode::DoWhile { body, .. } | HirNode::For { body, .. } => {
            cleanup_scope(body);
        }
        HirNode::Switch { cases, default, .. } => {
            for (_, body, _) in cases {
                cleanup_scope(body);
            }
            if let Some(default) = default {
                cleanup_scope(default);
            }
        }
        HirNode::TryCatch {
            try_body,
            catch_body,
        } => {
            cleanup_scope(try_body);
            cleanup_scope(catch_body);
        }
        _ => {}
    }
}

fn remove_goto_to_next_label(nodes: &mut Vec<HirNode>) {
    let mut i = 0;
    while i + 1 < nodes.len() {
        if let (HirNode::Goto(target), HirNode::Label(label)) = (&nodes[i], &nodes[i + 1])
            && target == label
        {
            nodes.remove(i);
            continue;
        }
        i += 1;
    }
}

fn remove_if_tail_goto_to_next_label(nodes: &mut [HirNode]) {
    let next_labels: Vec<Option<LabelId>> = nodes
        .windows(2)
        .map(|window| match window[1] {
            HirNode::Label(label) => Some(label),
            _ => None,
        })
        .collect();
    for i in 0..nodes.len() {
        let Some(Some(label)) = next_labels.get(i).copied() else {
            continue;
        };
        if let HirNode::If {
            then_body,
            else_body,
            ..
        } = &mut nodes[i]
        {
            remove_trailing_goto(then_body, label);
            if let Some(else_body) = else_body {
                remove_trailing_goto(else_body, label);
            }
        }
    }
}

fn remove_trailing_goto(nodes: &mut Vec<HirNode>, target: LabelId) {
    if matches!(nodes.last(), Some(HirNode::Goto(label)) if *label == target) {
        nodes.pop();
    }
}

fn while_break_to_if(nodes: &mut [HirNode]) {
    for node in nodes {
        let replacement = match node {
            HirNode::While { cond, body } if matches!(body.last(), Some(HirNode::Break)) => {
                let mut then_body = body.clone();
                then_body.pop();
                Some(HirNode::If {
                    cond: *cond,
                    then_body,
                    else_body: None,
                })
            }
            _ => None,
        };
        if let Some(replacement) = replacement {
            *node = replacement;
        }
    }
}

fn strip_unused_labels(nodes: &mut Vec<HirNode>) {
    let mut used = BTreeSet::new();
    collect_gotos(nodes, &mut used);
    retain_labels(nodes, &used);
}

fn collect_gotos(nodes: &[HirNode], used: &mut BTreeSet<LabelId>) {
    for node in nodes {
        match node {
            HirNode::Goto(label) => {
                used.insert(*label);
            }
            HirNode::Block(children) => collect_gotos(children, used),
            HirNode::If {
                then_body,
                else_body,
                ..
            } => {
                collect_gotos(then_body, used);
                if let Some(else_body) = else_body {
                    collect_gotos(else_body, used);
                }
            }
            HirNode::While { body, .. } | HirNode::DoWhile { body, .. } | HirNode::For { body, .. } => {
                collect_gotos(body, used);
            }
            HirNode::Switch { cases, default, .. } => {
                for (_, body, _) in cases {
                    collect_gotos(body, used);
                }
                if let Some(default) = default {
                    collect_gotos(default, used);
                }
            }
            HirNode::TryCatch {
                try_body,
                catch_body,
            } => {
                collect_gotos(try_body, used);
                collect_gotos(catch_body, used);
            }
            _ => {}
        }
    }
}

fn retain_labels(nodes: &mut Vec<HirNode>, used: &BTreeSet<LabelId>) {
    nodes.retain(|node| !matches!(node, HirNode::Label(label) if !used.contains(label)));
    for node in nodes {
        cleanup_children(node);
    }
}

#[cfg(test)]
mod tests {
    use std::collections::{BTreeMap, BTreeSet};

    use unlace_ir::ssa::{PrimitiveType, SsaVarnode};
    use unlace_ir::Varnode;

    use super::*;

    fn func(body: Vec<HirNode>) -> HirFunction {
        HirFunction {
            name: "test".into(),
            params: vec![],
            return_type: PrimitiveType::Unknown,
            body,
            addr: 0,
            foldable_exprs: BTreeSet::new(),
            panic_sites: BTreeMap::new(),
            noreturn: false,
            composite_var_types: BTreeMap::new(),
        }
    }

    fn cond() -> SsaVarnode {
        SsaVarnode {
            base: Varnode::reg(0, 1),
            version: 0,
        }
    }

    #[test]
    fn removes_goto_to_immediately_following_label() {
        let mut hir = func(vec![HirNode::Goto(LabelId(1)), HirNode::Label(LabelId(1))]);
        eliminate_forward_gotos(&mut hir);
        assert!(hir.body.is_empty());
    }

    #[test]
    fn converts_while_with_unconditional_break_to_if() {
        let mut hir = func(vec![HirNode::While {
            cond: cond(),
            body: vec![HirNode::Break],
        }]);
        eliminate_forward_gotos(&mut hir);
        assert!(matches!(hir.body[0], HirNode::If { ref then_body, .. } if then_body.is_empty()));
    }
}
