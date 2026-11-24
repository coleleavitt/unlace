//! IDA databases (`.idb`, `.i64`) as a source of knowledge and of bytes.
//!
//! `unlace idb info|list|import` read one with `unlace-idb`, whose type strings unlace's TIL
//! reader (`unlace_til`) renders as C; [`knowledge`] turns its
//! functions, names, prototypes, local types and comments into `--assert`
//! directives, so a project file, a direct decompile of the database and the
//! `unlace` crate's `from_idb` all reach the engine through the existing
//! `function` / `prototype` / `typedef` / `comment` path. A type C cannot spell
//! (a register-located `__usercall` signature) is left out.

use std::collections::{BTreeMap, BTreeSet};
use std::path::{Path, PathBuf};

use serde_json::{Value, json};
use unlace_analysis::protos::til;
use unlace_idb::{CommentKind, Database, Function, Load, LocalType};
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

/// Does the file at `path` start like an IDA database?
pub(crate) fn is_database_file(path: &str) -> bool {
    use std::io::Read;
    let mut magic = [0u8; 4];
    std::fs::File::open(path)
        .and_then(|mut f| f.read_exact(&mut magic))
        .is_ok()
        && Database::is_database(&magic)
}

/// The database at `path` with its bytes, read once per process: a direct load parses it
/// for its arguments, its name lookups and its segments.
fn cached(path: &str) -> Result<std::sync::Arc<Database>, String> {
    use std::sync::{Arc, Mutex, OnceLock};
    static CACHE: OnceLock<Mutex<BTreeMap<String, Arc<Database>>>> = OnceLock::new();
    let cache = CACHE.get_or_init(|| Mutex::new(BTreeMap::new()));
    if let Some(db) = cache.lock().ok().and_then(|c| c.get(path).cloned()) {
        return Ok(db);
    }
    let db = Arc::new(open(path, true)?);
    if let Ok(mut c) = cache.lock() {
        c.insert(path.to_string(), Arc::clone(&db));
    }
    Ok(db)
}

/// The entry of the function called `name` (its IDA name, or that name spelled as a C
/// identifier).
fn find_function(db: &Database, name: &str) -> Option<u64> {
    db.functions
        .iter()
        .find(|f| f.name == name)
        .or_else(|| db.functions.iter().find(|f| c_identifier(&f.name) == name))
        .map(|f| f.start)
}

/// `decompile <db> <name>`: the function's entry as the `0x` address a raw load selects by.
pub(crate) fn function_address(path: &str, name: &str) -> Result<String, String> {
    let db = cached(path)?;
    find_function(&db, name)
        .map(hex)
        .ok_or_else(|| format!("{path}: the database has no function named {name:?}"))
}

/// Rewrite the arguments of a command given a database in place of a binary into a raw
/// load of its segments: `--raw-image --target --base`, `--entry` per function (not for
/// `decompile`, which selects one), `--functions` names as `--addr`es, and the knowledge
/// as `--assert @FILE` (a temporary file pushed onto `temp`). Arguments that already say
/// `--raw-image` (a `--jobs` worker's) are left alone.
pub(crate) fn prepare_args(
    sub: &str,
    args: &mut Vec<String>,
    temp: &mut Vec<PathBuf>,
) -> Result<(), String> {
    let Some(path) = args.first().cloned() else {
        return Ok(());
    };
    if args.iter().any(|a| a == "--raw-image") {
        return Ok(());
    }
    let db = cached(&path)?;
    let value = |args: &[String], flag: &str| {
        args.iter()
            .position(|a| a == flag)
            .and_then(|i| args.get(i + 1))
            .cloned()
    };
    let target = match value(args.as_slice(), "--target") {
        Some(target) => target,
        None => {
            let target = sleigh_target(&db.info.processor, db.info.bitness, db.info.big_endian)
                .ok_or_else(|| {
                    format!(
                        "{path}: unlace has no SLEIGH target for IDA processor {:?}; pass --target",
                        db.info.processor
                    )
                })?;
            args.extend(["--target".to_string(), target.clone()]);
            target
        }
    };
    let base = db
        .memory
        .first()
        .map(|run| run.start)
        .or_else(|| db.segments.first().map(|s| s.start))
        .ok_or_else(|| format!("{path}: the database maps no segment"))?;
    args.push("--raw-image".to_string());
    args.extend(["--base".to_string(), hex(base)]);
    if let Some(i) = args.iter().position(|a| a == "--functions")
        && let Some(names) = args.get(i + 1).cloned()
    {
        args.drain(i..i + 2);
        for name in names.split(',').map(str::trim).filter(|n| !n.is_empty()) {
            let address = find_function(&db, name)
                .ok_or_else(|| format!("{path}: the database has no function named {name:?}"))?;
            args.extend(["--addr".to_string(), hex(address)]);
        }
    }
    let seeded = args.iter().any(|a| a == "--entry" || a == "--addr");
    if sub != "decompile" && !seeded {
        for f in &db.functions {
            args.extend(["--entry".to_string(), hex(f.start)]);
        }
    }
    let selection = Selection {
        types: true,
        comments: false,
    };
    let k = knowledge(&db, selection);
    if !k.directives.is_empty() {
        let stem = Path::new(&path)
            .file_name()
            .map_or("db".into(), |n| n.to_string_lossy().to_string());
        let file =
            std::env::temp_dir().join(format!("kuna-idb-{}-{stem}.assert", std::process::id()));
        let mut text = k.directives.join("\n");
        text.push('\n');
        std::fs::write(&file, text).map_err(|e| format!("{}: {e}", file.display()))?;
        args.extend(["--assert".to_string(), format!("@{}", file.display())]);
        temp.push(file);
    }
    eprintln!(
        "[kuna idb] {path}: {} {}-bit as {target}, {} segments, {} functions, {} directives",
        db.info.processor,
        db.info.bitness,
        db.memory.len(),
        db.functions.len(),
        k.directives.len()
    );
    Ok(())
}

