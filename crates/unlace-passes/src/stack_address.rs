//! Frame coordinates and the resolution of stack addresses into them.
//!
//! Every pass that keys a slot by stack offset — [`crate::stack_vars`],
//! [`crate::stack_frame_recovery`], [`crate::stack_pointer_tracking`] — and
//! the C printer must agree on what an offset means. [`FrameCoordinates`]
//! defines that: relative to the frame pointer when the prologue establishes
//! one, otherwise to the stack pointer at function entry, with the stack
//! pointer's own offset following the per-instruction deltas. Without the
//! deltas, `[rsp+8]` before and after `sub rsp, 0x18` would name the same
//! offset for two different slots, and a slot spilled below a moved stack
//! pointer would look like an incoming stack argument.
//!
//! [`AddressResolver`] traces a LOAD/STORE address operand (or a materialized
//! `lea`) back through `Copy` / `IntAdd` / `IntSub` to the frame-base register
//! read that roots it and converts that read with the coordinates.
//!
//! The dead-store passes must not depend on the delta walk, which may be
//! stale or absent while they run: [`StackAddrResolver`] instead expresses an
//! address against the SSA value of the stack pointer it was derived from,
//! following the register's own definition chain, so two addresses alias
//! only when both root and offset agree.

use std::collections::{BTreeMap, BTreeSet};

use unlace_ir::ssa::{SsaFunction, SsaVarnode, VarnodeSlot};
use unlace_ir::stack::StackSpec;
use unlace_ir::{BlockId, IrInsn, IrOp, SpaceId, Varnode};

use crate::stack_pointer_tracking::frame_pointer_entry_delta;

const MAX_RESOLVE_DEPTH: u32 = 16;

type DefMap = BTreeMap<Varnode, Vec<(BlockId, usize)>>;
type ResolveCache = BTreeMap<(Varnode, u32), Option<i64>>;
type SsaResolveCache = BTreeMap<(SsaVarnode, u32), Option<i64>>;

/// The frame coordinate system every stack-slot producer and consumer shares.
///
/// Offsets are relative to the frame pointer when the prologue establishes
/// one, otherwise to the stack pointer at function entry. The stack pointer's
/// own offset moves with the per-instruction deltas [`StackPointerTrackingPass`]
/// records, so a `sp + k` address means the same slot wherever it is read;
/// build this after that pass ran.
#[derive(Clone, Copy, Debug)]
pub struct FrameCoordinates {
    /// Entry-relative SP delta at which the prologue copies SP into the
    /// frame pointer; `None` when the function establishes none.
    fp_entry_delta: Option<i64>,
}

impl FrameCoordinates {
    /// Read the coordinate system off the deltas stored in `func`.
    pub fn of(func: &SsaFunction, spec: &StackSpec) -> Self {
        Self {
            fp_entry_delta: frame_pointer_entry_delta(func, spec, &func.sp_delta_at),
        }
    }

    /// Frame offset of the value `reg` holds when the instruction at `site`
    /// reads it, or `None` when `reg` is not a frame-base register.
    pub fn base_offset(
        &self,
        func: &SsaFunction,
        spec: &StackSpec,
        site: (BlockId, usize),
        reg: &Varnode,
    ) -> Option<i64> {
        if spec.is_fp(reg) {
            return Some(0);
        }
        spec.is_sp(reg).then(|| self.sp_offset(func, site))
    }

    /// Whether the prologue establishes a frame pointer (so offsets are
    /// relative to it).
    pub fn has_frame_pointer(&self) -> bool {
        self.fp_entry_delta.is_some()
    }

    /// Frame offset of the return address slot: 0 without a frame pointer,
    /// one pointer above the saved frame pointer with one.
    pub fn return_address_offset(&self) -> i64 {
        -self.fp_entry_delta.unwrap_or(0)
    }

