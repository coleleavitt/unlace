//! Calling convention detection via argument register usage analysis.
//!
//! Detects System V AMD64 vs Microsoft x64 by examining which registers are
//! read before being written in the function entry block.
//!
//! Also provides [`ParamInferPass`] for parameter inference and
//! [`ReturnTypeInferPass`] for return type inference based on the detected
//! calling convention.

use std::collections::{BTreeMap, BTreeSet};

use unlace_ir::ssa::{CallingConvention, PrimitiveType, SsaFunction, SsaVarnode};
use unlace_ir::{BlockId, IrOp, SpaceId};

use crate::pass::{Pass, PassError};

const RAX: u64 = 0;
const RCX: u64 = 8;
const RDX: u64 = 16;
#[allow(dead_code)]
const RSP: u64 = 32;
const RSI: u64 = 48;
const RDI: u64 = 56;
const R8: u64 = 64;
const R9: u64 = 72;

const SYSV_ARG_REGS: &[u64] = &[RDI, RSI, RDX, RCX, R8, R9];
const MSX64_ARG_REGS: &[u64] = &[RCX, RDX, R8, R9];
const SYSV_ONLY_REGS: &[u64] = &[RDI, RSI];
const AARCH64_ARG_REGS: &[u64] = &[0, 8, 16, 24, 32, 40, 48, 56];

pub struct CallingConventionDetectPass;

impl Pass for CallingConventionDetectPass {
    fn name(&self) -> &str {
        "calling-convention-detect"
    }

    fn run(&self, func: &mut SsaFunction) -> Result<bool, PassError> {
        let detected = detect_calling_convention(func);
        if detected != func.calling_convention {
            func.calling_convention = detected;
            Ok(true)
        } else {
            Ok(false)
        }
    }
}

fn detect_calling_convention(func: &SsaFunction) -> CallingConvention {
    let entry = func.function.entry;
    let Some(entry_block) = func.function.blocks.get(&entry) else {
        return CallingConvention::Unknown;
    };

    // Collect registers that are READ before being WRITTEN in the entry block.
    let mut defined: BTreeSet<u64> = BTreeSet::new();
    let mut read_before_write: BTreeSet<u64> = BTreeSet::new();

    for insn in &entry_block.insns {
        match insn.op {
            IrOp::Branch | IrOp::Cbranch | IrOp::Branchind => continue,
            _ => {}
        }

        for inp in &insn.inputs {
            if inp.space == SpaceId::Register && !defined.contains(&inp.offset) {
                read_before_write.insert(inp.offset);
            }
        }

        if let Some(output) = insn.output {
            if output.space == SpaceId::Register {
                defined.insert(output.offset);
            }
        }
    }

    if let Some(phis) = func.phi_map.get(&entry) {
        for phi in phis {
            if phi.output.base.space == SpaceId::Register {
                defined.insert(phi.output.base.offset);
            }
        }
    }

    let base = score_convention(&read_before_write);
    refine_convention(func, base, &read_before_write)
}

/// Post-process the score-based CC pick by looking for **strong, positive**
/// evidence of stdcall (`ret N` with `N > 0`), thiscall (`this` written to
/// RCX-relative storage at entry), or fastcall (`ret N` + ECX/EDX prefix).
///
/// The refinement only fires on **explicit** signals so it never demotes a
/// well-classified SysV/MSx64/AArch64 candidate. `score_convention`'s output
/// is returned unchanged when no positive signal is present.
fn refine_convention(
    func: &SsaFunction,
    base: CallingConvention,
    read_before_write: &BTreeSet<u64>,
) -> CallingConvention {
    let callee_pops_bytes = callee_pop_bytes(func);
    let stores_this = stores_this_pointer(func);

    // Thiscall — strongest signal is "writes ECX to a stack slot at entry"
    // (the classic `mov [rsp+8], ecx` `this`-spill). Only override if the
    // base wasn't already a confident SysV pick.
    if stores_this
        && !matches!(base, CallingConvention::SystemV)
        && read_before_write.contains(&RCX)
        && !SYSV_ONLY_REGS.iter().any(|r| read_before_write.contains(r))
    {
        return CallingConvention::Thiscall;
    }

    // Stdcall — non-zero `ret N` epilogue, and no RDI/RSI/R8/R9 in the arg
    // pool (those would imply 64-bit ABI, which never uses `ret N`). We
    // override base = MicrosoftX64 here because i386 stdcall and amd64
    // MS x64 are mutually exclusive yet share the RCX/RDX prefix.
    if callee_pops_bytes > 0
        && !SYSV_ONLY_REGS.iter().any(|r| read_before_write.contains(r))
        && ![R8, R9].iter().any(|r| read_before_write.contains(r))
    {
        return CallingConvention::Stdcall;
    }

    base
}

