//! Stage tests written in TOML (`tests/stages/*.toml`), the readable form of a
//! `<decompilertest>` file: the same load image, console script and `<stringmatch>` assertions.
//! [`StageTest::parse`] reads one; the datatest runner turns it into the program, commands and
//! properties an XML file yields. A pattern line is a `regex` (the `<stringmatch>` dialect) or a
//! `literal` substring. A `count` may be computed from the compiled settable catalog
//! (`{ settables = { change_kind = "opt-in-tool" }, plus = 1 }`), so catalog totals never need
//! hand-bumping. The format is described in `tests/stages/README.md`.

use unlace_decomp::kuna_phases::{KunaSettable, kuna_num_settables, kuna_settable_by_index};

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

type Table = toml::Table;

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
            body.push_str(&words.join(" "));
            body.push('\n');
        }
        xml.push_str(&format!("<bytechunk {attrs}>\n{body}</bytechunk>\n"));
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
    list.iter()
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
        .collect()
}

/// A string-valued catalog field by its `phases.toml` key.
fn settable_field(st: &KunaSettable, key: &str) -> Option<&'static str> {
    Some(match key {
        "option" => st.option,
        "values" => st.values,
        "default" => st.shipped,
        "subphase" => st.subphase,
        "issue" => st.issue,
        "source_decompiler" => st.source_decompiler,
        "inspiration" => st.inspiration,
        "change_kind" => st.change_kind,
        "tier" => st.tier,
        _ => return None,
    })
}

/// How many catalog rows match every `field = value` of `filter`.
fn count_settables(filter: &Table, ctx: &str) -> Result<i32, String> {
    let mut n = 0i32;
    for i in 0..kuna_num_settables() {
        let st = kuna_settable_by_index(i);
        let mut hit = true;
        for (key, want) in filter {
            let ok = if key == "destructive" {
                want.as_bool()
                    .ok_or_else(|| format!("{ctx}: `destructive` is not a boolean"))?
                    == st.destructive
            } else {
                let have = settable_field(st, key)
                    .ok_or_else(|| format!("{ctx}: no catalog field `{key}`"))?;
                have == want
                    .as_str()
                    .ok_or_else(|| format!("{ctx}: `{key}` is not a string"))?
            };
            hit &= ok;
        }
        n += i32::from(hit);
    }
    Ok(n)
}

/// A `count`: an integer, or `{ settables = { <field> = <value>, ... }, plus = N }`.
fn count(v: &toml::Value, ctx: &str) -> Result<i32, String> {
    let Some(t) = v.as_table() else {
        return get_int(v, ctx);
    };
    check_keys(t, &["settables", "plus"], ctx)?;
    let filter = t
        .get("settables")
        .and_then(|f| f.as_table())
        .ok_or_else(|| format!("{ctx}: a computed count needs a `settables` table"))?;
    let plus = t.get("plus").map_or(Ok(0), |p| get_int(p, ctx))?;
    Ok(count_settables(filter, ctx)? + plus)
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

fn stage_match(m: &Table) -> Result<StageMatch, String> {
    let name = get_str(m, "name", "[[match]]")?;
    check_keys(
        m,
        &["name", "count", "min", "max", "regex", "literal"],
        name,
    )?;
    let (min, max) = match (m.get("count"), m.get("min"), m.get("max")) {
        (Some(c), None, None) => {
            let n = count(c, name)?;
            (n, n)
        }
        (None, Some(lo), Some(hi)) => (count(lo, name)?, count(hi, name)?),
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
    /// Parse a TOML stage test; the error names the offending table or assertion.
    pub fn parse(text: &str) -> Result<StageTest, String> {
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
            .map(stage_match)
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
