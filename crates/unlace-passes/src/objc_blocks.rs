//! Detection of Objective-C block literal construction sites.
//!
//! Block literals are stack/global structs the compiler builds at the
//! call site to package a closure (function pointer + captured state)
//! for the Apple Block runtime. The MVP pattern recognised here is a
//! sequence of `STORE` instructions writing the canonical layout:
//!
//! ```text
//!   [base + 0]  = __NSConcrete{Stack,Global,Malloc}Block   ← isa
//!   [base + 8]  = flags  (u32) | reserved (u32)            ← (optional)
//!   [base + 16] = invoke (fn-ptr to ^(self, args…))
//!   [base + 24] = descriptor (Block_descriptor_1*)
//!   [base + 32+] = captured variables                      ← (optional)
//! ```
//!
//! This pass is **detection-only**: it walks the SSA function, finds
//! candidate block constructions, and returns metadata describing them.
//! Wiring the metadata into HIR / C output rendering is left as a follow-up.

use std::collections::BTreeSet;

use unlace_ir::ssa::SsaFunction;
use unlace_ir::{BlockId, IrInsn, IrOp, SpaceId, Varnode};

/// Canonical `isa` symbol names that mark a struct-init as a block literal.
pub const BLOCK_ISA_SYMBOLS: &[&str] = &[
    "__NSConcreteStackBlock",
    "__NSConcreteGlobalBlock",
    "__NSConcreteMallocBlock",
    "_NSConcreteStackBlock",
    "_NSConcreteGlobalBlock",
    "_NSConcreteMallocBlock",
];

/// Metadata describing a recovered block literal construction.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct BlockLiteral {
    /// CFG block where the construction was found.
    pub block_id: BlockId,
    /// Instruction index of the `isa` store (the recognition anchor).
    pub anchor_idx: usize,
    /// Constant address stored at offset 0 — one of the `NSConcrete*Block`
    /// isa pointers.
    pub isa_addr: u64,
    /// Function-pointer constant stored at offset 16 (`invoke`).
    pub invoke_addr: u64,
    /// Descriptor pointer stored at offset 24, when present.
    pub descriptor_addr: Option<u64>,
    /// Byte offsets (relative to the block base) at which captured values
    /// were written. Always >= 32.
    pub captured_offsets: Vec<u64>,
    /// Base of the block struct as a varnode (typically a stack pointer
    /// reference or a global address).
    pub base: Varnode,
}

/// Scan `func` for block-literal construction sites.
///
/// `block_isa_addresses` lists the constant pointer values that, when
/// stored at offset 0 of a struct, identify the struct as a block literal.
/// Callers populate this from the loader's symbol table by mapping the
/// addresses of [`BLOCK_ISA_SYMBOLS`] (or equivalents).
pub fn detect_objc_blocks(
    func: &SsaFunction,
    block_isa_addresses: &BTreeSet<u64>,
) -> Vec<BlockLiteral> {
    if block_isa_addresses.is_empty() {
        return Vec::new();
    }

    let mut out = Vec::new();

    for (&bid, block) in &func.function.blocks {
        let insns = &block.insns;
        for (idx, insn) in insns.iter().enumerate() {
            let Some(anchor) = match_isa_store(insn, block_isa_addresses) else {
                continue;
            };
            // Look ahead at most 16 instructions for the canonical layout.
            const LOOKAHEAD: usize = 16;
            let end = (idx + 1 + LOOKAHEAD).min(insns.len());

            let mut invoke: Option<u64> = None;
            let mut descriptor: Option<u64> = None;
            let mut captured = Vec::new();

            for follow in &insns[idx + 1..end] {
                let Some(child) = match_store_to_base(follow, &anchor.base) else {
                    continue;
                };
                match child.offset {
                    16 => {
                        if invoke.is_none() {
                            invoke = child.value_const;
                        }
                    }
                    24 => {
                        if descriptor.is_none() {
                            descriptor = child.value_const;
                        }
                    }
                    off if off >= 32 => {
                        captured.push(off);
                    }
                    _ => {}
                }
            }

            let Some(invoke_addr) = invoke else { continue };

            out.push(BlockLiteral {
                block_id: bid,
                anchor_idx: idx,
                isa_addr: anchor.isa_addr,
                invoke_addr,
                descriptor_addr: descriptor,
                captured_offsets: captured,
                base: anchor.base,
            });
        }
    }

    out
}

struct AnchorMatch {
    isa_addr: u64,
    base: Varnode,
}

/// Match a Store whose value is one of the known isa-pointer constants and
/// whose address is the *base* of a struct (offset 0). The returned `base`
/// is the address varnode we expect the follow-up stores to add offsets to.
fn match_isa_store(insn: &IrInsn, isa_addrs: &BTreeSet<u64>) -> Option<AnchorMatch> {
    if insn.op != IrOp::Store || insn.inputs.len() < 3 {
        return None;
    }
    let value = insn.inputs[2];
    if value.space != SpaceId::Const {
        return None;
    }
    if !isa_addrs.contains(&value.offset) {
        return None;
    }
    let base = insn.inputs[1];
    Some(AnchorMatch {
        isa_addr: value.offset,
        base,
    })
}

struct ChildStore {
    offset: u64,
    value_const: Option<u64>,
}

