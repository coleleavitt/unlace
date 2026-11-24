//! The `unlace` command line, as a library.
//!
//! Command dispatch for the kuna CLI lives here so the `unlace` binary
//! (`src/main.rs`, which only calls [`main`]) and the embedding API (the
//! `unlace` crate, through [`embed`]) are built from the same parser, loader,
//! decompile loop and JSON serializer and cannot drift apart. Nothing here but
//! [`main`] and [`embed`] is public; neither is a stable interface on its own.

// Dev-only: take the engine from the dylib (crates/unlace-decomp-dylib).
#[cfg(feature = "dynamic_linking")]
extern crate unlace_decomp_dylib;

mod args;
mod armember;
mod assertdecl;
mod blobs;
mod callgraph;
mod catalog;
mod crypto;
mod cryptosig;
mod decompile;
mod decompile_all;
mod decompile_graph;
mod decompile_project;
mod disassemble;
mod docs;
pub mod embed;
mod embedded_specs;
mod fid;
mod flirt;
mod followimages;
mod funcdecl;
mod function_info;
mod idb;
mod image;
mod interior;
mod jobs;
mod jsonfmt;
mod kuna_allocrelease;
mod limits;
mod loadtime;
mod lumina;
mod optname;
mod output;
mod paths;
mod project;
mod project_stream;
mod rawfront;
mod runtime_hints;
mod rust_signatures;
mod sbom;
mod skill;
mod specs;
mod strings;
mod unpack;
mod xrefs;

use std::process::ExitCode;

use crate::args::take_value;

type CommandHandler = fn(&[String]) -> i32;

const COMMANDS: &[(&str, CommandHandler)] = &[
    ("decompile", |args| args::report(decompile::main(args))),
    ("decompile-all", decompile_all::run),
    ("decompile-project", decompile_project::run),
    ("decompile-graph", decompile_graph::run),
    ("functions", decompile_all::run_functions),
    ("disassemble", disassemble::run),
    ("raw-pcode", disassemble::raw_pcode::run),
    ("read", disassemble::run_read),
    ("xrefs", xrefs::run),
    ("strings", strings::run),
    ("crypto", crypto::run),
    ("blobs", blobs::run),
    ("unpack", unpack::run),
    ("docs", docs::run),
    ("install-skill", |args| args::report(skill::run(args))),
    ("catalog", |args| args::report(cmd_catalog(args))),
    ("modes", cmd_modes),
    ("specs", specs::run),
    ("fid", fid::run),
    ("flirt", flirt::run),
    ("lumina", lumina::run),
    ("rust-signatures", rust_signatures::run),
    ("sbom", sbom::run),
    ("project", project::run),
    ("idb", idb::run),
];

