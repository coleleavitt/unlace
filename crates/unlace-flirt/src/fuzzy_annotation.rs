//! Per-function annotation lookup keyed on FLIRT signature + fuzzy-hash (t444).
//!
//! Combines FLIRT pattern matching with locality-sensitive fuzzy hashing to
//! look up annotations for binary functions. The dual-key approach enables:
//!
//! - **Exact identification** via FLIRT byte patterns + CRC (high confidence)
//! - **Fuzzy identification** via block-level FNV-1a fingerprints (tolerates
//!   minor code changes, compiler variations, optimisation levels)
//!
//! Annotations are returned ranked by match quality:
//!   exact FLIRT match > fuzzy hash similarity > partial FLIRT match

use crate::FlirtDb;

// ─── Fuzzy Hash ──────────────────────────────────────────────────────────────

/// Default block size (bytes) for fuzzy hashing small functions.
const MIN_BLOCK_SIZE: usize = 8;

/// FNV-1a offset basis (32-bit).
const FNV_OFFSET: u32 = 0x811c_9dc5;
/// FNV-1a prime (32-bit).
const FNV_PRIME: u32 = 0x0100_0193;

/// A locality-sensitive fuzzy hash composed of per-block FNV-1a digests.
///
/// Two functions that share identical blocks (even if some blocks differ)
/// will share sub-hashes, yielding a high similarity score.
#[derive(Debug, Clone, PartialEq, Eq, Hash)]
pub struct FuzzyHash {
    /// The block size used when computing this hash.
    pub block_size: usize,
    /// Sequence of per-block FNV-1a hashes (the fingerprint).
    pub block_hashes: Vec<u32>,
}

impl FuzzyHash {
    /// Compute the fuzzy hash of `bytes` by dividing into fixed-size blocks,
    /// hashing each block with FNV-1a, and collecting the digests.
    pub fn compute(bytes: &[u8]) -> Self {
        let block_size = select_block_size(bytes.len());
        let block_hashes = compute_block_hashes(bytes, block_size);
        Self {
            block_size,
            block_hashes,
        }
    }

    /// Similarity score in `[0.0, 1.0]` between `self` and `other`.
    ///
    /// Computed as: matching block hashes / max(total blocks in self, other).
    /// Block sizes must be compatible (equal, or one is double the other)
    /// for a meaningful comparison; otherwise returns 0.0.
    pub fn similarity(&self, other: &FuzzyHash) -> f32 {
        // If block sizes are incompatible, no comparison possible.
        if !compatible_block_sizes(self.block_size, other.block_size) {
            return 0.0;
        }

        // If block sizes match, compare directly.
        if self.block_size == other.block_size {
            return direct_similarity(&self.block_hashes, &other.block_hashes);
        }

        // If one is double the other, re-hash the finer one at the coarser
        // granularity would be ideal, but as an approximation we compare
        // every-other block of the finer hash against the coarser one.
        // For simplicity, return a penalised direct comparison of the
        // shorter vectors.
        let (fine, coarse) = if self.block_size < other.block_size {
            (&self.block_hashes, &other.block_hashes)
        } else {
            (&other.block_hashes, &self.block_hashes)
        };

        // Take every other element from the fine hash to approximate alignment.
        let downsampled: Vec<u32> = fine.iter().step_by(2).copied().collect();
        direct_similarity(&downsampled, coarse) * 0.85 // penalty for block-size mismatch
    }
}

/// Select an appropriate block size for the given data length.
fn select_block_size(len: usize) -> usize {
    if len == 0 {
        return MIN_BLOCK_SIZE;
    }
    // Target ~16 blocks per function, with a floor of MIN_BLOCK_SIZE.
    let candidate = len / 16;
    candidate.max(MIN_BLOCK_SIZE)
}

