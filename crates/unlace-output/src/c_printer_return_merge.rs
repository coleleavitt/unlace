//! c_printer: return merge.

use super::*;

pub(super) fn merged_assign_return_stmt_indices(
    nodes: &[HirNode],
    ctx: &PrintCtx,
) -> BTreeSet<u32> {
    if ctx.parent_returns_void {
        return BTreeSet::new();
    }
    let mut out = BTreeSet::new();
    let mut next_stmt = 0;
    collect_merged_assign_return_stmt_indices(nodes, ctx, &mut next_stmt, &mut out);
    out
}

pub(super) fn collect_merged_assign_return_stmt_indices(
    nodes: &[HirNode],
    ctx: &PrintCtx,
    next_stmt: &mut u32,
    out: &mut BTreeSet<u32>,
) {
    for (node_idx, node) in nodes.iter().enumerate() {
        match node {
            HirNode::Block(children) => {
                collect_merged_assign_return_stmt_indices(children, ctx, next_stmt, out);
            }
            HirNode::Statement(_) => {
                let stmt_idx = *next_stmt;
                if can_merge_assign_return_at(&nodes[node_idx..], stmt_idx, ctx) {
                    out.insert(stmt_idx);
                }
                *next_stmt += 1;
            }
            HirNode::If {
                then_body,
                else_body,
                ..
            } => {
                collect_merged_assign_return_stmt_indices(then_body, ctx, next_stmt, out);
                if let Some(else_body) = else_body {
                    collect_merged_assign_return_stmt_indices(else_body, ctx, next_stmt, out);
                }
            }
            HirNode::While { body, .. } | HirNode::DoWhile { body, .. } => {
                collect_merged_assign_return_stmt_indices(body, ctx, next_stmt, out);
            }
            HirNode::For { init, body, .. } => {
                if init.is_some() {
                    *next_stmt += 1;
                }
                collect_merged_assign_return_stmt_indices(body, ctx, next_stmt, out);
                *next_stmt += 1;
            }
            HirNode::Switch { cases, default, .. } => {
                for (_case, body, _) in cases {
                    collect_merged_assign_return_stmt_indices(body, ctx, next_stmt, out);
                }
                if let Some(default) = default {
                    collect_merged_assign_return_stmt_indices(default, ctx, next_stmt, out);
                }
            }
            HirNode::Ternary { select, .. } => {
                *next_stmt += select.insns().len() as u32;
            }
            HirNode::GuardedTernary { .. } => {
                *next_stmt += 2;
            }
            HirNode::CselTernary { .. } => {
                *next_stmt += 1;
            }
            HirNode::IfCmp {
                then_body,
                else_body,
                ..
            } => {
                collect_merged_assign_return_stmt_indices(then_body, ctx, next_stmt, out);
                if let Some(else_body) = else_body {
                    collect_merged_assign_return_stmt_indices(else_body, ctx, next_stmt, out);
                }
            }
            HirNode::TryCatch {
                try_body,
                catch_arms,
            } => {
                collect_merged_assign_return_stmt_indices(try_body, ctx, next_stmt, out);
                for (_ty, body) in catch_arms {
                    collect_merged_assign_return_stmt_indices(body, ctx, next_stmt, out);
                }
            }
            HirNode::TryFinally {
                try_body,
                finally_body,
            } => {
                collect_merged_assign_return_stmt_indices(try_body, ctx, next_stmt, out);
                collect_merged_assign_return_stmt_indices(finally_body, ctx, next_stmt, out);
            }
            HirNode::TryExcept {
                try_body,
                except_body,
                ..
            } => {
                collect_merged_assign_return_stmt_indices(try_body, ctx, next_stmt, out);
                collect_merged_assign_return_stmt_indices(except_body, ctx, next_stmt, out);
            }
            HirNode::Commented { inner, .. } => {
                collect_merged_assign_return_stmt_indices(
                    std::slice::from_ref(inner.as_ref()),
                    ctx,
                    next_stmt,
                    out,
                );
            }
            HirNode::GuardedIf {
                then_body,
                else_body,
                ..
            } => {
                collect_merged_assign_return_stmt_indices(then_body, ctx, next_stmt, out);
                collect_merged_assign_return_stmt_indices(else_body, ctx, next_stmt, out);
            }
            HirNode::Return(_)
            | HirNode::Goto(_)
            | HirNode::Label(_)
            | HirNode::TailCall { .. }
            | HirNode::Continue
            | HirNode::Break
            | HirNode::ObjcBlock { .. }
            | HirNode::Asm { .. } => {}
        }
    }
}

