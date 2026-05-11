//! BSim-style function fingerprinting for clone detection.
//!
//! This module produces two complementary similarity descriptors:
//!
//! 1. [`fingerprint_function`] — a single 64-bit hash over the sequence of
//!    `(IrOp, input_count, has_output)` tuples in CFG (BFS-from-entry) order.
//!    Register names, constants, and SSA versions are intentionally ignored
//!    so register renaming or constant substitution does not perturb the
//!    hash. Two functions with identical opcode skeletons and the same CFG
//!    traversal order produce the same fingerprint.
//!
//! 2. [`build_feature_vector`] + [`similarity`] — a coarser opcode-frequency
//!    histogram (length [`IROP_COUNT`]) compared via cosine similarity. This
//!    tolerates small structural perturbations (an extra COPY, a reordered
//!    block) that would flip the exact hash, making it suitable for
//!    near-clone detection.
//!
//! The pair mirrors Ghidra's BSim primitives: an exact-match digest plus a
//! fuzzy feature vector for ranking candidates.

use std::collections::{HashSet, VecDeque};
use std::hash::Hasher;

use unlace_ir::ssa::SsaFunction;
use unlace_ir::{BlockId, IROP_COUNT, IrOp};

/// Compute a 64-bit structural fingerprint for `func`.
///
/// The hash is computed over `(IrOp as u8, input_count as u32, has_output as u8)`
/// triples for every instruction reached from the entry block in BFS order
/// (CFG order). Within a block, instructions are visited in their stored
/// order. Phi nodes (Multiequal) attached to a block are folded in before
/// the block's regular instructions so that SSA-introduced joins participate
/// in the fingerprint.
///
/// Register names, SSA versions, and constant values are not consulted, so
/// the fingerprint is invariant under register renaming and constant
/// substitution. The opcode mix, instruction count, and CFG traversal order
/// are all that matter.
///
/// Implementation note: we use `std::collections::hash_map::DefaultHasher`
/// rather than FxHash so the value is stable across architectures and
/// independent of HashMap iteration order. Two structurally identical
/// functions will always produce the same `u64` on any platform that
/// implements the standard `SipHasher` (i.e. all of them).
pub fn fingerprint_function(func: &SsaFunction) -> u64 {
    let mut hasher = std::collections::hash_map::DefaultHasher::new();
    visit_blocks_in_cfg_order(func, |block_id| {
        // Fold in phi nodes for this block first — they form the conceptual
        // top of the block in SSA form.
        if let Some(phis) = func.phi_map.get(&block_id) {
            for phi in phis {
                // MULTIEQUAL has `inputs.len()` incoming values and always
                // produces an output.
                hash_tuple(
                    &mut hasher,
                    IrOp::Multiequal as u8,
                    phi.inputs.len() as u32,
                    1,
                );
            }
        }
        if let Some(bb) = func.function.blocks.get(&block_id) {
            for insn in &bb.insns {
                hash_tuple(
                    &mut hasher,
                    insn.op as u8,
                    insn.inputs.len() as u32,
                    insn.output.is_some() as u8,
                );
            }
        }
    });
    hasher.finish()
}

#[inline]
fn hash_tuple(hasher: &mut impl Hasher, op: u8, input_count: u32, has_output: u8) {
    hasher.write_u8(op);
    hasher.write_u32(input_count);
    hasher.write_u8(has_output);
}

/// Walk the function's blocks in BFS order from the entry, skipping the
/// synthetic exit/unknown sinks. Each real block is visited exactly once.
fn visit_blocks_in_cfg_order(func: &SsaFunction, mut visit: impl FnMut(BlockId)) {
    let entry = func.cfg.entry_block();
    let exit = func.cfg.exit_block();
    let unknown = func.cfg.unknown_block();

    let mut seen: HashSet<BlockId> = HashSet::new();
    let mut queue: VecDeque<BlockId> = VecDeque::new();
    queue.push_back(entry);
    seen.insert(entry);

    while let Some(block) = queue.pop_front() {
        if block == exit || block == unknown {
            continue;
        }
        // Only visit blocks that actually exist in the function (cfg may
        // reference synthetic IDs we want to skip).
        if !func.function.blocks.contains_key(&block) {
            continue;
        }
        visit(block);
        // Successors are sorted by BlockId so traversal is deterministic
        // regardless of the underlying petgraph edge insertion order.
        let mut succs: Vec<BlockId> = func
            .cfg
            .edges_from(block)
            .into_iter()
            .map(|(t, _)| t)
            .collect();
        succs.sort();
        succs.dedup();
        for succ in succs {
            if seen.insert(succ) {
                queue.push_back(succ);
            }
        }
    }
}

