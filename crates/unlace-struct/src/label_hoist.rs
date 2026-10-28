//! Hoist cross-branch labels to a common enclosing scope.
//!
//! Diagnostics: enable `unlace::struct::label_hoist=debug`.

use std::collections::BTreeMap;

use crate::hir::{HirFunction, HirNode, LabelId};

macro_rules! label_hoist_debug {
    ($($arg:tt)*) => {
        tracing::debug!(target: "unlace::struct::label_hoist", "{}", format_args!($($arg)*))
    };
}

/// Move labels that are targeted from outside their branch to the nearest
/// common ancestor scope, carrying the label's tail with it.
pub fn hoist_cross_branch_labels(func: &mut HirFunction) {
    let mut iteration = 0usize;
    while let Some(plan) = find_hoist(&func.body) {
        label_hoist_debug!(
            "iter={iteration} plan label_scope={} label_index={} insert_scope={} insert_index={}",
            fmt_scope(&plan.label_scope),
            plan.label_index,
            fmt_scope(&plan.insert_scope),
            plan.insert_index
        );
        if !apply_hoist(&mut func.body, plan) {
            label_hoist_debug!("iter={iteration} apply=false");
            break;
        }
        iteration += 1;
    }
    label_hoist_debug!("done iterations={iteration}");
}

#[derive(Clone, Debug, PartialEq, Eq, PartialOrd, Ord)]
enum ScopeStep {
    Block(usize),
    IfThen(usize),
    IfElse(usize),
    While(usize),
    DoWhile(usize),
    For(usize),
    SwitchCase(usize, usize),
    SwitchDefault(usize),
    Try(usize),
    /// `(node_index, arm_index)` — selects the `arm_index`-th catch arm of
    /// a [`HirNode::TryCatch`] at `node_index`.
    Catch(usize, usize),
    /// Finally block of a [`HirNode::TryFinally`] at `node_index`.
    Finally(usize),
}

type ScopePath = Vec<ScopeStep>;

#[derive(Clone, Debug)]
struct Position {
    scope: ScopePath,
    index: usize,
}

#[derive(Clone, Debug)]
struct HoistPlan {
    label_scope: ScopePath,
    label_index: usize,
    insert_scope: ScopePath,
    insert_index: usize,
}

fn find_hoist(nodes: &[HirNode]) -> Option<HoistPlan> {
    let mut labels = BTreeMap::new();
    let mut gotos = Vec::new();
    collect_positions(nodes, &mut Vec::new(), &mut labels, &mut gotos);

    if tracing::enabled!(target: "unlace::struct::label_hoist", tracing::Level::DEBUG) {
        label_hoist_debug!("scan labels={} gotos={}", labels.len(), gotos.len());
        for (label, pos) in labels.iter().take(16) {
            label_hoist_debug!(
                "label={label:?} scope={} index={}",
                fmt_scope(&pos.scope),
                pos.index
            );
        }
        for (label, pos) in gotos.iter().take(16) {
            label_hoist_debug!(
                "goto={label:?} scope={} index={}",
                fmt_scope(&pos.scope),
                pos.index
            );
        }
    }

    for (target, goto_pos) in gotos {
        let Some(label_pos) = labels.get(&target) else {
            continue;
        };
        let Some(branch_prefix) = enclosing_if_branch(&label_pos.scope) else {
            continue;
        };
        if starts_with(&goto_pos.scope, branch_prefix) {
            continue;
        }
        let insert_scope = common_prefix(&goto_pos.scope, &label_pos.scope);
        if insert_scope == label_pos.scope {
            continue;
        }
        let Some(insert_index) = child_index_after_prefix(&label_pos.scope, &insert_scope) else {
            continue;
        };
        label_hoist_debug!(
            "candidate target={target:?} goto_scope={} goto_index={} label_scope={} label_index={} branch_prefix={} common={} insert_index={insert_index}",
            fmt_scope(&goto_pos.scope),
            goto_pos.index,
            fmt_scope(&label_pos.scope),
            label_pos.index,
            fmt_scope(branch_prefix),
            fmt_scope(&insert_scope)
        );
        return Some(HoistPlan {
            label_scope: label_pos.scope.clone(),
            label_index: label_pos.index,
            insert_scope,
            insert_index,
        });
    }

    None
}

