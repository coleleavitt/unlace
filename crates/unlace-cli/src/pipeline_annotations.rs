//! pipeline: annotations.

use super::*;

/// Slice an [`AnnotationDb`] down to the per-function view the printer needs.
///
/// `function_comments`/`line_comments` are keyed by function entry address;
/// `custom_names` is the global addr→name map and is passed through whole so
/// the printer can also rename callees referenced from inside this function.
pub(super) fn build_printer_annotations(
    db: &crate::annotations::AnnotationDb,
    func_addr: u64,
) -> unlace_output::PrinterAnnotations {
    unlace_output::PrinterAnnotations {
        function_comment: db.function_comments.get(&func_addr).cloned(),
        line_comments: db
            .line_comments
            .get(&func_addr)
            .cloned()
            .unwrap_or_default(),
        custom_names: db.custom_names.clone(),
        ..Default::default()
    }
}

/// Data regions and object symbols around the constant addresses `ssa`
/// references, for [`unlace_passes::ObjectWidenPass`]: every readable,
/// non-executable section one of them falls in, and the symbols just before
/// and just after each address when they are data objects.
pub(crate) fn data_items_for_ssa(
    image: &BinaryImage,
    ssa: &SsaFunction,
) -> unlace_ir::mem_object::DataItems {
    let mut items = unlace_ir::mem_object::DataItems::default();
    let addrs = const_addrs_for_ssa(ssa);
    for section in &image.sections {
        let data = section.flags.contains(SectionFlags::READ)
            && !section.flags.contains(SectionFlags::EXEC)
            && section.vaddr != 0;
        if !data {
            continue;
        }
        let start = section.vaddr;
        let end = section.vaddr.saturating_add(section.size);
        let mut referenced = addrs.range(start..end).peekable();
        if referenced.peek().is_none() {
            continue;
        }
        items.add_region(start, end);
        for &addr in referenced {
            let preceding = image.symbols.range(start..=addr).next_back();
            let next = image.symbols.range(addr.saturating_add(1)..end).next();
            for (_, sym) in preceding.into_iter().chain(next) {
                if sym.kind == SymbolKind::Object {
                    items.add_item(sym.addr, sym.size);
                }
            }
        }
    }
    items
}

pub(super) fn collect_readonly_scalars_for_ssa(
    image: &BinaryImage,
    ssa: &SsaFunction,
) -> BTreeMap<(u64, u8), u64> {
    let candidate_addrs = const_addrs_for_ssa(ssa);
    let mut out = BTreeMap::new();
    if candidate_addrs.is_empty() {
        return out;
    }
    for section in &image.sections {
        let readonly_data = section.flags.contains(SectionFlags::READ)
            && !section.flags.contains(SectionFlags::WRITE)
            && !section.flags.contains(SectionFlags::EXEC)
            && !section.data.is_empty();
        if !readonly_data {
            continue;
        }
        let start = section.vaddr;
        let end = section.vaddr.saturating_add(section.data.len() as u64);
        for &addr in candidate_addrs.range(start..end) {
            let section_off = (addr - section.vaddr) as usize;
            // The trailing (+8, 8) read is the high half of a 128-bit load,
            // which the printer resolves as two 8-byte scalars.
            for (delta, width) in [(0usize, 1usize), (0, 2), (0, 4), (0, 8), (8, 8)] {
                let off = section_off.saturating_add(delta);
                if off.saturating_add(width) > section.data.len() {
                    continue;
                }
                let bytes = &section.data[off..off + width];
                let value = match image.endian {
                    Endian::Little => bytes
                        .iter()
                        .enumerate()
                        .fold(0u64, |acc, (idx, byte)| acc | ((*byte as u64) << (idx * 8))),
                    Endian::Big => bytes
                        .iter()
                        .fold(0u64, |acc, byte| (acc << 8) | (*byte as u64)),
                };
                out.insert((addr + delta as u64, width as u8), value);
            }
        }
    }
    out
}

pub(super) fn symbols_for_ssa(
    ssa: &SsaFunction,
    symbols: &BTreeMap<u64, String>,
) -> BTreeMap<u64, String> {
    let mut out = BTreeMap::new();
    if let Some(name) = symbols.get(&ssa.function.addr) {
        out.insert(ssa.function.addr, name.clone());
    }
    for addr in const_addrs_for_ssa(ssa) {
        if let Some(name) = symbols.get(&addr) {
            out.insert(addr, name.clone());
        }
    }
    out
}

