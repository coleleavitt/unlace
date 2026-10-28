//! Apply decoded `.sig` files to the functions of a loaded image.
//!
//! Mirrors IDA's `plan_to_apply_idasgn` / `apply_idasgn_to` flow
//! (`sub_68BA20`, `sub_68B4C0`, `sub_68A440` in libida):
//!
//! 1. Match every candidate function against each signature that targets
//!    the image's architecture ([`SigFile::match_at`]).
//! 2. Name the function after the module's public name at offset 0.
//! 3. Repeat while new names appear: modules that reference other library
//!    functions only match once those names are known.
//!
//! A name is applied once. IDA reports a later match of an already used
//! name as a "FLAIR COLLISION" and leaves that function alone; so does
//! this pass.

use std::collections::{BTreeMap, BTreeSet};
use std::path::Path;

use unlace_ir::ArchId;
use unlace_session::{Rename, Session};

use crate::FlirtError;
use crate::sig::SigFile;
use crate::sig::matching::{CodeWindow, KnownNames, MatchContext};

/// A set of loaded signature files.
#[derive(Clone, Debug, Default)]
pub struct FlirtMatcher {
    sigs: Vec<SigFile>,
}

/// One function named by a signature.
#[derive(Clone, Debug, PartialEq)]
pub struct FlirtHit {
    pub name: String,
    /// `1.0` when the module's referenced name was verified, `0.9` for a
    /// byte/CRC match alone.
    pub confidence: f32,
    /// Index of the matched module across all loaded signatures, in load
    /// order.
    pub signature_id: usize,
}

/// Report of what an apply did.
#[derive(Clone, Debug, Default, PartialEq)]
pub struct FlirtApplyReport {
    /// Number of functions that received a name.
    pub renamed: usize,
    /// Number of functions inspected.
    pub inspected: usize,
    /// (address, name) pairs applied, sorted by address.
    pub applied: Vec<(u64, String)>,
    /// Full confidence-bearing match records, sorted by address.
    pub applied_details: Vec<FlirtAppliedMatch>,
}

#[derive(Clone, Debug, PartialEq)]
pub struct FlirtAppliedMatch {
    pub addr: u64,
    pub name: String,
    pub confidence: f32,
    pub signature_id: usize,
}

impl FlirtMatcher {
    pub fn from_sig(sig: SigFile) -> Self {
        Self { sigs: vec![sig] }
    }

    /// Load and decode a `.sig` file from disk.
    pub fn load(path: impl AsRef<Path>) -> Result<Self, FlirtError> {
        Ok(Self::from_sig(SigFile::load(path)?))
    }

    pub fn push(&mut self, sig: SigFile) {
        self.sigs.push(sig);
    }

    pub fn sigs(&self) -> &[SigFile] {
        &self.sigs
    }

    /// Number of loaded modules.
    pub fn len(&self) -> usize {
        self.sigs.iter().map(|sig| sig.modules().len()).sum()
    }

    pub fn is_empty(&self) -> bool {
        self.sigs.iter().all(|sig| sig.modules().is_empty())
    }

