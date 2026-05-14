//! Architecture-neutral stack model (plan.md Batch 2).
//!
//! Stack recovery used to bake `RSP_OFFSET = 32` / `RBP_OFFSET = 40` directly
//! into three pass modules, so it only ever resolved frame addresses for
//! x86_64 binaries. Every non-x86 fixture reported `stkvars=0`.
//!
//! This module centralises the SP / FP register convention per architecture
//! into a single `StackSpec` value. Passes look up the spec via
//! [`StackSpec::for_arch`] and consult `spec.sp` / `spec.fp` instead of the
//! old hard-coded constants.
//!
//! The numeric offsets here mirror the per-arch register-file layouts in
//! `crates/unlace-lift-*/src/{register_file,lib}.rs` — those files own the
//! canonical SLEIGH-style varnode bank. If a lifter ever changes its SP/FP
//! offset, the spec below must change in lockstep.

use crate::{ArchId, SpaceId, Varnode};

/// Direction the stack grows when something is pushed.
///
/// Almost every modern ABI grows downward (SP decreases on push). The enum
/// exists so the rare upward-growing target can be modelled correctly
/// without inventing a magic sentinel in offset values.
#[derive(Copy, Clone, Debug, PartialEq, Eq)]
pub enum StackGrowth {
    /// Pushes decrement SP (x86, ARM, MIPS, RISC-V, PPC, …).
    Down,
    /// Pushes increment SP (rare).
    Up,
}

/// Architecture-neutral description of an ABI's stack registers.
///
/// `sp` and (optional) `fp` are the canonical SLEIGH-style register-bank
/// varnodes that lifters emit when they reference the stack pointer / frame
/// pointer. Stack-recovery passes compare instruction operands against
/// these values to identify frame-relative loads/stores.
#[derive(Copy, Clone, Debug, PartialEq, Eq)]
pub struct StackSpec {
    /// Stack pointer register varnode.
    pub sp: Varnode,
    /// Optional frame pointer register varnode. `None` when the ABI has no
    /// dedicated FP register (every recent RISC frame-pointer-omitted leaf
    /// looks like this — the SP is the only frame anchor).
    pub fp: Option<Varnode>,
    /// Pointer width in bytes. Used by stack-recovery passes to size
    /// frame slots when the lifter didn't emit an explicit access width.
    pub ptr_size: u8,
    /// Stack growth direction. Affects whether frame offsets are negative
    /// (Down — typical) or positive (Up — rare).
    pub growth: StackGrowth,
}

impl StackSpec {
    /// Resolve the stack spec for a target architecture, or `None` when the
    /// arch is not yet supported by the stack-recovery pass pipeline.
    ///
    /// Passes that can't proceed without a spec should treat `None` as
    /// "stack recovery disabled for this arch" rather than panicking — the
    /// pipeline already passes `Unknown` through gracefully.
    pub fn for_arch(arch: ArchId) -> Option<Self> {
        let (sp_off, fp_off, ptr_size) = match arch {
            // x86: ESP at SLEIGH register-bank offset 16, EBP at 24 — but
            // the current x86_64 lifter shares the 64-bit register file
            // for both 32- and 64-bit code (`RSP=32`, `RBP=40`). Keep the
            // two arches mapped to the same offsets so the existing fixed
            // x86 tests stay green; a future x86-only lifter pass can
            // refine this.
            ArchId::X86 | ArchId::X86_64 => (32, Some(40), 8),
            // ARM A64: X29 = FP at 232, X30 = LR at 240, X31 = SP at 248.
            // See crates/unlace-lift-arm/src/register_file.rs (X29/SP).
            ArchId::AArch64 | ArchId::Arm => (248, Some(232), 8),
            // MIPS: $sp at 232, $fp ($s8) at 240. See
            // crates/unlace-lift-mips/src/register_file.rs.
            ArchId::Mips | ArchId::Mips64 => (232, Some(240), 8),
            // RISC-V: x2 is SP, x8 is FP/s0. The lifter uses
            // `Varnode::reg((i as u64) * 8, 8)` so x2 → offset 16, x8 → 64.
            ArchId::RiscV64 => (16, Some(64), 8),
            // PPC: r1 is the canonical SP, r31 is the conventional FP in
            // most ABIs. PPC32 uses 4-byte GPRs (`GPR_BASE + n*4`), PPC64
            // uses 8-byte (`GPR_BASE + n*8`). See
            // crates/unlace-lift-ppc/src/register_file.rs.
            ArchId::Ppc => (1 * 4, Some(31 * 4), 4),
            ArchId::Ppc64 => (1 * 8, Some(31 * 8), 8),
            // V850: r3 is SP, r2 is conventional FP. GPRs are 4-byte stored
            // at `(i as u64) * 8`. See crates/unlace-lift-v850/src/lib.rs.
            ArchId::V850 => (3 * 8, Some(2 * 8), 4),
            // ARCompact: r28 = SP, r27 = FP. GPRs at `(i as u64) * 8`,
            // 4-byte width. See crates/unlace-lift-arc/src/lib.rs.
            ArchId::Arc => (28 * 8, Some(27 * 8), 4),
            _ => return None,
        };
        let sp = Varnode::new(SpaceId::Register, sp_off, ptr_size);
        let fp = fp_off.map(|off| Varnode::new(SpaceId::Register, off, ptr_size));
        Some(Self {
            sp,
            fp,
            ptr_size,
            growth: StackGrowth::Down,
        })
    }

