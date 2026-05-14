//! Collapse fallthrough goto/label pairs that are semantically redundant.
//!
//! Two patterns are handled:
//!
//! 1. **Direct fallthrough**: `Goto(L); Label(L)` — the goto jumps to the
//!    immediately-following label, which is where control would flow anyway.
//!    Both are removed.
//!
//! 2. **Intermediate chain**: `Label(N); Goto(M); Label(M)` — Label(N) just
//!    falls through to a goto that targets the next label. The intermediate
//!    `Label(N) + Goto(M)` are removed, keeping only `Label(M)`.
//!
//! After collapsing, any labels with zero remaining goto references are
//! stripped via the usual unused-label removal.

use std::collections::BTreeSet;

use crate::hir::{HirFunction, HirNode, LabelId};

/// Run fallthrough collapse on the function body.
pub fn collapse_label_fallthroughs(func: &mut HirFunction) {
    let mut changed = true;
    // Iterate to a fixed point — collapsing one pair may expose another.
    while changed {
        changed = false;
        collapse_in_scope(&mut func.body, &mut changed);
    }

    // Final cleanup: remove labels with no remaining gotos.
    let mut used = BTreeSet::new();
    collect_gotos(&func.body, &mut used);
    remove_unused_labels(&mut func.body, &used);
}

/// Walk a flat statement list and collapse fallthrough patterns.
fn collapse_in_scope(nodes: &mut Vec<HirNode>, changed: &mut bool) {
    // Pattern 2: Label(N); Goto(M); Label(M) → remove Label(N) + Goto(M).
    // We scan for this first because it's the longer pattern. Doing it before
    // pattern 1 avoids partial matches that would leave stale nodes.
    let mut i = 0;
    while i + 2 < nodes.len() {
        if let (HirNode::Label(_n), HirNode::Goto(m), HirNode::Label(m2)) =
            (&nodes[i], &nodes[i + 1], &nodes[i + 2])
        {
            if m == m2 {
                // Remove Label(N) at index i and Goto(M) at index i+1.
                nodes.remove(i); // removes Label(N)
                nodes.remove(i); // removes Goto(M) (was i+1, now i)
                *changed = true;
                // Don't advance i — re-check from the same position.
                continue;
            }
        }
        i += 1;
    }

    // Pattern 1: Goto(L); Label(L) → remove both.
    let mut i = 0;
    while i + 1 < nodes.len() {
        if let (HirNode::Goto(g), HirNode::Label(l)) = (&nodes[i], &nodes[i + 1]) {
            if g == l {
                nodes.remove(i); // removes Goto(L)
                nodes.remove(i); // removes Label(L)
                *changed = true;
                continue;
            }
        }
        i += 1;
    }

    // Recurse into children.
    for node in nodes.iter_mut() {
        match node {
            HirNode::Block(children) => collapse_in_scope(children, changed),
            HirNode::If {
                then_body,
                else_body,
                ..
            } => {
                collapse_in_scope(then_body, changed);
                if let Some(else_body) = else_body {
                    collapse_in_scope(else_body, changed);
                }
            }
            HirNode::While { body, .. }
            | HirNode::DoWhile { body, .. }
            | HirNode::For { body, .. } => {
                collapse_in_scope(body, changed);
            }
            HirNode::Switch { cases, default, .. } => {
                for (_, body, _) in cases {
                    collapse_in_scope(body, changed);
                }
                if let Some(default) = default {
                    collapse_in_scope(default, changed);
                }
            }
            HirNode::TryCatch {
                try_body,
                catch_arms,
            } => {
                collapse_in_scope(try_body, changed);
                for (_ty, body) in catch_arms.iter_mut() {
                    collapse_in_scope(body, changed);
                }
            }
            HirNode::TryFinally {
                try_body,
                finally_body,
            } => {
                collapse_in_scope(try_body, changed);
                collapse_in_scope(finally_body, changed);
            }
            _ => {}
        }
    }
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
    for node in nodes.iter_mut() {
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
                for (_ty, body) in catch_arms.iter_mut() {
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

    use smallvec::smallvec;
    use unlace_ir::ssa::PrimitiveType;
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
            noreturn: false,
            composite_var_types: BTreeMap::new(),
            is_ctor: false,
            is_dtor: false,
            class_name: None,
            merged_names: BTreeMap::new(),
            objc_dispatch_calls: BTreeMap::new(),
            indirect_branch_kinds: BTreeMap::new(),
            byref_boxes: BTreeMap::new(),
            byref_params: BTreeSet::new(),
            var_role_names: BTreeMap::new(),
            finalized_signature: None,
            byref_locals: BTreeSet::new(),
            stack_frame: None,
        }
    }

    fn assign_stmt() -> HirNode {
        // x = 1  (COPY const(1) → reg(0,4))
        HirNode::Statement(IrInsn::with_output(
            IrOp::Copy,
            Varnode::reg(0, 4),
            smallvec![Varnode::constant(1, 4)],
            0x1000,
        ))
    }

    /// Pattern 1: `goto L1; L1: x=1;` → just `x = 1;`
    #[test]
    fn direct_fallthrough_goto_label_removed() {
        let mut hir = func(vec![
            HirNode::Goto(LabelId(1)),
            HirNode::Label(LabelId(1)),
            assign_stmt(),
        ]);

        collapse_label_fallthroughs(&mut hir);

        assert_eq!(hir.body, vec![assign_stmt()]);
    }

    /// Pattern 2: `L1: goto L2; L2: x=1;` → just `x = 1;`
    #[test]
    fn chain_label_goto_label_collapsed() {
        let mut hir = func(vec![
            HirNode::Label(LabelId(1)),
            HirNode::Goto(LabelId(2)),
            HirNode::Label(LabelId(2)),
            assign_stmt(),
        ]);

        collapse_label_fallthroughs(&mut hir);

        // After collapsing: Label(1)+Goto(2) removed → left with Label(2) + stmt.
        // Then Label(2) has no remaining gotos → also removed.
        assert_eq!(hir.body, vec![assign_stmt()]);
    }
}
