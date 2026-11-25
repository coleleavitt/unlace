//! Stage tests written in TOML (`tests/stages/*.toml`), the readable form of a
//! `<decompilertest>` file: the same load image, console script and `<stringmatch>` assertions.
//! [`StageTest::parse`] reads one. The datatest runner (unlace-harness) turns it into the program,
//! commands and properties an XML file yields; [`StageTest::to_xml`] and [`read_as_xml`] give
//! the equivalent `<decompilertest>` text to code that reads stage tests as XML. A pattern line is
//! a `regex` (the `<stringmatch>` dialect) or a `literal` substring. A `count` may be computed
//! (`{ settables = { ... }, plus = N }`) by a resolver the caller supplies
//! ([`StageTest::parse_with`]). The format is described in `tests/stages/README.md`.

use std::path::Path;

/// One line of an assertion's pattern.
#[derive(Debug, Clone, PartialEq, Eq)]
pub enum PatternLine {
    /// A regular expression in the `<stringmatch>` dialect.
    Regex(String),
    /// A plain substring.
    Literal(String),
}

/// One assertion: its baseline name, the inclusive match-count range and its line patterns.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct StageMatch {
    pub name: String,
    pub min: i32,
    pub max: i32,
    pub lines: Vec<PatternLine>,
}

/// A parsed TOML stage test.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct StageTest {
    /// The load image as the `<binaryimage>` element the XML loader reads.
    pub image_xml: String,
    /// The console script: each command and whether it is expected to fail.
    pub commands: Vec<(String, bool)>,
    pub matches: Vec<StageMatch>,
}

pub use toml::Table;

fn check_keys(t: &Table, allowed: &[&str], ctx: &str) -> Result<(), String> {
    match t.keys().find(|k| !allowed.contains(&k.as_str())) {
        Some(k) => Err(format!("{ctx}: unknown key `{k}`")),
        None => Ok(()),
    }
}

fn get_str<'a>(t: &'a Table, key: &str, ctx: &str) -> Result<&'a str, String> {
    t.get(key)
        .ok_or_else(|| format!("{ctx}: missing `{key}`"))?
        .as_str()
        .ok_or_else(|| format!("{ctx}: `{key}` is not a string"))
}

fn get_tables<'a>(t: &'a Table, key: &str, ctx: &str) -> Result<Vec<&'a Table>, String> {
    match t.get(key) {
        None => Ok(Vec::new()),
        Some(toml::Value::Array(a)) => a
            .iter()
            .map(|v| {
                v.as_table()
                    .ok_or_else(|| format!("{ctx}: an entry of `{key}` is not a table"))
            })
            .collect(),
        Some(_) => Err(format!("{ctx}: `{key}` is not an array of tables")),
    }
}

fn get_int(v: &toml::Value, ctx: &str) -> Result<i32, String> {
    v.as_integer()
        .and_then(|n| i32::try_from(n).ok())
        .filter(|n| *n >= 0)
        .ok_or_else(|| format!("{ctx}: not a count"))
}

/// XML-escape text for an attribute value or element content.
fn xml_escape(s: &str) -> String {
    let mut out = String::with_capacity(s.len());
    for c in s.chars() {
        match c {
            '&' => out.push_str("&amp;"),
            '<' => out.push_str("&lt;"),
            '>' => out.push_str("&gt;"),
            '"' => out.push_str("&quot;"),
            '\'' => out.push_str("&apos;"),
            c => out.push(c),
        }
    }
    out
}

