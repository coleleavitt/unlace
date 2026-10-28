//! Duplicate simple labelled loop tails at goto sites.
//!
//! This is a small, bounded SAILR-style cleanup for the dispatch-free DREAM
//! frontier. Some irreducible loop regions end with a ladder of labels whose
//! bodies are straight-line assignments followed by a loop edge or `break`.
//! A `goto` to one of those labels is equivalent to executing that suffix
//! directly at the branch site. Duplicating only simple suffixes removes the
//! abnormal label/goto pair without introducing a synthetic dispatcher.
//!
//! Diagnostics: enable `unlace::struct::label_tail_dup=debug`.

use std::collections::BTreeMap;

use crate::hir::{HirFunction, HirNode, LabelId};

const MAX_TAIL_NODES: usize = 24;
const MAX_REPLACEMENTS_PER_FUNCTION: usize = 16;

/// Replace gotos to simple labelled tails in loop bodies with duplicated
/// straight-line HIR. The pass is deliberately conservative:
/// - candidates are top-level labels in the current loop body;
/// - candidate suffixes may contain labels, statements, and one simple
///   terminal (`break`, `continue`, or `return`);
/// - labels are stripped from duplicated copies so C label names stay unique;
/// - replacements do not recurse into nested loops or switches, where `break`
///   would have a different meaning.
pub fn duplicate_simple_label_tails(func: &mut HirFunction) {
    let mut budget = MAX_REPLACEMENTS_PER_FUNCTION;
    duplicate_in_nodes(&mut func.body, &mut budget);
}

fn duplicate_in_nodes(nodes: &mut [HirNode], budget: &mut usize) {
    if *budget == 0 {
        return;
    }

    for node in nodes {
        if *budget == 0 {
            break;
        }
        match node {
            HirNode::Block(children) => duplicate_in_nodes(children, budget),
            HirNode::If {
                then_body,
                else_body,
                ..
            } => {
                duplicate_in_nodes(then_body, budget);
                if let Some(else_body) = else_body {
                    duplicate_in_nodes(else_body, budget);
                }
            }
            HirNode::While { body, .. }
            | HirNode::DoWhile { body, .. }
            | HirNode::For { body, .. } => {
                duplicate_loop_body(body, budget);
                duplicate_in_nodes(body, budget);
            }
            HirNode::Switch { cases, default, .. } => {
                for (_, body, _) in cases {
                    duplicate_in_nodes(body, budget);
                }
                if let Some(default) = default {
                    duplicate_in_nodes(default, budget);
                }
            }
            HirNode::TryCatch {
                try_body,
                catch_arms,
            } => {
                duplicate_in_nodes(try_body, budget);
                for (_, body) in catch_arms {
                    duplicate_in_nodes(body, budget);
                }
            }
            HirNode::TryFinally {
                try_body,
                finally_body,
            } => {
                duplicate_in_nodes(try_body, budget);
                duplicate_in_nodes(finally_body, budget);
            }
            _ => {}
        }
    }
}

macro_rules! label_tail_dup_debug {
    ($($arg:tt)*) => {
        tracing::debug!(target: "unlace::struct::label_tail_dup", "{}", format_args!($($arg)*))
    };
}

fn duplicate_loop_body(body: &mut Vec<HirNode>, budget: &mut usize) {
    if *budget == 0 {
        return;
    }
    let candidates = collect_loop_tail_candidates(body);
    if candidates.is_empty() {
        return;
    }
    label_tail_dup_debug!(
        "loop-candidates={} labels={:?} budget={}",
        candidates.len(),
        candidates.keys().collect::<Vec<_>>(),
        *budget
    );
    let replaced = replace_gotos_in_same_loop_scope(body, &candidates, budget);
    if replaced > 0 {
        label_tail_dup_debug!("replacements={replaced} remaining_budget={budget}");
    }
}

fn collect_loop_tail_candidates(body: &[HirNode]) -> BTreeMap<LabelId, Vec<HirNode>> {
    let mut candidates = BTreeMap::new();
    for (index, node) in body.iter().enumerate() {
        let HirNode::Label(label) = node else {
            continue;
        };
        if let Some(tail) = simple_tail_after_label(body, index) {
            candidates.insert(*label, tail);
        }
    }
    candidates
}

fn simple_tail_after_label(body: &[HirNode], label_index: usize) -> Option<Vec<HirNode>> {
    let mut tail = Vec::new();
    let mut non_label_nodes = 0usize;
    let mut terminal = false;

    for node in body.iter().skip(label_index + 1) {
        match node {
            HirNode::Label(_) => continue,
            HirNode::Statement(_) => {
                tail.push(node.clone());
                non_label_nodes += 1;
            }
            HirNode::Break | HirNode::Continue | HirNode::Return(_) => {
                if non_label_nodes + 1 > MAX_TAIL_NODES {
                    return None;
                }
                tail.push(node.clone());
                terminal = true;
                break;
            }
            _ => return None,
        }

        if non_label_nodes > MAX_TAIL_NODES {
            return None;
        }
    }

    if tail.is_empty() {
        return None;
    }
    if !terminal {
        tail.push(HirNode::Continue);
    }
    Some(tail)
}

