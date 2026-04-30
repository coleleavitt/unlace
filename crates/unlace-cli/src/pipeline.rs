use std::collections::BTreeMap;

use anyhow::{Context, Result, bail};

use unlace_ir::ssa::SsaFunction;
use unlace_ir::{BasicBlock, BlockId, Function, IrOp, Lifter};
use unlace_loader::{BinaryImage, SymbolKind};
use unlace_passes::{
    ConstantFoldPass, CopyPropagationPass, DeadCodeElimPass, Pass, run_to_fixedpoint,
};

use crate::args::EmitFormat;

#[derive(Clone, Debug)]
pub struct FunctionEntry {
    pub name: String,
    pub addr: u64,
    pub size: u64,
}

pub fn discover_functions(
    image: &BinaryImage,
    filter: Option<&str>,
) -> Result<Vec<FunctionEntry>> {
    let mut funcs: Vec<FunctionEntry> = image
        .symbols
        .values()
        .filter(|sym| sym.kind == SymbolKind::Function && sym.size > 0)
        .map(|sym| FunctionEntry {
            name: sym.name.clone(),
            addr: sym.addr,
            size: sym.size,
        })
        .collect();

    if funcs.is_empty() {
        tracing::info!("no function symbols found; falling back to entry point");
        funcs.push(FunctionEntry {
            name: "entry".into(),
            addr: image.entry,
            size: 0,
        });
    }

    if let Some(filter) = filter {
        let target = parse_function_filter(filter);
        funcs.retain(|f| match &target {
            FunctionTarget::Name(name) => f.name == *name,
            FunctionTarget::Addr(addr) => f.addr == *addr,
        });
        if funcs.is_empty() {
            bail!("no function matching '{filter}' found in binary");
        }
    }

    Ok(funcs)
}

enum FunctionTarget {
    Name(String),
    Addr(u64),
}

fn parse_function_filter(s: &str) -> FunctionTarget {
    if let Some(hex) = s.strip_prefix("0x").or_else(|| s.strip_prefix("0X")) {
        if let Ok(addr) = u64::from_str_radix(hex, 16) {
            return FunctionTarget::Addr(addr);
        }
    }
    FunctionTarget::Name(s.to_string())
}

pub fn lift_function(
    image: &BinaryImage,
    lifter: &dyn Lifter,
    entry: &FunctionEntry,
) -> Result<Function> {
    let text = image
        .section_by_name(".text")
        .context("binary has no .text section")?;

    let (func_start, func_end) = function_bounds(entry, text);

    if func_start < text.vaddr || func_start >= text.vaddr + text.size {
        bail!(
            "function '{}' at {:#x} is outside .text ({:#x}..{:#x})",
            entry.name,
            func_start,
            text.vaddr,
            text.vaddr + text.size,
        );
    }

    let offset_start = (func_start - text.vaddr) as usize;
    let offset_end = ((func_end - text.vaddr) as usize).min(text.data.len());
    let code = &text.data[offset_start..offset_end];

    tracing::debug!(
        func = %entry.name,
        addr = %format_args!("{:#x}", func_start),
        size = code.len(),
        "lifting function"
    );

    let lifted_insns = lift_instructions(lifter, code, func_start)?;
    let function = build_function_from_insns(&entry.name, func_start, &lifted_insns);
    Ok(function)
}

fn function_bounds(
    entry: &FunctionEntry,
    text: &unlace_loader::Section,
) -> (u64, u64) {
    let start = entry.addr;
    let end = if entry.size > 0 {
        start + entry.size
    } else {
        text.vaddr + text.size
    };
    (start, end)
}

struct LiftedInsnRecord {
    addr: u64,
    #[allow(dead_code)]
    len: usize,
    ir_ops: Vec<unlace_ir::IrInsn>,
    is_terminator: bool,
}