    /// Name the functions at `candidates`.
    ///
    /// `code` holds the image's executable ranges. `known` maps addresses
    /// to names that already exist (symbols, imports); those names are
    /// never handed out again and are what referenced names resolve
    /// against, together with earlier hits.
    pub fn identify(
        &self,
        arch: ArchId,
        code: &[CodeWindow<'_>],
        candidates: &[u64],
        known: &BTreeMap<u64, String>,
    ) -> BTreeMap<u64, FlirtHit> {
        let sigs: Vec<(usize, &SigFile)> = self
            .sigs
            .iter()
            .scan(0, |first_id, sig| {
                let entry = (*first_id, sig);
                *first_id += sig.modules().len();
                Some(entry)
            })
            .filter(|(_, sig)| sig.header.applies_to(arch))
            .collect();
        let mut names = KnownAndFound {
            known,
            found: BTreeMap::new(),
        };
        let mut used: BTreeSet<String> = known.values().cloned().collect();
        let mut pending: BTreeSet<u64> = candidates.iter().copied().collect();
        let mut hits = BTreeMap::new();

        loop {
            let mut progressed = false;
            for &ea in &pending.clone() {
                let Some(window) = code.iter().find(|w| w.read(ea, 1).is_some()) else {
                    pending.remove(&ea);
                    continue;
                };
                let cx = MatchContext {
                    arch,
                    code: *window,
                    names: &names,
                };
                let Some((first_id, matched)) = sigs
                    .iter()
                    .find_map(|&(first_id, sig)| Some((first_id, sig.match_at(&cx, ea)?)))
                else {
                    continue;
                };
                pending.remove(&ea);
                progressed = true;
                let Some(public) = matched.module.function_name() else {
                    continue;
                };
                if !used.insert(public.name.clone()) {
                    tracing::debug!(
                        target: "unlace::flirt",
                        addr = ea,
                        name = %public.name,
                        "name already in use; not applied"
                    );
                    continue;
                }
                let hit = FlirtHit {
                    name: public.name.clone(),
                    confidence: if matched.module.reference.is_some() { 1.0 } else { 0.9 },
                    signature_id: first_id + matched.id.index(),
                };
                names.found.insert(ea, hit.name.clone());
                hits.insert(ea, hit);
            }
            if !progressed {
                return hits;
            }
        }
    }

    /// Apply the loaded signatures to every function symbol in the
    /// session's image, recording a [`Rename`] for each match. Functions
    /// that already have a non-synthetic name are skipped unless `force`
    /// is set.
    pub fn apply_to_session(&self, session: &Session, force: bool) -> FlirtApplyReport {
        self.apply_to_session_with_min_confidence(session, force, 0)
    }

    /// Apply signatures with a confidence threshold expressed as an
    /// integer percentage in the inclusive range 0..=100.
    pub fn apply_to_session_with_min_confidence(
        &self,
        session: &Session,
        force: bool,
        min_confidence: u8,
    ) -> FlirtApplyReport {
        let mut report = FlirtApplyReport::default();
        let Some((hits, old_names)) = session.with_binary(|img| {
            let windows: Vec<CodeWindow<'_>> = img
                .sections
                .iter()
                .filter(|s| s.flags.contains(unlace_loader::SectionFlags::EXEC))
                .map(|s| CodeWindow::new(s.vaddr, &s.data))
                .collect();
            let mut known: BTreeMap<u64, String> = img.plt_symbols.clone();
            let mut candidates = Vec::new();
            let mut old_names = BTreeMap::new();
            for (&addr, sym) in &img.symbols {
                if !windows.iter().any(|w| w.read(addr, 1).is_some()) {
                    continue;
                }
                if force || is_synthetic_name(&sym.name) {
                    candidates.push(addr);
                    old_names.insert(addr, sym.name.clone());
                } else {
                    known.insert(addr, sym.name.clone());
                }
            }
            let hits = self.identify(img.arch, &windows, &candidates, &known);
            (hits, old_names)
        }) else {
            return report;
        };

        report.inspected = old_names.len();
        for (addr, hit) in hits {
            if (hit.confidence * 100.0).round() < f32::from(min_confidence) {
                continue;
            }
            session.rename(Rename {
                ea: addr,
                old_name: old_names.get(&addr).cloned().unwrap_or_default(),
                new_name: hit.name.clone(),
            });
            report.applied.push((addr, hit.name.clone()));
            report.applied_details.push(FlirtAppliedMatch {
                addr,
                name: hit.name,
                confidence: hit.confidence,
                signature_id: hit.signature_id,
            });
            report.renamed += 1;
        }
        report
    }
}

struct KnownAndFound<'a> {
    known: &'a BTreeMap<u64, String>,
    found: BTreeMap<u64, String>,
}