/// Match a Store whose address is `base + K` (for some constant K >= 8) and
/// return the offset K and any constant value being written.
///
/// The recognised address shapes are:
///   * the address varnode is exactly `base` and K = 0 (handled by the
///     anchor case — we don't re-match it here),
///   * the address varnode is `base` plus a const offset, recoverable by
///     matching `IntAdd(base, K)` at the source via a const-input pair
///     (when the lifter folded it),
///   * the constant address directly: `base.offset + K` (when base itself
///     is a constant global pointer).
fn match_store_to_base(insn: &IrInsn, base: &Varnode) -> Option<ChildStore> {
    if insn.op != IrOp::Store || insn.inputs.len() < 3 {
        return None;
    }
    let addr = insn.inputs[1];
    let value = insn.inputs[2];

    let offset = if addr == *base {
        0
    } else if base.space == SpaceId::Const
        && addr.space == SpaceId::Const
        && addr.offset >= base.offset
    {
        addr.offset - base.offset
    } else {
        return None;
    };

    let value_const = if value.space == SpaceId::Const {
        Some(value.offset)
    } else {
        None
    };

    Some(ChildStore {
        offset,
        value_const,
    })
}

#[cfg(test)]
mod tests {
    use super::*;
    use smallvec::smallvec;
    use unlace_ir::ssa::build_ssa;
    use unlace_ir::{BasicBlock, Function};

    const STACK_BLOCK_ISA: u64 = 0xCAFE_BABE_0000_0001;
    const GLOBAL_BLOCK_ISA: u64 = 0xCAFE_BABE_0000_0002;

    fn isa_set(addrs: &[u64]) -> BTreeSet<u64> {
        addrs.iter().copied().collect()
    }

    fn make_func_with_block(insns: Vec<IrInsn>) -> SsaFunction {
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

    fn store(addr: Varnode, value: Varnode, ea: u64) -> IrInsn {
        IrInsn::without_output(
            IrOp::Store,
            smallvec![Varnode::constant(0, 8), addr, value],
            ea,
        )
    }

    #[test]
    fn detects_stack_block_literal() {
        // Base: global address 0x4000. Stores at +0/+16/+24 (no captures).
        let base_addr: u64 = 0x4000;
        let base = Varnode::constant(base_addr, 8);
        let plus16 = Varnode::constant(base_addr + 16, 8);
        let plus24 = Varnode::constant(base_addr + 24, 8);
        let isa = Varnode::constant(STACK_BLOCK_ISA, 8);
        let invoke = Varnode::constant(0x1234_5000, 8);
        let descriptor = Varnode::constant(0x5000_0000, 8);
        let insns = vec![
            store(base, isa, 0x1000),
            store(plus16, invoke, 0x1004),
            store(plus24, descriptor, 0x1008),
        ];

        let func = make_func_with_block(insns);
        let isa_addrs = isa_set(&[STACK_BLOCK_ISA, GLOBAL_BLOCK_ISA]);
        let blocks = detect_objc_blocks(&func, &isa_addrs);

        assert_eq!(blocks.len(), 1);
        let b = &blocks[0];
        assert_eq!(b.isa_addr, STACK_BLOCK_ISA);
        assert_eq!(b.invoke_addr, 0x1234_5000);
        assert_eq!(b.descriptor_addr, Some(0x5000_0000));
        assert!(b.captured_offsets.is_empty());
    }

    #[test]
    fn detects_global_block_literal() {
        // Same shape but with the `Global` isa and a capture at offset 32.
        let base_addr: u64 = 0x8000;
        let base = Varnode::constant(base_addr, 8);
        let plus16 = Varnode::constant(base_addr + 16, 8);
        let plus24 = Varnode::constant(base_addr + 24, 8);
        let plus32 = Varnode::constant(base_addr + 32, 8);
        let isa = Varnode::constant(GLOBAL_BLOCK_ISA, 8);
        let invoke = Varnode::constant(0xAAA0_0000, 8);
        let descriptor = Varnode::constant(0xBBB0_0000, 8);
        let captured_val = Varnode::reg(0, 8);
        let insns = vec![
            store(base, isa, 0x1000),
            store(plus16, invoke, 0x1004),
            store(plus24, descriptor, 0x1008),
            store(plus32, captured_val, 0x100C),
        ];

        let func = make_func_with_block(insns);
        let isa_addrs = isa_set(&[STACK_BLOCK_ISA, GLOBAL_BLOCK_ISA]);
        let blocks = detect_objc_blocks(&func, &isa_addrs);

        assert_eq!(blocks.len(), 1);
        let b = &blocks[0];
        assert_eq!(b.isa_addr, GLOBAL_BLOCK_ISA);
        assert_eq!(b.invoke_addr, 0xAAA0_0000);
        assert_eq!(b.captured_offsets, vec![32]);
    }

    #[test]
    fn does_not_match_random_struct_init() {
        // A struct init that doesn't start with a known block-isa pointer
        // must NOT be picked up — even if it has stores at +16 and +24.
        let base_addr: u64 = 0xC000;
        let base = Varnode::constant(base_addr, 8);
        let plus16 = Varnode::constant(base_addr + 16, 8);
        let plus24 = Varnode::constant(base_addr + 24, 8);
        let not_isa = Varnode::constant(0x1111_1111, 8); // not in isa set
        let invoke = Varnode::constant(0x2222_2222, 8);
        let descriptor = Varnode::constant(0x3333_3333, 8);
        let insns = vec![
            store(base, not_isa, 0x1000),
            store(plus16, invoke, 0x1004),
            store(plus24, descriptor, 0x1008),
        ];

        let func = make_func_with_block(insns);
        let isa_addrs = isa_set(&[STACK_BLOCK_ISA, GLOBAL_BLOCK_ISA]);
        let blocks = detect_objc_blocks(&func, &isa_addrs);

        assert!(blocks.is_empty());
    }
}
