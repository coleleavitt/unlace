//! t426 — BSim-style function similarity database.
//!
//! In-memory store mapping function names to fixed-width feature vectors
//! (produced by the t371 fingerprinting pass; here we operate on the raw
//! `[u32; 80]` representation so this module stays self-contained until
//! that pass lands). Queries return the top-k most similar entries ranked
//! by cosine similarity over the feature vectors treated as ℝ⁸⁰.
//!
//! The intended workflow mirrors Ghidra's BSim:
//!   1. Run t371 over each function in a corpus, obtaining a feature vector.
//!   2. Call [`BSimDb::insert`] with the function's symbol name + vector.
//!   3. To identify an unknown function, compute its feature vector and call
//!      [`BSimDb::query`] — the highest-scoring entries are likely matches.
//!
//! Cosine similarity is in `[-1.0, 1.0]`; for the non-negative integer
//! features produced by t371 the practical range is `[0.0, 1.0]`. The zero
//! vector is handled by returning a score of `0.0` (avoids NaN from a
//! degenerate norm).

/// Length of a t371 fingerprint feature vector.
pub const FEATURE_VEC_LEN: usize = 80;

/// A function-similarity database keyed by feature vector.
///
/// Entries are stored in insertion order; [`query`](Self::query) performs a
/// linear scan and ranks by cosine similarity. This is intentionally simple —
/// for large corpora the storage layer is expected to be swapped out for an
/// LSH / ANN index, but the cosine-ranked semantics remain the contract.
#[derive(Debug, Default, Clone)]
pub struct BSimDb {
    /// (function name, feature vector) pairs in insertion order.
    pub entries: Vec<(String, [u32; FEATURE_VEC_LEN])>,
}

impl BSimDb {
    /// Create an empty database.
    pub fn new() -> Self {
        Self { entries: Vec::new() }
    }

    /// Number of stored entries.
    pub fn len(&self) -> usize {
        self.entries.len()
    }

    /// Whether the database has any entries.
    pub fn is_empty(&self) -> bool {
        self.entries.is_empty()
    }

    /// Insert a (name, feature_vec) pair. Duplicate names are *not* deduplicated:
    /// the same symbol may legitimately appear with different feature vectors
    /// (e.g. multiple build variants of the same function).
    pub fn insert(&mut self, name: &str, vec: [u32; FEATURE_VEC_LEN]) {
        self.entries.push((name.to_string(), vec));
    }

    /// Return the `top_k` entries most similar to `vec` under cosine similarity,
    /// sorted in descending order by score. Ties are broken by insertion order
    /// (stable sort), which makes results deterministic across runs.
    ///
    /// If the database has fewer than `top_k` entries, all entries are returned.
    /// If `top_k == 0` the result is empty.
    pub fn query(&self, vec: [u32; FEATURE_VEC_LEN], top_k: usize) -> Vec<(String, f32)> {
        if top_k == 0 || self.entries.is_empty() {
            return Vec::new();
        }

        let mut scored: Vec<(String, f32)> = self
            .entries
            .iter()
            .map(|(name, entry)| (name.clone(), cosine_similarity(&vec, entry)))
            .collect();

        // Sort descending by score; stable so equal scores keep insertion order.
        scored.sort_by(|a, b| {
            b.1.partial_cmp(&a.1).unwrap_or(std::cmp::Ordering::Equal)
        });
        scored.truncate(top_k);
        scored
    }
}

/// Cosine similarity over two `[u32; 80]` feature vectors, evaluated in `f64`
/// to avoid overflow in the dot product (worst case `80 * u32::MAX^2` exceeds
/// `f32` precision) and truncated to `f32` on return.
///
/// Returns `0.0` if either vector has zero norm — this is the natural
/// "no information" answer and avoids producing NaN.
fn cosine_similarity(a: &[u32; FEATURE_VEC_LEN], b: &[u32; FEATURE_VEC_LEN]) -> f32 {
    let mut dot: f64 = 0.0;
    let mut na: f64 = 0.0;
    let mut nb: f64 = 0.0;
    for i in 0..FEATURE_VEC_LEN {
        let ai = a[i] as f64;
        let bi = b[i] as f64;
        dot += ai * bi;
        na += ai * ai;
        nb += bi * bi;
    }
    if na == 0.0 || nb == 0.0 {
        return 0.0;
    }
    (dot / (na.sqrt() * nb.sqrt())) as f32
}