impl KnownNames for KnownAndFound<'_> {
    fn name_at(&self, addr: u64) -> Option<&str> {
        self.known
            .get(&addr)
            .or_else(|| self.found.get(&addr))
            .map(String::as_str)
    }
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
    use crate::sig::tests::encode_flat;

    const STRLEN: &[u8] = &[
        0x48, 0x89, 0xF8, 0x80, 0x38, 0x00, 0x74, 0x05, 0x48, 0xFF, 0xC0, 0xEB, 0xF6, 0x48,
        0x29, 0xF8, 0xC3,
    ];
    /// `strnlen` wrapper: `mov rsi, -1; jmp strlen`.
    const TAIL_CALL: &[u8] = &[0x48, 0xC7, 0xC6, 0xFF, 0xFF, 0xFF, 0xFF, 0xE9, 0, 0, 0, 0];

    fn matcher() -> FlirtMatcher {
        let sig = SigFile::parse(&encode_flat(&[
            (STRLEN, "strlen", None),
            (TAIL_CALL, "strlen_wrapper", Some((8, "strlen"))),
        ]))
        .unwrap();
        FlirtMatcher::from_sig(sig)
    }

    fn image_bytes() -> (Vec<u8>, u64, u64) {
        let strlen_at = 0x1000u64;
        let wrapper_at = strlen_at + 0x20;
        let mut bytes = STRLEN.to_vec();
        bytes.resize(0x20, 0xCC);
        let mut wrapper = TAIL_CALL.to_vec();
        let disp = (strlen_at as i64 - (wrapper_at as i64 + 12)) as i32;
        wrapper[8..12].copy_from_slice(&disp.to_le_bytes());
        bytes.extend(wrapper);
        (bytes, strlen_at, wrapper_at)
    }

    #[test]
    fn identify_resolves_references_through_earlier_hits() {
        let m = matcher();
        let (bytes, strlen_at, wrapper_at) = image_bytes();
        let windows = [CodeWindow::new(0x1000, &bytes)];
        let hits = m.identify(ArchId::X86_64, &windows, &[strlen_at, wrapper_at], &BTreeMap::new());
        assert_eq!(hits[&strlen_at].name, "strlen");
        assert_eq!(hits[&strlen_at].confidence, 0.9);
        assert_eq!(hits[&wrapper_at].name, "strlen_wrapper");
        assert_eq!(hits[&wrapper_at].confidence, 1.0);
        assert_eq!(hits[&wrapper_at].signature_id, 1);

        // Without the referenced function among the candidates or known
        // names, the wrapper stays unnamed.
        let hits = m.identify(ArchId::X86_64, &windows, &[wrapper_at], &BTreeMap::new());
        assert!(hits.is_empty());
    }

    #[test]
    fn identify_skips_names_already_in_use() {
        let m = matcher();
        let (bytes, strlen_at, _) = image_bytes();
        let windows = [CodeWindow::new(0x1000, &bytes)];
        let known = BTreeMap::from([(0x5000, "strlen".to_string())]);
        assert!(m.identify(ArchId::X86_64, &windows, &[strlen_at], &known).is_empty());
    }

    #[test]
    fn identify_ignores_other_architectures() {
        let m = matcher();
        let (bytes, strlen_at, _) = image_bytes();
        let windows = [CodeWindow::new(0x1000, &bytes)];
        assert!(m.identify(ArchId::AArch64, &windows, &[strlen_at], &BTreeMap::new()).is_empty());
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

    fn build_test_image(symbol_name: &str, bytes: &[u8]) -> unlace_loader::BinaryImage {
        use unlace_loader::{BinaryImage, Endian, Section, SectionFlags, Symbol, SymbolKind};
        let mut img = BinaryImage::empty(ArchId::X86_64, Endian::Little);
        img.sections.push(Section {
            name: ".text".into(),
            vaddr: 0x1000,
            size: bytes.len() as u64,
            data: bytes.to_vec(),
            flags: SectionFlags::READ.union(SectionFlags::EXEC),
        });
        img.symbols.insert(
            0x1000,
            Symbol {
                name: symbol_name.into(),
                addr: 0x1000,
                size: bytes.len() as u64,
                kind: SymbolKind::Function,
            },
        );
        img
    }

    #[test]
    fn test_apply_to_session_renames_synthetic_funcs() {
        let session = Session::new();
        session.set_binary(build_test_image("sub_1000", STRLEN));

        let report = matcher().apply_to_session_with_min_confidence(&session, false, 90);
        assert_eq!(report.renamed, 1);
        assert_eq!(report.applied, vec![(0x1000, "strlen".to_string())]);
        assert_eq!(report.applied_details[0].confidence, 0.9);
        assert_eq!(report.applied_details[0].signature_id, 0);
        assert_eq!(
            session
                .annotations()
                .renames
                .get(&0x1000)
                .map(|r| r.new_name.as_str()),
            Some("strlen")
        );

        let strict = matcher().apply_to_session_with_min_confidence(&session, false, 100);
        assert_eq!(strict.renamed, 0);
    }

    #[test]
    fn test_apply_skips_named_funcs_without_force() {
        let session = Session::new();
        session.set_binary(build_test_image("already_named", STRLEN));

        let m = matcher();
        let report = m.apply_to_session(&session, false);
        assert_eq!(report.renamed, 0, "named funcs must be skipped without force");

        let forced = m.apply_to_session(&session, true);
        assert_eq!(forced.renamed, 1, "force must override existing names");
    }
}