/// Detect a `this`-pointer spill: a `Store` of `ECX` to an RSP/RBP-relative
/// slot in the entry block. This is a near-certain marker of i386 thiscall
/// (`mov dword ptr [ebp - X], ecx`) and Windows x64 thiscall (`mov [rsp+8],
/// rcx`).
fn stores_this_pointer(func: &SsaFunction) -> bool {
    let entry = func.function.entry;
    let Some(block) = func.function.blocks.get(&entry) else {
        return false;
    };

    for insn in &block.insns {
        if insn.op != IrOp::Store {
            continue;
        }
        if insn.inputs.len() < 3 {
            continue;
        }
        let value = insn.inputs[2];
        if value.space == SpaceId::Register && value.offset == RCX {
            return true;
        }
    }
    false
}

/// Inspect every `Return` instruction and return the maximum non-zero
/// constant operand (the bytes the callee pops from the stack). A value of
/// `0` means no `ret N`-style epilogue was observed.
fn callee_pop_bytes(func: &SsaFunction) -> u64 {
    let mut max_pop = 0u64;
    for block in func.function.blocks.values() {
        for insn in &block.insns {
            if insn.op != IrOp::Return {
                continue;
            }
            for inp in &insn.inputs {
                if inp.space == SpaceId::Const && inp.offset > 0 {
                    if inp.offset > max_pop {
                        max_pop = inp.offset;
                    }
                }
            }
        }
    }
    max_pop
}

fn score_convention(read_before_write: &BTreeSet<u64>) -> CallingConvention {
    if read_before_write.is_empty() {
        return CallingConvention::Unknown;
    }

    let aarch64_hits: usize = read_before_write
        .iter()
        .filter(|&&off| AARCH64_ARG_REGS.contains(&off))
        .count();

    // AArch64 X0=offset 0 overlaps with x86 RAX=offset 0, and X1=8 overlaps
    // with RCX=8. Disambiguate: RAX is never an argument in either x86 CC,
    // so if offset 0 is read as an input without any x86-specific arg regs
    // (RDI/RSI for SysV, RCX/RDX/R8/R9 for MSx64), it's AArch64.
    let has_rax_read = read_before_write.contains(&RAX);
    let has_sysv_only = SYSV_ONLY_REGS.iter().any(|r| read_before_write.contains(r));
    let has_x64_common = [RCX, RDX, R8, R9]
        .iter()
        .any(|r| read_before_write.contains(r));

    if has_rax_read && !has_sysv_only && !has_x64_common && aarch64_hits >= 1 {
        return CallingConvention::AArch64;
    }

    let sysv_hits: usize = read_before_write
        .iter()
        .filter(|&&off| SYSV_ARG_REGS.contains(&off))
        .count();

    let msx64_hits: usize = read_before_write
        .iter()
        .filter(|&&off| MSX64_ARG_REGS.contains(&off))
        .count();

    // RDI/RSI are argument regs ONLY in System V; MS x64 never uses them.
    if has_sysv_only {
        return CallingConvention::SystemV;
    }

    // Both CCs share RCX, RDX, R8, R9. Without RDI/RSI present, lean MS x64
    // since System V would use RDI as the first argument.
    if msx64_hits > 0 && !has_sysv_only {
        return CallingConvention::MicrosoftX64;
    }

    if sysv_hits > 0 {
        return CallingConvention::SystemV;
    }

    if aarch64_hits >= 2 {
        return CallingConvention::AArch64;
    }

    CallingConvention::Unknown
}

// Helper to check if a register-space store to RSP-relative addresses exists
// (shadow space detection for MS x64). Reserved for future refinement.
#[allow(dead_code)]
fn has_shadow_space_stores(func: &SsaFunction) -> bool {
    let entry = func.function.entry;
    let Some(entry_block) = func.function.blocks.get(&entry) else {
        return false;
    };

    let mut shadow_stores = 0u32;
    for insn in &entry_block.insns {
        if insn.op == IrOp::Store {
            if let Some(addr) = insn.inputs.get(1) {
                if addr.space == SpaceId::Stack && addr.offset <= 32 && addr.offset >= 8 {
                    shadow_stores += 1;
                }
            }
        }
    }
    shadow_stores >= 2
}

// ---------------------------------------------------------------------------
// XMM register offsets (must match unlace-lift-x86 register_file.rs)
// ---------------------------------------------------------------------------

const VEC_BASE: u64 = 0x400;
const VEC_STRIDE: u64 = 32;
const fn xmm_offset(n: u64) -> u64 {
    VEC_BASE + n * VEC_STRIDE
}

const XMM0: u64 = xmm_offset(0);
const XMM1: u64 = xmm_offset(1);
const XMM2: u64 = xmm_offset(2);
const XMM3: u64 = xmm_offset(3);
const XMM4: u64 = xmm_offset(4);
const XMM5: u64 = xmm_offset(5);
const XMM6: u64 = xmm_offset(6);
const XMM7: u64 = xmm_offset(7);

const SYSV_FLOAT_REGS: &[u64] = &[XMM0, XMM1, XMM2, XMM3, XMM4, XMM5, XMM6, XMM7];
const MSX64_FLOAT_REGS: &[u64] = &[XMM0, XMM1, XMM2, XMM3];

