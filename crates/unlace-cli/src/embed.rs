//! The in-process surface the `unlace` embedding crate wraps: one load, then any
//! number of single-function decompiles.
//!
//! A [`Request`] is lowered to the CLI's own argument list and parsed by
//! [`decompile_all::parse_args`], then loaded by [`decompile_all::load_program`]
//! and decompiled and serialized by the same functions `unlace decompile --json`
//! runs, so mode presets, option precedence, the output-language policy,
//! `--define-function`, `--assert` and the JSON document resolve exactly as they
//! do on the command line. The stable interface is the `unlace` crate, not this
//! module.

use std::collections::BTreeSet;

use unlace_console::engine::{ConsoleProgram, EntrySelector, FunctionEntry};
use unlace_decomp::architecture::Architecture;
use unlace_decomp::ctreeexport::ExportTree;

use crate::decompile_all::{self, Args, DriverDefaults};
use crate::funcdecl::Declared;

/// A load request, in the command line's terms.
#[derive(Clone, Debug, Default)]
pub struct Request {
    /// The input file.
    pub binary: String,
    /// A headerless image: the file's bytes are code at `base`.
    pub raw: Option<Raw>,
    /// `--define-function` values (`start[-end][=name]`).
    pub functions: Vec<String>,
    /// `--assert` directives.
    pub assertions: Vec<String>,
    /// `--option NAME VALUE` pairs, applied in order.
    pub options: Vec<(String, String)>,
    /// `--language`.
    pub language: Option<String>,
    /// `--language-file`: a language flavour file ([`check_language_file`]).
    pub language_file: Option<String>,
    /// `--mode`.
    pub mode: Option<String>,
    /// `--target`: the SLEIGH language id.
    pub target: Option<String>,
    /// `--slice`.
    pub slice: Option<String>,
    /// `--sleighpath`.
    pub sleighpath: Option<String>,
    /// `--isa`.
    pub isa: Option<String>,
    /// `--max-fn-seconds`.
    pub max_fn_seconds: Option<u64>,
    /// `--max-fn-memory`, in MiB.
    pub max_fn_memory: Option<u64>,
    /// `--omit` keys.
    pub omit: Vec<String>,
    /// `--project`: a project file whose stored overrides apply first.
    pub project: Option<String>,
    /// Functions that never return, in the target's address units; each is
    /// declared a function first when nothing starts there.
    pub noreturn: Vec<u64>,
}

/// `--raw-image --base BASE --entry E...`.
#[derive(Clone, Debug, Default)]
pub struct Raw {
    /// The address of the file's first byte, in the target's address units.
    pub base: u64,
    /// Where code starts (`--entry`), in the target's address units.
    pub entries: Vec<u64>,
    /// Disjoint runs of bytes, each `(byte address, bytes, section flags)`,
    /// loaded in place of the file's bytes; `base` is then the lowest address.
    pub segments: Option<Vec<(u64, Vec<u8>, u32)>>,
}

impl Request {
    /// The argument list `unlace decompile --json` would be given for this load,
    /// without a function selection.
    pub fn argv(&self) -> Vec<String> {
        let binary = if self.binary.starts_with('-') {
            format!("./{}", self.binary)
        } else {
            self.binary.clone()
        };
        let mut argv = vec![binary, "--json".to_string()];
        if let Some(raw) = &self.raw {
            argv.push("--raw-image".to_string());
            push(&mut argv, "--base", format!("{:#x}", raw.base));
            for entry in &raw.entries {
                push(&mut argv, "--entry", format!("{entry:#x}"));
            }
        }
        for (flag, value) in [
            ("--target", &self.target),
            ("--slice", &self.slice),
            ("--sleighpath", &self.sleighpath),
            ("--isa", &self.isa),
            ("--mode", &self.mode),
            ("--language", &self.language),
            ("--language-file", &self.language_file),
            ("--project", &self.project),
        ] {
            if let Some(value) = value {
                push(&mut argv, flag, value.clone());
            }
        }
        for function in &self.functions {
            push(&mut argv, "--define-function", function.clone());
        }
        for directive in &self.assertions {
            push(&mut argv, "--assert", directive.clone());
        }
        for (name, value) in &self.options {
            argv.extend(["--option".to_string(), name.clone(), value.clone()]);
        }
        if let Some(seconds) = self.max_fn_seconds {
            push(&mut argv, "--max-fn-seconds", seconds.to_string());
        }
        if let Some(mib) = self.max_fn_memory {
            push(&mut argv, "--max-fn-memory", mib.to_string());
        }
        if !self.omit.is_empty() {
            push(&mut argv, "--omit", self.omit.join(","));
        }
        argv
    }
}

/// An IDA database read for a load (`unlace idb`; `crate::idb`).
#[derive(Clone, Debug, Default)]
pub struct Idb {
    /// IDA's processor module name (`metapc`, `ARM`, ...).
    pub processor: String,
    /// The SLEIGH language id the processor maps to, when unlace has a mapping.
    pub target: Option<String>,
    /// The SHA-256 of the file IDA loaded, when the database records it.
    pub input_sha256: Option<String>,
    /// The segments as `(byte address, bytes, execute, write)`, when read with bytes.
    pub segments: Vec<(u64, Vec<u8>, bool, bool)>,
    /// Function entries, address-ordered.
    pub entries: Vec<u64>,
    /// The local types, functions and prototypes as `--assert` directives.
    pub directives: Vec<String>,
    /// Entries of the functions IDA marked no-return.
    pub noreturn: Vec<u64>,
}