    /// Frame offset of the stack pointer before the instruction at `site`
    /// executes.
    pub fn sp_offset(&self, func: &SsaFunction, site: (BlockId, usize)) -> i64 {
        let entry_delta = func
            .sp_delta_at
            .get(&site)
            .or_else(|| func.block_entry_sp_delta.get(&site.0))
            .copied()
            .unwrap_or(0);
        entry_delta - self.fp_entry_delta.unwrap_or(0)
    }

    /// [`Self::sp_offset`] at the start of every machine instruction, keyed by
    /// address, for consumers that no longer see IR sites.
    pub fn sp_offset_by_addr(&self, func: &SsaFunction) -> BTreeMap<u64, i64> {
        let mut out = BTreeMap::new();
        for (&bid, block) in &func.function.blocks {
            for (idx, insn) in block.insns.iter().enumerate() {
                out.entry(insn.addr)
                    .or_insert_with(|| self.sp_offset(func, (bid, idx)));
            }
        }
        out
    }
}

/// Traces LOAD/STORE address operands back to a frame-base register read and
/// turns that read into a frame offset through [`FrameCoordinates`], so a
/// `sp + k` address lands on the same slot wherever the stack pointer stood
/// when it was read.
pub(crate) struct AddressResolver<'a> {
    func: &'a SsaFunction,
    spec: &'a StackSpec,
    pub(crate) coords: FrameCoordinates,
    def_map: DefMap,
    raw_cache: ResolveCache,
    ssa_cache: SsaResolveCache,
}

impl<'a> AddressResolver<'a> {
    pub(crate) fn new(func: &'a SsaFunction, spec: &'a StackSpec) -> Self {
        Self {
            func,
            spec,
            coords: FrameCoordinates::of(func, spec),
            def_map: build_def_map(func),
            raw_cache: BTreeMap::new(),
            ssa_cache: BTreeMap::new(),
        }
    }

    /// Frame offset of the LOAD/STORE address operand of `insn` at `site`,
    /// falling back to the pre-optimization hint when the address shape was
    /// lost. `None` if the trace doesn't terminate at the frame base.
    pub(crate) fn stack_offset(&mut self, site: (BlockId, usize), insn: &IrInsn) -> Option<i64> {
        let hint = self.func.stack_offset_hints.get(&site).copied();
        let fresh = self.fresh_stack_offset(site, insn);

        if let (Some(fresh), Some(hint)) = (fresh, hint)
            && fresh != hint
        {
            tracing::debug!(
                target: "unlace::stack::frame",
                "func={} stale-hint site={:?} addr={:#x} fresh={} hint={}",
                self.func.function.name, site, insn.addr, fresh, hint
            );
        }

        fresh.or(hint)
    }

    /// Frame offset of the LOAD/STORE address operand of `insn` at `site`
    /// from the current address expression alone.
    pub(crate) fn fresh_stack_offset(
        &mut self,
        site: (BlockId, usize),
        insn: &IrInsn,
    ) -> Option<i64> {
        self.operand_offset(site, 1, &insn.inputs[1], 0)
    }

    /// The stack offset whose address `insn` materializes into a register
    /// (`lea rdi, [rsp+0x10]` lifts to `rdi = rsp + 0x10`), if any.
    pub(crate) fn taken_stack_address(&mut self, site: (BlockId, usize), insn: &IrInsn) -> Option<i64> {
        let out = insn.output?;
        if out.space != SpaceId::Register
            || self.spec.is_frame_base(&out)
            || !matches!(insn.op, IrOp::IntAdd | IrOp::IntSub | IrOp::Copy)
        {
            return None;
        }
        let out_sv = *self
            .func
            .var_map
            .get(&(site.0, site.1, VarnodeSlot::Output))?;
        self.ssa_value_offset(&out_sv, site, 0)
    }

