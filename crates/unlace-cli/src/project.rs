//! `unlace project` — the project file (a SQLite database of user overrides).
//!
//! `init` binds a new file to a binary by its SHA-256; `set`/`unset` store and remove
//! `--assert` directives (plus `bookmark`); `get`/`list`/`query` read it back (`query` takes
//! any read-only SQL); `export`/`import` move it through canonical JSON for review in git.
//! `--project FILE` on `decompile` and `decompile-all` applies it ([`directives_for`]): its
//! rows become `--assert` directives ahead of the command line's own, so an explicit `--assert`
//! still wins. The store itself is the `unlace-project` crate; `docs/project.md` is the design.

use std::path::{Path, PathBuf};

use serde_json::{Value, json};
use unlace_project::{BinaryIdentity, Project, ProjectJson};

use crate::args::take_value;

const USAGE: &str = "usage: unlace project <init|schema|set|unset|get|list|query|export|import> ...\n\
\n\
  unlace project init <binary> [-o FILE] [--force] [--json]\n\
      create FILE (default <binary>.unlace) bound to the binary's SHA-256\n\
  unlace project schema [--json]\n\
      every table and column, with what it holds\n\
  unlace project set FILE <directive|@file>... [--json]\n\
      store --assert directives (and 'bookmark <addr> <title>'); each is checked first\n\
  unlace project unset FILE <directive>... [--json]\n\
      remove what a directive sets: 'unset FILE name main::v2'\n\
  unlace project get FILE <table> <key> [--json|--jsonl]\n\
  unlace project list FILE [<table>] [--json|--jsonl]\n\
      no table: every override as the directives decompile applies\n\
  unlace project query FILE <SQL> [--json|--jsonl]\n\
      any read-only SQL (a statement that could write is refused)\n\
  unlace project export FILE [-o OUT]\n\
      canonical JSON (sorted, hex addresses) for review in git\n\
  unlace project import FILE <JSON> [--replace] [--json]\n\
\n\
  decompile and decompile-all take --project FILE to apply it.\n\
  tables: types functions data prototypes patches assertions callsites locals comments bookmarks\n\
\n\
  --json roots: init {project,binary,schema_version}; schema {schema_version,tables:[{name,key,description,columns}]};\n\
  set {project,stored}; unset {project,removed}; get/query/list TABLE {columns,rows:[{column:value}]};\n\
  list {project,binary,directives}; import {project,imported,replaced}.\n\
  --jsonl: one JSON object per line instead: a row {column:value}, or {directive} for a plain list";

pub fn run(argv: &[String]) -> i32 {
    crate::args::report(main(argv))
}