/// Hash function bytes into per-block FNV-1a digests.
fn compute_block_hashes(bytes: &[u8], block_size: usize) -> Vec<u32> {
    if bytes.is_empty() {
        return Vec::new();
    }
    let mut hashes = Vec::with_capacity(bytes.len() / block_size + 1);
    for chunk in bytes.chunks(block_size) {
        hashes.push(fnv1a_32(chunk));
    }
    hashes
}

/// FNV-1a 32-bit hash of a byte slice.
#[inline]
fn fnv1a_32(data: &[u8]) -> u32 {
    let mut hash = FNV_OFFSET;
    for &b in data {
        hash ^= b as u32;
        hash = hash.wrapping_mul(FNV_PRIME);
    }
    hash
}

/// Direct similarity: count of positionally-matching block hashes / max length.
fn direct_similarity(a: &[u32], b: &[u32]) -> f32 {
    if a.is_empty() && b.is_empty() {
        return 1.0;
    }
    let max_len = a.len().max(b.len());
    if max_len == 0 {
        return 1.0;
    }
    let matching = a
        .iter()
        .zip(b.iter())
        .filter(|(x, y)| x == y)
        .count();
    matching as f32 / max_len as f32
}

/// Check whether two block sizes are comparable (equal or one is 2× the other).
fn compatible_block_sizes(a: usize, b: usize) -> bool {
    a == b || a == b * 2 || b == a * 2
}

// ─── Annotations ─────────────────────────────────────────────────────────────

/// Source of an annotation match.
#[derive(Debug, Clone, PartialEq, Eq)]
pub enum AnnotationSource {
    /// Exact FLIRT pattern match (byte pattern + CRC).
    FlirtExact,
    /// Fuzzy hash similarity match.
    FuzzyHash,
    /// Partial FLIRT match (leading bytes matched but CRC failed).
    FlirtPartial,
}

/// A single annotation attached to a function.
#[derive(Debug, Clone, PartialEq, Eq)]
pub enum Annotation {
    /// Known function name (e.g. "strlen", "malloc").
    FunctionName(String),
    /// Parameter names and optional types: (name, type_hint).
    Parameters(Vec<(String, Option<String>)>),
    /// Return type hint.
    ReturnType(String),
    /// Free-form comment/note.
    Comment(String),
    /// Associated struct/type definition (name, fields).
    StructDef {
        name: String,
        fields: Vec<(String, String)>,
    },
}

/// A ranked annotation match result.
#[derive(Debug, Clone, PartialEq)]
pub struct AnnotationMatch {
    /// The identified function name.
    pub function_name: String,
    /// Confidence score in `[0.0, 1.0]`.
    pub confidence: f32,
    /// How the match was obtained.
    pub source: AnnotationSource,
    /// Annotations associated with the matched function.
    pub annotations: Vec<Annotation>,
}

// ─── Annotation Database ─────────────────────────────────────────────────────

/// An entry in the annotation database: a known function with its FLIRT
/// pattern index (if any), fuzzy hash, and associated annotations.
#[derive(Debug, Clone)]
pub struct AnnotationEntry {
    /// Canonical function name.
    pub name: String,
    /// Optional index into the FLIRT database for exact matching.
    pub flirt_pattern_index: Option<usize>,
    /// Fuzzy hash of the canonical function body.
    pub fuzzy_hash: FuzzyHash,
    /// Annotations for this function.
    pub annotations: Vec<Annotation>,
}

/// Database of known function annotations, queryable by FLIRT sig + fuzzy hash.
#[derive(Debug, Clone, Default)]
pub struct AnnotationDb {
    entries: Vec<AnnotationEntry>,
}

impl AnnotationDb {
    /// Create an empty annotation database.
    pub fn new() -> Self {
        Self {
            entries: Vec::new(),
        }
    }

    /// Add a known function entry.
    pub fn add_entry(&mut self, entry: AnnotationEntry) {
        self.entries.push(entry);
    }

    /// Number of entries in the database.
    pub fn len(&self) -> usize {
        self.entries.len()
    }

    /// Whether the database is empty.
    pub fn is_empty(&self) -> bool {
        self.entries.is_empty()
    }

