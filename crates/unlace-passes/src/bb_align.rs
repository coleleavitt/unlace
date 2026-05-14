//! Basic-block-level alignment within matched functions (t427).
//!
//! Given two versions of the same function (pre-patch / post-patch),
//! align their basic blocks using opcode-skeleton similarity scoring.
//! This enables fine-grained patch-diff visualization.

/// A simplified basic block representation for alignment purposes.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct AlignBlock {
    pub id: u32,
    /// Opcode skeleton: sequence of opcode discriminants (arch-independent).
    pub opcodes: Vec<u16>,
    /// Number of instructions.
    pub insn_count: usize,
}

/// A pairing between blocks in the old and new function versions.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct BlockAlignment {
    /// (old_block_id, new_block_id, similarity 0..100)
    pub pairs: Vec<(u32, u32, u8)>,
    /// Block IDs only in the old version (deleted).
    pub old_only: Vec<u32>,
    /// Block IDs only in the new version (inserted).
    pub new_only: Vec<u32>,
}

/// Compute similarity between two opcode sequences (0..100).
pub fn block_similarity(a: &[u16], b: &[u16]) -> u8 {
    if a.is_empty() && b.is_empty() { return 100; }
    if a.is_empty() || b.is_empty() { return 0; }

    let lcs_len = lcs_length(a, b);
    let max_len = a.len().max(b.len());
    ((lcs_len * 100) / max_len) as u8
}

/// Align basic blocks between two function versions using greedy best-match.
pub fn align_blocks(old: &[AlignBlock], new: &[AlignBlock]) -> BlockAlignment {
    let mut pairs = Vec::new();
    let mut used_new: Vec<bool> = vec![false; new.len()];
    let mut matched_old: Vec<bool> = vec![false; old.len()];

    // Greedy: for each old block, find best unmatched new block
    for (oi, ob) in old.iter().enumerate() {
        let mut best_score = 0u8;
        let mut best_ni = None;
        for (ni, nb) in new.iter().enumerate() {
            if used_new[ni] { continue; }
            let score = block_similarity(&ob.opcodes, &nb.opcodes);
            if score > best_score {
                best_score = score;
                best_ni = Some(ni);
            }
        }
        if let Some(ni) = best_ni {
            if best_score >= 30 { // threshold
                pairs.push((ob.id, new[ni].id, best_score));
                used_new[ni] = true;
                matched_old[oi] = true;
            }
        }
    }

    let old_only: Vec<u32> = old.iter().enumerate()
        .filter(|(i, _)| !matched_old[*i]).map(|(_, b)| b.id).collect();
    let new_only: Vec<u32> = new.iter().enumerate()
        .filter(|(i, _)| !used_new[*i]).map(|(_, b)| b.id).collect();

    BlockAlignment { pairs, old_only, new_only }
}

fn lcs_length(a: &[u16], b: &[u16]) -> usize {
    let m = a.len();
    let n = b.len();
    let mut prev = vec![0usize; n + 1];
    let mut curr = vec![0usize; n + 1];
    for i in 1..=m {
        for j in 1..=n {
            curr[j] = if a[i-1] == b[j-1] { prev[j-1] + 1 } else { prev[j].max(curr[j-1]) };
        }
        std::mem::swap(&mut prev, &mut curr);
        curr.iter_mut().for_each(|x| *x = 0);
    }
    *prev.iter().max().unwrap_or(&0)
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn identical_blocks_score_100() {
        assert_eq!(block_similarity(&[1, 2, 3], &[1, 2, 3]), 100);
    }

    #[test]
    fn completely_different_blocks() {
        assert_eq!(block_similarity(&[1, 2, 3], &[4, 5, 6]), 0);
    }

    #[test]
    fn partial_match() {
        let score = block_similarity(&[1, 2, 3, 4], &[1, 2, 5, 4]);
        assert!(score >= 50 && score <= 80);
    }

    #[test]
    fn align_identical_functions() {
        let blocks = vec![
            AlignBlock { id: 0, opcodes: vec![1, 2, 3], insn_count: 3 },
            AlignBlock { id: 1, opcodes: vec![4, 5], insn_count: 2 },
        ];
        let result = align_blocks(&blocks, &blocks);
        assert_eq!(result.pairs.len(), 2);
        assert!(result.old_only.is_empty());
        assert!(result.new_only.is_empty());
    }

    #[test]
    fn detect_inserted_block() {
        let old = vec![AlignBlock { id: 0, opcodes: vec![1, 2], insn_count: 2 }];
        let new = vec![
            AlignBlock { id: 0, opcodes: vec![1, 2], insn_count: 2 },
            AlignBlock { id: 1, opcodes: vec![7, 8, 9], insn_count: 3 },
        ];
        let result = align_blocks(&old, &new);
        assert_eq!(result.pairs.len(), 1);
        assert_eq!(result.new_only, vec![1]);
    }
}
