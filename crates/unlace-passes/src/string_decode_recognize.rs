//! String-decode-stub recognizer (ROADMAP Phase E.4.3).
//!
//! Detects the common "encrypted string table + decode loop" obfuscation: a
//! loop that loads bytes from a data blob, transforms each with a constant key
//! (`XOR`/`ADD`/`SUB`/rotate), and stores the plaintext back. Reported as a
//! [`StringDecodeFinding`] so the analyst / C printer can recover the string.
//!
//! Like [`crate::vm_dispatch_recognize`] this is a conservative structural
//! signal, never a rewrite: it requires a loop body that contains both a
//! `Load` and a key transform feeding a `Store`. A benign byte-copy loop (no
//! transform) does not match.

use std::collections::{BTreeMap, BTreeSet};

use unlace_ir::ssa::SsaFunction;
use unlace_ir::{BlockId, IrOp, SpaceId};

/// The arithmetic transform a decode stub applies to each byte.
#[derive(Copy, Clone, Debug, PartialEq, Eq, PartialOrd, Ord, Hash)]
pub enum DecodeOp {
    Xor,
    Add,
    Sub,
    Rol,
    Ror,
}

/// A recognised string-decode loop.
#[derive(Clone, Debug, PartialEq, Eq)]
pub struct StringDecodeFinding {
    /// The loop header block containing the decode body.
    pub loop_header: BlockId,
    /// The transform applied to each byte.
    pub op: DecodeOp,
    /// The constant key, when the transform's operand is a constant.
    pub key: Option<u64>,
}

/// Recognise string-decode loops in `func`, in deterministic block order.
pub fn recognize_string_decoders(func: &SsaFunction) -> Vec<StringDecodeFinding> {
    let predecessors = build_predecessors(func);
    let mut findings = Vec::new();

    for (&bid, block) in &func.function.blocks {
        // Loop-body test: the block is part of a loop (a successor edge returns
        // to a block that dominates it, i.e. a back-edge target).
        if !is_in_loop(func, &predecessors, bid) {
            continue;
        }

        let has_load = block.insns.iter().any(|i| i.op == IrOp::Load);
        let has_store = block.insns.iter().any(|i| i.op == IrOp::Store);
        if !has_load || !has_store {
            continue;
        }

        // Find the first key transform in the body.
        let Some((op, key)) = block.insns.iter().find_map(transform_of) else {
            continue;
        };

        findings.push(StringDecodeFinding {
            loop_header: bid,
            op,
            key,
        });
    }

    findings
}

/// Classify an instruction as a decode transform + recover its constant key
/// (the first input residing in the constant space), if any.
fn transform_of(insn: &unlace_ir::IrInsn) -> Option<(DecodeOp, Option<u64>)> {
    let op = match insn.op {
        IrOp::IntXor => DecodeOp::Xor,
        IrOp::IntAdd => DecodeOp::Add,
        IrOp::IntSub => DecodeOp::Sub,
        IrOp::IntLeft => DecodeOp::Rol,
        IrOp::IntRight => DecodeOp::Ror,
        _ => return None,
    };
    let key = insn
        .inputs
        .iter()
        .find(|vn| vn.space == SpaceId::Const)
        .map(|vn| vn.offset);
    Some((op, key))
}

/// Map each block to the set of its predecessors.
fn build_predecessors(func: &SsaFunction) -> BTreeMap<BlockId, BTreeSet<BlockId>> {
    let mut preds: BTreeMap<BlockId, BTreeSet<BlockId>> = BTreeMap::new();
    for (&bid, block) in &func.function.blocks {
        for &succ in &block.successors {
            preds.entry(succ).or_default().insert(bid);
        }
    }
    preds
}

/// True iff `bid` is a loop header: some predecessor is dominated by `bid`
/// (a back-edge into it).
fn is_in_loop(
    func: &SsaFunction,
    predecessors: &BTreeMap<BlockId, BTreeSet<BlockId>>,
    bid: BlockId,
) -> bool {
    predecessors
        .get(&bid)
        .is_some_and(|preds| preds.iter().any(|&p| dominates(func, bid, p)))
}

