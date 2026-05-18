//! Direct-call argument recovery.
//!
//! The lifters model a `CALL` as an opaque control-flow operation whose first
//! input is the callee target. ABI arguments are usually just preceding writes
//! into register slots (`RDI`, `RSI`, ...), so ordinary DCE can drop them before
//! the C printer has a chance to show `puts("Hello")` rather than `puts()`.
//!
//! This helper runs before optimization: when a direct call resolves to a known
//! libc signature, it appends the visible ABI arguments to the call inputs.

use std::collections::BTreeMap;

use unlace_ir::ssa::{CallingConvention, SsaFunction, SsaVarnode, VarnodeSlot};
use unlace_ir::{ArchId, BlockId, IrOp, SpaceId, Varnode};

use crate::libc_signatures::{LibcSignature, lookup_libc};

const RAX: u64 = 0;
const RCX: u64 = 8;
const RDX: u64 = 16;
const RSI: u64 = 48;
const RDI: u64 = 56;
const R8: u64 = 64;
const R9: u64 = 72;
const RIP: u64 = 128;

const SYSV_ARG_REGS: &[u64] = &[RDI, RSI, RDX, RCX, R8, R9];
const MSX64_ARG_REGS: &[u64] = &[RCX, RDX, R8, R9];
const AARCH64_ARG_REGS: &[u64] = &[0, 8, 16, 24, 32, 40, 48, 56];

#[derive(Clone, Debug)]
struct RecoveredArg {
    operand: Varnode,
    ssa: Option<SsaVarnode>,
}

#[derive(Clone, Debug)]
struct CallUpdate {
    bid: BlockId,
    insn_idx: usize,
    args: Vec<RecoveredArg>,
}

/// Append visible ABI arguments to direct calls with known libc signatures.
///
/// The resolver maps a constant call target address to its import/symbol name.
/// Returns the number of call sites that received at least one new argument.
pub fn recover_direct_call_args(
    func: &mut SsaFunction,
    callee_name_at_addr: &dyn Fn(u64) -> Option<&'static str>,
) -> usize {
    let def_map = build_def_map(func);
    let cc = calling_convention_for(func);
    let arg_regs = arg_regs_for(cc);
    if arg_regs.is_empty() {
        return 0;
    }

    let mut updates = Vec::new();
    for (&bid, block) in &func.function.blocks {
        let mut last_reg_def: BTreeMap<u64, SsaVarnode> = BTreeMap::new();

        for (insn_idx, insn) in block.insns.iter().enumerate() {
            if insn.op == IrOp::Call
                && let Some(target) = insn.inputs.first()
                && target.space == SpaceId::Const
                && let Some(raw_name) = callee_name_at_addr(target.offset)
                && let Some(sig) = lookup_libc_normalized(raw_name)
            {
                let wanted = wanted_arg_count(sig, arg_regs, &last_reg_def);
                let existing = insn.inputs.len().saturating_sub(1);
                if wanted > existing {
                    let mut args = Vec::new();
                    for &reg in arg_regs.iter().skip(existing).take(wanted - existing) {
                        let Some(&sv) = last_reg_def.get(&reg) else {
                            break;
                        };
                        args.push(recover_arg(func, sv, &def_map));
                    }
                    if !args.is_empty() {
                        updates.push(CallUpdate {
                            bid,
                            insn_idx,
                            args,
                        });
                    }
                }
            }

            if let Some(out) = insn.output
                && out.space == SpaceId::Register
                && let Some(&sv) = func.var_map.get(&(bid, insn_idx, VarnodeSlot::Output))
            {
                last_reg_def.insert(canonical_register_offset(out.offset), sv);
            }
        }
    }

    let changed_sites = updates.len();
    for update in updates {
        let Some(block) = func.function.blocks.get_mut(&update.bid) else {
            continue;
        };
        let Some(insn) = block.insns.get_mut(update.insn_idx) else {
            continue;
        };
        let start = insn.inputs.len();
        for (rel_idx, arg) in update.args.into_iter().enumerate() {
            let input_idx = start + rel_idx;
            insn.inputs.push(arg.operand);
            if let Some(sv) = arg.ssa {
                func.var_map.insert(
                    (update.bid, update.insn_idx, VarnodeSlot::Input(input_idx)),
                    sv,
                );
            }
        }
    }

    changed_sites
}

