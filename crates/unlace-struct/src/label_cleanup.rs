//! Cleanup unreachable and redundant labels after goto rewrites.

use std::collections::{BTreeMap, BTreeSet};

use crate::hir::{HirFunction, HirNode, LabelId};

/// Remove labels with no remaining incoming gotos and merge adjacent label
/// clusters by retargeting gotos to the first label in each cluster.
pub fn cleanup_unreachable_labels(func: &mut HirFunction) {
    let mut aliases = BTreeMap::new();
    collapse_label_clusters(&mut func.body, &mut aliases);
    if !aliases.is_empty() {
        rewrite_gotos(&mut func.body, &aliases);
    }
    remove_same_scope_backedges(&mut func.body);

    let mut used = BTreeSet::new();
    collect_gotos(&func.body, &mut used);
    remove_unused_labels(&mut func.body, &used);
}

fn remove_same_scope_backedges(nodes: &mut Vec<HirNode>) {
    remove_backedges_visible_from_scope(nodes, &BTreeSet::new());
}

fn remove_backedges_visible_from_scope(nodes: &mut Vec<HirNode>, inherited: &BTreeSet<LabelId>) {
    let mut visible = inherited.clone();
    let mut retained = Vec::with_capacity(nodes.len());

    for mut node in std::mem::take(nodes) {
        match &mut node {
            HirNode::Label(label) => {
                visible.insert(*label);
                retained.push(node);
            }
            HirNode::Goto(label) if visible.contains(label) => {}
            HirNode::Block(children) => {
                remove_backedges_visible_from_scope(children, &visible);
                retained.push(node);
            }
            HirNode::If {
                then_body,
                else_body,
                ..
            } => {
                remove_backedges_visible_from_scope(then_body, &visible);
                if let Some(else_body) = else_body {
                    remove_backedges_visible_from_scope(else_body, &visible);
                }
                retained.push(node);
            }
            HirNode::While { body, .. }
            | HirNode::DoWhile { body, .. }
            | HirNode::For { body, .. } => {
                remove_backedges_visible_from_scope(body, &visible);
                retained.push(node);
            }
            HirNode::Switch { cases, default, .. } => {
                for (_, body, _) in cases {
                    remove_backedges_visible_from_scope(body, &visible);
                }
                if let Some(default) = default {
                    remove_backedges_visible_from_scope(default, &visible);
                }
                retained.push(node);
            }
            HirNode::TryCatch {
                try_body,
                catch_arms,
            } => {
                remove_backedges_visible_from_scope(try_body, &visible);
                for (_ty, body) in catch_arms.iter_mut() {
                    remove_backedges_visible_from_scope(body, &visible);
                }
                retained.push(node);
            }
            HirNode::TryFinally {
                try_body,
                finally_body,
            } => {
                remove_backedges_visible_from_scope(try_body, &visible);
                remove_backedges_visible_from_scope(finally_body, &visible);
                retained.push(node);
            }
            _ => retained.push(node),
        }
    }

    *nodes = retained;
}

fn collapse_label_clusters(nodes: &mut Vec<HirNode>, aliases: &mut BTreeMap<LabelId, LabelId>) {
    let mut i = 0;
    while i < nodes.len() {
        if let HirNode::Label(first) = nodes[i] {
            let mut end = i + 1;
            while matches!(nodes.get(end), Some(HirNode::Label(_))) {
                end += 1;
            }
            if end > i + 1 {
                for node in &nodes[i + 1..end] {
                    if let HirNode::Label(label) = node {
                        aliases.insert(*label, first);
                    }
                }
                nodes.drain(i + 1..end);
            }
        }
        i += 1;
    }

    for node in nodes {
        match node {
            HirNode::Block(children) => collapse_label_clusters(children, aliases),
            HirNode::If {
                then_body,
                else_body,
                ..
            } => {
                collapse_label_clusters(then_body, aliases);
                if let Some(else_body) = else_body {
                    collapse_label_clusters(else_body, aliases);
                }
            }
            HirNode::While { body, .. }
            | HirNode::DoWhile { body, .. }
            | HirNode::For { body, .. } => {
                collapse_label_clusters(body, aliases);
            }
            HirNode::Switch { cases, default, .. } => {
                for (_, body, _) in cases {
                    collapse_label_clusters(body, aliases);
                }
                if let Some(default) = default {
                    collapse_label_clusters(default, aliases);
                }
            }
            HirNode::TryCatch {
                try_body,
                catch_arms,
            } => {
                collapse_label_clusters(try_body, aliases);
                for (_ty, body) in catch_arms {
                    collapse_label_clusters(body, aliases);
                }
            }
            HirNode::TryFinally {
                try_body,
                finally_body,
            } => {
                collapse_label_clusters(try_body, aliases);
                collapse_label_clusters(finally_body, aliases);
            }
            _ => {}
        }
    }
}

