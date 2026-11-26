//! Rewrite rule files: p-code rewrites written as data, compiled into rules of
//! the rule pools (`unlace decompile --rules FILE`, `docs/cli.md`).
//!
//! A file is TOML with one `[[rule]]` table per rule:
//!
//! ```toml
//! [[rule]]
//! name = "orandsum"
//! group = "analysis"
//! match = "INT_ADD(INT_OR(x, y), INT_AND(x, y))"
//! replace = "INT_ADD(x, y)"
//! ```
//!
//! - `name` is the rule's name in the pool, as the action listing shows it:
//!   lower-case letters, digits and `_`, unique in the file and not the name
//!   of a built-in rule.
//! - `group` is where the rule runs: it is registered behind the last
//!   built-in rule of that group and belongs to the group
//!   ([`crate::hooks`], [`rule_groups`]).
//! - `match` is an op: its opcode, and for each input a capture (`x`), a
//!   constant (`0xff`, or `value/mask` for any constant `c` with
//!   `c & mask == value`), or another op, which the input must be written
//!   by. A name used twice is one Varnode, or two constants of one size and
//!   value. `:N` after any node makes it `N` bytes wide. The inputs of a
//!   commutative op match in either order.
//! - `replace` is what the op becomes: an op tree over the captures and
//!   constants, one capture, or one constant.
//!
//! [`parse_rules`] checks a file without a program: the opcodes, the input
//! counts, that every capture of `replace` is bound by `match`, and that the
//! sizes of both sides fit together, with the replacement as wide as the
//! matched op's output. Each refused rule is reported with its name and line.
//! [`register_rules`] adds the rules to an architecture.

mod pattern;
mod rule;
mod sizes;

use std::collections::BTreeSet;
use std::fmt;
use std::ops::Range;
use std::path::Path;

use toml::Spanned;
use toml::de::{DeTable, DeValue};
use unlace_base::error::UnlaceResult;

use crate::action::RuleState;
use crate::architecture::Architecture;
use crate::hooks::{rule_groups, rule_names};
pub use rule::RewriteRule;
use sizes::{Problem, Side};

/// Why a rule file, or one rule of it, is refused.
#[derive(Clone, Debug, PartialEq, Eq)]
pub struct RewriteError {
    /// The 1-based line of the file the problem is on.
    pub line: usize,
    /// The name of the rule, when the problem is inside one that has a name.
    pub rule: Option<String>,
    /// What is wrong.
    pub message: String,
}

/// The problem without its line: `rule "name": message`.
impl fmt::Display for RewriteError {
    fn fmt(&self, f: &mut fmt::Formatter<'_>) -> fmt::Result {
        match &self.rule {
            Some(rule) => write!(f, "rule \"{rule}\": {}", self.message),
            None => f.write_str(&self.message),
        }
    }
}

impl std::error::Error for RewriteError {}

/// Parse and check the text of a rule file. `Err` holds one error per
/// refused rule, in file order, or the one error that stops the file from
/// being read as rules at all.
pub fn parse_rules(source: &str) -> Result<Vec<RewriteRule>, Vec<RewriteError>> {
    let line_of = |span: &Range<usize>| 1 + source[..span.start].matches('\n').count();
    let fail = |span: &Range<usize>, message: String| RewriteError {
        line: line_of(span),
        rule: None,
        message,
    };
    let document = DeTable::parse(source).map_err(|error| {
        let span = error.span().unwrap_or(0..0);
        vec![fail(&span, error.message().to_string())]
    })?;
    let mut tables = Vec::new();
    for (key, value) in document.get_ref() {
        match (key.get_ref().as_ref(), value.get_ref()) {
            ("rule", DeValue::Array(rules)) => tables.extend(rules.iter()),
            ("rule", _) => {
                let message = "`rule` is an array of tables: write `[[rule]]`".to_string();
                return Err(vec![fail(&key.span(), message)]);
            }
            (other, _) => {
                let message = format!("unknown key `{other}`: a rule file holds `[[rule]]` tables");
                return Err(vec![fail(&key.span(), message)]);
            }
        }
    }
    let groups = rule_groups();
    // A rule is addressed by its name, so none takes a built-in rule's.
    let mut names = rule_names();
    let mut rules = Vec::new();
    let mut errors = Vec::new();
    for table in tables {
        match rule_of(table, &groups, &mut names) {
            Ok((name, group, program)) => rules.push(RewriteRule::new(name, group, program)),
            Err(refusal) => errors.push(RewriteError {
                line: line_of(&refusal.span),
                rule: refusal.rule,
                message: refusal.message,
            }),
        }
    }
    if errors.is_empty() {
        Ok(rules)
    } else {
        Err(errors)
    }
}