fn calling_convention_for(func: &SsaFunction) -> CallingConvention {
    if func.calling_convention != CallingConvention::Unknown {
        return func.calling_convention;
    }
    match func.arch {
        ArchId::AArch64 => CallingConvention::AArch64,
        ArchId::X86_64 => CallingConvention::SystemV,
        _ => CallingConvention::Unknown,
    }
}

fn arg_regs_for(cc: CallingConvention) -> &'static [u64] {
    match cc {
        CallingConvention::SystemV => SYSV_ARG_REGS,
        CallingConvention::MicrosoftX64 => MSX64_ARG_REGS,
        CallingConvention::AArch64 => AARCH64_ARG_REGS,
        CallingConvention::Thiscall => &[RCX],
        CallingConvention::Cdecl | CallingConvention::Stdcall | CallingConvention::Unknown => &[],
    }
}

fn wanted_arg_count(
    sig: &LibcSignature,
    arg_regs: &[u64],
    last_reg_def: &BTreeMap<u64, SsaVarnode>,
) -> usize {
    let max_args = arg_regs.len();
    let fixed = sig.param_count.min(max_args);
    if !sig.variadic {
        return fixed;
    }

    let mut visible = 0usize;
    for &reg in arg_regs {
        if last_reg_def.contains_key(&reg) {
            visible += 1;
        } else {
            break;
        }
    }
    fixed.max(visible).min(max_args)
}

fn lookup_libc_normalized(name: &str) -> Option<&'static LibcSignature> {
    lookup_libc(name)
        .or_else(|| name.find('@').and_then(|idx| lookup_libc(&name[..idx])))
        .or_else(|| {
            name.strip_prefix("__libc_")
                .and_then(lookup_libc)
                .or_else(|| name.strip_prefix("__isoc99_").and_then(lookup_libc))
                .or_else(|| name.strip_prefix("__isoc23_").and_then(lookup_libc))
        })
        .or_else(|| name.strip_prefix('_').and_then(lookup_libc))
}

fn canonical_register_offset(offset: u64) -> u64 {
    match offset {
        // x86-64 register families share the same offset for 8/4/2/1-byte
        // low-register views. Keep the helper explicit so future register
        // files can extend it without changing the scan logic.
        RAX | RCX | RDX | RSI | RDI | R8 | R9 => offset,
        _ => offset,
    }
}

fn build_def_map(func: &SsaFunction) -> BTreeMap<SsaVarnode, (BlockId, usize)> {
    let mut defs = BTreeMap::new();
    for (&(bid, insn_idx, ref slot), &sv) in &func.var_map {
        if matches!(slot, VarnodeSlot::Output) {
            defs.insert(sv, (bid, insn_idx));
        }
    }
    defs
}

fn recover_arg(
    func: &SsaFunction,
    sv: SsaVarnode,
    def_map: &BTreeMap<SsaVarnode, (BlockId, usize)>,
) -> RecoveredArg {
    match resolve_const_from_ssa(func, sv, def_map, 0) {
        Some(operand) => RecoveredArg { operand, ssa: None },
        None => RecoveredArg {
            operand: sv.base,
            ssa: Some(sv),
        },
    }
}

fn resolve_const_from_ssa(
    func: &SsaFunction,
    sv: SsaVarnode,
    def_map: &BTreeMap<SsaVarnode, (BlockId, usize)>,
    depth: usize,
) -> Option<Varnode> {
    if depth > 8 {
        return None;
    }
    if sv.base.space == SpaceId::Const {
        return Some(sv.base);
    }

    let &(bid, insn_idx) = def_map.get(&sv)?;
    let insn = func.function.blocks.get(&bid)?.insns.get(insn_idx)?;
    match insn.op {
        IrOp::Copy => {
            let src = *insn.inputs.first()?;
            if src.space == SpaceId::Const {
                return Some(src);
            }
            let src_sv = func
                .var_map
                .get(&(bid, insn_idx, VarnodeSlot::Input(0)))
                .copied()?;
            resolve_const_from_ssa(func, src_sv, def_map, depth + 1)
        }
        IrOp::IntAdd => resolve_const_add(func, bid, insn_idx, insn, def_map, depth),
        IrOp::IntSub => resolve_const_sub(func, bid, insn_idx, insn, def_map, depth),
        _ => None,
    }
}

