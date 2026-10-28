use super::super::*;
use super::gate::*;

pub(in crate::c_printer) fn known_name_of_sv(ctx: &PrintCtx, sv: &SsaVarnode) -> Option<String> {
    ctx.var_names
        .get(sv)
        .or_else(|| ctx.name_overrides.get(&sv.base))
        .or_else(|| ctx.merged_names.get(sv))
        .or_else(|| ctx.var_role_names.get(sv))
        .or_else(|| ctx.base_names.get(&sv.base))
        .cloned()
}

pub(in crate::c_printer) fn known_name_for_base(ctx: &PrintCtx, base: &Varnode) -> Option<String> {
    ctx.name_overrides
        .get(base)
        .or_else(|| ctx.base_names.get(base))
        .cloned()
        .or_else(|| {
            ctx.var_names
                .iter()
                .find(|(sv, _)| sv.base == *base)
                .map(|(_, name)| name.clone())
        })
        .or_else(|| {
            ctx.merged_names
                .iter()
                .find(|(sv, _)| sv.base == *base)
                .map(|(_, name)| name.clone())
        })
}

pub(in crate::c_printer) fn trace_name_decision(
    source: &str,
    sv: &SsaVarnode,
    name: &str,
    ctx: &PrintCtx,
) {
    if !c_printer_name_trace_enabled() {
        return;
    }
    let text = format!(
        "name source={source} name={name} sv={sv:?} base={:?} merged={:?} role={:?} override={:?}",
        sv.base,
        ctx.merged_names.get(sv),
        ctx.var_role_names.get(sv),
        ctx.name_overrides.get(&sv.base)
    );
    tracing::debug!(target: "unlace::cprinter::name", "{text}");
}

pub(in crate::c_printer) fn trace_operand_resolution(
    source: &str,
    stmt_idx: u32,
    raw_idx: Option<usize>,
    vn: &Varnode,
    sv: Option<SsaVarnode>,
    ctx: &PrintCtx,
) {
    if !c_printer_name_trace_enabled() {
        return;
    }
    let known = sv.and_then(|sv| known_name_of_sv(ctx, &sv));
    let text = format!(
        "operand source={source} stmt={stmt_idx} raw_idx={raw_idx:?} raw={vn:?} sv={sv:?} known_name={known:?}"
    );
    tracing::debug!(target: "unlace::cprinter::name", "{text}");
}

pub(in crate::c_printer) fn trace_assignment_render(
    stmt_idx: u32,
    insn: &IrInsn,
    sv: &SsaVarnode,
    lhs: &str,
    rhs: &str,
    ctx: &PrintCtx,
) {
    if !c_printer_name_trace_enabled() {
        return;
    }
    let inputs = ctx
        .stmt_input_slots
        .get(&stmt_idx)
        .map(|slots| {
            slots
                .iter()
                .map(|(raw_idx, input_sv)| {
                    format!(
                        "{raw_idx}:{input_sv:?}:{:?}",
                        known_name_of_sv(ctx, input_sv)
                    )
                })
                .collect::<Vec<_>>()
                .join(",")
        })
        .unwrap_or_default();
    let text = format!(
        "assign-render stmt={stmt_idx} addr=0x{:x} op={:?} output={sv:?} lhs={lhs:?} rhs={rhs:?} inputs=[{}]",
        insn.addr, insn.op, inputs
    );
    tracing::debug!(target: "unlace::cprinter::name", "{text}");
}
