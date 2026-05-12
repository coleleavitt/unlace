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

        if is_branch_target(insn.op, i) {
            if let Some(target_bid) = resolve_branch_target(func, input) {
                let _ = write!(out, "@BB_{}", target_bid.0);
                continue;
            }
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
        if let Some(first_insn) = block.insns.first() {
            if first_insn.addr == target_addr {
                return Some(bid);
            }
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
    use unlace_ir::ssa::{DominatorTree, PhiNode, SsaFunction, SsaVarnode, VarnodeSlot};
    use unlace_ir::{BasicBlock, BlockId, Function, IrInsn, IrOp, Varnode};

    use super::dump_ir;

    /// Helper: build a minimal SsaFunction from a Function with var_map entries.
    fn make_ssa(func: Function) -> SsaFunction {
        let cfg = build_cfg(&func);
        let dom_tree = DominatorTree::new(BTreeMap::new(), BTreeMap::new(), func.entry);
        SsaFunction {
            function: func,
            cfg,
            dom_tree,
            post_dom_tree: None,
            phi_map: BTreeMap::new(),
            var_map: BTreeMap::new(),
            var_types: BTreeMap::new(),
            calling_convention: unlace_ir::ssa::CallingConvention::Unknown,
            stack_vars: BTreeMap::new(),
            foldable_exprs: BTreeSet::new(),
            noreturn: false,
            tail_call_map: BTreeMap::new(),
            merged_names: BTreeMap::new(),
            enum_discriminants: Vec::new(),
            panic_sites: BTreeMap::new(),
            vtable_calls: BTreeMap::new(),
            cpp_vtable_calls: BTreeMap::new(),
            objc_dispatch_calls: BTreeMap::new(),
            inferred_params: Vec::new(),
            inferred_return_type: unlace_ir::ssa::PrimitiveType::Unknown,
            frame_setup_insns: BTreeSet::new(),
            stack_offset_hints: BTreeMap::new(),
            dwarf_local_names: BTreeMap::new(),
            inferred_structs: BTreeMap::new(),
            composite_var_types: BTreeMap::new(),
            array_strides: BTreeMap::new(),
            external_signatures: BTreeMap::new(),
            eh_landing_pads: BTreeSet::new(),
            stack_gaps: BTreeMap::new(),
            frame_size: 0,
            sp_delta_at: BTreeMap::new(),
            stack_holes: BTreeMap::new(),
            dynamic_sp: false,
            sizeof_type_map: BTreeMap::new(),
            alignof_type_map: BTreeMap::new(),
            resolved_indirect_calls: BTreeMap::new(),
            variadic_call_types: BTreeMap::new(),
            signature_revision: 0,
            op_bindings: unlace_ir::ssa::OpTypeBindings::default(),
            byref_boxes: std::collections::BTreeMap::new(),
            stack_frame: None,
            byref_info: None,
            libc_call_annotations: std::collections::BTreeMap::new(),
            array_struct_layouts: std::collections::BTreeMap::new(),
            var_role_names: std::collections::BTreeMap::new(),
            finalized_signature: None,
            crypto_annotations: Vec::new(),
            cpp_lambda_captures: Vec::new(),
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
}
