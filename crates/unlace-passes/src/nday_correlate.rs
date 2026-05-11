//! N-day vulnerability correlation (t430).
//!
//! Given a *patch diff* expressed as a pair of structural function
//! fingerprints — the function as it looked **before** the security patch
//! (`pre_patch_fingerprint`) and the same function **after** the fix
//! (`post_patch_fingerprint`) — plus the CVE identifier the patch closes,
//! this pass scans a target binary's per-function fingerprint table and
//! reports every function whose fingerprint matches the *unpatched*
//! version. Each such hit is treated as evidence the binary is vulnerable
//! to the corresponding CVE.
//!
//! Fingerprints are produced by [`crate::func_fingerprint::fingerprint_function`],
//! which hashes opcode skeletons in CFG order and is invariant under
//! register renaming and constant substitution. That makes the comparison
//! tolerant to compiler-version drift on identical source while still
//! distinguishing the pre-patch and post-patch *shapes* of a function
//! (since security patches almost always alter the opcode skeleton — added
//! bounds check, swapped branch direction, extra zeroing store, …).
//!
//! Correlation rule (kept deliberately strict so we don't cry wolf):
//!
//!   * a function in the binary is flagged **only** when its fingerprint
//!     equals `pre_patch_fingerprint` *and* differs from
//!     `post_patch_fingerprint`. The second clause is what disambiguates
//!     a genuinely vulnerable build from a patched build that happens to
//!     hash-collide with the pre-patch shape on some other function.
//!
//! The output is sorted by `(cve_id, function_addr)` so reports are stable
//! across runs and easy to diff.

use std::collections::BTreeMap;

/// A single patch-diff record: which CVE, which function, and the two
/// fingerprints bracketing the fix.
///
/// `pre_patch_fingerprint` is the [`crate::fingerprint_function`] of the
/// vulnerable function as it shipped *before* the CVE was patched.
/// `post_patch_fingerprint` is the same function after the upstream fix.
/// `function_name` is carried through purely for reporting — it isn't used
/// in matching, since stripped binaries usually don't have symbol names
/// for the functions we're flagging.
#[derive(Clone, Debug, PartialEq, Eq)]
pub struct NdayPattern {
    pub cve_id: String,
    pub pre_patch_fingerprint: u64,
    pub post_patch_fingerprint: u64,
    pub function_name: String,
}

/// A single correlation hit: this CVE matches the function at
/// `function_addr` in the scanned binary. `function_name` is copied
/// straight from the originating [`NdayPattern`] so downstream reporting
/// has a human-readable handle even when the binary itself is stripped.
#[derive(Clone, Debug, PartialEq, Eq, PartialOrd, Ord)]
pub struct NdayHit {
    pub cve_id: String,
    pub function_addr: u64,
    pub function_name: String,
}

/// Correlate a binary's function fingerprints against a set of N-day
/// patterns.
///
/// `binary_fingerprints` maps function entry address → structural
/// fingerprint (produced by [`crate::fingerprint_function`]) for every
/// function in the target binary.
///
/// A `(function_addr, pattern)` pair is reported when:
///
///   1. the binary's fingerprint at `function_addr` equals
///      `pattern.pre_patch_fingerprint` (unpatched shape present), **and**
///   2. that same fingerprint is *not* equal to
///      `pattern.post_patch_fingerprint` (i.e. the pattern is informative
///      — a degenerate pattern where pre==post can never produce a hit).
///
/// Multiple patterns can hit the same address (e.g. a function vulnerable
/// to two related CVEs); multiple addresses can hit the same pattern
/// (e.g. inlined-and-duplicated vulnerable code).
///
/// The returned vector is sorted by `(cve_id, function_addr)` so callers
/// can rely on a stable, diff-friendly ordering.
pub fn match_against_binary(
    binary_fingerprints: &BTreeMap<u64, u64>,
    patterns: &[NdayPattern],
) -> Vec<NdayHit> {
    let mut hits = Vec::new();
    for pattern in patterns {
        // Degenerate pattern: pre == post means the "patch" didn't change
        // the function's structural shape, so we have no way to tell
        // patched from unpatched. Skip rather than emit unverifiable hits.
        if pattern.pre_patch_fingerprint == pattern.post_patch_fingerprint {
            continue;
        }
        for (&addr, &fp) in binary_fingerprints {
            if fp == pattern.pre_patch_fingerprint {
                hits.push(NdayHit {
                    cve_id: pattern.cve_id.clone(),
                    function_addr: addr,
                    function_name: pattern.function_name.clone(),
                });
            }
        }
    }
    hits.sort();
    hits
}

#[cfg(test)]
mod tests {
    use super::*;

    fn pat(cve: &str, pre: u64, post: u64, name: &str) -> NdayPattern {
        NdayPattern {
            cve_id: cve.to_string(),
            pre_patch_fingerprint: pre,
            post_patch_fingerprint: post,
            function_name: name.to_string(),
        }
    }

