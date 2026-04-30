use std::collections::{BTreeMap, BTreeSet};
use std::fs;
use std::path::PathBuf;
use std::time::Duration;

use criterion::{Criterion, criterion_group, criterion_main};

use unlace_ir::ssa::SsaFunction;
use unlace_ir::{BasicBlock, BlockId, Function, IrOp, Lifter};
use unlace_lift::get_lifter;
use unlace_loader::{ElfLoader, Loader, SymbolKind};
use unlace_passes::{ConstantFoldPass, CopyPropagationPass, DeadCodeElimPass, Pass, run_to_fixedpoint};

fn fixture_path() -> PathBuf {
    let mut p = PathBuf::from(env!("CARGO_MANIFEST_DIR"));
    p.pop();
    p.pop();
    p.push("fixtures/medium.elf");
    p
}

fn load_image() -> unlace_loader::BinaryImage {
    let data = fs::read(fixture_path()).expect("failed to read medium.elf");
    assert!(ElfLoader::can_load(&data), "medium.elf is not a valid ELF");
    ElfLoader::load(&data).expect("failed to parse medium.elf")
}

struct FunctionEntry {
    name: String,
    addr: u64,
    size: u64,
}

fn discover_functions(image: &unlace_loader::BinaryImage) -> Vec<FunctionEntry> {
    image
        .symbols
        .values()
        .filter(|sym| sym.kind == SymbolKind::Function && sym.size > 0)
        .map(|sym| FunctionEntry {
            name: sym.name.clone(),
            addr: sym.addr,
            size: sym.size,
        })
        .collect()
}

const ENDBR64: [u8; 4] = [0xf3, 0x0f, 0x1e, 0xfa];
const PUSH_RBP_MOV_RBP_RSP: [u8; 4] = [0x55, 0x48, 0x89, 0xe5];
const SUB_RSP_IMM8: [u8; 3] = [0x48, 0x83, 0xec];

fn scan_for_prologues(image: &unlace_loader::BinaryImage) -> Vec<FunctionEntry> {
    let text = match image.section_by_name(".text") {
        Some(s) => s,
        None => return Vec::new(),
    };

    let data = &text.data;
    let base = text.vaddr;
    let mut addrs = BTreeSet::new();
    let mut idx = 0;

    while idx < data.len() {
        if idx + 4 <= data.len() && data[idx..idx + 4] == ENDBR64 {
            addrs.insert(base + idx as u64);
            idx += 4;
            continue;
        }
        if idx + 4 <= data.len() && data[idx..idx + 4] == PUSH_RBP_MOV_RBP_RSP {
            addrs.insert(base + idx as u64);
            idx += 4;
            continue;
        }
        if idx + 3 <= data.len() && data[idx..idx + 3] == SUB_RSP_IMM8 {
            addrs.insert(base + idx as u64);
            idx += 3;
            continue;
        }
        idx += 1;
    }

    let sorted: Vec<u64> = addrs.iter().copied().collect();
    let text_end = base + text.size;

    sorted
        .iter()
        .enumerate()
        .map(|(i, &addr)| {
            let next = sorted.get(i + 1).copied().unwrap_or(text_end);
            FunctionEntry {
                name: format!("sub_{addr:x}"),
                addr,
                size: next - addr,
            }
        })
        .collect()
}

fn discover_all_functions(image: &unlace_loader::BinaryImage) -> Vec<FunctionEntry> {
    let mut funcs = discover_functions(image);
    if funcs.is_empty() {
        funcs = scan_for_prologues(image);
    }
    if funcs.is_empty() {
        funcs.push(FunctionEntry {
            name: "entry".into(),
            addr: image.entry,
            size: 0,
        });
    }
    funcs
}

struct LiftedInsnRecord {
    addr: u64,
    #[allow(dead_code)]
    len: usize,
    ir_ops: Vec<unlace_ir::IrInsn>,
    is_terminator: bool,
}

fn is_terminator(op: IrOp) -> bool {
    matches!(op, IrOp::Branch | IrOp::Cbranch | IrOp::Branchind | IrOp::Return)
}

