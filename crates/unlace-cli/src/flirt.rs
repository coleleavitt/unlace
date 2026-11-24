//! `unlace flirt make`: write FLIRT `.pat` and `.sig` files from the functions
//! of object files or static libraries.
//! `unlace flirt inspect`: read-only summary of a `.sig` or `.til` file.
//!
//! ```text
//!   unlace flirt make <lib.a|*.o ...> -o <out.pat> [--sig <out.sig>] [--libname NAME]
//!   unlace flirt inspect <file.sig|file.til> [--limit N] [--json]
//! ```
//!
//! The patterns come from `unlace_analysis::flirt::flirtpat` and the `.sig`
//! tree from `unlace_analysis::flirt::flirtsig`. Functions the `.sig` cannot
//! tell apart are listed on stderr and left out of it. Name collisions in the
//! `.pat` itself are listed on stderr too; the `.pat` is written unchanged.

use std::collections::BTreeSet;
use std::path::Path;

use unlace_analysis::flirt::flirtpat::{
    FuncPattern, Target, pattern_collisions, patterns_from_object, write_pat,
};
use unlace_analysis::flirt::flirtsig::build_sig;
use unlace_analysis::flirt::inspect::{SigSummary, summarize_sig};
use unlace_analysis::protos::til::{Til, is_til};

use crate::args::take_value;

/// What the inputs of one run add up to.
#[derive(Default)]
struct Library {
    target: Option<Target>,
    patterns: Vec<FuncPattern>,
    data_names: BTreeSet<String>,
    short: usize,
}

/// Dispatch `unlace flirt <subcommand>`.
pub fn run(argv: &[String]) -> i32 {
    match argv.first().map(String::as_str) {
        Some("make") => match make(&argv[1..]) {
            Ok(()) => 0,
            Err((status, e)) => {
                eprintln!("unlace flirt make: {e}");
                if status == 2 {
                    usage();
                }
                status
            }
        },
        Some("inspect") => match inspect(&argv[1..]) {
            Ok(()) => 0,
            Err((status, e)) => {
                eprintln!("unlace flirt inspect: {e}");
                if status == 2 {
                    usage();
                }
                status
            }
        },
        Some("-h" | "--help" | "help") => {
            usage();
            0
        }
        other => {
            match other {
                Some(other) => eprintln!("unlace flirt: unknown subcommand {other:?}"),
                None => eprintln!("unlace flirt: missing subcommand (try `unlace flirt make ...`)"),
            }
            usage();
            2
        }
    }
}

fn usage() {
    eprintln!(
        "usage: unlace flirt make <lib.a|*.o ...> -o <out.pat> [--sig <out.sig>] [--libname NAME]\n\
         unlace flirt inspect <file.sig|file.til> [--limit N] [--json]\n\
         \n\
         Write FLIRT patterns for the functions of object files or static libraries.\n\
         -o is the `.pat` text: one line per function with a global name, bytes a\n\
         relocation rewrites left variable. --sig also writes the `.sig` tree (format\n\
         version 10) that `--option flirt on` applies through UNLACE_FLIRT_SIGS;\n\
         --libname is the library name in its header (default: the first input's file\n\
         stem). Functions that share their leading 32 bytes and CRC are told apart by\n\
         a tail byte, then by a referenced name; those nothing tells apart are listed\n\
         on stderr and left out of the `.sig`."
    );
}

