//! IDA databases (`.idb`, `.i64`) as a source of knowledge and of bytes.
//!
//! `unlace idb info|list|import` read one with `idb-rs`; [`knowledge`] turns its
//! functions, names, prototypes, local types and comments into `--assert`
//! directives, so a project file, a direct decompile of the database and the
//! `unlace` crate's `from_idb` all reach the engine through the existing
//! `function` / `prototype` / `typedef` / `comment` path. IDA's C spellings
//! (`unsigned __int8`, `_DWORD`, `__cdecl`, `__attribute__((...))`, C++-style
//! tag references) are rewritten into the grammar the engine parses; a
//! prototype with a register-located (`__usercall`) signature is left out.

use std::collections::{BTreeMap, BTreeSet};
use std::path::{Path, PathBuf};

use idb_rs::database::{CommentKind, Database, Function, Load};
use serde_json::{Value, json};
use unlace_project::{BinaryIdentity, Project};

use crate::args::take_value;

#[cfg(test)]
mod tests;

const USAGE: &str = "usage: unlace idb <info|list|import> <db.i64|db.idb> ...\n\
\n\
  unlace idb info <db> [--json]\n\
      processor, the SLEIGH target it maps to, bitness, input file hashes, segments, counts\n\
  unlace idb list <db> [functions|segments|names|comments|types|entries] [--json|--jsonl]\n\
      one kind of record (functions by default)\n\
  unlace idb import <db> [--project FILE | --binary BIN] [--no-types] [--no-comments] [--force] [--json]\n\
      store the database's functions, names, prototypes, local types and comments in a\n\
      project file: FILE (existing), else <BIN>.unlace bound to BIN, else <db>.unlace bound\n\
      to the database itself (for 'unlace decompile <db> --project <db>.unlace')\n\
\n\
  decompile, decompile-all and functions also take a database in place of a binary.\n\
\n\
  --json roots: info {path,processor,target,address_bits,bitness,big_endian,version,file_format,\n\
  compiler,input,image_base,segments,counts,errors}; list {kind,records}; import {project,binary,\n\
  stored,counts,skipped}. --jsonl prints one record per line.";

/// Read the database at `path`, with its segment bytes when `memory` is set.
pub(crate) fn open(path: &str, memory: bool) -> Result<Database, String> {
    Database::open(path, Load { memory }).map_err(|e| format!("{path}: {e:#}"))
}

/// The SLEIGH language id for a database's processor, or `None` when unlace has no
/// mapping for it (pass `--target`).
pub(crate) fn sleigh_target(processor: &str, bitness: u32, big_endian: bool) -> Option<String> {
    let endian = if big_endian { "BE" } else { "LE" };
    let wide = bitness == 64;
    let id = match processor.to_ascii_lowercase().as_str() {
        "metapc" | "80386p" | "80386r" | "80486p" | "80586p" | "80686p" | "p2" | "p3" | "p4" => {
            match bitness {
                64 => "x86:LE:64:default".to_string(),
                16 => "x86:LE:16:Real Mode".to_string(),
                _ => "x86:LE:32:default".to_string(),
            }
        }
        "arm" | "armb" | "arml" => {
            let endian = if processor.eq_ignore_ascii_case("armb") {
                "BE"
            } else {
                endian
            };
            if wide {
                format!("AARCH64:{endian}:64:v8A")
            } else {
                format!("ARM:{endian}:32:v8")
            }
        }
        "mipsl" | "mipsr" | "mipsrl" | "r5900l" | "psp" => {
            format!("MIPS:LE:{}:default", if wide { 64 } else { 32 })
        }
        "mipsb" | "mipsrb" | "r5900b" => format!("MIPS:BE:{}:default", if wide { 64 } else { 32 }),
        "ppc" | "ppcb" => format!("PowerPC:BE:{}:default", if wide { 64 } else { 32 }),
        "ppcl" => format!("PowerPC:LE:{}:default", if wide { 64 } else { 32 }),
        "sparcb" | "sparc" => format!("sparc:BE:{}:default", if wide { 64 } else { 32 }),
        "riscv" => {
            if wide {
                "RISCV:LE:64:RV64GC".to_string()
            } else {
                "RISCV:LE:32:RV32GC".to_string()
            }
        }
        "68k" | "68000" | "68020" | "68030" | "68040" | "68330" | "coldfire" => {
            "68000:BE:32:default".to_string()
        }
        "8051" => "8051:BE:16:default".to_string(),
        "avr" => "avr8:LE:16:default".to_string(),
        "tricore" => "tricore:LE:32:default".to_string(),
        "sh4" | "sh3" => "SuperH4:LE:32:default".to_string(),
        "sh4b" | "sh3b" => "SuperH4:BE:32:default".to_string(),
        "hppa" => "pa-risc:BE:32:default".to_string(),
        "z80" => "z80:LE:16:default".to_string(),
        "m6502" | "m65c02" | "6502" => "6502:LE:16:default".to_string(),
        "msp430" => "TI_MSP430:LE:16:default".to_string(),
        "xtensa" => format!("Xtensa:{endian}:32:default"),
        "v850" => "V850:LE:32:default".to_string(),
        "8085" => "8085:LE:16:default".to_string(),
        _ => return None,
    };
    Some(id)
}