    /// Frame offset of the value the instruction at `site` reads through its
    /// operand `vn` (input slot `input_idx`).
    fn operand_offset(
        &mut self,
        site: (BlockId, usize),
        input_idx: usize,
        vn: &Varnode,
        depth: u32,
    ) -> Option<i64> {
        if vn.space == SpaceId::Stack {
            return Some(vn.offset as i64);
        }
        if let Some(base) = self.coords.base_offset(self.func, self.spec, site, vn) {
            return Some(base);
        }
        if vn.space == SpaceId::Const {
            return None;
        }
        if let Some(&input_sv) = self
            .func
            .var_map
            .get(&(site.0, site.1, VarnodeSlot::Input(input_idx)))
        {
            return self.ssa_value_offset(&input_sv, site, depth);
        }
        if vn.space == SpaceId::Unique || vn.space == SpaceId::Register {
            return self.raw_value_offset(vn, depth);
        }
        None
    }

    /// Frame offset of the SSA value `sv`, read by the instruction at
    /// `read_site`, following its definition.
    fn ssa_value_offset(
        &mut self,
        sv: &SsaVarnode,
        read_site: (BlockId, usize),
        depth: u32,
    ) -> Option<i64> {
        if depth > MAX_RESOLVE_DEPTH {
            return None;
        }
        if sv.base.space == SpaceId::Stack {
            return Some(sv.base.offset as i64);
        }
        if let Some(base) = self
            .coords
            .base_offset(self.func, self.spec, read_site, &sv.base)
        {
            return Some(base);
        }
        if let Some(&cached) = self.ssa_cache.get(&(*sv, depth)) {
            return cached;
        }
        let resolved = self.ssa_value_offset_uncached(sv, depth);
        self.ssa_cache.insert((*sv, depth), resolved);
        resolved
    }

    fn ssa_value_offset_uncached(&mut self, sv: &SsaVarnode, depth: u32) -> Option<i64> {
        let site = defining_site_for_sv(self.func, sv)?;
        let def = self.func.function.blocks.get(&site.0)?.insns.get(site.1)?;
        match def.op {
            IrOp::IntAdd if def.inputs.len() >= 2 => {
                let (a, b) = (def.inputs[0], def.inputs[1]);
                if b.space == SpaceId::Const {
                    let base = self.operand_offset(site, 0, &a, depth + 1)?;
                    return Some(base.wrapping_add(b.offset as i64));
                }
                if a.space == SpaceId::Const {
                    let base = self.operand_offset(site, 1, &b, depth + 1)?;
                    return Some(base.wrapping_add(a.offset as i64));
                }
                None
            }
            IrOp::IntSub if def.inputs.len() >= 2 => {
                let (a, b) = (def.inputs[0], def.inputs[1]);
                if b.space != SpaceId::Const {
                    return None;
                }
                let base = self.operand_offset(site, 0, &a, depth + 1)?;
                Some(base.wrapping_sub(b.offset as i64))
            }
            IrOp::Copy => {
                let src = *def.inputs.first()?;
                self.operand_offset(site, 0, &src, depth + 1)
            }
            _ => None,
        }
    }

    /// Frame offset of the raw (non-SSA) varnode `vn`, for instructions the
    /// SSA var map does not cover; follows every recorded definition.
    fn raw_value_offset(&mut self, vn: &Varnode, depth: u32) -> Option<i64> {
        if depth > MAX_RESOLVE_DEPTH {
            return None;
        }
        if let Some(&cached) = self.raw_cache.get(&(*vn, depth)) {
            return cached;
        }
        let resolved = self.raw_value_offset_uncached(vn, depth);
        self.raw_cache.insert((*vn, depth), resolved);
        resolved
    }

