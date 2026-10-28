//! Surface metrics and the stylistic score for the fixture goldens.
//!
//! Shared by the `golden_fixtures` test and `cargo xtask gate` so both
//! report the same numbers from the same formula.

use std::collections::BTreeMap;
use std::path::Path;
use std::time::Duration;

/// Per-function decompile timeout for fixture gates. The CLI default (30 s)
/// is wall-clock, so on a loaded machine slow functions fail and the output
/// (and every score derived from it) changes. Fixture runs are bounded by
/// nextest's slow-timeout instead.
pub const FIXTURE_DECOMPILE_TIMEOUT: Duration = Duration::from_secs(3600);

/// Fixtures with a stored golden in `tests/golden/expected/`.
pub const GOLDEN_FIXTURES: [&str; 15] = [
    "medium",
    "debug_structs",
    "debug_calls",
    "debug_hello",
    "cpp_vtable",
    "cpp_exceptions",
    "cpp_rtti",
    "x87_math",
    "arm64_features",
    "mips64_features",
    "riscv64_features",
    "v850_features",
    "arc_features",
    "ppc64_features",
    "switch_table",
];

/// Surface-level metrics scraped from decompiler output.
///
/// These are intentionally crude (substring scans, not AST visits) so the
/// harness has zero dependency on parser correctness; if metrics regress, the
/// number is meaningful regardless of whether the output is well-formed.
#[derive(Debug, Default, Clone, Copy, PartialEq, Eq)]
pub struct Metrics {
    pub lines: usize,
    pub if_count: usize,
    pub for_count: usize,
    pub while_count: usize,
    pub return_count: usize,
    pub goto_count: usize,
    pub variable_count: usize,
}

#[derive(Debug, Default, Clone, Copy, PartialEq, Eq)]
pub struct FidelityCounters {
    pub control_flow_artifacts: usize,
    pub expression_artifacts: usize,
    pub type_artifacts: usize,
    pub declaration_artifacts: usize,
    pub naming_artifacts: usize,
    pub memory_stack_artifacts: usize,
    pub unknown_helper_artifacts: usize,
}

impl FidelityCounters {
    pub fn collect(source: &str, metrics: &Metrics) -> Self {
        FidelityCounters {
            control_flow_artifacts: metrics.goto_count
                + count_substring(source, "while (cond)")
                + count_substring(source, "if (cond)")
                + count_substring(source, "while (1)"),
            expression_artifacts: count_substring(source, "return result;")
                + count_substring(source, "cond =")
                + count_substring(source, "unsupported expression"),
            type_artifacts: count_substring(source, "Unknown")
                + count_substring(source, "undefined")
                + count_substring(source, "void *"),
            declaration_artifacts: count_substring(source, "<missing declaration>")
                + count_substring(source, "undeclared")
                + count_substring(source, "duplicate declaration"),
            naming_artifacts: count_numbered_identifiers(source, b'v')
                + count_numbered_identifiers(source, b'a'),
            memory_stack_artifacts: count_substring(source, "rsp")
                + count_substring(source, "rbp")
                + count_substring(source, "*(_QWORD *)(0LL)")
                + count_substring(source, "*(_DWORD *)(0LL)")
                + count_substring(source, "*(_WORD *)(0LL)")
                + count_substring(source, "*(_BYTE *)(0LL)"),
            unknown_helper_artifacts: count_substring(source, "Unimplemented")
                + count_substring(source, "CALLOTHER")
                + count_substring(source, "__unimplemented"),
        }
    }

    pub fn add(&mut self, other: FidelityCounters) {
        self.control_flow_artifacts += other.control_flow_artifacts;
        self.expression_artifacts += other.expression_artifacts;
        self.type_artifacts += other.type_artifacts;
        self.declaration_artifacts += other.declaration_artifacts;
        self.naming_artifacts += other.naming_artifacts;
        self.memory_stack_artifacts += other.memory_stack_artifacts;
        self.unknown_helper_artifacts += other.unknown_helper_artifacts;
    }

