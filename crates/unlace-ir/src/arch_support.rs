//! Per-architecture support tier classification (plan.md Batch 22).
//!
//! This is the single source of truth for "is this architecture built, and
//! how trustworthy is the output for it today". The `unlace-lift` facade
//! and `cargo xtask status` read from here.
//!
//! Two axes are tracked. [`ProductTier`] is the product scope: which
//! lifters a default build compiles (x86, ARM, AArch64) and which stay
//! experimental behind an `arch-*` cargo feature of `unlace-lift`.
//! [`SupportTier`] is lifter maturity, classified intentionally narrowly:
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

/// Whether an architecture is part of the default product build.
///
/// This is orthogonal to [`SupportTier`]: the product tier says what a
/// default `unlace` build lifts at all, the support tier says how mature the
/// lifter is once it is built.
#[derive(Debug, Clone, Copy, PartialEq, Eq, Hash, PartialOrd, Ord)]
pub enum ProductTier {
    /// Always compiled into `unlace-lift`; in the current product scope
    /// (x86, ARM, Apple).
    Supported,
    /// Kept in tree but only compiled when the named `unlace-lift` (and
    /// `unlace-cli`) cargo feature is enabled.
    Experimental { feature: &'static str },
    /// No lifter is wired into the `unlace-lift` facade.
    Unsupported,
}

impl ProductTier {
    /// Human-readable label for documentation tables.
    pub const fn label(self) -> &'static str {
        match self {
            ProductTier::Supported => "supported",
            ProductTier::Experimental { .. } => "experimental",
            ProductTier::Unsupported => "unsupported",
        }
    }

    /// Cargo feature that enables an experimental lifter.
    pub const fn feature(self) -> Option<&'static str> {
        match self {
            ProductTier::Experimental { feature } => Some(feature),
            ProductTier::Supported | ProductTier::Unsupported => None,
        }
    }
}

/// Product tier for `arch`: supported in the default build, experimental
/// behind an `arch-*` cargo feature, or without a lifter.
pub const fn product_tier(arch: ArchId) -> ProductTier {
    use ArchId::*;
    let feature = match arch {
        X86 | X86_64 | Arm | AArch64 => return ProductTier::Supported,
        Lua | Unknown(_) => return ProductTier::Unsupported,
        RiscV64 => "arch-riscv",
        Mips | Mips64 => "arch-mips",
        Ppc | Ppc64 => "arch-ppc",
        V850 => "arch-v850",
        Arc => "arch-arc",
        TriCore => "arch-tricore",
        Wasm => "arch-wasm",
        Ebpf | Sbpf => "arch-ebpf",
        Avr => "arch-avr",
        Msp430 => "arch-msp430",
        AmdGpu => "arch-amdgpu",
        Stm8 => "arch-stm8",
        Z80 => "arch-z80",
        RxRenesas => "arch-rx",
        Agx => "arch-agx",
        Sparc => "arch-sparc",
        M68k => "arch-m68k",
        SuperH => "arch-superh",
        NvidiaSass => "arch-sass",
        Xtensa => "arch-xtensa",
        Mos6502 => "arch-6502",
        I8051 => "arch-8051",
        Hexagon => "arch-hexagon",
        Pic16 => "arch-pic",
        Sharc | SharcBlackfin => "arch-sharc",
        TiC6x | TiC28x => "arch-ti",
        Evm => "arch-evm",
        SpirV => "arch-spirv",
        AppleAgx => "arch-appleagx",
    };
    ProductTier::Experimental { feature }
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
    let mut rows: Vec<(ProductTier, SupportTier, String)> = all_arches()
        .iter()
        .map(|&a| (product_tier(a), support_tier(a), a.to_string()))
        .collect();
    rows.sort();

    let mut s = String::new();
    let _ = writeln!(s, "| architecture | product | maturity | cargo feature |");
    let _ = writeln!(s, "|--------------|---------|----------|---------------|");
    for (product, tier, name) in &rows {
        let feature = product
            .feature()
            .map_or("-".to_string(), |f| format!("`{f}`"));
        let _ = writeln!(
            s,
            "| `{name}` | {} | {} | {feature} |",
            product.label(),
            tier.label()
        );
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
    fn product_scope_is_x86_and_arm() {
        for arch in all_arches() {
            let supported = matches!(
                arch,
                ArchId::X86 | ArchId::X86_64 | ArchId::Arm | ArchId::AArch64
            );
            assert_eq!(
                product_tier(*arch) == ProductTier::Supported,
                supported,
                "{arch:?}"
            );
        }
        assert_eq!(product_tier(ArchId::Unknown(7)), ProductTier::Unsupported);
    }

    #[test]
    fn experimental_features_are_arch_prefixed() {
        for arch in all_arches() {
            if let Some(feature) = product_tier(*arch).feature() {
                assert!(feature.starts_with("arch-"), "{arch:?}: {feature}");
            }
        }
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