#[cfg(test)]
mod tests {
    use super::*;

    /// A deterministic, easily-reasoned-about feature vector: index `i` carries
    /// value `seed.wrapping_add(i as u32)`. Different seeds produce vectors
    /// that are highly correlated (offsets don't change direction much),
    /// which is realistic for fingerprint-style features.
    fn seeded_vec(seed: u32) -> [u32; FEATURE_VEC_LEN] {
        let mut v = [0u32; FEATURE_VEC_LEN];
        for (i, slot) in v.iter_mut().enumerate() {
            *slot = seed.wrapping_add(i as u32);
        }
        v
    }

    #[test]
    fn empty_db_returns_empty() {
        let db = BSimDb::new();
        let q = seeded_vec(7);
        assert!(db.query(q, 5).is_empty(), "empty DB must return no results");
        assert!(db.is_empty());
        assert_eq!(db.len(), 0);
    }

    #[test]
    fn near_clone_of_stored_returns_it() {
        let mut db = BSimDb::new();
        let target = seeded_vec(100);
        db.insert("memcpy", target);
        db.insert("strlen", seeded_vec(50_000));
        db.insert("printf", [0u32; FEATURE_VEC_LEN]); // zero — must score 0
        db.insert("malloc", seeded_vec(1_000_000));

        // Near-clone: perturb a single bucket by +1.
        let mut near = target;
        near[3] = near[3].wrapping_add(1);

        let results = db.query(near, 3);
        assert_eq!(results.len(), 3);
        assert_eq!(
            results[0].0, "memcpy",
            "near-clone must rank the original function first; got {:?}",
            results
        );
        // The score should be extremely close to 1.0.
        assert!(
            results[0].1 > 0.999,
            "near-clone cosine should be ~1.0, got {}",
            results[0].1
        );
    }

    #[test]
    fn orthogonal_vector_returns_low_score() {
        let mut db = BSimDb::new();

        // a: weight in the first half only.
        let mut a = [0u32; FEATURE_VEC_LEN];
        for slot in a.iter_mut().take(FEATURE_VEC_LEN / 2) {
            *slot = 10;
        }
        // b: weight in the second half only — dot product with `a` is exactly 0.
        let mut b = [0u32; FEATURE_VEC_LEN];
        for slot in b.iter_mut().skip(FEATURE_VEC_LEN / 2) {
            *slot = 10;
        }

        db.insert("first_half", a);
        let results = db.query(b, 1);
        assert_eq!(results.len(), 1);
        assert!(
            results[0].1.abs() < 1e-6,
            "orthogonal vectors must score ~0.0, got {}",
            results[0].1
        );
    }

    #[test]
    fn ranking_is_stable() {
        // Construct entries with deliberately tied cosine scores by reusing
        // the same vector under multiple names — stable sort must preserve
        // insertion order across queries.
        let mut db = BSimDb::new();
        let shared = seeded_vec(42);
        db.insert("alpha", shared);
        db.insert("bravo", shared);
        db.insert("charlie", shared);
        // A different, less-similar entry to verify it sinks to the bottom.
        let mut different = [0u32; FEATURE_VEC_LEN];
        different[0] = 1;
        db.insert("delta", different);

        let q = shared;

        let run1 = db.query(q, 4);
        let run2 = db.query(q, 4);
        assert_eq!(run1, run2, "repeated queries must be deterministic");

        // Tied entries must come out in insertion order: alpha, bravo, charlie.
        let names: Vec<&str> = run1.iter().map(|(n, _)| n.as_str()).collect();
        assert_eq!(
            &names[..3],
            &["alpha", "bravo", "charlie"],
            "tied scores must preserve insertion order; got {:?}",
            names
        );
        assert_eq!(names[3], "delta", "less-similar entry must rank last");

        // And the tied scores must actually be equal (sanity-check the premise).
        assert_eq!(run1[0].1, run1[1].1);
        assert_eq!(run1[1].1, run1[2].1);
        assert!(run1[3].1 < run1[2].1);
    }
}