/// Run the `unlace` command line over this process's arguments.
pub fn main() -> ExitCode {
    let args: Vec<String> = std::env::args().collect();
    if args.len() < 2 {
        usage();
        return ExitCode::from(2);
    }
    let sub = args[1].as_str();
    match sub {
        paths::DECOMP_DBG_SUBCOMMAND => {
            return unlace_console::consolemain::main(args[1..].to_vec());
        }
        paths::SLACOMP_SUBCOMMAND => return unlace_slacomp::slacompmain::main(args[1..].to_vec()),
        _ => {}
    }
    let mut rest = args[2..].to_vec();
    if let Err(e) = args::take_global_image(&mut rest) {
        eprintln!("error: {e}");
        return ExitCode::from(2);
    }
    let follow_limit = match followimages::take_limit(&mut rest) {
        Ok(limit) => limit,
        Err(e) => {
            eprintln!("error: {e}");
            return ExitCode::from(2);
        }
    };
    let (_staged, flat) = match armember::resolve(sub, &mut rest) {
        Ok(armember::Resolved::Run(staged)) => (staged, None),
        Ok(armember::Resolved::Flat(flat)) => (None, Some(*flat)),
        Ok(armember::Resolved::Done(code)) => return ExitCode::from(code as u8),
        Err(e) => {
            eprintln!("error: {e}");
            return ExitCode::from(2);
        }
    };
    let mut prepared = match rawfront::prepare(sub, &rest, flat) {
        Ok(p) => p,
        Err(e) => {
            eprintln!("error: {e}");
            return ExitCode::from(2);
        }
    };
    let rest = &mut prepared.args;
    loadtime::export_image_selection(rest);
    followimages::apply(sub, rest, follow_limit);
    let rest = rest.as_slice();
    runtime_hints::note_for_invocation(sub, rest);
    let code = match sub {
        "-V" | "--version" | "version" => {
            // Release CI bakes the repo-derived MAJOR.MINOR (docs/release.md)
            // via KUNA_VERSION; dev builds report the workspace Cargo version.
            output::emit_with_status(
                &format!(
                    "unlace {}\n",
                    option_env!("KUNA_VERSION").unwrap_or(env!("CARGO_PKG_VERSION"))
                ),
                0,
            )
        }
        "-h" | "--help" | "help" => {
            usage();
            0
        }
        other => {
            if let Some((_, run)) = COMMANDS.iter().find(|(name, _)| *name == other) {
                run(rest)
            } else {
                eprintln!("unlace: unknown subcommand {other:?}");
                usage();
                2
            }
        }
    };
    ExitCode::from(code as u8)
}

