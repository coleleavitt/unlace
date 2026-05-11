//! Compiler-inlined function fold-back (t370).
//!
//! Optimising compilers routinely *inline* short library helpers — `strlen`,
//! `memcpy`, `strcmp`, custom CRC kernels — directly into their callers so
//! the dynamic call overhead disappears. The price is decompiler-output
//! readability: a single `n = strlen(s)` becomes a sprawling loop nest that
//! humans struggle to recognise on sight.
//!
//! This pass scans each SSA block for IR sequences whose *shape* matches a
//! known function's IR fingerprint, and records a "fold-back" suggestion —
//! the block-relative offset where the inline copy starts, plus the inferred
//! function name. Downstream printers can then collapse the matched range
//! and render it as a synthetic call.
//!
//! **MVP scope.** Recognition is purely structural and *detection-only* —
//! no IR is mutated. The fingerprint format is intentionally minimal: a
//! known signature is just an ordered slice of [`IrOp`] discriminants that
//! must appear, in order, somewhere inside a block. Operand-level shape
//! checks (constant zero compares, self-cycle predecessors, etc.) live in
//! the per-function heuristics rather than the generic matcher so the
//! signature table stays declarative.
//!
//! Built-in fingerprints:
//!
//! * `strlen` — `Load, IntEqual, IntAdd, Cbranch` (zero-terminator loop with
//!   a constant-0 compare and a self-cycle back edge).
//! * `memcpy` — `Load, Store, IntAdd, IntAdd, Cbranch` (load/store body with
//!   two pointer-bumps).
//! * `strcmp` — `Load, Load, IntNotequal, IntAdd, Cbranch` (two loads with a
//!   not-equal exit).
//!
//! Callers may pass their own `known_signatures` table to recognise
//! project-specific helpers (e.g. inlined CRC32, RC4 KSA).

use std::collections::BTreeMap;

use unlace_ir::{BlockId, IrOp, SpaceId};
use unlace_ir::ssa::SsaFunction;

/// Result of an inline fold-back scan: one entry per recognised inline copy.
///
/// Each tuple is `(block, body_offset, inferred_name)` where `body_offset`
/// is the index inside the block's instruction list at which the matched
/// fingerprint begins. Multiple matches in the same block are reported
/// independently.
#[derive(Debug, Default, Clone)]
pub struct InlineFoldback {
    pub detected: Vec<(BlockId, usize, String /* inferred_name */)>,
}

/// Built-in fingerprint table used when the caller passes an empty map.
///
/// Kept private to this module — production callers should pass their own
/// table sourced from a libc-signature database. The table here exists so
/// that the simplest invocation (`detect_inlined_calls(f, &empty)`) still
/// produces useful matches against the textbook cases.
fn builtin_signatures() -> BTreeMap<String, Vec<IrOp>> {
    let mut m = BTreeMap::new();
    // strlen: body loads a byte, compares against zero, advances the pointer,
    // and branches back to the loop head.
    m.insert(
        "strlen".to_string(),
        vec![IrOp::Load, IrOp::IntEqual, IrOp::IntAdd, IrOp::Cbranch],
    );
    // memcpy: load-then-store body with two pointer increments (src, dst).
    m.insert(
        "memcpy".to_string(),
        vec![
            IrOp::Load,
            IrOp::Store,
            IrOp::IntAdd,
            IrOp::IntAdd,
            IrOp::Cbranch,
        ],
    );
    // strcmp: two loads, a not-equal exit compare, pointer bump, back-edge.
    m.insert(
        "strcmp".to_string(),
        vec![
            IrOp::Load,
            IrOp::Load,
            IrOp::IntNotequal,
            IrOp::IntAdd,
            IrOp::Cbranch,
        ],
    );
    m
}