fn collect_positions(
    nodes: &[HirNode],
    scope: &mut ScopePath,
    labels: &mut BTreeMap<LabelId, Position>,
    gotos: &mut Vec<(LabelId, Position)>,
) {
    for (index, node) in nodes.iter().enumerate() {
        match node {
            HirNode::Label(label) => {
                labels.entry(*label).or_insert_with(|| Position {
                    scope: scope.clone(),
                    index,
                });
            }
            HirNode::Goto(label) => gotos.push((
                *label,
                Position {
                    scope: scope.clone(),
                    index,
                },
            )),
            HirNode::Block(children) => {
                scope.push(ScopeStep::Block(index));
                collect_positions(children, scope, labels, gotos);
                scope.pop();
            }
            HirNode::If {
                then_body,
                else_body,
                ..
            } => {
                scope.push(ScopeStep::IfThen(index));
                collect_positions(then_body, scope, labels, gotos);
                scope.pop();
                if let Some(else_body) = else_body {
                    scope.push(ScopeStep::IfElse(index));
                    collect_positions(else_body, scope, labels, gotos);
                    scope.pop();
                }
            }
            HirNode::While { body, .. } => {
                scope.push(ScopeStep::While(index));
                collect_positions(body, scope, labels, gotos);
                scope.pop();
            }
            HirNode::DoWhile { body, .. } => {
                scope.push(ScopeStep::DoWhile(index));
                collect_positions(body, scope, labels, gotos);
                scope.pop();
            }
            HirNode::For { body, .. } => {
                scope.push(ScopeStep::For(index));
                collect_positions(body, scope, labels, gotos);
                scope.pop();
            }
            HirNode::Switch { cases, default, .. } => {
                for (case_index, (_, body, _)) in cases.iter().enumerate() {
                    scope.push(ScopeStep::SwitchCase(index, case_index));
                    collect_positions(body, scope, labels, gotos);
                    scope.pop();
                }
                if let Some(default) = default {
                    scope.push(ScopeStep::SwitchDefault(index));
                    collect_positions(default, scope, labels, gotos);
                    scope.pop();
                }
            }
            HirNode::TryCatch {
                try_body,
                catch_arms,
            } => {
                scope.push(ScopeStep::Try(index));
                collect_positions(try_body, scope, labels, gotos);
                scope.pop();
                for (arm_idx, (_ty, body)) in catch_arms.iter().enumerate() {
                    scope.push(ScopeStep::Catch(index, arm_idx));
                    collect_positions(body, scope, labels, gotos);
                    scope.pop();
                }
            }
            HirNode::TryFinally {
                try_body,
                finally_body,
            } => {
                scope.push(ScopeStep::Try(index));
                collect_positions(try_body, scope, labels, gotos);
                scope.pop();
                scope.push(ScopeStep::Finally(index));
                collect_positions(finally_body, scope, labels, gotos);
                scope.pop();
            }
            _ => {}
        }
    }
}

fn enclosing_if_branch(scope: &[ScopeStep]) -> Option<&[ScopeStep]> {
    scope
        .iter()
        .enumerate()
        .rev()
        .find(|(_, step)| matches!(step, ScopeStep::IfThen(_) | ScopeStep::IfElse(_)))
        .map(|(index, _)| &scope[..=index])
}

fn common_prefix(left: &[ScopeStep], right: &[ScopeStep]) -> ScopePath {
    left.iter()
        .zip(right)
        .take_while(|(left, right)| left == right)
        .map(|(step, _)| step.clone())
        .collect()
}

fn starts_with(path: &[ScopeStep], prefix: &[ScopeStep]) -> bool {
    path.len() >= prefix.len() && path.iter().zip(prefix).all(|(left, right)| left == right)
}

fn child_index_after_prefix(path: &[ScopeStep], prefix: &[ScopeStep]) -> Option<usize> {
    path.get(prefix.len()).map(step_index)
}

fn step_index(step: &ScopeStep) -> usize {
    match step {
        ScopeStep::Block(index)
        | ScopeStep::IfThen(index)
        | ScopeStep::IfElse(index)
        | ScopeStep::While(index)
        | ScopeStep::DoWhile(index)
        | ScopeStep::For(index)
        | ScopeStep::SwitchCase(index, _)
        | ScopeStep::SwitchDefault(index)
        | ScopeStep::Try(index)
        | ScopeStep::Finally(index) => *index,
        ScopeStep::Catch(index, _) => *index,
    }
}

