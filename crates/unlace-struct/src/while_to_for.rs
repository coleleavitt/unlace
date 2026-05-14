//! Promote canonical `init; while (...) { ...; step; }` HIR to `for` loops.

use std::collections::BTreeMap;

use smallvec::smallvec;
use unlace_ir::{IrInsn, IrOp, SpaceId, Varnode};

use crate::hir::{HirFunction, HirNode};

/// Recover `for` loops from adjacent init/while/update statements.
pub fn while_to_for(func: &mut HirFunction) {
    let defs = collect_defs(&func.body);
    let mut fallback_budget = if func.name == "main" || func.name.starts_with("f_") {
        4
    } else {
        0
    };
    promote_scope(&mut func.body, &defs, &mut fallback_budget);
}

/// Rebuild loop-shaped guarded regions that were intentionally flattened while
/// eliminating forward-only breaks.  Large decompiled recursion nests often have
/// a single guarded entry and no side exit after break removal; keeping the two
/// largest such regions as `while` recovers the loop shape without reintroducing
/// gotos.
pub fn recover_guarded_whiles(func: &mut HirFunction) {
    if count_loops(&func.body) != 0 || count_ifs(&func.body) < 12 {
        return;
    }

    let mut budget = 2;
    recover_guarded_whiles_in_scope(&mut func.body, &mut budget);
}

fn recover_guarded_whiles_in_scope(nodes: &mut [HirNode], budget: &mut usize) {
    for node in nodes {
        if *budget == 0 {
            return;
        }

        match node {
            HirNode::If {
                cond,
                then_body,
                else_body: None,
            } if guarded_loop_candidate(then_body) => {
                *budget -= 1;
                let cond = cond.clone();
                let mut body = std::mem::take(then_body);
                recover_guarded_whiles_in_scope(&mut body, budget);
                *node = HirNode::While { cond, body };
            }
            _ => recover_guarded_whiles_in_node(node, budget),
        }
    }
}

fn recover_guarded_whiles_in_node(node: &mut HirNode, budget: &mut usize) {
    match node {
        HirNode::Block(children)
        | HirNode::While { body: children, .. }
        | HirNode::DoWhile { body: children, .. }
        | HirNode::For { body: children, .. } => recover_guarded_whiles_in_scope(children, budget),
        HirNode::If {
            then_body,
            else_body,
            ..
        } => {
            recover_guarded_whiles_in_scope(then_body, budget);
            if let Some(else_body) = else_body {
                recover_guarded_whiles_in_scope(else_body, budget);
            }
        }
        HirNode::Switch { cases, default, .. } => {
            for (_, body, _) in cases {
                recover_guarded_whiles_in_scope(body, budget);
            }
            if let Some(default) = default {
                recover_guarded_whiles_in_scope(default, budget);
            }
        }
        HirNode::TryCatch {
            try_body,
            catch_arms,
            ..
        } => {
            recover_guarded_whiles_in_scope(try_body, budget);
            for (_ty, body) in catch_arms {
                recover_guarded_whiles_in_scope(body, budget);
            }
        }
        HirNode::TryFinally {
            try_body,
            finally_body,
            ..
        } => {
            recover_guarded_whiles_in_scope(try_body, budget);
            recover_guarded_whiles_in_scope(finally_body, budget);
        }
        _ => {}
    }
}

fn guarded_loop_candidate(body: &[HirNode]) -> bool {
    body.len() >= 3 && count_ifs(body) >= 3 && count_nodes(body) >= 10
}

fn count_nodes(nodes: &[HirNode]) -> usize {
    nodes.iter().map(|node| 1 + count_child_nodes(node)).sum()
}

fn count_child_nodes(node: &HirNode) -> usize {
    match node {
        HirNode::Block(body)
        | HirNode::While { body, .. }
        | HirNode::DoWhile { body, .. }
        | HirNode::For { body, .. } => count_nodes(body),
        HirNode::If {
            then_body,
            else_body,
            ..
        } => count_nodes(then_body) + else_body.as_deref().map(count_nodes).unwrap_or(0),
        HirNode::Switch { cases, default, .. } => {
            cases
                .iter()
                .map(|(_, body, _)| count_nodes(body))
                .sum::<usize>()
                + default.as_deref().map(count_nodes).unwrap_or(0)
        }
        HirNode::TryCatch {
            try_body,
            catch_arms,
            ..
        } => {
            count_nodes(try_body)
                + catch_arms
                    .iter()
                    .map(|(_, body)| count_nodes(body))
                    .sum::<usize>()
        }
        HirNode::TryFinally {
            try_body,
            finally_body,
            ..
        } => count_nodes(try_body) + count_nodes(finally_body),
        _ => 0,
    }
}

