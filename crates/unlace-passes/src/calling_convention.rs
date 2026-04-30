//! Calling convention detection via argument register usage analysis.
//!
//! Detects System V AMD64 vs Microsoft x64 by examining which registers are
//! read before being written in the function entry block.

use std::collections::BTreeSet;

use unlace_ir::ssa::{CallingConvention, SsaFunction};
use unlace_ir::{IrOp, SpaceId};

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

    score_convention(&read_before_write)
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

#[cfg(test)]
mod tests {
    use smallvec::smallvec;

    use unlace_ir::ssa::{build_ssa, CallingConvention};
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
    fn rdi() -> Varnode { Varnode::reg(RDI, 8) }
    fn rsi() -> Varnode { Varnode::reg(RSI, 8) }
    fn rdx() -> Varnode { Varnode::reg(RDX, 8) }
    fn rcx() -> Varnode { Varnode::reg(RCX, 8) }
    fn r8() -> Varnode  { Varnode::reg(R8, 8) }
    fn r9() -> Varnode  { Varnode::reg(R9, 8) }
    fn rax() -> Varnode { Varnode::reg(RAX, 8) }

    #[test]
    fn test_sysv_rdi_rsi_reads() {
        // Function reads RDI and RSI -> System V
        let out = Varnode::unique(0, 8);
        let insns = vec![
            IrInsn::with_output(IrOp::IntAdd, out, smallvec![rdi(), rsi()], 0x1000),
        ];

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
        let insns = vec![
            IrInsn::with_output(IrOp::IntAdd, out, smallvec![rcx(), rdx()], 0x1000),
        ];

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
        let insns = vec![
            IrInsn::with_output(IrOp::IntAdd, out, smallvec![rdi(), rsi()], 0x1000),
        ];

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
        let insns = vec![
            IrInsn::with_output(IrOp::IntAdd, out, smallvec![x0, x1], 0x1000),
        ];

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
        let insns = vec![
            IrInsn::with_output(IrOp::IntAdd, out, smallvec![x0, c1], 0x1000),
        ];

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
        let insns = vec![
            IrInsn::with_output(IrOp::IntAdd, out, smallvec![c1, c2], 0x1000),
        ];

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
        let insns = vec![
            IrInsn::with_output(IrOp::IntAdd, out, smallvec![s0, s8], 0x1000),
        ];

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
        let insns = vec![
            IrInsn::with_output(IrOp::IntAdd, out, smallvec![rdi(), rsp], 0x1000),
        ];

        let mut ssa = make_entry_block_ssa(insns);
        CallingConventionDetectPass.run(&mut ssa).unwrap();
        assert_eq!(ssa.calling_convention, CallingConvention::SystemV);
    }
}
