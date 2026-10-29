//! IR dump formatter — canonical text form per IR spec §2.

use std::fmt::Write;

use unlace_ir::ssa::{PhiNode, SsaFunction, SsaVarnode, VarnodeSlot};
use unlace_ir::{BlockId, IrInsn, IrOp, SpaceId, Varnode};

/// Dump an SSA function in the canonical text form defined by IR spec §2.
///
/// Output is deterministic: same input produces byte-identical output.
/// Blocks are emitted in `BlockId` order. Phi nodes appear at the top
/// of each block, before regular instructions.
pub fn dump_ir(func: &SsaFunction) -> String {
    let mut out = String::with_capacity(1024);
    write_function(func, &mut out);
    out
}

/// Render the Batch 18 lvar audit table for `func` as a stable markdown
/// block. Wraps [`unlace_ir::lvar::dump_lvars`] with a header so callers
/// can mix the dump into multi-section diagnostic output. Returns the
/// header alone when `func.lvars` is empty.
pub fn dump_lvars(func: &SsaFunction) -> String {
    use std::fmt::Write;
    let mut out = String::new();
    let _ = writeln!(
        out,
        "## lvars for {} @ 0x{:x}\n",
        func.function.name, func.function.addr,
    );
    out.push_str(&unlace_ir::lvar::dump_lvars(&func.lvars));
    out
}

/// Render the Batch 20 type-inference audit for `func`. Emits one row per
/// SSA varnode in `var_types` plus the higher-resolution rows from
/// `composite_var_types`, with the inferred type, its provenance bucket,
/// and the producing instruction's address when known.
///
/// Provenance buckets are inferred from supporting bookkeeping fields on
/// [`SsaFunction`]:
///
/// - `debug`: stack varnode whose offset matches a `dwarf_local_names` key.
/// - `stack`: any other stack varnode.
/// - `signature`: a register varnode whose register matches an argument
///   slot of [`SsaFunction::calling_convention`] within the recovered
///   parameter-count window (`max(finalized_signature.len, inferred_params.len)`).
/// - `composite`: surfaced separately below the main table when an entry
///   survives in [`SsaFunction::composite_var_types`] — a deeper recovered
///   struct/union/array shape.
/// - `inferred`: default for everything else.
///
/// Rows are emitted in `SsaVarnode` order so the dump is deterministic
/// across runs.
pub fn dump_type_audit(func: &SsaFunction) -> String {
    use std::collections::BTreeSet;
    use std::fmt::Write;
    let mut out = String::new();
    let _ = writeln!(
        out,
        "## type audit for {} @ 0x{:x}\n",
        func.function.name, func.function.addr,
    );
    let _ = writeln!(out, "| var | inferred type | provenance | notes |");
    let _ = writeln!(out, "|-----|--------------|------------|-------|");

    // Stack offsets named by DWARF feed the `debug` provenance bucket.
    let dwarf_offsets: BTreeSet<i64> = func.dwarf_local_names.keys().copied().collect();
    let finalized_param_count = func
        .finalized_signature
        .as_ref()
        .map(|s| s.params.len())
        .unwrap_or(0);
    let inferred_param_count = func.inferred_params.len();
    let signature_param_count = finalized_param_count.max(inferred_param_count);

    for (sv, ty) in &func.var_types {
        let provenance = if let Some(off) = stack_offset_for_var(sv) {
            if dwarf_offsets.contains(&off) {
                "debug"
            } else {
                "stack"
            }
        } else if sv.base.space == unlace_ir::SpaceId::Register
            && signature_param_count > 0
            && sv_param_index(sv, func.calling_convention, signature_param_count).is_some()
        {
            "signature"
        } else {
            "inferred"
        };
        let _ = writeln!(
            out,
            "| {:?}#{} | {:?} | {} | width={} |",
            sv.base.space, sv.version, ty, provenance, sv.base.size
        );
    }

    if !func.composite_var_types.is_empty() {
        let _ = writeln!(out);
        let _ = writeln!(
            out,
            "### composite types ({}):",
            func.composite_var_types.len()
        );
        let _ = writeln!(out, "| var | composite type |");
        let _ = writeln!(out, "|-----|---------------|");
        for (sv, ty) in &func.composite_var_types {
            let _ = writeln!(out, "| {:?}#{} | {:?} |", sv.base.space, sv.version, ty);
        }
    }

    if !func.object_types.is_empty() {
        let _ = writeln!(out);
        let _ = writeln!(out, "### object types ({}):", func.object_types.len());
        let _ = writeln!(out, "| object | synthesised type |");
        let _ = writeln!(out, "|--------|------------------|");
        for (object, ty) in &func.object_types {
            let object = match object {
                unlace_ir::mem_object::MemObject::Global(addr) => format!("global 0x{addr:x}"),
                unlace_ir::mem_object::MemObject::Frame(off) => format!("frame {off}"),
            };
            let _ = writeln!(out, "| {object} | {ty:?} |");
        }
    }
    out
}