/// What to take from a database.
#[derive(Clone, Copy, Debug)]
pub(crate) struct Selection {
    /// Local types as `typedef` directives.
    pub(crate) types: bool,
    /// Function comments and the regular and repeatable comments inside functions.
    pub(crate) comments: bool,
}

/// A database's knowledge as directives.
#[derive(Clone, Debug, Default)]
pub(crate) struct Knowledge {
    /// `typedef`s first, then `function`, `prototype` and `comment` directives.
    pub(crate) directives: Vec<String>,
    /// Entries of functions IDA marked no-return.
    pub(crate) noreturn: Vec<u64>,
    /// `(what, why)` for each record left out.
    pub(crate) skipped: Vec<(String, String)>,
    pub(crate) counts: BTreeMap<&'static str, usize>,
}

/// Turn a database into directives for `target` (a SLEIGH id; the calling
/// conventions `__stdcall`/`__fastcall`/`__thiscall` are kept only for 32-bit x86).
pub(crate) fn knowledge(db: &Database, target: Option<&str>, selection: Selection) -> Knowledge {
    let keep_cc = target.is_some_and(|t| t.starts_with("x86:LE:32"));
    let tags = Tags::of(db);
    let mut k = Knowledge::default();
    if selection.types {
        for ty in &db.types {
            let decl = tags.qualify(&sanitize_c(&ty.declaration, keep_cc));
            let decl = decl.trim().trim_end_matches(';').trim();
            if decl.is_empty() {
                continue;
            }
            k.directives.push(format!("typedef {decl};"));
            bump(&mut k.counts, "types");
        }
    }
    for f in &db.functions {
        let name = Some(f.name.as_str()).filter(|n| f.named && usable_name(n));
        let end = (f.tails.is_empty() && f.end > f.start).then_some(f.end);
        k.directives
            .push(unlace_project::directive::function_directive(
                f.start, end, name,
            ));
        bump(&mut k.counts, "functions");
        if f.no_return {
            k.noreturn.push(f.start);
            bump(&mut k.counts, "noreturn");
        }
    }
    for f in &db.functions {
        match prototype(f, keep_cc, &tags) {
            Ok(Some(decl)) => {
                k.directives
                    .push(format!("prototype {:#x} {decl}", f.start));
                bump(&mut k.counts, "prototypes");
            }
            Ok(None) => {}
            Err(why) => k
                .skipped
                .push((format!("prototype {:#x}", f.start), why.to_string())),
        }
    }
    if selection.comments {
        for (address, text) in comments(db) {
            k.directives.push(format!("comment {address:#x} {text}"));
            bump(&mut k.counts, "comments");
        }
    }
    k
}

fn bump(counts: &mut BTreeMap<&'static str, usize>, what: &'static str) {
    *counts.entry(what).or_insert(0) += 1;
}

/// A name the `function START=NAME` form carries whole.
fn usable_name(name: &str) -> bool {
    !name.is_empty() && !name.contains(|c: char| c.is_whitespace() || c == '#')
}