fn main(argv: &[String]) -> Result<i32, String> {
    let Some(verb) = argv.first() else {
        eprintln!("{USAGE}");
        return Ok(2);
    };
    if matches!(verb.as_str(), "-h" | "--help") || argv.iter().any(|a| a == "-h" || a == "--help") {
        eprintln!("{USAGE}");
        return Ok(0);
    }
    let mut json = false;
    let mut jsonl = false;
    let mut force = false;
    let mut replace = false;
    let mut out: Option<String> = None;
    let mut positional: Vec<String> = Vec::new();
    let mut i = 1;
    while i < argv.len() {
        let a = argv[i].as_str();
        match a {
            "--json" => json = true,
            "--jsonl" => jsonl = true,
            "--force" => force = true,
            "--replace" => replace = true,
            "-o" | "--output" => out = Some(take_value(argv, &mut i, a)?),
            s if s.starts_with("--") => return Err(format!("unknown option {s}")),
            _ => positional.push(a.to_string()),
        }
        i += 1;
    }
    let need = |n: usize, what: &str| -> Result<(), String> {
        if positional.len() < n {
            Err(format!("project {verb} needs {what}"))
        } else {
            Ok(())
        }
    };
    if json && jsonl {
        return Err("--json and --jsonl are exclusive".into());
    }
    let rows_form = if jsonl {
        RowsForm::Lines
    } else if json {
        RowsForm::Document
    } else {
        RowsForm::Text
    };
    let err = |e: unlace_project::ProjectError| e.to_string();
    match verb.as_str() {
        "init" => {
            need(1, "<binary>")?;
            if positional.len() > 1 {
                return Err(format!("unexpected argument {:?}", positional[1]));
            }
            let binary = &positional[0];
            let identity = binary_identity(binary)?;
            let path = out
                .map(PathBuf::from)
                .unwrap_or_else(|| default_project_path(binary));
            let project = Project::create(&path, &identity, force).map_err(err)?;
            let version = project.schema_version().map_err(err)?;
            Ok(emit(
                json || jsonl,
                json!({
                    "project": path.to_string_lossy(),
                    "binary": identity_json(&identity),
                    "schema_version": version,
                }),
                format!(
                    "created {} for {} ({})\n",
                    path.display(),
                    binary,
                    identity.sha256
                ),
            ))
        }
        "schema" => {
            if positional.len() > 1 {
                return Err(format!("unexpected argument {:?}", positional[1]));
            }
            Ok(emit(json || jsonl, schema_json(), schema_text()))
        }
        "set" => {
            need(2, "FILE and at least one directive")?;
            let mut project = open(&positional[0])?;
            let mut directives = Vec::new();
            for arg in &positional[1..] {
                directives.extend(expand(arg)?);
            }
            let mut stored = Vec::new();
            for d in &directives {
                stored.push(checked(d)?);
            }
            project
                .set_all(stored.iter().map(String::as_str))
                .map_err(err)?;
            let text: String = stored.iter().map(|d| format!("stored {d}\n")).collect();
            Ok(emit(
                json || jsonl,
                json!({"project": positional[0], "stored": stored}),
                text,
            ))
        }
        "unset" => {
            need(2, "FILE and a directive")?;
            let mut project = open(&positional[0])?;
            let mut removed = 0usize;
            for d in &positional[1..] {
                removed += project.unset(d).map_err(err)?;
            }
            Ok(emit(
                json || jsonl,
                json!({"project": positional[0], "removed": removed}),
                format!("removed {removed}\n"),
            ))
        }
        "get" => {
            need(3, "FILE, a table and a key")?;
            let project = open(&positional[0])?;
            let sql = get_sql(&positional[1], &positional[2])?;
            let (columns, rows) = project.query(&sql).map_err(err)?;
            Ok(emit_rows(rows_form, columns, rows))
        }
        "list" => {
            need(1, "FILE")?;
            let project = open(&positional[0])?;
            if let Some(table) = positional.get(1) {
                check_table(table)?;
                let (columns, rows) = project
                    .query(&format!("SELECT * FROM {table} ORDER BY 1"))
                    .map_err(err)?;
                return Ok(emit_rows(rows_form, columns, rows));
            }
            let directives = project.directives().map_err(err)?;
            if jsonl {
                let text: String = directives
                    .iter()
                    .map(|d| json!({"directive": d}).to_string() + "\n")
                    .collect();
                return Ok(crate::output::emit_with_status(&text, 0));
            }
            let binary = project.binary().map_err(err)?;
            let text: String = directives.iter().map(|d| format!("{d}\n")).collect();
            Ok(emit(
                json || jsonl,
                json!({
                    "project": positional[0],
                    "binary": identity_json(&binary),
                    "directives": directives,
                }),
                text,
            ))
        }
        "query" => {
            need(2, "FILE and an SQL statement")?;
            let project = open(&positional[0])?;
            let (columns, rows) = project.query(&positional[1..].join(" ")).map_err(err)?;
            Ok(emit_rows(rows_form, columns, rows))
        }
        "export" => {
            need(1, "FILE")?;
            let project = open(&positional[0])?;
            let text = ProjectJson::export(&project)
                .and_then(|j| j.to_canonical_string())
                .map_err(err)?;
            match out {
                Some(path) => {
                    std::fs::write(&path, &text).map_err(|e| format!("{path}: {e}"))?;
                    Ok(0)
                }
                None => Ok(crate::output::emit_with_status(&text, 0)),
            }
        }
        "import" => {
            need(2, "FILE and a JSON export")?;
            let mut project = open(&positional[0])?;
            let text = std::fs::read_to_string(&positional[1])
                .map_err(|e| format!("{}: {e}", positional[1]))?;
            let parsed = ProjectJson::parse(&text).map_err(err)?;
            let imported = parsed.import_into(&mut project, replace).map_err(err)?;
            Ok(emit(
                json || jsonl,
                json!({"project": positional[0], "imported": imported, "replaced": replace}),
                format!("imported {imported} rows\n"),
            ))
        }
        other => Err(format!("unknown project command {other:?}\n{USAGE}")),
    }
}