fn usage() {
    let names = COMMANDS
        .iter()
        .map(|(name, _)| *name)
        .collect::<Vec<_>>()
        .join("|");
    eprintln!(
        "usage: unlace <{names}> ...\n\
         \n\
         LLM agents: run `unlace install-skill` once.  It installs the unlace skill -- how to drive\n\
         this CLI well, embedded in the binary, no network -- for Claude Code, Codex and OpenCode\n\
         (`--dir DIR` for other agents).  `unlace install-skill --print` shows it without installing.\n\
         \n\
         unlace decompile <binary> [--isa auto|arm|thumb] <func> [--addr] [--json] [--project FILE] [--no-vars] [--omit aliases,line_mappings,variables,types] [--slice ARCH] [--language auto|c|rust|java|go] [--mode auto|reliable|aggressive|fast] [--option NAME VALUE]... [--kassert ARGS]... [--define-function S[-E][=N]|@FILE]... [--assert DIRECTIVE|@FILE]... [--types FILE.h|DIR]... [--types-cpp CC] [--max-fn-seconds N] [--max-fn-memory MiB] [--raw-image --target T --base VMA]\n\
         unlace decompile-all <binary> [--isa auto|arm|thumb] [--json] [--project FILE] [--functions a,b,..] [--addr 0xVMA]... [--no-vars] [--omit aliases,line_mappings,variables,types] [--language auto|c|rust|java|go] [--max-fn-seconds N] [--max-fn-memory MiB] [--mode auto|reliable|aggressive|fast] [--option N V]... [--define-function S[-E][=N]|@FILE]... [--assert DIRECTIVE|@FILE]... [--types FILE.h|DIR]... [--types-cpp CC] [--raw-image --target T --base VMA (--entry|--addr VMA)...]\n\
         unlace decompile-project <binary> [--isa auto|arm|thumb] [-o DIR] [--functions a,b,..] [--addr 0xVMA]... [--max-fn-seconds N] [--max-fn-memory MiB] [--mode auto|reliable|aggressive|fast] [--option N V]... [--define-function S[-E][=N]|@FILE]... [--assert DIRECTIVE|@FILE]... [--types FILE.h|DIR]... [--types-cpp CC] [--raw-image --target T --base VMA (--entry|--addr VMA)...]\n\
         unlace decompile-graph <binary> [--isa auto|arm|thumb] [-o FILE] [--label TEXT] [--max-fn-seconds N] [--max-fn-memory MiB] [--mode auto|reliable|aggressive|fast] [--option N V]... [--define-function S[-E][=N]|@FILE]...\n\
         unlace functions <binary> [--isa auto|arm|thumb] [--json] [--jobs N|auto] [--mode auto|reliable|aggressive|fast] [--option N V]... [--define-function S[-E][=N]|@FILE]... [--raw-image --target T --base VMA (--entry|--addr VMA)...]\n\
         unlace xrefs <binary> [--isa auto|arm|thumb] (--to <name|0xaddr> | --from <name|0xaddr>) [--json] [--kind call,jump,data,read,write,vcall] [--mode auto|reliable|aggressive|fast]\n\
         unlace crypto <binary> [--isa auto|arm|thumb] [--json] [--algorithm SUBSTR] [--section NAME] [--no-xrefs]\n\
         unlace blobs <binary> [--isa auto|arm|thumb] [--json] [--extract DIR] [--kind png,jpeg,gif,bmp,ico,zip,gzip,xz,zstd] [--section NAME] [--no-xrefs]\n\
         unlace unpack <binary> [-o OUT] [--json]\n\
         unlace unpack <dyld_shared_cache> (--list | --image NAME [-o OUT]) [--json]\n\
         unlace strings <binary> [--isa auto|arm|thumb] [--json] [--min-length N] [--filter REGEX] [--encoding ascii|utf16|all] [--section NAME] [--no-xrefs]\n\
         unlace raw-pcode <binary> [--isa auto|arm|thumb] <name|0xaddr|0xstart-0xend> [--addr] [--count N] [--bytes N] [--follow] [--json] [--mode auto|reliable|aggressive|fast] [--option N V]... [--define-function S[-E][=N]|@FILE]... [--slice ARCH] [--target T] [--sleighpath D]\n\
         unlace disassemble <binary> [--isa auto|arm|thumb] <name|0xaddr|0xstart-0xend> [--addr] [--as code|data|auto] [--count N] [--bytes N] [--json] [--mode auto|reliable|aggressive|fast] [--option N V]... [--define-function S[-E][=N]|@FILE]... [--slice ARCH] [--target T] [--sleighpath D]\n\
         unlace read <binary> [--isa auto|arm|thumb] <name|0xaddr|0xstart-0xend> [--addr] [--bytes N] [--count N] [--json]   # the hexdump view of the same target\n\
         unlace docs [<topic>] [--json] [--all]\n\
         unlace install-skill [--agent claude|codex|opencode|all] [--project | --dir DIR] [--force] [--print]\n\
         unlace catalog [--json|--markdown|--check] [--option NAME] [--tier transform|analysis|core]\n\
         unlace modes [--json]\n\
         unlace specs [-a <dir>] [<slaspec>...] [--diff]\n\
         unlace fid build <lib.a|*.o ...> -o <out.fid> --lang <id> --cspec <id>\n\
         unlace fid query <binary> --db <file.fid> --addr <address> [--addr <address> ...] --json\n\
         unlace flirt make <lib.a|*.o ...> -o <out.pat> [--sig <out.sig>] [--libname NAME]\n\
         unlace rust-signatures check [--manifest PATH] [--json]\n\
         unlace lumina hash|pull|push <binary> [--server HOST:PORT] [--json] ...   unlace lumina serve --db FILE [--bind ADDR]\n\
         unlace sbom <binary> [--json] [--format cyclonedx|spdx] [-o FILE] [--slice ARCH]\n\
         unlace project <init|schema|set|unset|get|list|query|export|import> ... [--json|--jsonl]   # the SQLite project file of overrides\n\
         unlace idb <info|list|import> <db.i64|db.idb> [--json|--jsonl] ...   # an IDA database: its knowledge into a project\n\
         unlace --version\n\
         \n\
         --image NAME[+NAME...] (any subcommand): load those images of a dyld shared cache\n\
         --follow-images N (decompile, disassemble, xrefs): also load up to N images holding\n\
         a requested address outside them (default 2)\n\
         --member [NAME] (any <binary> that is an ar, tar or zip archive or a U-Boot FIT image): load that member, or list the members when no NAME follows; <lib.a>:NAME is the same selection"
    );
}