/// The function's prototype in the engine's grammar, named by a C identifier.
fn prototype(f: &Function, keep_cc: bool, tags: &Tags) -> Result<Option<String>, &'static str> {
    let Some(decl) = &f.prototype else {
        return Ok(None);
    };
    if decl.contains("__usercall") || decl.contains("__userpurge") || decl.contains("@<") {
        return Err("register-located arguments (__usercall)");
    }
    let mut decl = tags.qualify(&sanitize_c(decl, keep_cc));
    let ident = c_identifier(&f.name);
    if ident != f.name
        && let Some(at) = decl.find(&format!("{}(", f.name))
    {
        decl.replace_range(at..at + f.name.len(), &ident);
    }
    Ok(Some(decl.trim().trim_end_matches(';').trim().to_string()))
}

/// `name` with every character C does not allow in an identifier replaced by `_`.
pub(crate) fn c_identifier(name: &str) -> String {
    let mut out: String = name
        .chars()
        .map(|c| {
            if c.is_ascii_alphanumeric() || c == '_' {
                c
            } else {
                '_'
            }
        })
        .collect();
    if out.is_empty() || out.starts_with(|c: char| c.is_ascii_digit()) {
        out.insert(0, '_');
    }
    out
}

/// The comments that land on code: each function's own comment at its entry, and the
/// regular and repeatable comments at addresses inside a function, one line per address.
/// A comment that is a single identifier is left out (see [`is_identifier`]).
fn comments(db: &Database) -> Vec<(u64, String)> {
    let mut chunks: Vec<(u64, u64)> = Vec::new();
    for f in &db.functions {
        chunks.push((f.start, f.end));
        chunks.extend(f.tails.iter().copied());
    }
    chunks.sort_unstable();
    let inside = |address: u64| {
        let i = chunks.partition_point(|c| c.0 <= address);
        i > 0 && address < chunks[i - 1].1
    };
    let mut by_address: BTreeMap<u64, Vec<String>> = BTreeMap::new();
    for f in &db.functions {
        for text in [&f.comment, &f.repeatable_comment].into_iter().flatten() {
            by_address.entry(f.start).or_default().push(text.clone());
        }
    }
    for c in &db.comments {
        if matches!(c.kind, CommentKind::Regular | CommentKind::Repeatable)
            && inside(c.address)
            && !is_identifier(&c.text)
        {
            by_address
                .entry(c.address)
                .or_default()
                .push(c.text.clone());
        }
    }
    by_address
        .into_iter()
        .filter_map(|(address, texts)| {
            let mut seen = BTreeSet::new();
            let text = texts
                .iter()
                .map(|t| t.split_whitespace().collect::<Vec<_>>().join(" "))
                .filter(|t| !t.is_empty() && seen.insert(t.clone()))
                .collect::<Vec<_>>()
                .join("; ");
            (!text.is_empty()).then_some((address, text))
        })
        .collect()
}

/// A comment that is one C identifier: the argument name IDA writes beside each
/// instruction that sets up a typed call, not something a person wrote.
fn is_identifier(text: &str) -> bool {
    let text = text.trim();
    !text.is_empty()
        && !text.starts_with(|c: char| c.is_ascii_digit())
        && text.chars().all(|c| c.is_ascii_alphanumeric() || c == '_')
}

/// The tag names of the database's local `struct`/`union`/`enum` types that no typedef
/// also names: IDA prints a reference to one C++-style, without its keyword.
struct Tags {
    keyword: BTreeMap<String, &'static str>,
}

impl Tags {
    fn of(db: &Database) -> Self {
        let mut keyword = BTreeMap::new();
        let mut typedefs = BTreeSet::new();
        for ty in &db.types {
            let decl = ty.declaration.trim_start();
            let kind = ["struct", "union", "enum"]
                .into_iter()
                .find(|k| decl.starts_with(&format!("{k} ")));
            match kind {
                Some(k) => {
                    keyword.insert(ty.name.clone(), k);
                }
                None => {
                    typedefs.insert(ty.name.clone());
                }
            }
        }
        keyword.retain(|name, _| !typedefs.contains(name));
        Self { keyword }
    }

    /// Put the keyword in front of a bare tag used as a type (followed by a declarator,
    /// a `*` or a `&`, not by `;`, `,`, `)` or `[`).
    fn qualify(&self, text: &str) -> String {
        if self.keyword.is_empty() {
            return text.to_string();
        }
        let tokens = tokenize(text);
        let mut out = String::with_capacity(text.len() + 16);
        let mut prev_word: Option<&str> = None;
        for (i, tok) in tokens.iter().enumerate() {
            if let Token::Word(w) = tok
                && let Some(k) = self.keyword.get(*w)
                && !matches!(prev_word, Some("struct" | "union" | "enum"))
                && used_as_type(&tokens[i + 1..])
            {
                out.push_str(k);
                out.push(' ');
            }
            match tok {
                Token::Word(w) => {
                    prev_word = Some(*w);
                    out.push_str(w);
                }
                Token::Other(s) => {
                    if !s.trim().is_empty() {
                        prev_word = None;
                    }
                    out.push_str(s);
                }
            }
        }
        out
    }
}

