//! Combined continue/break detection for structured loops.
//!
//! Walks the structured HIR and replaces goto targets with `Continue` or `Break`
//! based on the enclosing loop context:
//! - `Goto(label)` where label matches the loop header → `Continue`
//! - `Goto(label)` where label matches the first stmt after the loop → `Break`
//!
//! This pass subsumes the individual `goto_to_continue` and `goto_to_break`
//! passes with a single tree-walk that handles both cases simultaneously.

use crate::hir::{HirNode, LabelId};

/// Detect and replace goto statements with `continue` / `break` inside loops.
///
/// Recursively walks `body`; when inside a loop body:
/// - `Goto(label)` where label matches the loop header → `Continue`
/// - `Goto(label)` where label matches the first stmt after the loop → `Break`
/// - `Goto(label)` to unrelated labels → left unchanged
pub fn detect_continue_break(body: &mut [HirNode]) {
    rewrite_scope(body);
}

/// Walk a scope, discovering loop header/exit labels from adjacent Label/Loop pairs.
fn rewrite_scope(nodes: &mut [HirNode]) {
    // Pre-compute header and exit labels for each position.
    // A loop at index `i` has:
    //   - header label: if nodes[i-1] == Label(L), then L is the header
    //   - exit label: if nodes[i+1] == Label(L), then L is the exit
    let len = nodes.len();

    let headers: Vec<Option<LabelId>> = (0..len)
        .map(|i| {
            if is_loop(&nodes[i])
                && i > 0
                && let HirNode::Label(label) = nodes[i - 1]
            {
                Some(label)
            } else {
                None
            }
        })
        .collect();

    let exits: Vec<Option<LabelId>> = (0..len)
        .map(|i| {
            if is_loop(&nodes[i])
                && i + 1 < len
                && let HirNode::Label(label) = nodes[i + 1]
            {
                Some(label)
            } else {
                None
            }
        })
        .collect();

    for i in 0..len {
        match &mut nodes[i] {
            HirNode::While { body, .. }
            | HirNode::DoWhile { body, .. }
            | HirNode::For { body, .. } => {
                let header = headers[i];
                let exit = exits[i];
                if header.is_some() || exit.is_some() {
                    replace_gotos_in_loop_body(body, header, exit);
                }
                // Recurse into the loop body for nested loops.
                rewrite_scope(body);
            }
            other => rewrite_children(other),
        }
    }
}

fn is_loop(node: &HirNode) -> bool {
    matches!(
        node,
        HirNode::While { .. } | HirNode::DoWhile { .. } | HirNode::For { .. }
    )
}

fn rewrite_children(node: &mut HirNode) {
    match node {
        HirNode::Block(children) => rewrite_scope(children),
        HirNode::If {
            then_body,
            else_body,
            ..
        }
        | HirNode::IfCmp {
            then_body,
            else_body,
            ..
        } => {
            rewrite_scope(then_body);
            if let Some(eb) = else_body {
                rewrite_scope(eb);
            }
        }
        HirNode::Switch { cases, default, .. } => {
            for (_, body, _) in cases {
                rewrite_scope(body);
            }
            if let Some(d) = default {
                rewrite_scope(d);
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
        HirNode::Commented { inner, .. } => {
            rewrite_children(inner.as_mut());
        }
        HirNode::GuardedIf {
            then_body,
            else_body,
            ..
        } => {
            rewrite_scope(then_body);
            rewrite_scope(else_body);
        }
        _ => {}
    }
}

/// Replace gotos inside a loop body with Continue/Break as appropriate.
/// Does NOT recurse into nested loops (those are handled by the outer walk).
fn replace_gotos_in_loop_body(
    nodes: &mut [HirNode],
    header: Option<LabelId>,
    exit: Option<LabelId>,
) {
    for node in nodes {
        match node {
            HirNode::Goto(label) => {
                if Some(*label) == header {
                    *node = HirNode::Continue;
                } else if Some(*label) == exit {
                    *node = HirNode::Break;
                }
            }
            HirNode::Block(children) => {
                replace_gotos_in_loop_body(children, header, exit);
            }
            HirNode::If {
                then_body,
                else_body,
                ..
            }
            | HirNode::IfCmp {
                then_body,
                else_body,
                ..
            } => {
                replace_gotos_in_loop_body(then_body, header, exit);
                if let Some(eb) = else_body {
                    replace_gotos_in_loop_body(eb, header, exit);
                }
            }
            HirNode::Switch { cases, default, .. } => {
                for (_, body, _) in cases {
                    replace_gotos_in_loop_body(body, header, exit);
                }
                if let Some(d) = default {
                    replace_gotos_in_loop_body(d, header, exit);
                }
            }
            HirNode::TryCatch {
                try_body,
                catch_arms,
            } => {
                replace_gotos_in_loop_body(try_body, header, exit);
                for (_ty, body) in catch_arms {
                    replace_gotos_in_loop_body(body, header, exit);
                }
            }
            HirNode::TryFinally {
                try_body,
                finally_body,
            } => {
                replace_gotos_in_loop_body(try_body, header, exit);
                replace_gotos_in_loop_body(finally_body, header, exit);
            }
            HirNode::Commented { inner, .. } => {
                replace_gotos_in_loop_body(std::slice::from_mut(inner.as_mut()), header, exit);
            }
            // Don't recurse into nested loops — they have their own header/exit context.
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
    use crate::hir::HirFunction;

    fn cond() -> SsaVarnode {
        SsaVarnode {
            base: Varnode::reg(0, 1),
            version: 0,
        }
    }

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

    /// goto to loop header inside while body → renders `continue;`
    #[test]
    fn goto_to_loop_header_becomes_continue() {
        let mut hir = func(vec![
            HirNode::Label(LabelId(5)),
            HirNode::While {
                cond: cond(),
                body: vec![HirNode::Goto(LabelId(5))],
            },
        ]);

        detect_continue_break(&mut hir.body);

        match &hir.body[1] {
            HirNode::While { body, .. } => {
                assert_eq!(body, &vec![HirNode::Continue]);
            }
            other => panic!("Expected While, got: {other:?}"),
        }
    }

    /// goto to loop exit inside while body → renders `break;`
    #[test]
    fn goto_to_loop_exit_becomes_break() {
        let mut hir = func(vec![
            HirNode::While {
                cond: cond(),
                body: vec![HirNode::Goto(LabelId(9))],
            },
            HirNode::Label(LabelId(9)),
        ]);

        detect_continue_break(&mut hir.body);

        match &hir.body[0] {
            HirNode::While { body, .. } => {
                assert_eq!(body, &vec![HirNode::Break]);
            }
            other => panic!("Expected While, got: {other:?}"),
        }
    }

    /// goto to unrelated label → stays as goto
    #[test]
    fn goto_to_unrelated_label_stays_goto() {
        let mut hir = func(vec![
            HirNode::Label(LabelId(5)),
            HirNode::While {
                cond: cond(),
                body: vec![HirNode::Goto(LabelId(99))], // unrelated label
            },
            HirNode::Label(LabelId(9)),
        ]);

        detect_continue_break(&mut hir.body);

        match &hir.body[1] {
            HirNode::While { body, .. } => {
                assert_eq!(body, &vec![HirNode::Goto(LabelId(99))]);
            }
            other => panic!("Expected While with unchanged goto, got: {other:?}"),
        }
    }
}