/// Honor `--engine cpp|rust` like the Python tools: set `UNLACE_ENGINE`.  In the
/// Rust-only world `rust` is already the default and `cpp` would fail to resolve,
/// but the flag is accepted (and exported) for compatibility with existing
/// invocations / the pipeline.
fn apply_engine(engine: Option<&str>) {
    if let Some(e) = engine {
        // FIXME: Audit that the environment access only happens in single-threaded code.
        unsafe { std::env::set_var("UNLACE_ENGINE", e) };
    }
}

// --- catalog -----------------------------------------------------------------

fn cmd_catalog(argv: &[String]) -> Result<i32, String> {
    let mut option: Option<String> = None;
    let mut tier: Option<String> = None;
    let mut json = false;
    let mut markdown = false;
    let mut check = false;
    let mut engine: Option<String> = None;
    let mut decomp_dbg_flag = false;
    // --decomp-dbg / --sleighpath are accepted (Python had them); they map to the
    // env overrides paths.rs already honors, so just set them.
    let mut i = 0;
    while i < argv.len() {
        let a = argv[i].as_str();
        match a {
            "--option" => option = Some(take_value(argv, &mut i, "--option")?),
            "--tier" => tier = Some(take_value(argv, &mut i, "--tier")?),
            "--json" => json = true,
            "--markdown" => markdown = true,
            "--check" => check = true,
            "--engine" => engine = Some(take_value(argv, &mut i, "--engine")?),
            "--decomp-dbg" => {
                // FIXME: Audit that the environment access only happens in single-threaded code.
                unsafe {
                    std::env::set_var(
                        "UNLACE_DECOMP_DBG",
                        take_value(argv, &mut i, "--decomp-dbg")?,
                    )
                };
                decomp_dbg_flag = true;
            }
            "--sleighpath" => {
                // FIXME: Audit that the environment access only happens in single-threaded code.
                unsafe {
                    std::env::set_var("UNLACE_SPECS", take_value(argv, &mut i, "--sleighpath")?)
                };
            }
            "-h" | "--help" => {
                usage_catalog();
                return Ok(0);
            }
            s if s.starts_with("--") => {
                return Err(format!("unknown option {s}"));
            }
            other => {
                return Err(format!("unexpected argument {other:?}"));
            }
        }
        i += 1;
    }
    // argparse mutually-exclusive group: at most one of json/markdown/check.
    if (json as u8) + (markdown as u8) + (check as u8) > 1 {
        return Err("--json, --markdown, --check are mutually exclusive".into());
    }
    apply_engine(engine.as_deref());
    let pinned_by = if decomp_dbg_flag {
        Some("--decomp-dbg")
    } else {
        paths::pinned_by("UNLACE_DECOMP_DBG")
    };

    Ok(if check {
        catalog::cmd_check(pinned_by)
    } else if json {
        catalog::cmd_json(option.as_deref(), tier.as_deref(), pinned_by)
    } else if markdown {
        catalog::cmd_markdown(option.as_deref())
    } else {
        catalog::cmd_text(option.as_deref(), tier.as_deref(), pinned_by)
    })
}