fn apply_hoist(nodes: &mut Vec<HirNode>, plan: HoistPlan) -> bool {
    let suffix = {
        let Some(label_scope) = scope_mut(nodes, &plan.label_scope) else {
            return false;
        };
        if plan.label_index >= label_scope.len() {
            return false;
        }
        let suffix = label_scope.split_off(plan.label_index);
        label_hoist_debug!(
            "split label_scope={} remaining={} suffix_len={} suffix={}",
            fmt_scope(&plan.label_scope),
            label_scope.len(),
            suffix.len(),
            node_stats(&suffix)
        );
        suffix
    };

    let Some(insert_scope) = scope_mut(nodes, &plan.insert_scope) else {
        return false;
    };
    let insert_at = plan.insert_index.saturating_add(1).min(insert_scope.len());
    label_hoist_debug!(
        "insert insert_scope={} insert_at={} before_len={}",
        fmt_scope(&plan.insert_scope),
        insert_at,
        insert_scope.len()
    );
    insert_scope.splice(insert_at..insert_at, suffix);
    label_hoist_debug!(
        "insert-done insert_scope={} after_len={}",
        fmt_scope(&plan.insert_scope),
        insert_scope.len()
    );
    true
}

#[derive(Default)]
struct NodeStats {
    nodes: usize,
    labels: usize,
    gotos: usize,
    breaks: usize,
    continues: usize,
    empty_ifs: usize,
}

impl std::fmt::Display for NodeStats {
    fn fmt(&self, f: &mut std::fmt::Formatter<'_>) -> std::fmt::Result {
        write!(
            f,
            "nodes={} labels={} gotos={} breaks={} continues={} empty_ifs={}",
            self.nodes, self.labels, self.gotos, self.breaks, self.continues, self.empty_ifs
        )
    }
}

fn node_stats(nodes: &[HirNode]) -> NodeStats {
    let mut stats = NodeStats::default();
    for node in nodes {
        stats.nodes += 1;
        match node {
            HirNode::Label(_) => stats.labels += 1,
            HirNode::Goto(_) => stats.gotos += 1,
            HirNode::Break => stats.breaks += 1,
            HirNode::Continue => stats.continues += 1,
            HirNode::Block(children) => merge_stats(&mut stats, node_stats(children)),
            HirNode::If {
                then_body,
                else_body,
                ..
            } => {
                if then_body.is_empty() && else_body.as_ref().is_none_or(Vec::is_empty) {
                    stats.empty_ifs += 1;
                }
                merge_stats(&mut stats, node_stats(then_body));
                if let Some(else_body) = else_body {
                    merge_stats(&mut stats, node_stats(else_body));
                }
            }
            HirNode::IfCmp {
                then_body,
                else_body,
                ..
            } => {
                if then_body.is_empty() && else_body.as_ref().is_none_or(Vec::is_empty) {
                    stats.empty_ifs += 1;
                }
                merge_stats(&mut stats, node_stats(then_body));
                if let Some(else_body) = else_body {
                    merge_stats(&mut stats, node_stats(else_body));
                }
            }
            HirNode::While { body, .. } | HirNode::DoWhile { body, .. } => {
                merge_stats(&mut stats, node_stats(body));
            }
            HirNode::For { body, .. } => merge_stats(&mut stats, node_stats(body)),
            HirNode::Switch { cases, default, .. } => {
                for (_, body, _) in cases {
                    merge_stats(&mut stats, node_stats(body));
                }
                if let Some(default) = default {
                    merge_stats(&mut stats, node_stats(default));
                }
            }
            HirNode::TryCatch {
                try_body,
                catch_arms,
            } => {
                merge_stats(&mut stats, node_stats(try_body));
                for (_, body) in catch_arms {
                    merge_stats(&mut stats, node_stats(body));
                }
            }
            HirNode::TryFinally {
                try_body,
                finally_body,
            } => {
                merge_stats(&mut stats, node_stats(try_body));
                merge_stats(&mut stats, node_stats(finally_body));
            }
            HirNode::Commented { inner, .. } => {
                merge_stats(&mut stats, node_stats(std::slice::from_ref(inner.as_ref())));
            }
            HirNode::Statement(_)
            | HirNode::Return(_)
            | HirNode::Ternary { .. }
            | HirNode::TailCall { .. }
            | HirNode::GuardedIf { .. }
            | HirNode::GuardedTernary { .. }
            | HirNode::CselTernary { .. }
            | HirNode::ObjcBlock { .. }
            | HirNode::Asm { .. } => {}
        }
    }
    stats
}

fn merge_stats(dst: &mut NodeStats, src: NodeStats) {
    dst.nodes += src.nodes;
    dst.labels += src.labels;
    dst.gotos += src.gotos;
    dst.breaks += src.breaks;
    dst.continues += src.continues;
    dst.empty_ifs += src.empty_ifs;
}

