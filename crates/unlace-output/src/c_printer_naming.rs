//! c_printer: naming.

use super::*;

/// Detect simple counter loops and rename their counters to `i`/`j`/`k`.
///
/// A `For { init, update, .. }` is recognized as a counter loop when:
/// 1. `init.op == Copy` with a single constant input,
/// 2. `update.op == IntAdd | IntSub` of the counter and a constant,
/// 3. `init.output == update.output` (both refer to the same Varnode).
///
/// The counter Varnode is mapped to a depth-indexed name in
/// `ctx.name_overrides` (`i` at the outermost loop, `j` one level in,
/// `k` two levels in, then `l`/`m`/`n`).
pub(super) fn compute_loop_counter_names(nodes: &[HirNode], depth: usize, ctx: &mut PrintCtx) {
    fn loop_counter_name(depth: usize) -> &'static str {
        match depth {
            0 => "i",
            1 => "j",
            2 => "k",
            3 => "l",
            4 => "m",
            _ => "n",
        }
    }

    fn detect(init: &IrInsn, update: &IrInsn) -> Option<Varnode> {
        let init_out = init.output?;
        let update_out = update.output?;
        if init_out != update_out {
            return None;
        }
        if init.op != IrOp::Copy || init.inputs.len() != 1 || init.inputs[0].space != SpaceId::Const
        {
            return None;
        }
        if !matches!(update.op, IrOp::IntAdd | IrOp::IntSub) || update.inputs.len() != 2 {
            return None;
        }
        let counter_first = update.inputs[0] == init_out;
        let counter_second = update.inputs[1] == init_out;
        if !counter_first && !counter_second {
            return None;
        }
        let other_idx = if counter_first { 1 } else { 0 };
        if update.inputs[other_idx].space != SpaceId::Const {
            return None;
        }
        Some(init_out)
    }

    for node in nodes {
        match node {
            HirNode::For {
                init, update, body, ..
            } => {
                if let Some(counter) = init.as_ref().and_then(|i| detect(i, update)) {
                    ctx.name_overrides
                        .entry(counter)
                        .or_insert_with(|| loop_counter_name(depth).to_string());
                }
                compute_loop_counter_names(body, depth + 1, ctx);
            }
            HirNode::While { body, .. } | HirNode::DoWhile { body, .. } => {
                compute_loop_counter_names(body, depth + 1, ctx);
            }
            HirNode::If {
                then_body,
                else_body,
                ..
            } => {
                compute_loop_counter_names(then_body, depth, ctx);
                if let Some(eb) = else_body {
                    compute_loop_counter_names(eb, depth, ctx);
                }
            }
            HirNode::Switch { cases, default, .. } => {
                for (_, body, _) in cases {
                    compute_loop_counter_names(body, depth, ctx);
                }
                if let Some(d) = default {
                    compute_loop_counter_names(d, depth, ctx);
                }
            }
            HirNode::Block(children) => compute_loop_counter_names(children, depth, ctx),
            HirNode::TryCatch {
                try_body,
                catch_arms,
            } => {
                compute_loop_counter_names(try_body, depth, ctx);
                for (_ty, body) in catch_arms {
                    compute_loop_counter_names(body, depth, ctx);
                }
            }
            HirNode::TryFinally {
                try_body,
                finally_body,
            } => {
                compute_loop_counter_names(try_body, depth, ctx);
                compute_loop_counter_names(finally_body, depth, ctx);
            }
            HirNode::TryExcept {
                try_body,
                except_body,
                ..
            } => {
                compute_loop_counter_names(try_body, depth, ctx);
                compute_loop_counter_names(except_body, depth, ctx);
            }
            _ => {}
        }
    }
}

// ---------------------------------------------------------------------------
// Heuristic variable naming (P7-17)
// ---------------------------------------------------------------------------

/// Roles a variable can play in the source HIR, used to derive a semantic name
/// when no DWARF / loop-counter override is available.
///
/// The order matters: when a variable matches multiple roles, the highest-priority
/// role wins (variants are matched in declaration order in the apply step).
#[derive(Copy, Clone, Eq, PartialEq, Ord, PartialOrd, Debug)]
pub(super) enum VarRole {
    /// Returned via `HirNode::Return(Some(_))` somewhere in the body.
    Result,
    /// Output of a comparison op (`type_family == Some('b')`) consumed as a
    /// branch / loop / switch condition.
    Cond,
    /// Used as the target operand of an indirect call (`CALLIND`).
    Pfn,
    /// Passed as the first non-target argument to a string-handling libc call
    /// (`strlen`, `strcmp`, `strcpy`, `printf`, `puts`, `fprintf`, ...).
    Str,
    /// Pointer-typed (per [`PrimitiveType::Ptr`] in `var_types`) without any
    /// other matching role. Numbered `ptr`, `p1`, `p2`, ...
    Ptr,
}