    fn raw_value_offset_uncached(&mut self, vn: &Varnode, depth: u32) -> Option<i64> {
        let defs = self.def_map.get(vn)?.clone();
        for site in defs {
            let def = self.func.function.blocks.get(&site.0)?.insns.get(site.1)?;
            let resolved = match def.op {
                IrOp::IntAdd if def.inputs.len() >= 2 => {
                    let (a, b) = (def.inputs[0], def.inputs[1]);
                    if b.space == SpaceId::Const {
                        self.raw_operand_offset(site, &a, depth + 1)
                            .map(|base| base.wrapping_add(b.offset as i64))
                    } else if a.space == SpaceId::Const {
                        self.raw_operand_offset(site, &b, depth + 1)
                            .map(|base| base.wrapping_add(a.offset as i64))
                    } else {
                        None
                    }
                }
                IrOp::IntSub if def.inputs.len() >= 2 => {
                    let (a, b) = (def.inputs[0], def.inputs[1]);
                    if b.space == SpaceId::Const {
                        self.raw_operand_offset(site, &a, depth + 1)
                            .map(|base| base.wrapping_sub(b.offset as i64))
                    } else {
                        None
                    }
                }
                IrOp::Copy => match def.inputs.first() {
                    Some(src) => self.raw_operand_offset(site, &src.clone(), depth + 1),
                    None => None,
                },
                _ => None,
            };
            if resolved.is_some() {
                return resolved;
            }
        }
        None
    }

    fn raw_operand_offset(
        &mut self,
        site: (BlockId, usize),
        vn: &Varnode,
        depth: u32,
    ) -> Option<i64> {
        if vn.space == SpaceId::Stack {
            return Some(vn.offset as i64);
        }
        if let Some(base) = self.coords.base_offset(self.func, self.spec, site, vn) {
            return Some(base);
        }
        if vn.space == SpaceId::Const {
            return None;
        }
        self.raw_value_offset(vn, depth)
    }
}

/// Map from defined varnode to its definition sites.
fn build_def_map(func: &SsaFunction) -> DefMap {
    let mut def_map: DefMap = BTreeMap::new();
    for (&(bid, insn_idx, ref slot), sv) in &func.var_map {
        if *slot == VarnodeSlot::Output {
            def_map.entry(sv.base).or_default().push((bid, insn_idx));
        }
    }
    def_map
}

/// Site whose output defines `needle`, if any instruction does.
pub(crate) fn defining_site_for_sv(
    func: &SsaFunction,
    needle: &SsaVarnode,
) -> Option<(BlockId, usize)> {
    func.var_map
        .iter()
        .find_map(|(&(bid, insn_idx, ref slot), sv)| {
            (*slot == VarnodeSlot::Output && sv == needle).then_some((bid, insn_idx))
        })
}

/// A stack address as `root + offset`, where `root` is the SSA value of the
/// stack or frame pointer the address was computed from.
///
/// Two stores alias only when they share the root: `rsp - 8` computed before
/// a push and `rsp - 8` computed after it name different slots, and only the
/// register's own definition chain (`rsp#1 = rsp#0 - 8`) relates them.
#[derive(Clone, Copy, Debug, PartialEq, Eq, PartialOrd, Ord)]
pub(crate) struct StackAddr {
    pub(crate) root: SsaVarnode,
    pub(crate) offset: i64,
}

impl StackAddr {
    fn displaced(self, delta: i64) -> Self {
        Self {
            root: self.root,
            offset: self.offset.wrapping_add(delta),
        }
    }

    pub(crate) fn overlaps(&self, size: u8, other: &Self, other_size: u8) -> bool {
        self.root == other.root && ranges_overlap(self.offset, size, other.offset, other_size)
    }
}

/// Memoized resolver of addresses to [`StackAddr`] for the dead-store passes.
///
/// Large functions ask about the same address roots hundreds of times, so
/// this keeps the reverse definition lookup and the resolved address cache
/// local to one pass invocation.
pub(crate) struct StackAddrResolver<'a> {
    func: &'a SsaFunction,
    def_by_sv: BTreeMap<SsaVarnode, (BlockId, usize)>,
    def_by_base: BTreeMap<Varnode, (BlockId, usize)>,
    memo_sv: BTreeMap<SsaVarnode, Option<StackAddr>>,
    memo_raw: BTreeMap<Varnode, Option<StackAddr>>,
    visiting_sv: BTreeSet<SsaVarnode>,
    visiting_raw: BTreeSet<Varnode>,
}