/// `--project FILE` on decompile/decompile-all: the project's overrides as directives, after
/// checking that the project was made for `binary`.
pub(crate) fn directives_for(project: &str, binary: &str) -> Result<Vec<String>, String> {
    let p = open(project)?;
    let identity = binary_identity(binary)?;
    p.check_binary(&identity)
        .map_err(|e| format!("--project {project}: {e}"))?;
    p.directives()
        .map_err(|e| format!("--project {project}: {e}"))
}

/// The default project file of a binary: `<binary>.unlace` beside it.
fn default_project_path(binary: &str) -> PathBuf {
    let path = Path::new(binary);
    let mut name = path
        .file_name()
        .map(|n| n.to_os_string())
        .unwrap_or_default();
    name.push(".unlace");
    path.with_file_name(name)
}

/// The identity of the file a command reads: the path itself, or for an `archive:member`
/// spelling the archive (bind the extracted member file to get the member's own identity).
fn binary_identity(binary: &str) -> Result<BinaryIdentity, String> {
    let path = Path::new(binary);
    if path.is_file() {
        return BinaryIdentity::of_file(path).map_err(|e| format!("{binary}: {e}"));
    }
    if let Some((archive, _member)) = binary.rsplit_once(':')
        && Path::new(archive).is_file()
    {
        return BinaryIdentity::of_file(Path::new(archive)).map_err(|e| format!("{archive}: {e}"));
    }
    Err(format!("{binary}: no such file"))
}

fn open(path: &str) -> Result<Project, String> {
    Project::open(Path::new(path)).map_err(|e| format!("{path}: {e}"))
}

/// One `set` argument: a directive, or `@file` with one per line and `#` comments.
fn expand(arg: &str) -> Result<Vec<String>, String> {
    let Some(path) = arg.strip_prefix('@') else {
        return Ok(vec![arg.to_string()]);
    };
    let text = std::fs::read_to_string(path).map_err(|e| format!("@{path}: {e}"))?;
    Ok(text
        .lines()
        .map(|l| l.split_once('#').map_or(l, |(head, _)| head).trim())
        .filter(|l| !l.is_empty())
        .map(String::from)
        .collect())
}

/// Check a directive against the engine's own grammar before it is stored, so a project
/// never holds a directive `decompile --project` would refuse. `bytes <addr> @FILE` is read
/// here and stored as hex; `bookmark` is project-only and has no engine form.
fn checked(directive: &str) -> Result<String, String> {
    let d = directive.trim();
    let (keyword, rest) = d.split_once(char::is_whitespace).unwrap_or((d, ""));
    if keyword == "bookmark" {
        return Ok(d.to_string());
    }
    let d = if keyword == "bytes"
        && let Some((addr, file)) = rest.trim().split_once(char::is_whitespace)
        && let Some(path) = file.trim().strip_prefix('@')
    {
        let bytes = std::fs::read(path).map_err(|e| format!("bytes @{path}: {e}"))?;
        format!(
            "bytes {addr} {}",
            unlace_project::directive::hex_bytes(&bytes)
        )
    } else {
        d.to_string()
    };
    unlace_console::assertsyntax::parse_directive(&d).map_err(|e| format!("{d:?}: {e}"))?;
    Ok(d)
}

fn check_table(table: &str) -> Result<(), String> {
    if unlace_project::schema::TABLES.contains(&table) {
        Ok(())
    } else {
        Err(format!(
            "unknown table {table:?}; one of {}",
            unlace_project::schema::TABLES.join(" ")
        ))
    }
}

