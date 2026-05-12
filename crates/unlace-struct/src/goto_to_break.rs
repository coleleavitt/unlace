//! Convert loop-exit gotos into structured `break` statements.

use crate::hir::{HirFunction, HirNode, LabelId};

/// Rewrite `goto L` inside a loop to `break` when `L:` is the next statement
/// after that loop in the surrounding HIR scope.
pub fn goto_to_break(func: &mut HirFunction) {
    rewrite_scope(&mut func.body);
}

fn rewrite_scope(nodes: &mut [HirNode]) {
    let loop_exit_targets: Vec<Option<LabelId>> = nodes
        .windows(2)
        .map(|window| {
            if matches!(
                window[0],
                HirNode::While { .. } | HirNode::DoWhile { .. } | HirNode::For { .. }
            ) && let HirNode::Label(label) = window[1]
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
                if let Some(Some(target)) = loop_exit_targets.get(i).copied() {
                    replace_gotos_in_scope(body, target, HirNode::Break);
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
            catch_arms,
        } => {
            rewrite_scope(try_body);
            for (_ty, body) in catch_arms {
                rewrite_scope(body);
            }
        }
        HirNode::TryFinally {
            try_body,
            finally_body,
        } => {
            rewrite_scope(try_body);
            rewrite_scope(finally_body);
        }
        _ => {}
    }
}

fn replace_gotos_in_scope(nodes: &mut [HirNode], target: LabelId, replacement: HirNode) {
    for node in nodes {
        match node {
            HirNode::Goto(label) if *label == target => *node = replacement.clone(),
            HirNode::Block(children) => {
                replace_gotos_in_scope(children, target, replacement.clone())
            }
            HirNode::If {
                then_body,
                else_body,
                ..
            } => {
                replace_gotos_in_scope(then_body, target, replacement.clone());
                if let Some(else_body) = else_body {
                    replace_gotos_in_scope(else_body, target, replacement.clone());
                }
            }
            HirNode::Switch { cases, default, .. } => {
                for (_, body, _) in cases {
                    replace_gotos_in_scope(body, target, replacement.clone());
                }
                if let Some(default) = default {
                    replace_gotos_in_scope(default, target, replacement.clone());
                }
            }
            HirNode::TryCatch {
                try_body,
                catch_arms,
            } => {
                replace_gotos_in_scope(try_body, target, replacement.clone());
                for (_ty, body) in catch_arms {
                    replace_gotos_in_scope(body, target, replacement.clone());
                }
            }
            HirNode::TryFinally {
                try_body,
                finally_body,
            } => {
                replace_gotos_in_scope(try_body, target, replacement.clone());
                replace_gotos_in_scope(finally_body, target, replacement.clone());
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
    use unlace_ir::ssa::PrimitiveType;

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
            is_ctor: false,
            is_dtor: false,
            class_name: None,
            merged_names: BTreeMap::new(),
            objc_dispatch_calls: BTreeMap::new(),
            indirect_branch_kinds: BTreeMap::new(),
            byref_boxes: BTreeMap::new(),
            byref_params: std::collections::BTreeSet::new(),
            var_role_names: std::collections::BTreeMap::new(),
            finalized_signature: None,
            byref_locals: std::collections::BTreeSet::new(),
            stack_frame: None,
            cpp_lambda_captures: Vec::new(),
        }
    }

    #[test]
    fn converts_goto_to_label_after_loop_into_break() {
        let cond = unlace_ir::ssa::SsaVarnode {
            base: Varnode::reg(0, 1),
            version: 0,
        };
        let mut hir = func(vec![
            HirNode::While {
                cond,
                body: vec![HirNode::Goto(LabelId(1))],
            },
            HirNode::Label(LabelId(1)),
        ]);

        goto_to_break(&mut hir);

        assert!(
            matches!(hir.body[0], HirNode::While { ref body, .. } if body == &vec![HirNode::Break])
        );
    }
}