fn stack_offset_for_var(sv: &unlace_ir::ssa::SsaVarnode) -> Option<i64> {
    if sv.base.space == unlace_ir::SpaceId::Stack {
        Some(sv.base.offset as i64)
    } else {
        None
    }
}

/// Map a register-space [`SsaVarnode`] back to a calling-convention
/// argument index. Returns `Some(i)` when `sv` lives in the i-th
/// argument register for `cc` and `i < total_params`. The audit uses
/// this to bucket parameter-register varnodes into the `signature`
/// provenance — distinct from generic inferred types.
///
/// Register encodings match the Ghidra-style x86_64 file numbering
/// used by `unlace-passes::calling_convention`. AArch64 maps X0..X7 in
/// the v-register space at offsets 0,8,16,...,56.
fn sv_param_index(
    sv: &unlace_ir::ssa::SsaVarnode,
    cc: unlace_ir::ssa::CallingConvention,
    total_params: usize,
) -> Option<u32> {
    use unlace_ir::ssa::CallingConvention;
    if sv.base.space != unlace_ir::SpaceId::Register || total_params == 0 {
        return None;
    }
    // x86_64 register file offsets — must match calling_convention.rs.
    const RAX: u64 = 0;
    const RCX: u64 = 8;
    const RDX: u64 = 16;
    const RSI: u64 = 48;
    const RDI: u64 = 56;
    const R8: u64 = 64;
    const R9: u64 = 72;
    let regs: &[u64] = match cc {
        CallingConvention::SystemV => &[RDI, RSI, RDX, RCX, R8, R9],
        CallingConvention::MicrosoftX64 => &[RCX, RDX, R8, R9],
        CallingConvention::AArch64 => &[0, 8, 16, 24, 32, 40, 48, 56],
        CallingConvention::Cdecl | CallingConvention::Stdcall | CallingConvention::Thiscall => {
            // x86-32 stack ABIs pass via the stack — `this` lives in ECX
            // for thiscall, but the audit reports stack-based args via
            // the stack bucket, not signature.
            if matches!(cc, CallingConvention::Thiscall) {
                &[RCX]
            } else {
                return None;
            }
        }
        CallingConvention::Unknown => return None,
    };
    // Suppress: RAX is the return-value register, never an arg in any
    // CC above. If it ever shows up at offset 0 we still skip it.
    let _ = RAX;
    regs.iter()
        .take(total_params)
        .position(|&r| r == sv.base.offset)
        .map(|i| i as u32)
}

fn write_function(func: &SsaFunction, out: &mut String) {
    let _ = writeln!(
        out,
        "func {} @ 0x{:x} {{",
        func.function.name, func.function.addr
    );

    for (&bid, block) in &func.function.blocks {
        write_block_header(func, bid, out);

        if let Some(phis) = func.phi_map.get(&bid) {
            for phi in phis {
                write_phi(func, phi, out);
            }
        }

        for (insn_idx, insn) in block.insns.iter().enumerate() {
            write_insn(func, bid, insn_idx, insn, out);
        }
    }

    let _ = writeln!(out, "}}");
}