pub(super) fn merged_call_return_svs(nodes: &[HirNode], ctx: &PrintCtx) -> BTreeSet<SsaVarnode> {
    if ctx.parent_returns_void {
        return BTreeSet::new();
    }
    let mut out = BTreeSet::new();
    let mut next_stmt = 0;
    collect_merged_call_return_svs(nodes, ctx, &mut next_stmt, &mut out);
    out
}

pub(super) fn collect_merged_call_return_svs(
    nodes: &[HirNode],
    ctx: &PrintCtx,
    next_stmt: &mut u32,
    out: &mut BTreeSet<SsaVarnode>,
) {
    for (node_idx, node) in nodes.iter().enumerate() {
        match node {
            HirNode::Block(children) => {
                collect_merged_call_return_svs(children, ctx, next_stmt, out);
            }
            HirNode::Statement(_) => {
                if let Some(plan) = plan_call_return_merge(&nodes[node_idx..], *next_stmt, ctx) {
                    out.insert(plan.ret_sv);
                }
                *next_stmt += 1;
            }
            HirNode::If {
                then_body,
                else_body,
                ..
            } => {
                collect_merged_call_return_svs(then_body, ctx, next_stmt, out);
                if let Some(else_body) = else_body {
                    collect_merged_call_return_svs(else_body, ctx, next_stmt, out);
                }
            }
            HirNode::While { body, .. } | HirNode::DoWhile { body, .. } => {
                collect_merged_call_return_svs(body, ctx, next_stmt, out);
            }
            HirNode::For { init, body, .. } => {
                if init.is_some() {
                    *next_stmt += 1;
                }
                collect_merged_call_return_svs(body, ctx, next_stmt, out);
                *next_stmt += 1;
            }
            HirNode::Switch { cases, default, .. } => {
                for (_, body, _) in cases {
                    collect_merged_call_return_svs(body, ctx, next_stmt, out);
                }
                if let Some(default) = default {
                    collect_merged_call_return_svs(default, ctx, next_stmt, out);
                }
            }
            HirNode::Ternary { select, .. } => {
                *next_stmt += select.insns().len() as u32;
            }
            HirNode::GuardedTernary { .. } => {
                *next_stmt += 2;
            }
            HirNode::CselTernary { .. } => {
                *next_stmt += 1;
            }
            HirNode::IfCmp {
                then_body,
                else_body,
                ..
            } => {
                collect_merged_call_return_svs(then_body, ctx, next_stmt, out);
                if let Some(else_body) = else_body {
                    collect_merged_call_return_svs(else_body, ctx, next_stmt, out);
                }
            }
            HirNode::TryCatch {
                try_body,
                catch_arms,
            } => {
                collect_merged_call_return_svs(try_body, ctx, next_stmt, out);
                for (_, body) in catch_arms {
                    collect_merged_call_return_svs(body, ctx, next_stmt, out);
                }
            }
            HirNode::TryFinally {
                try_body,
                finally_body,
            } => {
                collect_merged_call_return_svs(try_body, ctx, next_stmt, out);
                collect_merged_call_return_svs(finally_body, ctx, next_stmt, out);
            }
            HirNode::TryExcept {
                try_body,
                except_body,
                ..
            } => {
                collect_merged_call_return_svs(try_body, ctx, next_stmt, out);
                collect_merged_call_return_svs(except_body, ctx, next_stmt, out);
            }
            HirNode::Commented { inner, .. } => {
                collect_merged_call_return_svs(
                    std::slice::from_ref(inner.as_ref()),
                    ctx,
                    next_stmt,
                    out,
                );
            }
            HirNode::GuardedIf {
                then_body,
                else_body,
                ..
            } => {
                collect_merged_call_return_svs(then_body, ctx, next_stmt, out);
                collect_merged_call_return_svs(else_body, ctx, next_stmt, out);
            }
            HirNode::Return(_)
            | HirNode::Goto(_)
            | HirNode::Label(_)
            | HirNode::TailCall { .. }
            | HirNode::Continue
            | HirNode::Break
            | HirNode::ObjcBlock { .. }
            | HirNode::Asm { .. } => {}
        }
    }
}