/// Function names treated as string-handling callees for the `Str` heuristic.
pub(super) const STRING_FUNCS: &[&str] = &[
    "strlen", "strcmp", "strncmp", "strcpy", "strncpy", "strcat", "strncat", "strchr", "strrchr",
    "strstr", "strdup", "strtok", "puts", "printf", "fprintf", "sprintf", "snprintf", "perror",
    "fputs", "fopen", "system",
];

/// Walk the HIR and assign role-based names to base [`Varnode`]s that would
/// otherwise be displayed as `vN`.
///
/// Runs after [`collect_varnodes`] so that `stmt_inputs`, `stmt_outputs`,
/// `stmt_insns`, and `var_types` are populated.
///
/// Priority (highest first): `Result` → `Cond` → `Pfn` → `Str` → `Ptr`.
///
/// Existing entries in `name_overrides` (from DWARF or loop-counter detection)
/// are never replaced.
pub(super) fn compute_heuristic_names(nodes: &[HirNode], ctx: &mut PrintCtx) {
    let mut roles: BTreeMap<Varnode, VarRole> = BTreeMap::new();
    let mut return_svs: BTreeSet<SsaVarnode> = BTreeSet::new();

    walk_collect_roles(nodes, ctx, &mut roles);
    collect_return_svs(nodes, ctx, &mut return_svs);
    collect_statement_level_roles(ctx, &mut roles);

    for sv in return_svs {
        apply_ssa_override(ctx, &sv, "result".to_string());
    }

    let mut by_role: BTreeMap<VarRole, Vec<Varnode>> = BTreeMap::new();
    for (base, role) in &roles {
        by_role.entry(*role).or_default().push(*base);
    }

    let mut ptr_idx: u32 = 0;
    for role in [
        VarRole::Result,
        VarRole::Cond,
        VarRole::Pfn,
        VarRole::Str,
        VarRole::Ptr,
    ] {
        let bases = match by_role.get(&role) {
            Some(b) => b.clone(),
            None => continue,
        };
        for base in bases {
            if ctx.name_overrides.contains_key(&base) {
                continue;
            }
            let name = match role {
                VarRole::Result => "result".to_string(),
                VarRole::Cond => "cond".to_string(),
                VarRole::Pfn => "pfn".to_string(),
                VarRole::Str => "str".to_string(),
                VarRole::Ptr => {
                    ptr_idx += 1;
                    if ptr_idx == 1 {
                        "ptr".to_string()
                    } else {
                        format!("p{}", ptr_idx - 1)
                    }
                }
            };
            apply_override(ctx, &base, name);
        }
    }
}

pub(super) fn dedupe_var_names(ctx: &mut PrintCtx) {
    let mut used: BTreeMap<String, (SsaVarnode, PrimitiveType)> = BTreeMap::new();
    let mut allocated: BTreeSet<String> = ctx.var_names.values().cloned().collect();
    let entries: Vec<(SsaVarnode, String)> = ctx
        .var_names
        .iter()
        .map(|(sv, name)| (*sv, name.clone()))
        .collect();

    for (sv, name) in entries {
        if let Some((owner_sv, _owner_ty)) = used.get(&name).copied() {
            if let Some(reason) = var_names_can_share_name(ctx, owner_sv, sv) {
                trace_dedupe_var_name(&name, owner_sv, sv, reason, None);
                continue;
            }
            let mut suffix = 1u32;
            let unique = loop {
                let candidate = format!("{name}_{suffix}");
                suffix += 1;
                if allocated.insert(candidate.clone()) {
                    break candidate;
                }
            };
            trace_dedupe_var_name(&name, owner_sv, sv, "rename-collision", Some(&unique));
            ctx.var_names.insert(sv, unique);
        } else {
            let ty = ctx
                .var_types
                .get(&sv)
                .copied()
                .unwrap_or(PrimitiveType::Unknown);
            used.insert(name, (sv, ty));
        }
    }
}

