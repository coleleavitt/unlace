//! Function prologue detection and matching for FLIRT signature refinement.
//!
//! When a FLIRT database contains many signatures sharing the same short byte
//! prefix, prologue classification provides additional discrimination. This
//! module classifies function prologues into canonical forms and can optionally
//! require a specific prologue kind when matching.

/// Known architecture-specific prologue patterns.
#[derive(Debug, Clone, Copy, PartialEq, Eq, Hash)]
pub enum PrologueKind {
    /// x86-64: `push rbp; mov rbp, rsp` (frame-pointer based)
    X86_64FramePointer,
    /// x86-64: `sub rsp, N` without frame pointer setup
    X86_64FramelessSub,
    /// x86-64: `endbr64; push rbp; mov rbp, rsp` (CET-enabled)
    X86_64CetFramePointer,
    /// x86-64: `endbr64; sub rsp, N` (CET frameless)
    X86_64CetFrameless,
    /// AArch64: `stp x29, x30, [sp, #-N]!; mov x29, sp`
    Aarch64FramePointer,
    /// AArch64: `sub sp, sp, #N` (leaf without frame record)
    Aarch64Leaf,
    /// ARM32: `push {fp, lr}; add fp, sp, #4`
    Arm32FramePointer,
    /// ARM32: `push {r4-rN, lr}` without fp setup
    Arm32Push,
    /// MIPS: `addiu $sp, $sp, -N; sw $ra, N($sp)`
    MipsStandard,
    /// Unknown / unrecognized prologue
    Unknown,
}

/// Recognized x86-64 prologue byte patterns.
const X86_64_FRAME_POINTER: &[u8] = &[0x55, 0x48, 0x89, 0xE5]; // push rbp; mov rbp, rsp
const X86_64_ENDBR64: &[u8] = &[0xF3, 0x0F, 0x1E, 0xFA]; // endbr64

/// Classify the prologue of a function given its leading bytes.
pub fn classify_prologue(bytes: &[u8]) -> PrologueKind {
    if bytes.len() < 2 {
        return PrologueKind::Unknown;
    }

    // x86-64 CET (endbr64 prefix)
    if bytes.len() >= 8 && bytes.starts_with(X86_64_ENDBR64) {
        let after_endbr = &bytes[4..];
        if after_endbr.starts_with(X86_64_FRAME_POINTER) {
            return PrologueKind::X86_64CetFramePointer;
        }
        if after_endbr.len() >= 4 && after_endbr[..3] == [0x48, 0x83, 0xEC] {
            return PrologueKind::X86_64CetFrameless;
        }
        if after_endbr.len() >= 7 && after_endbr[..3] == [0x48, 0x81, 0xEC] {
            return PrologueKind::X86_64CetFrameless;
        }
    }

    // x86-64 frame pointer: push rbp; mov rbp, rsp
    if bytes.len() >= 4 && bytes.starts_with(X86_64_FRAME_POINTER) {
        return PrologueKind::X86_64FramePointer;
    }

    // x86-64 frameless: sub rsp, imm8
    if bytes.len() >= 4 && bytes[..3] == [0x48, 0x83, 0xEC] {
        return PrologueKind::X86_64FramelessSub;
    }
    // x86-64 frameless: sub rsp, imm32
    if bytes.len() >= 7 && bytes[..3] == [0x48, 0x81, 0xEC] {
        return PrologueKind::X86_64FramelessSub;
    }

    // AArch64: stp x29, x30, [sp, #-N]! (little-endian encoding)
    if bytes.len() >= 4 {
        let w = u32::from_le_bytes([bytes[0], bytes[1], bytes[2], bytes[3]]);
        // STP pre-index Xt, Xt2, [Xn, #imm]! with Rt=x29, Rt2=x30, Rn=sp
        if (w & 0xFFE0_03E0) == 0xA980_03E0 && (w & 0x1F) == 29 && ((w >> 10) & 0x1F) == 30 {
            return PrologueKind::Aarch64FramePointer;
        }
        // SUB sp, sp, #imm: D1xx_xxFF pattern
        if (w & 0xFF00_03FF) == 0xD100_03FF {
            return PrologueKind::Aarch64Leaf;
        }
    }

    // ARM32: push {fp, lr} = E92D4800 (big-endian read of 4 bytes)
    if bytes.len() >= 4 {
        let w = u32::from_be_bytes([bytes[0], bytes[1], bytes[2], bytes[3]]);
        if w == 0xE92D_4800 {
            return PrologueKind::Arm32FramePointer;
        }
        if (w & 0xFFFF_4000) == 0xE92D_4000 {
            return PrologueKind::Arm32Push;
        }
    }

    // MIPS: addiu $sp, $sp, -N (big-endian): 27BD xxxx
    if bytes.len() >= 4 && bytes[0] == 0x27 && bytes[1] == 0xBD {
        return PrologueKind::MipsStandard;
    }

    PrologueKind::Unknown
}

