//! Semantic diff: side-by-side C output comparison (t431).
//!
//! Renders two versions of decompiled C output in a unified or side-by-side
//! diff format, highlighting semantic changes (not just textual diffs).

/// A line in the diff output.
#[derive(Debug, Clone, PartialEq, Eq)]
pub enum DiffLine {
    /// Line present in both versions (context).
    Context(String),
    /// Line only in the old version (removed).
    Removed(String),
    /// Line only in the new version (added).
    Added(String),
}

/// Result of a semantic diff between two C outputs.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct SemanticDiff {
    pub old_label: String,
    pub new_label: String,
    pub lines: Vec<DiffLine>,
    pub added_count: usize,
    pub removed_count: usize,
}

/// Compute a semantic diff between two C source strings.
///
/// Uses the Myers diff algorithm on lines after normalizing whitespace.
pub fn semantic_diff(old: &str, new: &str, old_label: &str, new_label: &str) -> SemanticDiff {
    let old_lines: Vec<&str> = old.lines().collect();
    let new_lines: Vec<&str> = new.lines().collect();

    let lcs = line_lcs(&old_lines, &new_lines);
    let mut result_lines = Vec::new();
    let mut added_count = 0usize;
    let mut removed_count = 0usize;

    let mut oi = 0;
    let mut ni = 0;
    let mut li = 0;

    while li < lcs.len() {
        // Emit removed lines before LCS match
        while oi < old_lines.len() && normalize(old_lines[oi]) != normalize(lcs[li]) {
            result_lines.push(DiffLine::Removed(old_lines[oi].to_string()));
            removed_count += 1;
            oi += 1;
        }
        // Emit added lines before LCS match
        while ni < new_lines.len() && normalize(new_lines[ni]) != normalize(lcs[li]) {
            result_lines.push(DiffLine::Added(new_lines[ni].to_string()));
            added_count += 1;
            ni += 1;
        }
        // Emit context
        if oi < old_lines.len() {
            result_lines.push(DiffLine::Context(old_lines[oi].to_string()));
            oi += 1;
        }
        ni += 1;
        li += 1;
    }
    // Remaining lines
    while oi < old_lines.len() {
        result_lines.push(DiffLine::Removed(old_lines[oi].to_string()));
        removed_count += 1;
        oi += 1;
    }
    while ni < new_lines.len() {
        result_lines.push(DiffLine::Added(new_lines[ni].to_string()));
        added_count += 1;
        ni += 1;
    }

    SemanticDiff {
        old_label: old_label.to_string(),
        new_label: new_label.to_string(),
        lines: result_lines,
        added_count,
        removed_count,
    }
}

/// Render a SemanticDiff as a unified-diff-style string.
pub fn render_unified(diff: &SemanticDiff) -> String {
    let mut out = String::new();
    out.push_str(&format!("--- {}\n+++ {}\n", diff.old_label, diff.new_label));
    for line in &diff.lines {
        match line {
            DiffLine::Context(s) => { out.push(' '); out.push_str(s); out.push('\n'); }
            DiffLine::Removed(s) => { out.push('-'); out.push_str(s); out.push('\n'); }
            DiffLine::Added(s) => { out.push('+'); out.push_str(s); out.push('\n'); }
        }
    }
    out
}

fn normalize(s: &str) -> String {
    s.split_whitespace().collect::<Vec<_>>().join(" ")
}

fn line_lcs<'a>(a: &[&'a str], b: &[&str]) -> Vec<String> {
    let m = a.len();
    let n = b.len();
    let mut dp = vec![vec![0u32; n + 1]; m + 1];
    for i in 1..=m {
        for j in 1..=n {
            dp[i][j] = if normalize(a[i-1]) == normalize(b[j-1]) {
                dp[i-1][j-1] + 1
            } else {
                dp[i-1][j].max(dp[i][j-1])
            };
        }
    }
    // Backtrack
    let mut result = Vec::new();
    let (mut i, mut j) = (m, n);
    while i > 0 && j > 0 {
        if normalize(a[i-1]) == normalize(b[j-1]) {
            result.push(normalize(a[i-1]));
            i -= 1; j -= 1;
        } else if dp[i-1][j] >= dp[i][j-1] {
            i -= 1;
        } else {
            j -= 1;
        }
    }
    result.reverse();
    result
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn identical_sources() {
        let src = "int main() {\n    return 0;\n}\n";
        let d = semantic_diff(src, src, "old", "new");
        assert_eq!(d.added_count, 0);
        assert_eq!(d.removed_count, 0);
        assert!(d.lines.iter().all(|l| matches!(l, DiffLine::Context(_))));
    }

    #[test]
    fn detect_added_line() {
        let old = "int x = 0;\nreturn x;\n";
        let new = "int x = 0;\nif (x < 0) abort();\nreturn x;\n";
        let d = semantic_diff(old, new, "old", "new");
        assert_eq!(d.added_count, 1);
        assert_eq!(d.removed_count, 0);
    }

    #[test]
    fn detect_removed_line() {
        let old = "int x = 0;\nfree(ptr);\nreturn x;\n";
        let new = "int x = 0;\nreturn x;\n";
        let d = semantic_diff(old, new, "old", "new");
        assert_eq!(d.removed_count, 1);
    }

    #[test]
    fn unified_format() {
        let old = "a\nb\n";
        let new = "a\nc\n";
        let d = semantic_diff(old, new, "old.c", "new.c");
        let text = render_unified(&d);
        assert!(text.contains("--- old.c"));
        assert!(text.contains("+++ new.c"));
        assert!(text.contains(" a"));
    }
}
