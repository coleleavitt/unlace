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

    let mut used = BTreeSet::new();
    collect_gotos(&func.body, &mut used);
    remove_unused_labels(&mut func.body, &used);
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
                catch_body,
            } => {
                collapse_label_clusters(try_body, aliases);
                collapse_label_clusters(catch_body, aliases);
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
                catch_body,
            } => {
                rewrite_gotos(try_body, aliases);
                rewrite_gotos(catch_body, aliases);
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
                catch_body,
            } => {
                collect_gotos(try_body, used);
                collect_gotos(catch_body, used);
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
                catch_body,
            } => {
                remove_unused_labels(try_body, used);
                remove_unused_labels(catch_body, used);
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
}
