//! Cleanup unreachable and redundant labels after goto rewrites.
//!
//! Diagnostics: enable `unlace::struct::label_cleanup=debug`.

use std::collections::{BTreeMap, BTreeSet};

use crate::hir::{HirFunction, HirNode, LabelId};

macro_rules! label_cleanup_debug {
    ($($arg:tt)*) => {
        tracing::debug!(target: "unlace::struct::label_cleanup", "{}", format_args!($($arg)*))
    };
}

/// Remove labels with no remaining incoming gotos and merge adjacent label
/// clusters by retargeting gotos to the first label in each cluster.
pub fn cleanup_unreachable_labels(func: &mut HirFunction) {
    let mut aliases = BTreeMap::new();
    collapse_label_clusters(&mut func.body, &mut aliases);
    if !aliases.is_empty() {
        label_cleanup_debug!("aliases={aliases:?}");
        rewrite_gotos(&mut func.body, &aliases);
    }
    remove_same_scope_backedges(&mut func.body);

    let mut used = BTreeSet::new();
    collect_gotos(&func.body, &mut used);
    remove_unused_labels(&mut func.body, &used);
}

/// Ensure every surviving `Goto` has a same-function `Label`.
///
/// Some higher-level cleanups can legally move or drop HIR tails after a
/// terminal branch. When that happens after the original structurer allocated
/// a label, the C printer has no valid destination for the surviving goto.
/// C labels are function-scoped, so appending a conservative empty landing
/// label preserves syntactic validity without inventing nested structure.
pub fn repair_missing_goto_labels(func: &mut HirFunction) {
    let mut used = BTreeSet::new();
    collect_gotos(&func.body, &mut used);
    if used.is_empty() {
        return;
    }

    let mut defined = BTreeSet::new();
    collect_labels(&func.body, &mut defined);
    for label in used.difference(&defined).copied() {
        func.body.push(HirNode::Label(label));
    }
}