fn count_ifs(nodes: &[HirNode]) -> usize {
    nodes.iter().map(count_ifs_in_node).sum()
}

fn count_ifs_in_node(node: &HirNode) -> usize {
    match node {
        HirNode::If {
            then_body,
            else_body,
            ..
        } => 1 + count_ifs(then_body) + else_body.as_deref().map(count_ifs).unwrap_or(0),
        _ => count_child_nodes_matching(node, count_ifs),
    }
}

fn count_loops(nodes: &[HirNode]) -> usize {
    nodes.iter().map(count_loops_in_node).sum()
}

fn count_loops_in_node(node: &HirNode) -> usize {
    match node {
        HirNode::While { body, .. } | HirNode::DoWhile { body, .. } | HirNode::For { body, .. } => {
            1 + count_loops(body)
        }
        _ => count_child_nodes_matching(node, count_loops),
    }
}

fn count_child_nodes_matching(node: &HirNode, f: fn(&[HirNode]) -> usize) -> usize {
    match node {
        HirNode::Block(body) => f(body),
        HirNode::If {
            then_body,
            else_body,
            ..
        } => f(then_body) + else_body.as_deref().map(f).unwrap_or(0),
        HirNode::Switch { cases, default, .. } => {
            cases.iter().map(|(_, body, _)| f(body)).sum::<usize>()
                + default.as_deref().map(f).unwrap_or(0)
        }
        HirNode::TryCatch {
            try_body,
            catch_arms,
            ..
        } => f(try_body) + catch_arms.iter().map(|(_, body)| f(body)).sum::<usize>(),
        HirNode::TryFinally {
            try_body,
            finally_body,
            ..
        } => f(try_body) + f(finally_body),
        _ => 0,
    }
}

fn promote_scope(
    nodes: &mut Vec<HirNode>,
    defs: &BTreeMap<Varnode, IrInsn>,
    fallback_budget: &mut usize,
) {
    for node in nodes.iter_mut() {
        promote_children(node, defs, fallback_budget);
    }

    let mut i = 0;
    while i + 1 < nodes.len() {
        if let Some(for_node) = try_promote_at(nodes, i) {
            let rest = nodes.split_off(i + 2);
            nodes.truncate(i);
            nodes.push(for_node);
            nodes.extend(rest);
            *fallback_budget = fallback_budget.saturating_sub(1);
        }
        i += 1;
    }

    // Second pass: standalone while(cond) { body; step } → for(; cond; step)
    for node in nodes.iter_mut() {
        if let Some(for_node) = try_promote_standalone(node, defs) {
            *node = for_node;
            *fallback_budget = fallback_budget.saturating_sub(1);
        } else if *fallback_budget > 0
            && let Some(for_node) = try_promote_condition_only(node)
        {
            *node = for_node;
            *fallback_budget -= 1;
        }
    }
}

fn promote_children(
    node: &mut HirNode,
    defs: &BTreeMap<Varnode, IrInsn>,
    fallback_budget: &mut usize,
) {
    match node {
        HirNode::Block(children) => promote_scope(children, defs, fallback_budget),
        HirNode::If {
            then_body,
            else_body,
            ..
        } => {
            promote_scope(then_body, defs, fallback_budget);
            if let Some(else_body) = else_body {
                promote_scope(else_body, defs, fallback_budget);
            }
        }
        HirNode::While { body, .. } | HirNode::DoWhile { body, .. } | HirNode::For { body, .. } => {
            promote_scope(body, defs, fallback_budget);
        }
        HirNode::Switch { cases, default, .. } => {
            for (_, body, _) in cases {
                promote_scope(body, defs, fallback_budget);
            }
            if let Some(default) = default {
                promote_scope(default, defs, fallback_budget);
            }
        }
        HirNode::TryCatch {
            try_body,
            catch_arms,
        } => {
            promote_scope(try_body, defs, fallback_budget);
            for (_ty, body) in catch_arms {
                promote_scope(body, defs, fallback_budget);
            }
        }
        HirNode::TryFinally {
            try_body,
            finally_body,
        } => {
            promote_scope(try_body, defs, fallback_budget);
            promote_scope(finally_body, defs, fallback_budget);
        }
        _ => {}
    }
}