fn write_block_header(func: &SsaFunction, bid: BlockId, out: &mut String) {
    out.push_str("BB_");
    let _ = write!(out, "{}", bid.0);

    let annotations = collect_annotations(func, bid);
    if !annotations.is_empty() {
        out.push_str(" [");
        for (i, annot) in annotations.iter().enumerate() {
            if i > 0 {
                out.push_str(", ");
            }
            out.push_str(annot);
        }
        out.push(']');
    }

    let _ = writeln!(out, ":");
}

fn collect_annotations(func: &SsaFunction, bid: BlockId) -> Vec<&'static str> {
    let mut annotations = Vec::new();

    if bid == func.function.entry {
        annotations.push("entry");
    }

    // Back-edge detection: in RPO numbering, a predecessor with higher ID is a back-edge.
    let preds = func.cfg.predecessors(bid);
    let has_back_edge = preds.iter().any(|&pred| pred > bid);
    if has_back_edge {
        annotations.push("loop_header");
    }

    if preds.is_empty() && bid != func.function.entry && func.function.blocks.contains_key(&bid) {
        annotations.push("unreachable");
    }

    if let Some(block) = func.function.blocks.get(&bid) {
        let ends_with_return = block
            .insns
            .last()
            .is_some_and(|insn| insn.op == IrOp::Return);
        let has_no_successors = block.successors.is_empty()
            && !block.insns.last().is_some_and(|insn| {
                matches!(
                    insn.op,
                    IrOp::Branch | IrOp::Cbranch | IrOp::Branchind | IrOp::Call | IrOp::Callind
                )
            });
        if ends_with_return || has_no_successors {
            annotations.push("exit");
        }
    }

    annotations
}

fn write_phi(_func: &SsaFunction, phi: &PhiNode, out: &mut String) {
    out.push_str("  ");

    write_ssa_varnode(&phi.output, out);
    let type_family = IrOp::Multiequal.type_family().unwrap_or('i');
    write_type_tag(type_family, phi.output.base.size, out);

    out.push_str(" = MULTIEQUAL ");

    for (i, (pred_bid, input_sv)) in phi.inputs.iter().enumerate() {
        if i > 0 {
            out.push_str(", ");
        }
        write_ssa_varnode(input_sv, out);
        write_type_tag(type_family, input_sv.base.size, out);
        let _ = write!(out, "(BB_{})", pred_bid.0);
    }

    out.push('\n');
}

fn write_insn(func: &SsaFunction, bid: BlockId, insn_idx: usize, insn: &IrInsn, out: &mut String) {
    out.push_str("  ");

    if let Some(ref raw_output) = insn.output {
        if let Some(sv) = func.var_map.get(&(bid, insn_idx, VarnodeSlot::Output)) {
            write_ssa_varnode(sv, out);
        } else {
            write_varnode_literal(raw_output, out);
        }
        if let Some(family) = insn.op.type_family() {
            write_type_tag(family, raw_output.size, out);
        }
        out.push_str(" = ");
    }

    out.push_str(insn.op.name());

    for (i, input) in insn.inputs.iter().enumerate() {
        if i == 0 {
            out.push(' ');
        } else {
            out.push_str(", ");
        }

        if is_branch_target(insn.op, i)
            && let Some(target_bid) = resolve_branch_target(func, input)
        {
            let _ = write!(out, "@BB_{}", target_bid.0);
            continue;
        }

        if let Some(sv) = func.var_map.get(&(bid, insn_idx, VarnodeSlot::Input(i))) {
            write_ssa_varnode(sv, out);
        } else {
            write_varnode_literal(input, out);
        }
        let family = insn.op.input_type_family(i);
        write_type_tag(family, input.size, out);
    }

    out.push('\n');
}

fn is_branch_target(op: IrOp, index: usize) -> bool {
    match op {
        IrOp::Branch | IrOp::Call => index == 0,
        IrOp::Cbranch => index == 0,
        _ => false,
    }
}