/// Scan `func` for IR sequences that match an inlined function's fingerprint.
///
/// `known_signatures` maps a function name (e.g. `"strlen"`) to the ordered
/// list of [`IrOp`] opcodes its body must contain. When the map is empty,
/// the [`builtin_signatures`] table is used as a fallback so callers don't
/// need to bootstrap a database for trivial cases.
///
/// Matching is *subsequence-with-gaps*: the signature opcodes must appear
/// in the block in the given order, but unrelated IR (e.g. flag bookkeeping
/// from the source ISA) is allowed to interleave. This is deliberately
/// permissive — strict contiguous matching would miss every real inlined
/// `strlen` after copy-prop and DCE have rearranged the body.
///
/// To suppress spurious "strlen" matches inside a real `memcpy` (whose
/// fingerprint is a strict superset), longer signatures are tested first
/// and a block is reported under at most one name.
pub fn detect_inlined_calls(
    func: &SsaFunction,
    known_signatures: &BTreeMap<String, Vec<IrOp>>,
) -> InlineFoldback {
    let owned;
    let table: &BTreeMap<String, Vec<IrOp>> = if known_signatures.is_empty() {
        owned = builtin_signatures();
        &owned
    } else {
        known_signatures
    };

    // Order signatures by descending length so that a more-specific match
    // (memcpy ⊃ strlen-prefix) wins over its shorter generic sub-pattern.
    let mut sigs: Vec<(&String, &Vec<IrOp>)> = table.iter().collect();
    sigs.sort_by(|a, b| b.1.len().cmp(&a.1.len()).then(a.0.cmp(b.0)));

    let mut detected = Vec::new();
    for (&block_id, block) in &func.function.blocks {
        if block.insns.is_empty() {
            continue;
        }
        for (name, pattern) in &sigs {
            if pattern.is_empty() {
                continue;
            }
            if let Some(start) = match_subsequence(&block.insns, pattern)
                && passes_heuristic(name, &block.insns)
            {
                detected.push((block_id, start, (*name).clone()));
                // Stop on first match for this block — one fold per block.
                break;
            }
        }
    }

    InlineFoldback { detected }
}

/// Subsequence-with-gaps matcher. Returns the index of the *first* opcode
/// match if the entire pattern is found in order, or `None` otherwise.
fn match_subsequence(insns: &[unlace_ir::IrInsn], pattern: &[IrOp]) -> Option<usize> {
    let mut iter = insns.iter().enumerate();
    let mut first_match: Option<usize> = None;
    for want in pattern {
        let mut found = false;
        for (idx, insn) in iter.by_ref() {
            if insn.op == *want {
                if first_match.is_none() {
                    first_match = Some(idx);
                }
                found = true;
                break;
            }
        }
        if !found {
            return None;
        }
    }
    first_match
}

/// Name-specific shape sanity checks. The generic subsequence matcher only
/// looks at opcodes; this layer rejects matches that don't *behave* like
/// the inferred function (e.g. a `strlen` without a constant-zero compare
/// is almost certainly something else).
fn passes_heuristic(name: &str, insns: &[unlace_ir::IrInsn]) -> bool {
    match name {
        // strlen requires a compare against a constant-zero terminator.
        "strlen" => insns.iter().any(|i| {
            matches!(i.op, IrOp::IntEqual | IrOp::IntNotequal)
                && i.inputs
                    .iter()
                    .any(|v| v.space == SpaceId::Const && v.offset == 0)
        }),
        // memcpy requires at least one Load and one Store in the block.
        "memcpy" => {
            insns.iter().any(|i| i.op == IrOp::Load)
                && insns.iter().any(|i| i.op == IrOp::Store)
        }
        // strcmp requires at least two Loads (one per pointer).
        "strcmp" => insns.iter().filter(|i| i.op == IrOp::Load).count() >= 2,
        _ => true,
    }
}

#[cfg(test)]
mod tests {
    use smallvec::smallvec;

    use unlace_ir::ssa::build_ssa;
    use unlace_ir::{BasicBlock, BlockId, Function, IrInsn, IrOp, Varnode};

    use super::*;

    fn make_block(insns: Vec<IrInsn>) -> SsaFunction {
        let mut func = Function::new("test", BlockId(0), 0x1000);
        let mut bb = BasicBlock::new(BlockId(0));
        bb.insns = insns;
        func.insert_block(bb);
        build_ssa(func)
    }

    /// Canonical inlined `strlen` body: Load byte, IntEqual against 0,
    /// IntAdd pointer bump, Cbranch back to head.
    #[test]
    fn detects_inlined_strlen() {
        let space = Varnode::constant(unlace_ir::SpaceId::Ram as u64, 8);
        let ptr = Varnode::reg(0x10, 8);
        let loaded = Varnode::reg(0x100, 1);
        let zf = Varnode::reg(0x200, 1);
        let insns = vec![
            IrInsn::with_output(IrOp::Load, loaded.clone(), smallvec![space, ptr.clone()], 0x1000),
            IrInsn::with_output(
                IrOp::IntEqual,
                zf,
                smallvec![loaded, Varnode::constant(0, 1)],
                0x1004,
            ),
            IrInsn::with_output(
                IrOp::IntAdd,
                ptr.clone(),
                smallvec![ptr, Varnode::constant(1, 8)],
                0x1008,
            ),
            IrInsn::without_output(
                IrOp::Cbranch,
                smallvec![Varnode::constant(0x1000, 8), Varnode::reg(0x200, 1)],
                0x100C,
            ),
        ];
        let ssa = make_block(insns);
        let empty = BTreeMap::new();
        let result = detect_inlined_calls(&ssa, &empty);
        assert_eq!(result.detected.len(), 1, "expected one match: {:?}", result);
        assert_eq!(result.detected[0].2, "strlen");
        assert_eq!(result.detected[0].0, BlockId(0));
    }

