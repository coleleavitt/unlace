//! FLIRT signature + fuzzy-hash annotation lookup (t436).
//!
//! Combines FLIRT pattern matching with fuzzy hashing (ssdeep-style) to
//! look up function annotations. Functions that don't exactly match a FLIRT
//! signature can still be identified via fuzzy-hash similarity.

/// A fuzzy hash of a function's byte content (simplified ssdeep-style).
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct FuzzyHash {
    /// Block size used for hashing.
    pub block_size: u32,
    /// Base64-like hash of the first block sequence.
    pub hash1: String,
    /// Base64-like hash at double block size.
    pub hash2: String,
}

/// Compute a simplified fuzzy hash of function bytes.
pub fn compute_fuzzy_hash(bytes: &[u8]) -> FuzzyHash {
    if bytes.is_empty() {
        return FuzzyHash { block_size: 3, hash1: String::new(), hash2: String::new() };
    }
    // Simplified rolling-hash approach
    let block_size = select_block_size(bytes.len());
    let hash1 = rolling_hash(bytes, block_size as usize);
    let hash2 = rolling_hash(bytes, (block_size * 2) as usize);
    FuzzyHash { block_size, hash1, hash2 }
}

/// Compare two fuzzy hashes, returning a similarity score 0..100.
pub fn fuzzy_compare(a: &FuzzyHash, b: &FuzzyHash) -> u8 {
    if a.block_size != b.block_size && a.block_size != b.block_size * 2 && b.block_size != a.block_size * 2 {
        return 0;
    }
    // Compare at matching block sizes
    let (sa, sb) = if a.block_size == b.block_size {
        (&a.hash1, &b.hash1)
    } else if a.block_size == b.block_size * 2 {
        (&a.hash2, &b.hash1)
    } else {
        (&a.hash1, &b.hash2)
    };
    string_similarity(sa, sb)
}

/// Annotation lookup result combining FLIRT and fuzzy matching.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct AnnotationLookup {
    pub function_name: String,
    /// Match source: "flirt" for exact FLIRT match, "fuzzy" for fuzzy-hash match.
    pub match_source: String,
    /// Confidence 0..100.
    pub confidence: u8,
}

/// Attempt annotation lookup: first try exact FLIRT, then fall back to fuzzy.
pub fn lookup_annotation(
    flirt_match: Option<(&str, u8)>,
    fuzzy_hash: &FuzzyHash,
    known_hashes: &[(FuzzyHash, String)],
    min_fuzzy_confidence: u8,
) -> Option<AnnotationLookup> {
    // Prefer exact FLIRT match
    if let Some((name, confidence)) = flirt_match {
        return Some(AnnotationLookup {
            function_name: name.to_string(),
            match_source: "flirt".to_string(),
            confidence,
        });
    }
    // Fall back to fuzzy hash
    let mut best: Option<(u8, &str)> = None;
    for (known, name) in known_hashes {
        let score = fuzzy_compare(fuzzy_hash, known);
        if score >= min_fuzzy_confidence {
            if best.map_or(true, |(s, _)| score > s) {
                best = Some((score, name.as_str()));
            }
        }
    }
    best.map(|(score, name)| AnnotationLookup {
        function_name: name.to_string(),
        match_source: "fuzzy".to_string(),
        confidence: score,
    })
}

fn select_block_size(len: usize) -> u32 {
    let mut bs = 3u32;
    while (bs * 64) as usize <= len { bs *= 2; }
    bs
}

fn rolling_hash(data: &[u8], block_size: usize) -> String {
    let mut result = Vec::new();
    let mut accum: u32 = 0;
    for (i, &b) in data.iter().enumerate() {
        accum = accum.wrapping_add(b as u32);
        if (i + 1) % block_size == 0 || i == data.len() - 1 {
            result.push(BASE64_CHARS[(accum % 64) as usize]);
            accum = 0;
        }
    }
    result.into_iter().collect()
}

fn string_similarity(a: &str, b: &str) -> u8 {
    if a.is_empty() && b.is_empty() { return 100; }
    if a.is_empty() || b.is_empty() { return 0; }
    let a_bytes: Vec<u8> = a.bytes().collect();
    let b_bytes: Vec<u8> = b.bytes().collect();
    let lcs = lcs_len(&a_bytes, &b_bytes);
    let max_len = a_bytes.len().max(b_bytes.len());
    ((lcs * 100) / max_len) as u8
}

fn lcs_len(a: &[u8], b: &[u8]) -> usize {
    let n = b.len();
    let mut prev = vec![0usize; n + 1];
    let mut curr = vec![0usize; n + 1];
    for i in 0..a.len() {
        for j in 0..n {
            curr[j + 1] = if a[i] == b[j] { prev[j] + 1 } else { prev[j + 1].max(curr[j]) };
        }
        std::mem::swap(&mut prev, &mut curr);
        curr.iter_mut().for_each(|x| *x = 0);
    }
    *prev.iter().max().unwrap_or(&0)
}

const BASE64_CHARS: &[char] = &[
    'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P',
    'Q','R','S','T','U','V','W','X','Y','Z','a','b','c','d','e','f',
    'g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v',
    'w','x','y','z','0','1','2','3','4','5','6','7','8','9','+','/',
];

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn identical_bytes_high_similarity() {
        let data = b"push rbp; mov rbp, rsp; sub rsp, 0x20; xor eax, eax";
        let h1 = compute_fuzzy_hash(data);
        let h2 = compute_fuzzy_hash(data);
        assert_eq!(fuzzy_compare(&h1, &h2), 100);
    }

    #[test]
    fn different_bytes_low_similarity() {
        let h1 = compute_fuzzy_hash(b"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa");
        let h2 = compute_fuzzy_hash(b"zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz");
        assert!(fuzzy_compare(&h1, &h2) < 50);
    }

    #[test]
    fn flirt_preferred_over_fuzzy() {
        let fh = compute_fuzzy_hash(b"test");
        let known = vec![(fh.clone(), "fuzzy_match".into())];
        let result = lookup_annotation(Some(("flirt_match", 95)), &fh, &known, 50);
        assert_eq!(result.unwrap().match_source, "flirt");
    }

    #[test]
    fn fuzzy_fallback() {
        let fh = compute_fuzzy_hash(b"test data here for hashing purposes yay");
        let known = vec![(fh.clone(), "known_func".into())];
        let result = lookup_annotation(None, &fh, &known, 50);
        assert_eq!(result.unwrap().function_name, "known_func");
    }

    #[test]
    fn below_threshold_no_match() {
        let h1 = compute_fuzzy_hash(b"aaaaaaaaaaaaaaaa");
        let h2 = compute_fuzzy_hash(b"zzzzzzzzzzzzzzzz");
        let known = vec![(h2, "other".into())];
        assert!(lookup_annotation(None, &h1, &known, 90).is_none());
    }
}