fn lift_function(
    image: &unlace_loader::BinaryImage,
    lifter: &dyn Lifter,
    entry: &FunctionEntry,
) -> Option<Function> {
    let text = image.section_by_name(".text")?;
    let start = entry.addr;
    let end = if entry.size > 0 { start + entry.size } else { text.vaddr + text.size };

    if start < text.vaddr || start >= text.vaddr + text.size {
        return None;
    }

    let offset_start = (start - text.vaddr) as usize;
    let offset_end = ((end - text.vaddr) as usize).min(text.data.len());
    let code = &text.data[offset_start..offset_end];

    let mut records = Vec::new();
    let mut offset = 0usize;
    while offset < code.len() {
        let addr = start + offset as u64;
        let remaining = &code[offset..];
        match lifter.lift_insn(remaining, addr) {
            Ok(lifted) => {
                let is_term = lifted.ir_ops.iter().any(|op| is_terminator(op.op));
                let len = lifted.len;
                let has_return = lifted.ir_ops.iter().any(|op| op.op == IrOp::Return);
                records.push(LiftedInsnRecord {
                    addr,
                    len,
                    ir_ops: lifted.ir_ops,
                    is_terminator: is_term,
                });
                offset += len;
                if is_term && has_return {
                    break;
                }
            }
            Err(_) => break,
        }
    }

    if records.is_empty() {
        return Some(Function::new(&entry.name, BlockId(0), start));
    }

    let mut block_starts: BTreeMap<u64, u32> = BTreeMap::new();
    block_starts.insert(start, 0);

    for (i, rec) in records.iter().enumerate() {
        if rec.is_terminator {
            if let Some(next) = records.get(i + 1) {
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

    let sorted_addrs: Vec<u64> = block_starts.keys().copied().collect();
    for (idx, addr) in sorted_addrs.iter().enumerate() {
        block_starts.insert(*addr, idx as u32);
    }

    let insn_addrs: Vec<u64> = records.iter().map(|r| r.addr).collect();
    let mut function = Function::new(&entry.name, BlockId(0), start);

    for (block_idx, &block_addr) in sorted_addrs.iter().enumerate() {
        let bid = BlockId(block_idx as u32);
        let mut bb = BasicBlock::new(bid);

        let start_pos = match insn_addrs.binary_search(&block_addr) {
            Ok(pos) => pos,
            Err(pos) => pos,
        };

        for rec in &records[start_pos..] {
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
                        }
                        _ => {}
                    }
                }
                break;
            }
        }

        function.insert_block(bb);
    }

    Some(function)
}

fn run_passes(ssa: &mut SsaFunction) -> usize {
    let fold = ConstantFoldPass;
    let prop = CopyPropagationPass;
    let dce = DeadCodeElimPass;
    let passes: &[&dyn Pass] = &[&fold, &prop, &dce];

    run_to_fixedpoint(passes, ssa).unwrap_or(0)
}