    /// Look up annotations for a function given its raw bytes.
    ///
    /// Strategy (in priority order):
    /// 1. Exact FLIRT match — pattern bytes + mask + CRC all pass.
    /// 2. Fuzzy hash similarity above `min_similarity` threshold.
    /// 3. Partial FLIRT match — leading bytes match but CRC fails.
    ///
    /// Returns all matches above threshold, sorted by confidence descending.
    pub fn lookup(
        &self,
        func_bytes: &[u8],
        flirt_db: &FlirtDb,
        min_similarity: f32,
    ) -> Vec<AnnotationMatch> {
        let func_fuzzy = FuzzyHash::compute(func_bytes);
        let mut results = Vec::new();

        // 1. Exact FLIRT match
        if let Some(flirt_match) = flirt_db.match_bytes(0, func_bytes) {
            if let Some(entry) = self.find_by_flirt_index(flirt_match.pattern_index) {
                results.push(AnnotationMatch {
                    function_name: entry.name.clone(),
                    confidence: 1.0,
                    source: AnnotationSource::FlirtExact,
                    annotations: entry.annotations.clone(),
                });
            } else {
                // FLIRT matched but no annotation entry — still report it.
                results.push(AnnotationMatch {
                    function_name: flirt_match.name.clone(),
                    confidence: 0.95,
                    source: AnnotationSource::FlirtExact,
                    annotations: vec![Annotation::FunctionName(flirt_match.name)],
                });
            }
        }

        // 2. Fuzzy hash similarity
        for entry in &self.entries {
            // Skip entries already matched by exact FLIRT.
            if results
                .iter()
                .any(|r| r.function_name == entry.name && r.source == AnnotationSource::FlirtExact)
            {
                continue;
            }
            let sim = func_fuzzy.similarity(&entry.fuzzy_hash);
            if sim >= min_similarity {
                results.push(AnnotationMatch {
                    function_name: entry.name.clone(),
                    confidence: sim,
                    source: AnnotationSource::FuzzyHash,
                    annotations: entry.annotations.clone(),
                });
            }
        }

        // 3. Partial FLIRT match (leading bytes match, CRC may fail)
        for (idx, pattern) in flirt_db.patterns.iter().enumerate() {
            // Skip if we already have an exact match from this pattern.
            if results.iter().any(|r| {
                r.source == AnnotationSource::FlirtExact
                    && self
                        .find_by_flirt_index(idx)
                        .map_or(false, |e| e.name == r.function_name)
            }) {
                continue;
            }
            if partial_flirt_match(pattern, func_bytes) {
                let confidence = 0.5; // partial match baseline
                let name = pattern.name.clone();
                // Avoid duplicates.
                if results
                    .iter()
                    .any(|r| r.function_name == name && r.confidence >= confidence)
                {
                    continue;
                }
                let annotations = self
                    .find_by_flirt_index(idx)
                    .map(|e| e.annotations.clone())
                    .unwrap_or_else(|| vec![Annotation::FunctionName(name.clone())]);
                results.push(AnnotationMatch {
                    function_name: name,
                    confidence,
                    source: AnnotationSource::FlirtPartial,
                    annotations,
                });
            }
        }

        // Sort by confidence descending.
        results.sort_by(|a, b| b.confidence.partial_cmp(&a.confidence).unwrap_or(std::cmp::Ordering::Equal));
        results
    }

    /// Find an entry by its FLIRT pattern index.
    fn find_by_flirt_index(&self, idx: usize) -> Option<&AnnotationEntry> {
        self.entries
            .iter()
            .find(|e| e.flirt_pattern_index == Some(idx))
    }
}