pub(super) fn var_names_can_share_name(
    ctx: &PrintCtx,
    owner_sv: SsaVarnode,
    sv: SsaVarnode,
) -> Option<&'static str> {
    if owner_sv.base == sv.base {
        return Some("same-base");
    }
    if ctx.merged_names.get(&owner_sv) == ctx.merged_names.get(&sv)
        && ctx.merged_names.contains_key(&sv)
    {
        return Some("same-merged-name");
    }
    if aliases(owner_sv.base, sv.base) {
        if ctx.name_overrides.get(&owner_sv.base) == ctx.name_overrides.get(&sv.base)
            && ctx.name_overrides.contains_key(&sv.base)
        {
            return Some("same-alias-override");
        }
        if ctx.var_role_names.get(&owner_sv) == ctx.var_role_names.get(&sv)
            && ctx.var_role_names.contains_key(&sv)
        {
            return Some("same-alias-role");
        }
        if ctx.merged_names.get(&owner_sv) == ctx.merged_names.get(&sv)
            && ctx.merged_names.contains_key(&sv)
        {
            return Some("same-alias-merged");
        }
    }
    None
}

pub(super) fn trace_dedupe_var_name(
    name: &str,
    owner_sv: SsaVarnode,
    sv: SsaVarnode,
    decision: &str,
    replacement: Option<&str>,
) {
    if !c_printer_name_trace_enabled() {
        return;
    }
    tracing::debug!(target: "unlace::cprinter::name",
        "dedupe name={name} decision={decision} owner={owner_sv:?} candidate={sv:?} replacement={}",
        replacement.unwrap_or("<shared>")
    );
}

/// Set `name_overrides[base] = name` and rewrite any cached `vN` entries in
/// `var_names` / `base_names` so subsequent [`PrintCtx::name_of`] calls see
/// the new name.
///
/// Cached entries that don't start with `v` followed by digits are left alone:
/// they were placed by an earlier higher-priority pass (DWARF, loop counter,
/// or another heuristic role) and must be preserved.
pub(super) fn apply_override(ctx: &mut PrintCtx, base: &Varnode, name: String) {
    if !is_synthetic_vn_name(ctx.base_names.get(base).map(String::as_str)) {
        trace_name_text(format_args!(
            "override-skip base={base:?} requested={name} existing={:?} reason=existing-non-synthetic",
            ctx.base_names.get(base)
        ));
        return;
    }
    ctx.name_overrides.insert(*base, name.clone());
    ctx.base_names.insert(*base, name.clone());
    let to_update: Vec<SsaVarnode> = ctx
        .var_names
        .iter()
        .filter_map(|(sv, n)| {
            if sv.base == *base && is_synthetic_vn_name(Some(n.as_str())) {
                Some(*sv)
            } else {
                None
            }
        })
        .collect();
    trace_name_text(format_args!(
        "override-apply base={base:?} name={name} update_svs={to_update:?}"
    ));
    for sv in to_update {
        ctx.var_names.insert(sv, name.clone());
    }
}

pub(super) fn apply_ssa_override(ctx: &mut PrintCtx, sv: &SsaVarnode, name: String) {
    if !is_synthetic_vn_name(ctx.var_names.get(sv).map(String::as_str)) {
        trace_name_text(format_args!(
            "ssa-override-skip sv={sv:?} requested={name} existing={:?} reason=existing-non-synthetic",
            ctx.var_names.get(sv)
        ));
        return;
    }
    trace_name_text(format_args!(
        "ssa-override-apply sv={sv:?} name={name} previous={:?}",
        ctx.var_names.get(sv)
    ));
    ctx.var_names.insert(*sv, name);
}

pub(super) fn is_synthetic_vn_name(name: Option<&str>) -> bool {
    let n = match name {
        Some(s) => s,
        None => return true,
    };
    let rest = match n.strip_prefix('v') {
        Some(r) => r,
        None => return false,
    };
    !rest.is_empty() && rest.bytes().all(|b| b.is_ascii_digit())
}

pub(super) fn record_role(roles: &mut BTreeMap<Varnode, VarRole>, base: Varnode, role: VarRole) {
    use std::collections::btree_map::Entry;
    match roles.entry(base) {
        Entry::Vacant(v) => {
            v.insert(role);
        }
        Entry::Occupied(mut o) => {
            if role < *o.get() {
                o.insert(role);
            }
        }
    }
}