    /// Return `true` when `vn` refers to this spec's SP register.
    pub fn is_sp(&self, vn: &Varnode) -> bool {
        vn.space == SpaceId::Register && vn.offset == self.sp.offset
    }

    /// Return `true` when `vn` refers to this spec's FP register (if any).
    pub fn is_fp(&self, vn: &Varnode) -> bool {
        self.fp
            .as_ref()
            .is_some_and(|fp| vn.space == SpaceId::Register && vn.offset == fp.offset)
    }

    /// Return `true` when `vn` is either the SP or the FP register.
    ///
    /// Stack-recovery passes use this everywhere the legacy code wrote
    /// `vn.offset == RSP_OFFSET || vn.offset == RBP_OFFSET`.
    pub fn is_frame_base(&self, vn: &Varnode) -> bool {
        self.is_sp(vn) || self.is_fp(vn)
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn x86_64_matches_legacy_constants() {
        let s = StackSpec::for_arch(ArchId::X86_64).expect("x86_64 supported");
        assert_eq!(s.sp.offset, 32);
        assert_eq!(s.fp.unwrap().offset, 40);
        assert_eq!(s.ptr_size, 8);
        assert_eq!(s.growth, StackGrowth::Down);
    }

    #[test]
    fn aarch64_sp_at_x31() {
        let s = StackSpec::for_arch(ArchId::AArch64).expect("aarch64 supported");
        assert_eq!(s.sp.offset, 248);
        assert_eq!(s.fp.unwrap().offset, 232);
    }

    #[test]
    fn mips_sp_at_29() {
        let s = StackSpec::for_arch(ArchId::Mips64).expect("mips64 supported");
        assert_eq!(s.sp.offset, 232);
        assert_eq!(s.fp.unwrap().offset, 240);
    }

    #[test]
    fn riscv_sp_at_x2() {
        let s = StackSpec::for_arch(ArchId::RiscV64).expect("riscv64 supported");
        assert_eq!(s.sp.offset, 16);
        assert_eq!(s.fp.unwrap().offset, 64);
    }

    #[test]
    fn ppc64_sp_at_r1() {
        let s = StackSpec::for_arch(ArchId::Ppc64).expect("ppc64 supported");
        assert_eq!(s.sp.offset, 8);
        assert_eq!(s.fp.unwrap().offset, 248);
    }

    #[test]
    fn unsupported_arch_returns_none() {
        assert!(StackSpec::for_arch(ArchId::Wasm).is_none());
        assert!(StackSpec::for_arch(ArchId::Unknown(0xdead)).is_none());
    }

    #[test]
    fn is_frame_base_matches_sp_and_fp() {
        let s = StackSpec::for_arch(ArchId::X86_64).unwrap();
        let rsp = Varnode::reg(32, 8);
        let rbp = Varnode::reg(40, 8);
        let rax = Varnode::reg(0, 8);
        let const_v = Varnode::constant(42, 8);
        assert!(s.is_sp(&rsp));
        assert!(!s.is_sp(&rbp));
        assert!(s.is_fp(&rbp));
        assert!(!s.is_fp(&rsp));
        assert!(s.is_frame_base(&rsp));
        assert!(s.is_frame_base(&rbp));
        assert!(!s.is_frame_base(&rax));
        assert!(!s.is_frame_base(&const_v));
    }
}
