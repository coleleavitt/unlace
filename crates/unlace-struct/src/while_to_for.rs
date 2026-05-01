//! Promote canonical `init; while (...) { ...; step; }` HIR to `for` loops.

use unlace_ir::{IrInsn, IrOp, SpaceId, Varnode};

use crate::hir::{HirFunction, HirNode};

/// Recover `for` loops from adjacent init/while/update statements.
pub fn while_to_for(func: &mut HirFunction) {
    promote_scope(&mut func.body);
}

fn promote_scope(nodes: &mut Vec<HirNode>) {
    for node in nodes.iter_mut() {
        promote_children(node);
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
        if let Some(for_node) = try_promote_standalone(node) {
            *node = for_node;
        }
    }
}

fn promote_children(node: &mut HirNode) {
    match node {
        HirNode::Block(children) => promote_scope(children),
        HirNode::If {
            then_body,
            else_body,
            ..
        } => {
            promote_scope(then_body);
            if let Some(else_body) = else_body {
                promote_scope(else_body);
            }
        }
        HirNode::While { body, .. } | HirNode::DoWhile { body, .. } | HirNode::For { body, .. } => {
            promote_scope(body);
        }
        HirNode::Switch { cases, default, .. } => {
            for (_, body, _) in cases {
                promote_scope(body);
            }
            if let Some(default) = default {
                promote_scope(default);
            }
        }
        HirNode::TryCatch {
            try_body,
            catch_body,
        } => {
            promote_scope(try_body);
            promote_scope(catch_body);
        }
        _ => {}
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

fn try_promote_standalone(node: &HirNode) -> Option<HirNode> {
    let (cond, body) = match node {
        HirNode::While { cond, body } => (*cond, body.as_slice()),
        _ => return None,
    };

    let last = body.len().checked_sub(1)?;
    let update = match &body[last] {
        HirNode::Statement(insn) => insn.clone(),
        _ => return None,
    };
    let counter = update.output?;
    if counter.space == SpaceId::Const {
        return None;
    }
    if !is_update(&update, &counter) {
        return None;
    }
    if counter != cond.base {
        return None;
    }

    let mut new_body = body.to_vec();
    new_body.pop();
    Some(HirNode::For {
        init: None,
        cond,
        update,
        body: new_body,
    })
}

fn is_update(insn: &IrInsn, counter: &Varnode) -> bool {
    matches!(insn.op, IrOp::IntAdd | IrOp::IntSub)
        && insn.inputs.iter().any(|input| input == counter)
        && insn
            .inputs
            .iter()
            .any(|input| input.space == SpaceId::Const)
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
}