fn make(argv: &[String]) -> Result<(), (i32, String)> {
    let usage = |e: String| (2, e);
    let (mut inputs, mut out, mut sig, mut libname) = (Vec::new(), None, None, None);
    let mut i = 0;
    while i < argv.len() {
        let tok = argv[i].as_str();
        match tok {
            "-o" | "--output" => out = Some(take_value(argv, &mut i, tok).map_err(usage)?),
            "--sig" => sig = Some(take_value(argv, &mut i, tok).map_err(usage)?),
            "--libname" => libname = Some(take_value(argv, &mut i, tok).map_err(usage)?),
            flag if flag.starts_with('-') => return Err(usage(format!("unknown flag {flag:?}"))),
            input => inputs.push(input.to_string()),
        }
        i += 1;
    }
    let out = out.ok_or_else(|| usage("-o <out.pat> is required".into()))?;
    let first = inputs
        .first()
        .ok_or_else(|| usage("at least one input object or archive is required".into()))?;
    let libname = libname.unwrap_or_else(|| {
        Path::new(first)
            .file_stem()
            .map_or_else(String::new, |s| s.to_string_lossy().into_owned())
    });

    let mut lib = Library::default();
    for input in &inputs {
        let before = lib.patterns.len();
        add_input(&mut lib, input).map_err(|e| (1, format!("{input}: {e}")))?;
        eprintln!(
            "unlace flirt make: {input}: {} pattern(s)",
            lib.patterns.len() - before
        );
    }
    lib.patterns.sort();
    lib.patterns.dedup();
    if lib.short > 0 {
        eprintln!(
            "unlace flirt make: {} function(s) with too few fixed bytes left out",
            lib.short
        );
    }
    let target = lib.target.filter(|_| !lib.patterns.is_empty());
    let target = target.ok_or_else(|| {
        (
            1,
            "the inputs define no function with a global name".to_string(),
        )
    })?;
    let built = build_sig(&lib.patterns, &lib.data_names, target, &libname);
    let excluded: Vec<FuncPattern> = built.as_ref().map_or_else(
        |_| Vec::new(),
        |b| {
            b.collisions
                .iter()
                .flat_map(|c| c.patterns.clone())
                .collect()
        },
    );
    std::fs::write(&out, write_pat(&lib.patterns, &excluded))
        .map_err(|e| (1, format!("cannot write {out}: {e}")))?;
    for names in pattern_collisions(&lib.patterns) {
        eprintln!(
            "unlace flirt make: collision in {out}: {} share a pattern and CRC but differ in name",
            names.join(", ")
        );
    }
    eprintln!(
        "unlace flirt make: wrote {out} ({} pattern(s))",
        lib.patterns.len()
    );

    let Some(sig) = sig else { return Ok(()) };
    let built = built.map_err(|e| (1, e))?;
    for c in &built.collisions {
        eprintln!(
            "unlace flirt make: collision: {} are not told apart; left out of {sig}",
            c.names.join(", ")
        );
    }
    std::fs::write(&sig, &built.bytes).map_err(|e| (1, format!("cannot write {sig}: {e}")))?;
    eprintln!(
        "unlace flirt make: wrote {sig} ({} module(s), {} unresolved collision(s))",
        built.modules,
        built.collisions.len()
    );
    Ok(())
}

/// `unlace flirt inspect <file> [--limit N] [--json]`: the header and a sample
/// of the names of an IDA `.sig` or `.til` file. `--limit 0` shows every name.
fn inspect(argv: &[String]) -> Result<(), (i32, String)> {
    let usage = |e: String| (2, e);
    let (mut path, mut limit, mut json) = (None, 20usize, false);
    let mut i = 0;
    while i < argv.len() {
        let tok = argv[i].as_str();
        match tok {
            "--limit" => {
                let value = take_value(argv, &mut i, tok).map_err(usage)?;
                limit = value
                    .parse()
                    .map_err(|_| usage(format!("--limit needs a count, got {value:?}")))?;
            }
            "--json" => json = true,
            flag if flag.starts_with('-') => return Err(usage(format!("unknown flag {flag:?}"))),
            input => {
                if path.replace(input.to_string()).is_some() {
                    return Err(usage("one file at a time".into()));
                }
            }
        }
        i += 1;
    }
    let path = path.ok_or_else(|| usage("a .sig or .til file is required".into()))?;
    let bytes = std::fs::read(&path).map_err(|e| (1, format!("cannot read {path}: {e}")))?;
    let shown = if bytes.starts_with(b"IDASGN") {
        let summary = summarize_sig(&bytes).map_err(|e| (1, format!("{path}: {e}")))?;
        sig_report(&path, &summary, limit)
    } else if is_til(&bytes) {
        let til = Til::parse(&bytes).map_err(|e| (1, format!("{path}: {e}")))?;
        til_report(&path, &til, limit)
    } else {
        return Err((
            1,
            format!("{path}: neither an IDA signature (IDASGN) nor a type library (.til)"),
        ));
    };
    if json {
        let text = serde_json::to_string_pretty(&shown.json).map_err(|e| (1, e.to_string()))?;
        println!("{text}");
    } else {
        print!("{}", shown.text);
    }
    Ok(())
}

/// The text and JSON views of one inspected file.
struct Shown {
    text: String,
    json: serde_json::Value,
}

/// The first `limit` items of `names` (all of them for `limit` 0).
fn sample(names: &[String], limit: usize) -> &[String] {
    if limit == 0 {
        names
    } else {
        &names[..limit.min(names.len())]
    }
}