/// Check if a FLIRT pattern's leading bytes match (ignoring CRC).
/// This is a "partial" match — the byte pattern and mask pass but we
/// deliberately skip the CRC verification.
fn partial_flirt_match(pattern: &crate::FlirtPattern, func_bytes: &[u8]) -> bool {
    // Length check.
    if pattern.length > 0 && (func_bytes.len() as u32) < pattern.length {
        return false;
    }
    // Leading byte pattern check.
    if func_bytes.len() < pattern.bytes.len() {
        return false;
    }
    for (i, (&pat, &mask)) in pattern.bytes.iter().zip(pattern.mask.iter()).enumerate() {
        if (func_bytes[i] & mask) != (pat & mask) {
            return false;
        }
    }
    // Deliberately NOT checking CRC — that's what makes this "partial".
    true
}

// ─── Convenience: combined lookup from raw bytes ─────────────────────────────

/// One-shot annotation lookup for a function's raw bytes.
///
/// Combines FLIRT exact matching, fuzzy hash comparison, and partial FLIRT
/// matching into a single ranked result set.
pub fn lookup_annotations(
    func_bytes: &[u8],
    flirt_db: &FlirtDb,
    annotation_db: &AnnotationDb,
    min_similarity: f32,
) -> Vec<AnnotationMatch> {
    annotation_db.lookup(func_bytes, flirt_db, min_similarity)
}

// ─── Tests ───────────────────────────────────────────────────────────────────

#[cfg(test)]
mod tests {
    use super::*;
    use crate::FlirtPattern;

    fn make_flirt_db() -> FlirtDb {
        FlirtDb {
            patterns: vec![
                FlirtPattern {
                    bytes: vec![0x55, 0x48, 0x89, 0xe5],
                    mask: vec![0xFF, 0xFF, 0xFF, 0xFF],
                    name: "generic_prologue".to_string(),
                    length: 0,
                    crc16: 0,
                    crc_offset: 0,
                    crc_length: 0,
                    exact_length: 0,
                    prologue_len: 0,
                },
                FlirtPattern {
                    bytes: vec![0xF3, 0x0F, 0x1E, 0xFA, 0x55],
                    mask: vec![0xFF, 0xFF, 0xFF, 0xFF, 0xFF],
                    name: "endbr64_func".to_string(),
                    length: 0,
                    crc16: 0,
                    crc_offset: 0,
                    crc_length: 0,
                    exact_length: 0,
                    prologue_len: 0,
                },
            ],
        }
    }

    fn make_annotation_db() -> AnnotationDb {
        let func_bytes_a = &[
            0x55, 0x48, 0x89, 0xe5, 0x48, 0x83, 0xec, 0x20, 0x89, 0x7d, 0xec, 0x48, 0x89, 0x75,
            0xe0, 0x31, 0xc0, 0xc9, 0xc3, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90,
            0x90, 0x90, 0x90, 0x90,
        ];
        let func_bytes_b = &[
            0xF3, 0x0F, 0x1E, 0xFA, 0x55, 0x48, 0x89, 0xe5, 0x48, 0x8b, 0x07, 0x48, 0x85, 0xc0,
            0x74, 0x05, 0xff, 0xd0, 0xeb, 0xf5, 0x5d, 0xc3, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90,
            0x90, 0x90, 0x90, 0x90,
        ];

        let mut db = AnnotationDb::new();
        db.add_entry(AnnotationEntry {
            name: "my_init".to_string(),
            flirt_pattern_index: Some(0),
            fuzzy_hash: FuzzyHash::compute(func_bytes_a),
            annotations: vec![
                Annotation::FunctionName("my_init".to_string()),
                Annotation::Parameters(vec![
                    ("argc".to_string(), Some("int".to_string())),
                    ("argv".to_string(), Some("char**".to_string())),
                ]),
                Annotation::ReturnType("int".to_string()),
                Annotation::Comment("Application initialisation entry".to_string()),
            ],
        });
        db.add_entry(AnnotationEntry {
            name: "dispatch_loop".to_string(),
            flirt_pattern_index: Some(1),
            fuzzy_hash: FuzzyHash::compute(func_bytes_b),
            annotations: vec![
                Annotation::FunctionName("dispatch_loop".to_string()),
                Annotation::ReturnType("void".to_string()),
                Annotation::StructDef {
                    name: "Handler".to_string(),
                    fields: vec![
                        ("fn_ptr".to_string(), "void (*)(void)".to_string()),
                        ("next".to_string(), "struct Handler*".to_string()),
                    ],
                },
            ],
        });
        db
    }

