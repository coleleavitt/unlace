//! What one call site sets up for its callee.
//!
//! The scan walks backwards from the call (`sub_DE000` in Hex-Rays) over
//! the instructions that run since the previous call: the call's block and
//! any chain of single-predecessor blocks leading into it. It runs on the
//! lifted IR, before dead-code elimination drops the argument setup of
//! calls with no known prototype.

use std::collections::{BTreeMap, BTreeSet};

use unlace_ir::ssa::CallingConvention;
use unlace_ir::{BlockId, Function, IrInsn, IrOp, SpaceId, Varnode};

/// Register-space offset of RAX, whose low byte carries the System V
/// vector-register count of a variadic call.
const RAX: u64 = 0;
/// Largest vector-register count the System V convention passes in AL.
const MAX_VECTOR_COUNT: u64 = 8;
/// Blocks the backward scan visits at most, the call's block included.
const MAX_WINDOW_BLOCKS: usize = 4;

/// The argument setup visible at one call site.
#[derive(Copy, Clone, Debug, Default, PartialEq, Eq)]
pub struct CallSiteArgs {
    /// Bit `i` is set when the `i`-th integer argument register of the
    /// convention is written before the call and not read again.
    pub int_regs: u32,
    /// Same for the floating-point argument registers.
    pub float_regs: u32,
    /// Bytes of contiguous stack-argument slots stored before the call,
    /// counted from the first stack argument.
    pub stack_bytes: u32,
    /// The constant moved into AL right before the call, when it fits the
    /// System V vector-register count of a variadic call.
    pub vector_count: Option<u8>,
}

impl CallSiteArgs {
    /// Integer register arguments: up to the highest register written,
    /// since the lower ones may be forwarded unchanged from the caller's
    /// own arguments (Hex-Rays takes the highest set bit the same way).
    pub fn int_args(self) -> usize {
        highest_bit(self.int_regs)
    }

    /// Floating-point register arguments, counted like [`Self::int_args`].
    pub fn float_args(self) -> usize {
        highest_bit(self.float_regs)
    }
}

fn highest_bit(bits: u32) -> usize {
    (u32::BITS - bits.leading_zeros()) as usize
}

/// A direct call (or tail-call branch) and its visible argument setup.
#[derive(Copy, Clone, Debug, PartialEq, Eq)]
pub struct CallSite {
    /// Address of the call instruction.
    pub addr: u64,
    /// Constant call target.
    pub target: u64,
    pub args: CallSiteArgs,
}

/// Every direct call and tail-call branch in `func` with the arguments its
/// setup shows under `cc`. `sp` is the stack-pointer register offset.
pub fn collect_call_sites(func: &Function, cc: CallingConvention, sp: u64) -> Vec<CallSite> {
    let predecessors = predecessors(func);
    let mut sites = Vec::new();
    for (&bid, block) in &func.blocks {
        for (idx, insn) in block.insns.iter().enumerate() {
            if !matches!(insn.op, IrOp::Call | IrOp::Branch) {
                continue;
            }
            let Some(target) = insn.inputs.first().filter(|t| t.space == SpaceId::Const) else {
                continue;
            };
            let window = window_before(func, &predecessors, bid, idx);
            sites.push(CallSite {
                addr: insn.addr,
                target: target.offset,
                args: scan_window(&window, cc, sp),
            });
        }
    }
    sites
}

fn predecessors(func: &Function) -> BTreeMap<BlockId, Vec<BlockId>> {
    let mut preds: BTreeMap<BlockId, Vec<BlockId>> = BTreeMap::new();
    for (&bid, block) in &func.blocks {
        for &succ in &block.successors {
            preds.entry(succ).or_default().push(bid);
        }
    }
    preds
}