fn run_type_infer_bounded(ssa: &mut SsaFunction) {
    use unlace_ir::SpaceId;
    use unlace_ir::ssa::{PrimitiveType, SsaVarnode, VarnodeSlot};

    for _ in 0..50 {
        let before_len = ssa.var_types.len();
        let snapshot: BTreeMap<SsaVarnode, PrimitiveType> = ssa.var_types.clone();

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
                        Some(_) => PrimitiveType::Int(out.base.size),
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

fn bench_load(c: &mut Criterion) {
    let data = fs::read(fixture_path()).expect("failed to read medium.elf");

    c.bench_function("stage_load", |b| {
        b.iter(|| {
            let image = ElfLoader::load(&data).expect("parse failed");
            criterion::black_box(image);
        });
    });
}

fn bench_lift(c: &mut Criterion) {
    let image = load_image();
    let lifter = get_lifter(image.arch);
    let funcs = discover_all_functions(&image);

    c.bench_function("stage_lift", |b| {
        b.iter(|| {
            let mut lifted = Vec::new();
            for entry in &funcs {
                if let Some(f) = lift_function(&image, lifter.as_ref(), entry) {
                    lifted.push(f);
                }
            }
            criterion::black_box(lifted);
        });
    });
}

fn bench_ssa(c: &mut Criterion) {
    let image = load_image();
    let lifter = get_lifter(image.arch);
    let funcs = discover_all_functions(&image);
    let lifted: Vec<Function> = funcs
        .iter()
        .filter_map(|e| lift_function(&image, lifter.as_ref(), e))
        .collect();

    c.bench_function("stage_ssa", |b| {
        b.iter(|| {
            let ssas: Vec<SsaFunction> = lifted
                .iter()
                .cloned()
                .map(unlace_ir::ssa::build_ssa)
                .collect();
            criterion::black_box(ssas);
        });
    });
}

fn bench_passes(c: &mut Criterion) {
    let image = load_image();
    let lifter = get_lifter(image.arch);
    let funcs = discover_all_functions(&image);
    let lifted: Vec<Function> = funcs
        .iter()
        .filter_map(|e| lift_function(&image, lifter.as_ref(), e))
        .collect();

    c.bench_function("stage_passes", |b| {
        b.iter(|| {
            let mut ssas: Vec<SsaFunction> = lifted
                .iter()
                .cloned()
                .map(unlace_ir::ssa::build_ssa)
                .collect();
            for ssa in &mut ssas {
                run_passes(ssa);
                run_type_infer_bounded(ssa);
            }
            criterion::black_box(&ssas);
        });
    });
}

fn bench_structure(c: &mut Criterion) {
    let image = load_image();
    let lifter = get_lifter(image.arch);
    let funcs = discover_all_functions(&image);
    let lifted: Vec<Function> = funcs
        .iter()
        .filter_map(|e| lift_function(&image, lifter.as_ref(), e))
        .collect();
    let mut ssas: Vec<SsaFunction> = lifted
        .into_iter()
        .map(unlace_ir::ssa::build_ssa)
        .collect();
    for ssa in &mut ssas {
        run_passes(ssa);
        run_type_infer_bounded(ssa);
    }

    c.bench_function("stage_structure", |b| {
        b.iter(|| {
            for ssa in &ssas {
                let _ = unlace_struct::structure(ssa);
            }
        });
    });
}

fn bench_output(c: &mut Criterion) {
    let image = load_image();
    let lifter = get_lifter(image.arch);
    let funcs = discover_all_functions(&image);
    let lifted: Vec<Function> = funcs
        .iter()
        .filter_map(|e| lift_function(&image, lifter.as_ref(), e))
        .collect();
    let mut ssas: Vec<SsaFunction> = lifted
        .into_iter()
        .map(unlace_ir::ssa::build_ssa)
        .collect();
    for ssa in &mut ssas {
        run_passes(ssa);
        run_type_infer_bounded(ssa);
    }
    let hirs: Vec<_> = ssas
        .iter()
        .filter_map(|ssa| unlace_struct::structure(ssa).ok())
        .collect();

    c.bench_function("stage_output", |b| {
        b.iter(|| {
            let mut out = String::new();
            for hir in &hirs {
                out.push_str(&unlace_output::print_c(hir));
            }
            criterion::black_box(out);
        });
    });
}

fn bench_e2e(c: &mut Criterion) {
    let data = fs::read(fixture_path()).expect("failed to read medium.elf");

    c.bench_function("decompile_medium_e2e", |b| {
        b.iter(|| {
            let image = ElfLoader::load(&data).expect("parse failed");
            let lifter = get_lifter(image.arch);
            let funcs = discover_all_functions(&image);

            let mut output = String::new();
            for entry in &funcs {
                if let Some(ir_func) = lift_function(&image, lifter.as_ref(), &entry) {
                    let mut ssa = unlace_ir::ssa::build_ssa(ir_func);
                    run_passes(&mut ssa);
                    run_type_infer_bounded(&mut ssa);
                    if let Ok(hir) = unlace_struct::structure(&ssa) {
                        output.push_str(&unlace_output::print_c(&hir));
                    }
                }
            }
            criterion::black_box(output);
        });
    });
}

criterion_group! {
    name = per_stage;
    config = Criterion::default()
        .sample_size(10)
        .measurement_time(Duration::from_secs(30))
        .warm_up_time(Duration::from_secs(3));
    targets = bench_load, bench_lift, bench_ssa, bench_passes, bench_structure, bench_output
}

criterion_group! {
    name = end_to_end;
    config = Criterion::default()
        .sample_size(10)
        .measurement_time(Duration::from_secs(30))
        .warm_up_time(Duration::from_secs(3));
    targets = bench_e2e
}

criterion_main!(per_stage, end_to_end);