    pub fn total(&self) -> usize {
        self.control_flow_artifacts
            + self.expression_artifacts
            + self.type_artifacts
            + self.declaration_artifacts
            + self.naming_artifacts
            + self.memory_stack_artifacts
            + self.unknown_helper_artifacts
    }

    pub fn report(&self, label: &str) {
        eprintln!(
            "[fidelity] {label}: cf={} expr={} type={} decl={} names={} memstack={} unknown={} total={}",
            self.control_flow_artifacts,
            self.expression_artifacts,
            self.type_artifacts,
            self.declaration_artifacts,
            self.naming_artifacts,
            self.memory_stack_artifacts,
            self.unknown_helper_artifacts,
            self.total(),
        );
    }
}

impl Metrics {
    pub fn collect(source: &str) -> Self {
        let mut m = Metrics::default();
        let mut brace_depth = 0usize;
        let mut function_body_depth: Option<usize> = None;

        for line in source.lines() {
            m.lines += 1;
            let trimmed = line.trim_start();

            m.if_count += count_keyword(trimmed, "if");
            m.for_count += count_keyword(trimmed, "for");
            m.while_count += count_keyword(trimmed, "while");
            m.return_count += count_keyword(trimmed, "return");
            m.goto_count += count_keyword(trimmed, "goto");

            if function_body_depth.is_some() && is_variable_decl_line(trimmed) {
                m.variable_count += 1;
            }

            let opens = trimmed.bytes().filter(|b| *b == b'{').count();
            let closes = trimmed.bytes().filter(|b| *b == b'}').count();
            let starts_function = function_body_depth.is_none() && starts_function_body(trimmed);

            brace_depth = brace_depth.saturating_add(opens);
            if starts_function && opens > 0 {
                function_body_depth = Some(brace_depth);
            }
            brace_depth = brace_depth.saturating_sub(closes);
            if let Some(depth) = function_body_depth
                && brace_depth < depth
            {
                function_body_depth = None;
            }
        }

        m
    }

    pub fn report(&self, label: &str) {
        eprintln!(
            "[metrics] {label}: lines={} if={} for={} while={} return={} goto={} vars={}",
            self.lines,
            self.if_count,
            self.for_count,
            self.while_count,
            self.return_count,
            self.goto_count,
            self.variable_count,
        );
    }

    /// Stylistic score against an IDA/Hex-Rays reference profile, in `[0, 100]`.
    ///
    /// Each control-flow feature contributes `min(actual / reference, 1.0)`
    /// (cap prevents over-recovery from inflating the score). Weights:
    /// `if`/`for`/`while` = 3.0, `return` = 2.0. Penalties subtract from the
    /// numerator: `-2.0` per spurious `goto`, `-0.1` per variable above the
    /// reference. The final score is `numerator / total_weight * 100`, clamped
    /// to `[0.0, 100.0]`.
    pub fn score(&self, reference: &Metrics) -> f64 {
        const W_IF: f64 = 3.0;
        const W_FOR: f64 = 3.0;
        const W_WHILE: f64 = 3.0;
        const W_RETURN: f64 = 2.0;
        const PENALTY_GOTO: f64 = 2.0;
        const PENALTY_EXCESS_VAR: f64 = 0.1;

        let ratio = |actual: usize, reference: usize| -> f64 {
            if reference == 0 {
                1.0
            } else {
                (actual as f64 / reference as f64).min(1.0)
            }
        };

        let weighted = W_IF * ratio(self.if_count, reference.if_count)
            + W_FOR * ratio(self.for_count, reference.for_count)
            + W_WHILE * ratio(self.while_count, reference.while_count)
            + W_RETURN * ratio(self.return_count, reference.return_count);

        let goto_penalty = PENALTY_GOTO * self.goto_count as f64;
        let excess_vars = self.variable_count.saturating_sub(reference.variable_count);
        let var_penalty = PENALTY_EXCESS_VAR * excess_vars as f64;

        let total_weight = W_IF + W_FOR + W_WHILE + W_RETURN;
        let raw = (weighted - goto_penalty - var_penalty) / total_weight * 100.0;
        raw.clamp(0.0, 100.0)
    }
}