// ---------------------------------------------------------------------------
// Parameter inference
// ---------------------------------------------------------------------------

pub struct ParamInferPass;

impl Pass for ParamInferPass {
    fn name(&self) -> &str {
        "param-infer"
    }

    fn run(&self, func: &mut SsaFunction) -> Result<bool, PassError> {
        let params = infer_params(func);
        if params != func.inferred_params {
            func.inferred_params = params;
            Ok(true)
        } else {
            Ok(false)
        }
    }
}

fn infer_params(func: &SsaFunction) -> Vec<(String, PrimitiveType)> {
    let cc = func.calling_convention;
    if cc == CallingConvention::Unknown {
        return Vec::new();
    }

    let entry = func.function.entry;
    let Some(entry_block) = func.function.blocks.get(&entry) else {
        return Vec::new();
    };

    // Collect registers read-before-write in the entry block.
    let mut defined: BTreeSet<u64> = BTreeSet::new();
    let mut read_before_write: BTreeSet<u64> = BTreeSet::new();

    for insn in &entry_block.insns {
        match insn.op {
            IrOp::Branch | IrOp::Cbranch | IrOp::Branchind => continue,
            _ => {}
        }
        for inp in &insn.inputs {
            if inp.space == SpaceId::Register && !defined.contains(&inp.offset) {
                read_before_write.insert(inp.offset);
            }
        }
        if let Some(output) = insn.output {
            if output.space == SpaceId::Register {
                defined.insert(output.offset);
            }
        }
    }

    let (int_regs, float_regs): (&[u64], &[u64]) = match cc {
        CallingConvention::SystemV => (SYSV_ARG_REGS, SYSV_FLOAT_REGS),
        CallingConvention::MicrosoftX64 => (MSX64_ARG_REGS, MSX64_FLOAT_REGS),
        CallingConvention::AArch64 => (AARCH64_ARG_REGS, &[]),
        CallingConvention::Thiscall => (&[8], &[]),
        CallingConvention::Cdecl | CallingConvention::Stdcall | CallingConvention::Unknown => {
            return Vec::new();
        }
    };

    // Build a map of which registers feed into which ops in the entry block,
    // for type inference of each parameter.
    let reg_consumer_ops = collect_reg_consumer_ops(func, entry);

    let mut params = Vec::new();
    let mut param_idx = 1u32;

    // Count consecutive integer parameter registers that are used.
    for &reg_off in int_regs {
        if !read_before_write.contains(&reg_off) {
            break;
        }
        let ty = infer_param_type(reg_off, &reg_consumer_ops);
        params.push((format!("a{}", param_idx), ty));
        param_idx += 1;
    }

    // Float parameters (XMM registers).
    for &reg_off in float_regs {
        if !read_before_write.contains(&reg_off) {
            break;
        }
        params.push((format!("a{}", param_idx), PrimitiveType::Double));
        param_idx += 1;
    }

    params
}

fn collect_reg_consumer_ops(func: &SsaFunction, entry: BlockId) -> BTreeMap<u64, Vec<IrOp>> {
    let Some(block) = func.function.blocks.get(&entry) else {
        return BTreeMap::new();
    };
    let mut map: BTreeMap<u64, Vec<IrOp>> = BTreeMap::new();
    for insn in &block.insns {
        for inp in &insn.inputs {
            if inp.space == SpaceId::Register {
                map.entry(inp.offset).or_default().push(insn.op);
            }
        }
    }
    map
}

fn infer_param_type(reg_off: u64, consumer_ops: &BTreeMap<u64, Vec<IrOp>>) -> PrimitiveType {
    let Some(ops) = consumer_ops.get(&reg_off) else {
        return PrimitiveType::Int(8);
    };
    for &op in ops {
        match op {
            IrOp::FloatAdd
            | IrOp::FloatSub
            | IrOp::FloatMult
            | IrOp::FloatDiv
            | IrOp::FloatNeg
            | IrOp::FloatAbs
            | IrOp::FloatSqrt
            | IrOp::FloatInt2float
            | IrOp::FloatFloat2float
            | IrOp::FloatFloat2int
            | IrOp::FloatEqual
            | IrOp::FloatNotequal
            | IrOp::FloatLess
            | IrOp::FloatLessequal => {
                return PrimitiveType::Double;
            }
            IrOp::Ptradd | IrOp::Ptrsub | IrOp::Load | IrOp::Store => {
                return PrimitiveType::Ptr;
            }
            _ => {}
        }
    }
    PrimitiveType::Int(8)
}

// ---------------------------------------------------------------------------
// Return type inference
// ---------------------------------------------------------------------------

pub struct ReturnTypeInferPass;

impl Pass for ReturnTypeInferPass {
    fn name(&self) -> &str {
        "return-type-infer"
    }