impl<'a> StackAddrResolver<'a> {
    pub(crate) fn new(func: &'a SsaFunction) -> Self {
        let mut def_by_sv = BTreeMap::new();
        let mut def_by_base = BTreeMap::new();
        for ((bid, insn_idx, slot), sv) in &func.var_map {
            if matches!(slot, VarnodeSlot::Output) {
                def_by_sv.insert(*sv, (*bid, *insn_idx));
                def_by_base.entry(sv.base).or_insert((*bid, *insn_idx));
            }
        }
        Self {
            func,
            def_by_sv,
            def_by_base,
            memo_sv: BTreeMap::new(),
            memo_raw: BTreeMap::new(),
            visiting_sv: BTreeSet::new(),
            visiting_raw: BTreeSet::new(),
        }
    }

    /// Returns the stack address `addr` names, if it can be statically
    /// recognised as stack-pointer-relative.
    ///
    /// Recognises:
    ///   * `addr == RSP` or `addr == RBP` → that register value, offset 0,
    ///     itself traced through `Copy` / `IntAdd` / `IntSub` definitions so
    ///     every version of the stack pointer is expressed against the one
    ///     it was derived from
    ///   * `addr` produced by `INT_ADD(stack_reg, const)` → +const
    ///   * `addr` produced by `INT_SUB(stack_reg, const)` → -const
    ///   * `addr` produced by `COPY(stack_reg-relative)` → recursive
    pub(crate) fn stack_offset_of_sv(&mut self, addr: SsaVarnode) -> Option<StackAddr> {
        self.stack_offset_recursive_sv(addr, 8)
    }

    pub(crate) fn stack_offset_of_raw(&mut self, addr: &Varnode) -> Option<StackAddr> {
        self.stack_offset_recursive_raw(addr, 8)
    }

    fn stack_offset_recursive_sv(&mut self, addr: SsaVarnode, depth: u32) -> Option<StackAddr> {
        if depth == 0 {
            return None;
        }

        if addr.base.space != SpaceId::Unique && addr.base.space != SpaceId::Register {
            return None;
        }
        if let Some(cached) = self.memo_sv.get(&addr) {
            return *cached;
        }
        if !self.visiting_sv.insert(addr) {
            self.memo_sv.insert(addr, None);
            return None;
        }

        let mut result = self.stack_offset_from_sv_def(addr, depth);
        if result.is_none() && is_rsp_or_rbp(&addr.base) {
            result = Some(StackAddr {
                root: addr,
                offset: 0,
            });
        }
        self.visiting_sv.remove(&addr);
        self.memo_sv.insert(addr, result);
        result
    }

    fn stack_offset_from_sv_def(&mut self, addr: SsaVarnode, depth: u32) -> Option<StackAddr> {
        let (bid, insn_idx) = self.def_by_sv.get(&addr).copied()?;
        let (op, inputs) = {
            let block = self.func.function.blocks.get(&bid)?;
            let def_insn = block.insns.get(insn_idx)?;
            (def_insn.op, def_insn.inputs.clone())
        };

        match op {
            IrOp::IntAdd if inputs.len() >= 2 => {
                let (a, b) = (&inputs[0], &inputs[1]);
                if b.space == SpaceId::Const
                    && let Some(base) = self.stack_offset_input(bid, insn_idx, 0, a, depth - 1)
                {
                    return Some(base.displaced(b.offset as i64));
                }
                if a.space == SpaceId::Const
                    && let Some(base) = self.stack_offset_input(bid, insn_idx, 1, b, depth - 1)
                {
                    return Some(base.displaced(a.offset as i64));
                }
            }
            IrOp::IntSub if inputs.len() >= 2 => {
                let (a, b) = (&inputs[0], &inputs[1]);
                if b.space == SpaceId::Const
                    && let Some(base) = self.stack_offset_input(bid, insn_idx, 0, a, depth - 1)
                {
                    return Some(base.displaced((b.offset as i64).wrapping_neg()));
                }
            }
            IrOp::Copy if !inputs.is_empty() => {
                return self.stack_offset_input(bid, insn_idx, 0, &inputs[0], depth - 1);
            }
            _ => {}
        }

        None
    }

