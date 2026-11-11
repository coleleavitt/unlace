//! SIMD register types for x86 `CALLOTHER` intrinsics.
//!
//! The x86 lifter models packed SSE/AVX instructions it does not lower to
//! integer IR as `CALLOTHER` with a constant tag in `inputs[0]`
//! (`unlace_lift_x86::ops::sse::tag`, `ops::crypto::tag`). Every operand of
//! such an intrinsic that is as wide as an XMM/YMM/ZMM register is a SIMD
//! value: the tag names the lane domain and the varnode width names the
//! register, which together give the Intel type (`__m128i`, `__m256`, ...).

use unlace_ir::ArchId;
use unlace_ir::types::{VectorLanes, VectorType};

/// What one x86 SIMD intrinsic says about its register operands.
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub(super) struct SimdOperands {
    /// Lane domain of the result.
    pub output: VectorLanes,
    /// Lane domain of register inputs; `None` when the instruction
    /// converts between domains and the inputs have no single domain.
    pub inputs: Option<VectorLanes>,
}

/// Classify the `CALLOTHER` tag `tag` on `arch`, or `None` when it is not
/// a SIMD intrinsic.
pub(super) fn x86_simd_operands(arch: ArchId, tag: u64) -> Option<SimdOperands> {
    if !matches!(arch, ArchId::X86 | ArchId::X86_64) {
        return None;
    }
    let lanes = |lanes| SimdOperands {
        output: lanes,
        inputs: Some(lanes),
    };
    match tag {
        // MOVAPS, MOVUPS, ADDPS..SQRTPS, BLENDPS, XORPS, MOVSS,
        // VADDPS (zmm).
        0x102 | 0x103 | 0x130..=0x136 | 0x170 | 0x605 | 0x606 | 0x1D6 => {
            Some(lanes(VectorLanes::Float))
        }
        // MOVSD, MINSD, VADDPD (zmm).
        0x104 | 0x61B | 0x1D7 => Some(lanes(VectorLanes::Double)),
        // CVTSS2SD / CVTSD2SS convert between the two float domains.
        0x611 => Some(SimdOperands {
            output: VectorLanes::Double,
            inputs: None,
        }),
        0x623 => Some(SimdOperands {
            output: VectorLanes::Float,
            inputs: None,
        }),
        // Packed-integer SSE..AVX-512, AES-NI/SHA-NI and the generic
        // vector fallback block.
        0x100..=0x1EF | 0x600..=0x623 => Some(lanes(VectorLanes::Int)),
        _ => None,
    }
}

/// The SIMD type of a `size`-byte operand in the `lanes` domain. Narrower
/// operands of SIMD intrinsics are general registers or immediates (lane
/// indices, `PMOVMSKB`/`PEXTR*` results, opmask registers).
pub(super) fn register_type(lanes: VectorLanes, size: u8) -> Option<VectorType> {
    if size < 16 {
        return None;
    }
    VectorType::new(lanes, size)
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn integer_float_and_double_domains() {
        let paddd = x86_simd_operands(ArchId::X86_64, 0x112).unwrap();
        assert_eq!(paddd.output, VectorLanes::Int);
        let addps = x86_simd_operands(ArchId::X86_64, 0x130).unwrap();
        assert_eq!(addps.output, VectorLanes::Float);
        let cvt = x86_simd_operands(ArchId::X86_64, 0x611).unwrap();
        assert_eq!((cvt.output, cvt.inputs), (VectorLanes::Double, None));
    }

    #[test]
    fn non_simd_tags_and_other_arches_are_not_vectors() {
        // x87 FLD, BSF and the trap tag.
        for tag in [0x310, 0x200, 0x300] {
            assert_eq!(x86_simd_operands(ArchId::X86_64, tag), None);
        }
        assert_eq!(x86_simd_operands(ArchId::AArch64, 0x112), None);
    }

    #[test]
    fn only_register_wide_operands_get_a_vector_type() {
        assert_eq!(register_type(VectorLanes::Int, 4), None);
        assert_eq!(register_type(VectorLanes::Int, 8), None);
        assert_eq!(
            register_type(VectorLanes::Int, 32).map(VectorType::c_name),
            Some("__m256i")
        );
    }
}