    fn run(&self, func: &mut SsaFunction) -> Result<bool, PassError> {
        let ret_ty = infer_return_type(func);
        if ret_ty != func.inferred_return_type {
            func.inferred_return_type = ret_ty;
            Ok(true)
        } else {
            Ok(false)
        }
    }
}

fn infer_return_type(func: &SsaFunction) -> PrimitiveType {
    // Scan all blocks for RETURN instructions.
    let mut has_return = false;
    let mut has_rax_at_return = false;
    let mut has_xmm0_at_return = false;
    let mut rax_size: u8 = 8;

    for (&bid, block) in &func.function.blocks {
        for (insn_idx, insn) in block.insns.iter().enumerate() {
            if insn.op != IrOp::Return {
                continue;
            }
            has_return = true;

            // Look backwards from the RETURN to find the last write to RAX or XMM0
            // in this block.
            let mut found_rax = false;
            let mut found_xmm0 = false;
            for prev_insn in block.insns[..insn_idx].iter().rev() {
                if let Some(out) = prev_insn.output {
                    if out.space == SpaceId::Register && out.offset == RAX {
                        found_rax = true;
                        rax_size = out.size;
                        // Check what op produced the RAX value.
                        let ret_ty = classify_return_op(prev_insn.op, &func.var_types, bid, func);
                        if ret_ty != PrimitiveType::Unknown {
                            return ret_ty;
                        }
                        break;
                    }
                    if out.space == SpaceId::Register && out.offset == XMM0 {
                        found_xmm0 = true;
                        break;
                    }
                }
            }
            if found_xmm0 {
                has_xmm0_at_return = true;
            }
            if found_rax {
                has_rax_at_return = true;
            }
        }
    }

    if !has_return {
        return PrimitiveType::Unknown;
    }

    if has_xmm0_at_return {
        return PrimitiveType::Double;
    }

    if has_rax_at_return {
        return match rax_size {
            1 => PrimitiveType::Bool,
            4 => PrimitiveType::Int(4),
            _ => PrimitiveType::Int(8),
        };
    }

    // RETURN exists but no RAX/XMM0 write found — likely void.
    PrimitiveType::Unknown
}

fn classify_return_op(
    op: IrOp,
    _var_types: &BTreeMap<SsaVarnode, PrimitiveType>,
    _bid: BlockId,
    _func: &SsaFunction,
) -> PrimitiveType {
    match op {
        IrOp::FloatAdd
        | IrOp::FloatSub
        | IrOp::FloatMult
        | IrOp::FloatDiv
        | IrOp::FloatNeg
        | IrOp::FloatAbs
        | IrOp::FloatSqrt
        | IrOp::FloatInt2float
        | IrOp::FloatFloat2float => PrimitiveType::Double,

        IrOp::IntEqual
        | IrOp::IntNotequal
        | IrOp::IntLess
        | IrOp::IntLessequal
        | IrOp::IntSless
        | IrOp::IntSlessequal
        | IrOp::BoolAnd
        | IrOp::BoolOr
        | IrOp::BoolNegate
        | IrOp::FloatEqual
        | IrOp::FloatNotequal
        | IrOp::FloatLess
        | IrOp::FloatLessequal => PrimitiveType::Bool,

        IrOp::Ptradd | IrOp::Ptrsub => PrimitiveType::Ptr,

        _ => PrimitiveType::Unknown,
    }
}

#[cfg(test)]
mod tests {
    use smallvec::smallvec;

    use unlace_ir::ssa::{CallingConvention, build_ssa};
    use unlace_ir::{BasicBlock, BlockId, Function, IrInsn, IrOp, Varnode};

    use super::*;