fn used_as_type(rest: &[Token<'_>]) -> bool {
    for tok in rest {
        match tok {
            Token::Word(_) => return true,
            Token::Other(s) => {
                let s = s.trim_start();
                if s.is_empty() {
                    continue;
                }
                return s.starts_with('*') || s.starts_with('&') || s.starts_with('(');
            }
        }
    }
    false
}

#[derive(Clone, Copy, Debug, PartialEq)]
enum Token<'a> {
    Word(&'a str),
    Other(&'a str),
}

fn tokenize(text: &str) -> Vec<Token<'_>> {
    let mut out = Vec::new();
    let mut start = 0;
    let mut word = None::<bool>;
    for (i, c) in text.char_indices() {
        let is_word = c.is_ascii_alphanumeric() || c == '_' || c == '$';
        match word {
            Some(w) if w == is_word => {}
            Some(w) => {
                let piece = &text[start..i];
                out.push(if w {
                    Token::Word(piece)
                } else {
                    Token::Other(piece)
                });
                start = i;
                word = Some(is_word);
            }
            None => word = Some(is_word),
        }
    }
    if let Some(w) = word {
        let piece = &text[start..];
        out.push(if w {
            Token::Word(piece)
        } else {
            Token::Other(piece)
        });
    }
    out
}

/// IDA's C spellings in the engine's: sized integers and `_DWORD`-style placeholders
/// become `int1`..`uint8`, attributes and IDA-only qualifiers are dropped, and the
/// calling conventions too unless `keep_cc`.
pub(crate) fn sanitize_c(text: &str, keep_cc: bool) -> String {
    let text = strip_balanced(
        &strip_balanced(text, "__attribute__", '(', ')'),
        "__spoils",
        '<',
        '>',
    );
    let tokens = tokenize(&text);
    let mut out = String::with_capacity(text.len());
    let mut i = 0;
    while i < tokens.len() {
        let tok = tokens[i];
        let Token::Word(w) = tok else {
            if let Token::Other(s) = tok {
                out.push_str(s);
            }
            i += 1;
            continue;
        };
        if (w == "unsigned" || w == "signed")
            && let Some((next, j)) = next_word(&tokens, i + 1)
            && let Some(bytes) = sized_int(next)
        {
            let prefix = if w == "unsigned" { "uint" } else { "int" };
            out.push_str(&format!("{prefix}{bytes}"));
            i = j + 1;
            continue;
        }
        let replacement = match w {
            "__noreturn" | "__cdecl" | "__hidden" | "__struct_ptr" | "__cppobj" | "__unaligned"
            | "__ptr32" | "__ptr64" | "__near" | "__far" | "__huge" | "__pascal" | "__high"
            | "__return_ptr" | "__restrict" | "__shifted" => Some(""),
            "__fastcall" | "__stdcall" | "__thiscall" if !keep_cc => Some(""),
            "_BYTE" => Some("uint1"),
            "_WORD" => Some("uint2"),
            "_DWORD" => Some("uint4"),
            "_QWORD" => Some("uint8"),
            "_BOOL1" => Some("bool"),
            "_BOOL2" => Some("int2"),
            "_BOOL4" => Some("int4"),
            "_BOOL8" => Some("int8"),
            "_UNKNOWN" => Some("xunknown1"),
            _ => None,
        };
        match (replacement, sized_int(w)) {
            (Some(r), _) => out.push_str(r),
            (None, Some(bytes)) => out.push_str(&format!("int{bytes}")),
            (None, None) => out.push_str(w),
        }
        i += 1;
    }
    let mut squeezed = String::with_capacity(out.len());
    for c in out.chars() {
        if c == ' ' && (squeezed.ends_with(' ') || squeezed.ends_with('(')) {
            continue;
        }
        squeezed.push(c);
    }
    squeezed
        .replace(" )", ")")
        .replace(" ,", ",")
        .trim()
        .to_string()
}

fn next_word<'a>(tokens: &[Token<'a>], from: usize) -> Option<(&'a str, usize)> {
    for (j, tok) in tokens.iter().enumerate().skip(from) {
        match tok {
            Token::Word(w) => return Some((*w, j)),
            Token::Other(s) if s.trim().is_empty() => {}
            Token::Other(_) => return None,
        }
    }
    None
}