fn sig_report(path: &str, s: &SigSummary, limit: usize) -> Shown {
    let shown = sample(&s.names, limit);
    let startup = if s.startup { " (startup)" } else { "" };
    let mut text = format!(
        "{path}: IDA signature, version {}\n  library: {}\n  processor: {}, file formats: {:#x}, flags: {:#x}{startup}\n  pattern length: {} bytes\n  modules: {}, public names: {}\n",
        s.version,
        s.library_name,
        s.processor,
        s.file_formats,
        s.flags,
        s.pattern_len,
        s.modules,
        s.names.len(),
    );
    if !shown.is_empty() {
        text.push_str(&format!("  first {} name(s):\n", shown.len()));
        for name in shown {
            text.push_str(&format!("    {name}\n"));
        }
    }
    let json = serde_json::json!({
        "format": "sig",
        "path": path,
        "library": s.library_name,
        "version": s.version,
        "processor": s.processor,
        "file_formats": s.file_formats,
        "flags": s.flags,
        "startup": s.startup,
        "pattern_length": s.pattern_len,
        "modules": s.modules,
        "names_total": s.names.len(),
        "names": shown,
    });
    Shown { text, json }
}

fn til_report(path: &str, til: &Til, limit: usize) -> Shown {
    let h = &til.header;
    let symbols: Vec<String> = til.symbols.iter().map(|e| e.name.clone()).collect();
    let types: Vec<String> = til.types.iter().map(|e| e.name.clone()).collect();
    let (sym_shown, type_shown) = (sample(&symbols, limit), sample(&types, limit));
    let mut text = format!(
        "{path}: IDA type library (.til)\n  title: {}\n  compiler: {:#x}, int: {}, bool: {}, enum: {}, long double: {}, pointer: {}\n  symbols: {}, types: {}\n",
        h.title,
        h.compiler,
        h.size_int,
        h.size_bool,
        h.size_enum,
        h.size_long_double,
        h.ptr_size,
        symbols.len(),
        types.len(),
    );
    if !sym_shown.is_empty() {
        text.push_str(&format!("  first {} symbol(s):\n", sym_shown.len()));
        for name in sym_shown {
            text.push_str(&format!("    {name}\n"));
        }
    }
    if !type_shown.is_empty() {
        text.push_str(&format!("  first {} type(s):\n", type_shown.len()));
        for name in type_shown {
            text.push_str(&format!("    {name}\n"));
        }
    }
    let json = serde_json::json!({
        "format": "til",
        "path": path,
        "title": h.title,
        "compiler": h.compiler,
        "size_int": h.size_int,
        "size_bool": h.size_bool,
        "size_enum": h.size_enum,
        "size_long_double": h.size_long_double,
        "pointer_size": h.ptr_size,
        "symbols_total": symbols.len(),
        "types_total": types.len(),
        "symbols": sym_shown,
        "types": type_shown,
    });
    Shown { text, json }
}

/// Add the patterns of one input: an object, or every object member of an
/// archive. Objects of another architecture, format or byte order than the
/// first are refused.
fn add_input(lib: &mut Library, input: &str) -> Result<(), String> {
    let bytes = std::fs::read(input).map_err(|e| format!("cannot read: {e}"))?;
    if !bytes.starts_with(b"!<arch>\n") {
        return add_object(lib, &bytes);
    }
    let archive = object::read::archive::ArchiveFile::parse(&*bytes)
        .map_err(|e| format!("not a valid archive: {e}"))?;
    for member in archive.members() {
        let member = member.map_err(|e| format!("archive member error: {e}"))?;
        let data = member
            .data(&*bytes)
            .map_err(|e| format!("archive member data error: {e}"))?;
        if object::File::parse(data).is_ok() {
            add_object(lib, data)
                .map_err(|e| format!("{}: {e}", String::from_utf8_lossy(member.name())))?;
        }
    }
    Ok(())
}

fn add_object(lib: &mut Library, data: &[u8]) -> Result<(), String> {
    let mut object = patterns_from_object(data)?;
    match lib.target {
        Some(target) if target != object.target => {
            return Err(format!(
                "a {:?} object among {:?} objects",
                object.target, target
            ));
        }
        _ => lib.target = Some(object.target),
    }
    lib.patterns.append(&mut object.patterns);
    lib.data_names.append(&mut object.data_names);
    lib.short += object.short;
    Ok(())
}
