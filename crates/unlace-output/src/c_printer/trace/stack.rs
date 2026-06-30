use super::super::*;
use super::gate::*;

pub(in crate::c_printer) fn trace_stack_lvar_inventory(
    stage: &str,
    lvars: &BTreeMap<i64, StackLvarAnnotation>,
) {
    if !c_printer_stack_trace_enabled() {
        return;
    }
    trace_stack_text(format_args!(
        "lvar-inventory stage={stage} count={}",
        lvars.len()
    ));
    for (offset, ann) in lvars {
        trace_stack_text(format_args!(
            "lvar stage={stage} offset={offset} name={} size={} buffer={} from_debug={} c_type={:?} ty={:?}",
            ann.name, ann.size, ann.is_buffer, ann.from_debug, ann.c_type, ann.ty
        ));
    }
    trace_stack_lvar_overlaps(stage, lvars);
}

pub(in crate::c_printer) fn trace_stack_lvar_overlaps(
    stage: &str,
    lvars: &BTreeMap<i64, StackLvarAnnotation>,
) {
    let items: Vec<(i64, &StackLvarAnnotation)> = lvars.iter().map(|(o, ann)| (*o, ann)).collect();
    for window in items.windows(2) {
        let (prev_offset, prev) = window[0];
        let (next_offset, next) = window[1];
        let Some(prev_end) = prev_offset.checked_add(prev.size as i64) else {
            continue;
        };
        if prev_end > next_offset {
            trace_stack_text(format_args!(
                "lvar-overlap stage={stage} first_offset={prev_offset} first_name={} first_size={} first_end={} second_offset={next_offset} second_name={} second_size={} overlap_bytes={}",
                prev.name,
                prev.size,
                prev_end,
                next.name,
                next.size,
                prev_end - next_offset,
            ));
        }
    }
}

pub(in crate::c_printer) fn trace_stack_frame_inventory(stage: &str, func: &HirFunction) {
    if !c_printer_stack_trace_enabled() {
        return;
    }
    let Some(frame) = func.stack_frame.as_ref() else {
        trace_stack_text(format_args!(
            "frame-inventory stage={stage} count=0 reason=no-frame"
        ));
        return;
    };
    trace_stack_text(format_args!(
        "frame-inventory stage={stage} count={} frame_size={} min_neg={} max_pos={}",
        frame.locals.len(),
        frame.frame_size,
        frame.min_neg_offset,
        frame.max_pos_offset
    ));
    for local in frame.locals.values() {
        trace_stack_text(format_args!(
            "frame-local stage={stage} offset={} size={} access_widths={:?} kind={:?}",
            local.offset, local.size, local.access_widths, local.kind
        ));
    }
    trace_stack_frame_lvar_coverage(stage, func);
}

pub(in crate::c_printer) fn trace_stack_frame_lvar_coverage(stage: &str, func: &HirFunction) {
    if !c_printer_stack_trace_enabled() {
        return;
    }
    let Some(frame) = func.stack_frame.as_ref() else {
        return;
    };
    for local in frame.locals.values() {
        let local_start = local.offset;
        let Some(local_end) = local.offset.checked_add(local.size as i64) else {
            continue;
        };
        for other in frame.locals.values() {
            if other.offset == local.offset {
                continue;
            }
            let other_start = other.offset;
            let Some(other_end) = other.offset.checked_add(other.size as i64) else {
                continue;
            };
            if local_start <= other_start && other_end <= local_end {
                trace_stack_text(format_args!(
                    "frame-slot-covered stage={stage} outer_offset={local_start} outer_size={} outer_end={local_end} inner_offset={other_start} inner_size={} inner_end={other_end} inner_kind={:?}",
                    local.size, other.size, other.kind,
                ));
            }
        }
    }
}

pub(in crate::c_printer) fn trace_stack_slot_inventory(stage: &str, ctx: &PrintCtx) {
    if !c_printer_stack_trace_enabled() {
        return;
    }
    trace_stack_text(format_args!(
        "slot-inventory stage={stage} count={} promoted={} synthetic={} suppressed={} canary={}",
        ctx.stack_frame_slots.len(),
        ctx.promoted_stack_buffers.len(),
        ctx.synthetic_stack_scalars.len(),
        ctx.suppressed_stack_offsets.len(),
        ctx.canary_stack_offsets.len()
    ));
    for (offset, slot) in &ctx.stack_frame_slots {
        trace_stack_text(format_args!(
            "slot stage={stage} offset={offset} name={} size={} buffer={}",
            slot.name, slot.size, slot.is_buffer
        ));
    }
    for (offset, size) in &ctx.promoted_stack_buffers {
        trace_stack_text(format_args!(
            "promoted-buffer stage={stage} offset={offset} size={size}"
        ));
    }
    for (offset, size) in &ctx.synthetic_stack_scalars {
        trace_stack_text(format_args!(
            "synthetic-scalar stage={stage} offset={offset} size={size}"
        ));
    }
}