fn sized_int(word: &str) -> Option<u32> {
    match word {
        "__int8" => Some(1),
        "__int16" => Some(2),
        "__int32" => Some(4),
        "__int64" => Some(8),
        _ => None,
    }
}

/// Remove every `keyword<open>...<close>` (nested brackets balanced) from `text`.
fn strip_balanced(text: &str, keyword: &str, open: char, close: char) -> String {
    let mut out = String::with_capacity(text.len());
    let mut rest = text;
    while let Some(at) = rest.find(keyword) {
        out.push_str(&rest[..at]);
        let after = &rest[at + keyword.len()..];
        let trimmed = after.trim_start();
        if !trimmed.starts_with(open) {
            out.push_str(keyword);
            rest = after;
            continue;
        }
        let mut depth = 0usize;
        let mut end = trimmed.len();
        for (i, c) in trimmed.char_indices() {
            if c == open {
                depth += 1;
            } else if c == close {
                depth -= 1;
                if depth == 0 {
                    end = i + c.len_utf8();
                    break;
                }
            }
        }
        rest = &trimmed[end..];
    }
    out.push_str(rest);
    out
}

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
    let mut types = true;
    let mut comments = true;
    let mut project: Option<String> = None;
    let mut binary: Option<String> = None;
    let mut positional: Vec<String> = Vec::new();
    let mut i = 1;
    while i < argv.len() {
        let a = argv[i].as_str();
        match a {
            "--json" => json = true,
            "--jsonl" => jsonl = true,
            "--force" => force = true,
            "--no-types" => types = false,
            "--no-comments" => comments = false,
            "--project" => project = Some(take_value(argv, &mut i, a)?),
            "--binary" => binary = Some(take_value(argv, &mut i, a)?),
            s if s.starts_with("--") => return Err(format!("unknown option {s}")),
            _ => positional.push(a.to_string()),
        }
        i += 1;
    }
    if json && jsonl {
        return Err("--json and --jsonl are exclusive".into());
    }
    let Some(path) = positional.first().cloned() else {
        return Err(format!("idb {verb} needs <db.i64|db.idb>\n{USAGE}"));
    };
    match verb.as_str() {
        "info" => {
            if positional.len() > 1 {
                return Err(format!("unexpected argument {:?}", positional[1]));
            }
            let db = open(&path, false)?;
            let value = info_json(&path, &db);
            let text = info_text(&value);
            Ok(emit(json || jsonl, value, text))
        }
        "list" => {
            let kind = positional.get(1).map_or("functions", String::as_str);
            if positional.len() > 2 {
                return Err(format!("unexpected argument {:?}", positional[2]));
            }
            let db = open(&path, false)?;
            let records = records(&db, kind)?;
            if jsonl {
                let text: String = records.iter().map(|r| r.to_string() + "\n").collect();
                return Ok(crate::output::emit_with_status(&text, 0));
            }
            let text: String = records.iter().map(|r| record_line(r) + "\n").collect();
            Ok(emit(json, json!({"kind": kind, "records": records}), text))
        }
        "import" => {
            if positional.len() > 1 {
                return Err(format!("unexpected argument {:?}", positional[1]));
            }
            if project.is_some() && binary.is_some() {
                return Err("--project and --binary are exclusive".into());
            }
            let db = open(&path, false)?;
            let selection = Selection { types, comments };
            let outcome = import(
                &path,
                &db,
                project.as_deref(),
                binary.as_deref(),
                selection,
                force,
            )?;
            let text = format!(
                "stored {} directives in {} ({} skipped)\n",
                outcome["stored"],
                outcome["project"].as_str().unwrap_or_default(),
                outcome["skipped_count"]
            );
            Ok(emit(json || jsonl, outcome, text))
        }
        other => Err(format!("unknown idb command {other:?}\n{USAGE}")),
    }
}