/// HIR walker — collects roles that need the structured tree (Return, If/While
/// conditions, switch, etc.).
// Keep the readable `match { Variant => if cond { ... } }` shape rather than
// collapsing into match guards.
#[allow(clippy::collapsible_match, clippy::collapsible_if)]
pub(super) fn walk_collect_roles(
    nodes: &[HirNode],
    ctx: &PrintCtx,
    roles: &mut BTreeMap<Varnode, VarRole>,
) {
    for node in nodes {
        match node {
            HirNode::Block(children) => walk_collect_roles(children, ctx, roles),
            HirNode::Return(Some(_)) | HirNode::Return(None) => {}
            HirNode::If {
                cond,
                then_body,
                else_body,
            } => {
                if cond_is_comparison(cond, ctx) {
                    record_role(roles, cond.base, VarRole::Cond);
                }
                walk_collect_roles(then_body, ctx, roles);
                if let Some(eb) = else_body {
                    walk_collect_roles(eb, ctx, roles);
                }
            }
            HirNode::While { cond, body } => {
                if cond_is_comparison(cond, ctx) {
                    record_role(roles, cond.base, VarRole::Cond);
                }
                walk_collect_roles(body, ctx, roles);
            }
            HirNode::DoWhile { body, cond } => {
                if cond_is_comparison(cond, ctx) {
                    record_role(roles, cond.base, VarRole::Cond);
                }
                walk_collect_roles(body, ctx, roles);
            }
            HirNode::For { cond, body, .. } => {
                if cond_is_comparison(cond, ctx) {
                    record_role(roles, cond.base, VarRole::Cond);
                }
                walk_collect_roles(body, ctx, roles);
            }
            HirNode::Switch { cases, default, .. } => {
                for (_case, body, _) in cases {
                    walk_collect_roles(body, ctx, roles);
                }
                if let Some(d) = default {
                    walk_collect_roles(d, ctx, roles);
                }
            }
            HirNode::TryCatch {
                try_body,
                catch_arms,
            } => {
                walk_collect_roles(try_body, ctx, roles);
                for (_ty, body) in catch_arms {
                    walk_collect_roles(body, ctx, roles);
                }
            }
            HirNode::TryFinally {
                try_body,
                finally_body,
            } => {
                walk_collect_roles(try_body, ctx, roles);
                walk_collect_roles(finally_body, ctx, roles);
            }
            HirNode::TryExcept {
                try_body,
                except_body,
                ..
            } => {
                walk_collect_roles(try_body, ctx, roles);
                walk_collect_roles(except_body, ctx, roles);
            }
            HirNode::Ternary { select, .. } => {
                for cond in select.conds() {
                    if cond_is_comparison(&cond, ctx) {
                        record_role(roles, cond.base, VarRole::Cond);
                    }
                }
            }
            _ => {}
        }
    }
}