    /// Baseline: the binary contains a function whose fingerprint matches
    /// the pre-patch shape for one CVE pattern, so we expect exactly one
    /// hit naming that CVE and address.
    #[test]
    fn matches_unpatched_function() {
        let mut bin = BTreeMap::new();
        bin.insert(0x1000, 0xAAAA_AAAA_AAAA_AAAA); // vulnerable
        bin.insert(0x2000, 0xDEAD_BEEF_DEAD_BEEF); // unrelated

        let patterns = vec![pat(
            "CVE-2024-0001",
            0xAAAA_AAAA_AAAA_AAAA,
            0xBBBB_BBBB_BBBB_BBBB,
            "vulnerable_parse",
        )];

        let hits = match_against_binary(&bin, &patterns);

        assert_eq!(hits.len(), 1);
        assert_eq!(hits[0].cve_id, "CVE-2024-0001");
        assert_eq!(hits[0].function_addr, 0x1000);
        assert_eq!(hits[0].function_name, "vulnerable_parse");
    }

    /// A binary whose function already matches the *post-patch*
    /// fingerprint must not produce a hit — that's the whole point of the
    /// correlation, to distinguish patched from unpatched builds.
    #[test]
    fn ignores_patched_function() {
        let mut bin = BTreeMap::new();
        bin.insert(0x1000, 0xBBBB_BBBB_BBBB_BBBB); // post-patch shape

        let patterns = vec![pat(
            "CVE-2024-0001",
            0xAAAA_AAAA_AAAA_AAAA,
            0xBBBB_BBBB_BBBB_BBBB,
            "vulnerable_parse",
        )];

        let hits = match_against_binary(&bin, &patterns);
        assert!(hits.is_empty());
    }

    /// Multi-CVE corpus over a binary with several functions: only the
    /// pre-patch matches should fire, and the result must be sorted by
    /// `(cve_id, function_addr)` for stable reporting. Also exercises the
    /// "same vulnerable shape inlined at two addresses → two hits" case.
    #[test]
    fn multiple_patterns_and_hits_are_sorted() {
        let mut bin = BTreeMap::new();
        bin.insert(0x4000, 0x1111_1111_1111_1111); // matches CVE-A pre
        bin.insert(0x2000, 0x1111_1111_1111_1111); // matches CVE-A pre (inlined dup)
        bin.insert(0x3000, 0x2222_2222_2222_2222); // matches CVE-B pre
        bin.insert(0x5000, 0x9999_9999_9999_9999); // unrelated

        let patterns = vec![
            pat("CVE-2024-0010", 0x2222_2222_2222_2222, 0x3333_3333_3333_3333, "do_decode"),
            pat("CVE-2024-0002", 0x1111_1111_1111_1111, 0x4444_4444_4444_4444, "do_parse"),
        ];

        let hits = match_against_binary(&bin, &patterns);

        // 2 hits for CVE-2024-0002 (two addresses) + 1 for CVE-2024-0010.
        assert_eq!(hits.len(), 3);

        // Sort order: cve_id first, then function_addr ascending.
        assert_eq!(hits[0].cve_id, "CVE-2024-0002");
        assert_eq!(hits[0].function_addr, 0x2000);
        assert_eq!(hits[1].cve_id, "CVE-2024-0002");
        assert_eq!(hits[1].function_addr, 0x4000);
        assert_eq!(hits[2].cve_id, "CVE-2024-0010");
        assert_eq!(hits[2].function_addr, 0x3000);
    }

    /// Degenerate pattern where pre == post carries no signal (the patch
    /// didn't alter the structural fingerprint). Such patterns must be
    /// skipped so we don't emit false positives the user can't act on.
    /// Empty pattern lists and empty binaries are also exercised.
    #[test]
    fn degenerate_and_empty_inputs() {
        // pre == post: degenerate, must produce no hits even though the
        // binary trivially "matches" the fingerprint.
        let mut bin = BTreeMap::new();
        bin.insert(0x1000, 0xCAFE_BABE_CAFE_BABE);
        let degenerate = vec![pat(
            "CVE-2024-9999",
            0xCAFE_BABE_CAFE_BABE,
            0xCAFE_BABE_CAFE_BABE,
            "ambiguous",
        )];
        assert!(match_against_binary(&bin, &degenerate).is_empty());

        // No patterns: no hits.
        assert!(match_against_binary(&bin, &[]).is_empty());

        // No binary functions: no hits even with real patterns.
        let empty: BTreeMap<u64, u64> = BTreeMap::new();
        let real = vec![pat("CVE-2024-0001", 0x1, 0x2, "f")];
        assert!(match_against_binary(&empty, &real).is_empty());
    }
}