/// A FLIRT pattern augmented with an optional prologue requirement.
#[derive(Debug, Clone)]
pub struct PrologueConstrainedMatch {
    /// If set, the candidate function must exhibit this prologue kind.
    pub required_prologue: Option<PrologueKind>,
    /// Index into the parent FlirtDb's pattern vector.
    pub pattern_index: usize,
}

/// Given a set of candidate matches (pattern indices), filter to those whose
/// prologue constraint (if any) matches the detected prologue of `bytes`.
pub fn filter_by_prologue(bytes: &[u8], candidates: &[PrologueConstrainedMatch]) -> Vec<usize> {
    let detected = classify_prologue(bytes);
    candidates
        .iter()
        .filter(|c| match c.required_prologue {
            None => true,
            Some(required) => required == detected,
        })
        .map(|c| c.pattern_index)
        .collect()
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn classify_x86_64_frame_pointer() {
        let bytes = [0x55, 0x48, 0x89, 0xE5, 0x48, 0x83, 0xEC, 0x20];
        assert_eq!(classify_prologue(&bytes), PrologueKind::X86_64FramePointer);
    }

    #[test]
    fn classify_x86_64_frameless() {
        let bytes = [0x48, 0x83, 0xEC, 0x28, 0x89, 0x7C, 0x24, 0x0C];
        assert_eq!(classify_prologue(&bytes), PrologueKind::X86_64FramelessSub);
    }

    #[test]
    fn classify_cet_frame_pointer() {
        let bytes = [
            0xF3, 0x0F, 0x1E, 0xFA, 0x55, 0x48, 0x89, 0xE5, 0x48, 0x83, 0xEC, 0x20,
        ];
        assert_eq!(
            classify_prologue(&bytes),
            PrologueKind::X86_64CetFramePointer
        );
    }

    #[test]
    fn classify_cet_frameless() {
        let bytes = [0xF3, 0x0F, 0x1E, 0xFA, 0x48, 0x83, 0xEC, 0x28];
        assert_eq!(classify_prologue(&bytes), PrologueKind::X86_64CetFrameless);
    }

    #[test]
    fn classify_mips_standard() {
        let bytes = [0x27, 0xBD, 0xFF, 0xE0, 0xAF, 0xBF, 0x00, 0x1C];
        assert_eq!(classify_prologue(&bytes), PrologueKind::MipsStandard);
    }

    #[test]
    fn classify_unknown() {
        assert_eq!(
            classify_prologue(&[0x90, 0x90, 0x90, 0x90]),
            PrologueKind::Unknown
        );
    }

    #[test]
    fn classify_too_short() {
        assert_eq!(classify_prologue(&[0x55]), PrologueKind::Unknown);
        assert_eq!(classify_prologue(&[]), PrologueKind::Unknown);
    }

    #[test]
    fn filter_passes_unconstrained() {
        let bytes = [0x55, 0x48, 0x89, 0xE5, 0xC3];
        let candidates = vec![
            PrologueConstrainedMatch {
                required_prologue: None,
                pattern_index: 0,
            },
            PrologueConstrainedMatch {
                required_prologue: Some(PrologueKind::X86_64FramePointer),
                pattern_index: 1,
            },
            PrologueConstrainedMatch {
                required_prologue: Some(PrologueKind::X86_64FramelessSub),
                pattern_index: 2,
            },
        ];
        let result = filter_by_prologue(&bytes, &candidates);
        assert_eq!(result, vec![0, 1]);
    }

    #[test]
    fn filter_rejects_wrong_kind() {
        let bytes = [0x48, 0x83, 0xEC, 0x28, 0x89, 0x7C, 0x24, 0x0C];
        let candidates = vec![PrologueConstrainedMatch {
            required_prologue: Some(PrologueKind::X86_64FramePointer),
            pattern_index: 0,
        }];
        let result = filter_by_prologue(&bytes, &candidates);
        assert!(result.is_empty());
//! Function prologue detection for FLIRT signature refinement.

/// Known prologue patterns.
#[derive(Debug, Clone, Copy, PartialEq, Eq, Hash)]
pub enum PrologueKind {
    X86_64FramePointer,
    X86_64FramelessSub,
    X86_64CetFramePointer,
    X86_64CetFrameless,
    Aarch64FramePointer,
    Aarch64Leaf,
    Arm32FramePointer,
    Arm32Push,
    MipsStandard,
    Unknown,
}

const X86_64_FP: &[u8] = &[0x55, 0x48, 0x89, 0xE5];
const ENDBR64: &[u8] = &[0xF3, 0x0F, 0x1E, 0xFA];

/// Classify the function prologue from leading bytes.
pub fn classify_prologue(bytes: &[u8]) -> PrologueKind {
    if bytes.len() < 2 { return PrologueKind::Unknown; }
    if bytes.len() >= 8 && bytes.starts_with(ENDBR64) {
        let rest = &bytes[4..];
        if rest.starts_with(X86_64_FP) { return PrologueKind::X86_64CetFramePointer; }
        if rest.len() >= 4 && rest[..3] == [0x48, 0x83, 0xEC] { return PrologueKind::X86_64CetFrameless; }
    }
    if bytes.len() >= 4 && bytes.starts_with(X86_64_FP) { return PrologueKind::X86_64FramePointer; }
    if bytes.len() >= 4 && bytes[..3] == [0x48, 0x83, 0xEC] { return PrologueKind::X86_64FramelessSub; }
    if bytes.len() >= 4 && bytes[0] == 0x27 && bytes[1] == 0xBD { return PrologueKind::MipsStandard; }
    PrologueKind::Unknown
}

/// A match candidate with optional prologue constraint.
#[derive(Debug, Clone)]
pub struct PrologueConstrainedMatch {
    pub required_prologue: Option<PrologueKind>,
    pub pattern_index: usize,
}

/// Filter candidates by prologue.
pub fn filter_by_prologue(bytes: &[u8], candidates: &[PrologueConstrainedMatch]) -> Vec<usize> {
    let detected = classify_prologue(bytes);
    candidates.iter()
        .filter(|c| c.required_prologue.map_or(true, |r| r == detected))
        .map(|c| c.pattern_index)
        .collect()
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn classify_fp() {
        assert_eq!(classify_prologue(&[0x55, 0x48, 0x89, 0xE5, 0x48, 0x83, 0xEC, 0x20]), PrologueKind::X86_64FramePointer);
    }

    #[test]
    fn classify_frameless() {
        assert_eq!(classify_prologue(&[0x48, 0x83, 0xEC, 0x28]), PrologueKind::X86_64FramelessSub);
    }

    #[test]
    fn classify_cet() {
        assert_eq!(classify_prologue(&[0xF3, 0x0F, 0x1E, 0xFA, 0x55, 0x48, 0x89, 0xE5]), PrologueKind::X86_64CetFramePointer);
    }

    #[test]
    fn filter_works() {
        let bytes = [0x55, 0x48, 0x89, 0xE5, 0xC3];
        let cands = vec![
            PrologueConstrainedMatch { required_prologue: None, pattern_index: 0 },
            PrologueConstrainedMatch { required_prologue: Some(PrologueKind::X86_64FramePointer), pattern_index: 1 },
            PrologueConstrainedMatch { required_prologue: Some(PrologueKind::X86_64FramelessSub), pattern_index: 2 },
        ];
        assert_eq!(filter_by_prologue(&bytes, &cands), vec![0, 1]);
    }
}
