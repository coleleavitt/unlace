//! structurer: labels.

use super::*;

/// Strip `Label` nodes whose `LabelId` has no corresponding `Goto` in the
/// HIR tree. The structurer eagerly emits a label for every `goto_targets`
/// block, but only blocks actually reached via an irreducible path get a
/// matching `Goto`. Unreferenced labels would otherwise produce dead
/// `LABEL_N:` lines in the C output.
/// Whether control cannot fall off the end of `nodes`.
pub(super) fn ends_in_jump(nodes: &[HirNode]) -> bool {
    match nodes.last() {
        Some(
            HirNode::Return(_)
            | HirNode::Goto(_)
            | HirNode::TailCall { .. }
            | HirNode::Break
            | HirNode::Continue,
        ) => true,
        Some(HirNode::Block(children)) => ends_in_jump(children),
        Some(HirNode::If {
            then_body,
            else_body: Some(else_body),
            ..
        }) => ends_in_jump(then_body) && ends_in_jump(else_body),
        _ => false,
    }
}

/// Turn the `break`s of a switch case body that would leave the enclosing
/// loop into `goto label`: inside the switch a `break` only leaves the
/// switch. Nested loops and switches keep their own `break`s.
pub(super) fn break_to_goto(nodes: &mut [HirNode], label: LabelId) {
    for node in nodes {
        match node {
            HirNode::Break => *node = HirNode::Goto(label),
            HirNode::Block(children) => break_to_goto(children, label),
            HirNode::If {
                then_body,
                else_body,
                ..
            } => {
                break_to_goto(then_body, label);
                if let Some(else_body) = else_body {
                    break_to_goto(else_body, label);
                }
            }
            HirNode::Commented { inner, .. } => break_to_goto(std::slice::from_mut(inner), label),
            _ => {}
        }
    }
}

pub(super) fn strip_unused_labels(nodes: &mut Vec<HirNode>) {
    let mut used = BTreeSet::new();
    collect_used_labels(nodes, &mut used);
    remove_labels_not_in(nodes, &used);
}

pub(super) fn collect_used_labels(nodes: &[HirNode], used: &mut BTreeSet<LabelId>) {
    for n in nodes {
        match n {
            HirNode::Goto(label) => {
                used.insert(*label);
            }
            HirNode::Block(inner) => collect_used_labels(inner, used),
            HirNode::If {
                then_body,
                else_body,
                ..
            } => {
                collect_used_labels(then_body, used);
                if let Some(eb) = else_body {
                    collect_used_labels(eb, used);
                }
            }
            HirNode::While { body, .. } | HirNode::DoWhile { body, .. } => {
                collect_used_labels(body, used);
            }
            HirNode::For { body, .. } => collect_used_labels(body, used),
            HirNode::Switch { cases, default, .. } => {
                for (_, b, _) in cases {
                    collect_used_labels(b, used);
                }
                if let Some(d) = default {
                    collect_used_labels(d, used);
                }
            }
            HirNode::TryCatch {
                try_body,
                catch_arms,
            } => {
                collect_used_labels(try_body, used);
                for (_ty, body) in catch_arms {
                    collect_used_labels(body, used);
                }
            }
            HirNode::TryFinally {
                try_body,
                finally_body,
            } => {
                collect_used_labels(try_body, used);
                collect_used_labels(finally_body, used);
            }
            HirNode::TryExcept {
                try_body,
                except_body,
                ..
            } => {
                collect_used_labels(try_body, used);
                collect_used_labels(except_body, used);
            }
            _ => {}
        }
    }
}

pub(super) fn remove_labels_not_in(nodes: &mut Vec<HirNode>, used: &BTreeSet<LabelId>) {
    nodes.retain(|n| match n {
        HirNode::Label(label) => used.contains(label),
        _ => true,
    });
    for n in nodes.iter_mut() {
        match n {
            HirNode::Block(inner) => remove_labels_not_in(inner, used),
            HirNode::If {
                then_body,
                else_body,
                ..
            } => {
                remove_labels_not_in(then_body, used);
                if let Some(eb) = else_body {
                    remove_labels_not_in(eb, used);
                }
            }
            HirNode::While { body, .. } | HirNode::DoWhile { body, .. } => {
                remove_labels_not_in(body, used);
            }
            HirNode::For { body, .. } => remove_labels_not_in(body, used),
            HirNode::Switch { cases, default, .. } => {
                for (_, b, _) in cases {
                    remove_labels_not_in(b, used);
                }
                if let Some(d) = default {
                    remove_labels_not_in(d, used);
                }
            }
            HirNode::TryCatch {
                try_body,
                catch_arms,
            } => {
                remove_labels_not_in(try_body, used);
                for (_ty, body) in catch_arms {
                    remove_labels_not_in(body, used);
                }
            }
            HirNode::TryFinally {
                try_body,
                finally_body,
            } => {
                remove_labels_not_in(try_body, used);
                remove_labels_not_in(finally_body, used);
            }
            HirNode::TryExcept {
                try_body,
                except_body,
                ..
            } => {
                remove_labels_not_in(try_body, used);
                remove_labels_not_in(except_body, used);
            }
            _ => {}
        }
    }
}