fn resolve_branch_target(func: &SsaFunction, vn: &Varnode) -> Option<BlockId> {
    if vn.space != SpaceId::Const {
        return None;
    }
    let target_addr = vn.offset;

    for (&bid, block) in &func.function.blocks {
        if let Some(first_insn) = block.insns.first()
            && first_insn.addr == target_addr
        {
            return Some(bid);
        }
    }

    None
}

fn write_ssa_varnode(sv: &SsaVarnode, out: &mut String) {
    out.push('v');
    let id = varnode_id(&sv.base);
    let _ = write!(out, "{}", id);
    if sv.version > 0 {
        let _ = write!(out, "#{}", sv.version);
    }
}

/// Maps a varnode's (space, offset) to a stable numeric ID for SSA display.
/// Register offsets pass through directly; other spaces use disjoint ranges
/// to avoid collisions (e.g. `u5` and `r5` produce different IDs).
fn varnode_id(vn: &Varnode) -> u64 {
    match vn.space {
        SpaceId::Register => vn.offset,
        SpaceId::Ram => 0x100000 + vn.offset,
        SpaceId::Const => vn.offset,
        SpaceId::Unique => 0x10000 + vn.offset,
        SpaceId::Stack => 0x200000 + vn.offset,
        _ => 0x300000 + vn.offset,
    }
}

fn write_varnode_literal(vn: &Varnode, out: &mut String) {
    match vn.space {
        SpaceId::Register => {
            let _ = write!(out, "r{}", vn.offset);
        }
        SpaceId::Ram => {
            let _ = write!(out, "m0x{:x}", vn.offset);
        }
        SpaceId::Const => {
            if vn.offset < 10 {
                let _ = write!(out, "c{}", vn.offset);
            } else {
                let _ = write!(out, "c0x{:x}", vn.offset);
            }
        }
        SpaceId::Unique => {
            let _ = write!(out, "u{}", vn.offset);
        }
        SpaceId::Stack => {
            let signed = vn.offset as i64;
            let _ = write!(out, "s{signed}");
        }
        _ => {
            let _ = write!(out, "?{}:{}", vn.offset, vn.size);
        }
    }
}

fn write_type_tag(family: char, size_bytes: u8, out: &mut String) {
    let _ = write!(out, ":{}{}", family, (size_bytes as u32) * 8);
}

#[cfg(test)]
mod tests {
    use std::collections::{BTreeMap, BTreeSet};

    use smallvec::smallvec;

    use unlace_ir::cfg::build_cfg;
    use unlace_ir::ssa::{DominatorTree, PhiNode, SsaFunction, SsaVarnode, VarMap};
    use unlace_ir::{BasicBlock, BlockId, Function, IrInsn, IrOp, Varnode};

    use super::dump_ir;