/// Read the IDA database at `path`, with its segments' bytes when `bytes` is set.
pub fn read_idb(path: &str, bytes: bool) -> Result<Idb, String> {
    let db = crate::idb::open(path, bytes)?;
    let target = crate::idb::sleigh_target(&db.info.processor, db.info.bitness, db.info.big_endian);
    let selection = crate::idb::Selection {
        types: true,
        comments: false,
    };
    let knowledge = crate::idb::knowledge(&db, selection);
    let entries = db.functions.iter().map(|f| f.start).collect();
    Ok(Idb {
        processor: db.info.processor.clone(),
        input_sha256: db.info.input_sha256.clone(),
        segments: db
            .memory
            .into_iter()
            .map(|run| (run.start, run.bytes, run.perms.execute, run.perms.write))
            .collect(),
        entries,
        directives: knowledge.directives,
        noreturn: knowledge.noreturn,
        target,
    })
}

/// Check the text of a language flavour file (`--language-file`,
/// `unlace_decomp::langflavour`); the error names the field at fault.
pub fn check_language_file(text: &str) -> Result<(), String> {
    unlace_decomp::langflavour::load(text)
        .map(|_| ())
        .map_err(|e| e.to_string())
}

/// The SHA-256 of the file at `path`, the identity `unlace project` binds.
pub fn file_sha256(path: &str) -> Result<String, String> {
    unlace_project::BinaryIdentity::of_file(std::path::Path::new(path))
        .map(|identity| identity.sha256)
        .map_err(|e| format!("{path}: {e}"))
}

/// The [`section_flags`](unlace_sleigh::loadimage::section_flags) of a raw
/// segment with these access rights: code or data, and read-only unless
/// writable.
pub fn segment_flags(execute: bool, write: bool) -> u32 {
    use unlace_sleigh::loadimage::section_flags::{CODE, DATA, READONLY};
    let kind = if execute { CODE } else { DATA };
    if write { kind } else { kind | READONLY }
}

fn push(argv: &mut Vec<String>, flag: &str, value: String) {
    argv.push(flag.to_string());
    argv.push(value);
}

/// Why a load failed.
#[derive(Clone, Debug)]
pub enum LoadError {
    /// The request does not parse as a command line (a bad option, a bad
    /// `--define-function` or `--assert`, a raw image without a target).
    Arguments(String),
    /// The input did not load.
    Load(String),
}

/// One function the load knows.
#[derive(Clone, Debug)]
pub struct Entry {
    /// The most informative name at the entry.
    pub name: String,
    /// The entry address, in the target's address units.
    pub address: u64,
    /// The byte extent (an upper bound; `0` when it cannot be measured).
    pub size: u64,
    /// Every other name the entry carries.
    pub aliases: Vec<String>,
    /// Whether the entry has a body to decompile (not an import slot).
    pub executable: bool,
}

/// One function's decompile.
#[derive(Clone, Debug)]
pub struct Output {
    /// The `unlace decompile --json` document for the function.
    pub document: String,
    /// The function's name.
    pub name: String,
    /// The function's address, in the target's address units.
    pub address: u64,
    /// The rendered body; `None` when the decompile failed.
    pub code: Option<String>,
    /// Why the run failed, worded as `unlace decompile` reports it.
    pub error: Option<String>,
    /// The prototype line (`<ret> <name>(<params>);`).
    pub prototype: Option<String>,
    /// The analysis warnings the body carries as comments.
    pub warnings: Vec<String>,
    /// The exported C syntax tree, or why the function has none; `None` unless
    /// the session exports it ([`Session::set_ctree`]).
    pub ctree: Option<Result<ExportTree, String>>,
}

/// The tree the `ctree` member of a `--json --ctree` record holds, from its JSON text.
pub fn ctree_from_json(text: &str) -> Result<ExportTree, String> {
    let json = crate::jsonfmt::parse(text).ok_or("ctree: not JSON")?;
    decompile_all::ctreejson::from_json(&json)
}

/// Which function to decompile.
#[derive(Clone, Debug)]
pub enum Selector {
    /// An entry address, in the target's address units (`--addr`).
    Address(u64),
    /// A name or alias (`--functions`).
    Name(String),
}

/// A loaded program and the arguments it was loaded with.
pub struct Session {
    args: Args,
    prog: ConsoleProgram,
    declared: Declared,
}

/// Parse and load `request` once.
pub fn load(request: &Request) -> Result<Session, LoadError> {
    load_with(request, &mut |_| Ok(()))
}