fn count_substring(source: &str, needle: &str) -> usize {
    source.matches(needle).count()
}

fn count_numbered_identifiers(source: &str, prefix: u8) -> usize {
    let bytes = source.as_bytes();
    let mut count = 0;
    let mut i = 0;
    while i + 1 < bytes.len() {
        let before_ok = i == 0 || !is_ident_byte(bytes[i - 1]);
        if before_ok && bytes[i] == prefix && bytes[i + 1].is_ascii_digit() {
            let mut end = i + 2;
            while end < bytes.len() && bytes[end].is_ascii_digit() {
                end += 1;
            }
            if end == bytes.len() || !is_ident_byte(bytes[end]) {
                count += 1;
                i = end;
                continue;
            }
        }
        i += 1;
    }
    count
}

fn is_ident_byte(byte: u8) -> bool {
    byte.is_ascii_alphanumeric() || byte == b'_'
}

fn is_variable_decl_line(line: &str) -> bool {
    if line.starts_with("typedef") || line.starts_with("#define") {
        return false;
    }

    [
        "_BYTE ", "_WORD ", "_DWORD ", "_QWORD ", "_BOOL ", "__int8 ", "__int16 ", "__int32 ",
        "__int64 ",
    ]
    .iter()
    .any(|ty| line.starts_with(ty) && line.contains(';'))
}

fn starts_function_body(line: &str) -> bool {
    let Some((prefix, _)) = line.split_once('{') else {
        return false;
    };
    let prefix = prefix.trim();
    if !prefix.ends_with(')') || !prefix.contains('(') {
        return false;
    }

    ![
        "if", "for", "while", "switch", "else", "do", "typedef", "struct", "union", "enum",
    ]
    .iter()
    .any(|kw| prefix == *kw || prefix.starts_with(&format!("{kw} ")))
}

/// Count occurrences of a C keyword on a line.
///
/// A keyword match requires:
/// - exact prefix match, AND
/// - followed by whitespace, `(`, or `;` (so `iflag` and `returns` don't count).
fn count_keyword(line: &str, kw: &str) -> usize {
    let mut count = 0;
    let mut search = line;
    while let Some(idx) = search.find(kw) {
        let after = &search[idx + kw.len()..];
        let before_ok = idx == 0
            || !search.as_bytes()[idx - 1].is_ascii_alphanumeric()
                && search.as_bytes()[idx - 1] != b'_';
        let after_ok = after
            .as_bytes()
            .first()
            .is_none_or(|b| !b.is_ascii_alphanumeric() && *b != b'_');
        if before_ok && after_ok {
            count += 1;
        }
        search = &search[idx + kw.len()..];
    }
    count
}

/// Load `tests/golden/reference_metrics.toml`.
pub fn load_reference_metrics(path: &Path) -> Result<BTreeMap<String, Metrics>, String> {
    let text =
        std::fs::read_to_string(path).map_err(|e| format!("failed to read {path:?}: {e}"))?;
    parse_reference_metrics(&text).map_err(|e| format!("failed to parse {path:?}: {e}"))
}