    #[test]
    fn fuzzy_hash_identical_bytes() {
        let data = vec![0x55u8; 128];
        let h1 = FuzzyHash::compute(&data);
        let h2 = FuzzyHash::compute(&data);
        assert_eq!(h1.similarity(&h2), 1.0);
    }

    #[test]
    fn fuzzy_hash_completely_different() {
        let a = vec![0xAAu8; 128];
        let b = vec![0x55u8; 128];
        let ha = FuzzyHash::compute(&a);
        let hb = FuzzyHash::compute(&b);
        let sim = ha.similarity(&hb);
        assert!(sim < 0.3, "expected low similarity, got {sim}");
    }

    #[test]
    fn fuzzy_hash_similar_functions() {
        // Two functions that differ only in a few bytes.
        let mut a = vec![0x55, 0x48, 0x89, 0xe5, 0x48, 0x83, 0xec, 0x20];
        a.extend_from_slice(&[0x89, 0x7d, 0xec, 0x48, 0x89, 0x75, 0xe0, 0x31]);
        a.extend_from_slice(&[0xc0, 0xc9, 0xc3, 0x90, 0x90, 0x90, 0x90, 0x90]);

        let mut b = a.clone();
        // Modify a couple bytes (simulating minor code change).
        b[10] = 0xed;
        b[14] = 0xd0;

        let ha = FuzzyHash::compute(&a);
        let hb = FuzzyHash::compute(&b);
        let sim = ha.similarity(&hb);
        assert!(
            sim > 0.5,
            "similar functions should have similarity > 0.5, got {sim}"
        );
    }

    #[test]
    fn fuzzy_hash_empty() {
        let h = FuzzyHash::compute(&[]);
        assert!(h.block_hashes.is_empty());
        // Two empty hashes should be perfectly similar.
        assert_eq!(h.similarity(&FuzzyHash::compute(&[])), 1.0);
    }

    #[test]
    fn exact_flirt_match_highest_confidence() {
        let flirt_db = make_flirt_db();
        let annotation_db = make_annotation_db();

        let func_bytes = &[
            0x55, 0x48, 0x89, 0xe5, 0x48, 0x83, 0xec, 0x20, 0x89, 0x7d, 0xec, 0x48, 0x89, 0x75,
            0xe0, 0x31, 0xc0, 0xc9, 0xc3, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90,
            0x90, 0x90, 0x90, 0x90,
        ];

        let results = lookup_annotations(func_bytes, &flirt_db, &annotation_db, 0.5);
        assert!(!results.is_empty());
        let top = &results[0];
        assert_eq!(top.function_name, "my_init");
        assert_eq!(top.confidence, 1.0);
        assert_eq!(top.source, AnnotationSource::FlirtExact);
        assert!(top.annotations.len() >= 3);
    }

    #[test]
    fn fuzzy_fallback_when_no_flirt() {
        let flirt_db = FlirtDb::new(); // empty — no FLIRT patterns
        let annotation_db = make_annotation_db();

        // Use the exact same bytes as annotation entry 0 to get a perfect fuzzy match.
        let func_bytes = &[
            0x55, 0x48, 0x89, 0xe5, 0x48, 0x83, 0xec, 0x20, 0x89, 0x7d, 0xec, 0x48, 0x89, 0x75,
            0xe0, 0x31, 0xc0, 0xc9, 0xc3, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90,
            0x90, 0x90, 0x90, 0x90,
        ];

        let results = lookup_annotations(func_bytes, &flirt_db, &annotation_db, 0.5);
        assert!(!results.is_empty());
        let top = &results[0];
        assert_eq!(top.function_name, "my_init");
        assert_eq!(top.source, AnnotationSource::FuzzyHash);
        assert!(top.confidence >= 0.9);
    }