/// The instructions that run between the previous call and the call at
/// `(bid, idx)`, in program order.
fn window_before<'f>(
    func: &'f Function,
    predecessors: &BTreeMap<BlockId, Vec<BlockId>>,
    bid: BlockId,
    idx: usize,
) -> Vec<&'f IrInsn> {
    let mut reversed = Vec::new();
    let mut visited = BTreeSet::new();
    let mut current = bid;
    let mut end = idx;
    loop {
        visited.insert(current);
        let Some(block) = func.blocks.get(&current) else {
            break;
        };
        for insn in block.insns[..end].iter().rev() {
            if matches!(insn.op, IrOp::Call | IrOp::Callind) {
                return reversed.into_iter().rev().collect();
            }
            reversed.push(insn);
        }
        let single_pred = match predecessors.get(&current).map(Vec::as_slice) {
            Some([pred]) => *pred,
            _ => break,
        };
        let falls_only_here = func
            .blocks
            .get(&single_pred)
            .is_some_and(|pred| pred.successors.len() == 1);
        if !falls_only_here || visited.contains(&single_pred) || visited.len() >= MAX_WINDOW_BLOCKS
        {
            break;
        }
        current = single_pred;
        end = func.blocks.get(&current).map_or(0, |b| b.insns.len());
    }
    reversed.into_iter().rev().collect()
}

fn scan_window(window: &[&IrInsn], cc: CallingConvention, sp: u64) -> CallSiteArgs {
    let int_regs = cc.int_arg_regs();
    let float_regs = cc.float_arg_regs();
    // Argument registers written and not read since, and the value of the
    // last write to RAX while it is still unread.
    let mut pending: BTreeSet<u64> = BTreeSet::new();
    let mut rax_const: Option<u64> = None;
    let mut stack = StackTracker::new(sp, cc.stack_slot_size());

    for insn in window {
        for input in &insn.inputs {
            if input.space == SpaceId::Register {
                pending.remove(&input.offset);
                if input.offset == RAX {
                    rax_const = None;
                }
            }
        }
        stack.step(insn);
        let Some(out) = insn.output.filter(|o| o.space == SpaceId::Register) else {
            continue;
        };
        if int_regs.contains(&out.offset) || float_regs.contains(&out.offset) {
            pending.insert(out.offset);
        }
        if out.offset == RAX {
            rax_const = constant_value(insn);
        }
    }

    let bits = |regs: &[u64]| {
        regs.iter()
            .enumerate()
            .filter(|(_, reg)| pending.contains(reg))
            .fold(0u32, |acc, (i, _)| acc | (1 << i))
    };
    let vector_count = (cc == CallingConvention::SystemV)
        .then_some(rax_const)
        .flatten()
        .filter(|&n| n <= MAX_VECTOR_COUNT)
        .map(|n| n as u8);
    CallSiteArgs {
        int_regs: bits(int_regs),
        float_regs: bits(float_regs),
        stack_bytes: stack.argument_bytes(cc.stack_args_start()),
        vector_count,
    }
}

/// The constant a `COPY`/`INT_ZEXT` instruction writes, as the lifters emit
/// for `mov eax, imm`, `mov al, imm` and `xor eax, eax`.
fn constant_value(insn: &IrInsn) -> Option<u64> {
    match (insn.op, insn.inputs.as_slice()) {
        (IrOp::Copy | IrOp::IntZext, [value]) if value.space == SpaceId::Const => {
            Some(value.offset)
        }
        _ => None,
    }
}

/// Stack-pointer-relative stores in a window, to find the outgoing
/// stack arguments (`sub_D7430` in Hex-Rays measures the same thing from
/// the stack-pointer delta at the call).
struct StackTracker {
    sp: u64,
    slot: u32,
    /// Values known to be `SP at window start + k`, keyed by space and offset.
    sp_values: BTreeMap<(SpaceId, u64), i64>,
    /// `(offset from window-start SP, size)` of each store since the last
    /// stack-pointer adjustment that was not a push.
    stores: Vec<(i64, u32)>,
}

impl StackTracker {
    fn new(sp: u64, slot: u32) -> Self {
        StackTracker {
            sp,
            slot,
            sp_values: BTreeMap::from([((SpaceId::Register, sp), 0)]),
            stores: Vec::new(),
        }
    }

    fn value(&self, vn: &Varnode) -> Option<i64> {
        self.sp_values.get(&(vn.space, vn.offset)).copied()
    }