/// Parse the simple TOML schema used by `reference_metrics.toml`.
///
/// Supports only `[section]` headers and `key = <unsigned integer>` lines;
/// anything else (comments after `#`, blank lines) is skipped. Keeping this
/// inline avoids pulling a `toml` dev-dep into the harness for a static
/// config file.
pub fn parse_reference_metrics(text: &str) -> Result<BTreeMap<String, Metrics>, String> {
    let mut out: BTreeMap<String, Metrics> = BTreeMap::new();
    let mut current: Option<String> = None;
    let mut current_metrics = Metrics::default();

    let flush = |name: &Option<String>, metrics: &Metrics, out: &mut BTreeMap<String, Metrics>| {
        if let Some(n) = name {
            out.insert(n.clone(), *metrics);
        }
    };

    for (idx, raw) in text.lines().enumerate() {
        let line_no = idx + 1;
        let line = match raw.find('#') {
            Some(i) => &raw[..i],
            None => raw,
        };
        let line = line.trim();
        if line.is_empty() {
            continue;
        }

        if let Some(rest) = line.strip_prefix('[') {
            let name = rest
                .strip_suffix(']')
                .ok_or_else(|| format!("line {line_no}: missing ']' in section header"))?
                .trim()
                .to_string();
            flush(&current, &current_metrics, &mut out);
            current = Some(name);
            current_metrics = Metrics::default();
            continue;
        }

        let (key, value) = line
            .split_once('=')
            .ok_or_else(|| format!("line {line_no}: expected 'key = value'"))?;
        let key = key.trim();
        let value: usize = value.trim().parse().map_err(|e| {
            format!("line {line_no}: value for '{key}' is not an unsigned integer: {e}")
        })?;

        let target = match key {
            "if_count" => &mut current_metrics.if_count,
            "for_count" => &mut current_metrics.for_count,
            "while_count" => &mut current_metrics.while_count,
            "return_count" => &mut current_metrics.return_count,
            "goto_count" => &mut current_metrics.goto_count,
            "var_count" => &mut current_metrics.variable_count,
            "line_count" => &mut current_metrics.lines,
            other => {
                return Err(format!("line {line_no}: unknown key '{other}'"));
            }
        };
        *target = value;
    }
    flush(&current, &current_metrics, &mut out);
    Ok(out)
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn count_keyword_only_matches_word_boundaries() {
        assert_eq!(count_keyword("if (x) {", "if"), 1);
        assert_eq!(count_keyword("if(x){", "if"), 1);
        assert_eq!(count_keyword("iflag = 1;", "if"), 0);
        assert_eq!(count_keyword("return 0;", "return"), 1);
        assert_eq!(count_keyword("returns_value();", "return"), 0);
        assert_eq!(count_keyword("if (a) if (b) c;", "if"), 2);
    }

    #[test]
    fn metrics_collect_counts_basic_constructs() {
        let src = "\
    int main() {
        _DWORD v0;
        _QWORD v1;
        if (v0 == 0) {
            return 0;
        }
        return 1;
    }
    ";
        let m = Metrics::collect(src);
        assert_eq!(m.if_count, 1);
        assert_eq!(m.return_count, 2);
        assert_eq!(m.variable_count, 2);
        assert!(m.lines >= 8);
    }

    #[test]
    fn metrics_collect_ignores_header_declarations() {
        let src = "\
    typedef unsigned char _BYTE;
    _BYTE byte_4008;
    _QWORD qword_3FD8;
    __int64 sub_1040();

    void f(void) {
        _DWORD v0;
        __int64 v1;
        if (v0) {
            return;
        }
    }
    ";
        let m = Metrics::collect(src);
        assert_eq!(m.if_count, 1);
        assert_eq!(m.return_count, 1);
        assert_eq!(m.variable_count, 2);
    }

    #[test]
    fn metrics_collect_counts_loops_and_goto() {
        let src = "\
    void f() {
        for (int i = 0; i < 10; i++) {}
        while (cond) { goto end; }
        do_x();
    end:
        return;
    }
    ";
        let m = Metrics::collect(src);
        assert_eq!(m.for_count, 1);
        assert_eq!(m.while_count, 1);
        assert_eq!(m.goto_count, 1);
        assert_eq!(m.return_count, 1);
    }

    #[test]
    fn fidelity_counters_collect_known_artifacts() {
        let src = "\
    void f() {
        _DWORD v1;
        if (cond) { goto end; }
        *(_QWORD *)(0LL) = v1;
        return result;
    end:
        Unimplemented();
    }
    ";
        let m = Metrics::collect(src);
        let f = FidelityCounters::collect(src, &m);
        assert!(f.control_flow_artifacts >= 2);
        assert_eq!(f.expression_artifacts, 1);
        assert_eq!(f.memory_stack_artifacts, 1);
        assert_eq!(f.unknown_helper_artifacts, 1);
        assert!(f.naming_artifacts >= 1);
    }

    #[test]
    fn score_perfect_match_caps_at_one_hundred() {
        let reference = Metrics {
            if_count: 10,
            for_count: 2,
            while_count: 1,
            return_count: 3,
            variable_count: 5,
            ..Default::default()
        };
        let actual = reference;
        assert!((actual.score(&reference) - 100.0).abs() < 1e-9);
    }

    #[test]
    fn score_caps_recovery_ratio_at_one() {
        let reference = Metrics {
            if_count: 4,
            return_count: 1,
            ..Default::default()
        };
        let inflated = Metrics {
            if_count: 100,
            return_count: 100,
            ..Default::default()
        };
        let baseline = inflated.score(&Metrics {
            if_count: 100,
            return_count: 100,
            ..Default::default()
        });
        assert!((inflated.score(&reference) - baseline).abs() < 1e-9);
    }

    #[test]
    fn score_partial_recovery() {
        let reference = Metrics {
            if_count: 10,
            for_count: 2,
            while_count: 2,
            return_count: 4,
            ..Default::default()
        };
        let actual = Metrics {
            if_count: 5,
            for_count: 1,
            while_count: 1,
            return_count: 2,
            ..Default::default()
        };
        let s = actual.score(&reference);
        assert!((s - 50.0).abs() < 1e-9, "expected ~50, got {s}");
    }

    #[test]
    fn score_penalizes_goto_and_excess_vars() {
        let reference = Metrics {
            if_count: 10,
            return_count: 4,
            variable_count: 5,
            ..Default::default()
        };
        let clean = Metrics {
            if_count: 10,
            return_count: 4,
            variable_count: 5,
            ..Default::default()
        };
        let with_goto = Metrics {
            goto_count: 3,
            ..clean
        };
        let with_excess = Metrics {
            variable_count: 25,
            ..clean
        };
        assert!(with_goto.score(&reference) < clean.score(&reference));
        assert!(with_excess.score(&reference) < clean.score(&reference));
    }

    #[test]
    fn score_clamped_to_non_negative() {
        let reference = Metrics {
            if_count: 1,
            ..Default::default()
        };
        let bad = Metrics {
            goto_count: 1000,
            ..Default::default()
        };
        assert_eq!(bad.score(&reference), 0.0);
    }

    #[test]
    fn parse_reference_metrics_basic() {
        let text = "\
    # Header comment
    [medium]
    if_count = 60
    for_count = 5
    while_count = 3
    return_count = 8
    goto_count = 0
    var_count = 30
    line_count = 500

    [debug_hello]  # inline comment
    if_count = 0
    return_count = 1
    var_count = 3
    line_count = 15
    ";
        let table = parse_reference_metrics(text).expect("parse ok");
        let medium = table.get("medium").expect("medium present");
        assert_eq!(medium.if_count, 60);
        assert_eq!(medium.for_count, 5);
        assert_eq!(medium.return_count, 8);
        assert_eq!(medium.variable_count, 30);
        assert_eq!(medium.lines, 500);

        let hello = table.get("debug_hello").expect("debug_hello present");
        assert_eq!(hello.if_count, 0);
        assert_eq!(hello.return_count, 1);
        assert_eq!(hello.variable_count, 3);
    }

    #[test]
    fn parse_reference_metrics_rejects_unknown_key() {
        let text = "[s]\nbogus = 1\n";
        assert!(parse_reference_metrics(text).is_err());
    }

    #[test]
    fn parse_reference_metrics_rejects_malformed_header() {
        let text = "[unterminated\nif_count = 1\n";
        assert!(parse_reference_metrics(text).is_err());
    }
}