/// The `[image]` table as a `<binaryimage>` element: chunks first, then symbols (the loader
/// keys both by address, so only the order within each kind matters).
fn image_xml(image: &Table) -> Result<String, String> {
    check_keys(image, &["arch", "bytes", "symbols"], "[image]")?;
    let mut xml = format!(
        "<binaryimage arch=\"{}\">\n",
        xml_escape(get_str(image, "arch", "[image]")?)
    );
    for chunk in get_tables(image, "bytes", "[image]")? {
        check_keys(
            chunk,
            &["space", "offset", "readonly", "hex"],
            "[[image.bytes]]",
        )?;
        let mut attrs = format!(
            "space=\"{}\" offset=\"{}\"",
            xml_escape(get_str(chunk, "space", "[[image.bytes]]")?),
            xml_escape(get_str(chunk, "offset", "[[image.bytes]]")?)
        );
        if let Some(ro) = chunk.get("readonly") {
            let ro = ro
                .as_bool()
                .ok_or("[[image.bytes]]: `readonly` is not a boolean")?;
            attrs.push_str(&format!(" readonly=\"{ro}\""));
        }
        let hex = get_str(chunk, "hex", "[[image.bytes]]")?;
        let mut body = String::new();
        for line in hex.lines() {
            let words: Vec<&str> = line.split_whitespace().collect();
            if words.is_empty() {
                continue;
            }
            if let Some(w) = words
                .iter()
                .find(|w| w.len() % 2 != 0 || !w.bytes().all(|b| b.is_ascii_hexdigit()))
            {
                return Err(format!(
                    "[[image.bytes]]: `hex` holds whole hex bytes, not {w:?}"
                ));
            }
            body.extend(words);
        }
        xml.push_str(&format!("<bytechunk {attrs}>{body}</bytechunk>\n"));
    }
    for sym in get_tables(image, "symbols", "[image]")? {
        check_keys(sym, &["space", "offset", "name"], "[image] symbols")?;
        xml.push_str(&format!(
            "<symbol space=\"{}\" offset=\"{}\" name=\"{}\"/>\n",
            xml_escape(get_str(sym, "space", "[image] symbols")?),
            xml_escape(get_str(sym, "offset", "[image] symbols")?),
            xml_escape(get_str(sym, "name", "[image] symbols")?)
        ));
    }
    xml.push_str("</binaryimage>\n");
    Ok(xml)
}

fn commands(script: &Table) -> Result<Vec<(String, bool)>, String> {
    check_keys(script, &["commands"], "[script]")?;
    let list = script
        .get("commands")
        .and_then(|c| c.as_array())
        .ok_or("[script]: `commands` is not an array")?;
    let mut probe = vec![("option irverify on".to_owned(), false)];
    let rest: Result<Vec<(String, bool)>, String> = list.iter()
        .map(|c| match c {
            toml::Value::String(s) => Ok((s.clone(), false)),
            toml::Value::Table(t) => {
                check_keys(t, &["com", "expect_error"], "[script] command")?;
                let expected = match t.get("expect_error") {
                    None => false,
                    Some(v) => v
                        .as_bool()
                        .ok_or("[script] command: `expect_error` is not a boolean")?,
                };
                Ok((get_str(t, "com", "[script] command")?.to_owned(), expected))
            }
            _ => Err("[script]: a command is not a string or a table".to_owned()),
        })
        .collect();
    probe.extend(rest?);
    Ok(probe)
}

/// Resolves a computed count's `settables` filter (a table of `field = value`) to the number of
/// matching catalog rows; the second argument names the assertion, for errors.
pub type CountResolver<'a> = &'a dyn Fn(&Table, &str) -> Result<i32, String>;

/// A `count`: an integer, or `{ settables = { <field> = <value>, ... }, plus = N }`.
fn count(v: &toml::Value, ctx: &str, resolve: CountResolver) -> Result<i32, String> {
    let Some(t) = v.as_table() else {
        return get_int(v, ctx);
    };
    check_keys(t, &["settables", "plus"], ctx)?;
    let filter = t
        .get("settables")
        .and_then(|f| f.as_table())
        .ok_or_else(|| format!("{ctx}: a computed count needs a `settables` table"))?;
    let plus = t.get("plus").map_or(Ok(0), |p| get_int(p, ctx))?;
    Ok(resolve(filter, ctx)? + plus)
}

fn lines(
    v: &toml::Value,
    make: fn(String) -> PatternLine,
    ctx: &str,
) -> Result<Vec<PatternLine>, String> {
    match v {
        toml::Value::String(s) => Ok(vec![make(s.clone())]),
        toml::Value::Array(a) if !a.is_empty() => a
            .iter()
            .map(|l| {
                l.as_str()
                    .map(|s| make(s.to_owned()))
                    .ok_or_else(|| format!("{ctx}: a pattern line is not a string"))
            })
            .collect(),
        _ => Err(format!(
            "{ctx}: a pattern is a string or a non-empty list of lines"
        )),
    }
}

fn stage_match(m: &Table, resolve: CountResolver) -> Result<StageMatch, String> {
    let name = get_str(m, "name", "[[match]]")?;
    check_keys(
        m,
        &["name", "count", "min", "max", "regex", "literal"],
        name,
    )?;
    let (min, max) = match (m.get("count"), m.get("min"), m.get("max")) {
        (Some(c), None, None) => {
            let n = count(c, name, resolve)?;
            (n, n)
        }
        (None, Some(lo), Some(hi)) => (count(lo, name, resolve)?, count(hi, name, resolve)?),
        _ => return Err(format!("{name}: give `count`, or both `min` and `max`")),
    };
    let lines = match (m.get("regex"), m.get("literal")) {
        (Some(r), None) => lines(r, PatternLine::Regex, name)?,
        (None, Some(l)) => lines(l, PatternLine::Literal, name)?,
        _ => return Err(format!("{name}: give exactly one of `regex` and `literal`")),
    };
    Ok(StageMatch {
        name: name.to_owned(),
        min,
        max,
        lines,
    })
}