/// What a raw load of a database maps and marks: its segments as `(address, bytes,
/// section flags)` runs, and the entries of the functions IDA marked no-return.
pub(crate) struct RawLoad {
    pub(crate) runs: Vec<(u64, Vec<u8>, u32)>,
    pub(crate) noreturn: Vec<u64>,
}

/// The raw load of the database at `path`, or `None` when it is not a database.
pub(crate) fn raw_load(path: &str) -> Result<Option<RawLoad>, String> {
    if !is_database_file(path) {
        return Ok(None);
    }
    let db = cached(path)?;
    let runs = db
        .memory
        .iter()
        .map(|run| {
            (
                run.start,
                run.bytes.clone(),
                crate::embed::segment_flags(run.perms.execute, run.perms.write),
            )
        })
        .collect();
    let noreturn = db
        .functions
        .iter()
        .filter(|f| f.no_return)
        .map(|f| f.start)
        .collect();
    Ok(Some(RawLoad { runs, noreturn }))
}

/// Read the database at `path`, with its segment bytes when `memory` is set.
pub(crate) fn open(path: &str, memory: bool) -> Result<Database, String> {
    let mut db = Database::open(path, Load { memory }).map_err(|e| format!("{path}: {e}"))?;
    render_types(&mut db);
    Ok(db)
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
    /// `typedef`s first, then `function` (each with its `noreturn`), `prototype` and
    /// `comment` directives.
    pub(crate) directives: Vec<String>,
    /// Entries of functions IDA marked no-return.
    pub(crate) noreturn: Vec<u64>,
    /// `(what, why)` for each record left out.
    pub(crate) skipped: Vec<(String, String)>,
    pub(crate) counts: BTreeMap<&'static str, usize>,
}

/// Decode the database's type strings with unlace's TIL reader
/// (`unlace_analysis::protos::til`): the local types from its type library section,
/// and each function's prototype, named by its C identifier.
fn render_types(db: &mut Database) {
    let ptr_size = u8::try_from(db.info.bitness / 8).unwrap_or(8);
    let til = db
        .til
        .as_deref()
        .and_then(|bytes| til::Til::parse(bytes).ok())
        .unwrap_or_else(|| til::Til {
            header: til::Header {
                format: 0x12,
                flags: 0,
                title: String::new(),
                compiler: 0,
                size_int: db.info.size_int,
                size_bool: db.info.size_bool,
                size_enum: db.info.size_enum,
                size_long_double: 0,
                ptr_size: 0,
            },
            symbols: Vec::new(),
            types: Vec::new(),
            aliases: BTreeMap::new(),
        });
    db.types = til::c_declarations(&til, ptr_size)
        .into_iter()
        .map(|(ordinal, name, declaration)| LocalType {
            ordinal,
            name,
            declaration,
        })
        .collect();
    for f in &mut db.functions {
        if let Some(info) = &f.type_info {
            f.prototype = til::declare_type_string(
                &til,
                &info.type_bytes,
                &info.fields,
                &c_identifier(&f.name),
                ptr_size,
            );
        }
    }
}

fn bump(counts: &mut BTreeMap<&'static str, usize>, what: &'static str) {
    *counts.entry(what).or_insert(0) += 1;
}

/// Turn a database into directives: its local types, functions (entries, extents,
/// names), prototypes and, when selected, comments.
pub(crate) fn knowledge(db: &Database, selection: Selection) -> Knowledge {
    let mut k = Knowledge::default();
    if selection.types {
        for ty in &db.types {
            let decl = ty.declaration.trim().trim_end_matches(';').trim();
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
            k.directives.push(format!("noreturn {:#x}", f.start));
            k.noreturn.push(f.start);
            bump(&mut k.counts, "noreturn");
        }
    }
    for f in &db.functions {
        match (&f.prototype, &f.type_info) {
            (Some(decl), _) => {
                let decl = decl.trim().trim_end_matches(';').trim();
                k.directives.push(format!("prototype {:#x} {decl}", f.start));
                bump(&mut k.counts, "prototypes");
            }
            (None, Some(_)) => k.skipped.push((
                format!("prototype {:#x}", f.start),
                "a type C cannot spell here (register-located arguments, a type the database does not define)".to_string(),
            )),
            (None, None) => {}
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

/// A name the `function START=NAME` form carries whole.
fn usable_name(name: &str) -> bool {
    !name.is_empty() && !name.contains(|c: char| c.is_whitespace() || c == '#')
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

fn segment_json(s: &unlace_idb::Segment) -> Value {
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
    let k = knowledge(db, selection);
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