    fn stack_offset_input(
        &mut self,
        bid: BlockId,
        insn_idx: usize,
        input_idx: usize,
        raw: &Varnode,
        depth: u32,
    ) -> Option<StackAddr> {
        self.func
            .var_map
            .get(&(bid, insn_idx, VarnodeSlot::Input(input_idx)))
            .copied()
            .and_then(|sv| self.stack_offset_recursive_sv(sv, depth))
            .or_else(|| self.stack_offset_recursive_raw(raw, depth))
    }

    fn stack_offset_recursive_raw(&mut self, addr: &Varnode, depth: u32) -> Option<StackAddr> {
        if depth == 0 {
            return None;
        }

        if is_rsp_or_rbp(addr) {
            // Without SSA information the register's entry value is the only
            // root we can name.
            return Some(StackAddr {
                root: SsaVarnode {
                    base: *addr,
                    version: 0,
                },
                offset: 0,
            });
        }
        if addr.space != SpaceId::Unique && addr.space != SpaceId::Register {
            return None;
        }
        if let Some(cached) = self.memo_raw.get(addr) {
            return *cached;
        }
        if !self.visiting_raw.insert(*addr) {
            self.memo_raw.insert(*addr, None);
            return None;
        }

        let result = self.stack_offset_from_raw_def(addr, depth);
        self.visiting_raw.remove(addr);
        self.memo_raw.insert(*addr, result);
        result
    }

    fn stack_offset_from_raw_def(&mut self, addr: &Varnode, depth: u32) -> Option<StackAddr> {
        let (bid, insn_idx) = self.def_by_base.get(addr).copied()?;
        let (op, inputs) = {
            let block = self.func.function.blocks.get(&bid)?;
            let def_insn = block.insns.get(insn_idx)?;
            (def_insn.op, def_insn.inputs.clone())
        };

        match op {
            IrOp::IntAdd if inputs.len() >= 2 => {
                let (a, b) = (&inputs[0], &inputs[1]);
                if b.space == SpaceId::Const
                    && let Some(base) = self.stack_offset_recursive_raw(a, depth - 1)
                {
                    return Some(base.displaced(b.offset as i64));
                }
                if a.space == SpaceId::Const
                    && let Some(base) = self.stack_offset_recursive_raw(b, depth - 1)
                {
                    return Some(base.displaced(a.offset as i64));
                }
            }
            IrOp::IntSub if inputs.len() >= 2 => {
                let (a, b) = (&inputs[0], &inputs[1]);
                if b.space == SpaceId::Const
                    && let Some(base) = self.stack_offset_recursive_raw(a, depth - 1)
                {
                    return Some(base.displaced((b.offset as i64).wrapping_neg()));
                }
            }
            IrOp::Copy if !inputs.is_empty() => {
                return self.stack_offset_recursive_raw(&inputs[0], depth - 1);
            }
            _ => {}
        }

        None
    }
}

/// x86 RSP/RBP, the only frame bases the dead-store passes reason about.
fn is_rsp_or_rbp(v: &Varnode) -> bool {
    const RSP_OFFSET: u64 = 32;
    const RBP_OFFSET: u64 = 40;
    v.space == SpaceId::Register && (v.offset == RSP_OFFSET || v.offset == RBP_OFFSET)
}

fn ranges_overlap(a_start: i64, a_size: u8, b_start: i64, b_size: u8) -> bool {
    let a_end = a_start.saturating_add(i64::from(a_size.max(1)));
    let b_end = b_start.saturating_add(i64::from(b_size.max(1)));
    a_start < b_end && b_start < a_end
}