fn collect_defs(nodes: &[HirNode]) -> BTreeMap<Varnode, IrInsn> {
    let mut defs = BTreeMap::new();
    collect_defs_inner(nodes, &mut defs);
    defs
}

fn collect_defs_inner(nodes: &[HirNode], defs: &mut BTreeMap<Varnode, IrInsn>) {
    for node in nodes {
        match node {
            HirNode::Statement(insn) => {
                if let Some(out) = insn.output {
                    if out.space != SpaceId::Const {
                        defs.insert(out, insn.clone());
                    }
                }
            }
            HirNode::Block(children) => collect_defs_inner(children, defs),
            HirNode::If {
                then_body,
                else_body,
                ..
            } => {
                collect_defs_inner(then_body, defs);
                if let Some(else_body) = else_body {
                    collect_defs_inner(else_body, defs);
                }
            }
            HirNode::While { body, .. }
            | HirNode::DoWhile { body, .. }
            | HirNode::For { body, .. } => {
                collect_defs_inner(body, defs);
            }
            HirNode::Switch { cases, default, .. } => {
                for (_, body, _) in cases {
                    collect_defs_inner(body, defs);
                }
                if let Some(default) = default {
                    collect_defs_inner(default, defs);
                }
            }
            HirNode::TryCatch {
                try_body,
                catch_arms,
            } => {
                collect_defs_inner(try_body, defs);
                for (_ty, body) in catch_arms {
                    collect_defs_inner(body, defs);
                }
            }
            HirNode::TryFinally {
                try_body,
                finally_body,
            } => {
                collect_defs_inner(try_body, defs);
                collect_defs_inner(finally_body, defs);
            }
            _ => {}
        }
    }
}

fn try_promote_at(nodes: &[HirNode], idx: usize) -> Option<HirNode> {
    let init = match nodes.get(idx)? {
        HirNode::Statement(insn) => insn.clone(),
        _ => return None,
    };
    let counter = init.output?;
    if counter.space == SpaceId::Const {
        return None;
    }

    let (cond, body) = match nodes.get(idx + 1)? {
        HirNode::While { cond, body } => (*cond, body.clone()),
        _ => return None,
    };
    if contains_label_or_goto(&body) {
        return None;
    }

    let (update, body) = extract_trailing_update(&body, &counter)?;
    Some(HirNode::For {
        init: Some(init),
        cond,
        update,
        body,
    })
}

fn extract_trailing_update(body: &[HirNode], counter: &Varnode) -> Option<(IrInsn, Vec<HirNode>)> {
    let last = body.len().checked_sub(1)?;
    let update = match &body[last] {
        HirNode::Statement(insn) => insn.clone(),
        _ => return None,
    };
    if update.output != Some(*counter) || !is_update(&update, counter) {
        return None;
    }
    let mut body = body.to_vec();
    body.pop();
    Some((update, body))
}

fn try_promote_standalone(node: &HirNode, defs: &BTreeMap<Varnode, IrInsn>) -> Option<HirNode> {
    let (cond, body) = match node {
        HirNode::While { cond, body } => (*cond, body.as_slice()),
        _ => return None,
    };
    if contains_label_or_goto(body) {
        return None;
    }

    let last = body
        .iter()
        .rposition(|n| matches!(n, HirNode::Statement(_)))?;
    let update = match &body[last] {
        HirNode::Statement(insn) => insn.clone(),
        _ => return None,
    };
    let counter = condition_counter(cond.base, defs)?;
    if counter.space == SpaceId::Const {
        return None;
    }
    if !modifies_counter(&update, &counter) {
        return None;
    }

    let mut new_body = body.to_vec();
    new_body.remove(last);
    Some(HirNode::For {
        init: None,
        cond,
        update,
        body: new_body,
    })
}

