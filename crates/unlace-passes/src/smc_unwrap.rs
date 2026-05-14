//! Self-modifying-code (SMC) unwrap detection — t401.
//!
//! Some obfuscators and old DOS / packer code patches its own `.text` at
//! runtime: a `STORE` writes a byte (or word) into an address that lies
//! inside an executable, writable segment. When the patched value is
//! statically predictable — a constant immediate, or `const_a XOR const_b`
//! folded through a known seed — we can compute the final byte pattern
//! ahead of time and rewrite the code section in place, recovering the
//! "real" instructions that would only have appeared after the patcher ran.
//!
//! This module exposes [`detect_smc`], a pure analysis routine that walks
//! a function's `STORE` instructions and returns a [`SmcRewrite`] for each
//! store whose destination lands inside the supplied code-section range
//! *and* whose value is foldable to a constant. The caller (typically the
//! pipeline driver, which owns the actual section bytes) is responsible for
//! filling `original_bytes` from its memory image and applying the patch.
//!
//! Supported value patterns (simple, by design — anything that needs phi /
//! loop reasoning would belong to a separate symbolic-execution pass):
//!
//! 1. **Constant store** — `STORE space, addr_const, value_const`
//!    Value is taken directly from the third operand.
//! 2. **XOR-folded constant** — `STORE space, addr_const, t`
//!    where `t = INT_XOR(c0, c1)` with both `c0`, `c1` constants.
//!    Result is `(c0 ^ c1)` masked to the store width.
//!
//! The `new_bytes` field is always little-endian (matching the dominant
//! target architectures unlace lifts today; if/when big-endian SMC support
//! is added we'll thread an explicit endianness through the API).

use unlace_ir::ssa::{SsaFunction, SsaVarnode, VarnodeSlot};
use unlace_ir::{BlockId, IrInsn, IrOp, SpaceId};

/// A statically-predictable self-modifying-code patch.
///
/// `original_bytes` is left empty by [`detect_smc`] — the analysis pass has
/// no view into the raw section image. The caller fills it in from its
/// loader-resident byte buffer before applying or auditing the rewrite.
#[derive(Clone, Debug, PartialEq, Eq)]
pub struct SmcRewrite {
    /// Absolute virtual address being patched (taken from the STORE's
    /// constant destination operand).
    pub addr: u64,
    /// Bytes the section currently holds at `addr` (filled in by the
    /// caller; analysis leaves this empty).
    pub original_bytes: Vec<u8>,
    /// Bytes the SMC store will produce, little-endian, length matching
    /// the STORE width (1, 2, 4, or 8 bytes).
    pub new_bytes: Vec<u8>,
}

/// Walk every `STORE` in `func` and return one [`SmcRewrite`] per store
/// whose destination is a constant address inside `code_section` and whose
/// stored value folds to a static constant.
///
/// `code_section` is a half-open `[start, end)` range of virtual addresses
/// describing the writable executable region (e.g. an old-school
/// self-patching `.text` segment, or a DOS .COM file's code area).
pub fn detect_smc(func: &SsaFunction, code_section: (u64, u64)) -> Vec<SmcRewrite> {
    let (sect_start, sect_end) = code_section;
    if sect_end <= sect_start {
        return Vec::new();
    }

    let mut rewrites = Vec::new();

    for (&bid, block) in &func.function.blocks {
        for (insn_idx, insn) in block.insns.iter().enumerate() {
            if insn.op != IrOp::Store {
                continue;
            }
            // STORE inputs: [space_id_const, addr, value]
            if insn.inputs.len() != 3 {
                continue;
            }
            let addr_vn = insn.inputs[1];
            let value_vn = insn.inputs[2];

            // Destination must be a concrete constant address.
            if addr_vn.space != SpaceId::Const {
                continue;
            }
            let store_addr = addr_vn.offset;
            if store_addr < sect_start || store_addr >= sect_end {
                continue;
            }

            // Resolve the value to a constant via the two supported
            // patterns (direct constant, or XOR of two constants).
            let Some(folded) = resolve_constant_value(func, bid, insn_idx, value_vn) else {
                continue;
            };

            let width = value_vn.size as usize;
            // STORE width should be 1..=8; anything weirder we skip rather
            // than truncate silently.
            if width == 0 || width > 8 {
                continue;
            }
            let mask = if width == 8 {
                u64::MAX
            } else {
                (1u64 << (width * 8)) - 1
            };
            let masked = folded & mask;
            let new_bytes = masked.to_le_bytes()[..width].to_vec();

            rewrites.push(SmcRewrite {
                addr: store_addr,
                original_bytes: Vec::new(),
                new_bytes,
            });
        }
    }

    rewrites
}