/// True iff block `a` dominates block `b` (walking `b`'s idom chain reaches
/// `a`). `a == b` counts (a self-loop is a back-edge).
fn dominates(func: &SsaFunction, a: BlockId, b: BlockId) -> bool {
    if a == b {
        return true;
    }
    let mut cur = b;
    while let Some(parent) = func.dom_tree.idom(cur) {
        if parent == cur {
            return false;
        }
        if parent == a {
            return true;
        }
        cur = parent;
    }
    false
}

#[cfg(test)]
mod tests {
    use smallvec::smallvec;

    use super::*;
    use unlace_ir::ssa::build_ssa;
    use unlace_ir::{BasicBlock, Function, IrInsn, Varnode};

    fn c(value: u64) -> Varnode {
        Varnode::constant(value, 8)
    }

    fn reg(off: u64) -> Varnode {
        Varnode::reg(off, 8)
    }

    /// A self-looping block: load a byte, xor with `key`, store it back.
    fn decode_loop(key: u64) -> SsaFunction {
        let mut func = Function::new("decode", BlockId(0), 0x1000);
        let mut bb = BasicBlock::new(BlockId(0));
        // tmp = LOAD(ram, ptr)
        bb.insns.push(IrInsn::with_output(
            IrOp::Load,
            reg(1),
            smallvec![c(0), reg(2)],
            0x1000,
        ));
        // dec = tmp ^ key
        bb.insns.push(IrInsn::with_output(
            IrOp::IntXor,
            reg(3),
            smallvec![reg(1), c(key)],
            0x1004,
        ));
        // STORE(ram, ptr, dec)
        bb.insns.push(IrInsn::without_output(
            IrOp::Store,
            smallvec![c(0), reg(2), reg(3)],
            0x1008,
        ));
        // CBRANCH back to self (loop)
        bb.insns.push(IrInsn::without_output(
            IrOp::Cbranch,
            smallvec![Varnode::ram(0x1000, 8), reg(4)],
            0x100c,
        ));
        bb.successors.push(BlockId(0));
        func.insert_block(bb);
        build_ssa(func)
    }

    #[test]
    fn recognizes_xor_decode_loop_with_key() {
        let ssa = decode_loop(0x5A);
        let findings = recognize_string_decoders(&ssa);
        assert_eq!(findings.len(), 1, "got: {findings:?}");
        assert_eq!(findings[0].op, DecodeOp::Xor);
        assert_eq!(findings[0].key, Some(0x5A));
        assert_eq!(findings[0].loop_header, BlockId(0));
    }

    #[test]
    fn ignores_loop_without_transform() {
        // A plain byte-copy loop: load + store, no transform.
        let mut func = Function::new("copy", BlockId(0), 0x1000);
        let mut bb = BasicBlock::new(BlockId(0));
        bb.insns.push(IrInsn::with_output(
            IrOp::Load,
            reg(1),
            smallvec![c(0), reg(2)],
            0x1000,
        ));
        bb.insns.push(IrInsn::without_output(
            IrOp::Store,
            smallvec![c(0), reg(3), reg(1)],
            0x1004,
        ));
        bb.insns.push(IrInsn::without_output(
            IrOp::Cbranch,
            smallvec![Varnode::ram(0x1000, 8), reg(4)],
            0x1008,
        ));
        bb.successors.push(BlockId(0));
        func.insert_block(bb);
        let ssa = build_ssa(func);
        assert!(recognize_string_decoders(&ssa).is_empty());
    }

    #[test]
    fn ignores_straightline_transform() {
        // XOR present but no loop back-edge → not a decode stub.
        let mut func = Function::new("flat", BlockId(0), 0x1000);
        let mut bb = BasicBlock::new(BlockId(0));
        bb.insns.push(IrInsn::with_output(
            IrOp::Load,
            reg(1),
            smallvec![c(0), reg(2)],
            0x1000,
        ));
        bb.insns.push(IrInsn::with_output(
            IrOp::IntXor,
            reg(3),
            smallvec![reg(1), c(0x5A)],
            0x1004,
        ));
        bb.insns.push(IrInsn::without_output(
            IrOp::Store,
            smallvec![c(0), reg(2), reg(3)],
            0x1008,
        ));
        bb.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0x100c));
        func.insert_block(bb);
        let ssa = build_ssa(func);
        assert!(recognize_string_decoders(&ssa).is_empty());
    }
}