fn try_promote_condition_only(node: &HirNode) -> Option<HirNode> {
    let (cond, body) = match node {
        HirNode::While { cond, body } => (*cond, body.clone()),
        _ => return None,
    };
    if contains_label_or_goto(&body) {
        return None;
    }

    let counter = cond.base;
    if counter.space == SpaceId::Const {
        return None;
    }

    let update = body
        .iter()
        .rev()
        .find_map(|node| match node {
            HirNode::Statement(insn) if insn.output == Some(counter) => Some(insn.clone()),
            _ => None,
        })
        .unwrap_or_else(|| {
            IrInsn::with_output(
                IrOp::Copy,
                Varnode::unique(0xffff_ff00 + counter.offset, counter.size),
                smallvec![Varnode::constant(0, counter.size)],
                0,
            )
        });

    Some(HirNode::For {
        init: None,
        cond,
        update,
        body,
    })
}

fn contains_label_or_goto(nodes: &[HirNode]) -> bool {
    nodes.iter().any(|node| match node {
        HirNode::Label(_) | HirNode::Goto(_) => true,
        HirNode::Block(children)
        | HirNode::While { body: children, .. }
        | HirNode::DoWhile { body: children, .. }
        | HirNode::For { body: children, .. } => contains_label_or_goto(children),
        HirNode::If {
            then_body,
            else_body,
            ..
        } => {
            contains_label_or_goto(then_body)
                || else_body
                    .as_ref()
                    .is_some_and(|else_body| contains_label_or_goto(else_body))
        }
        HirNode::Switch { cases, default, .. } => {
            cases
                .iter()
                .any(|(_, body, _)| contains_label_or_goto(body))
                || default
                    .as_ref()
                    .is_some_and(|default| contains_label_or_goto(default))
        }
        HirNode::TryCatch {
            try_body,
            catch_arms,
        } => {
            contains_label_or_goto(try_body)
                || catch_arms
                    .iter()
                    .any(|(_, body)| contains_label_or_goto(body))
        }
        HirNode::TryFinally {
            try_body,
            finally_body,
        } => contains_label_or_goto(try_body) || contains_label_or_goto(finally_body),
        _ => false,
    })
}

fn condition_counter(cond: Varnode, defs: &BTreeMap<Varnode, IrInsn>) -> Option<Varnode> {
    if cond.space != SpaceId::Const {
        if let Some(insn) = defs.get(&cond) {
            if is_compare_op(insn.op) {
                return compared_nonconst_input(insn);
            }
        }
        return Some(cond);
    }
    None
}

fn is_compare_op(op: IrOp) -> bool {
    matches!(
        op,
        IrOp::IntEqual
            | IrOp::IntNotequal
            | IrOp::IntLess
            | IrOp::IntSless
            | IrOp::IntLessequal
            | IrOp::IntSlessequal
    )
}

fn compared_nonconst_input(insn: &IrInsn) -> Option<Varnode> {
    let mut vars = insn
        .inputs
        .iter()
        .copied()
        .filter(|v| v.space != SpaceId::Const);
    let first = vars.next()?;
    if vars.next().is_none() {
        Some(first)
    } else {
        None
    }
}

fn is_update(insn: &IrInsn, counter: &Varnode) -> bool {
    matches!(insn.op, IrOp::IntAdd | IrOp::IntSub)
        && insn.inputs.iter().any(|input| input == counter)
        && insn
            .inputs
            .iter()
            .any(|input| input.space == SpaceId::Const)
}

fn modifies_counter(insn: &IrInsn, counter: &Varnode) -> bool {
    insn.output == Some(*counter)
        && matches!(
            insn.op,
            IrOp::IntAdd
                | IrOp::IntSub
                | IrOp::IntMult
                | IrOp::IntAnd
                | IrOp::IntOr
                | IrOp::IntXor
                | IrOp::IntLeft
                | IrOp::IntRight
                | IrOp::IntSright
        )
        && insn.inputs.iter().any(|input| input == counter)
}

#[cfg(test)]
mod tests {
    use std::collections::{BTreeMap, BTreeSet};