#[cfg(test)]
mod tests {
    use smallvec::smallvec;

    use super::*;
    use crate::pass::Pass;
    use crate::stack_pointer_tracking::StackPointerTrackingPass;
    use unlace_ir::ssa::build_ssa;
    use unlace_ir::{ArchId, BasicBlock, Function};

    fn rsp() -> Varnode {
        Varnode::reg(32, 8)
    }

    fn rbp() -> Varnode {
        Varnode::reg(40, 8)
    }

    fn ssa_with_deltas(insns: Vec<IrInsn>) -> SsaFunction {
        let mut func = Function::new("t", BlockId(0), 0x1000);
        let mut bb = BasicBlock::new(BlockId(0));
        bb.insns = insns;
        func.insert_block(bb);
        let mut ssa = build_ssa(func);
        ssa.arch = ArchId::X86_64;
        StackPointerTrackingPass.run(&mut ssa).unwrap();
        ssa
    }

    /// `sub rsp, 0x18; mov [rsp+0xc], edx; add rsp, 0x18; pop rbx`: every
    /// access lands at its entry-relative offset however far the stack
    /// pointer has moved when it is read.
    #[test]
    fn sp_relative_accesses_follow_the_moving_stack_pointer() {
        let ram = Varnode::constant(1, 8);
        let (u0, u1, u2) = (
            Varnode::unique(0, 8),
            Varnode::unique(8, 8),
            Varnode::unique(16, 8),
        );
        let ssa = ssa_with_deltas(vec![
            IrInsn::with_output(IrOp::IntSub, u0, smallvec![rsp(), Varnode::constant(0x18, 8)], 0x1000),
            IrInsn::with_output(IrOp::Copy, rsp(), smallvec![u0], 0x1000),
            IrInsn::with_output(IrOp::IntAdd, u1, smallvec![rsp(), Varnode::constant(0xc, 8)], 0x1004),
            IrInsn::without_output(IrOp::Store, smallvec![ram, u1, Varnode::reg(16, 4)], 0x1004),
            IrInsn::with_output(IrOp::IntAdd, u2, smallvec![rsp(), Varnode::constant(0x18, 8)], 0x1008),
            IrInsn::with_output(IrOp::Copy, rsp(), smallvec![u2], 0x1008),
            IrInsn::with_output(IrOp::Load, Varnode::reg(24, 8), smallvec![ram, rsp()], 0x100c),
        ]);
        let spec = StackSpec::for_arch(ArchId::X86_64).unwrap();
        let mut resolver = AddressResolver::new(&ssa, &spec);
        let block = &ssa.function.blocks[&BlockId(0)];

        assert_eq!(resolver.stack_offset((BlockId(0), 3), &block.insns[3]), Some(-12));
        assert_eq!(resolver.stack_offset((BlockId(0), 6), &block.insns[6]), Some(0));

        let by_addr = resolver.coords.sp_offset_by_addr(&ssa);
        assert_eq!(by_addr[&0x1000], 0);
        assert_eq!(by_addr[&0x1004], -24);
        assert_eq!(by_addr[&0x100c], 0);
        assert_eq!(resolver.coords.return_address_offset(), 0);
    }

