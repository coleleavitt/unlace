//! Instruction skippers — code units the FID hasher must *not* fold into the
//! fingerprint (alignment NOPs the compiler interleaves into a function body).
//!
//! # Why
//!
//! Visual Studio (and gcc, on Intel's advice) lays down multi-byte "do nothing"
//! NOP forms for alignment / dynamic code patching. Those bytes are not part of
//! the function's *meaning*; if the hasher folded them in, two builds of the same
//! function with different alignment padding would fingerprint differently. The
//! skipper recognizes the canonical NOP encodings and the hasher drops the code
//! unit (un-counting it from the score, `codeUnitIndex -= 1`).
//!
//! # Origin (upstream Ghidra, the tree unlace was ported from)
//!
//! - `Ghidra/Features/Base/src/main/java/ghidra/util/search/InstructionSkipper.java`
//!   — the [`InstructionSkipper`] trait (`getApplicableProcessor` /
//!   `shouldSkip`). unlace drops `getApplicableProcessor` from the trait: the
//!   skipper *set* is selected per-architecture at hasher-build time (PR4), so a
//!   skipper in the set already applies; non-x86 gets an empty set and never
//!   skips.
//! - `Ghidra/Processors/x86/src/main/java/ghidra/feature/fid/hash/X86InstructionSkipper.java`
//!   — [`X86InstructionSkipper`] and its NOP `PATTERNS` table (copied verbatim).
//!
//! **Do not edit the `PATTERNS` table** without bumping the FID DB version — the
//! Ghidra source carries the same warning (changing it changes every x86 hash).

/// A per-architecture NOP/alignment skipper. The hasher consults each skipper in
/// its set for every code unit; a `true` means "this code unit is padding — do
/// not fold it into the hash, and do not count it toward the score."
///
/// `Send + Sync` so a [`FidHasher`](crate::fid::hash::FidHasher) (which owns a
/// `Vec<Box<dyn InstructionSkipper>>`) can be shared across analysis threads.
pub trait InstructionSkipper: Send + Sync {
    /// `shouldSkip(byte[] buffer, int size)` — does the first `size` bytes of
    /// `buffer` exactly match one of this skipper's NOP patterns?
    fn should_skip(&self, buffer: &[u8], size: usize) -> bool;
}

/// The x86 NOP/alignment skipper — a verbatim port of Ghidra's
/// `X86InstructionSkipper`.
///
/// These are the canonical multi-byte NOP forms Visual Studio / gcc emit for
/// alignment and dynamic code patching (Intel's recommended `0F 1F` family plus
/// the `8B Cx` self-`mov` idioms and `66`-prefixed variants).
#[derive(Debug, Clone, Copy, Default)]
pub struct X86InstructionSkipper;

/// `X86InstructionSkipper.PATTERNS` — the NOP encodings, copied byte-for-byte.
///
/// IF YOU CHANGE THIS, YOU MUST BUMP THE FID DB VERSION AND REBUILD EVERY x86
/// DATABASE (the same warning the upstream source carries).
const X86_NOP_PATTERNS: &[&[u8]] = &[
    &[0x90],
    &[0x8b, 0xc0],
    &[0x8b, 0xc9],
    &[0x8b, 0xd2],
    &[0x8b, 0xdb],
    &[0x8b, 0xe4],
    &[0x8b, 0xed],
    &[0x8b, 0xf6],
    &[0x8b, 0xff],
    &[0x66, 0x90],
    &[0x0f, 0x1f, 0x00],
    &[0x0f, 0x1f, 0x40, 0x00],
    &[0x0f, 0x1f, 0x44, 0x00, 0x00],
    &[0x66, 0x0f, 0x1f, 0x44, 0x00, 0x00],
    &[0x0f, 0x1f, 0x80, 0x00, 0x00, 0x00, 0x00],
    &[0x0f, 0x1f, 0x84, 0x00, 0x00, 0x00, 0x00, 0x00],
    &[0x66, 0x0f, 0x1f, 0x84, 0x00, 0x00, 0x00, 0x00, 0x00],
];

impl InstructionSkipper for X86InstructionSkipper {
    fn should_skip(&self, buffer: &[u8], size: usize) -> bool {
        // `for (ii ...) { if (pat.length != size) continue; ... if (i==size) return true; }`
        for pat in X86_NOP_PATTERNS {
            if pat.len() != size {
                continue;
            }
            // A full-length match (every byte equal). `buffer` may be longer than
            // `size`; only the first `size` bytes are compared (and `size ==
            // pat.len()` here), mirroring the Java loop over `[0, size)`.
            if size <= buffer.len() && buffer[..size] == **pat {
                return true;
            }
        }
        false
    }
}

#[cfg(test)]
mod tests;
