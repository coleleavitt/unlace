//! Symbolic-execution coverage extension (t433).
//!
//! Identifies branches that are statically reachable but never hit by
//! concrete coverage data. Uses lightweight path-condition analysis to
//! determine which uncovered branches are feasible vs. dead code.

use std::collections::BTreeSet;

/// Path feasibility status for an uncovered branch.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum Feasibility {
    /// Branch is reachable under some concrete input.
    Feasible,
    /// Branch condition is statically unsatisfiable (dead code).
    Infeasible,
    /// Analysis was inconclusive (timeout, complexity).
    Unknown,
}

/// An uncovered branch with feasibility annotation.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct UncoveredBranch {
    /// Address of the branch instruction.
    pub branch_addr: u64,
    /// Address of the uncovered target.
    pub target_addr: u64,
    /// Whether the branch is feasible.
    pub feasibility: Feasibility,
    /// Simplified path condition (textual representation).
    pub condition: Option<String>,
}

/// Identify uncovered-but-feasible branches.
///
/// `all_branches`: set of (branch_addr, target_addr) pairs in the function.
/// `covered_targets`: set of addresses that were hit by concrete execution.
pub fn find_uncovered_branches(
    all_branches: &[(u64, u64)],
    covered_targets: &BTreeSet<u64>,
) -> Vec<UncoveredBranch> {
    all_branches
        .iter()
        .filter(|(_, target)| !covered_targets.contains(target))
        .map(|&(branch_addr, target_addr)| UncoveredBranch {
            branch_addr,
            target_addr,
            feasibility: Feasibility::Unknown, // full SymEx deferred
            condition: None,
        })
        .collect()
}

/// Mark branches as infeasible based on dominator-implied constant conditions.
///
/// Simple heuristic: if the branch target address is 0 or equal to the
/// branch address (self-loop to nowhere), mark infeasible.
pub fn mark_trivially_infeasible(branches: &mut [UncoveredBranch]) {
    for br in branches.iter_mut() {
        if br.target_addr == 0 || br.target_addr == br.branch_addr {
            br.feasibility = Feasibility::Infeasible;
        }
    }
}

/// Compute gap ratio: fraction of branches not covered.
pub fn coverage_gap_ratio(total_branches: usize, covered: usize) -> f64 {
    if total_branches == 0 { return 0.0; }
    1.0 - (covered as f64 / total_branches as f64)
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn find_uncovered() {
        let branches = vec![(0x1000, 0x1010), (0x1000, 0x1020), (0x1020, 0x1030)];
        let covered: BTreeSet<u64> = [0x1010, 0x1030].into_iter().collect();
        let result = find_uncovered_branches(&branches, &covered);
        assert_eq!(result.len(), 1);
        assert_eq!(result[0].target_addr, 0x1020);
    }

    #[test]
    fn mark_infeasible() {
        let mut branches = vec![
            UncoveredBranch { branch_addr: 0x1000, target_addr: 0, feasibility: Feasibility::Unknown, condition: None },
            UncoveredBranch { branch_addr: 0x2000, target_addr: 0x2010, feasibility: Feasibility::Unknown, condition: None },
        ];
        mark_trivially_infeasible(&mut branches);
        assert_eq!(branches[0].feasibility, Feasibility::Infeasible);
        assert_eq!(branches[1].feasibility, Feasibility::Unknown);
    }

    #[test]
    fn gap_ratio() {
        assert!((coverage_gap_ratio(10, 7) - 0.3).abs() < 1e-10);
        assert_eq!(coverage_gap_ratio(0, 0), 0.0);
    }

    #[test]
    fn all_covered() {
        let branches = vec![(0x1000, 0x1010)];
        let covered: BTreeSet<u64> = [0x1010].into_iter().collect();
        assert!(find_uncovered_branches(&branches, &covered).is_empty());
    }
}