pub(super) fn collect_return_svs(
    nodes: &[HirNode],
    ctx: &PrintCtx,
    return_svs: &mut BTreeSet<SsaVarnode>,
) {
    for node in nodes {
        match node {
            HirNode::Block(children) => collect_return_svs(children, ctx, return_svs),
            HirNode::Return(Some(sv)) => {
                if !ctx.parent_returns_void && sv.base.space != SpaceId::Const {
                    return_svs.insert(*sv);
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
                collect_return_svs(then_body, ctx, return_svs);
                if let Some(eb) = else_body {
                    collect_return_svs(eb, ctx, return_svs);
                }
            }
            HirNode::While { body, .. }
            | HirNode::DoWhile { body, .. }
            | HirNode::For { body, .. } => collect_return_svs(body, ctx, return_svs),
            HirNode::Switch { cases, default, .. } => {
                for (_case, body, _) in cases {
                    collect_return_svs(body, ctx, return_svs);
                }
                if let Some(d) = default {
                    collect_return_svs(d, ctx, return_svs);
                }
            }
            HirNode::TryCatch {
                try_body,
                catch_arms,
            } => {
                collect_return_svs(try_body, ctx, return_svs);
                for (_ty, body) in catch_arms {
                    collect_return_svs(body, ctx, return_svs);
                }
            }
            HirNode::TryFinally {
                try_body,
                finally_body,
            } => {
                collect_return_svs(try_body, ctx, return_svs);
                collect_return_svs(finally_body, ctx, return_svs);
            }
            HirNode::TryExcept {
                try_body,
                except_body,
                ..
            } => {
                collect_return_svs(try_body, ctx, return_svs);
                collect_return_svs(except_body, ctx, return_svs);
            }
            HirNode::GuardedIf {
                then_body,
                else_body,
                ..
            } => {
                collect_return_svs(then_body, ctx, return_svs);
                collect_return_svs(else_body, ctx, return_svs);
            }
            HirNode::Commented { inner, .. } => {
                collect_return_svs(std::slice::from_ref(inner), ctx, return_svs);
            }
            HirNode::Statement(_)
            | HirNode::Return(None)
            | HirNode::Goto(_)
            | HirNode::Label(_)
            | HirNode::Ternary { .. }
            | HirNode::TailCall { .. }
            | HirNode::Break
            | HirNode::Continue
            | HirNode::ObjcBlock { .. }
            | HirNode::GuardedTernary { .. }
            | HirNode::CselTernary { .. }
            | HirNode::Asm { .. } => {}
        }
    }
}

/// `true` when the SSA varnode is the output of a boolean-producing op.
///
/// We require an actual comparison op so we don't paint a generic register
/// as `cond` just because it happens to feed a CBRANCH (it might already be
/// `_Bool`-typed via Phase 4 inference, but the source semantics could still
/// be e.g. a load of a flag byte).
pub(super) fn cond_is_comparison(sv: &SsaVarnode, ctx: &PrintCtx) -> bool {
    let &def_stmt = match ctx.sv_defining_stmt.get(sv) {
        Some(s) => s,
        None => {
            return ctx.var_types.get(sv).copied() == Some(PrimitiveType::Bool);
        }
    };
    match ctx.stmt_insns.get(&def_stmt) {
        Some(insn) => insn.op.type_family() == Some('b'),
        None => false,
    }
}

/// Statement-level walker — collects roles requiring access to IR ops:
/// CALLIND targets, comparison outputs, string-call arguments, pointer types.
pub(super) fn collect_statement_level_roles(
    ctx: &PrintCtx,
    roles: &mut BTreeMap<Varnode, VarRole>,
) {
    let stmt_indices: Vec<u32> = ctx.stmt_insns.keys().copied().collect();
    for idx in stmt_indices {
        let insn = match ctx.stmt_insns.get(&idx) {
            Some(i) => i,
            None => continue,
        };

        if insn.op == IrOp::Callind && !insn.inputs.is_empty() {
            let target = &insn.inputs[0];
            if target.space != SpaceId::Const {
                record_role(roles, *target, VarRole::Pfn);
            }
        }

        if insn.op == IrOp::Call && !insn.inputs.is_empty() {
            let target = &insn.inputs[0];
            if target.space == SpaceId::Const {
                let callee = ctx.symbols.get(&target.offset).map(String::as_str);
                if matches!(callee, Some(name) if STRING_FUNCS.contains(&name)) {
                    for arg in insn.inputs.iter().skip(1) {
                        if arg.space != SpaceId::Const {
                            record_role(roles, *arg, VarRole::Str);
                            break;
                        }
                    }
                }
            }
        }

        if insn.op.type_family() == Some('b')
            && let Some(out) = insn.output
        {
            record_role(roles, out, VarRole::Cond);
        }
    }

    let mut ptr_bases: BTreeSet<Varnode> = BTreeSet::new();
    for (sv, ty) in &ctx.var_types {
        if *ty == PrimitiveType::Ptr {
            ptr_bases.insert(sv.base);
        }
    }
    for base in ptr_bases {
        record_role(roles, base, VarRole::Ptr);
    }
}

/// Heuristic: derive C type from opcode family and operand size.
pub(super) fn infer_type_from_insn(insn: &IrInsn, output_sv: &SsaVarnode, ctx: &mut PrintCtx) {
    let ty = match insn.op.type_family() {
        Some('b') => PrimitiveType::Bool,
        Some('f') => {
            if output_sv.base.size == 4 {
                PrimitiveType::Float
            } else {
                PrimitiveType::Double
            }
        }
        Some('i') | Some(_) | None => match insn.op {
            IrOp::Ptradd | IrOp::Ptrsub => PrimitiveType::Ptr,
            IrOp::Load => PrimitiveType::UnsignedInt(output_sv.base.size),
            IrOp::IntDiv
            | IrOp::IntRem
            | IrOp::IntZext
            | IrOp::IntLess
            | IrOp::IntLessequal
            | IrOp::IntCarry => PrimitiveType::UnsignedInt(output_sv.base.size),
            _ => PrimitiveType::Int(output_sv.base.size),
        },
    };
    ctx.var_types.entry(*output_sv).or_insert(ty);
}
