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
    if bytes.len() < 2 {
        return PrologueKind::Unknown;
    }
    if bytes.len() >= 8 && bytes.starts_with(ENDBR64) {
        let rest = &bytes[4..];
        if rest.starts_with(X86_64_FP) {
            return PrologueKind::X86_64CetFramePointer;
        }
        if rest.len() >= 4 && rest[..3] == [0x48, 0x83, 0xEC] {
            return PrologueKind::X86_64CetFrameless;
        }
    }
    if bytes.len() >= 4 && bytes.starts_with(X86_64_FP) {
        return PrologueKind::X86_64FramePointer;
    }
    if bytes.len() >= 4 && bytes[..3] == [0x48, 0x83, 0xEC] {
        return PrologueKind::X86_64FramelessSub;
    }
    if bytes.len() >= 4 && bytes[0] == 0x27 && bytes[1] == 0xBD {
        return PrologueKind::MipsStandard;
    }
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
    candidates
        .iter()
        .filter(|c| c.required_prologue.is_none_or(|r| r == detected))
        .map(|c| c.pattern_index)
        .collect()
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn classify_fp() {
        assert_eq!(
            classify_prologue(&[0x55, 0x48, 0x89, 0xE5, 0x48, 0x83, 0xEC, 0x20]),
            PrologueKind::X86_64FramePointer
        );
    }

    #[test]
    fn classify_frameless() {
        assert_eq!(
            classify_prologue(&[0x48, 0x83, 0xEC, 0x28]),
            PrologueKind::X86_64FramelessSub
        );
    }

    #[test]
    fn classify_cet() {
        assert_eq!(
            classify_prologue(&[0xF3, 0x0F, 0x1E, 0xFA, 0x55, 0x48, 0x89, 0xE5]),
            PrologueKind::X86_64CetFramePointer
        );
    }

    #[test]
    fn filter_works() {
        let bytes = [0x55, 0x48, 0x89, 0xE5, 0xC3];
        let cands = vec![
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
        assert_eq!(filter_by_prologue(&bytes, &cands), vec![0, 1]);
    }
}
