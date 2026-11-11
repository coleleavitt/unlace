//! pipeline: trace.

use super::*;

// ─── Pipeline Stage Helpers ─────────────────────────────────────────────────
// Each helper below corresponds to one maturity-level stage. The pass
// composition follows the canonical descriptor in unlace-passes/src/pass.rs.

pub(super) fn pipeline_trace_enabled() -> bool {
    tracing::enabled!(target: "unlace::pipeline", tracing::Level::DEBUG)
}

pub(super) fn pipeline_trace_verbose_enabled() -> bool {
    tracing::enabled!(target: "unlace::pipeline", tracing::Level::TRACE)
}

pub(super) fn function_shape(function: &Function) -> (usize, usize) {
    let blocks = function.blocks.len();
    let insns = function.blocks.values().map(|b| b.insns.len()).sum();
    (blocks, insns)
}

pub(super) fn ssa_shape(ssa: &SsaFunction) -> (usize, usize, usize, usize) {
    let (blocks, insns) = function_shape(&ssa.function);
    let phis = ssa.phi_map.values().map(|phis| phis.len()).sum();
    (blocks, insns, phis, ssa.var_map.len())
}

pub(super) fn profile_pipeline_stage(
    label: &'static str,
    entry: &FunctionEntry,
) -> Option<(profiling::Span, profiling::TraceFrame)> {
    if !profiling::is_enabled() {
        return None;
    }
    profiling::event_fields(
        "pipeline.stage.start",
        [
            TraceField::text("stage", label),
            TraceField::text("function", entry.name.clone()),
            TraceField::addr("addr", entry.addr),
            TraceField::count("size", entry.size),
        ],
    );
    Some((
        profiling::phase(label),
        profiling::trace_fields(
            label,
            [
                TraceField::text("function", entry.name.clone()),
                TraceField::addr("addr", entry.addr),
                TraceField::count("size", entry.size),
            ],
        ),
    ))
}

pub(super) fn profile_ssa_stage(
    label: &'static str,
    ssa: &SsaFunction,
    iter: usize,
) -> Option<(profiling::Span, profiling::TraceFrame)> {
    if !profiling::is_enabled() {
        return None;
    }
    let (blocks, insns, phis, var_map) = ssa_shape(ssa);
    profiling::event_fields(
        "pipeline.ssa-stage.start",
        [
            TraceField::text("stage", label),
            TraceField::text("function", ssa.function.name.clone()),
            TraceField::text("maturity", format!("{:?}", ssa.maturity)),
            TraceField::count("iter", iter as u64),
            TraceField::count("blocks", blocks as u64),
            TraceField::count("insns", insns as u64),
            TraceField::count("phis", phis as u64),
            TraceField::count("var_map", var_map as u64),
        ],
    );
    Some((
        profiling::phase(label),
        profiling::trace_fields(
            label,
            [
                TraceField::text("function", ssa.function.name.clone()),
                TraceField::text("maturity", format!("{:?}", ssa.maturity)),
                TraceField::count("iter", iter as u64),
                TraceField::count("blocks", blocks as u64),
                TraceField::count("insns", insns as u64),
                TraceField::count("phis", phis as u64),
                TraceField::count("var_map", var_map as u64),
            ],
        ),
    ))
}

pub(super) fn pipeline_trace_start(func_name: &str, stage: &str) {
    if pipeline_trace_enabled() {
        tracing::debug!(target: "unlace::pipeline", "func={func_name} stage={stage} start");
    }
}

pub(super) fn pipeline_trace_done(func_name: &str, stage: &str, start: Instant, deadline: Instant) {
    if pipeline_trace_enabled() {
        let remaining_ms = deadline
            .saturating_duration_since(Instant::now())
            .as_millis();
        tracing::debug!(
            target: "unlace::pipeline",
            "func={func_name} stage={stage} done elapsed_ms={} remaining_ms={remaining_ms}",
            start.elapsed().as_millis(),
        );
    }
}

pub(super) fn pipeline_trace_ir(
    func_name: &str,
    stage: &str,
    start: Instant,
    deadline: Instant,
    func: &Function,
) {
    if pipeline_trace_enabled() {
        let (blocks, insns) = function_shape(func);
        let remaining_ms = deadline
            .saturating_duration_since(Instant::now())
            .as_millis();
        tracing::debug!(
            target: "unlace::pipeline",
            "func={func_name} stage={stage} done elapsed_ms={} remaining_ms={remaining_ms} blocks={blocks} insns={insns}",
            start.elapsed().as_millis(),
        );
    }
}

pub(super) fn pipeline_trace_ssa(
    func_name: &str,
    stage: &str,
    start: Instant,
    deadline: Instant,
    ssa: &SsaFunction,
) {
    if pipeline_trace_enabled() {
        let (blocks, insns, phis, var_map) = ssa_shape(ssa);
        let remaining_ms = deadline
            .saturating_duration_since(Instant::now())
            .as_millis();
        tracing::debug!(
            target: "unlace::pipeline",
            "func={func_name} stage={stage} done elapsed_ms={} remaining_ms={remaining_ms} blocks={blocks} insns={insns} phis={phis} var_map={var_map} maturity={:?}",
            start.elapsed().as_millis(),
            ssa.maturity,
        );
        pipeline_trace_ssa_details(func_name, stage, ssa);
    }
}