/// Try to resolve a STORE's value operand to a static `u64`.
///
/// Patterns:
///   - operand is itself `Const`             → return its offset
///   - operand is SSA-defined by `INT_XOR`   → fold if both XOR operands
///     are constants (directly or through their own SSA defs)
fn resolve_constant_value(
    func: &SsaFunction,
    bid: BlockId,
    insn_idx: usize,
    value_vn: unlace_ir::Varnode,
) -> Option<u64> {
    // Direct constant.
    if value_vn.space == SpaceId::Const {
        return Some(value_vn.offset);
    }

    // SSA-defined? Look up the defining insn for input slot 2 of the STORE.
    let value_ssa = func
        .var_map
        .get(&(bid, insn_idx, VarnodeSlot::Input(2)))
        .copied()?;
    let (_def_bid, _def_idx, def_insn) = defining_insn(func, value_ssa)?;

    // Pattern: INT_XOR(c0, c1) where each input is either a direct Const
    // or resolves through one more SSA hop to a Const. Limiting to one
    // hop keeps detection O(1) per STORE and avoids accidentally chasing
    // recursive phi cycles.
    if def_insn.op == IrOp::IntXor && def_insn.inputs.len() == 2 {
        let a = resolve_operand_const(func, def_insn, 0)?;
        let b = resolve_operand_const(func, def_insn, 1)?;
        return Some(a ^ b);
    }

    None
}

/// Resolve a single operand of `insn` (at input index `idx`) to a `u64`,
/// either directly (the operand is `Const`) or by following one SSA edge
/// to a `COPY` of a constant. Returns `None` if no constant can be found
/// in at most one hop.
fn resolve_operand_const(func: &SsaFunction, insn: &IrInsn, idx: usize) -> Option<u64> {
    let vn = *insn.inputs.get(idx)?;
    if vn.space == SpaceId::Const {
        return Some(vn.offset);
    }

    // Find the SSA varnode at this input slot by scanning var_map for
    // the defining instruction whose Output equals this `insn`'s operand.
    // We can't keyed-lookup directly from `insn` (no (bid, idx) in scope),
    // so accept a single COPY-of-const hop via output side.
    for ((_def_bid, _def_idx, slot), ssa_var) in &func.var_map {
        if !matches!(slot, VarnodeSlot::Output) {
            continue;
        }
        if ssa_var.base != vn {
            continue;
        }
        // Found the SSA varnode whose base is our operand; check its def.
        if let Some((_, _, def_insn)) = defining_insn(func, *ssa_var) {
            if def_insn.op == IrOp::Copy && def_insn.inputs.len() == 1 {
                let src = def_insn.inputs[0];
                if src.space == SpaceId::Const {
                    return Some(src.offset);
                }
            }
        }
    }
    None
}

/// Look up the defining instruction for an SSA varnode by scanning
/// `var_map` for the `(BlockId, insn_idx, Output)` entry whose value is
/// `target`. Mirrors the helper in `algebraic_simplify` so this module
/// stays self-contained.
fn defining_insn(
    func: &SsaFunction,
    target: SsaVarnode,
) -> Option<(BlockId, usize, &IrInsn)> {
    for (&(def_bid, def_idx, ref slot), &def_ssa) in &func.var_map {
        if !matches!(slot, VarnodeSlot::Output) || def_ssa != target {
            continue;
        }
        let def_insn = func.function.blocks.get(&def_bid)?.insns.get(def_idx)?;
        return Some((def_bid, def_idx, def_insn));
    }
    None
}

#[cfg(test)]
mod tests {
    use smallvec::smallvec;

    use unlace_ir::ssa::build_ssa;
    use unlace_ir::{BasicBlock, BlockId, Function, IrInsn, IrOp, SpaceId, Varnode};

    use super::*;