pub(super) fn post_dowhile_recovered_return_svs(
    nodes: &[HirNode],
    ctx: &PrintCtx,
) -> BTreeSet<SsaVarnode> {
    if ctx.parent_returns_void {
        return BTreeSet::new();
    }
    let mut out = BTreeSet::new();
    let mut next_stmt = 0;
    collect_post_dowhile_recovered_return_svs(nodes, ctx, &mut next_stmt, &mut out);
    out
}

pub(super) fn collect_post_dowhile_recovered_return_svs(
    nodes: &[HirNode],
    ctx: &PrintCtx,
    next_stmt: &mut u32,
    out: &mut BTreeSet<SsaVarnode>,
) {
    for (idx, node) in nodes.iter().enumerate() {
        match node {
            HirNode::Block(children) => {
                collect_post_dowhile_recovered_return_svs(children, ctx, next_stmt, out);
            }
            HirNode::Statement(_) => {
                *next_stmt += 1;
            }
            HirNode::If {
                then_body,
                else_body,
                ..
            } => {
                collect_post_dowhile_recovered_return_svs(then_body, ctx, next_stmt, out);
                if let Some(else_body) = else_body {
                    collect_post_dowhile_recovered_return_svs(else_body, ctx, next_stmt, out);
                }
            }
            HirNode::While { body, .. } => {
                collect_post_dowhile_recovered_return_svs(body, ctx, next_stmt, out);
            }
            HirNode::DoWhile { body, .. } => {
                let start_stmt = *next_stmt;
                collect_post_dowhile_recovered_return_svs(body, ctx, next_stmt, out);
                let end_stmt = *next_stmt;
                if let Some(HirNode::Return(Some(sv))) = nodes.get(idx + 1)
                    && can_resolve_post_dowhile_return_expr(sv, start_stmt, end_stmt, ctx)
                {
                    out.insert(*sv);
                }
            }
            HirNode::For { init, body, .. } => {
                if init.is_some() {
                    *next_stmt += 1;
                }
                collect_post_dowhile_recovered_return_svs(body, ctx, next_stmt, out);
                *next_stmt += 1;
            }
            HirNode::Switch { cases, default, .. } => {
                for (_, body, _) in cases {
                    collect_post_dowhile_recovered_return_svs(body, ctx, next_stmt, out);
                }
                if let Some(default) = default {
                    collect_post_dowhile_recovered_return_svs(default, ctx, next_stmt, out);
                }
            }
            HirNode::Ternary { select, .. } => {
                *next_stmt += select.insns().len() as u32;
            }
            HirNode::GuardedTernary { .. } => {
                *next_stmt += 2;
            }
            HirNode::CselTernary { .. } => {
                *next_stmt += 1;
            }
            HirNode::TryCatch {
                try_body,
                catch_arms,
            } => {
                collect_post_dowhile_recovered_return_svs(try_body, ctx, next_stmt, out);
                for (_, body) in catch_arms {
                    collect_post_dowhile_recovered_return_svs(body, ctx, next_stmt, out);
                }
            }
            HirNode::TryFinally {
                try_body,
                finally_body,
            } => {
                collect_post_dowhile_recovered_return_svs(try_body, ctx, next_stmt, out);
                collect_post_dowhile_recovered_return_svs(finally_body, ctx, next_stmt, out);
            }
            HirNode::TryExcept {
                try_body,
                except_body,
                ..
            } => {
                collect_post_dowhile_recovered_return_svs(try_body, ctx, next_stmt, out);
                collect_post_dowhile_recovered_return_svs(except_body, ctx, next_stmt, out);
            }
            HirNode::Commented { inner, .. } => {
                collect_post_dowhile_recovered_return_svs(
                    std::slice::from_ref(inner.as_ref()),
                    ctx,
                    next_stmt,
                    out,
                );
            }
            HirNode::GuardedIf {
                then_body,
                else_body,
                ..
            } => {
                collect_post_dowhile_recovered_return_svs(then_body, ctx, next_stmt, out);
                collect_post_dowhile_recovered_return_svs(else_body, ctx, next_stmt, out);
            }
            HirNode::IfCmp {
                then_body,
                else_body,
                ..
            } => {
                collect_post_dowhile_recovered_return_svs(then_body, ctx, next_stmt, out);
                if let Some(else_body) = else_body {
                    collect_post_dowhile_recovered_return_svs(else_body, ctx, next_stmt, out);
                }
            }
            HirNode::Return(_)
            | HirNode::Goto(_)
            | HirNode::Label(_)
            | HirNode::TailCall { .. }
            | HirNode::Continue
            | HirNode::Break
            | HirNode::ObjcBlock { .. }
            | HirNode::Asm { .. } => {}
        }
    }
}

