//! Promote canonical `init; while (...) { ...; step; }` HIR to `for` loops.

use std::collections::BTreeMap;

use unlace_ir::{IrInsn, IrOp, SpaceId, Varnode};

use crate::hir::{HirFunction, HirNode};

/// Recover `for` loops from adjacent init/while/update statements.
pub fn while_to_for(func: &mut HirFunction) {
    let defs = collect_defs(&func.body);
    promote_scope(&mut func.body, &defs);
}

fn promote_scope(nodes: &mut Vec<HirNode>, defs: &BTreeMap<Varnode, IrInsn>) {
    for node in nodes.iter_mut() {
        promote_children(node, defs);
    }

    let mut i = 0;
    while i + 1 < nodes.len() {
        if let Some(for_node) = try_promote_at(nodes, i) {
            let rest = nodes.split_off(i + 2);
            nodes.truncate(i);
            nodes.push(for_node);
            nodes.extend(rest);
        }
        i += 1;
    }

    // Second pass: standalone while(cond) { body; step } → for(; cond; step)
    for node in nodes.iter_mut() {
        if let Some(for_node) = try_promote_standalone(node, defs) {
            *node = for_node;
        }
    }
}

fn promote_children(node: &mut HirNode, defs: &BTreeMap<Varnode, IrInsn>) {
    match node {
        HirNode::Block(children) => promote_scope(children, defs),
        HirNode::If {
            then_body,
            else_body,
            ..
        } => {
            promote_scope(then_body, defs);
            if let Some(else_body) = else_body {
                promote_scope(else_body, defs);
            }
        }
        HirNode::While { body, .. } | HirNode::DoWhile { body, .. } | HirNode::For { body, .. } => {
            promote_scope(body, defs);
        }
        HirNode::Switch { cases, default, .. } => {
            for (_, body, _) in cases {
                promote_scope(body, defs);
            }
            if let Some(default) = default {
                promote_scope(default, defs);
            }
        }
        HirNode::TryCatch {
            try_body,
            catch_body,
        } => {
            promote_scope(try_body, defs);
            promote_scope(catch_body, defs);
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
            HirNode::While { body, .. } | HirNode::DoWhile { body, .. } | HirNode::For { body, .. } => {
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
                catch_body,
            } => {
                collect_defs_inner(try_body, defs);
                collect_defs_inner(catch_body, defs);
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

    let last = body.iter().rposition(|n| matches!(n, HirNode::Statement(_)))?;
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
    let mut vars = insn.inputs.iter().copied().filter(|v| v.space != SpaceId::Const);
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
            noreturn: false,
            composite_var_types: BTreeMap::new(),
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
        if let HirNode::For { init, update, body, .. } = &hir.body[1] {
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
            HirNode::For { init, update, body, .. } => {
                assert!(init.is_none());
                assert_eq!(update.op, IrOp::IntMult);
                assert_eq!(body.len(), 1);
            }
            other => panic!("expected For, got {other:?}"),
        }
    }
}