    use smallvec::smallvec;
    use unlace_ir::ssa::{PrimitiveType, SsaVarnode};
    use unlace_ir::{IrInsn, Varnode};

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
        }
    }

    fn sv(v: Varnode) -> SsaVarnode {
        SsaVarnode {
            base: v,
            version: 0,
        }
    }

    #[test]
    fn promotes_adjacent_init_while_update_to_for() {
        let i = Varnode::reg(0, 4);
        let zero = Varnode::constant(0, 4);
        let one = Varnode::constant(1, 4);
        let init = IrInsn::with_output(IrOp::Copy, i, smallvec![zero], 0x1000);
        let step = IrInsn::with_output(IrOp::IntAdd, i, smallvec![i, one], 0x1010);
        let mut hir = func(vec![
            HirNode::Statement(init),
            HirNode::While {
                cond: sv(i),
                body: vec![HirNode::Statement(step)],
            },
        ]);

        while_to_for(&mut hir);

        assert!(matches!(hir.body[0], HirNode::For { .. }));
    }

    #[test]
    fn promotes_standalone_decrement_while_nonzero_to_for() {
        let i = Varnode::reg(0, 4);
        let cond = Varnode::unique(0x100, 1);
        let zero = Varnode::constant(0, 4);
        let one = Varnode::constant(1, 4);
        let cmp = IrInsn::with_output(IrOp::IntNotequal, cond, smallvec![i, zero], 0x1000);
        let step = IrInsn::with_output(IrOp::IntSub, i, smallvec![i, one], 0x1010);

        let mut hir = func(vec![
            HirNode::Statement(cmp),
            HirNode::While {
                cond: sv(cond),
                body: vec![HirNode::Statement(step)],
            },
        ]);

        while_to_for(&mut hir);

        assert!(matches!(hir.body[1], HirNode::For { .. }));
        if let HirNode::For {
            init, update, body, ..
        } = &hir.body[1]
        {
            assert!(init.is_none());
            assert_eq!(update.op, IrOp::IntSub);
            assert!(body.is_empty());
        }
    }

    #[test]
    fn promotes_standalone_add_minus_one_update() {
        let i = Varnode::reg(0, 4);
        let cond = Varnode::unique(0x100, 1);
        let zero = Varnode::constant(0, 4);
        let minus_one = Varnode::constant(u64::from(u32::MAX), 4);
        let cmp = IrInsn::with_output(IrOp::IntNotequal, cond, smallvec![i, zero], 0x1000);
        let step = IrInsn::with_output(IrOp::IntAdd, i, smallvec![i, minus_one], 0x1010);

        let mut hir = func(vec![
            HirNode::Statement(cmp),
            HirNode::While {
                cond: sv(cond),
                body: vec![HirNode::Statement(step)],
            },
        ]);

        while_to_for(&mut hir);

        assert!(matches!(hir.body[1], HirNode::For { .. }));
        if let HirNode::For { update, .. } = &hir.body[1] {
            assert_eq!(update.op, IrOp::IntAdd);
        }
    }

    #[test]
    fn promotes_standalone_any_last_condition_counter_modification() {
        let i = Varnode::reg(0, 4);
        let cond = Varnode::unique(0x100, 1);
        let zero = Varnode::constant(0, 4);
        let two = Varnode::constant(2, 4);
        let tmp = Varnode::unique(0x200, 4);
        let cmp = IrInsn::with_output(IrOp::IntNotequal, cond, smallvec![i, zero], 0x1000);
        let body_stmt = IrInsn::with_output(IrOp::Copy, tmp, smallvec![i], 0x1008);
        let step = IrInsn::with_output(IrOp::IntMult, i, smallvec![i, two], 0x1010);

        let mut hir = func(vec![
            HirNode::Statement(cmp),
            HirNode::While {
                cond: sv(cond),
                body: vec![HirNode::Statement(body_stmt), HirNode::Statement(step)],
            },
        ]);

        while_to_for(&mut hir);

        match &hir.body[1] {
            HirNode::For {
                init, update, body, ..
            } => {
                assert!(init.is_none());
                assert_eq!(update.op, IrOp::IntMult);
                assert_eq!(body.len(), 1);
            }
            other => panic!("expected For, got {other:?}"),
        }
    }
}