/// Build an opcode-frequency histogram for `func`.
///
/// The returned vector has length [`IROP_COUNT`] (75 in IR spec v1.0). Index
/// `i` holds the number of times opcode with discriminant `i` appears in the
/// function (counting both phi nodes — as `Multiequal` — and regular
/// instructions across every real block).
///
/// Like [`fingerprint_function`], operands/constants are ignored; only the
/// op mix is recorded. This is intended for fuzzy clone ranking via
/// [`similarity`].
pub fn build_feature_vector(func: &SsaFunction) -> Vec<u32> {
    let mut hist = vec![0u32; IROP_COUNT];
    visit_blocks_in_cfg_order(func, |block_id| {
        if let Some(phis) = func.phi_map.get(&block_id) {
            for _phi in phis {
                hist[IrOp::Multiequal as usize] = hist[IrOp::Multiequal as usize].saturating_add(1);
            }
        }
        if let Some(bb) = func.function.blocks.get(&block_id) {
            for insn in &bb.insns {
                let idx = insn.op as usize;
                if idx < hist.len() {
                    hist[idx] = hist[idx].saturating_add(1);
                }
            }
        }
    });
    hist
}

/// Cosine similarity between two feature vectors in `[0.0, 1.0]`.
///
/// Returns `0.0` if either vector is all zeros (a degenerate empty function)
/// or if the inputs have different lengths. The result is bounded to `[0.0,
/// 1.0]` even under floating-point round-off.
pub fn similarity(va: &[u32], vb: &[u32]) -> f32 {
    if va.len() != vb.len() {
        return 0.0;
    }
    let mut dot: f64 = 0.0;
    let mut na: f64 = 0.0;
    let mut nb: f64 = 0.0;
    for (&a, &b) in va.iter().zip(vb.iter()) {
        let af = a as f64;
        let bf = b as f64;
        dot += af * bf;
        na += af * af;
        nb += bf * bf;
    }
    if na == 0.0 || nb == 0.0 {
        return 0.0;
    }
    let cos = dot / (na.sqrt() * nb.sqrt());
    cos.clamp(0.0, 1.0) as f32
}

#[cfg(test)]
mod tests {
    use super::*;
    use smallvec::smallvec;
    use unlace_ir::ssa::build_ssa;
    use unlace_ir::{BasicBlock, BlockId, Function, IrInsn, IrOp, Varnode};