fn fmt_scope(scope: &[ScopeStep]) -> String {
    if scope.is_empty() {
        return "<root>".into();
    }
    scope
        .iter()
        .map(|step| match step {
            ScopeStep::Block(index) => format!("block[{index}]"),
            ScopeStep::IfThen(index) => format!("if[{index}].then"),
            ScopeStep::IfElse(index) => format!("if[{index}].else"),
            ScopeStep::While(index) => format!("while[{index}]"),
            ScopeStep::DoWhile(index) => format!("dowhile[{index}]"),
            ScopeStep::For(index) => format!("for[{index}]"),
            ScopeStep::SwitchCase(index, case_index) => {
                format!("switch[{index}].case[{case_index}]")
            }
            ScopeStep::SwitchDefault(index) => format!("switch[{index}].default"),
            ScopeStep::Try(index) => format!("try[{index}]"),
            ScopeStep::Catch(index, arm_index) => format!("catch[{index}][{arm_index}]"),
            ScopeStep::Finally(index) => format!("finally[{index}]"),
        })
        .collect::<Vec<_>>()
        .join("/")
}

fn scope_mut<'a>(nodes: &'a mut Vec<HirNode>, path: &[ScopeStep]) -> Option<&'a mut Vec<HirNode>> {
    let mut current = nodes;
    for step in path {
        current = match step {
            ScopeStep::Block(index) => match current.get_mut(*index)? {
                HirNode::Block(children) => children,
                _ => return None,
            },
            ScopeStep::IfThen(index) => match current.get_mut(*index)? {
                HirNode::If { then_body, .. } => then_body,
                _ => return None,
            },
            ScopeStep::IfElse(index) => match current.get_mut(*index)? {
                HirNode::If { else_body, .. } => else_body.as_mut()?,
                _ => return None,
            },
            ScopeStep::While(index) => match current.get_mut(*index)? {
                HirNode::While { body, .. } => body,
                _ => return None,
            },
            ScopeStep::DoWhile(index) => match current.get_mut(*index)? {
                HirNode::DoWhile { body, .. } => body,
                _ => return None,
            },
            ScopeStep::For(index) => match current.get_mut(*index)? {
                HirNode::For { body, .. } => body,
                _ => return None,
            },
            ScopeStep::SwitchCase(index, case_index) => match current.get_mut(*index)? {
                HirNode::Switch { cases, .. } => &mut cases.get_mut(*case_index)?.1,
                _ => return None,
            },
            ScopeStep::SwitchDefault(index) => match current.get_mut(*index)? {
                HirNode::Switch { default, .. } => default.as_mut()?,
                _ => return None,
            },
            ScopeStep::Try(index) => match current.get_mut(*index)? {
                HirNode::TryCatch { try_body, .. } => try_body,
                HirNode::TryFinally { try_body, .. } => try_body,
                _ => return None,
            },
            ScopeStep::Catch(index, arm_index) => match current.get_mut(*index)? {
                HirNode::TryCatch { catch_arms, .. } => &mut catch_arms.get_mut(*arm_index)?.1,
                _ => return None,
            },
            ScopeStep::Finally(index) => match current.get_mut(*index)? {
                HirNode::TryFinally { finally_body, .. } => finally_body,
                _ => return None,
            },
        };
    }
    Some(current)
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

    fn cond() -> SsaVarnode {
        SsaVarnode {
            base: Varnode::reg(0, 1),
            version: 0,
        }
    }

    #[test]
    fn hoists_label_tail_from_then_branch_to_parent_scope() {
        let mut hir = func(vec![HirNode::If {
            cond: cond(),
            then_body: vec![HirNode::Label(LabelId(1)), HirNode::Break],
            else_body: Some(vec![HirNode::Goto(LabelId(1))]),
        }]);

        hoist_cross_branch_labels(&mut hir);

        assert!(matches!(
            &hir.body[..],
            [HirNode::If { then_body, .. }, HirNode::Label(LabelId(1)), HirNode::Break]
                if then_body.is_empty()
        ));
    }

    #[test]
    fn guarded_empty_sibling_preserves_skip_when_join_tail_is_hoisted() {
        let join = LabelId(7);
        let mut hir = func(vec![HirNode::If {
            cond: cond(),
            then_body: vec![
                HirNode::Label(LabelId(5)),
                HirNode::Break,
                HirNode::Label(join),
                HirNode::Return(None),
            ],
            else_body: Some(vec![HirNode::Goto(join)]),
        }]);

        hoist_cross_branch_labels(&mut hir);

        assert!(matches!(
            &hir.body[..],
            [
                HirNode::If {
                    then_body,
                    else_body: Some(else_body),
                    ..
                },
                HirNode::Label(LabelId(7)),
                HirNode::Return(None),
            ] if then_body == &vec![HirNode::Label(LabelId(5)), HirNode::Break]
                && else_body == &vec![HirNode::Goto(LabelId(7))]
        ));
    }
}