pub(super) fn pipeline_trace_maturity_stage(
    ssa: &SsaFunction,
    stage: &str,
    iter: usize,
    start: Instant,
    extra: &str,
) {
    if pipeline_trace_enabled() {
        let (blocks, insns, phis, var_map) = ssa_shape(ssa);
        tracing::debug!(
            target: "unlace::pipeline",
            "func={} outer_iter={iter} stage={stage} done elapsed_ms={} blocks={blocks} insns={insns} phis={phis} var_map={var_map} maturity={:?}{extra}",
            ssa.function.name,
            start.elapsed().as_millis(),
            ssa.maturity,
        );
        pipeline_trace_ssa_details(&ssa.function.name, stage, ssa);
    }
}

pub(super) fn pipeline_trace_ssa_details(func_name: &str, stage: &str, ssa: &SsaFunction) {
    if !pipeline_trace_verbose_enabled() {
        return;
    }
    let header = format!(
        "func={func_name} stage={stage} detail var_types={} merged_names={} foldable={} stack_vars={} stack_accesses={} stack_resolved={} stack_lost={} stack_frame_locals={} lvars={} params={} return_type={}",
        ssa.var_types.len(),
        ssa.merged_names.len(),
        ssa.foldable_exprs.len(),
        ssa.stack_vars.len(),
        ssa.stack_accesses.len(),
        ssa.stack_accesses
            .iter()
            .filter(|acc| acc.resolved_slot.is_some())
            .count(),
        ssa.stack_accesses
            .iter()
            .filter(|acc| acc.lost_provenance)
            .count(),
        ssa.stack_frame
            .as_ref()
            .map(|frame| frame.locals.len())
            .unwrap_or(0),
        ssa.lvars.len(),
        ssa.inferred_params.len(),
        ssa.inferred_return_type,
    );
    tracing::trace!(target: "unlace::pipeline", "{header}");
    for acc in &ssa.stack_accesses {
        let line = format!(
            "func={func_name} stage={stage} stack-access addr={:#x} base={} delta={} width={} store={} resolved={:?} lost={}",
            acc.source_addr,
            acc.base_register,
            acc.delta,
            acc.width,
            acc.is_store,
            acc.resolved_slot,
            acc.lost_provenance,
        );
        tracing::trace!(target: "unlace::pipeline", "{line}");
    }
    if let Some(frame) = &ssa.stack_frame {
        for local in frame.locals.values() {
            let line = format!(
                "func={func_name} stage={stage} stack-frame offset={} size={} widths={:?} kind={:?}",
                local.offset, local.size, local.access_widths, local.kind,
            );
            tracing::trace!(target: "unlace::pipeline", "{line}");
        }
    }
    for lv in &ssa.lvars {
        if !matches!(lv.storage, unlace_ir::lvar::LvarStorage::Stack { .. }) {
            continue;
        }
        let line = format!(
            "func={func_name} stage={stage} stack-lvar id={} storage={:?} name={:?} ty={:?} source={:?} flags={:?}",
            lv.id, lv.storage, lv.name, lv.ty, lv.source, lv.flags,
        );
        tracing::trace!(target: "unlace::pipeline", "{line}");
    }
    for (block, phis) in &ssa.phi_map {
        for phi in phis {
            let line = format!(
                "func={func_name} stage={stage} phi block={block:?} output={:?} inputs={:?}",
                phi.output, phi.inputs
            );
            tracing::trace!(target: "unlace::pipeline", "{line}");
        }
    }
    for (key, sv) in &ssa.var_map {
        let line = format!("func={func_name} stage={stage} var_map key={key:?} sv={sv:?}");
        tracing::trace!(target: "unlace::pipeline", "{line}");
    }
    for (&bid, block) in &ssa.function.blocks {
        for (idx, insn) in block.insns.iter().enumerate() {
            let output = ssa.var_map.get(&(bid, idx, VarnodeSlot::Output)).copied();
            let inputs: Vec<_> = (0..insn.inputs.len())
                .filter_map(|input_idx| {
                    ssa.var_map
                        .get(&(bid, idx, VarnodeSlot::Input(input_idx)))
                        .copied()
                        .map(|sv| (input_idx, sv))
                })
                .collect();
            let line = format!(
                "func={func_name} stage={stage} insn block={bid:?} idx={idx} addr=0x{:x} op={:?} output={output:?} inputs={inputs:?}",
                insn.addr, insn.op
            );
            tracing::trace!(target: "unlace::pipeline", "{line}");
        }
    }
    for (sv, name) in &ssa.merged_names {
        let line = format!("func={func_name} stage={stage} merged_name sv={sv:?} name={name}");
        tracing::trace!(target: "unlace::pipeline", "{line}");
    }
}