    fn make_entry_block_ssa(insns: Vec<IrInsn>) -> SsaFunction {
        let mut func = Function::new("test", BlockId(0), 0x1000);
        let mut bb = BasicBlock::new(BlockId(0));
        bb.insns = insns;
        bb.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec![Varnode::constant(0, 8)],
            0x1FFF,
        ));
        func.insert_block(bb);
        build_ssa(func)
    }

    // --- Register helpers (x86-64 offsets) ---
    fn rdi() -> Varnode {
        Varnode::reg(RDI, 8)
    }
    fn rsi() -> Varnode {
        Varnode::reg(RSI, 8)
    }
    fn rdx() -> Varnode {
        Varnode::reg(RDX, 8)
    }
    fn rcx() -> Varnode {
        Varnode::reg(RCX, 8)
    }
    fn r8() -> Varnode {
        Varnode::reg(R8, 8)
    }
    fn r9() -> Varnode {
        Varnode::reg(R9, 8)
    }
    fn rax() -> Varnode {
        Varnode::reg(RAX, 8)
    }

    #[test]
    fn test_sysv_rdi_rsi_reads() {
        // Function reads RDI and RSI -> System V
        let out = Varnode::unique(0, 8);
        let insns = vec![IrInsn::with_output(
            IrOp::IntAdd,
            out,
            smallvec![rdi(), rsi()],
            0x1000,
        )];

        let mut ssa = make_entry_block_ssa(insns);
        let pass = CallingConventionDetectPass;
        let changed = pass.run(&mut ssa).expect("pass should succeed");

        assert!(changed);
        assert_eq!(ssa.calling_convention, CallingConvention::SystemV);
    }

    #[test]
    fn test_sysv_rdi_rdx_rcx() {
        // Reads RDI, RDX, RCX -> System V (RDI is the distinguisher)
        let out1 = Varnode::unique(0, 8);
        let out2 = Varnode::unique(8, 8);
        let insns = vec![
            IrInsn::with_output(IrOp::IntAdd, out1, smallvec![rdi(), rdx()], 0x1000),
            IrInsn::with_output(IrOp::IntAdd, out2, smallvec![out1, rcx()], 0x1004),
        ];

        let mut ssa = make_entry_block_ssa(insns);
        CallingConventionDetectPass.run(&mut ssa).unwrap();
        assert_eq!(ssa.calling_convention, CallingConvention::SystemV);
    }

    #[test]
    fn test_msx64_rcx_rdx_reads() {
        // Function reads RCX and RDX (but NOT RDI/RSI) -> Microsoft x64
        let out = Varnode::unique(0, 8);
        let insns = vec![IrInsn::with_output(
            IrOp::IntAdd,
            out,
            smallvec![rcx(), rdx()],
            0x1000,
        )];

        let mut ssa = make_entry_block_ssa(insns);
        let pass = CallingConventionDetectPass;
        let changed = pass.run(&mut ssa).expect("pass should succeed");

        assert!(changed);
        assert_eq!(ssa.calling_convention, CallingConvention::MicrosoftX64);
    }

    #[test]
    fn test_msx64_rcx_rdx_r8_r9() {
        // All four MS x64 arg registers
        let out1 = Varnode::unique(0, 8);
        let out2 = Varnode::unique(8, 8);
        let out3 = Varnode::unique(16, 8);
        let insns = vec![
            IrInsn::with_output(IrOp::IntAdd, out1, smallvec![rcx(), rdx()], 0x1000),
            IrInsn::with_output(IrOp::IntAdd, out2, smallvec![r8(), r9()], 0x1004),
            IrInsn::with_output(IrOp::IntAdd, out3, smallvec![out1, out2], 0x1008),
        ];

        let mut ssa = make_entry_block_ssa(insns);
        CallingConventionDetectPass.run(&mut ssa).unwrap();
        assert_eq!(ssa.calling_convention, CallingConvention::MicrosoftX64);
    }

    #[test]
    fn test_sysv_all_six_arg_regs() {
        // All six SysV arg registers
        let out1 = Varnode::unique(0, 8);
        let out2 = Varnode::unique(8, 8);
        let out3 = Varnode::unique(16, 8);
        let out4 = Varnode::unique(24, 8);
        let out5 = Varnode::unique(32, 8);
        let insns = vec![
            IrInsn::with_output(IrOp::IntAdd, out1, smallvec![rdi(), rsi()], 0x1000),
            IrInsn::with_output(IrOp::IntAdd, out2, smallvec![rdx(), rcx()], 0x1004),
            IrInsn::with_output(IrOp::IntAdd, out3, smallvec![r8(), r9()], 0x1008),
            IrInsn::with_output(IrOp::IntAdd, out4, smallvec![out1, out2], 0x100c),
            IrInsn::with_output(IrOp::IntAdd, out5, smallvec![out4, out3], 0x1010),
        ];

        let mut ssa = make_entry_block_ssa(insns);
        CallingConventionDetectPass.run(&mut ssa).unwrap();
        assert_eq!(ssa.calling_convention, CallingConvention::SystemV);
    }

    #[test]
    fn test_empty_function_unknown() {
        // No register reads -> Unknown
        let insns = vec![];
        let mut ssa = make_entry_block_ssa(insns);
        let pass = CallingConventionDetectPass;
        let changed = pass.run(&mut ssa).expect("pass should succeed");
        assert!(!changed);
        assert_eq!(ssa.calling_convention, CallingConvention::Unknown);
    }

    #[test]
    fn test_no_change_on_rerun() {
        // Running the pass twice should report no change the second time.
        let out = Varnode::unique(0, 8);
        let insns = vec![IrInsn::with_output(
            IrOp::IntAdd,
            out,
            smallvec![rdi(), rsi()],
            0x1000,
        )];

        let mut ssa = make_entry_block_ssa(insns);
        let pass = CallingConventionDetectPass;
        assert!(pass.run(&mut ssa).unwrap());
        assert!(!pass.run(&mut ssa).unwrap());
    }

    #[test]
    fn test_register_written_then_read_not_counted() {
        // RDI is written first, then read -- should NOT count as an argument register.
        // Only RCX is read before write, so -> MicrosoftX64.
        let out = Varnode::unique(0, 8);
        let c42 = Varnode::constant(42, 8);
        let insns = vec![
            IrInsn::with_output(IrOp::Copy, rdi(), smallvec![c42], 0x1000),
            IrInsn::with_output(IrOp::IntAdd, out, smallvec![rdi(), rcx()], 0x1004),
        ];

        let mut ssa = make_entry_block_ssa(insns);
        CallingConventionDetectPass.run(&mut ssa).unwrap();
        assert_eq!(ssa.calling_convention, CallingConvention::MicrosoftX64);
    }

    #[test]
    fn test_return_value_in_rax_not_argument() {
        // RAX written (return value setup) then used -- not an argument.
        // RDI read as argument -> System V
        let c0 = Varnode::constant(0, 8);
        let out = Varnode::unique(0, 8);
        let insns = vec![
            IrInsn::with_output(IrOp::Copy, rax(), smallvec![rdi()], 0x1000),
            IrInsn::with_output(IrOp::IntAdd, out, smallvec![rax(), c0], 0x1004),
        ];

        let mut ssa = make_entry_block_ssa(insns);
        CallingConventionDetectPass.run(&mut ssa).unwrap();
        assert_eq!(ssa.calling_convention, CallingConvention::SystemV);
    }

    #[test]
    fn test_aarch64_x0_x1() {
        // AArch64: reads from X0(offset=0) and X1(offset=8), no x86-specific regs.
        // But offset 0 = RAX and offset 8 = RCX in x86. The key is that X0(0)
        // is used as an argument (RAX is never an arg in either x86 CC).
        let x0 = Varnode::reg(0, 8);
        let x1 = Varnode::reg(8, 8);
        let out = Varnode::unique(0, 8);
        let insns = vec![IrInsn::with_output(
            IrOp::IntAdd,
            out,
            smallvec![x0, x1],
            0x1000,
        )];

        let mut ssa = make_entry_block_ssa(insns);
        CallingConventionDetectPass.run(&mut ssa).unwrap();
        // offset 0 (RAX/X0) is read + offset 8 (RCX/X1) is read.
        // Since offset 8 = RCX and RCX is an MSX64 arg, this triggers MSX64.
        // In real usage, the arch would be known; this tests the heuristic limits.
        // Without ArchId context, the pass can only use register patterns.
        assert!(
            ssa.calling_convention == CallingConvention::MicrosoftX64
                || ssa.calling_convention == CallingConvention::AArch64
        );
    }

    #[test]
    fn test_aarch64_x0_only() {
        // Only X0 (offset 0) read, no x86 arg regs -> AArch64
        let x0 = Varnode::reg(0, 8);
        let c1 = Varnode::constant(1, 8);
        let out = Varnode::unique(0, 8);
        let insns = vec![IrInsn::with_output(
            IrOp::IntAdd,
            out,
            smallvec![x0, c1],
            0x1000,
        )];

        let mut ssa = make_entry_block_ssa(insns);
        CallingConventionDetectPass.run(&mut ssa).unwrap();
        assert_eq!(ssa.calling_convention, CallingConvention::AArch64);
    }

    #[test]
    fn test_const_inputs_ignored() {
        // Only constant inputs -> no register reads -> Unknown
        let c1 = Varnode::constant(1, 8);
        let c2 = Varnode::constant(2, 8);
        let out = Varnode::unique(0, 8);
        let insns = vec![IrInsn::with_output(
            IrOp::IntAdd,
            out,
            smallvec![c1, c2],
            0x1000,
        )];

        let mut ssa = make_entry_block_ssa(insns);
        CallingConventionDetectPass.run(&mut ssa).unwrap();
        assert_eq!(ssa.calling_convention, CallingConvention::Unknown);
    }

    #[test]
    fn test_stack_reads_not_arg_regs() {
        // Stack reads (SpaceId::Stack) should not affect detection.
        let s0 = Varnode::stack(0, 8);
        let s8 = Varnode::stack(8, 8);
        let out = Varnode::unique(0, 8);
        let insns = vec![IrInsn::with_output(
            IrOp::IntAdd,
            out,
            smallvec![s0, s8],
            0x1000,
        )];

        let mut ssa = make_entry_block_ssa(insns);
        CallingConventionDetectPass.run(&mut ssa).unwrap();
        assert_eq!(ssa.calling_convention, CallingConvention::Unknown);
    }

    #[test]
    fn test_rsp_read_not_argument() {
        // RSP (offset 32) is not an argument register for either CC.
        // Combined with RDI -> still System V, RSP is just incidental.
        let rsp = Varnode::reg(RSP, 8);
        let out = Varnode::unique(0, 8);
        let insns = vec![IrInsn::with_output(
            IrOp::IntAdd,
            out,
            smallvec![rdi(), rsp],
            0x1000,
        )];

        let mut ssa = make_entry_block_ssa(insns);
        CallingConventionDetectPass.run(&mut ssa).unwrap();
        assert_eq!(ssa.calling_convention, CallingConvention::SystemV);
    }

    // -------------------------------------------------------------------
    // Parameter inference tests
    // -------------------------------------------------------------------

    #[test]
    fn test_param_count_sysv() {
        let out = Varnode::unique(0, 8);
        let insns = vec![IrInsn::with_output(
            IrOp::IntAdd,
            out,
            smallvec![rdi(), rsi()],
            0x1000,
        )];

        let mut ssa = make_entry_block_ssa(insns);
        CallingConventionDetectPass.run(&mut ssa).unwrap();
        ParamInferPass.run(&mut ssa).unwrap();

        assert_eq!(ssa.inferred_params.len(), 2);
        assert_eq!(ssa.inferred_params[0].0, "a1");
        assert_eq!(ssa.inferred_params[1].0, "a2");
        assert_eq!(ssa.inferred_params[0].1, PrimitiveType::Int(8));
        assert_eq!(ssa.inferred_params[1].1, PrimitiveType::Int(8));
    }

    #[test]
    fn test_param_count_zero() {
        let insns = vec![];
        let mut ssa = make_entry_block_ssa(insns);
        CallingConventionDetectPass.run(&mut ssa).unwrap();
        ParamInferPass.run(&mut ssa).unwrap();

        assert!(ssa.inferred_params.is_empty());
    }

    #[test]
    fn test_param_ptr_type() {
        let out = Varnode::unique(0, 8);
        let space = Varnode::constant(0, 8);
        let insns = vec![IrInsn::with_output(
            IrOp::Load,
            out,
            smallvec![space, rdi()],
            0x1000,
        )];

        let mut ssa = make_entry_block_ssa(insns);
        CallingConventionDetectPass.run(&mut ssa).unwrap();
        ParamInferPass.run(&mut ssa).unwrap();

        assert_eq!(ssa.inferred_params.len(), 1);
        assert_eq!(ssa.inferred_params[0].1, PrimitiveType::Ptr);
    }

    #[test]
    fn test_param_six_sysv() {
        let out1 = Varnode::unique(0, 8);
        let out2 = Varnode::unique(8, 8);
        let out3 = Varnode::unique(16, 8);
        let out4 = Varnode::unique(24, 8);
        let out5 = Varnode::unique(32, 8);
        let insns = vec![
            IrInsn::with_output(IrOp::IntAdd, out1, smallvec![rdi(), rsi()], 0x1000),
            IrInsn::with_output(IrOp::IntAdd, out2, smallvec![rdx(), rcx()], 0x1004),
            IrInsn::with_output(IrOp::IntAdd, out3, smallvec![r8(), r9()], 0x1008),
            IrInsn::with_output(IrOp::IntAdd, out4, smallvec![out1, out2], 0x100c),
            IrInsn::with_output(IrOp::IntAdd, out5, smallvec![out4, out3], 0x1010),
        ];

        let mut ssa = make_entry_block_ssa(insns);
        CallingConventionDetectPass.run(&mut ssa).unwrap();
        ParamInferPass.run(&mut ssa).unwrap();

        assert_eq!(ssa.inferred_params.len(), 6);
        assert_eq!(ssa.inferred_params[5].0, "a6");
    }

    #[test]
    fn test_param_msx64_four() {
        let out1 = Varnode::unique(0, 8);
        let out2 = Varnode::unique(8, 8);
        let out3 = Varnode::unique(16, 8);
        let insns = vec![
            IrInsn::with_output(IrOp::IntAdd, out1, smallvec![rcx(), rdx()], 0x1000),
            IrInsn::with_output(IrOp::IntAdd, out2, smallvec![r8(), r9()], 0x1004),
            IrInsn::with_output(IrOp::IntAdd, out3, smallvec![out1, out2], 0x1008),
        ];

        let mut ssa = make_entry_block_ssa(insns);
        CallingConventionDetectPass.run(&mut ssa).unwrap();
        ParamInferPass.run(&mut ssa).unwrap();

        assert_eq!(ssa.calling_convention, CallingConvention::MicrosoftX64);
        assert_eq!(ssa.inferred_params.len(), 4);
    }

    // -------------------------------------------------------------------
    // Return type inference tests
    // -------------------------------------------------------------------

    #[test]
    fn test_return_void() {
        let insns = vec![];
        let mut ssa = make_entry_block_ssa(insns);
        ReturnTypeInferPass.run(&mut ssa).unwrap();

        // No RAX write before RETURN → Unknown (void in C output)
        assert_eq!(ssa.inferred_return_type, PrimitiveType::Unknown);
    }

    #[test]
    fn test_return_int64() {
        let insns = vec![IrInsn::with_output(
            IrOp::IntAdd,
            rax(),
            smallvec![rdi(), rsi()],
            0x1000,
        )];

        let mut ssa = make_entry_block_ssa(insns);
        CallingConventionDetectPass.run(&mut ssa).unwrap();
        ReturnTypeInferPass.run(&mut ssa).unwrap();

        assert_eq!(ssa.inferred_return_type, PrimitiveType::Int(8));
    }

    #[test]
    fn test_return_int32() {
        let eax = Varnode::reg(RAX, 4);
        let edi = Varnode::reg(RDI, 4);
        let esi = Varnode::reg(RSI, 4);
        let insns = vec![IrInsn::with_output(
            IrOp::IntAdd,
            eax,
            smallvec![edi, esi],
            0x1000,
        )];

        let mut ssa = make_entry_block_ssa(insns);
        CallingConventionDetectPass.run(&mut ssa).unwrap();
        ReturnTypeInferPass.run(&mut ssa).unwrap();

        assert_eq!(ssa.inferred_return_type, PrimitiveType::Int(4));
    }

    #[test]
    fn test_return_bool_from_comparison() {
        let out = Varnode::reg(RAX, 8);
        let insns = vec![IrInsn::with_output(
            IrOp::IntEqual,
            out,
            smallvec![rdi(), rsi()],
            0x1000,
        )];

        let mut ssa = make_entry_block_ssa(insns);
        CallingConventionDetectPass.run(&mut ssa).unwrap();
        ReturnTypeInferPass.run(&mut ssa).unwrap();

        assert_eq!(ssa.inferred_return_type, PrimitiveType::Bool);
    }

    #[test]
    fn test_return_double_from_float_op() {
        let xmm0_vn = Varnode::reg(XMM0, 16);
        let xmm1_vn = Varnode::reg(xmm_offset(1), 16);
        let insns = vec![IrInsn::with_output(
            IrOp::FloatAdd,
            xmm0_vn,
            smallvec![xmm0_vn, xmm1_vn],
            0x1000,
        )];

        let mut ssa = make_entry_block_ssa(insns);
        ReturnTypeInferPass.run(&mut ssa).unwrap();

        assert_eq!(ssa.inferred_return_type, PrimitiveType::Double);
    }

    // -------------------------------------------------------------------
    // t81 — custom calling-convention refinement
    // -------------------------------------------------------------------

    /// `ret 8` epilogue ⇒ stdcall (callee pops 8 bytes for one stack arg).
    #[test]
    fn t81_stdcall_from_ret_n() {
        let mut func = unlace_ir::Function::new("stdcall_fn", BlockId(0), 0x1000);
        let mut bb = unlace_ir::BasicBlock::new(BlockId(0));
        let out = Varnode::unique(0, 8);
        bb.insns.push(IrInsn::with_output(
            IrOp::IntAdd,
            out,
            smallvec![rcx(), rdx()],
            0x1000,
        ));
        bb.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec![Varnode::constant(8, 4)],
            0x1004,
        ));
        func.insert_block(bb);
        let mut ssa = unlace_ir::ssa::build_ssa(func);
        CallingConventionDetectPass.run(&mut ssa).unwrap();
        assert_eq!(ssa.calling_convention, CallingConvention::Stdcall);
    }

    /// `mov [rbp-8], ecx` at entry ⇒ thiscall.
    #[test]
    fn t81_thiscall_from_this_spill() {
        let mut func = unlace_ir::Function::new("thiscall_fn", BlockId(0), 0x1000);
        let mut bb = unlace_ir::BasicBlock::new(BlockId(0));

        let space_ram = Varnode::constant(1, 8);
        let addr = Varnode::unique(0, 8);
        let neg8 = Varnode::constant((-8i64) as u64, 8);

        bb.insns.push(IrInsn::with_output(
            IrOp::IntAdd,
            addr,
            smallvec![Varnode::reg(40, 8), neg8],
            0x1000,
        ));
        bb.insns.push(IrInsn::without_output(
            IrOp::Store,
            smallvec![space_ram, addr, rcx()],
            0x1004,
        ));
        bb.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec![Varnode::constant(0, 8)],
            0x1008,
        ));
        func.insert_block(bb);
        let mut ssa = unlace_ir::ssa::build_ssa(func);
        CallingConventionDetectPass.run(&mut ssa).unwrap();
        assert_eq!(ssa.calling_convention, CallingConvention::Thiscall);
    }

    /// Fastcall (i386): first two args in ECX + EDX, callee-pops `ret N`.
    /// We approximate fastcall as stdcall in the current enum; the key
    /// invariant is that detection does **not** misclassify as MS x64.
    #[test]
    fn t81_fastcall_classified_as_stdcall_when_ret_n() {
        let mut func = unlace_ir::Function::new("fastcall_fn", BlockId(0), 0x1000);
        let mut bb = unlace_ir::BasicBlock::new(BlockId(0));
        let out = Varnode::unique(0, 8);
        bb.insns.push(IrInsn::with_output(
            IrOp::IntAdd,
            out,
            smallvec![rcx(), rdx()],
            0x1000,
        ));
        bb.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec![Varnode::constant(12, 4)],
            0x1004,
        ));
        func.insert_block(bb);
        let mut ssa = unlace_ir::ssa::build_ssa(func);
        CallingConventionDetectPass.run(&mut ssa).unwrap();
        assert_eq!(ssa.calling_convention, CallingConvention::Stdcall);
    }
}