pub(super) fn string_table_for_ssa(
    ssa: &SsaFunction,
    string_table: &BTreeMap<u64, String>,
) -> BTreeMap<u64, String> {
    let mut out = BTreeMap::new();
    for addr in const_addrs_for_ssa(ssa) {
        if let Some(s) = string_table.get(&addr) {
            out.insert(addr, s.clone());
        }
    }
    out
}

pub(super) fn const_addrs_for_ssa(ssa: &SsaFunction) -> BTreeSet<u64> {
    let mut candidate_addrs = BTreeSet::new();
    for block in ssa.function.blocks.values() {
        for insn in &block.insns {
            for input in &insn.inputs {
                if input.space == SpaceId::Const {
                    candidate_addrs.insert(input.offset);
                }
            }
            if let Some(output) = insn.output
                && output.space == SpaceId::Const
            {
                candidate_addrs.insert(output.offset);
            }
        }
    }
    for table in ssa.resolved_jump_tables.values() {
        candidate_addrs.insert(table.base);
        candidate_addrs.extend(table.targets.iter().copied());
    }
    for target in ssa.resolved_indirect_calls.values() {
        candidate_addrs.insert(*target);
    }
    candidate_addrs
}

pub(crate) fn collect_ssa_statement_slots(
    ssa: &SsaFunction,
) -> BTreeMap<(u64, IrOp), Vec<unlace_output::SsaStatementSlots>> {
    let mut out: BTreeMap<(u64, IrOp), Vec<unlace_output::SsaStatementSlots>> = BTreeMap::new();
    for (&bid, block) in &ssa.function.blocks {
        for (idx, insn) in block.insns.iter().enumerate() {
            if ssa.frame_setup_insns.contains(&(bid, idx)) {
                continue;
            }
            let mut inputs = BTreeMap::new();
            for raw_idx in 0..insn.inputs.len() {
                if let Some(&sv) = ssa.var_map.get(&(bid, idx, VarnodeSlot::Input(raw_idx))) {
                    inputs.insert(raw_idx, sv);
                }
            }
            let output = ssa.var_map.get(&(bid, idx, VarnodeSlot::Output)).copied();
            out.entry((insn.addr, insn.op))
                .or_default()
                .push(unlace_output::SsaStatementSlots { output, inputs });
        }
    }
    out
}

pub(crate) fn collect_ssa_phi_uses(ssa: &SsaFunction) -> Vec<SsaVarnode> {
    let mut out = Vec::new();
    for phis in ssa.phi_map.values() {
        for phi in phis {
            out.extend(phi.inputs.iter().map(|&(_pred, sv)| sv));
        }
    }
    out
}

pub(crate) fn collect_return_value_aliases(
    ssa: &SsaFunction,
    symbols: &BTreeMap<u64, String>,
) -> BTreeMap<SsaVarnode, SsaVarnode> {
    let mut defs: BTreeMap<SsaVarnode, (BlockId, usize)> = BTreeMap::new();
    for (&bid, block) in &ssa.function.blocks {
        for (idx, _insn) in block.insns.iter().enumerate() {
            if let Some(&sv) = ssa.var_map.get(&(bid, idx, VarnodeSlot::Output)) {
                defs.insert(sv, (bid, idx));
            }
        }
    }

    let mut stack_fail_preds = BTreeSet::new();
    for phis in ssa.phi_map.values() {
        for phi in phis {
            if !is_return_register_sv(&phi.output) {
                continue;
            }
            for &(pred, sv) in &phi.inputs {
                if traces_to_stack_chk_fail_return(ssa, symbols, &defs, sv, &mut BTreeSet::new()) {
                    stack_fail_preds.insert(pred);
                }
            }
        }
    }

    let mut normal_by_size: BTreeMap<u8, SsaVarnode> = BTreeMap::new();
    let mut normal_by_output: BTreeMap<SsaVarnode, SsaVarnode> = BTreeMap::new();
    for phis in ssa.phi_map.values() {
        for phi in phis {
            if !is_return_register_sv(&phi.output) || phi.inputs.len() < 2 {
                continue;
            }
            let has_stack_fail_input = phi
                .inputs
                .iter()
                .any(|(pred, _)| stack_fail_preds.contains(pred));
            if !has_stack_fail_input {
                continue;
            }
            if let Some((_, normal)) = phi
                .inputs
                .iter()
                .find(|(pred, _)| !stack_fail_preds.contains(pred))
            {
                normal_by_size
                    .entry(phi.output.base.size)
                    .or_insert(*normal);
                normal_by_output.insert(phi.output, *normal);
            }
        }
    }
    let mut out = BTreeMap::new();
    for (output, normal) in normal_by_output {
        let preferred_narrow = normal_by_size
            .range(..output.base.size)
            .next()
            .map(|(_, sv)| *sv);
        out.insert(output, preferred_narrow.unwrap_or(normal));
    }
    out
}

