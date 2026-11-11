//! structurer: for loops.

use super::*;

/// Post-pass: convert eligible `[init; while (cond) { body; update }]` patterns
/// into [`HirNode::For`].
///
/// Recurses into nested blocks (if/else/while/for bodies). Conservative:
/// fires for canonical counted loops even when the induction variable is
/// referenced after the loop in the same scope.
pub fn recover_for_loops(nodes: &mut Vec<HirNode>) {
    for node in nodes.iter_mut() {
        recover_for_loops_in_children(node);
    }

    let defs = collect_hir_defs(nodes);
    let mut i = 0;
    while i < nodes.len() {
        if i + 1 < nodes.len()
            && let Some(replacement) = try_recover_for_at(nodes, i, &defs)
        {
            let after_i = nodes.split_off(i + 2);
            nodes.truncate(i);
            nodes.push(replacement);
            nodes.extend(after_i);
        }
        // Aggressive: while(cond) { body; step } → for(; cond; step) without init
        if let Some(replacement) = try_recover_for_no_init(&nodes[i], &defs) {
            nodes[i] = replacement;
        }
        i += 1;
    }
}

#[derive(Clone, Debug)]
pub(super) struct HirDef {
    pub(super) op: IrOp,
    pub(super) inputs: Vec<Varnode>,
}

pub(super) fn collect_hir_defs(nodes: &[HirNode]) -> BTreeMap<Varnode, HirDef> {
    let mut defs = BTreeMap::new();
    collect_hir_defs_inner(nodes, &mut defs);
    defs
}

pub(super) fn collect_hir_defs_inner(nodes: &[HirNode], defs: &mut BTreeMap<Varnode, HirDef>) {
    for node in nodes {
        match node {
            HirNode::Statement(insn) => {
                if let Some(out) = insn.output
                    && out.space != SpaceId::Const
                {
                    defs.insert(
                        out,
                        HirDef {
                            op: insn.op,
                            inputs: insn.inputs.iter().copied().collect(),
                        },
                    );
                }
            }
            HirNode::Block(children) => collect_hir_defs_inner(children, defs),
            HirNode::If {
                then_body,
                else_body,
                ..
            } => {
                collect_hir_defs_inner(then_body, defs);
                if let Some(eb) = else_body {
                    collect_hir_defs_inner(eb, defs);
                }
            }
            HirNode::While { body, .. }
            | HirNode::DoWhile { body, .. }
            | HirNode::For { body, .. } => {
                collect_hir_defs_inner(body, defs);
            }
            HirNode::Switch { cases, default, .. } => {
                for (_, body, _) in cases {
                    collect_hir_defs_inner(body, defs);
                }
                if let Some(default) = default {
                    collect_hir_defs_inner(default, defs);
                }
            }
            HirNode::TryCatch {
                try_body,
                catch_arms,
            } => {
                collect_hir_defs_inner(try_body, defs);
                for (_ty, body) in catch_arms {
                    collect_hir_defs_inner(body, defs);
                }
            }
            HirNode::TryFinally {
                try_body,
                finally_body,
            } => {
                collect_hir_defs_inner(try_body, defs);
                collect_hir_defs_inner(finally_body, defs);
            }
            HirNode::TryExcept {
                try_body,
                except_body,
                ..
            } => {
                collect_hir_defs_inner(try_body, defs);
                collect_hir_defs_inner(except_body, defs);
            }
            _ => {}
        }
    }
}

pub(super) fn recover_for_loops_in_children(node: &mut HirNode) {
    match node {
        HirNode::Block(children) => recover_for_loops(children),
        HirNode::If {
            then_body,
            else_body,
            ..
        } => {
            recover_for_loops(then_body);
            if let Some(eb) = else_body {
                recover_for_loops(eb);
            }
        }
        HirNode::While { body, .. } | HirNode::DoWhile { body, .. } => {
            recover_for_loops(body);
        }
        HirNode::For { body, .. } => recover_for_loops(body),
        HirNode::Switch { cases, default, .. } => {
            for (_case, body, _) in cases {
                recover_for_loops(body);
            }
            if let Some(def) = default {
                recover_for_loops(def);
            }
        }
        HirNode::TryCatch {
            try_body,
            catch_arms,
        } => {
            recover_for_loops(try_body);
            for (_ty, body) in catch_arms {
                recover_for_loops(body);
            }
        }
        HirNode::TryFinally {
            try_body,
            finally_body,
        } => {
            recover_for_loops(try_body);
            recover_for_loops(finally_body);
        }
        HirNode::TryExcept {
            try_body,
            except_body,
            ..
        } => {
            recover_for_loops(try_body);
            recover_for_loops(except_body);
        }
        HirNode::Commented { inner, .. } => recover_for_loops_in_children(inner),
        HirNode::GuardedIf {
            then_body,
            else_body,
            ..
        } => {
            recover_for_loops(then_body);
            recover_for_loops(else_body);
        }
        HirNode::IfCmp {
            then_body,
            else_body,
            ..
        } => {
            recover_for_loops(then_body);
            if let Some(eb) = else_body {
                recover_for_loops(eb);
            }
        }
        HirNode::Statement(_)
        | HirNode::Return(_)
        | HirNode::Goto(_)
        | HirNode::Label(_)
        | HirNode::Ternary { .. }
        | HirNode::GuardedTernary { .. }
        | HirNode::CselTernary { .. }
        | HirNode::TailCall { .. }
        | HirNode::Continue
        | HirNode::Break
        | HirNode::ObjcBlock { .. }
        | HirNode::Asm { .. } => {}
    }
}

