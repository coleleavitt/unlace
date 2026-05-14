//! t354 — Recover union fields from incompatible memory accesses.
//!
//! When the same stack slot or struct field is accessed with different types
//! (e.g., i32 and f32, or pointer and u64), this pass detects incompatible
//! access patterns and marks the variable as a union type in the output.

use unlace_ir::{IrInsn, IrOp, SpaceId, Varnode};

/// A detected union candidate: a memory location accessed with multiple types.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct UnionCandidate {
    /// The base varnode being accessed.
    pub base: Varnode,
    /// Distinct sizes observed for this location.
    pub observed_sizes: Vec<u8>,
    /// Whether float and int accesses are mixed.
    pub mixed_float_int: bool,
}

/// Scan a sequence of IR instructions for incompatible accesses.
pub fn detect_union_candidates(insns: &[IrInsn]) -> Vec<UnionCandidate> {
    use std::collections::BTreeMap;

    // Map: (space, offset) -> (set of sizes, has_float_access)
    let mut access_map: BTreeMap<(SpaceId, u64), (Vec<u8>, bool)> = BTreeMap::new();

    for insn in insns {
        let is_float_op = matches!(
            insn.op,
            IrOp::FloatAdd | IrOp::FloatSub | IrOp::FloatMult | IrOp::FloatDiv
                | IrOp::FloatNeg | IrOp::FloatAbs | IrOp::FloatSqrt
                | IrOp::FloatInt2float | IrOp::FloatFloat2int
        );

        if let Some(output) = &insn.output {
            if output.space == SpaceId::Stack || output.space == SpaceId::Register {
                let key = (output.space, output.offset);
                let entry = access_map.entry(key).or_insert_with(|| (Vec::new(), false));
                if !entry.0.contains(&output.size) {
                    entry.0.push(output.size);
                }
                if is_float_op {
                    entry.1 = true;
                }
            }
        }
    }

    access_map
        .into_iter()
        .filter(|(_, (sizes, mixed))| sizes.len() > 1 || *mixed)
        .map(|((space, offset), (sizes, mixed))| UnionCandidate {
            base: Varnode::new(space, offset, sizes[0]),
            observed_sizes: sizes,
            mixed_float_int: mixed,
        })
        .collect()
}

#[cfg(test)]
mod tests {
    use super::*;
    use smallvec::smallvec;

    #[test]
    fn test_no_union_for_consistent_access() {
        let insns = vec![
            IrInsn::with_output(IrOp::IntAdd, Varnode::stack(0, 4), smallvec![Varnode::stack(0, 4), Varnode::constant(1, 4)], 0),
            IrInsn::with_output(IrOp::IntAdd, Varnode::stack(0, 4), smallvec![Varnode::stack(0, 4), Varnode::constant(2, 4)], 4),
        ];
        let candidates = detect_union_candidates(&insns);
        assert!(candidates.is_empty());
    }

    #[test]
    fn test_detects_size_mismatch() {
        let insns = vec![
            IrInsn::with_output(IrOp::Copy, Varnode::stack(8, 4), smallvec![Varnode::constant(0, 4)], 0),
            IrInsn::with_output(IrOp::Copy, Varnode::stack(8, 8), smallvec![Varnode::constant(0, 8)], 4),
        ];
        let candidates = detect_union_candidates(&insns);
        assert_eq!(candidates.len(), 1);
        assert!(candidates[0].observed_sizes.contains(&4));
        assert!(candidates[0].observed_sizes.contains(&8));
    }

    #[test]
    fn test_detects_mixed_float_int() {
        let insns = vec![
            IrInsn::with_output(IrOp::IntAdd, Varnode::stack(0, 4), smallvec![Varnode::stack(0, 4), Varnode::constant(1, 4)], 0),
            IrInsn::with_output(IrOp::FloatAdd, Varnode::stack(0, 4), smallvec![Varnode::stack(0, 4), Varnode::constant(1, 4)], 4),
        ];
        let candidates = detect_union_candidates(&insns);
        assert_eq!(candidates.len(), 1);
        assert!(candidates[0].mixed_float_int);
    }
}