pub(super) fn is_return_register_sv(sv: &SsaVarnode) -> bool {
    sv.base.space == SpaceId::Register && sv.base.offset == 0
}

pub(super) fn traces_to_stack_chk_fail_return(
    ssa: &SsaFunction,
    symbols: &BTreeMap<u64, String>,
    defs: &BTreeMap<SsaVarnode, (BlockId, usize)>,
    sv: SsaVarnode,
    seen: &mut BTreeSet<SsaVarnode>,
) -> bool {
    if !seen.insert(sv) || seen.len() > 16 {
        return false;
    }
    let Some(&(bid, idx)) = defs.get(&sv) else {
        return false;
    };
    let Some(block) = ssa.function.blocks.get(&bid) else {
        return false;
    };
    let Some(insn) = block.insns.get(idx) else {
        return false;
    };
    if matches!(insn.op, IrOp::Call | IrOp::Callind)
        && let Some(target) = insn
            .inputs
            .first()
            .filter(|target| target.space == SpaceId::Const)
    {
        return symbols.get(&target.offset).is_none_or(|name| {
            name == "__stack_chk_fail"
                || name.starts_with("__stack_chk_fail@")
                || name.ends_with("::__stack_chk_fail")
        });
    }
    if !matches!(
        insn.op,
        IrOp::Copy
            | IrOp::Subpiece
            | IrOp::IntZext
            | IrOp::IntSext
            | IrOp::Multiequal
            | IrOp::Piece
    ) {
        return false;
    }
    (0..insn.inputs.len()).any(|raw_idx| {
        ssa.var_map
            .get(&(bid, idx, VarnodeSlot::Input(raw_idx)))
            .copied()
            .is_some_and(|input| traces_to_stack_chk_fail_return(ssa, symbols, defs, input, seen))
    })
}

#[cfg(test)]
pub(super) fn collect_go_iface_devirtualized_calls(
    ssa: &SsaFunction,
    image: &BinaryImage,
    symbols: &BTreeMap<u64, String>,
) -> BTreeMap<u64, String> {
    let mut methods = BTreeSet::new();
    for itab in image.go_itabs.values() {
        methods.extend(itab.methods.iter().copied());
    }
    collect_go_iface_devirtualized_calls_with_methods(ssa, symbols, &methods)
}

pub(super) fn collect_go_iface_devirtualized_calls_with_methods(
    ssa: &SsaFunction,
    symbols: &BTreeMap<u64, String>,
    go_itab_methods: &BTreeSet<u64>,
) -> BTreeMap<u64, String> {
    if go_itab_methods.is_empty() || symbols.is_empty() {
        return BTreeMap::new();
    }

    let mut resolved: BTreeMap<u64, String> = BTreeMap::new();
    for (&(bid, idx), &target) in &ssa.resolved_indirect_calls {
        let Some(block) = ssa.function.blocks.get(&bid) else {
            continue;
        };
        let Some(insn) = block.insns.get(idx) else {
            continue;
        };
        if insn.op != IrOp::Callind {
            continue;
        }

        let mut matched_name: Option<String> = None;
        if go_itab_methods.contains(&target) {
            let Some(raw_name) = symbols.get(&target) else {
                continue;
            };
            // The unique target address is enough to prove the concrete
            // implementation body. We intentionally don't require the
            // interface/concrete type metadata itself to be rendered here —
            // the `runtime.itab` membership test is the devirtualization proof,
            // and the printer just needs a stable direct-callee label.
            matched_name = Some(unlace_output::demangle::sanitize_for_c(
                &unlace_output::demangle::demangle(raw_name)
                    .map(|d| d.short_name)
                    .unwrap_or_else(|| raw_name.clone()),
            ));
        }

        if let Some(name) = matched_name {
            resolved.insert(insn.addr, name);
        }
    }
    resolved
}

pub(super) fn run_objc_dispatch_pass(
    ssa: &mut SsaFunction,
    pass: Option<&ObjcDispatchPass>,
    opts: &PassOptions,
) {
    let Some(pass) = pass else {
        return;
    };
    if let Err(e) = run_instrumented(pass, ssa, opts) {
        profiling::diagnostic(
            "warn",
            "objc dispatch pass failed",
            [
                TraceField::text("function", ssa.function.name.clone()),
                TraceField::text("err", e.to_string()),
            ],
        );
    }
}