fn remove_same_scope_backedges(nodes: &mut Vec<HirNode>) {
    let mut visible: BTreeSet<LabelId> = BTreeSet::new();
    let mut retained = Vec::with_capacity(nodes.len());

    for mut node in std::mem::take(nodes) {
        match &mut node {
            HirNode::Label(label) => {
                visible.insert(*label);
                retained.push(node);
            }
            HirNode::Goto(label) if visible.contains(label) => {
                label_cleanup_debug!("remove-same-scope-backedge label={label:?}");
                // drop the redundant in-same-scope backward goto
            }
            HirNode::Block(children) => {
                // Block is a flat lexical scope continuation — recurse with a
                // fresh visible set; a label nested inside the block is not a
                // sibling of the outer scope.
                remove_same_scope_backedges(children);
                retained.push(node);
            }
            HirNode::If {
                then_body,
                else_body,
                ..
            } => {
                remove_same_scope_backedges(then_body);
                if let Some(else_body) = else_body {
                    remove_same_scope_backedges(else_body);
                }
                retained.push(node);
            }
            HirNode::While { body, .. }
            | HirNode::DoWhile { body, .. }
            | HirNode::For { body, .. } => {
                remove_same_scope_backedges(body);
                retained.push(node);
            }
            HirNode::Switch { cases, default, .. } => {
                for (_, body, _) in cases {
                    remove_same_scope_backedges(body);
                }
                if let Some(default) = default {
                    remove_same_scope_backedges(default);
                }
                retained.push(node);
            }
            HirNode::TryCatch {
                try_body,
                catch_arms,
            } => {
                remove_same_scope_backedges(try_body);
                for (_ty, body) in catch_arms.iter_mut() {
                    remove_same_scope_backedges(body);
                }
                retained.push(node);
            }
            HirNode::TryFinally {
                try_body,
                finally_body,
            } => {
                remove_same_scope_backedges(try_body);
                remove_same_scope_backedges(finally_body);
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
    nodes.retain(|node| match node {
        HirNode::Label(label) if !used.contains(label) => {
            label_cleanup_debug!("remove-unused-label label={label:?}");
            false
        }
        _ => true,
    });
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

fn collect_labels(nodes: &[HirNode], defined: &mut BTreeSet<LabelId>) {
    for node in nodes {
        match node {
            HirNode::Label(label) => {
                defined.insert(*label);
            }
            HirNode::Block(children) => collect_labels(children, defined),
            HirNode::If {
                then_body,
                else_body,
                ..
            } => {
                collect_labels(then_body, defined);
                if let Some(else_body) = else_body {
                    collect_labels(else_body, defined);
                }
            }
            HirNode::While { body, .. }
            | HirNode::DoWhile { body, .. }
            | HirNode::For { body, .. } => {
                collect_labels(body, defined);
            }
            HirNode::Switch { cases, default, .. } => {
                for (_, body, _) in cases {
                    collect_labels(body, defined);
                }
                if let Some(default) = default {
                    collect_labels(default, defined);
                }
            }
            HirNode::TryCatch {
                try_body,
                catch_arms,
            } => {
                collect_labels(try_body, defined);
                for (_ty, body) in catch_arms {
                    collect_labels(body, defined);
                }
            }
            HirNode::TryFinally {
                try_body,
                finally_body,
            } => {
                collect_labels(try_body, defined);
                collect_labels(finally_body, defined);
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

    fn dummy_cond() -> unlace_ir::ssa::SsaVarnode {
        unlace_ir::ssa::SsaVarnode {
            base: unlace_ir::Varnode::reg(0, 1),
            version: 0,
        }
    }

    #[test]
    fn preserves_goto_to_label_in_outer_scope() {
        // Label at outer scope; backward goto lives inside a While body.
        // This is the irreducible-loop pattern: the goto must be retained,
        // because it re-enters the code between the label and the conditional.
        let mut hir = func(vec![
            HirNode::Label(LabelId(1)),
            HirNode::While {
                cond: dummy_cond(),
                body: vec![HirNode::If {
                    cond: dummy_cond(),
                    then_body: vec![HirNode::Goto(LabelId(1))],
                    else_body: None,
                }],
            },
        ]);

        cleanup_unreachable_labels(&mut hir);

        let mut gotos = BTreeSet::new();
        collect_gotos(&hir.body, &mut gotos);
        assert!(
            gotos.contains(&LabelId(1)),
            "cross-scope backward Goto(1) must survive cleanup: {:?}",
            hir.body
        );
        let mut labels = BTreeSet::new();
        collect_labels(&hir.body, &mut labels);
        assert!(
            labels.contains(&LabelId(1)),
            "Label(1) must survive cleanup because Goto(1) still targets it: {:?}",
            hir.body
        );
    }

    #[test]
    fn preserves_goto_inside_if_inside_if() {
        // Deeper nesting: Label at outer scope, Goto two If-bodies deep.
        let mut hir = func(vec![
            HirNode::Label(LabelId(1)),
            HirNode::If {
                cond: dummy_cond(),
                then_body: vec![HirNode::If {
                    cond: dummy_cond(),
                    then_body: vec![HirNode::Goto(LabelId(1))],
                    else_body: None,
                }],
                else_body: None,
            },
        ]);

        cleanup_unreachable_labels(&mut hir);

        let mut gotos = BTreeSet::new();
        collect_gotos(&hir.body, &mut gotos);
        assert!(
            gotos.contains(&LabelId(1)),
            "deeply nested cross-scope Goto(1) must survive cleanup: {:?}",
            hir.body
        );
    }

    #[test]
    fn repairs_missing_goto_label_at_function_scope() {
        let mut hir = func(vec![HirNode::If {
            cond: unlace_ir::ssa::SsaVarnode {
                base: unlace_ir::Varnode::reg(0, 1),
                version: 0,
            },
            then_body: vec![HirNode::Goto(LabelId(7))],
            else_body: None,
        }]);

        repair_missing_goto_labels(&mut hir);

        assert!(
            matches!(hir.body.last(), Some(HirNode::Label(LabelId(7)))),
            "missing target label should be appended at function scope: {:?}",
            hir.body
        );
    }
}
