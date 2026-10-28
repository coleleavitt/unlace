//! Aliasing categorization pass.
//!
//! Walks every `LOAD`/`STORE` in an SSA function and tags it with an
//! [`AliasCategory`] based on cheap, conservative heuristics. The tag is
//! purely additive metadata — passes that haven't been updated to read
//! it continue to behave exactly as before. Passes that *have* been
//! updated (`copy_prop`, `sccp`, `dse`) consult the tag to decide
//! whether the access is safe to fold, propagate through, or eliminate.
//!
//! ## Heuristics
//!
//! | Category   | Test                                                                       |
//! |------------|----------------------------------------------------------------------------|
//! | `Stack`    | base is RSP/RBP (offsets 32 / 40 in `SpaceId::Register`)                   |
//! | `Static`   | address operand is a constant in a `static`/`.rodata`-style range — TODO  |
//! | `Heap`     | base flows from a recognised allocator call — TODO                        |
//! | `Mmio`     | address operand is a constant in a configured MMIO range (default: empty) |
//! | `Volatile` | explicit DWARF/PDB volatile qualifier — TODO                              |
//! | `Unknown`  | everything else                                                            |
//!
//! Heuristics marked TODO leave the framework in place but currently
//! return `Unknown` so this slice doesn't change parity. The categorizer
//! is intentionally conservative — `Unknown` is the default for any
//! address the heuristic can't classify.
//!
//! ## MMIO ranges
//!
//! MMIO categorization is off by default. Callers wire in known
//! per-architecture ranges via [`MmioRanges::with_ranges`]. A constant
//! address that falls inside any registered range gets tagged `Mmio`.

use std::collections::{BTreeMap, BTreeSet};
use std::ops::Range;

use unlace_ir::ssa::SsaFunction;
use unlace_ir::{AliasCategory, IrOp, SpaceId, Varnode};

use crate::analysis_context::PreservedAnalyses;
use crate::pass::{Pass, PassError, PassPhase};

/// Architectural stack-pointer register offsets recognised as `Stack`.
/// Mirrors the constants in [`dead_store_elim`](crate::dead_store_elim)
/// and [`stack_vars`](crate::stack_vars).
const RSP_OFFSET: u64 = 32;
const RBP_OFFSET: u64 = 40;

/// Configurable MMIO address ranges. A LOAD/STORE whose constant
/// address falls in any range is tagged [`AliasCategory::Mmio`].
///
/// Default: empty (no addresses categorized as MMIO).
#[derive(Clone, Debug, Default)]
pub struct MmioRanges {
    ranges: Vec<Range<u64>>,
}

impl MmioRanges {
    /// Empty range set — the default — leaves MMIO categorization off.
    pub fn new() -> Self {
        Self::default()
    }

    /// Construct from an explicit list of `[start, end)` ranges.
    pub fn with_ranges(ranges: impl IntoIterator<Item = Range<u64>>) -> Self {
        Self {
            ranges: ranges.into_iter().collect(),
        }
    }

    /// `true` if `addr` falls in any registered MMIO range.
    pub fn contains(&self, addr: u64) -> bool {
        self.ranges.iter().any(|r| r.contains(&addr))
    }

    pub fn is_empty(&self) -> bool {
        self.ranges.is_empty()
    }
}

/// Pass that tags `LOAD`/`STORE` instructions with an [`AliasCategory`].
///
/// Runs in [`PassPhase::PreOpt`] before any local-optimisation pass
/// (`copy_prop`, `sccp`, `dse`) that consults the tag.
pub struct AliasCategorizePass {
    pub mmio_ranges: MmioRanges,
}

impl AliasCategorizePass {
    pub fn new() -> Self {
        Self {
            mmio_ranges: MmioRanges::new(),
        }
    }

    pub fn with_mmio_ranges(mmio_ranges: MmioRanges) -> Self {
        Self { mmio_ranges }
    }
}

impl Default for AliasCategorizePass {
    fn default() -> Self {
        Self::new()
    }
}

impl Pass for AliasCategorizePass {
    fn name(&self) -> &str {
        "alias-categorize"
    }

    fn phase(&self) -> PassPhase {
        PassPhase::PreOpt
    }

    fn preserved_analyses(&self) -> PreservedAnalyses {
        PreservedAnalyses::all()
    }