fn replace_gotos_in_same_loop_scope(
    nodes: &mut Vec<HirNode>,
    candidates: &BTreeMap<LabelId, Vec<HirNode>>,
    budget: &mut usize,
) -> usize {
    let mut replaced = 0usize;
    let mut index = 0usize;
    while index < nodes.len() {
        if *budget == 0 {
            break;
        }
        if let HirNode::Goto(label) = &nodes[index]
            && let Some(replacement) = candidates.get(label)
        {
            label_tail_dup_debug!(
                "replace goto target={label:?} duplicated_nodes={}",
                replacement.len()
            );
            let replacement = replacement.clone();
            let len = replacement.len();
            nodes.splice(index..=index, replacement);
            *budget -= 1;
            replaced += 1;
            index += len;
            continue;
        }

        replaced += match &mut nodes[index] {
            HirNode::Block(children) => {
                replace_gotos_in_same_loop_scope(children, candidates, budget)
            }
            HirNode::If {
                then_body,
                else_body,
                ..
            } => {
                let mut count = replace_gotos_in_same_loop_scope(then_body, candidates, budget);
                if let Some(else_body) = else_body {
                    count += replace_gotos_in_same_loop_scope(else_body, candidates, budget);
                }
                count
            }
            HirNode::TryCatch {
                try_body,
                catch_arms,
            } => {
                let mut count = replace_gotos_in_same_loop_scope(try_body, candidates, budget);
                for (_, body) in catch_arms {
                    count += replace_gotos_in_same_loop_scope(body, candidates, budget);
                }
                count
            }
            HirNode::TryFinally {
                try_body,
                finally_body,
            } => {
                replace_gotos_in_same_loop_scope(try_body, candidates, budget)
                    + replace_gotos_in_same_loop_scope(finally_body, candidates, budget)
            }
            // Do not descend into nested loops or switches. A duplicated
            // `break` would bind to the wrong construct there.
            HirNode::While { .. }
            | HirNode::DoWhile { .. }
            | HirNode::For { .. }
            | HirNode::Switch { .. } => 0,
            _ => 0,
        };
        index += 1;
    }
    replaced
}

#[cfg(test)]
mod tests {
    use std::collections::{BTreeMap, BTreeSet};

    use smallvec::smallvec;
    use unlace_ir::ssa::{PrimitiveType, SsaVarnode};
    use unlace_ir::{IrInsn, IrOp, Varnode};

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
            byref_params: BTreeSet::new(),
            var_role_names: BTreeMap::new(),
            finalized_signature: None,
            byref_locals: BTreeSet::new(),
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

    fn stmt(offset: u64) -> HirNode {
        HirNode::Statement(IrInsn::with_output(
            IrOp::Copy,
            Varnode::unique(offset, 4),
            smallvec![Varnode::constant(offset, 4)],
            offset,
        ))
    }

    #[test]
    fn duplicates_simple_loop_tail_and_strips_labels_from_copy() {
        let mut hir = func(vec![HirNode::While {
            cond: cond(),
            body: vec![
                HirNode::If {
                    cond: cond(),
                    then_body: vec![HirNode::Goto(LabelId(1))],
                    else_body: None,
                },
                stmt(10),
                HirNode::Label(LabelId(1)),
                stmt(11),
                HirNode::Label(LabelId(2)),
                stmt(12),
            ],
        }]);

        duplicate_simple_label_tails(&mut hir);

        let HirNode::While { body, .. } = &hir.body[0] else {
            panic!("expected loop");
        };
        let HirNode::If { then_body, .. } = &body[0] else {
            panic!("expected guard");
        };
        assert_eq!(
            then_body,
            &vec![stmt(11), stmt(12), HirNode::Continue],
            "goto should become a label-free duplicate of the loop tail"
        );
    }

    #[test]
    fn does_not_duplicate_tail_with_nested_control_flow() {
        let mut hir = func(vec![HirNode::While {
            cond: cond(),
            body: vec![
                HirNode::If {
                    cond: cond(),
                    then_body: vec![HirNode::Goto(LabelId(1))],
                    else_body: None,
                },
                HirNode::Label(LabelId(1)),
                HirNode::If {
                    cond: cond(),
                    then_body: vec![stmt(1)],
                    else_body: None,
                },
            ],
        }]);

        duplicate_simple_label_tails(&mut hir);

        let HirNode::While { body, .. } = &hir.body[0] else {
            panic!("expected loop");
        };
        let HirNode::If { then_body, .. } = &body[0] else {
            panic!("expected guard");
        };
        assert_eq!(then_body, &vec![HirNode::Goto(LabelId(1))]);
    }
}