/// Detect `Statement(insn) ; Return(Some(sv))` where the statement defines
/// `sv` via the return register (RAX, offset 0) and fold into `return <expr>;`.
///
/// Only fires when the return variable has no other readers (use_count == 0
/// from the perspective of non-return uses), so that the merged form doesn't
/// lose a named variable that other code references.
pub(super) fn try_merge_assign_return(nodes: &[HirNode], ctx: &mut PrintCtx) -> Option<String> {
    let _span = cprinter_detail_phase("cprinter.emit.merge-assign-return");
    if ctx.parent_returns_void {
        return None;
    }
    let stmt_idx = ctx.emit_stmt;
    if !can_merge_assign_return_at(nodes, stmt_idx, ctx) {
        return None;
    }
    let insn = match &nodes[0] {
        HirNode::Statement(insn) => insn,
        _ => return None,
    };
    Some(emit_expr(insn, stmt_idx, ctx))
}

pub(super) struct CallReturnMergePlan {
    pub(super) node_count: usize,
    pub(super) stmt_count: u32,
    pub(super) ret_sv: SsaVarnode,
}

pub(super) struct CallReturnMergeEmission {
    pub(super) expr: String,
    pub(super) node_count: usize,
    pub(super) stmt_count: u32,
}

pub(super) fn try_merge_call_return(
    nodes: &[HirNode],
    ctx: &mut PrintCtx,
) -> Option<CallReturnMergeEmission> {
    let _span = cprinter_detail_phase("cprinter.emit.merge-call-return");
    let plan = plan_call_return_merge(nodes, ctx.emit_stmt, ctx)?;
    let insn = call_insn_for_merge(&nodes[0])?;
    Some(CallReturnMergeEmission {
        expr: emit_expr(insn, ctx.emit_stmt, ctx),
        node_count: plan.node_count,
        stmt_count: plan.stmt_count,
    })
}

pub(super) fn plan_call_return_merge(
    nodes: &[HirNode],
    first_stmt_idx: u32,
    ctx: &PrintCtx,
) -> Option<CallReturnMergePlan> {
    if ctx.parent_returns_void || nodes.len() < 2 {
        return None;
    }
    let insn = call_insn_for_merge(&nodes[0])?;
    if insn.output.is_some() {
        return None;
    }

    let mut node_count = 1usize;
    let mut stmt_count = 1u32;
    let mut next_stmt_idx = first_stmt_idx + 1;
    for node in &nodes[1..] {
        match node {
            HirNode::Statement(insn)
                if statement_is_transparent_for_call_return(insn, next_stmt_idx, ctx) =>
            {
                node_count += 1;
                stmt_count += 1;
                next_stmt_idx += 1;
            }
            node if let Some(ret_sv) = return_register_sv_from_node(node) => {
                node_count += 1;
                return Some(CallReturnMergePlan {
                    node_count,
                    stmt_count,
                    ret_sv,
                });
            }
            _ => return None,
        }
    }
    None
}

pub(super) fn call_insn_for_merge(node: &HirNode) -> Option<&IrInsn> {
    match node {
        HirNode::Statement(insn) if matches!(insn.op, IrOp::Call | IrOp::Callind) => Some(insn),
        HirNode::Commented { inner, .. } => call_insn_for_merge(inner),
        _ => None,
    }
}