    fn step(&mut self, insn: &IrInsn) {
        if insn.op == IrOp::Store
            && let [_, addr, value] = insn.inputs.as_slice()
            && let Some(offset) = self.value(addr)
        {
            self.stores.push((offset, u32::from(value.size)));
        }
        let Some(out) = insn.output else {
            return;
        };
        let value = match (insn.op, insn.inputs.as_slice()) {
            (IrOp::Copy, [src]) => self.value(src),
            (IrOp::IntAdd, [a, b]) => match (self.value(a), self.value(b)) {
                (Some(base), None) if b.space == SpaceId::Const => {
                    Some(base.wrapping_add(b.offset as i64))
                }
                (None, Some(base)) if a.space == SpaceId::Const => {
                    Some(base.wrapping_add(a.offset as i64))
                }
                _ => None,
            },
            (IrOp::IntSub, [a, b]) if b.space == SpaceId::Const => {
                self.value(a).map(|base| base.wrapping_sub(b.offset as i64))
            }
            _ => None,
        };
        let is_sp = out.space == SpaceId::Register && out.offset == self.sp;
        if is_sp {
            let old = self.value(&out);
            let is_push =
                matches!((old, value), (Some(o), Some(n)) if o - n == i64::from(self.slot));
            if !is_push {
                // A frame allocation, a cleanup after an earlier call, or an
                // unknown adjustment: earlier stores are not arguments of
                // this call.
                self.stores.clear();
            }
        }
        match value {
            Some(v) => {
                self.sp_values.insert((out.space, out.offset), v);
            }
            None => {
                self.sp_values.remove(&(out.space, out.offset));
            }
        }
    }

    /// Contiguous bytes of stack arguments at the call, starting at
    /// `start` bytes above the stack pointer.
    fn argument_bytes(&self, start: u32) -> u32 {
        let Some(call_sp) = self.sp_values.get(&(SpaceId::Register, self.sp)).copied() else {
            return 0;
        };
        let slot = i64::from(self.slot);
        let start = i64::from(start);
        let mut covered = BTreeSet::new();
        for &(offset, size) in &self.stores {
            let rel = offset - call_sp - start;
            if rel < 0 || size == 0 {
                continue;
            }
            let first = rel / slot;
            let last = (rel + i64::from(size) - 1) / slot;
            covered.extend(first..=last);
        }
        let slots = (0..).take_while(|s| covered.contains(s)).count() as u32;
        slots * self.slot
    }
}

#[cfg(test)]
mod tests {
    use smallvec::smallvec;
    use unlace_ir::{BasicBlock, IrInsn};

    use super::*;

    const RSP: u64 = 32;
    const RDI: u64 = 56;
    const RSI: u64 = 48;
    const RDX: u64 = 16;

    fn reg(offset: u64) -> Varnode {
        Varnode::reg(offset, 8)
    }

    fn set(offset: u64, value: u64) -> IrInsn {
        IrInsn::with_output(
            IrOp::Copy,
            reg(offset),
            smallvec![Varnode::constant(value, 8)],
            0,
        )
    }

    fn call(target: u64) -> IrInsn {
        IrInsn::without_output(IrOp::Call, smallvec![Varnode::constant(target, 8)], 0x10)
    }

    fn one_block(insns: Vec<IrInsn>) -> Function {
        let mut func = Function::new("f", BlockId(0), 0x1000);
        let mut bb = BasicBlock::new(BlockId(0));
        bb.insns = insns;
        func.insert_block(bb);
        func
    }

    fn sites(func: &Function) -> Vec<CallSite> {
        collect_call_sites(func, CallingConvention::SystemV, RSP)
    }

    #[test]
    fn counts_up_to_the_highest_written_register() {
        // `mov esi, 8; jmp operator delete`: RDI is forwarded unchanged.
        let func = one_block(vec![
            set(RSI, 8),
            IrInsn::without_output(IrOp::Branch, smallvec![Varnode::constant(0x2000, 8)], 4),
        ]);
        let found = sites(&func);
        assert_eq!(found.len(), 1);
        assert_eq!(found[0].target, 0x2000);
        assert_eq!(found[0].args.int_args(), 2);
    }

