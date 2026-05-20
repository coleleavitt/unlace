//! FLIRT signature → Session apply pass.
//!
//! Mirrors IDA's `plan_to_apply_idasgn` / `apply_idasgn_to` flow
//! (`references/ida/idalib/all/apply_idasgn_to.c`):
//!
//! 1. Load one or more `.sig` files into a [`SigFile`].
//! 2. Build a fast lookup from the leading byte pattern of each
//!    signature function to its name.
//! 3. Walk every function in the loaded binary, grab its leading bytes,
//!    and match against the signature patterns.
//! 4. For every hit, record a [`Rename`] in the session so the name
//!    surfaces in the disassembly / pseudocode / xref views.
//!
//! The byte patterns recovered by [`crate::sig::SigFile`] are the 32
//! bytes that precede each name token in the decompressed trie — i.e.
//! the function prologue fingerprint. We match a binary function by
//! requiring its first N bytes to equal the signature pattern's last N
//! bytes (the part that lines up with the function entry), with `0x00`
//! treated as a wildcard the same way IDA's variable-byte mask does.

use std::path::Path;

use unlace_session::{Rename, Session};

use crate::FlirtError;
use crate::sig::{SigFile, SigFunction};

/// A signature ready to match: name + the prologue byte fingerprint.
#[derive(Clone, Debug)]
struct Sig {
    name: String,
    pattern: Vec<u8>,
}

/// A loaded FLIRT signature set that can be applied to a [`Session`].
#[derive(Clone, Debug, Default)]
pub struct FlirtMatcher {
    sigs: Vec<Sig>,
}

/// Report of what an apply did.
#[derive(Clone, Debug, Default, PartialEq, Eq)]
pub struct FlirtApplyReport {
    /// Number of functions that received a name.
    pub renamed: usize,
    /// Number of functions inspected.
    pub inspected: usize,
    /// (address, name) pairs applied, sorted by address.
    pub applied: Vec<(u64, String)>,
}

impl FlirtMatcher {
    /// Build a matcher from one already-parsed `.sig` file.
    pub fn from_sig(sig: &SigFile) -> Self {
        let sigs = sig
            .functions
            .iter()
            .filter(|f| !f.pattern.is_empty())
            .map(|f: &SigFunction| Sig {
                name: f.name.clone(),
                pattern: f.pattern.clone(),
            })
            .collect();
        Self { sigs }
    }

    /// Load + parse a `.sig` file from disk and build a matcher.
    pub fn load(path: impl AsRef<Path>) -> Result<Self, FlirtError> {
        let sig = SigFile::load(path)?;
        Ok(Self::from_sig(&sig))
    }

    /// Merge another signature file's entries into this matcher.
    pub fn extend_from_sig(&mut self, sig: &SigFile) {
        for f in &sig.functions {
            if !f.pattern.is_empty() {
                self.sigs.push(Sig {
                    name: f.name.clone(),
                    pattern: f.pattern.clone(),
                });
            }
        }
    }

    /// Number of loaded signatures.
    pub fn len(&self) -> usize {
        self.sigs.len()
    }

    pub fn is_empty(&self) -> bool {
        self.sigs.is_empty()
    }

    /// Match a single function's leading bytes, returning the matched
    /// signature name if any. The signature's pattern is its prologue
    /// fingerprint; we slide it so its tail aligns with the function
    /// entry and compare with `0x00` as a wildcard.
    pub fn match_one(&self, func_bytes: &[u8]) -> Option<&str> {
        for sig in &self.sigs {
            if pattern_matches(&sig.pattern, func_bytes) {
                return Some(&sig.name);
            }
        }
        None
    }

    /// Apply the loaded signatures to every function in the session's
    /// binary, recording a [`Rename`] for each match. Functions that
    /// already have a non-synthetic name (i.e. not `sub_*`) are skipped
    /// unless `force` is set, matching IDA's behavior.
    pub fn apply_to_session(&self, session: &Session, force: bool) -> FlirtApplyReport {
        let mut report = FlirtApplyReport::default();
        let candidates = session
            .with_binary(|img| {
                img.symbols
                    .iter()
                    .filter_map(|(&addr, sym)| {
                        let section = img
                            .sections
                            .iter()
                            .find(|s| addr >= s.vaddr && addr < s.vaddr + s.size)?;
                        if !section.flags.contains(unlace_loader::SectionFlags::EXEC) {
                            return None;
                        }
                        let off = (addr - section.vaddr) as usize;
                        let take = 32.min(section.data.len().saturating_sub(off));
                        let bytes = section.data.get(off..off + take)?.to_vec();
                        Some((addr, sym.name.clone(), bytes))
                    })
                    .collect::<Vec<_>>()
            })
            .unwrap_or_default();

        for (addr, current_name, bytes) in candidates {
            report.inspected += 1;
            if !force && !is_synthetic_name(&current_name) {
                continue;
            }
            if let Some(name) = self.match_one(&bytes) {
                session.rename(Rename {
                    ea: addr,
                    old_name: current_name,
                    new_name: name.to_string(),
                });
                report.applied.push((addr, name.to_string()));
                report.renamed += 1;
            }
        }
        report.applied.sort_by_key(|(a, _)| *a);
        report
    }
}

/// `0x00` in the signature pattern is a "don't care" wildcard byte; all
/// other bytes must match exactly. The function must be at least as long
/// as the pattern.
fn pattern_matches(pattern: &[u8], func_bytes: &[u8]) -> bool {
    if pattern.is_empty() || func_bytes.len() < pattern.len() {
        return false;
    }
    // Require at least 4 fixed (non-wildcard) bytes so we don't match
    // everything on an all-zero pattern.
    let fixed = pattern.iter().filter(|&&b| b != 0).count();
    if fixed < 4 {
        return false;
    }
    pattern
        .iter()
        .zip(func_bytes)
        .all(|(&p, &f)| p == 0 || p == f)
}