/// One refused rule, before its span is turned into a line.
struct Refusal {
    span: Range<usize>,
    rule: Option<String>,
    message: String,
}

type Checked = (String, String, sizes::Program);

/// Check one `[[rule]]` table.
fn rule_of(
    table: &Spanned<DeValue<'_>>,
    groups: &[(&'static str, String)],
    names: &mut BTreeSet<String>,
) -> Result<Checked, Refusal> {
    let refuse = |span: Range<usize>, rule: Option<&str>, message: String| Refusal {
        span,
        rule: rule.map(str::to_string),
        message,
    };
    let DeValue::Table(fields) = table.get_ref() else {
        let message = "a rule is a table: write `[[rule]]`".to_string();
        return Err(refuse(table.span(), None, message));
    };
    let text = |key: &str| match fields.get(key) {
        Some(value) => match value.get_ref() {
            DeValue::String(text) => Ok((text.as_ref(), value.span())),
            other => Err((
                value.span(),
                format!("`{key}` is a string, not {}", other.type_str()),
            )),
        },
        None => Err((table.span(), format!("missing key `{key}`"))),
    };
    let (name, name_span) = text("name").map_err(|(span, message)| refuse(span, None, message))?;
    let refuse = |span: Range<usize>, message: String| refuse(span, Some(name), message);
    let named = |c: char| c.is_ascii_lowercase() || c.is_ascii_digit() || c == '_';
    if name.is_empty() || !name.chars().all(named) {
        let message = "a rule name is lower-case letters, digits and `_`".to_string();
        return Err(refuse(name_span, message));
    }
    if !names.insert(name.to_string()) {
        let message = "a built-in rule or another rule of the file has this name".to_string();
        return Err(refuse(name_span, message));
    }
    for (key, _) in fields {
        let known = ["name", "group", "match", "replace"];
        if !known.contains(&key.get_ref().as_ref()) {
            let message = format!(
                "unknown key `{}`: a rule has `name`, `group`, `match` and `replace`",
                key.get_ref()
            );
            return Err(refuse(key.span(), message));
        }
    }
    let field = |key: &str| text(key).map_err(|(span, message)| refuse(span, message));
    let (group, group_span) = field("group")?;
    if !groups.iter().any(|(_, known)| known == group) {
        let known: Vec<&str> = groups.iter().map(|(_, group)| group.as_str()).collect();
        let message = format!(
            "unknown group `{group}`: the groups are {}",
            known.join(", ")
        );
        return Err(refuse(group_span, message));
    }
    let (pattern, pattern_span) = field("match")?;
    let (replacement, replacement_span) = field("replace")?;
    let parsed = |key: &str, text: &str, span: &Range<usize>| {
        pattern::parse(text).map_err(|error| {
            let message = format!(
                "{key}: {} at character {} of `{text}`",
                error.message,
                error.at + 1
            );
            refuse(span.clone(), message)
        })
    };
    let pattern_expr = parsed("match", pattern, &pattern_span)?;
    let replacement_expr = parsed("replace", replacement, &replacement_span)?;
    let program = sizes::compile((pattern, &pattern_expr), (replacement, &replacement_expr))
        .map_err(|Problem { side, message }| match side {
            Side::Match => refuse(pattern_span.clone(), format!("match: {message}")),
            Side::Replace => refuse(replacement_span.clone(), format!("replace: {message}")),
        })?;
    Ok((name.to_string(), group.to_string(), program))
}

/// Read and check the rule file at `path`. The error is one line per
/// problem, each starting with the path and the line.
pub fn read_rules(path: &Path) -> Result<Vec<RewriteRule>, String> {
    let source = std::fs::read_to_string(path)
        .map_err(|error| format!("{}: cannot read the rule file: {error}", path.display()))?;
    parse_rules(&source).map_err(|errors| {
        let lines: Vec<String> = errors
            .iter()
            .map(|error| format!("{}:{}: {error}", path.display(), error.line))
            .collect();
        lines.join("\n")
    })
}

/// Add `rules` to the default pipeline of `arch`, in order, each behind the
/// last rule of its group ([`Architecture::add_rule`]).
pub fn register_rules(arch: &mut Architecture, rules: Vec<RewriteRule>) -> UnlaceResult<()> {
    for rule in rules {
        let state = RuleState::new(rule.group(), 0, rule.name());
        let group = rule.group().to_string();
        arch.add_rule(&group, state, Box::new(rule))?;
    }
    Ok(())
}

/// [`read_rules`] then [`register_rules`]: what `--rules FILE` does to a load.
pub fn register_file(arch: &mut Architecture, path: &Path) -> Result<(), String> {
    let rules = read_rules(path)?;
    register_rules(arch, rules).map_err(|error| format!("{}: {}", path.display(), error.explain()))
}

#[cfg(test)]
mod tests;