fn resolve_const_add(
    func: &SsaFunction,
    bid: BlockId,
    insn_idx: usize,
    insn: &unlace_ir::IrInsn,
    def_map: &BTreeMap<SsaVarnode, (BlockId, usize)>,
    depth: usize,
) -> Option<Varnode> {
    let lhs = *insn.inputs.first()?;
    let rhs = *insn.inputs.get(1)?;
    match (const_operand(lhs), const_operand(rhs)) {
        (Some(a), Some(b)) => Some(Varnode::constant(a.offset.wrapping_add(b.offset), a.size)),
        (Some(c), None) if is_rip_register(rhs) => Some(c),
        (None, Some(c)) if is_rip_register(lhs) => Some(c),
        (Some(c), None) => {
            let rhs_sv = func
                .var_map
                .get(&(bid, insn_idx, VarnodeSlot::Input(1)))
                .copied()?;
            let rhs_c = resolve_const_from_ssa(func, rhs_sv, def_map, depth + 1)?;
            Some(Varnode::constant(
                c.offset.wrapping_add(rhs_c.offset),
                c.size,
            ))
        }
        (None, Some(c)) => {
            let lhs_sv = func
                .var_map
                .get(&(bid, insn_idx, VarnodeSlot::Input(0)))
                .copied()?;
            let lhs_c = resolve_const_from_ssa(func, lhs_sv, def_map, depth + 1)?;
            Some(Varnode::constant(
                lhs_c.offset.wrapping_add(c.offset),
                c.size,
            ))
        }
        (None, None) => None,
    }
}

fn resolve_const_sub(
    func: &SsaFunction,
    bid: BlockId,
    insn_idx: usize,
    insn: &unlace_ir::IrInsn,
    def_map: &BTreeMap<SsaVarnode, (BlockId, usize)>,
    depth: usize,
) -> Option<Varnode> {
    let lhs = *insn.inputs.first()?;
    let rhs = *insn.inputs.get(1)?;
    match (const_operand(lhs), const_operand(rhs)) {
        (Some(a), Some(b)) => Some(Varnode::constant(a.offset.wrapping_sub(b.offset), a.size)),
        (None, Some(c)) => {
            let lhs_sv = func
                .var_map
                .get(&(bid, insn_idx, VarnodeSlot::Input(0)))
                .copied()?;
            let lhs_c = resolve_const_from_ssa(func, lhs_sv, def_map, depth + 1)?;
            Some(Varnode::constant(
                lhs_c.offset.wrapping_sub(c.offset),
                lhs_c.size,
            ))
        }
        _ => None,
    }
}

fn const_operand(vn: Varnode) -> Option<Varnode> {
    (vn.space == SpaceId::Const).then_some(vn)
}

fn is_rip_register(vn: Varnode) -> bool {
    vn.space == SpaceId::Register && vn.offset == RIP
}

#[cfg(test)]
mod tests {
    use smallvec::smallvec;
    use unlace_ir::ssa::build_ssa;
    use unlace_ir::{BasicBlock, Function, IrInsn};

    use super::*;

    #[test]
    fn recovers_puts_string_from_rip_relative_rdi() {
        let mut func = Function::new("main", BlockId(0), 0x1060);
        let mut bb = BasicBlock::new(BlockId(0));
        let tmp = Varnode::unique(0x10000, 8);
        let rip = Varnode::reg(RIP, 8);
        let rdi = Varnode::reg(RDI, 8);

        bb.insns.push(IrInsn::with_output(
            IrOp::IntAdd,
            tmp,
            smallvec![rip, Varnode::constant(0x2004, 8)],
            0x1068,
        ));
        bb.insns
            .push(IrInsn::with_output(IrOp::Copy, rdi, smallvec![tmp], 0x1068));
        bb.insns.push(IrInsn::without_output(
            IrOp::Call,
            smallvec![Varnode::constant(0x1050, 8)],
            0x106f,
        ));
        func.insert_block(bb);

        let mut ssa = build_ssa(func);
        ssa.arch = ArchId::X86_64;

        let changed = recover_direct_call_args(&mut ssa, &|addr| {
            if addr == 0x1050 { Some("puts") } else { None }
        });

        assert_eq!(changed, 1);
        let call = &ssa.function.blocks[&BlockId(0)].insns[2];
        assert_eq!(call.inputs.len(), 2);
        assert_eq!(call.inputs[1], Varnode::constant(0x2004, 8));
        assert!(
            !ssa.var_map
                .contains_key(&(BlockId(0), 2, VarnodeSlot::Input(1))),
            "constant recovered args should not keep the register copy live",
        );
    }
}