/// [`load`], with `install` run on the architecture as soon as it is built,
/// before any option is applied: where the `unlace` crate registers the rules,
/// phase callbacks and tree callbacks of `unlace::unstable`. An `Err` from it
/// fails the load.
pub fn load_with(
    request: &Request,
    install: &mut dyn FnMut(&mut Architecture) -> Result<(), String>,
) -> Result<Session, LoadError> {
    let args =
        decompile_all::parse_args(&request.argv(), "decompile").map_err(LoadError::Arguments)?;
    let segments = request.raw.as_ref().and_then(|raw| raw.segments.clone());
    let mut prog =
        decompile_all::load_program_embedded(&args, DriverDefaults::Decompile, segments, install)
            .map_err(LoadError::Load)?;
    for &address in &request.noreturn {
        declare_no_return(&mut prog, address).map_err(LoadError::Load)?;
    }
    let declared = Declared::of(&prog);
    Ok(Session {
        args,
        prog,
        declared,
    })
}

/// Flag the function at `address` no-return, declaring one there first when
/// nothing starts at it.
pub(crate) fn declare_no_return(prog: &mut ConsoleProgram, address: u64) -> Result<(), String> {
    let fail = |detail: &str| format!("noreturn {address:#x}: {detail}");
    let offset = prog
        .input_code_offset(address)
        .map_err(|e| fail(e.explain()))?;
    if prog.declare_no_return(offset) {
        return Ok(());
    }
    let space = prog
        .arch()
        .manage()
        .get_default_code_space()
        .cloned()
        .ok_or_else(|| fail("the loaded program has no default code space"))?;
    prog.declare_function(unlace_base::address::Address::new(space, offset), None, 0)
        .map_err(|e| fail(e.explain()))?;
    if prog.declare_no_return(offset) {
        Ok(())
    } else {
        Err(fail("no function could be declared there"))
    }
}

impl Session {
    /// The SLEIGH language id the program was loaded with.
    pub fn architecture(&self) -> &str {
        &self.prog.arch().archid
    }

    /// Export the C syntax tree with each later decompile (`--ctree`): the
    /// document's `ctree` member and [`Output::ctree`].
    pub fn set_ctree(&mut self, on: bool) {
        self.args.extra.ctree = on;
    }

    /// The function inventory, one record per entry address, address-ordered
    /// (`unlace functions`).
    pub fn functions(&self) -> Vec<Entry> {
        let executable: BTreeSet<u64> = self
            .prog
            .function_entries_executable()
            .iter()
            .map(|entry| entry.addr.get_offset())
            .collect();
        self.prog
            .function_entries_canonical()
            .into_iter()
            .map(|entry| {
                let byte = entry.addr.get_offset();
                Entry {
                    address: self.prog.output_code_offset(byte),
                    executable: executable.contains(&byte),
                    name: entry.name,
                    size: entry.size,
                    aliases: entry.aliases,
                }
            })
            .collect()
    }

    /// The addresses `unlace decompile-all` decompiles, in its order.
    pub fn executable(&self) -> Vec<u64> {
        self.prog
            .function_entries_executable()
            .iter()
            .map(|entry| self.prog.output_code_offset(entry.addr.get_offset()))
            .collect()
    }

    /// Decompile one function, as `unlace decompile <selector> --json` does over
    /// this load.
    pub fn decompile(&mut self, selector: &Selector) -> Result<Output, String> {
        let entry = self.resolve(selector)?;
        let interior = crate::interior::of_targets(&self.prog, std::slice::from_ref(&entry));
        let mut funcs = decompile_all::decompile_entries_with(
            &mut self.prog,
            &self.args,
            vec![entry],
            false,
            true,
            true,
        );
        if funcs.is_empty() {
            return Err("the decompiler returned no record".to_string());
        }
        let function = funcs.swap_remove(0);
        let assertions = self.prog.assertion_outcomes();
        let mut failure = function.error.as_ref().map(|reason| {
            format!(
                "decompilation failed for {} in {}: {reason}",
                function.name, self.args.binary
            )
        });
        if failure.is_none() && decompile_all::any_refused_assertion(&assertions) {
            failure = Some(format!(
                "--assert directive refused by the pipeline in {}",
                self.args.binary
            ));
        }
        let document = decompile_all::render_result_json(
            &self.args.binary,
            std::slice::from_ref(&function),
            &self.args.options,
            failure.as_deref(),
            &assertions,
            &interior,
            &self.declared,
            self.args.omit,
            self.args.extra,
        );
        let warnings = function.warnings.iter().map(|w| w.message()).collect();
        Ok(Output {
            document,
            name: function.name,
            address: function.address,
            code: function.code,
            error: failure,
            prototype: function.proto,
            warnings,
            ctree: function.detail.and_then(|detail| detail.ctree),
        })
    }

    fn resolve(&self, selector: &Selector) -> Result<FunctionEntry, String> {
        let selector = match selector {
            Selector::Address(address) if self.args.raw_image => EntrySelector::Numeric(
                self.prog
                    .input_code_offset(*address)
                    .map_err(|e| e.explain().to_string())?,
            ),
            Selector::Address(address) => EntrySelector::Numeric(*address),
            Selector::Name(name) => EntrySelector::Name(name.clone()),
        };
        self.prog
            .resolve_body_entry(&selector)
            .map_err(|e| e.to_string())
    }
}