    fn run(&self, func: &mut SsaFunction) -> Result<bool, PassError> {
        // Reserved for a future DWARF/PDB-driven volatile-stack-slot
        // pass; today the lvar model doesn't expose `volatile` on every
        // collected slot, so this set is intentionally empty. The
        // framework is in place for when it does.
        let volatile_stack_offsets: BTreeSet<i64> = BTreeSet::new();

        let mut changed = false;

        // Collect classifications first, apply second — we can't hold
        // a `&mut block` while iterating `&func.var_map`.
        let mut classifications: Vec<(unlace_ir::BlockId, usize, AliasCategory)> = Vec::new();

        for (&bid, block) in &func.function.blocks {
            for (insn_idx, insn) in block.insns.iter().enumerate() {
                let cat = match insn.op {
                    IrOp::Load => self.categorize_load(insn, &volatile_stack_offsets),
                    IrOp::Store => self.categorize_store(insn, &volatile_stack_offsets),
                    _ => continue,
                };
                if insn.category != Some(cat) {
                    classifications.push((bid, insn_idx, cat));
                }
            }
        }

        for (bid, idx, cat) in classifications {
            if let Some(block) = func.function.blocks.get_mut(&bid)
                && let Some(insn) = block.insns.get_mut(idx)
            {
                insn.category = Some(cat);
                changed = true;
            }
        }

        // Per-function histogram of the categories assigned.
        if tracing::enabled!(target: "unlace::alias", tracing::Level::DEBUG) {
            let mut hist: BTreeMap<&'static str, u64> = BTreeMap::new();
            for block in func.function.blocks.values() {
                for insn in &block.insns {
                    if !matches!(insn.op, IrOp::Load | IrOp::Store) {
                        continue;
                    }
                    let key = insn.category.map(|c| c.name()).unwrap_or("Untagged");
                    *hist.entry(key).or_default() += 1;
                }
            }
            if !hist.is_empty() {
                tracing::debug!(target: "unlace::alias", "fn={} {:?}", func.function.name, hist);
            }
        }

        Ok(changed)
    }
}

impl AliasCategorizePass {
    fn categorize_load(
        &self,
        insn: &unlace_ir::IrInsn,
        volatile_stack_offsets: &BTreeSet<i64>,
    ) -> AliasCategory {
        // LOAD canonical form: inputs = [space, addr]; legacy: [addr].
        let addr = if insn.inputs.len() >= 2 {
            insn.inputs[1]
        } else if !insn.inputs.is_empty() {
            insn.inputs[0]
        } else {
            return AliasCategory::Unknown;
        };
        self.categorize_address(&addr, volatile_stack_offsets)
    }

    fn categorize_store(
        &self,
        insn: &unlace_ir::IrInsn,
        volatile_stack_offsets: &BTreeSet<i64>,
    ) -> AliasCategory {
        // STORE canonical form: inputs = [space, addr, value]; legacy: [addr, value].
        let addr = if insn.inputs.len() >= 3 {
            insn.inputs[1]
        } else if insn.inputs.len() >= 2 {
            insn.inputs[0]
        } else {
            return AliasCategory::Unknown;
        };
        self.categorize_address(&addr, volatile_stack_offsets)
    }

    fn categorize_address(
        &self,
        addr: &Varnode,
        _volatile_stack_offsets: &BTreeSet<i64>,
    ) -> AliasCategory {
        // Stack: RSP/RBP directly as the address operand. A fuller
        // analysis would also chase INT_ADD/INT_SUB back to RSP, but
        // DSE already does that — `Unknown` here just means "DSE keeps
        // its current behavior", which is what we want for parity.
        if addr.space == SpaceId::Register
            && (addr.offset == RSP_OFFSET || addr.offset == RBP_OFFSET)
        {
            return AliasCategory::Stack;
        }

        // Constant address: check MMIO ranges. Static/Heap detection
        // requires loader-section / allocator info not plumbed in this
        // slice; the categorizer struct exposes the seams.
        if addr.space == SpaceId::Const && self.mmio_ranges.contains(addr.offset) {
            return AliasCategory::Mmio;
        }
        // TODO: consult loader sections to tag .data/.bss/.rodata
        //       constants as Static. Today: Unknown.

        // TODO: walk var_map for the address def-site, recognise:
        //       - INT_ADD(rsp, _) → Stack
        //       - allocator-return def → Heap
        //       - DWARF volatile annotation → Volatile

        AliasCategory::Unknown
    }
}