fn emit(json: bool, value: Value, text: String) -> i32 {
    let body = if json {
        serde_json::to_string_pretty(&value).unwrap_or_default() + "\n"
    } else {
        text
    };
    crate::output::emit_with_status(&body, 0)
}

fn hex(address: u64) -> String {
    format!("{address:#x}")
}

fn info_json(path: &str, db: &Database) -> Value {
    let info = &db.info;
    let count = |pred: fn(&Function) -> bool| db.functions.iter().filter(|f| pred(f)).count();
    json!({
        "path": path,
        "processor": info.processor,
        "target": sleigh_target(&info.processor, info.bitness, info.big_endian),
        "address_bits": info.address_bits,
        "bitness": info.bitness,
        "big_endian": info.big_endian,
        "version": info.version,
        "file_format": info.file_format,
        "compiler": info.compiler,
        "input": {
            "file": info.input_file,
            "size": info.input_size,
            "crc32": info.input_crc32.map(|c| format!("{c:08x}")),
            "md5": info.input_md5,
            "sha256": info.input_sha256,
        },
        "image_base": info.image_base.map(hex),
        "segments": db.segments.iter().map(segment_json).collect::<Vec<_>>(),
        "counts": {
            "functions": db.functions.len(),
            "named": count(|f| f.named),
            "typed": count(|f| f.prototype.is_some()),
            "noreturn": count(|f| f.no_return),
            "library": count(|f| f.library),
            "names": db.names.len(),
            "comments": db.comments.len(),
            "types": db.types.len(),
            "entry_points": db.entry_points.len(),
        },
        "errors": db.errors,
    })
}

fn info_text(v: &Value) -> String {
    let s = |key: &str| match &v[key] {
        Value::String(s) => s.clone(),
        Value::Null => "-".to_string(),
        other => other.to_string(),
    };
    let mut out = format!(
        "{}: {} {}-bit{} ({}), target {}\ninput {} sha256 {}\n",
        s("path"),
        s("processor"),
        s("bitness"),
        if v["big_endian"] == true {
            " big-endian"
        } else {
            ""
        },
        s("file_format"),
        s("target"),
        v["input"]["file"].as_str().unwrap_or("-"),
        v["input"]["sha256"].as_str().unwrap_or("-"),
    );
    if let Some(counts) = v["counts"].as_object() {
        let line: Vec<String> = counts.iter().map(|(k, n)| format!("{k} {n}")).collect();
        out.push_str(&line.join(", "));
        out.push('\n');
    }
    for seg in v["segments"].as_array().into_iter().flatten() {
        out.push_str(&record_line(seg));
        out.push('\n');
    }
    out
}

fn segment_json(s: &idb_rs::database::Segment) -> Value {
    json!({
        "start": hex(s.start),
        "end": hex(s.end),
        "name": s.name,
        "class": s.class,
        "perms": s.perms.map(|p| format!(
            "{}{}{}",
            if p.read { 'r' } else { '-' },
            if p.write { 'w' } else { '-' },
            if p.execute { 'x' } else { '-' },
        )),
        "bitness": s.bitness,
        "kind": s.kind,
    })
}

fn records(db: &Database, kind: &str) -> Result<Vec<Value>, String> {
    Ok(match kind {
        "functions" => db
            .functions
            .iter()
            .map(|f| {
                json!({
                    "start": hex(f.start),
                    "end": hex(f.end),
                    "name": f.name,
                    "named": f.named,
                    "noreturn": f.no_return,
                    "library": f.library,
                    "thunk": f.thunk,
                    "prototype": f.prototype,
                    "comment": f.comment,
                    "tails": f.tails.iter().map(|(s, e)| json!([hex(*s), hex(*e)])).collect::<Vec<_>>(),
                })
            })
            .collect(),
        "segments" => db.segments.iter().map(segment_json).collect(),
        "names" => db
            .names
            .iter()
            .map(|n| json!({"address": hex(n.address), "name": n.name}))
            .collect(),
        "comments" => db
            .comments
            .iter()
            .map(|c| {
                let kind = match c.kind {
                    CommentKind::Regular => "regular",
                    CommentKind::Repeatable => "repeatable",
                    CommentKind::Anterior => "anterior",
                    CommentKind::Posterior => "posterior",
                };
                json!({"address": hex(c.address), "kind": kind, "text": c.text})
            })
            .collect(),
        "types" => db
            .types
            .iter()
            .map(|t| json!({"ordinal": t.ordinal, "name": t.name, "declaration": t.declaration}))
            .collect(),
        "entries" => db
            .entry_points
            .iter()
            .map(|e| json!({"address": hex(e.address), "name": e.name, "forwarded": e.forwarded}))
            .collect(),
        other => {
            return Err(format!(
                "unknown record kind {other:?}; one of functions segments names comments types entries"
            ));
        }
    })
}