fn rewrite_gotos(nodes: &mut [HirNode], aliases: &BTreeMap<LabelId, LabelId>) {
    for node in nodes {
        match node {
            HirNode::Goto(label) => *label = resolve_alias(*label, aliases),
            HirNode::Block(children) => rewrite_gotos(children, aliases),
            HirNode::If {
                then_body,
                else_body,
                ..
            } => {
                rewrite_gotos(then_body, aliases);
                if let Some(else_body) = else_body {
                    rewrite_gotos(else_body, aliases);
                }
            }
            HirNode::While { body, .. }
            | HirNode::DoWhile { body, .. }
            | HirNode::For { body, .. } => {
                rewrite_gotos(body, aliases);
            }
            HirNode::Switch { cases, default, .. } => {
                for (_, body, _) in cases {
                    rewrite_gotos(body, aliases);
                }
                if let Some(default) = default {
                    rewrite_gotos(default, aliases);
                }
            }
            HirNode::TryCatch {
                try_body,
                catch_arms,
            } => {
                rewrite_gotos(try_body, aliases);
                for (_ty, body) in catch_arms {
                    rewrite_gotos(body, aliases);
                }
            }
            HirNode::TryFinally {
                try_body,
                finally_body,
            } => {
                rewrite_gotos(try_body, aliases);
                rewrite_gotos(finally_body, aliases);
            }
            _ => {}
        }
    }
}

fn resolve_alias(mut label: LabelId, aliases: &BTreeMap<LabelId, LabelId>) -> LabelId {
    let mut seen = BTreeSet::new();
    while let Some(next) = aliases.get(&label).copied() {
        if !seen.insert(label) {
            break;
        }
        label = next;
    }
    label
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
            HirNode::While { body, .. }
            | HirNode::DoWhile { body, .. }
            | HirNode::For { body, .. } => {
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
                catch_arms,
            } => {
                collect_gotos(try_body, used);
                for (_ty, body) in catch_arms {
                    collect_gotos(body, used);
                }
            }
            HirNode::TryFinally {
                try_body,
                finally_body,
            } => {
                collect_gotos(try_body, used);
                collect_gotos(finally_body, used);
            }
            _ => {}
        }
    }
}

fn remove_unused_labels(nodes: &mut Vec<HirNode>, used: &BTreeSet<LabelId>) {
    nodes.retain(|node| !matches!(node, HirNode::Label(label) if !used.contains(label)));
    for node in nodes {
        match node {
            HirNode::Block(children) => remove_unused_labels(children, used),
            HirNode::If {
                then_body,
                else_body,
                ..
            } => {
                remove_unused_labels(then_body, used);
                if let Some(else_body) = else_body {
                    remove_unused_labels(else_body, used);
                }
            }
            HirNode::While { body, .. }
            | HirNode::DoWhile { body, .. }
            | HirNode::For { body, .. } => {
                remove_unused_labels(body, used);
            }
            HirNode::Switch { cases, default, .. } => {
                for (_, body, _) in cases {
                    remove_unused_labels(body, used);
                }
                if let Some(default) = default {
                    remove_unused_labels(default, used);
                }
            }
            HirNode::TryCatch {
                try_body,
                catch_arms,
            } => {
                remove_unused_labels(try_body, used);
                for (_ty, body) in catch_arms {
                    remove_unused_labels(body, used);
                }
            }
            HirNode::TryFinally {
                try_body,
                finally_body,
            } => {
                remove_unused_labels(try_body, used);
                remove_unused_labels(finally_body, used);
            }
            _ => {}
        }
    }
}

#[cfg(test)]
mod tests {
    use std::collections::{BTreeMap, BTreeSet};

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
            stack_frame: None,
        }
    }

    #[test]
    fn removes_unused_labels_and_collapses_clusters() {
        let mut hir = func(vec![
            HirNode::Goto(LabelId(2)),
            HirNode::Label(LabelId(1)),
            HirNode::Label(LabelId(2)),
            HirNode::Label(LabelId(3)),
            HirNode::Break,
            HirNode::Label(LabelId(4)),
        ]);

        cleanup_unreachable_labels(&mut hir);

        assert_eq!(
            hir.body,
            vec![
                HirNode::Goto(LabelId(1)),
                HirNode::Label(LabelId(1)),
                HirNode::Break,
            ]
        );
    }

    #[test]
    fn removes_same_scope_backward_gotos() {
        let mut hir = func(vec![
            HirNode::Label(LabelId(1)),
            HirNode::Break,
            HirNode::Goto(LabelId(1)),
        ]);

        cleanup_unreachable_labels(&mut hir);

        assert_eq!(hir.body, vec![HirNode::Break]);
    }
}