#[cfg(test)]
mod tests {
    use smallvec::smallvec;

    use unlace_ir::ssa::build_ssa;
    use unlace_ir::{BasicBlock, BlockId, Function, IrInsn, IrOp, SpaceId, Varnode};

    use super::*;

    fn rsp() -> Varnode {
        Varnode::reg(RSP_OFFSET, 8)
    }

    fn make_single_block_ssa(insns: Vec<IrInsn>) -> SsaFunction {
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

    /// `STORE [ram, RSP, val]` is categorized `Stack`.
    #[test]
    fn rsp_relative_store_is_stack() {
        let val = Varnode::constant(0xAA, 8);
        let space_ram = Varnode::constant(SpaceId::Ram as u64, 8);
        let store = IrInsn::without_output(IrOp::Store, smallvec![space_ram, rsp(), val], 0x1000);

        let mut ssa = make_single_block_ssa(vec![store]);
        let changed = AliasCategorizePass::new().run(&mut ssa).expect("pass ok");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        let store = &block.insns[0];
        assert_eq!(store.op, IrOp::Store);
        assert_eq!(store.category, Some(AliasCategory::Stack));
    }

    /// `LOAD [ram, RSP]` is categorized `Stack`.
    #[test]
    fn rsp_relative_load_is_stack() {
        let space_ram = Varnode::constant(SpaceId::Ram as u64, 8);
        let out = Varnode::unique(0, 8);
        let load = IrInsn::with_output(IrOp::Load, out, smallvec![space_ram, rsp()], 0x1000);

        let mut ssa = make_single_block_ssa(vec![load]);
        let changed = AliasCategorizePass::new().run(&mut ssa).expect("pass ok");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        let load = &block.insns[0];
        assert_eq!(load.op, IrOp::Load);
        assert_eq!(load.category, Some(AliasCategory::Stack));
    }

    /// A LOAD from a constant address inside a configured MMIO range
    /// is tagged `Mmio`.
    #[test]
    fn mmio_range_categorizes_load_as_mmio() {
        let mmio_addr = Varnode::constant(0xFFFF_0040, 4);
        let space_ram = Varnode::constant(SpaceId::Ram as u64, 8);
        let out = Varnode::unique(0, 4);
        let load = IrInsn::with_output(IrOp::Load, out, smallvec![space_ram, mmio_addr], 0x1000);

        let mut ssa = make_single_block_ssa(vec![load]);
        let pass = AliasCategorizePass::with_mmio_ranges(MmioRanges::with_ranges(std::iter::once(
            0xFFFF_0000..0xFFFF_FFFF,
        )));
        assert!(pass.run(&mut ssa).expect("pass ok"));

        let block = ssa.function.blocks.values().next().expect("has block");
        assert_eq!(block.insns[0].category, Some(AliasCategory::Mmio));
    }

    /// Without any MMIO range configured, the same constant address
    /// remains `Unknown` (preserving current parity).
    #[test]
    fn no_mmio_range_keeps_unknown() {
        let addr = Varnode::constant(0xFFFF_0040, 4);
        let space_ram = Varnode::constant(SpaceId::Ram as u64, 8);
        let out = Varnode::unique(0, 4);
        let load = IrInsn::with_output(IrOp::Load, out, smallvec![space_ram, addr], 0x1000);

        let mut ssa = make_single_block_ssa(vec![load]);
        AliasCategorizePass::new().run(&mut ssa).expect("pass ok");

        let block = ssa.function.blocks.values().next().expect("has block");
        assert_eq!(block.insns[0].category, Some(AliasCategory::Unknown));
    }

    /// A LOAD with a non-categorizable address gets `Unknown` (passes
    /// fall back to their current conservative behavior).
    #[test]
    fn arbitrary_register_address_is_unknown() {
        let r0 = Varnode::reg(0, 8);
        let space_ram = Varnode::constant(SpaceId::Ram as u64, 8);
        let out = Varnode::unique(0, 8);
        let load = IrInsn::with_output(IrOp::Load, out, smallvec![space_ram, r0], 0x1000);

        let mut ssa = make_single_block_ssa(vec![load]);
        AliasCategorizePass::new().run(&mut ssa).expect("pass ok");

        let block = ssa.function.blocks.values().next().expect("has block");
        assert_eq!(block.insns[0].category, Some(AliasCategory::Unknown));
    }
}
