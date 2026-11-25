//! No-return rename rules: the unlace analog of IDA's `cfg/noret.cfg` user rule
//! file (IDA function `sub_511080`).
//!
//! Each rule names a family of wrapper functions with a glob pattern (`ptn`, where
//! `*` matches any run of characters) and the replacement name (`rpl`) that a
//! matching function counts as for the no-return name match. A rule file has one
//! rule per line, `name ptn rpl` separated by whitespace; `#` starts a comment
//! line. Rules are tried in file order and the first match wins.
//!
//! This is unlace's own line format, not a copy of IDA's file: the rule names
//! and the duplicate-name and invalid-entry checks follow IDA's error strings.
//! Nothing reads a rule file yet; `noreturn_known` wiring is the next step (issue #1151).

use std::collections::BTreeSet;

/// One parsed rule: `name` identifies it, `ptn` is the glob it matches, `rpl` the replacement.
#[derive(Clone, Debug, PartialEq, Eq)]
pub struct NoRetRule {
    pub name: String,
    pub ptn: String,
    pub rpl: String,
}

/// Parse a rule file. Errors name the 1-based line: a line that is not exactly
/// three fields is an invalid entry, a repeated rule name is a duplicate, and a
/// pattern made only of `*` is rejected because it would match every function.
pub fn parse_rules(text: &str) -> Result<Vec<NoRetRule>, String> {
    let mut rules = Vec::new();
    let mut names = BTreeSet::new();
    for (index, raw) in text.lines().enumerate() {
        let line_no = index + 1;
        let line = raw.trim();
        if line.is_empty() || line.starts_with('#') {
            continue;
        }
        let fields: Vec<&str> = line.split_whitespace().collect();
        let &[name, ptn, rpl] = fields.as_slice() else {
            return Err(format!(
                "line {line_no}: contains an invalid entry (expected `name ptn rpl`)"
            ));
        };
        if !names.insert(name) {
            return Err(format!("line {line_no}: duplicated rule name `{name}`"));
        }
        if ptn.chars().all(|c| c == '*') {
            return Err(format!(
                "line {line_no}: pattern `{ptn}` of rule `{name}` matches every name"
            ));
        }
        rules.push(NoRetRule {
            name: name.to_string(),
            ptn: ptn.to_string(),
            rpl: rpl.to_string(),
        });
    }
    Ok(rules)
}

/// Glob match of `name` against `ptn`: `*` matches any run of characters
/// (none included); every other character matches itself. The leading and
/// trailing literals may not overlap in `name`.
pub fn glob_matches(ptn: &str, name: &str) -> bool {
    let parts: Vec<&str> = ptn.split('*').collect();
    if parts.len() == 1 {
        return ptn == name;
    }
    let (Some(&first), Some(&last)) = (parts.first(), parts.last()) else {
        return false;
    };
    if name.len() < first.len() + last.len() || !name.starts_with(first) || !name.ends_with(last) {
        return false;
    }
    let mut rest = &name[first.len()..name.len() - last.len()];
    for &middle in &parts[1..parts.len() - 1] {
        if middle.is_empty() {
            continue;
        }
        match rest.find(middle) {
            Some(at) => rest = &rest[at + middle.len()..],
            None => return false,
        }
    }
    true
}

/// The replacement name of the first rule (in file order) whose pattern matches `name`.
pub fn rename_for_noreturn<'a>(name: &str, rules: &'a [NoRetRule]) -> Option<&'a str> {
    rules
        .iter()
        .find(|rule| glob_matches(&rule.ptn, name))
        .map(|rule| rule.rpl.as_str())
}

#[cfg(test)]
mod tests;