pub(super) fn return_register_sv_from_node(node: &HirNode) -> Option<SsaVarnode> {
    match node {
        HirNode::Return(Some(ret_sv)) if is_return_register(&ret_sv.base) => Some(*ret_sv),
        HirNode::Block(children) if children.len() == 1 => {
            return_register_sv_from_node(&children[0])
        }
        HirNode::Commented { inner, .. } => return_register_sv_from_node(inner),
        _ => None,
    }
}

pub(super) fn statement_is_transparent_for_call_return(
    insn: &IrInsn,
    stmt_idx: u32,
    ctx: &PrintCtx,
) -> bool {
    if is_csel_callother(insn) || matches!(insn.op, IrOp::Call | IrOp::Callind) {
        return false;
    }
    if ctx
        .stmt_outputs
        .get(&stmt_idx)
        .copied()
        .flatten()
        .is_some_and(|sv| is_return_register(&sv.base))
    {
        return false;
    }
    if ctx.foldable_stmts.contains(&stmt_idx)
        || is_dead_zero_init(insn, stmt_idx, ctx)
        || is_dead_suppressible_store(insn, stmt_idx, ctx)
        || is_dead_suppressed_stack_load(insn, stmt_idx, ctx)
    {
        return true;
    }
    if ctx.source_map.contains_key(&insn.addr) {
        return false;
    }
    if let Some(Some(sv)) = ctx.stmt_outputs.get(&stmt_idx).copied() {
        return is_control_only_condition_assignment(stmt_idx, &sv, insn, ctx);
    }
    false
}

/// Recognise a dead, no-output *scalar value* op whose result was folded
/// into a consumer (or whose consumer was DCE'd — e.g. a suppressed
/// CSEL-family intrinsic) and which therefore has no observable effect.
///
/// "No-output" here means the emit-time `stmt_outputs` slot for this
/// statement is absent: the printer's liveness analysis stripped the
/// destination because nothing reads it. Restricted to the common
/// integer-arithmetic / comparison / copy / boolean opcodes the structurer
/// routinely emits and inlines. Exotic or bit-manipulation ops (`Insert`,
/// `Extract`, `Piece`, …) are deliberately excluded so they still render as
/// `__unlace_<op>(args)` helper calls, preserving operand visibility (the
/// Batch-19 contract). All listed ops are side-effect-free, so dropping a
/// dead no-output instance is sound.
pub(super) fn is_dead_no_output_scalar_op(insn: &IrInsn, stmt_idx: u32, ctx: &PrintCtx) -> bool {
    if ctx.stmt_outputs.get(&stmt_idx).copied().flatten().is_some() {
        return false;
    }
    matches!(
        insn.op,
        IrOp::Copy
            | IrOp::IntAdd
            | IrOp::IntSub
            | IrOp::IntMult
            | IrOp::IntAnd
            | IrOp::IntOr
            | IrOp::IntXor
            | IrOp::IntNegate
            | IrOp::Int2comp
            | IrOp::IntLeft
            | IrOp::IntRight
            | IrOp::IntSright
            | IrOp::IntEqual
            | IrOp::IntNotequal
            | IrOp::IntLess
            | IrOp::IntLessequal
            | IrOp::IntSless
            | IrOp::IntSlessequal
            | IrOp::BoolAnd
            | IrOp::BoolOr
            | IrOp::BoolXor
            | IrOp::BoolNegate
    )
}

/// Recognise a pure AArch64 conditional-select callother (CSEL/CSINC/
/// CSINV/CSNEG, tags 0x330..=0x333) whose result register is never read.
///
/// These intrinsics have no memory or control side effects — they compute
/// a value from a predicate plus two source registers. When the SSA output
/// has zero uses (e.g. a dead `Wd`/`Xd` write), the whole statement is dead
/// and should be dropped, mirroring IDA's DCE. Suppressing it also lets
/// [`propagate_dead_chains`] retire the predicate comparison that fed it,
/// preventing orphan `__unlace_int_*` statement calls in the output.
pub(super) fn is_dead_suppressible_csel(insn: &IrInsn, stmt_idx: u32, ctx: &PrintCtx) -> bool {
    if !is_csel_callother(insn) {
        return false;
    }
    if ctx.foldable_stmts.contains(&stmt_idx) {
        return false;
    }
    let Some(Some(out_sv)) = ctx.stmt_outputs.get(&stmt_idx).copied() else {
        return false;
    };
    if ctx.byref_bases.contains(&out_sv.base) || ctx.cond_uses.contains(&out_sv) {
        return false;
    }
    ctx.sv_use_counts.get(&out_sv).copied().unwrap_or(0) == 0
}