impl StageTest {
    /// Parse a TOML stage test whose counts are all integers; a computed count is an error. The
    /// error names the offending table or assertion.
    pub fn parse(text: &str) -> Result<StageTest, String> {
        Self::parse_with(text, &|_, ctx| {
            Err(format!(
                "{ctx}: a computed count needs the settable catalog (the datatest runner resolves it)"
            ))
        })
    }

    /// Parse a TOML stage test, resolving computed counts with `resolve`.
    pub fn parse_with(text: &str, resolve: CountResolver) -> Result<StageTest, String> {
        let doc: Table = text.parse().map_err(|e| format!("not TOML: {e}"))?;
        check_keys(&doc, &["image", "script", "match"], "the stage test")?;
        let image = doc
            .get("image")
            .and_then(|i| i.as_table())
            .ok_or("no [image] table")?;
        let script = doc
            .get("script")
            .and_then(|s| s.as_table())
            .ok_or("no [script] table")?;
        let matches = get_tables(&doc, "match", "the stage test")?
            .into_iter()
            .map(|m| stage_match(m, resolve))
            .collect::<Result<Vec<_>, _>>()?;
        if matches.is_empty() {
            return Err("no [[match]] assertions".to_owned());
        }
        Ok(StageTest {
            image_xml: image_xml(image)?,
            commands: commands(script)?,
            matches,
        })
    }
}

impl StageTest {
    /// The equivalent `<decompilertest>` document. A literal line becomes its escaped regex. A
    /// pattern line that starts with a space or tab, or holds a newline, has no `<stringmatch>`
    /// spelling (the XML reader strips leading blanks and splits on newlines), so it is an error.
    pub fn to_xml(&self) -> Result<String, String> {
        let mut xml = String::from("<decompilertest>\n");
        xml.push_str(&self.image_xml);
        xml.push_str("<script>\n");
        for (com, expected) in &self.commands {
            let attr = if *expected {
                " expecterror=\"true\""
            } else {
                ""
            };
            xml.push_str(&format!("  <com{attr}>{}</com>\n", xml_escape(com)));
        }
        xml.push_str("</script>\n");
        for m in &self.matches {
            let mut lines = Vec::new();
            for l in &m.lines {
                let line = match l {
                    PatternLine::Regex(r) => r.clone(),
                    PatternLine::Literal(s) => escape_literal(s),
                };
                if line.starts_with([' ', '\t']) || line.contains('\n') {
                    return Err(format!(
                        "{}: a pattern line with leading blanks or a newline has no XML spelling",
                        m.name
                    ));
                }
                lines.push(xml_escape(&line));
            }
            xml.push_str(&format!(
                "<stringmatch name=\"{}\" min=\"{}\" max=\"{}\">{}</stringmatch>\n",
                xml_escape(&m.name),
                m.min,
                m.max,
                lines.join("\n")
            ));
        }
        xml.push_str("</decompilertest>\n");
        Ok(xml)
    }
}

/// The `<decompilertest>` text of a stage test, XML or TOML (by extension), for code that reads
/// stage tests as XML (golden corpora, CLI tests that pull bytes out of a stage image).
pub fn read_as_xml(path: &Path) -> Result<String, String> {
    let text = std::fs::read_to_string(path).map_err(|e| format!("{}: {e}", path.display()))?;
    if path.extension().is_some_and(|e| e == "toml") {
        xml_of_toml(&text).map_err(|e| format!("{}: {e}", path.display()))
    } else {
        Ok(text)
    }
}

/// The `<decompilertest>` text of a TOML stage test's source (an `include_str!` of one).
pub fn xml_of_toml(text: &str) -> Result<String, String> {
    StageTest::parse(text)?.to_xml()
}

/// Escape the characters a `<stringmatch>` regex treats as operators, so a literal line
/// compiles to the regex an XML file would spell with backslashes.
pub fn escape_literal(s: &str) -> String {
    let mut out = String::with_capacity(s.len());
    for c in s.chars() {
        if "\\.+*?()|[]{}^$".contains(c) {
            out.push('\\');
        }
        out.push(c);
    }
    out
}

#[cfg(test)]
mod tests;
