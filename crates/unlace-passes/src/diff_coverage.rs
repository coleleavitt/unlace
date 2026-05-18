//! Differential coverage analysis (t428).
//!
//! Compares coverage data from two binaries (or two versions of the same
//! binary) run against the same input corpus. Highlights branches that
//! are covered in one version but not the other.

/// Coverage data for a single binary version.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct BinaryCoverage {
    pub label: String,
    /// Sorted list of covered basic-block addresses.
    pub covered_bbs: Vec<u64>,
}

/// Result of differential coverage comparison.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct DiffCoverageResult {
    /// BBs covered in A but not B.
    pub only_a: Vec<u64>,
    /// BBs covered in B but not A.
    pub only_b: Vec<u64>,
    /// BBs covered in both.
    pub common: Vec<u64>,
}

/// Compare coverage between two binary versions.
pub fn diff_coverage(a: &BinaryCoverage, b: &BinaryCoverage) -> DiffCoverageResult {
    let set_a: std::collections::BTreeSet<u64> = a.covered_bbs.iter().copied().collect();
    let set_b: std::collections::BTreeSet<u64> = b.covered_bbs.iter().copied().collect();

    let only_a: Vec<u64> = set_a.difference(&set_b).copied().collect();
    let only_b: Vec<u64> = set_b.difference(&set_a).copied().collect();
    let common: Vec<u64> = set_a.intersection(&set_b).copied().collect();

    DiffCoverageResult {
        only_a,
        only_b,
        common,
    }
}

/// Compute a summary metric: how many new paths does version B explore
/// that version A did not?
pub fn new_coverage_count(result: &DiffCoverageResult) -> usize {
    result.only_b.len()
}

/// Compute coverage regression: paths A covered but B lost.
pub fn regression_count(result: &DiffCoverageResult) -> usize {
    result.only_a.len()
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn identical_coverage() {
        let a = BinaryCoverage {
            label: "v1".into(),
            covered_bbs: vec![1, 2, 3],
        };
        let b = BinaryCoverage {
            label: "v2".into(),
            covered_bbs: vec![1, 2, 3],
        };
        let r = diff_coverage(&a, &b);
        assert!(r.only_a.is_empty());
        assert!(r.only_b.is_empty());
        assert_eq!(r.common, vec![1, 2, 3]);
    }

    #[test]
    fn new_paths_detected() {
        let a = BinaryCoverage {
            label: "v1".into(),
            covered_bbs: vec![1, 2],
        };
        let b = BinaryCoverage {
            label: "v2".into(),
            covered_bbs: vec![1, 2, 3, 4],
        };
        let r = diff_coverage(&a, &b);
        assert_eq!(r.only_b, vec![3, 4]);
        assert_eq!(new_coverage_count(&r), 2);
    }

    #[test]
    fn regression_detected() {
        let a = BinaryCoverage {
            label: "v1".into(),
            covered_bbs: vec![1, 2, 3],
        };
        let b = BinaryCoverage {
            label: "v2".into(),
            covered_bbs: vec![2, 3],
        };
        let r = diff_coverage(&a, &b);
        assert_eq!(r.only_a, vec![1]);
        assert_eq!(regression_count(&r), 1);
    }

    #[test]
    fn disjoint_coverage() {
        let a = BinaryCoverage {
            label: "v1".into(),
            covered_bbs: vec![1, 2],
        };
        let b = BinaryCoverage {
            label: "v2".into(),
            covered_bbs: vec![3, 4],
        };
        let r = diff_coverage(&a, &b);
        assert_eq!(r.only_a, vec![1, 2]);
        assert_eq!(r.only_b, vec![3, 4]);
        assert!(r.common.is_empty());
    }
}