fn usage_catalog() {
    eprintln!(
        "usage: unlace catalog [--json|--markdown|--check] [--option NAME] \\\n\
         \x20                   [--tier transform|analysis|core] [--decomp-dbg P] \\\n\
         \x20                   [--sleighpath D] [--engine cpp|rust]\n\
         \n\
         List the settable phase-model assertions -- the decisions `--option NAME VALUE`\n\
         flips on every decompiling surface.  Each row carries its phase, tier, values,\n\
         default, the symptoms it addresses and when to flip it.\n\
         By default the catalog comes from this binary, without a console or specs.\n\
         --decomp-dbg P or a non-empty UNLACE_DECOMP_DBG selects an external console\n\
         instead (the flag wins); a missing selected console is an error.\n\
         --sleighpath and --engine remain accepted but do not select that route.\n\
         --markdown always renders this binary's catalog.\n\
         \n\
         --json is the machine-readable form an agent selects options from: an\n\
         ARRAY, one object per option, [{{option,values,default,phase,subphase,tier,\n\
         summary,use_when,symptoms,..}}] (one element with --option NAME).  It and\n\
         `unlace docs --json` are the two array-rooted documents; every other --json\n\
         is an object.\n\
         --markdown regenerates docs/options.md (tier-grouped, symptom-indexed).\n\
         --check cross-checks the selected catalog against this binary's registered\n\
         option names and exits nonzero on drift; this is the CI gate.\n\
         --option NAME reports one row; --tier keeps one tier, in the table and\n\
         in --json.\n\
         \n\
         Upstream OptionDatabase names (maxinstruction, errortoomanyinstructions, ..)\n\
         are reachable through --option but are NOT catalog rows, so they do not\n\
         appear here.  Mode presets are `unlace modes`."
    );
}

// --- modes -------------------------------------------------------------------

/// `unlace modes [--json]` — list the decompiler mode policies and presets.
/// Modes are *not* settable catalog rows (`unlace catalog` covers those);
/// concrete modes are option presets, while `auto` selects one using input
/// file size.
fn cmd_modes(argv: &[String]) -> i32 {
    let mut json = false;
    for a in argv {
        match a.as_str() {
            "--json" => json = true,
            "-h" | "--help" => {
                eprintln!(
                    "usage: unlace modes [--json]\n\n\
                     --json emits {{modes:[{{name,summary,automatic,overrides}}]}}."
                );
                return 0;
            }
            s if s.starts_with("--") => {
                eprintln!("error: unknown option {s}");
                return 2;
            }
            other => {
                eprintln!("error: unexpected argument {other:?}");
                return 2;
            }
        }
    }

    use jsonfmt::Json;
    use std::fmt::Write as _;
    let mut text = String::new();
    if json {
        let modes: Vec<Json> = unlace_decomp::modes::MODE_TABLE
            .iter()
            .map(|m| {
                let overrides: Vec<Json> = m
                    .overrides
                    .iter()
                    .map(|(opt, val)| {
                        Json::Object(vec![
                            ("option".into(), Json::Str((*opt).into())),
                            ("value".into(), Json::Str((*val).into())),
                        ])
                    })
                    .collect();
                Json::Object(vec![
                    ("name".into(), Json::Str(m.name.into())),
                    ("summary".into(), Json::Str(m.summary.into())),
                    ("automatic".into(), Json::Bool(m.automatic)),
                    ("overrides".into(), Json::Array(overrides)),
                ])
            })
            .collect();
        let root = Json::Object(vec![("modes".into(), Json::Array(modes))]);
        let _ = writeln!(text, "{}", jsonfmt::dumps_indent2(&root));
    } else {
        for m in unlace_decomp::modes::MODE_TABLE {
            let _ = writeln!(text, "{}", m.name);
            let _ = writeln!(text, "  {}", m.summary);
            let joined: Vec<String> = m
                .overrides
                .iter()
                .map(|(o, v)| format!("{o}={v}"))
                .collect();
            if m.automatic {
                let _ = writeln!(
                    text,
                    "  (automatic size policy) overrides under every selected preset: {}",
                    joined.join(", ")
                );
            } else if m.overrides.is_empty() {
                let _ = writeln!(text, "  (no overrides — the shipped defaults)");
            } else {
                let _ = writeln!(text, "  overrides: {}", joined.join(", "));
            }
        }
    }
    output::emit_with_status(&text, 0)
}