    /// Build a single-block function containing the given IR insns.
    fn single_block_func(insns: Vec<IrInsn>, func_addr: u64) -> SsaFunction {
        let mut func = Function::new("test_smc", BlockId(0), func_addr);
        let mut bb = BasicBlock::new(BlockId(0));
        bb.insns = insns;
        // Add a RETURN terminator so build_ssa is happy.
        bb.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec![Varnode::constant(0, 8)],
            func_addr + 0x100,
        ));
        func.insert_block(bb);
        build_ssa(func)
    }

    /// `STORE ram, 0x2010, 0x90`  inside code section [0x2000, 0x3000)
    /// — classic "patch a byte to NOP" idiom. Detected as a 1-byte rewrite.
    #[test]
    fn detects_constant_byte_store_inside_code_section() {
        let ram_space = Varnode::constant(SpaceId::Ram as u64, 8);
        let store = IrInsn::without_output(
            IrOp::Store,
            smallvec![
                ram_space,
                Varnode::constant(0x2010, 8),
                Varnode::constant(0x90, 1)
            ],
            0x4000,
        );
        let ssa = single_block_func(vec![store], 0x4000);

        let rewrites = detect_smc(&ssa, (0x2000, 0x3000));
        assert_eq!(rewrites.len(), 1, "should detect the one in-range store");
        assert_eq!(rewrites[0].addr, 0x2010);
        assert_eq!(rewrites[0].new_bytes, vec![0x90]);
        assert!(
            rewrites[0].original_bytes.is_empty(),
            "analysis leaves original_bytes for the caller to fill from the section image"
        );
    }

    /// A STORE whose destination lives *outside* the code section must be
    /// ignored — that's a normal data write, not SMC.
    #[test]
    fn ignores_stores_outside_code_section() {
        let ram_space = Varnode::constant(SpaceId::Ram as u64, 8);
        // Two stores: one inside, one outside.
        let inside = IrInsn::without_output(
            IrOp::Store,
            smallvec![
                ram_space,
                Varnode::constant(0x2050, 8),
                Varnode::constant(0xCC, 1)
            ],
            0x4000,
        );
        let outside = IrInsn::without_output(
            IrOp::Store,
            smallvec![
                ram_space,
                Varnode::constant(0x8000, 8),
                Varnode::constant(0xDE, 1)
            ],
            0x4004,
        );
        let ssa = single_block_func(vec![inside, outside], 0x4000);

        let rewrites = detect_smc(&ssa, (0x2000, 0x3000));
        assert_eq!(
            rewrites.len(),
            1,
            "only the in-range store should be reported"
        );
        assert_eq!(rewrites[0].addr, 0x2050);
        assert_eq!(rewrites[0].new_bytes, vec![0xCC]);
    }

    /// XOR-folded value: `t = INT_XOR(0xAA, 0xFF)`; `STORE … 0x2020, t`.
    /// Detector should fold `0xAA ^ 0xFF = 0x55` and emit a 1-byte rewrite.
    #[test]
    fn folds_xor_of_two_constants() {
        let ram_space = Varnode::constant(SpaceId::Ram as u64, 8);
        let tmp = Varnode::unique(0x10, 1);
        let xor = IrInsn::with_output(
            IrOp::IntXor,
            tmp,
            smallvec![Varnode::constant(0xAA, 1), Varnode::constant(0xFF, 1)],
            0x4000,
        );
        let store = IrInsn::without_output(
            IrOp::Store,
            smallvec![ram_space, Varnode::constant(0x2020, 8), tmp],
            0x4004,
        );
        let ssa = single_block_func(vec![xor, store], 0x4000);

        let rewrites = detect_smc(&ssa, (0x2000, 0x3000));
        assert_eq!(rewrites.len(), 1, "XOR of two constants should fold");
        assert_eq!(rewrites[0].addr, 0x2020);
        assert_eq!(rewrites[0].new_bytes, vec![0x55], "0xAA ^ 0xFF = 0x55");
    }

    /// A STORE whose destination address is itself a register (not a
    /// constant) cannot be statically resolved and must NOT be reported,
    /// even if it happens to alias the code section at runtime.
    #[test]
    fn ignores_stores_with_non_constant_destination() {
        let ram_space = Varnode::constant(SpaceId::Ram as u64, 8);
        // Destination is a register, not a constant — opaque to this pass.
        let store = IrInsn::without_output(
            IrOp::Store,
            smallvec![ram_space, Varnode::reg(0, 8), Varnode::constant(0x42, 1)],
            0x4000,
        );
        let ssa = single_block_func(vec![store], 0x4000);

        let rewrites = detect_smc(&ssa, (0x2000, 0x3000));
        assert!(
            rewrites.is_empty(),
            "non-constant destination must not be flagged as SMC"
        );
    }
}
