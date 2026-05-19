//! AArch64 pointer-auth and branch-target-identification recognizer.
//!
//! Detects PAC* / AUT* / BTI / XPACI instructions in lifted x86-style
//! Callother form and tags them as runtime-only no-ops so the C printer
//! can suppress them.
//!
//! Reference: ARMv8.3 Pointer Authentication, ARMv8.5 BTI.

/// Kinds of AArch64 runtime-glue instructions.
#[derive(Copy, Clone, Debug, PartialEq, Eq)]
pub enum AArch64Runtime {
    /// Sign LR with SP (pacisp).
    PacIaSp,
    /// Authenticate LR with SP (autiasp).
    AutIaSp,
    /// Sign LR with B key (pacibsp).
    PacIbSp,
    /// Authenticate LR with B key (autibsp).
    AutIbSp,
    /// Strip authentication code (xpaci).
    Xpaci,
    /// Branch target identification (BTI c/j/jc).
    Bti,
    /// Hint instructions used by PAC/BTI.
    Hint,
}

/// Classify an opcode mnemonic into an AArch64Runtime kind.
pub fn classify_aarch64_runtime(mnemonic: &str) -> Option<AArch64Runtime> {
    match mnemonic.to_lowercase().as_str() {
        "paciasp" => Some(AArch64Runtime::PacIaSp),
        "autiasp" => Some(AArch64Runtime::AutIaSp),
        "pacibsp" => Some(AArch64Runtime::PacIbSp),
        "autibsp" => Some(AArch64Runtime::AutIbSp),
        "xpaci" | "xpaclri" => Some(AArch64Runtime::Xpaci),
        "bti" | "bti c" | "bti j" | "bti jc" => Some(AArch64Runtime::Bti),
        "hint" => Some(AArch64Runtime::Hint),
        _ => None,
    }
}

impl AArch64Runtime {
    /// Human-readable comment to emit in C output for this runtime op.
    pub fn comment(self) -> &'static str {
        match self {
            Self::PacIaSp => "/* sign LR (PAC) */",
            Self::AutIaSp => "/* verify LR (AUT) */",
            Self::PacIbSp => "/* sign LR (PAC B-key) */",
            Self::AutIbSp => "/* verify LR (AUT B-key) */",
            Self::Xpaci => "/* strip PAC */",
            Self::Bti => "/* branch target */",
            Self::Hint => "/* hint */",
        }
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_pac_paciasp() {
        assert_eq!(classify_aarch64_runtime("paciasp"), Some(AArch64Runtime::PacIaSp));
    }

    #[test]
    fn test_pac_autiasp() {
        assert_eq!(classify_aarch64_runtime("autiasp"), Some(AArch64Runtime::AutIaSp));
    }

    #[test]
    fn test_pac_bti() {
        assert_eq!(classify_aarch64_runtime("bti"), Some(AArch64Runtime::Bti));
        assert_eq!(classify_aarch64_runtime("bti c"), Some(AArch64Runtime::Bti));
    }

    #[test]
    fn test_pac_xpaci() {
        assert_eq!(classify_aarch64_runtime("xpaci"), Some(AArch64Runtime::Xpaci));
        assert_eq!(classify_aarch64_runtime("xpaclri"), Some(AArch64Runtime::Xpaci));
    }

    #[test]
    fn test_pac_unrelated() {
        assert!(classify_aarch64_runtime("add").is_none());
        assert!(classify_aarch64_runtime("mov").is_none());
    }

    #[test]
    fn test_pac_comments() {
        assert_eq!(AArch64Runtime::PacIaSp.comment(), "/* sign LR (PAC) */");
        assert_eq!(AArch64Runtime::Bti.comment(), "/* branch target */");
    }
}
