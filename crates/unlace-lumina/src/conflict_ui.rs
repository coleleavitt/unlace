//! Annotation conflict resolution UI protocol (t449).
//!
//! When multiple users propose divergent annotations for the same entity,
//! this module surfaces the conflict and provides resolution strategies.

use serde::{Deserialize, Serialize};

/// A conflict between two or more annotation values.
#[derive(Debug, Clone, PartialEq, Eq, Serialize, Deserialize)]
pub struct AnnotationConflict {
    /// Address of the conflicting entity.
    pub addr: u64,
    /// The different proposed values, with their authors and timestamps.
    pub proposals: Vec<Proposal>,
    /// Current resolution status.
    pub status: ConflictStatus,
}

/// A single proposed value in a conflict.
#[derive(Debug, Clone, PartialEq, Eq, Serialize, Deserialize)]
pub struct Proposal {
    pub author: String,
    pub value: String,
    pub timestamp: u64,
    pub votes: i32,
}

/// Resolution status of a conflict.
#[derive(Debug, Clone, Copy, PartialEq, Eq, Serialize, Deserialize)]
pub enum ConflictStatus {
    /// Conflict is unresolved; awaiting user action.
    Pending,
    /// A specific proposal was accepted.
    Resolved { winner_index: usize },
    /// Conflict was dismissed (all proposals dropped).
    Dismissed,
}

/// Resolution strategy.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum ResolutionStrategy {
    /// Accept the proposal with the most votes.
    MajorityVote,
    /// Accept the most recent proposal.
    MostRecent,
    /// Accept the first (oldest) proposal.
    FirstWins,
    /// Manual selection by an admin.
    Manual(usize),
}

/// Resolve a conflict using the given strategy.
pub fn resolve_conflict(conflict: &mut AnnotationConflict, strategy: ResolutionStrategy) -> Option<&Proposal> {
    if conflict.proposals.is_empty() { return None; }

    let winner_index = match strategy {
        ResolutionStrategy::MajorityVote => {
            conflict.proposals.iter().enumerate()
                .max_by_key(|(_, p)| p.votes)
                .map(|(i, _)| i)?
        }
        ResolutionStrategy::MostRecent => {
            conflict.proposals.iter().enumerate()
                .max_by_key(|(_, p)| p.timestamp)
                .map(|(i, _)| i)?
        }
        ResolutionStrategy::FirstWins => 0,
        ResolutionStrategy::Manual(idx) => {
            if idx >= conflict.proposals.len() { return None; }
            idx
        }
    };

    conflict.status = ConflictStatus::Resolved { winner_index };
    Some(&conflict.proposals[winner_index])
}

/// Detect conflicts in a set of proposals for the same address.
pub fn detect_conflicts(proposals: &[(u64, String, String, u64)]) -> Vec<AnnotationConflict> {
    let mut by_addr: std::collections::BTreeMap<u64, Vec<Proposal>> = std::collections::BTreeMap::new();
    for (addr, author, value, ts) in proposals {
        by_addr.entry(*addr).or_default().push(Proposal {
            author: author.clone(), value: value.clone(), timestamp: *ts, votes: 0,
        });
    }

    by_addr.into_iter()
        .filter(|(_, props)| props.len() > 1)
        .map(|(addr, proposals)| AnnotationConflict { addr, proposals, status: ConflictStatus::Pending })
        .collect()
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn detect_conflict() {
        let proposals = vec![
            (0x1000, "alice".into(), "main".into(), 100),
            (0x1000, "bob".into(), "entry".into(), 101),
            (0x2000, "alice".into(), "helper".into(), 102),
        ];
        let conflicts = detect_conflicts(&proposals);
        assert_eq!(conflicts.len(), 1);
        assert_eq!(conflicts[0].addr, 0x1000);
        assert_eq!(conflicts[0].proposals.len(), 2);
    }

    #[test]
    fn resolve_majority_vote() {
        let mut conflict = AnnotationConflict {
            addr: 0x1000,
            proposals: vec![
                Proposal { author: "a".into(), value: "foo".into(), timestamp: 1, votes: 5 },
                Proposal { author: "b".into(), value: "bar".into(), timestamp: 2, votes: 3 },
            ],
            status: ConflictStatus::Pending,
        };
        let winner = resolve_conflict(&mut conflict, ResolutionStrategy::MajorityVote).unwrap();
        assert_eq!(winner.value, "foo");
        assert!(matches!(conflict.status, ConflictStatus::Resolved { winner_index: 0 }));
    }

    #[test]
    fn resolve_most_recent() {
        let mut conflict = AnnotationConflict {
            addr: 0x1000,
            proposals: vec![
                Proposal { author: "a".into(), value: "old".into(), timestamp: 1, votes: 0 },
                Proposal { author: "b".into(), value: "new".into(), timestamp: 99, votes: 0 },
            ],
            status: ConflictStatus::Pending,
        };
        let winner = resolve_conflict(&mut conflict, ResolutionStrategy::MostRecent).unwrap();
        assert_eq!(winner.value, "new");
    }

    #[test]
    fn no_conflict_single_proposal() {
        let proposals = vec![(0x1000, "alice".into(), "main".into(), 100)];
        assert!(detect_conflicts(&proposals).is_empty());
    }
}