    #[test]
    fn partial_flirt_match_reported() {
        // Create a FLIRT pattern with a CRC that won't match, so only partial match fires.
        let flirt_db = FlirtDb {
            patterns: vec![FlirtPattern {
                bytes: vec![0x55, 0x48],
                mask: vec![0xFF, 0xFF],
                name: "prologue_with_crc".to_string(),
                length: 0,
                crc16: 0xDEAD, // deliberate mismatch
                crc_offset: 2,
                crc_length: 4,
                exact_length: 0,
                prologue_len: 0,
            }],
        };
        let annotation_db = AnnotationDb::new();

        // Bytes that match leading pattern but fail CRC.
        let func_bytes = &[0x55, 0x48, 0x89, 0xe5, 0x00, 0x00, 0x00, 0x00];
        let results = lookup_annotations(func_bytes, &flirt_db, &annotation_db, 0.0);

        // The exact FLIRT won't fire (CRC fails), but partial should.
        let partial = results
            .iter()
            .find(|r| r.source == AnnotationSource::FlirtPartial);
        assert!(partial.is_some(), "expected partial FLIRT match");
        assert_eq!(partial.unwrap().function_name, "prologue_with_crc");
        assert_eq!(partial.unwrap().confidence, 0.5);
    }

    #[test]
    fn results_sorted_by_confidence() {
        let flirt_db = make_flirt_db();
        let annotation_db = make_annotation_db();

        let func_bytes = &[
            0x55, 0x48, 0x89, 0xe5, 0x48, 0x83, 0xec, 0x20, 0x89, 0x7d, 0xec, 0x48, 0x89, 0x75,
            0xe0, 0x31, 0xc0, 0xc9, 0xc3, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90,
            0x90, 0x90, 0x90, 0x90,
        ];

        let results = lookup_annotations(func_bytes, &flirt_db, &annotation_db, 0.0);
        for window in results.windows(2) {
            assert!(
                window[0].confidence >= window[1].confidence,
                "results not sorted: {} < {}",
                window[0].confidence,
                window[1].confidence
            );
        }
    }

    #[test]
    fn annotation_types_complete() {
        let flirt_db = make_flirt_db();
        let annotation_db = make_annotation_db();

        // Match dispatch_loop
        let func_bytes = &[
            0xF3, 0x0F, 0x1E, 0xFA, 0x55, 0x48, 0x89, 0xe5, 0x48, 0x8b, 0x07, 0x48, 0x85, 0xc0,
            0x74, 0x05, 0xff, 0xd0, 0xeb, 0xf5, 0x5d, 0xc3, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90,
            0x90, 0x90, 0x90, 0x90,
        ];
        let results = lookup_annotations(func_bytes, &flirt_db, &annotation_db, 0.5);
        let top = &results[0];
        assert_eq!(top.function_name, "dispatch_loop");

        // Verify we have function_name, return type, and struct def annotations.
        let has_name = top
            .annotations
            .iter()
            .any(|a| matches!(a, Annotation::FunctionName(_)));
        let has_ret = top
            .annotations
            .iter()
            .any(|a| matches!(a, Annotation::ReturnType(_)));
        let has_struct = top
            .annotations
            .iter()
            .any(|a| matches!(a, Annotation::StructDef { .. }));
        assert!(has_name, "missing FunctionName annotation");
        assert!(has_ret, "missing ReturnType annotation");
        assert!(has_struct, "missing StructDef annotation");
    }

    #[test]
    fn below_threshold_excluded() {
        let flirt_db = FlirtDb::new();
        let annotation_db = make_annotation_db();

        // Totally unrelated bytes.
        let func_bytes = &[0xCC; 32];
        let results = lookup_annotations(func_bytes, &flirt_db, &annotation_db, 0.9);
        // With a 0.9 threshold and unrelated bytes, nothing should match.
        assert!(
            results.is_empty(),
            "expected no matches above 0.9 threshold, got {}",
            results.len()
        );
    }
}