pub(super) fn try_recover_for_at(
    nodes: &[HirNode],
    idx: usize,
    defs: &BTreeMap<Varnode, HirDef>,
) -> Option<HirNode> {
    let init_insn = match nodes.get(idx)? {
        HirNode::Statement(insn) => insn.clone(),
        _ => return None,
    };

    let counter_base = init_insn.output?;
    if counter_base.space == SpaceId::Const {
        return None;
    }

    let (cond, body) = match nodes.get(idx + 1)? {
        HirNode::While { cond, body } => (*cond, body.clone()),
        _ => return None,
    };

    if !condition_mentions_counter(cond.base, &counter_base, defs) {
        return None;
    }

    let (update_insn, body_without_update) = extract_update(&body, &counter_base)?;

    if init_writes_counter_only(&init_insn, &counter_base).not_ok() {
        return None;
    }

    Some(HirNode::For {
        init: Some(init_insn),
        cond,
        update: update_insn,
        body: body_without_update,
    })
}

pub(super) fn try_recover_for_no_init(
    node: &HirNode,
    defs: &BTreeMap<Varnode, HirDef>,
) -> Option<HirNode> {
    let (cond, body) = match node {
        HirNode::While { cond, body } => (*cond, body.clone()),
        _ => return None,
    };

    let last_idx = body
        .iter()
        .rposition(|n| matches!(n, HirNode::Statement(_)))?;
    let update_insn = match &body[last_idx] {
        HirNode::Statement(insn) => insn.clone(),
        _ => return None,
    };

    let counter = update_insn.output?;
    if counter.space == SpaceId::Const {
        return None;
    }
    if !is_counter_update_op(&update_insn, &counter) {
        return None;
    }
    // Without an init statement we need stronger evidence that the condition
    // actually involves the counter.  `condition_mentions_counter` is
    // permissive (returns true when the def is missing) which is fine when an
    // init statement anchors the counter, but too aggressive here.
    if !condition_mentions_counter_strict(cond.base, &counter, defs) {
        return None;
    }

    let mut new_body = body;
    new_body.remove(last_idx);
    Some(HirNode::For {
        init: None,
        cond,
        update: update_insn,
        body: new_body,
    })
}

/// Strict variant: returns `false` when the condition's definition is unknown.
pub(super) fn condition_mentions_counter_strict(
    cond: Varnode,
    counter: &Varnode,
    defs: &BTreeMap<Varnode, HirDef>,
) -> bool {
    if cond == *counter {
        return true;
    }
    let Some(insn) = defs.get(&cond) else {
        return false;
    };
    matches!(
        insn.op,
        IrOp::IntLess
            | IrOp::IntSless
            | IrOp::IntLessequal
            | IrOp::IntSlessequal
            | IrOp::IntEqual
            | IrOp::IntNotequal
    ) && insn.inputs.iter().any(|v| v == counter)
}

pub(super) fn condition_mentions_counter(
    cond: Varnode,
    counter: &Varnode,
    defs: &BTreeMap<Varnode, HirDef>,
) -> bool {
    if cond == *counter {
        return true;
    }
    let Some(insn) = defs.get(&cond) else {
        return true;
    };
    matches!(
        insn.op,
        IrOp::IntLess
            | IrOp::IntSless
            | IrOp::IntLessequal
            | IrOp::IntSlessequal
            | IrOp::IntEqual
            | IrOp::IntNotequal
    ) && insn.inputs.iter().any(|v| v == counter)
}

#[derive(Copy, Clone)]
pub(super) enum InitCheck {
    Ok,
    Bad,
}

impl InitCheck {
    pub(super) fn not_ok(self) -> bool {
        matches!(self, InitCheck::Bad)
    }
}

pub(super) fn init_writes_counter_only(insn: &IrInsn, counter: &Varnode) -> InitCheck {
    match insn.output {
        Some(out) if out == *counter => {}
        _ => return InitCheck::Bad,
    }
    match insn.op {
        IrOp::Copy
        | IrOp::IntAdd
        | IrOp::IntSub
        | IrOp::IntZext
        | IrOp::IntSext
        | IrOp::Cast
        | IrOp::Load => InitCheck::Ok,
        _ => InitCheck::Bad,
    }
}

pub(super) fn extract_update(
    body: &[HirNode],
    counter: &Varnode,
) -> Option<(IrInsn, Vec<HirNode>)> {
    let last_idx = body
        .iter()
        .rposition(|n| matches!(n, HirNode::Statement(_)))?;
    let update_insn = match &body[last_idx] {
        HirNode::Statement(insn) => insn.clone(),
        _ => return None,
    };

    let out = update_insn.output?;
    if out != *counter {
        return None;
    }

    if !is_counter_update_op(&update_insn, counter) {
        return None;
    }

    let mut new_body = body.to_vec();
    new_body.remove(last_idx);
    Some((update_insn, new_body))
}

pub(super) fn is_counter_update_op(insn: &IrInsn, counter: &Varnode) -> bool {
    match insn.op {
        IrOp::IntAdd | IrOp::IntSub => {
            let reads_counter = insn.inputs.iter().any(|v| v == counter);
            let has_step_const = insn.inputs.iter().any(|v| v.space == SpaceId::Const);
            reads_counter && has_step_const
        }
        _ => false,
    }
}
