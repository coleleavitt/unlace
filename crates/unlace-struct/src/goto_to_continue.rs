//! Convert loop-header gotos into structured `continue` statements.

use crate::hir::{HirFunction, HirNode, LabelId};

/// Rewrite `goto L` inside a loop to `continue` when `L:` denotes that loop's
/// header. In HIR this appears as `L:` immediately before the loop node.
pub fn goto_to_continue(func: &mut HirFunction) {
    rewrite_scope(&mut func.body);
}

fn rewrite_scope(nodes: &mut [HirNode]) {
    let loop_header_targets: Vec<Option<LabelId>> = nodes
        .windows(2)
        .map(|window| {
            if let HirNode::Label(label) = window[0]
                && matches!(
                    window[1],
                    HirNode::While { .. } | HirNode::DoWhile { .. } | HirNode::For { .. }
                )
            {
                Some(label)
            } else {
                None
            }
        })
        .collect();

    for i in 0..nodes.len() {
        match &mut nodes[i] {
            HirNode::While { body, .. }
            | HirNode::DoWhile { body, .. }
            | HirNode::For { body, .. } => {
                if i > 0
                    && let Some(Some(target)) = loop_header_targets.get(i - 1).copied()
                {
                    replace_gotos_in_loop_body(body, target);
                }
                rewrite_scope(body);
            }
            other => rewrite_children(other),
        }
    }
}

fn rewrite_children(node: &mut HirNode) {
    match node {
        HirNode::Block(children) => rewrite_scope(children),
        HirNode::If {
            then_body,
            else_body,
            ..
        } => {
            rewrite_scope(then_body);
            if let Some(else_body) = else_body {
                rewrite_scope(else_body);
            }
        }
        HirNode::Switch { cases, default, .. } => {
            for (_, body, _) in cases {
                rewrite_scope(body);
            }
            if let Some(default) = default {
                rewrite_scope(default);
            }
        }
        HirNode::TryCatch {
            try_body,
            catch_body,
        } => {
            rewrite_scope(try_body);
            rewrite_scope(catch_body);
        }
        _ => {}
    }
}

fn replace_gotos_in_loop_body(nodes: &mut [HirNode], target: LabelId) {
    for node in nodes {
        match node {
            HirNode::Goto(label) if *label == target => *node = HirNode::Continue,
            HirNode::Block(children) => replace_gotos_in_loop_body(children, target),
            HirNode::If {
                then_body,
                else_body,
                ..
            } => {
                replace_gotos_in_loop_body(then_body, target);
                if let Some(else_body) = else_body {
                    replace_gotos_in_loop_body(else_body, target);
                }
            }
            HirNode::Switch { cases, default, .. } => {
                for (_, body, _) in cases {
                    replace_gotos_in_loop_body(body, target);
                }
                if let Some(default) = default {
                    replace_gotos_in_loop_body(default, target);
                }
            }
            HirNode::TryCatch {
                try_body,
                catch_body,
            } => {
                replace_gotos_in_loop_body(try_body, target);
                replace_gotos_in_loop_body(catch_body, target);
            }
            HirNode::While { .. } | HirNode::DoWhile { .. } | HirNode::For { .. } => {}
            _ => {}
        }
    }
}

#[cfg(test)]
mod tests {
    use std::collections::{BTreeMap, BTreeSet};

    use unlace_ir::Varnode;
    use unlace_ir::ssa::{PrimitiveType, SsaVarnode};

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
    fn converts_goto_to_label_before_loop_into_continue() {
        let mut hir = func(vec![
            HirNode::Label(LabelId(7)),
            HirNode::While {
                cond: cond(),
                body: vec![HirNode::Goto(LabelId(7))],
            },
        ]);

        goto_to_continue(&mut hir);

        assert!(
            matches!(hir.body[1], HirNode::While { ref body, .. } if body == &vec![HirNode::Continue])
        );
    }
}