/// The lookup of one row by its key: an address for the address-keyed tables, the stored
/// text (`main`, `main::v2`, `struct point`) for the others, `<kind> <target>` for assertions.
fn get_sql(table: &str, key: &str) -> Result<String, String> {
    check_table(table)?;
    let text = |k: &str| format!("'{}'", k.replace('\'', "''"));
    let addr = |k: &str| -> Result<String, String> {
        unlace_project::directive::parse_address(k)
            .map(|a| unlace_project::to_sql_address(a).to_string())
            .map_err(|e| e.to_string())
    };
    Ok(match table {
        "functions" | "data" | "patches" | "bookmarks" => {
            format!("SELECT * FROM {table} WHERE address = {}", addr(key)?)
        }
        "prototypes" => format!("SELECT * FROM prototypes WHERE function = {}", text(key)),
        "types" => format!("SELECT * FROM types WHERE name = {}", text(key)),
        "assertions" => match key.split_once(char::is_whitespace) {
            Some((kind, target)) => format!(
                "SELECT * FROM assertions WHERE kind = {} AND target = {}",
                text(kind),
                text(target.trim())
            ),
            None => format!("SELECT * FROM assertions WHERE kind = {}", text(key)),
        },
        _ => format!("SELECT * FROM {table} WHERE target = {}", text(key)),
    })
}

fn identity_json(identity: &BinaryIdentity) -> Value {
    json!({"sha256": identity.sha256, "path": identity.path, "size": identity.size})
}

fn emit(json: bool, value: Value, text: String) -> i32 {
    let body = if json {
        serde_json::to_string_pretty(&value).unwrap_or_default() + "\n"
    } else {
        text
    };
    crate::output::emit_with_status(&body, 0)
}

/// How a command that returns rows prints them.
#[derive(Clone, Copy)]
enum RowsForm {
    /// A header line and tab-separated rows.
    Text,
    /// One document: `{columns, rows:[{column:value}]}`.
    Document,
    /// One `{column:value}` object per line.
    Lines,
}

/// A row as a JSON object in column order (written by hand, so the key order is the
/// query's whatever `serde_json` features are on).
fn row_object(columns: &[String], row: &[Value]) -> String {
    let fields: Vec<String> = columns
        .iter()
        .zip(row)
        .map(|(c, v)| format!("{}:{}", Value::String(c.clone()), v))
        .collect();
    format!("{{{}}}", fields.join(","))
}

fn emit_rows(form: RowsForm, columns: Vec<String>, rows: Vec<Vec<Value>>) -> i32 {
    let text = match form {
        RowsForm::Lines => rows
            .iter()
            .map(|row| row_object(&columns, row) + "\n")
            .collect(),
        RowsForm::Document => {
            let objects: Vec<String> = rows.iter().map(|row| row_object(&columns, row)).collect();
            format!(
                "{{\"columns\":{},\"rows\":[{}]}}\n",
                Value::from(columns.clone()),
                objects.join(",")
            )
        }
        RowsForm::Text => {
            let mut text = columns.join("\t");
            text.push('\n');
            for row in rows {
                let cells: Vec<String> = row
                    .iter()
                    .map(|v| match v {
                        Value::String(s) => s.clone(),
                        Value::Null => String::new(),
                        other => other.to_string(),
                    })
                    .collect();
                text.push_str(&cells.join("\t"));
                text.push('\n');
            }
            text
        }
    };
    crate::output::emit_with_status(&text, 0)
}

/// `unlace project schema --json`.
fn schema_json() -> Value {
    let tables: Vec<Value> = unlace_project::schema::DESCRIPTION
        .iter()
        .map(|(name, key, description, columns)| {
            let columns: Vec<Value> = columns
                .iter()
                .map(|(c, ty, d)| json!({"name": c, "type": ty, "description": d}))
                .collect();
            json!({"name": name, "key": key, "description": description, "columns": columns})
        })
        .collect();
    json!({"schema_version": unlace_project::schema::CURRENT_VERSION, "tables": tables})
}

fn schema_text() -> String {
    let mut out = format!("schema v{}\n", unlace_project::schema::CURRENT_VERSION);
    for (name, key, description, columns) in unlace_project::schema::DESCRIPTION {
        out.push_str(&format!(
            "\n{name} (key: {}) -- {description}\n",
            key.join(", ")
        ));
        for (c, ty, d) in *columns {
            out.push_str(&format!("  {c} {ty}: {d}\n"));
        }
    }
    out
}

#[cfg(test)]
mod tests;