    #[test]
    fn registers_read_before_the_call_are_temporaries() {
        let tmp = Varnode::unique(0, 8);
        let func = one_block(vec![
            set(RDX, 1),
            IrInsn::with_output(
                IrOp::IntAdd,
                tmp,
                smallvec![reg(RDX), Varnode::constant(1, 8)],
                2,
            ),
            IrInsn::with_output(IrOp::Copy, reg(RDI), smallvec![tmp], 3),
            call(0x2000),
        ]);
        assert_eq!(sites(&func)[0].args.int_args(), 1);
    }

    #[test]
    fn scan_stops_at_the_previous_call() {
        let func = one_block(vec![set(RDI, 1), set(RSI, 2), call(0x2000), call(0x3000)]);
        let found = sites(&func);
        assert_eq!(found[0].args.int_args(), 2);
        assert_eq!(found[1].args.int_args(), 0);
    }

    #[test]
    fn al_constant_is_the_vector_count() {
        let func = one_block(vec![
            set(RDI, 0x4000),
            IrInsn::with_output(
                IrOp::IntZext,
                reg(RAX),
                smallvec![Varnode::constant(0, 4)],
                1,
            ),
            call(0x2000),
        ]);
        assert_eq!(sites(&func)[0].args.vector_count, Some(0));
    }

    #[test]
    fn stores_at_the_call_stack_pointer_are_stack_arguments() {
        // sub rsp, 0x10 ; mov [rsp], 7 ; mov [rsp+8], 8 ; call
        let alloc = Varnode::unique(0, 8);
        let slot1 = Varnode::unique(8, 8);
        let func = one_block(vec![
            IrInsn::with_output(
                IrOp::IntSub,
                alloc,
                smallvec![reg(RSP), Varnode::constant(0x10, 8)],
                0,
            ),
            IrInsn::with_output(IrOp::Copy, reg(RSP), smallvec![alloc], 0),
            IrInsn::without_output(
                IrOp::Store,
                smallvec![Varnode::constant(1, 8), reg(RSP), Varnode::constant(7, 8)],
                1,
            ),
            IrInsn::with_output(
                IrOp::IntAdd,
                slot1,
                smallvec![reg(RSP), Varnode::constant(8, 8)],
                2,
            ),
            IrInsn::without_output(
                IrOp::Store,
                smallvec![Varnode::constant(1, 8), slot1, Varnode::constant(8, 8)],
                2,
            ),
            call(0x2000),
        ]);
        assert_eq!(sites(&func)[0].args.stack_bytes, 16);
    }

    #[test]
    fn pushes_are_stack_arguments() {
        let mut insns = Vec::new();
        for value in [2u64, 1] {
            let t = Varnode::unique(value * 8, 8);
            insns.push(IrInsn::with_output(
                IrOp::IntSub,
                t,
                smallvec![reg(RSP), Varnode::constant(8, 8)],
                0,
            ));
            insns.push(IrInsn::with_output(IrOp::Copy, reg(RSP), smallvec![t], 0));
            insns.push(IrInsn::without_output(
                IrOp::Store,
                smallvec![Varnode::constant(1, 8), t, Varnode::constant(value, 8)],
                0,
            ));
        }
        insns.push(call(0x2000));
        assert_eq!(sites(&one_block(insns))[0].args.stack_bytes, 16);
    }

    #[test]
    fn window_extends_through_a_single_predecessor() {
        let mut func = Function::new("f", BlockId(0), 0x1000);
        let mut first = BasicBlock::new(BlockId(0));
        first.insns = vec![set(RDI, 1)];
        first.successors = smallvec![BlockId(1)];
        let mut second = BasicBlock::new(BlockId(1));
        second.insns = vec![set(RSI, 2), call(0x2000)];
        func.insert_block(first);
        func.insert_block(second);
        assert_eq!(sites(&func)[0].args.int_regs, 0b11);
    }
}