    /// Build a single-block SSA function from a list of instructions. A
    /// trailing RETURN with a constant operand is appended so the function
    /// has a well-formed terminator.
    fn build_single_block(insns: Vec<IrInsn>) -> SsaFunction {
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

    /// `a + b` style: INT_ADD on two registers, output to a unique.
    fn add_sequence(reg_a_off: u64, reg_b_off: u64, out_off: u64) -> IrInsn {
        IrInsn::with_output(
            IrOp::IntAdd,
            Varnode::unique(out_off, 4),
            smallvec![Varnode::reg(reg_a_off, 4), Varnode::reg(reg_b_off, 4)],
            0x1000,
        )
    }

    /// The same function fingerprinted twice must yield the same hash and
    /// the same histogram. This guards against accidental nondeterminism
    /// (HashMap iteration order, etc.).
    #[test]
    fn same_function_same_fingerprint() {
        let f1 = build_single_block(vec![
            add_sequence(0, 8, 0),
            IrInsn::with_output(
                IrOp::IntSub,
                Varnode::unique(4, 4),
                smallvec![Varnode::unique(0, 4), Varnode::reg(16, 4)],
                0x1004,
            ),
        ]);
        let f2 = build_single_block(vec![
            add_sequence(0, 8, 0),
            IrInsn::with_output(
                IrOp::IntSub,
                Varnode::unique(4, 4),
                smallvec![Varnode::unique(0, 4), Varnode::reg(16, 4)],
                0x1004,
            ),
        ]);

        assert_eq!(fingerprint_function(&f1), fingerprint_function(&f2));
        assert_eq!(build_feature_vector(&f1), build_feature_vector(&f2));
    }

    /// Renaming registers and reassigning SSA outputs must NOT change the
    /// fingerprint. This is the core invariant of the structural hash:
    /// only opcode + input arity + has-output participate.
    #[test]
    fn renamed_regs_same_fingerprint() {
        // Original: r0 + r8 -> u0, u0 - r16 -> u4
        let original = build_single_block(vec![
            add_sequence(0, 8, 0),
            IrInsn::with_output(
                IrOp::IntSub,
                Varnode::unique(4, 4),
                smallvec![Varnode::unique(0, 4), Varnode::reg(16, 4)],
                0x1004,
            ),
        ]);
        // Renamed: r24 + r32 -> u100, u100 - r40 -> u104
        // (different register offsets, different unique offsets — same shape)
        let renamed = build_single_block(vec![
            add_sequence(24, 32, 100),
            IrInsn::with_output(
                IrOp::IntSub,
                Varnode::unique(104, 4),
                smallvec![Varnode::unique(100, 4), Varnode::reg(40, 4)],
                0x1004,
            ),
        ]);

        assert_eq!(
            fingerprint_function(&original),
            fingerprint_function(&renamed),
            "register renaming must not change the structural fingerprint"
        );
    }

    /// A function with a genuinely different opcode mix must produce a
    /// different fingerprint AND a measurably lower similarity score.
    #[test]
    fn different_function_different_fingerprint() {
        let arith = build_single_block(vec![
            add_sequence(0, 8, 0),
            IrInsn::with_output(
                IrOp::IntMult,
                Varnode::unique(4, 4),
                smallvec![Varnode::unique(0, 4), Varnode::reg(16, 4)],
                0x1004,
            ),
            IrInsn::with_output(
                IrOp::IntXor,
                Varnode::unique(8, 4),
                smallvec![Varnode::unique(4, 4), Varnode::reg(24, 4)],
                0x1008,
            ),
        ]);
        // A function dominated by memory ops — totally different op mix.
        let memory = build_single_block(vec![
            IrInsn::with_output(
                IrOp::Load,
                Varnode::unique(0, 8),
                smallvec![Varnode::constant(1, 4), Varnode::reg(0, 8)],
                0x1000,
            ),
            IrInsn::without_output(
                IrOp::Store,
                smallvec![
                    Varnode::constant(1, 4),
                    Varnode::reg(8, 8),
                    Varnode::unique(0, 8),
                ],
                0x1004,
            ),
            IrInsn::with_output(
                IrOp::Load,
                Varnode::unique(8, 8),
                smallvec![Varnode::constant(1, 4), Varnode::reg(16, 8)],
                0x1008,
            ),
        ]);

        assert_ne!(
            fingerprint_function(&arith),
            fingerprint_function(&memory),
            "structurally distinct functions must hash differently"
        );

        let va = build_feature_vector(&arith);
        let vb = build_feature_vector(&memory);
        let sim = similarity(&va, &vb);
        assert!(
            sim < 0.5,
            "arith vs memory should have low similarity, got {sim}"
        );
    }

    /// A near-clone differs by a single COPY instruction added to the tail.
    /// The exact fingerprint will differ, but the feature-vector similarity
    /// must stay above 0.9 because the op mix is dominated by the shared
    /// 10-instruction body.
    #[test]
    fn near_clone_similarity_above_threshold() {
        // Base: 5 ADDs followed by 5 SUBs. Heavily skewed histogram so a
        // single extra instruction barely moves the needle.
        let mut base_insns: Vec<IrInsn> = Vec::new();
        for i in 0..5u64 {
            base_insns.push(IrInsn::with_output(
                IrOp::IntAdd,
                Varnode::unique(i * 4, 4),
                smallvec![Varnode::reg(i * 8, 4), Varnode::reg(i * 8 + 4, 4)],
                0x1000 + i * 4,
            ));
        }
        for i in 0..5u64 {
            base_insns.push(IrInsn::with_output(
                IrOp::IntSub,
                Varnode::unique(20 + i * 4, 4),
                smallvec![Varnode::reg(i * 8, 4), Varnode::reg(i * 8 + 4, 4)],
                0x1020 + i * 4,
            ));
        }
        let base = build_single_block(base_insns.clone());

        // Near-clone: same body + one extra COPY at the end.
        let mut clone_insns = base_insns;
        clone_insns.push(IrInsn::with_output(
            IrOp::Copy,
            Varnode::unique(100, 4),
            smallvec![Varnode::reg(0, 4)],
            0x1100,
        ));
        let clone = build_single_block(clone_insns);

        // Exact hash must differ (one instruction more) — sanity check.
        assert_ne!(fingerprint_function(&base), fingerprint_function(&clone));

        let va = build_feature_vector(&base);
        let vb = build_feature_vector(&clone);
        let sim = similarity(&va, &vb);
        assert!(
            sim > 0.9,
            "near-clone similarity should exceed 0.9, got {sim}"
        );
    }
}
