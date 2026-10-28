//! Duplicate guarding conditions at cross-branch goto sites.

use std::collections::BTreeMap;

use unlace_ir::ssa::SsaVarnode;

use crate::hir::{HirFunction, HirNode, LabelId};

const MAX_DUPLICATIONS_PER_FUNCTION: usize = 2;

/// Replace remaining gotos to labels inside an `if` branch with a duplicate of
/// that branch's guard and the target tail. The duplication limit prevents
/// exponential growth on pathological irreducible regions.
pub fn duplicate_goto_conditions(func: &mut HirFunction) {
    for _ in 0..MAX_DUPLICATIONS_PER_FUNCTION {
        let Some(plan) = find_duplication(&func.body) else {
            break;
        };
        if !apply_duplication(&mut func.body, plan) {
            break;
        }
    }
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
    /// `(node_index, arm_index)` — selects the `arm_index`-th catch arm
    /// of a [`HirNode::TryCatch`] at `node_index`.
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
enum BranchSide {
    Then,
    Else,
}

#[derive(Clone, Debug)]
struct BranchInfo {
    prefix: ScopePath,
    parent_scope: ScopePath,
    if_index: usize,
    side: BranchSide,
}

#[derive(Clone, Debug)]
struct DuplicationPlan {
    goto_scope: ScopePath,
    goto_index: usize,
    replacement: HirNode,
}

fn find_duplication(nodes: &[HirNode]) -> Option<DuplicationPlan> {
    let mut labels = BTreeMap::new();
    let mut gotos = Vec::new();
    collect_positions(nodes, &mut Vec::new(), &mut labels, &mut gotos);

    for (target, goto_pos) in gotos {
        let Some(label_pos) = labels.get(&target) else {
            continue;
        };
        let Some(branch) = enclosing_if_branch(&label_pos.scope) else {
            continue;
        };
        if starts_with(&goto_pos.scope, &branch.prefix) {
            continue;
        }
        // Inside a loop or switch the tail does not run to the end of the
        // branch: it loops back or leaves through `break`, so the guard no
        // longer describes when the tail runs.
        if label_pos.scope[branch.prefix.len()..].iter().any(|step| {
            matches!(
                step,
                ScopeStep::While(_)
                    | ScopeStep::DoWhile(_)
                    | ScopeStep::For(_)
                    | ScopeStep::SwitchCase(..)
                    | ScopeStep::SwitchDefault(_)
            )
        }) {
            continue;
        }
        let Some(cond) = if_condition(nodes, &branch.parent_scope, branch.if_index) else {
            continue;
        };
        let Some(label_scope) = scope_ref(nodes, &label_pos.scope) else {
            continue;
        };
        let tail = label_scope
            .get(label_pos.index.saturating_add(1)..)
            .unwrap_or(&[])
            .to_vec();
        let replacement = match branch.side {
            BranchSide::Then => HirNode::If {
                cond,
                then_body: tail,
                else_body: None,
            },
            BranchSide::Else => HirNode::If {
                cond,
                then_body: Vec::new(),
                else_body: Some(tail),
            },
        };
        return Some(DuplicationPlan {
            goto_scope: goto_pos.scope,
            goto_index: goto_pos.index,
            replacement,
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

fn enclosing_if_branch(scope: &[ScopeStep]) -> Option<BranchInfo> {
    scope.iter().enumerate().rev().find_map(|(index, step)| {
        let (if_index, side) = match step {
            ScopeStep::IfThen(if_index) => (*if_index, BranchSide::Then),
            ScopeStep::IfElse(if_index) => (*if_index, BranchSide::Else),
            _ => return None,
        };
        Some(BranchInfo {
            prefix: scope[..=index].to_vec(),
            parent_scope: scope[..index].to_vec(),
            if_index,
            side,
        })
    })
}

fn starts_with(path: &[ScopeStep], prefix: &[ScopeStep]) -> bool {
    path.len() >= prefix.len() && path.iter().zip(prefix).all(|(left, right)| left == right)
}

fn if_condition(
    nodes: &[HirNode],
    parent_scope: &[ScopeStep],
    if_index: usize,
) -> Option<SsaVarnode> {
    match scope_ref(nodes, parent_scope)?.get(if_index)? {
        HirNode::If { cond, .. } => Some(*cond),
        _ => None,
    }
}

fn apply_duplication(nodes: &mut Vec<HirNode>, plan: DuplicationPlan) -> bool {
    let Some(scope) = scope_mut(nodes, &plan.goto_scope) else {
        return false;
    };
    let Some(node) = scope.get_mut(plan.goto_index) else {
        return false;
    };
    if !matches!(node, HirNode::Goto(_)) {
        return false;
    }
    *node = plan.replacement;
    true
}

fn scope_ref<'a>(nodes: &'a [HirNode], path: &[ScopeStep]) -> Option<&'a [HirNode]> {
    let mut current = nodes;
    for step in path {
        current = match step {
            ScopeStep::Block(index) => match current.get(*index)? {
                HirNode::Block(children) => children,
                _ => return None,
            },
            ScopeStep::IfThen(index) => match current.get(*index)? {
                HirNode::If { then_body, .. } => then_body,
                _ => return None,
            },
            ScopeStep::IfElse(index) => match current.get(*index)? {
                HirNode::If { else_body, .. } => else_body.as_ref()?,
                _ => return None,
            },
            ScopeStep::While(index) => match current.get(*index)? {
                HirNode::While { body, .. } => body,
                _ => return None,
            },
            ScopeStep::DoWhile(index) => match current.get(*index)? {
                HirNode::DoWhile { body, .. } => body,
                _ => return None,
            },
            ScopeStep::For(index) => match current.get(*index)? {
                HirNode::For { body, .. } => body,
                _ => return None,
            },
            ScopeStep::SwitchCase(index, case_index) => match current.get(*index)? {
                HirNode::Switch { cases, .. } => &cases.get(*case_index)?.1,
                _ => return None,
            },
            ScopeStep::SwitchDefault(index) => match current.get(*index)? {
                HirNode::Switch { default, .. } => default.as_ref()?,
                _ => return None,
            },
            ScopeStep::Try(index) => match current.get(*index)? {
                HirNode::TryCatch { try_body, .. } => try_body,
                HirNode::TryFinally { try_body, .. } => try_body,
                _ => return None,
            },
            ScopeStep::Catch(index, arm_index) => match current.get(*index)? {
                HirNode::TryCatch { catch_arms, .. } => &catch_arms.get(*arm_index)?.1,
                _ => return None,
            },
            ScopeStep::Finally(index) => match current.get(*index)? {
                HirNode::TryFinally { finally_body, .. } => finally_body,
                _ => return None,
            },
        };
    }
    Some(current)
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

    fn cond(reg: u64) -> SsaVarnode {
        SsaVarnode {
            base: Varnode::reg(reg, 1),
            version: 0,
        }
    }

    #[test]
    fn duplicates_parent_condition_at_goto_site() {
        let guard = cond(1);
        let mut hir = func(vec![
            HirNode::Goto(LabelId(1)),
            HirNode::If {
                cond: guard,
                then_body: vec![HirNode::Label(LabelId(1)), HirNode::Break],
                else_body: None,
            },
        ]);

        duplicate_goto_conditions(&mut hir);

        assert!(matches!(
            &hir.body[0],
            HirNode::If { cond, then_body, else_body: None }
                if *cond == guard && then_body == &vec![HirNode::Break]
        ));
    }

    #[test]
    fn leaves_goto_to_label_inside_switch_case() {
        let body = vec![
            HirNode::If {
                cond: cond(1),
                then_body: vec![HirNode::Switch {
                    cond: cond(2),
                    cases: vec![(
                        crate::hir::SwitchCase::Value(0),
                        vec![HirNode::Label(LabelId(1)), HirNode::Return(None)],
                        false,
                    )],
                    default: None,
                    jumptable_addr: None,
                    jumptable_cases: None,
                }],
                else_body: None,
            },
            HirNode::Goto(LabelId(1)),
        ];
        let mut hir = func(body.clone());

        duplicate_goto_conditions(&mut hir);

        assert_eq!(hir.body, body);
    }
}