    /// With `push rbp; mov rbp, rsp` the frame is frame-pointer relative:
    /// `[rbp-4]` is `-4`, the return address sits at `+8`, and an
    /// `[rsp+8]` access after `sub rsp, 0x10` is expressed in the same space.
    #[test]
    fn frame_pointer_functions_use_frame_pointer_relative_offsets() {
        let ram = Varnode::constant(1, 8);
        let (u0, u1, u2, u3) = (
            Varnode::unique(0, 8),
            Varnode::unique(8, 8),
            Varnode::unique(16, 8),
            Varnode::unique(24, 8),
        );
        let mut ssa = ssa_with_deltas(vec![
            IrInsn::with_output(IrOp::IntSub, u0, smallvec![rsp(), Varnode::constant(8, 8)], 0x1000),
            IrInsn::with_output(IrOp::Copy, rsp(), smallvec![u0], 0x1000),
            IrInsn::without_output(IrOp::Store, smallvec![ram, u0, rbp()], 0x1000),
            IrInsn::with_output(IrOp::Copy, rbp(), smallvec![rsp()], 0x1001),
            IrInsn::with_output(IrOp::IntSub, u1, smallvec![rsp(), Varnode::constant(0x10, 8)], 0x1004),
            IrInsn::with_output(IrOp::Copy, rsp(), smallvec![u1], 0x1004),
            IrInsn::with_output(IrOp::IntAdd, u2, smallvec![rbp(), Varnode::constant(-4i64 as u64, 8)], 0x1008),
            IrInsn::without_output(IrOp::Store, smallvec![ram, u2, Varnode::reg(56, 4)], 0x1008),
            IrInsn::with_output(IrOp::IntAdd, u3, smallvec![rsp(), Varnode::constant(8, 8)], 0x100c),
            IrInsn::without_output(IrOp::Store, smallvec![ram, u3, Varnode::reg(48, 4)], 0x100c),
        ]);
        crate::prologue_elim::PrologueElimPass.run(&mut ssa).unwrap();
        StackPointerTrackingPass.run(&mut ssa).unwrap();
        let spec = StackSpec::for_arch(ArchId::X86_64).unwrap();
        let mut resolver = AddressResolver::new(&ssa, &spec);
        let block = &ssa.function.blocks[&BlockId(0)];

        assert!(resolver.coords.has_frame_pointer());
        assert_eq!(resolver.coords.return_address_offset(), 8);
        assert_eq!(resolver.stack_offset((BlockId(0), 7), &block.insns[7]), Some(-4));
        assert_eq!(resolver.stack_offset((BlockId(0), 9), &block.insns[9]), Some(-8));
    }

    /// Dead-store aliasing keys an address by the stack-pointer value it was
    /// derived from, and relates those values through the register's own
    /// definitions.
    #[test]
    fn stack_addr_relates_stack_pointer_versions_through_their_definitions() {
        let ram = Varnode::constant(1, 8);
        let (u0, u1) = (Varnode::unique(0, 8), Varnode::unique(8, 8));
        let ssa = ssa_with_deltas(vec![
            IrInsn::with_output(IrOp::IntSub, u0, smallvec![rsp(), Varnode::constant(8, 8)], 0x1000),
            IrInsn::with_output(IrOp::Copy, rsp(), smallvec![u0], 0x1000),
            IrInsn::without_output(IrOp::Store, smallvec![ram, u0, Varnode::reg(120, 8)], 0x1000),
            IrInsn::with_output(IrOp::IntSub, u1, smallvec![rsp(), Varnode::constant(8, 8)], 0x1002),
            IrInsn::with_output(IrOp::Copy, rsp(), smallvec![u1], 0x1002),
            IrInsn::without_output(IrOp::Store, smallvec![ram, u1, Varnode::reg(112, 8)], 0x1002),
        ]);
        let mut resolver = StackAddrResolver::new(&ssa);
        let first = resolver
            .stack_offset_of_sv(ssa.var_map[&(BlockId(0), 2, VarnodeSlot::Input(1))])
            .unwrap();
        let second = resolver
            .stack_offset_of_sv(ssa.var_map[&(BlockId(0), 5, VarnodeSlot::Input(1))])
            .unwrap();
        let entry_rsp = SsaVarnode {
            base: rsp(),
            version: 0,
        };
        assert_eq!(first, StackAddr { root: entry_rsp, offset: -8 });
        assert_eq!(second, StackAddr { root: entry_rsp, offset: -16 });
        assert!(!first.overlaps(8, &second, 8));
    }
}