pub(super) fn is_dead_suppressed_stack_load(insn: &IrInsn, stmt_idx: u32, ctx: &PrintCtx) -> bool {
    if is_return_address_stack_load_artifact(insn, stmt_idx, ctx) {
        return true;
    }
    if insn.op != IrOp::Load || insn.inputs.len() < 2 {
        return false;
    }
    let Some(Some(out_sv)) = ctx.stmt_outputs.get(&stmt_idx).copied() else {
        return false;
    };
    ctx.sv_use_counts.get(&out_sv).copied().unwrap_or(0) == 0
        && is_suppressible_storage(&out_sv.base, ctx)
}

pub(super) fn is_return_address_stack_load_artifact(
    insn: &IrInsn,
    stmt_idx: u32,
    ctx: &PrintCtx,
) -> bool {
    if insn.op != IrOp::Load || insn.inputs.len() < 2 {
        return false;
    }
    let addr_idx = if insn.inputs.len() >= 2 { 1 } else { 0 };
    resolve_stack_offset_for_addr(&insn.inputs[addr_idx], Some(addr_idx), stmt_idx, ctx, 0)
        .is_some_and(|offset| offset == 0 && !ctx.stack_frame_slots.contains_key(&offset))
}

pub(super) fn is_return_register(vn: &Varnode) -> bool {
    vn.space == SpaceId::Register && vn.offset == 0
}

pub(super) fn nonvoid_or_void_return_text(ctx: &PrintCtx) -> String {
    if ctx.parent_returns_void {
        "return;".to_string()
    } else {
        "return 0;".to_string()
    }
}

pub(super) fn can_merge_assign_return_at(nodes: &[HirNode], stmt_idx: u32, ctx: &PrintCtx) -> bool {
    if nodes.len() < 2 {
        return false;
    }
    let insn = match &nodes[0] {
        HirNode::Statement(insn) => insn,
        _ => return false,
    };

    match &nodes[1] {
        HirNode::Return(Some(ret_sv)) => {
            if ret_sv.base.space != SpaceId::Register || ret_sv.base.offset != 0 {
                return false;
            }
            let Some(output_sv) = ctx.stmt_outputs.get(&stmt_idx).copied().flatten() else {
                return false;
            };
            if output_sv != *ret_sv {
                return false;
            }
            if ctx.foldable_stmts.contains(&stmt_idx) {
                return false;
            }
            if is_dead_zero_init(insn, stmt_idx, ctx) {
                return false;
            }
            if ctx.commented_stmts.contains(&stmt_idx) || ctx.line_comments.contains_key(&insn.addr)
            {
                return false;
            }
            // Don't drop a hoisted variable's declaration into a `return`
            // shortcut — the variable is referenced elsewhere too.
            if let Some(plan) = ctx.hoist_decl_plan.get(&output_sv.base)
                && plan.stmt_idx == stmt_idx
            {
                return false;
            }
            let total_uses = ctx.sv_use_counts.get(&output_sv).copied().unwrap_or(0);
            total_uses <= 1
        }
        HirNode::Return(None) => {
            let Some(out_vn) = insn.output else {
                return false;
            };
            if out_vn.space != SpaceId::Register || out_vn.offset != 0 {
                return false;
            }
            let Some(output_sv) = ctx.stmt_outputs.get(&stmt_idx).copied().flatten() else {
                return false;
            };
            if ctx.foldable_stmts.contains(&stmt_idx) {
                return false;
            }
            if is_dead_zero_init(insn, stmt_idx, ctx) {
                return false;
            }
            if ctx.commented_stmts.contains(&stmt_idx) || ctx.line_comments.contains_key(&insn.addr)
            {
                return false;
            }
            if let Some(plan) = ctx.hoist_decl_plan.get(&output_sv.base)
                && plan.stmt_idx == stmt_idx
            {
                return false;
            }
            let total_uses = ctx.sv_use_counts.get(&output_sv).copied().unwrap_or(0);
            total_uses == 0
        }
        _ => false,
    }
}