/// A record as one tab-separated line of its values.
fn record_line(record: &Value) -> String {
    let Some(map) = record.as_object() else {
        return record.to_string();
    };
    map.values()
        .map(|v| match v {
            Value::String(s) => s.replace(['\t', '\n'], " "),
            Value::Null => "-".to_string(),
            other => other.to_string(),
        })
        .collect::<Vec<_>>()
        .join("\t")
}

/// Where `import` stores the knowledge, created when it does not exist yet.
fn project_for(
    db_path: &str,
    db: &Database,
    project: Option<&str>,
    binary: Option<&str>,
    force: bool,
) -> Result<(PathBuf, Project, BinaryIdentity), String> {
    let identity_of =
        |path: &str| BinaryIdentity::of_file(Path::new(path)).map_err(|e| format!("{path}: {e}"));
    let check_input = |identity: &BinaryIdentity, what: &str| -> Result<(), String> {
        match &db.info.input_sha256 {
            Some(sha) if !force && *sha != identity.sha256 => Err(format!(
                "{db_path} was made from a file with SHA-256 {sha}, but {what} is {}; \
                 pass --force to import anyway",
                identity.sha256
            )),
            _ => Ok(()),
        }
    };
    if let Some(project) = project {
        let path = PathBuf::from(project);
        let p = Project::open(&path).map_err(|e| format!("{project}: {e}"))?;
        let identity = p.binary().map_err(|e| format!("{project}: {e}"))?;
        let db_identity = identity_of(db_path)?;
        if identity.sha256 != db_identity.sha256 {
            check_input(&identity, &format!("the binary {project} is bound to"))?;
        }
        return Ok((path, p, identity));
    }
    let (bound, identity) = match binary {
        Some(binary) => {
            let identity = identity_of(binary)?;
            check_input(&identity, binary)?;
            (binary, identity)
        }
        None => (db_path, identity_of(db_path)?),
    };
    let mut name = Path::new(bound)
        .file_name()
        .map(|n| n.to_os_string())
        .unwrap_or_default();
    name.push(".unlace");
    let path = Path::new(bound).with_file_name(name);
    let p = if path.exists() {
        let p = Project::open(&path).map_err(|e| format!("{}: {e}", path.display()))?;
        p.check_binary(&identity)
            .map_err(|e| format!("{}: {e}", path.display()))?;
        p
    } else {
        Project::create(&path, &identity, false).map_err(|e| format!("{}: {e}", path.display()))?
    };
    Ok((path, p, identity))
}

fn import(
    db_path: &str,
    db: &Database,
    project: Option<&str>,
    binary: Option<&str>,
    selection: Selection,
    force: bool,
) -> Result<Value, String> {
    let (path, mut p, identity) = project_for(db_path, db, project, binary, force)?;
    let target = sleigh_target(&db.info.processor, db.info.bitness, db.info.big_endian);
    let k = knowledge(db, target.as_deref(), selection);
    let mut skipped: Vec<Value> = k
        .skipped
        .iter()
        .map(|(what, why)| json!({"record": what, "reason": why}))
        .collect();
    let mut stored = Vec::with_capacity(k.directives.len());
    for d in &k.directives {
        match unlace_console::assertsyntax::parse_directive(d) {
            Ok(_) => stored.push(d.as_str()),
            Err(e) => skipped.push(json!({"record": d, "reason": e})),
        }
    }
    let count = p
        .set_all(stored.iter().copied())
        .map_err(|e| format!("{}: {e}", path.display()))?;
    Ok(json!({
        "project": path.to_string_lossy(),
        "binary": {"sha256": identity.sha256, "path": identity.path, "size": identity.size},
        "target": target,
        "stored": count,
        "counts": k.counts,
        "noreturn": k.noreturn.iter().copied().map(hex).collect::<Vec<_>>(),
        "skipped_count": skipped.len(),
        "skipped": skipped,
    }))
}