    /// Helper: build a minimal SsaFunction from a Function with var_map entries.
    fn make_ssa(func: Function) -> SsaFunction {
        let cfg = build_cfg(&func);
        let dom_tree = DominatorTree::new(BTreeMap::new(), BTreeMap::new(), func.entry);
        SsaFunction {
            function: func,
            arch: unlace_ir::ArchId::Unknown(0),
            os_abi: unlace_ir::OsAbi::Unknown,
            maturity: unlace_ir::ssa::Maturity::Zero,
            cfg,
            dom_tree,
            post_dom_tree: None,
            phi_map: BTreeMap::new(),
            var_map: VarMap::new(),
            var_types: BTreeMap::new(),
            calling_convention: unlace_ir::ssa::CallingConvention::Unknown,
            stack_vars: BTreeMap::new(),
            foldable_exprs: BTreeSet::new(),
            noreturn: false,
            tail_call_map: BTreeMap::new(),
            merged_names: BTreeMap::new(),
            enum_discriminants: Vec::new(),
            panic_sites: BTreeMap::new(),
            seh_regions: Vec::new(),
            coroutine_sites: Vec::new(),
            resolved_jump_tables: std::collections::BTreeMap::new(),
            cpp_kind: None,
            cpp_class_name: None,
            cpp_this_args: std::collections::BTreeSet::new(),
            variadic: None,
            inferred_stack_params: std::collections::BTreeSet::new(),
            data_items: unlace_ir::mem_object::DataItems::default(),
            object_types: Default::default(),
            vtable_calls: BTreeMap::new(),
            cpp_vtable_calls: BTreeMap::new(),
            objc_dispatch_calls: BTreeMap::new(),
            inferred_params: Vec::new(),
            inferred_return_type: unlace_ir::ssa::PrimitiveType::Unknown,
            frame_setup_insns: BTreeSet::new(),
            stack_offset_hints: BTreeMap::new(),
            dwarf_local_names: BTreeMap::new(),
            dwarf_aggregate_offsets: BTreeSet::new(),
            pending_dwarf_locals: Vec::new(),
            inferred_structs: BTreeMap::new(),
            composite_var_types: BTreeMap::new(),
            array_strides: BTreeMap::new(),
            external_signatures: BTreeMap::new(),
            eh_landing_pad_catches: BTreeMap::new(),
            stack_gaps: BTreeMap::new(),
            frame_size: 0,
            sp_delta_at: BTreeMap::new(),
            stack_holes: BTreeMap::new(),
            dynamic_sp: false,
            block_entry_sp_delta: std::collections::BTreeMap::new(),
            frame_holes: Vec::new(),
            saved_register_slots: std::collections::BTreeSet::new(),
            sizeof_type_map: BTreeMap::new(),
            alignof_type_map: BTreeMap::new(),
            resolved_indirect_calls: BTreeMap::new(),
            indirect_call_targets: BTreeMap::new(),
            variadic_call_types: BTreeMap::new(),
            signature_revision: 0,
            op_bindings: unlace_ir::ssa::OpTypeBindings::default(),
            byref_boxes: std::collections::BTreeMap::new(),
            stack_frame: None,
            stack_accesses: Vec::new(),
            byref_info: None,
            libc_call_annotations: std::collections::BTreeMap::new(),
            libc_sig_annotations: std::collections::BTreeMap::new(),
            array_struct_layouts: std::collections::BTreeMap::new(),
            var_role_names: std::collections::BTreeMap::new(),
            finalized_signature: None,
            crypto_annotations: Vec::new(),
            go_defer_sites: Vec::new(),
            type_counterexamples: Vec::new(),
            cpp_variant_discriminants: Vec::new(),
            go_defer_recover_calls: BTreeMap::new(),
            cpp_lambda_captures: Vec::new(),
            rust_async: None,
            lvars: Vec::new(),
        }
    }