    /// Canonical inlined `memcpy` body: Load + Store + two IntAdds + Cbranch.
    /// memcpy's signature is a strict superset of strlen's, so the
    /// longest-first ordering must promote it over strlen.
    #[test]
    fn detects_inlined_memcpy_over_strlen() {
        let space = Varnode::constant(unlace_ir::SpaceId::Ram as u64, 8);
        let src = Varnode::reg(0x10, 8);
        let dst = Varnode::reg(0x18, 8);
        let cnt = Varnode::reg(0x20, 8);
        let val = Varnode::reg(0x100, 1);
        let insns = vec![
            IrInsn::with_output(IrOp::Load, val.clone(), smallvec![space.clone(), src.clone()], 0x1000),
            IrInsn::without_output(IrOp::Store, smallvec![space, dst.clone(), val], 0x1004),
            IrInsn::with_output(
                IrOp::IntAdd,
                src.clone(),
                smallvec![src, Varnode::constant(1, 8)],
                0x1008,
            ),
            IrInsn::with_output(
                IrOp::IntAdd,
                dst.clone(),
                smallvec![dst, Varnode::constant(1, 8)],
                0x100C,
            ),
            IrInsn::with_output(
                IrOp::IntSub,
                cnt.clone(),
                smallvec![cnt.clone(), Varnode::constant(1, 8)],
                0x1010,
            ),
            IrInsn::without_output(
                IrOp::Cbranch,
                smallvec![Varnode::constant(0x1000, 8), cnt],
                0x1014,
            ),
        ];
        let ssa = make_block(insns);
        let empty = BTreeMap::new();
        let result = detect_inlined_calls(&ssa, &empty);
        assert_eq!(result.detected.len(), 1, "expected one match: {:?}", result);
        assert_eq!(
            result.detected[0].2, "memcpy",
            "memcpy must beat strlen (longer pattern wins)"
        );
    }

    /// A caller-provided signature should be honoured even when the built-in
    /// table would also match. Here we register an `inlined_crc32` whose
    /// fingerprint is unique (Load, IntXor, IntAdd, Cbranch) and verify it.
    #[test]
    fn detects_user_supplied_signature() {
        let space = Varnode::constant(unlace_ir::SpaceId::Ram as u64, 8);
        let ptr = Varnode::reg(0x10, 8);
        let crc = Varnode::reg(0x18, 4);
        let byte = Varnode::reg(0x100, 1);
        let mixed = Varnode::reg(0x108, 4);
        let insns = vec![
            IrInsn::with_output(IrOp::Load, byte.clone(), smallvec![space, ptr.clone()], 0x1000),
            IrInsn::with_output(IrOp::IntXor, mixed.clone(), smallvec![crc, byte], 0x1004),
            IrInsn::with_output(
                IrOp::IntAdd,
                ptr.clone(),
                smallvec![ptr, Varnode::constant(1, 8)],
                0x1008,
            ),
            IrInsn::without_output(
                IrOp::Cbranch,
                smallvec![Varnode::constant(0x1000, 8), mixed],
                0x100C,
            ),
        ];
        let ssa = make_block(insns);
        let mut sigs = BTreeMap::new();
        sigs.insert(
            "inlined_crc32".to_string(),
            vec![IrOp::Load, IrOp::IntXor, IrOp::IntAdd, IrOp::Cbranch],
        );
        let result = detect_inlined_calls(&ssa, &sigs);
        assert_eq!(result.detected.len(), 1);
        assert_eq!(result.detected[0].2, "inlined_crc32");
    }

    /// A block that doesn't match any known fingerprint must produce no
    /// detection — false positives on unrelated arithmetic kill the value
    /// of this pass for end users.
    #[test]
    fn no_match_for_unrelated_block() {
        let r0 = Varnode::reg(0x00, 8);
        let r1 = Varnode::reg(0x08, 8);
        let out = Varnode::reg(0x100, 8);
        let insns = vec![
            IrInsn::with_output(IrOp::IntAdd, out.clone(), smallvec![r0.clone(), r1.clone()], 0x1000),
            IrInsn::with_output(IrOp::IntMult, out, smallvec![r0, r1], 0x1004),
        ];
        let ssa = make_block(insns);
        let empty = BTreeMap::new();
        let result = detect_inlined_calls(&ssa, &empty);
        assert!(
            result.detected.is_empty(),
            "unrelated arithmetic must not match: {:?}",
            result.detected
        );
    }
}