/// IDA treats `sub_*`, `unknown_*`, and empty names as synthetic — those
/// are the ones a signature is allowed to overwrite without `force`.
fn is_synthetic_name(name: &str) -> bool {
    name.is_empty()
        || name.starts_with("sub_")
        || name.starts_with("unknown")
        || name.starts_with("nullsub_")
        || name.starts_with("loc_")
}

#[cfg(test)]
mod tests {
    use super::*;
    use crate::sig::SigFunction;

    fn matcher_with(name: &str, pattern: Vec<u8>) -> FlirtMatcher {
        FlirtMatcher {
            sigs: vec![Sig {
                name: name.to_string(),
                pattern,
            }],
        }
    }

    #[test]
    fn test_pattern_exact_match() {
        let m = matcher_with("memcpy", vec![0x48, 0x89, 0xF8, 0x48, 0x89, 0xF1]);
        assert_eq!(
            m.match_one(&[0x48, 0x89, 0xF8, 0x48, 0x89, 0xF1, 0xC3]),
            Some("memcpy")
        );
    }

    #[test]
    fn test_pattern_wildcard_zero_bytes() {
        // 0x00 in the pattern is a wildcard.
        let m = matcher_with("f", vec![0x55, 0x48, 0x00, 0x00, 0xE8, 0x90]);
        assert_eq!(
            m.match_one(&[0x55, 0x48, 0xAB, 0xCD, 0xE8, 0x90, 0x00]),
            Some("f")
        );
    }

    #[test]
    fn test_pattern_rejects_too_few_fixed_bytes() {
        // Only 2 non-wildcard bytes → must not match (avoids over-broad sigs).
        let m = matcher_with("x", vec![0x55, 0x00, 0x00, 0x00, 0x00, 0x48]);
        // 2 fixed bytes (0x55, 0x48) < 4 threshold.
        assert_eq!(m.match_one(&[0x55, 0x11, 0x22, 0x33, 0x44, 0x48]), None);
    }

    #[test]
    fn test_pattern_rejects_short_function() {
        let m = matcher_with("f", vec![0x48, 0x89, 0xF8, 0x48]);
        assert_eq!(m.match_one(&[0x48, 0x89]), None);
    }

    #[test]
    fn test_pattern_mismatch() {
        let m = matcher_with("f", vec![0x48, 0x89, 0xF8, 0x48]);
        assert_eq!(m.match_one(&[0x48, 0x89, 0xF9, 0x48]), None);
    }

    #[test]
    fn test_from_sig_drops_empty_patterns() {
        let sig = SigFile {
            version: 10,
            arch: 0,
            features: 0,
            file_types: 0,
            os_types: 0,
            app_types: 0,
            library_name: "test".into(),
            n_functions: 2,
            functions: vec![
                SigFunction {
                    name: "has_pattern".into(),
                    pattern: vec![0x55, 0x48, 0x89, 0xE5],
                },
                SigFunction {
                    name: "no_pattern".into(),
                    pattern: vec![],
                },
            ],
        };
        let m = FlirtMatcher::from_sig(&sig);
        assert_eq!(m.len(), 1);
    }

    #[test]
    fn test_is_synthetic_name() {
        assert!(is_synthetic_name(""));
        assert!(is_synthetic_name("sub_401000"));
        assert!(is_synthetic_name("nullsub_1"));
        assert!(is_synthetic_name("loc_4011A0"));
        assert!(!is_synthetic_name("main"));
        assert!(!is_synthetic_name("printf"));
    }

    fn build_test_image(symbol_name: &str, prologue: &[u8]) -> unlace_loader::BinaryImage {
        use unlace_loader::{BinaryImage, Endian, Section, SectionFlags, Symbol, SymbolKind};
        use unlace_ir::ArchId;
        let mut img = BinaryImage::empty(ArchId::X86_64, Endian::Little);
        img.sections.push(Section {
            name: ".text".into(),
            vaddr: 0x1000,
            size: prologue.len() as u64,
            data: prologue.to_vec(),
            flags: SectionFlags::READ.union(SectionFlags::EXEC),
        });
        img.symbols.insert(
            0x1000,
            Symbol {
                name: symbol_name.into(),
                addr: 0x1000,
                size: prologue.len() as u64,
                kind: SymbolKind::Function,
            },
        );
        img
    }

    #[test]
    fn test_apply_to_session_renames_synthetic_funcs() {
        let prologue = vec![0x55, 0x48, 0x89, 0xE5, 0xE8, 0x11, 0x22, 0x33];
        let session = Session::new();
        session.set_binary(build_test_image("sub_1000", &prologue));

        let m = matcher_with("my_func", prologue.clone());
        let report = m.apply_to_session(&session, false);
        assert_eq!(report.renamed, 1);
        assert_eq!(report.applied, vec![(0x1000, "my_func".to_string())]);
        assert_eq!(
            session
                .annotations()
                .renames
                .get(&0x1000)
                .map(|r| r.new_name.as_str()),
            Some("my_func")
        );
    }

    #[test]
    fn test_apply_skips_named_funcs_without_force() {
        let prologue = vec![0x55, 0x48, 0x89, 0xE5, 0xE8, 0x11, 0x22, 0x33];
        let session = Session::new();
        session.set_binary(build_test_image("already_named", &prologue));

        let m = matcher_with("my_func", prologue.clone());
        let report = m.apply_to_session(&session, false);
        assert_eq!(report.renamed, 0, "named funcs must be skipped without force");

        let forced = m.apply_to_session(&session, true);
        assert_eq!(forced.renamed, 1, "force must override existing names");
    }
}
