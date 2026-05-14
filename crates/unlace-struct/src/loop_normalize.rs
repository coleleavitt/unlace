//! Loop normalization: convert `do-while` to `while` when safe.
//!
//! A `DoWhile { body, cond }` can be safely rewritten to `While { cond, body }`
//! when the condition is *loop-invariant on entry* — i.e., no variable read by
//! `cond` is modified in `body` before the first iteration's exit test.
//!
//! Algorithm:
//! 1. Walk each `DoWhile` in the HIR tree.
//! 2. Collect the set of base varnodes written in `body` (any `Statement` with
//!    an output, plus outputs from nested control flow).
//! 3. Collect the set of base varnodes read by `cond` (the condition varnode's base).
//! 4. If `read_set ∩ write_set == ∅`, convert to `While`.

use std::collections::BTreeSet;

use unlace_ir::Varnode;

use crate::hir::{HirFunction, HirNode};

/// Post-structuring pass: promote loop-invariant `do-while` to `while`.
pub fn normalize_dowhile_to_while(func: &mut HirFunction) {
    normalize_scope(&mut func.body);
}

fn normalize_scope(nodes: &mut Vec<HirNode>) {
    for node in nodes.iter_mut() {
        normalize_node(node);
    }
}

fn normalize_node(node: &mut HirNode) {
    // First, recurse into children so inner loops are handled bottom-up.
    match node {
        HirNode::Block(children) => normalize_scope(children),
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
            normalize_scope(then_body);
            if let Some(eb) = else_body {
                normalize_scope(eb);
            }
        }
        HirNode::While { body, .. } | HirNode::For { body, .. } => {
            normalize_scope(body);
        }
        HirNode::DoWhile { body, .. } => {
            normalize_scope(body);
        }
        HirNode::Switch { cases, default, .. } => {
            for (_, body, _) in cases.iter_mut() {
                normalize_scope(body);
            }
            if let Some(d) = default {
                normalize_scope(d);
            }
        }
        HirNode::TryCatch {
            try_body,
            catch_arms,
        } => {
            normalize_scope(try_body);
            for (_ty, body) in catch_arms.iter_mut() {
                normalize_scope(body);
            }
        }
        HirNode::TryFinally {
            try_body,
            finally_body,
        } => {
            normalize_scope(try_body);
            normalize_scope(finally_body);
        }
        HirNode::Commented { inner, .. } => {
            normalize_node(inner.as_mut());
        }
        HirNode::GuardedIf {
            then_body,
            else_body,
            ..
        } => {
            normalize_scope(then_body);
            normalize_scope(else_body);
        }
        _ => {}
    }

    // Now check if this node is a DoWhile that can be promoted.
    if let HirNode::DoWhile { body, cond } = node {
        let write_set = collect_writes(body);
        let cond_base = cond.base;
        if !write_set.contains(&cond_base) {
            // Safe to convert: condition is loop-invariant on entry.
            let body_taken = std::mem::take(body);
            let cond_taken = *cond;
            *node = HirNode::While {
                cond: cond_taken,
                body: body_taken,
            };
        }
    }
}

/// Collect the set of base `Varnode`s written (defined) anywhere in a HIR body.
fn collect_writes(nodes: &[HirNode]) -> BTreeSet<Varnode> {
    let mut set = BTreeSet::new();
    for node in nodes {
        collect_writes_node(node, &mut set);
    }
    set
}

fn collect_writes_node(node: &HirNode, set: &mut BTreeSet<Varnode>) {
    match node {
        HirNode::Statement(insn) => {
            if let Some(output) = insn.output {
                set.insert(output);
            }
        }
        HirNode::Block(children)
        | HirNode::While { body: children, .. }
        | HirNode::DoWhile { body: children, .. } => {
            for child in children {
                collect_writes_node(child, set);
            }
        }
        HirNode::For {
            init, body, update, ..
        } => {
            if let Some(init_insn) = init {
                if let Some(output) = init_insn.output {
                    set.insert(output);
                }
            }
            if let Some(output) = update.output {
                set.insert(output);
            }
            for child in body {
                collect_writes_node(child, set);
            }
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
            for child in then_body {
                collect_writes_node(child, set);
            }
            if let Some(eb) = else_body {
                for child in eb {
                    collect_writes_node(child, set);
                }
            }
        }
        HirNode::Switch { cases, default, .. } => {
            for (_, body, _) in cases {
                for child in body {
                    collect_writes_node(child, set);
                }
            }
            if let Some(d) = default {
                for child in d {
                    collect_writes_node(child, set);
                }
            }
        }
        HirNode::TryCatch {
            try_body,
            catch_arms,
        } => {
            for child in try_body {
                collect_writes_node(child, set);
            }
            for (_ty, body) in catch_arms {
                for child in body {
                    collect_writes_node(child, set);
                }
            }
        }
        HirNode::TryFinally {
            try_body,
            finally_body,
        } => {
            for child in try_body {
                collect_writes_node(child, set);
            }
            for child in finally_body {
                collect_writes_node(child, set);
            }
        }
        HirNode::Commented { inner, .. } => {
            collect_writes_node(inner.as_ref(), set);
        }
        HirNode::GuardedIf {
            then_body,
            else_body,
            ..
        } => {
            for child in then_body {
                collect_writes_node(child, set);
            }
            for child in else_body {
                collect_writes_node(child, set);
            }
        }
        _ => {}
    }
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

    /// DoWhile where cond reads only a parameter (not written in body) → converted to While.
    #[test]
    fn dowhile_invariant_cond_converted_to_while() {
        // Condition reads register (0, 1) — a "parameter" not written in body.
        let cond_var = SsaVarnode {
            base: Varnode::reg(0, 1),
            version: 0,
        };

        // Body writes register (8, 4) — a different variable.
        let body_stmt = HirNode::Statement(IrInsn::with_output(
            IrOp::Copy,
            Varnode::reg(8, 4),
            smallvec![Varnode::constant(1, 4)],
            0x1000,
        ));

        let mut hir = func(vec![HirNode::DoWhile {
            body: vec![body_stmt.clone()],
            cond: cond_var,
        }]);

        normalize_dowhile_to_while(&mut hir);

        match &hir.body[0] {
            HirNode::While { cond, body } => {
                assert_eq!(*cond, cond_var);
                assert_eq!(body, &vec![body_stmt]);
            }
            other => panic!("Expected While, got: {other:?}"),
        }
    }

    /// DoWhile where cond reads a variable incremented in body → stays DoWhile.
    #[test]
    fn dowhile_modified_cond_stays_dowhile() {
        // Condition reads register (8, 4).
        let cond_var = SsaVarnode {
            base: Varnode::reg(8, 4),
            version: 0,
        };

        // Body writes register (8, 4) — same base as the condition!
        let body_stmt = HirNode::Statement(IrInsn::with_output(
            IrOp::IntAdd,
            Varnode::reg(8, 4),
            smallvec![Varnode::reg(8, 4), Varnode::constant(1, 4)],
            0x1000,
        ));

        let mut hir = func(vec![HirNode::DoWhile {
            body: vec![body_stmt.clone()],
            cond: cond_var,
        }]);

        normalize_dowhile_to_while(&mut hir);

        match &hir.body[0] {
            HirNode::DoWhile { body, cond } => {
                assert_eq!(*cond, cond_var);
                assert_eq!(body, &vec![body_stmt]);
            }
            other => panic!("Expected DoWhile (unchanged), got: {other:?}"),
        }
    }
}
