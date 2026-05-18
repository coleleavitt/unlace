//! Per-architecture support tier classification (plan.md Batch 22).
//!
//! This is a single source of truth for "how trustworthy is the
//! decompiler output for this architecture today". The xtask scorecard
//! generator reads from here; `docs/status.md` is generated from it.
//!
//! The classification is intentionally narrow:
//!
//! * **Production** — the lifter, ABI/calling convention recovery, and
//!   final C output are exercised by golden fixtures and a non-trivial
//!   real-binary corpus. Use with confidence.
//! * **Beta** — the lifter is complete enough that simple programs lift
//!   cleanly, but parts of the pipeline (ABI, SIMD/FPU, structuring) are
//!   not at production parity. Use, but expect rough edges.
//! * **FixtureOnly** — exercises only the fixture binaries we ship; no
//!   real-binary corpus evidence yet.
//! * **Stub** — the crate exists with decoder skeleton; many opcodes
//!   intentionally emit [`crate::IrOp::Unimplemented`].
//!
//! The classification is hand-curated based on the audit captured in
//! `plan.md` Batch 22 and the xtask `lifter-coverage` report. When
//! upgrading or downgrading an architecture, update the entry here in
//! the same change that wires the new evidence.

use crate::ArchId;

/// Maturity tier for an architecture's decompiler support.
#[derive(Debug, Clone, Copy, PartialEq, Eq, Hash, PartialOrd, Ord)]
pub enum SupportTier {
    Production,
    Beta,
    FixtureOnly,
    Stub,
}

impl SupportTier {
    /// Human-readable label for documentation tables.
    pub const fn label(self) -> &'static str {
        match self {
            SupportTier::Production => "production",
            SupportTier::Beta => "beta",
            SupportTier::FixtureOnly => "fixture-only",
            SupportTier::Stub => "stub",
        }
    }
}

/// Current support tier for `arch`. Defaults to [`SupportTier::Stub`] for
/// unknown / unmapped architectures. See the module docs for the meaning
/// of each tier.
pub const fn support_tier(arch: ArchId) -> SupportTier {
    use ArchId::*;
    use SupportTier::*;
    match arch {
        X86 | X86_64 | AArch64 => Production,
        Arm | RiscV64 | Mips | Ppc | Ppc64 => Beta,
        // §3 promotions — bumped from Stub once ≥30 distinct mnemonics
        // landed with per-opcode tests. §5.2 dedup'd `M6502 → Mos6502`
        // and `NvSass → NvidiaSass`.
        Z80 | Msp430 | Mos6502 | V850 | Arc | Avr | Stm8 | TriCore | RxRenesas | Hexagon
        | Pic16 | I8051 => Beta,
        Mips64 | Sparc | M68k | SuperH | Xtensa | Wasm | Ebpf | Sbpf | Lua => FixtureOnly,
        Agx | AppleAgx | TiC28x | AmdGpu | NvidiaSass | TiC6x | SpirV | Evm | Sharc
        | SharcBlackfin => Beta,
        Unknown(_) => Stub,
    }
}

/// All architectures unlace knows about, in declaration order. Used by
/// the xtask scorecard generator to enumerate the support matrix.
pub fn all_arches() -> &'static [ArchId] {
    use ArchId::*;
    &[
        X86,
        X86_64,
        Arm,
        AArch64,
        RiscV64,
        Mips,
        Mips64,
        Ppc,
        Ppc64,
        V850,
        Arc,
        TriCore,
        Wasm,
        Ebpf,
        Sbpf,
        Avr,
        Msp430,
        AmdGpu,
        Stm8,
        Z80,
        RxRenesas,
        Agx,
        Sparc,
        M68k,
        SuperH,
        NvidiaSass,
        Xtensa,
        Mos6502,
        I8051,
        Hexagon,
        Pic16,
        Sharc,
        SharcBlackfin,
        TiC6x,
        TiC28x,
        Evm,
        SpirV,
        AppleAgx,
        Lua,
    ]
}

/// Render the support matrix as a Markdown table. Sorted by tier
/// (production first) then by `ArchId::to_string()` so the output is
/// stable.
pub fn support_matrix_markdown() -> String {
    use std::fmt::Write;
    let mut rows: Vec<(SupportTier, String)> = all_arches()
        .iter()
        .map(|&a| (support_tier(a), a.to_string()))
        .collect();
    rows.sort();

    let mut s = String::new();
    let _ = writeln!(s, "| architecture | tier |");
    let _ = writeln!(s, "|--------------|------|");
    for (tier, name) in &rows {
        let _ = writeln!(s, "| `{name}` | {} |", tier.label());
    }
    s
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn x86_64_and_aarch64_are_production() {
        assert_eq!(support_tier(ArchId::X86_64), SupportTier::Production);
        assert_eq!(support_tier(ArchId::AArch64), SupportTier::Production);
    }

    #[test]
    fn unknown_arch_defaults_to_stub() {
        assert_eq!(support_tier(ArchId::Unknown(0xffff)), SupportTier::Stub);
    }

    #[test]
    fn support_matrix_has_one_row_per_arch() {
        let md = support_matrix_markdown();
        let data_rows = md.lines().filter(|l| l.starts_with("| `")).count();
        assert_eq!(data_rows, all_arches().len());
    }

    /// Batch 22: every architecture that previously sat at `Stub` (Evm,
    /// SpirV, NvidiaSass, TiC6x, Sharc, SharcBlackfin, AppleAgx, Agx,
    /// AmdGpu, TiC28x) must now be reported as `Beta`, and the rendered
    /// matrix must not contain any `stub` rows. `Stub` is reserved for
    /// `ArchId::Unknown(_)`, which is not enumerated in `all_arches()`.
    #[test]
    fn batch22_former_stubs_are_beta() {
        for arch in [
            ArchId::Evm,
            ArchId::SpirV,
            ArchId::NvidiaSass,
            ArchId::TiC6x,
            ArchId::Sharc,
            ArchId::SharcBlackfin,
            ArchId::AppleAgx,
            ArchId::Agx,
            ArchId::AmdGpu,
            ArchId::TiC28x,
        ] {
            assert_eq!(
                support_tier(arch),
                SupportTier::Beta,
                "{arch:?} must be Beta per Batch 22",
            );
        }

        let md = support_matrix_markdown();
        for line in md.lines().filter(|l| l.starts_with("| `")) {
            assert!(
                !line.ends_with("| stub |"),
                "support matrix must not advertise any architecture as stub: {line}",
            );
        }
    }
}