pub(in crate::c_printer) fn trace_stack_lvar_slot_crosscheck(stage: &str, ctx: &PrintCtx) {
    if !c_printer_stack_trace_enabled() {
        return;
    }
    for (offset, ann) in &ctx.stack_lvars {
        if ctx.stack_frame_slots.contains_key(offset) {
            continue;
        }
        let covering = ctx
            .stack_frame_slots
            .range(..=*offset)
            .rev()
            .find_map(|(start, slot)| {
                let end = start.checked_add(slot.size as i64)?;
                (*offset >= *start && *offset < end).then_some((*start, end, slot))
            });
        if let Some((slot_start, slot_end, slot)) = covering {
            trace_stack_text(format_args!(
                "lvar-covered-by-slot stage={stage} lvar_offset={offset} lvar_name={} lvar_size={} slot_offset={slot_start} slot_end={slot_end} slot_name={} slot_size={} slot_buffer={}",
                ann.name, ann.size, slot.name, slot.size, slot.is_buffer,
            ));
        } else {
            trace_stack_text(format_args!(
                "lvar-without-slot stage={stage} lvar_offset={offset} lvar_name={} lvar_size={} buffer={} from_debug={} c_type={:?} ty={:?}",
                ann.name, ann.size, ann.is_buffer, ann.from_debug, ann.c_type, ann.ty,
            ));
        }
    }
}

pub(in crate::c_printer) fn trace_stack_resolution(
    source: &str,
    stmt_idx: u32,
    raw_idx: Option<usize>,
    vn: &Varnode,
    offset: Option<i64>,
    access_size: Option<u8>,
    slot: Option<&StackSlotRef>,
    result: Option<&str>,
) {
    if !c_printer_stack_trace_enabled() {
        return;
    }
    let slot_text = slot
        .map(|slot| {
            format!(
                "name={} delta={} kind={}",
                slot.name,
                slot.delta,
                if slot.is_buffer { "buffer" } else { "scalar" }
            )
        })
        .unwrap_or_else(|| "none".to_string());
    let text = format!(
        "stack source={source} stmt={stmt_idx} raw_idx={raw_idx:?} raw={vn:?} offset={offset:?} access_size={access_size:?} slot={slot_text} result={result:?}"
    );
    if trace_text_matches_filter(&text) {
        eprintln!("[unlace-output] {text}");
    }
}

pub(in crate::c_printer) fn trace_stack_offset_step(
    source: &str,
    stmt_idx: u32,
    raw_idx: Option<usize>,
    vn: &Varnode,
    depth: u8,
    sv: Option<&SsaVarnode>,
    def: Option<(u32, IrOp)>,
    result: Option<i64>,
) {
    if !c_printer_stack_trace_enabled() {
        return;
    }
    let text = format!(
        "stack-offset source={source} stmt={stmt_idx} raw_idx={raw_idx:?} depth={depth} raw={vn:?} sv={sv:?} def={def:?} result={result:?}"
    );
    if trace_text_matches_filter(&text) {
        eprintln!("[unlace-output] {text}");
    }
}

pub(in crate::c_printer) fn trace_load_render(
    source: &str,
    stmt_idx: u32,
    insn: &IrInsn,
    addr_idx: usize,
    load_size: u8,
    is_mmio: Option<bool>,
    result: Option<&str>,
) {
    if !c_printer_stack_trace_enabled() && !c_printer_trace_enabled() {
        return;
    }
    let addr = insn.inputs.get(addr_idx);
    let text = format!(
        "load-render source={source} stmt={stmt_idx} addr=0x{:x} output={:?} addr_idx={addr_idx} addr={addr:?} size={load_size} mmio={is_mmio:?} result={result:?}",
        insn.addr, insn.output,
    );
    if trace_text_matches_filter(&text) {
        eprintln!("[unlace-output] {text}");
    }
}

pub(in crate::c_printer) fn trace_readonly_resolution(
    stmt_idx: u32,
    vn: &Varnode,
    addr: u64,
    access_size: u8,
    value: &str,
) {
    if !c_printer_stack_trace_enabled() {
        return;
    }
    let text = format!(
        "readonly stmt={stmt_idx} raw={vn:?} addr=0x{addr:x} size={access_size} value={value}"
    );
    if trace_text_matches_filter(&text) {
        eprintln!("[unlace-output] {text}");
    }
}