fn lift_instructions(
    lifter: &dyn Lifter,
    code: &[u8],
    base_addr: u64,
) -> Result<Vec<LiftedInsnRecord>> {
    let mut records = Vec::new();
    let mut offset = 0usize;

    while offset < code.len() {
        let addr = base_addr + offset as u64;
        let remaining = &code[offset..];

        match lifter.lift_insn(remaining, addr) {
            Ok(lifted) => {
                let is_term = lifted.ir_ops.iter().any(|op| is_terminator(op.op));
                records.push(LiftedInsnRecord {
                    addr,
                    len: lifted.len,
                    ir_ops: lifted.ir_ops,
                    is_terminator: is_term,
                });
                offset += lifted.len;
                if is_term
                    && records.last().map_or(false, |r| {
                        r.ir_ops.iter().any(|op| op.op == IrOp::Return)
                    })
                {
                    break;
                }
            }
            Err(e) => {
                tracing::warn!(addr = %format_args!("{:#x}", addr), err = %e, "lift failed; stopping");
                break;
            }
        }
    }

    Ok(records)
}

fn is_terminator(op: IrOp) -> bool {
    matches!(
        op,
        IrOp::Branch | IrOp::Cbranch | IrOp::Branchind | IrOp::Return
    )
}

fn build_function_from_insns(
    name: &str,
    entry_addr: u64,
    insns: &[LiftedInsnRecord],
) -> Function {
    if insns.is_empty() {
        return Function::new(name, BlockId(0), entry_addr);
    }

    let mut block_starts: BTreeMap<u64, u32> = BTreeMap::new();
    block_starts.insert(entry_addr, 0);

    // Pass 1: identify block boundaries — new block after each terminator
    // and at each branch target address.
    for (i, rec) in insns.iter().enumerate() {
        if rec.is_terminator {
            if let Some(next) = insns.get(i + 1) {
                block_starts.entry(next.addr).or_insert(0);
            }

            for ir_op in &rec.ir_ops {
                if matches!(ir_op.op, IrOp::Branch | IrOp::Cbranch | IrOp::Call) {
                    if let Some(target) = ir_op.inputs.first() {
                        if target.space == unlace_ir::SpaceId::Const {
                            block_starts.entry(target.offset).or_insert(0);
                        }
                    }
                }
            }
        }
    }

    // Assign sequential BlockId values.
    let sorted_addrs: Vec<u64> = block_starts.keys().copied().collect();
    for (idx, addr) in sorted_addrs.iter().enumerate() {
        block_starts.insert(*addr, idx as u32);
    }

    let insn_addrs: Vec<u64> = insns.iter().map(|r| r.addr).collect();

    // Pass 2: populate blocks with instructions and wire successor edges.
    let mut function = Function::new(name, BlockId(0), entry_addr);

    for (block_idx, &block_addr) in sorted_addrs.iter().enumerate() {
        let bid = BlockId(block_idx as u32);
        let mut bb = BasicBlock::new(bid);

        let start_pos = match insn_addrs.binary_search(&block_addr) {
            Ok(pos) => pos,
            Err(pos) => pos,
        };

        for rec in &insns[start_pos..] {
            if rec.addr != block_addr
                && block_starts.contains_key(&rec.addr)
                && block_starts[&rec.addr] != block_idx as u32
            {
                let next_bid = BlockId(block_starts[&rec.addr]);
                if !bb.successors.contains(&next_bid) {
                    bb.successors.push(next_bid);
                }
                break;
            }

            bb.insns.extend_from_slice(&rec.ir_ops);

            if rec.is_terminator {
                for ir_op in &rec.ir_ops {
                    match ir_op.op {
                        IrOp::Branch => {
                            if let Some(target) = ir_op.inputs.first() {
                                if target.space == unlace_ir::SpaceId::Const {
                                    if let Some(&tid) = block_starts.get(&target.offset) {
                                        let target_bid = BlockId(tid);
                                        if !bb.successors.contains(&target_bid) {
                                            bb.successors.push(target_bid);
                                        }
                                    }
                                }
                            }
                        }
                        IrOp::Cbranch => {
                            if let Some(target) = ir_op.inputs.first() {
                                if target.space == unlace_ir::SpaceId::Const {
                                    if let Some(&tid) = block_starts.get(&target.offset) {
                                        let target_bid = BlockId(tid);
                                        if !bb.successors.contains(&target_bid) {
                                            bb.successors.push(target_bid);
                                        }
                                    }
                                }
                            }
                            if let Some(next) = insns.get(start_pos + 1 + (&insns[start_pos..]).iter().position(|r| std::ptr::eq(r, rec)).unwrap_or(0)) {
                                if let Some(&fid) = block_starts.get(&next.addr) {
                                    let fall_bid = BlockId(fid);
                                    if !bb.successors.contains(&fall_bid) {
                                        bb.successors.push(fall_bid);
                                    }
                                }
                            }
                        }
                        _ => {}
                    }
                }

                break;
            }
        }

        function.insert_block(bb);
    }

    function
}