    #[test]
    fn test_dump_with_phi() {
        let r0 = Varnode::reg(0, 4);
        let r8 = Varnode::reg(8, 4);
        let c1 = Varnode::constant(1, 4);
        let c2 = Varnode::constant(2, 4);

        let mut func = Function::new("diamond", BlockId(0), 0x2000);

        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(IrInsn::without_output(
            IrOp::Cbranch,
            smallvec![Varnode::constant(0x2010, 8), Varnode::unique(5, 1)],
            0x2000,
        ));
        bb0.successors = smallvec![BlockId(1), BlockId(2)];

        let mut bb1 = BasicBlock::new(BlockId(1));
        bb1.insns.push(IrInsn::with_output(
            IrOp::IntAdd,
            r0,
            smallvec![r8, c1],
            0x2010,
        ));
        bb1.insns.push(IrInsn::without_output(
            IrOp::Branch,
            smallvec![Varnode::constant(0x2030, 8)],
            0x2014,
        ));
        bb1.successors = smallvec![BlockId(3)];

        let mut bb2 = BasicBlock::new(BlockId(2));
        bb2.insns.push(IrInsn::with_output(
            IrOp::IntAdd,
            r0,
            smallvec![r8, c2],
            0x2020,
        ));
        bb2.insns.push(IrInsn::without_output(
            IrOp::Branch,
            smallvec![Varnode::constant(0x2030, 8)],
            0x2024,
        ));
        bb2.successors = smallvec![BlockId(3)];

        let mut bb3 = BasicBlock::new(BlockId(3));
        bb3.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec![Varnode::unique(0, 8), r0],
            0x2030,
        ));

        func.insert_block(bb0);
        func.insert_block(bb1);
        func.insert_block(bb2);
        func.insert_block(bb3);

        let mut ssa = make_ssa(func);

        // Insert phi node at BB_3 for r0.
        let phi = PhiNode {
            output: SsaVarnode {
                base: r0,
                version: 3,
            },
            inputs: vec![
                (
                    BlockId(1),
                    SsaVarnode {
                        base: r0,
                        version: 1,
                    },
                ),
                (
                    BlockId(2),
                    SsaVarnode {
                        base: r0,
                        version: 2,
                    },
                ),
            ],
        };
        ssa.phi_map.insert(BlockId(3), vec![phi]);

        let output = dump_ir(&ssa);

        // Phi should appear at the top of BB_3.
        assert!(
            output.contains("v0#3:i32 = MULTIEQUAL v0#1:i32(BB_1), v0#2:i32(BB_2)"),
            "Expected phi line, got:\n{output}"
        );
    }

    #[test]
    fn test_dump_deterministic() {
        let r0 = Varnode::reg(0, 8);
        let r8 = Varnode::reg(8, 8);
        let c1 = Varnode::constant(1, 8);

        let mut func = Function::new("deterministic", BlockId(0), 0x3000);
        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(IrInsn::with_output(
            IrOp::IntAdd,
            r0,
            smallvec![r8, c1],
            0x3000,
        ));
        bb0.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec![Varnode::unique(0, 8)],
            0x3004,
        ));
        func.insert_block(bb0);

        let ssa = make_ssa(func);
        let dump1 = dump_ir(&ssa);
        let dump2 = dump_ir(&ssa);

        assert_eq!(dump1, dump2, "dump_ir must be deterministic");
    }

    #[test]
    fn test_dump_canonical_form() {
        // Build the simple example from the task description.
        let r0 = Varnode::reg(0, 8);

        let mut func = Function::new("simple", BlockId(0), 0x1000);

        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(IrInsn::with_output(
            IrOp::Copy,
            Varnode::unique(1, 8),
            smallvec![r0],
            0x1000,
        ));
        bb0.insns.push(IrInsn::with_output(
            IrOp::IntAdd,
            Varnode::unique(2, 8),
            smallvec![Varnode::unique(1, 8), Varnode::constant(0x10, 8)],
            0x1004,
        ));
        bb0.insns.push(IrInsn::without_output(
            IrOp::Cbranch,
            smallvec![Varnode::constant(0x1020, 8), Varnode::unique(3, 1)],
            0x1008,
        ));
        bb0.successors = smallvec![BlockId(1), BlockId(2)];

        let mut bb1 = BasicBlock::new(BlockId(1));
        bb1.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec![Varnode::unique(0, 8), Varnode::unique(2, 8)],
            0x1010,
        ));

        let mut bb2 = BasicBlock::new(BlockId(2));
        bb2.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec![Varnode::unique(0, 8), Varnode::constant(0, 8)],
            0x1020,
        ));

        func.insert_block(bb0);
        func.insert_block(bb1);
        func.insert_block(bb2);

        let ssa = make_ssa(func);
        let output = dump_ir(&ssa);

        // Verify key format aspects:
        // 1. Function header uses "func" keyword and hex address.
        assert!(output.starts_with("func simple @ 0x1000 {\n"));

        // 2. Entry block has [entry] annotation.
        assert!(output.contains("BB_0 [entry]:"));

        // 3. Exit blocks have [exit] annotation.
        assert!(output.contains("[exit]:"));

        // 4. Instruction lines indented by 2 spaces.
        for line in output.lines() {
            if line.starts_with(' ') {
                assert!(
                    line.starts_with("  "),
                    "instruction lines must use exactly 2 spaces indent: {line:?}"
                );
            }
        }

        // 5. No trailing whitespace on any line.
        for line in output.lines() {
            assert_eq!(
                line.trim_end(),
                line,
                "no trailing whitespace allowed: {line:?}"
            );
        }

        // 6. Ends with closing brace on its own line.
        assert!(output.ends_with("}\n"));

        // 7. LF only, no CRLF.
        assert!(!output.contains("\r\n"));
    }

    #[test]
    fn test_dump_branch_target_resolution() {
        // Test that BRANCH targets resolve to @BB_<n> when address matches.
        let mut func = Function::new("branches", BlockId(0), 0x1000);

        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(IrInsn::without_output(
            IrOp::Branch,
            smallvec![Varnode::constant(0x1010, 8)],
            0x1000,
        ));
        bb0.successors = smallvec![BlockId(1)];

        let mut bb1 = BasicBlock::new(BlockId(1));
        bb1.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec![Varnode::unique(0, 8)],
            0x1010,
        ));

        func.insert_block(bb0);
        func.insert_block(bb1);

        let ssa = make_ssa(func);
        let output = dump_ir(&ssa);

        assert!(
            output.contains("BRANCH @BB_1"),
            "Expected BRANCH @BB_1, got:\n{output}"
        );
    }

    #[test]
    fn test_dump_multiple_blocks_sorted() {
        // Verify blocks appear in BlockId order even if inserted out of order.
        let mut func = Function::new("sorted", BlockId(0), 0x1000);

        // Insert in reverse order.
        let mut bb2 = BasicBlock::new(BlockId(2));
        bb2.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec![Varnode::unique(0, 8)],
            0x1020,
        ));
        func.insert_block(bb2);

        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(IrInsn::without_output(
            IrOp::Branch,
            smallvec![Varnode::constant(0x1010, 8)],
            0x1000,
        ));
        bb0.successors = smallvec![BlockId(1)];
        func.insert_block(bb0);

        let mut bb1 = BasicBlock::new(BlockId(1));
        bb1.insns.push(IrInsn::without_output(
            IrOp::Branch,
            smallvec![Varnode::constant(0x1020, 8)],
            0x1010,
        ));
        bb1.successors = smallvec![BlockId(2)];
        func.insert_block(bb1);

        let ssa = make_ssa(func);
        let output = dump_ir(&ssa);

        // BB_0 must appear before BB_1, BB_1 before BB_2.
        let pos_0 = output.find("BB_0").expect("BB_0 in output");
        let pos_1 = output.find("BB_1").expect("BB_1 in output");
        let pos_2 = output.find("BB_2").expect("BB_2 in output");
        assert!(pos_0 < pos_1, "BB_0 must appear before BB_1");
        assert!(pos_1 < pos_2, "BB_1 must appear before BB_2");
    }

    #[test]
    fn test_dump_varnode_spaces() {
        // Test that all varnode spaces render correctly.
        let mut func = Function::new("spaces", BlockId(0), 0x1000);

        let mut bb0 = BasicBlock::new(BlockId(0));
        // RAM-space load
        bb0.insns.push(IrInsn::with_output(
            IrOp::Load,
            Varnode::unique(1, 4),
            smallvec![Varnode::constant(1, 8), Varnode::ram(0xdeadbeef, 8)],
            0x1000,
        ));
        // Stack store
        bb0.insns.push(IrInsn::without_output(
            IrOp::Store,
            smallvec![
                Varnode::constant(4, 8),
                Varnode::stack((-8i64) as u64, 8),
                Varnode::unique(1, 4),
            ],
            0x1004,
        ));
        bb0.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec![Varnode::unique(0, 8)],
            0x1008,
        ));
        func.insert_block(bb0);

        let ssa = make_ssa(func);
        let output = dump_ir(&ssa);

        assert!(output.contains("m0xdeadbeef"), "RAM literal missing");
        assert!(output.contains("s-8"), "Stack literal missing");
    }

    #[test]
    fn test_dump_empty_function() {
        let func = Function::new("empty", BlockId(0), 0x1000);
        let ssa = make_ssa(func);
        let output = dump_ir(&ssa);

        assert_eq!(output, "func empty @ 0x1000 {\n}\n");
    }

    /// Batch 20: the type audit emits a header row and an entry per
    /// `var_types` mapping. An empty composite map omits the composite
    /// section so the output stays compact.
    #[test]
    fn dump_type_audit_emits_header_and_rows() {
        use super::dump_type_audit;
        use unlace_ir::ssa::{PrimitiveType, SsaVarnode};
        let func = Function::new("ty_audit", BlockId(0), 0x1000);
        let mut ssa = make_ssa(func);

        let r0 = SsaVarnode {
            base: Varnode::reg(0, 4),
            version: 1,
        };
        let r1 = SsaVarnode {
            base: Varnode::stack(0xfff0, 4),
            version: 1,
        };
        ssa.var_types.insert(r0, PrimitiveType::Int(4));
        ssa.var_types.insert(r1, PrimitiveType::Int(4));
        ssa.dwarf_local_names.insert(-16, "x".into());

        let md = dump_type_audit(&ssa);
        assert!(md.contains("type audit for ty_audit"));
        assert!(md.contains("| var | inferred type |"));
        // Two rows.
        assert_eq!(
            md.matches("| Register#1 ").count() + md.matches("| Stack#1 ").count(),
            2
        );
    }

    /// Batch 20: provenance bucketing recognises argument registers
    /// from the recovered calling convention and tags them `signature`,
    /// distinct from generic `inferred` register varnodes.
    #[test]
    fn dump_type_audit_buckets_signature_params() {
        use super::dump_type_audit;
        use unlace_ir::ssa::{CallingConvention, PrimitiveType, SsaVarnode};
        let func = Function::new("sig_bucket", BlockId(0), 0x1000);
        let mut ssa = make_ssa(func);
        ssa.calling_convention = CallingConvention::SystemV;
        // SysV first three int arg regs (RDI=56, RSI=48, RDX=16).
        let rdi = SsaVarnode {
            base: Varnode::reg(56, 8),
            version: 1,
        };
        let rsi = SsaVarnode {
            base: Varnode::reg(48, 8),
            version: 1,
        };
        let rax = SsaVarnode {
            base: Varnode::reg(0, 8),
            version: 1,
        };
        ssa.var_types.insert(rdi, PrimitiveType::Int(8));
        ssa.var_types.insert(rsi, PrimitiveType::Int(8));
        ssa.var_types.insert(rax, PrimitiveType::Int(8));
        // Drive `signature_param_count >= 2`.
        ssa.inferred_params
            .push(("a1".into(), PrimitiveType::Int(8)));
        ssa.inferred_params
            .push(("a2".into(), PrimitiveType::Int(8)));

        let md = dump_type_audit(&ssa);
        // RDI and RSI both lie within the 2-param window → `signature`.
        assert_eq!(md.matches("| signature ").count(), 2);
        // RAX is the return-value register, never an arg → `inferred`.
        assert!(md.contains("| inferred "));
    }

    /// Batch 20: with `calling_convention = Unknown`, no register
    /// varnode is bucketed as `signature` — guesses must not look like
    /// debug facts.
    #[test]
    fn dump_type_audit_signature_requires_known_cc() {
        use super::dump_type_audit;
        use unlace_ir::ssa::{CallingConvention, PrimitiveType, SsaVarnode};
        let func = Function::new("no_cc", BlockId(0), 0x1000);
        let mut ssa = make_ssa(func);
        ssa.calling_convention = CallingConvention::Unknown;
        let rdi = SsaVarnode {
            base: Varnode::reg(56, 8),
            version: 1,
        };
        ssa.var_types.insert(rdi, PrimitiveType::Int(8));
        ssa.inferred_params
            .push(("a1".into(), PrimitiveType::Int(8)));

        let md = dump_type_audit(&ssa);
        assert!(!md.contains("| signature "));
        assert!(md.contains("| inferred "));
    }
}