pub fn run_passes(ssa: &mut SsaFunction) -> Result<usize> {
    let fold = ConstantFoldPass;
    let prop = CopyPropagationPass;
    let dce = DeadCodeElimPass;
    let passes: &[&dyn Pass] = &[&fold, &prop, &dce];

    let changes = run_to_fixedpoint(passes, ssa)
        .context("pass pipeline failed")?;

    // TypeInferPass has an internal fixedpoint loop that can diverge on
    // real-world IR produced by the x86 lifter. Run it with a bounded
    // iteration count until the root cause is fixed in unlace-passes.
    run_type_infer_bounded(ssa);

    tracing::debug!(changes, "pass pipeline complete");
    Ok(changes)
}

fn run_type_infer_bounded(ssa: &mut SsaFunction) {
    use unlace_ir::ssa::{PrimitiveType, SsaVarnode, VarnodeSlot};
    use unlace_ir::SpaceId;

    let max_iterations = 50;
    for _ in 0..max_iterations {
        let snapshot: BTreeMap<unlace_ir::ssa::SsaVarnode, unlace_ir::ssa::PrimitiveType> =
            ssa.var_types.clone();
        let before_len = ssa.var_types.len();

        for (&bid, block) in &ssa.function.blocks {
            for (insn_idx, insn) in block.insns.iter().enumerate() {
                let output_sv = ssa.var_map
                    .get(&(bid, insn_idx, VarnodeSlot::Output))
                    .copied();
                let input_sv = |idx: usize| -> Option<SsaVarnode> {
                    ssa.var_map
                        .get(&(bid, insn_idx, VarnodeSlot::Input(idx)))
                        .copied()
                };

                if let Some(out) = output_sv {
                    let ty = match insn.op.type_family() {
                        Some('b') => PrimitiveType::Bool,
                        Some('f') => {
                            if out.base.size == 4 { PrimitiveType::Float }
                            else { PrimitiveType::Double }
                        }
                        Some('i') | Some(_) => PrimitiveType::Int(out.base.size),
                        None => continue,
                    };
                    ssa.var_types.entry(out).or_insert(ty);
                }

                for (idx, inp) in insn.inputs.iter().enumerate() {
                    if inp.space == SpaceId::Const { continue; }
                    if let Some(sv) = input_sv(idx) {
                        let ty = match insn.op.input_type_family(idx) {
                            'b' => PrimitiveType::Bool,
                            'f' => {
                                if sv.base.size == 4 { PrimitiveType::Float }
                                else { PrimitiveType::Double }
                            }
                            _ => PrimitiveType::Int(sv.base.size),
                        };
                        ssa.var_types.entry(sv).or_insert(ty);
                    }
                }
            }
        }

        if ssa.var_types.len() == before_len && ssa.var_types == snapshot {
            break;
        }
    }
}

pub fn emit_output(
    format: EmitFormat,
    ssa: &SsaFunction,
) -> Result<String> {
    match format {
        EmitFormat::Ir => Ok(unlace_output::dump_ir(ssa)),
        EmitFormat::CfgDot => Ok(unlace_output::emit_cfg_dot(ssa)),
        EmitFormat::C => {
            let hir = unlace_struct::structure(ssa)
                .context("control-flow structuring failed")?;
            Ok(unlace_output::print_c(&hir))
        }
    }
}
