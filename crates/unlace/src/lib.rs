//! Embed the unlace decompiler in-process.
//!
//! A [`Decompiler`] loads one input, a container file unlace recognizes (ELF,
//! Mach-O, PE, DEX, firmware images, ...) or headerless bytes at a base address,
//! and decompiles functions out of that one load, each to C text plus the same
//! JSON document `unlace decompile --json` prints. A framework that already has
//! a loader passes its segments and the function bounds it knows; unlace then
//! decompiles inside those bounds instead of rediscovering them.
//!
//! ```no_run
//! use unlace::{Decompiler, Target};
//!
//! // A raw x86-64 blob loaded at 0x1000, with one function declared at its start.
//! let code = std::fs::read("blob.bin")?;
//! let mut decompiler = Decompiler::from_raw(code, Target::X86_64, 0x1000, &[], &[0x1000])?
//!     .with_function(0x1000, Some(0x1040), Some("handler"))
//!     .with_prototype(0x1000, "int handler(char *buf, int len)");
//! let function = decompiler.decompile(0x1000)?;
//! println!("{}", function.c);
//! # Ok::<(), Box<dyn std::error::Error>>(())
//! ```
//!
//! ```no_run
//! use unlace::Decompiler;
//!
//! // Declare a function discovery missed, with its bounds and prototype.
//! let mut decompiler = Decompiler::open("firmware.elf")?
//!     .with_function(0x1000, Some(0x1040), Some("handler"))
//!     .with_prototype(0x1000, "int handler(char *buf, int len)");
//! let function = decompiler.decompile(0x1000)?;
//! println!("{}", function.c);
//! # Ok::<(), unlace::Error>(())
//! ```
//!
//! # Behaviour
//!
//! - The input is loaded on the first call that needs it, once; every builder
//!   method after that drops the load, and the next call loads again.
//! - Every request goes through the `unlace` command line's own argument parser,
//!   loader and serializer (`unlace-cli`'s library), so an option, a mode, a
//!   `--define-function` bound or an `--assert` directive means exactly what it
//!   means on the command line, and [`Decompiled::json`] is that document.
//! - Diagnostics the command line prints on stderr (a `note:` about an address
//!   interior to another function, a `warning:` about an unmapped declaration)
//!   are printed by the library too.
//! - The SLEIGH specifications are found as the command line finds them:
//!   [`Decompiler::with_sleighpath`], else `UNLACE_SPECS`, `UNLACE_ROOT`, the tree
//!   built in with the `embed-specs` feature, or the checkout's `specs/`.
//! - A [`Decompiler`] is not `Send`: the engine's program holds reference-counted
//!   state. Make one per thread. Loads read and briefly set process environment
//!   variables (the load-time gates), so run concurrent loads in separate
//!   processes when they use different load-time options.
//! - Bad input is an [`Error`], not a panic; an engine panic is caught and
//!   returned as [`Error::Panic`].
//!
//! # Stability
//!
//! The types and methods of this crate are the stable surface. The document in
//! [`Decompiled::json`] follows the `unlace decompile --json` schema
//! (`docs/cli.md`), which only adds keys. Option names and values are the
//! catalog's (`unlace catalog --json`), which can change between releases.

mod error;
mod types;
pub mod unstable;

use std::panic::{AssertUnwindSafe, catch_unwind};
use std::path::Path;

use unlace_cli::embed;

pub use error::{Error, Result};
pub use types::{Decompiled, FunctionInfo, Language, Perms, Segment, Target};

/// One input, loaded once, decompiled function by function.
///
/// ```no_run
/// use unlace::Decompiler;
///
/// let mut decompiler = Decompiler::open("/usr/bin/true")?.with_option("ctypes", "on");
/// for function in decompiler.functions()?.iter().take(3) {
///     println!("{:#x} {}", function.address, function.name);
/// }
/// # Ok::<(), unlace::Error>(())
/// ```
pub struct Decompiler {
    request: embed::Request,
    session: Option<embed::Session>,
    /// The scratch copy of bytes handed over in memory; removed on drop.
    _scratch: Option<tempfile::TempPath>,
    tree_hooks: unstable::ctree::TreeHooks,
}

impl Decompiler {
    /// Load the file at `path`, in any container format unlace recognizes.
    ///
    /// ```no_run
    /// let decompiler = unlace::Decompiler::open("/usr/bin/true")?;
    /// # Ok::<(), unlace::Error>(())
    /// ```
    pub fn open(path: impl AsRef<Path>) -> Result<Self> {
        let path = path.as_ref();
        std::fs::metadata(path).map_err(|source| Error::Io {
            path: path.to_path_buf(),
            source,
        })?;
        Ok(Self::with_request(utf8(path)?, None))
    }

    /// Load a container (ELF, Mach-O, PE, ...) held in memory.
    ///
    /// The bytes are written to a private temporary file for the loader, which
    /// reads by path; the file is removed when the decompiler is dropped, and
    /// the documents name it as the binary.
    ///
    /// ```no_run
    /// let bytes = std::fs::read("/usr/bin/true")?;
    /// let decompiler = unlace::Decompiler::from_bytes(bytes)?;
    /// # Ok::<(), Box<dyn std::error::Error>>(())
    /// ```
    pub fn from_bytes(bytes: impl AsRef<[u8]>) -> Result<Self> {
        let scratch = scratch(bytes.as_ref())?;
        let mut decompiler = Self::with_request(utf8(&scratch)?, None);
        decompiler._scratch = Some(scratch);
        Ok(decompiler)
    }

    /// Load headerless bytes: `bytes` is the image whose first byte is at `base`,
    /// decoded as `target`, with code starting at each of `entries` (target
    /// address units; discovery widens from them).
    ///
    /// With no `segments`, the whole of `bytes` is one code range. Otherwise
    /// only the listed ranges of `bytes` are mapped, each with its access
    /// rights: a read-only range's constants fold, a non-executable one is data.
    /// Segment addresses are byte addresses (a byte-addressed target).
    ///
    /// ```no_run
    /// use unlace::{Decompiler, Perms, Segment, Target};
    ///
    /// let image = std::fs::read("dump.bin")?;
    /// let segments = [
    ///     Segment::new(0x8000, 0x2000, Perms::RX),
    ///     Segment::new(0xa000, 0x1000, Perms::R),
    /// ];
    /// let decompiler = Decompiler::from_raw(image, Target::ARM_THUMB, 0x8000, &segments, &[0x8001])?
    ///     .with_isa("thumb");
    /// # Ok::<(), Box<dyn std::error::Error>>(())
    /// ```
    pub fn from_raw(
        bytes: impl AsRef<[u8]>,
        target: Target,
        base: u64,
        segments: &[Segment],
        entries: &[u64],
    ) -> Result<Self> {
        let bytes = bytes.as_ref();
        if segments.is_empty() {
            let scratch = scratch(bytes)?;
            let raw = embed::Raw {
                base,
                entries: entries.to_vec(),
                segments: None,
            };
            let mut decompiler = Self::with_request(utf8(&scratch)?, Some(raw));
            decompiler._scratch = Some(scratch);
            decompiler.request.target = Some(target.id().to_string());
            return Ok(decompiler);
        }
        let mut regions = Vec::with_capacity(segments.len());
        for segment in segments {
            let invalid = |why: &str| {
                Error::Segments(format!(
                    "segment {:#x}+{:#x}: {why}",
                    segment.address, segment.size
                ))
            };
            let start = segment
                .address
                .checked_sub(base)
                .ok_or_else(|| invalid("starts below the base"))?;
            let end = start
                .checked_add(segment.size)
                .filter(|end| *end <= bytes.len() as u64)
                .ok_or_else(|| invalid("runs past the end of the bytes"))?;
            let run = bytes[start as usize..end as usize].to_vec();
            regions.push((segment.address, run, segment.perms));
        }
        Self::from_memory(target, regions, entries)
    }

    /// Load headerless memory a framework's own loader already mapped: each
    /// region is `(byte address, bytes, access rights)`; the space between
    /// regions is not mapped. Code starts at each of `entries`.
    ///
    /// ```no_run
    /// use unlace::{Decompiler, Perms, Target};
    ///
    /// let text = vec![0x55, 0x48, 0x89, 0xe5, 0x5d, 0xc3];
    /// let rodata = b"hello\0".to_vec();
    /// let decompiler = Decompiler::from_memory(
    ///     Target::X86_64,
    ///     vec![(0x401000, text, Perms::RX), (0x402000, rodata, Perms::R)],
    ///     &[0x401000],
    /// )?;
    /// # Ok::<(), unlace::Error>(())
    /// ```
    pub fn from_memory(
        target: Target,
        regions: impl IntoIterator<Item = (u64, Vec<u8>, Perms)>,
        entries: &[u64],
    ) -> Result<Self> {
        let mut runs: Vec<(u64, Vec<u8>, u32)> = regions
            .into_iter()
            .filter(|(_, bytes, _)| !bytes.is_empty())
            .map(|(address, bytes, perms)| {
                (
                    address,
                    bytes,
                    embed::segment_flags(perms.execute, perms.write),
                )
            })
            .collect();
        runs.sort_by_key(|run| run.0);
        let mut end = 0u64;
        for (i, (address, bytes, _)) in runs.iter().enumerate() {
            if i > 0 && *address < end {
                return Err(Error::Segments(format!(
                    "the region at {address:#x} overlaps the one before it"
                )));
            }
            end = address.checked_add(bytes.len() as u64).ok_or_else(|| {
                Error::Segments(format!(
                    "the region at {address:#x} wraps the address space"
                ))
            })?;
        }
        let Some(base) = runs.first().map(|run| run.0) else {
            return Err(Error::Segments("no region holds a byte".to_string()));
        };
        let image: Vec<u8> = runs.iter().flat_map(|run| run.1.iter().copied()).collect();
        let scratch = scratch(&image)?;
        let raw = embed::Raw {
            base,
            entries: entries.to_vec(),
            segments: Some(runs),
        };
        let mut decompiler = Self::with_request(utf8(&scratch)?, Some(raw));
        decompiler._scratch = Some(scratch);
        decompiler.request.target = Some(target.id().to_string());
        Ok(decompiler)
    }

    /// Load an IDA database (`.idb`, `.i64`) without the binary it was made from: its
    /// segments are mapped at their addresses with their rights (bytes IDA does not
    /// hold read as zero), decoded as the SLEIGH target IDA's processor maps to, with
    /// the database's local types, functions (entries, extents, names), prototypes
    /// and no-return flags declared, as [`with_idb`](Self::with_idb) declares them.
    ///
    /// ```no_run
    /// let mut decompiler = unlace::Decompiler::from_idb("target.i64")?;
    /// let main = decompiler.decompile_named("main")?;
    /// println!("{}", main.c);
    /// # Ok::<(), unlace::Error>(())
    /// ```
    pub fn from_idb(path: impl AsRef<Path>) -> Result<Self> {
        let path = path.as_ref();
        std::fs::metadata(path).map_err(|source| Error::Io {
            path: path.to_path_buf(),
            source,
        })?;
        let idb = embed::read_idb(&utf8(path)?, true).map_err(Error::Load)?;
        let target = idb.target.clone().ok_or_else(|| {
            Error::Request(format!(
                "{}: no SLEIGH target for IDA processor {:?}; map its segments with \
                 Decompiler::from_memory and a Target instead",
                path.display(),
                idb.processor
            ))
        })?;
        let regions = idb
            .segments
            .into_iter()
            .map(|(address, bytes, execute, write)| {
                let perms = Perms {
                    read: true,
                    write,
                    execute,
                };
                (address, bytes, perms)
            });
        let decompiler = Self::from_memory(Target::new(target), regions, &idb.entries)?;
        Ok(decompiler.change(|request| {
            request.assertions.extend(idb.directives);
            request.noreturn.extend(idb.noreturn);
        }))
    }

    /// Declare what an IDA database (`.idb`, `.i64`) knows about this input: its local
    /// types (`typedef`), functions (entries, extents, names), prototypes and no-return
    /// flags, as `unlace idb import` stores them (`docs/cli.md`, "unlace idb"). The
    /// addresses are the database's, so it must not have been rebased.
    ///
    /// When the input is a container (`open`, `from_bytes`) and the database records
    /// the hash of the file IDA loaded, the two must match: a database of other bytes
    /// is an [`Error::Request`]. Raw inputs are not checked.
    ///
    /// ```no_run
    /// let decompiler = unlace::Decompiler::open("target")?.with_idb("target.i64")?;
    /// # Ok::<(), unlace::Error>(())
    /// ```
    pub fn with_idb(self, path: impl AsRef<Path>) -> Result<Self> {
        let path = path.as_ref();
        std::fs::metadata(path).map_err(|source| Error::Io {
            path: path.to_path_buf(),
            source,
        })?;
        let idb = embed::read_idb(&utf8(path)?, false).map_err(Error::Load)?;
        if self.request.raw.is_none()
            && let Some(expected) = &idb.input_sha256
        {
            let actual = embed::file_sha256(&self.request.binary).map_err(Error::Load)?;
            if *expected != actual {
                return Err(Error::Request(format!(
                    "{} was made from a file with SHA-256 {expected}, but {} is {actual}",
                    path.display(),
                    self.request.binary
                )));
            }
        }
        Ok(self.change(|request| {
            request.assertions.extend(idb.directives);
            request.noreturn.extend(idb.noreturn);
        }))
    }

    fn with_request(binary: String, raw: Option<embed::Raw>) -> Self {
        Self {
            request: embed::Request {
                binary,
                raw,
                ..embed::Request::default()
            },
            session: None,
            _scratch: None,
            tree_hooks: unstable::ctree::TreeHooks::default(),
        }
    }

    fn change(mut self, apply: impl FnOnce(&mut embed::Request)) -> Self {
        apply(&mut self.request);
        self.session = None;
        self
    }

    /// Set a decompiler option for this load (`--option NAME VALUE`); a later
    /// setting of the same option wins. `unlace catalog --json` lists them.
    ///
    /// ```no_run
    /// let decompiler = unlace::Decompiler::open("a.out")?.with_option("structdefs", "on");
    /// # Ok::<(), unlace::Error>(())
    /// ```
    pub fn with_option(self, name: impl Into<String>, value: impl Into<String>) -> Self {
        let pair = (name.into(), value.into());
        self.change(|request| request.options.push(pair))
    }

    /// Choose the output language (`--language`); the default follows the
    /// binary (Rust for a Rust binary, Java for DEX, C otherwise).
    ///
    /// ```no_run
    /// use unlace::{Decompiler, Language};
    /// let decompiler = Decompiler::open("a.out")?.with_language(Language::C);
    /// # Ok::<(), unlace::Error>(())
    /// ```
    pub fn with_language(self, language: Language) -> Self {
        self.change(|request| request.language = Some(language.flag_value().to_string()))
    }

    /// Choose a mode preset (`--mode auto|reliable|aggressive|fast`).
    ///
    /// ```no_run
    /// let decompiler = unlace::Decompiler::open("a.out")?.with_mode("reliable");
    /// # Ok::<(), unlace::Error>(())
    /// ```
    pub fn with_mode(self, mode: impl Into<String>) -> Self {
        let mode = mode.into();
        self.change(|request| request.mode = Some(mode))
    }

    /// Force the SLEIGH language (`--target`), for a container whose header
    /// names the wrong one.
    ///
    /// ```no_run
    /// use unlace::{Decompiler, Target};
    /// let decompiler = Decompiler::open("fw.elf")?.with_target(Target::new("ARM:LE:32:v8T"));
    /// # Ok::<(), unlace::Error>(())
    /// ```
    pub fn with_target(self, target: Target) -> Self {
        self.change(|request| request.target = Some(target.id().to_string()))
    }

    /// Pick the slice of a universal Mach-O (`--slice x86_64|arm64|...`).
    ///
    /// ```no_run
    /// let decompiler = unlace::Decompiler::open("Universal")?.with_slice("arm64");
    /// # Ok::<(), unlace::Error>(())
    /// ```
    pub fn with_slice(self, slice: impl Into<String>) -> Self {
        let slice = slice.into();
        self.change(|request| request.slice = Some(slice))
    }

    /// Set the ARM instruction-set state of every code section (`--isa
    /// auto|arm|thumb`); a raw 32-bit ARM image requires `arm` or `thumb`.
    ///
    /// ```no_run
    /// let decompiler = unlace::Decompiler::open("fw.elf")?.with_isa("thumb");
    /// # Ok::<(), unlace::Error>(())
    /// ```
    pub fn with_isa(self, isa: impl Into<String>) -> Self {
        let isa = isa.into();
        self.change(|request| request.isa = Some(isa))
    }

    /// Read SLEIGH specifications from `dir` (a `specs/` tree holding
    /// `Ghidra/Processors`).
    ///
    /// ```no_run
    /// let decompiler = unlace::Decompiler::open("a.out")?.with_sleighpath("/opt/unlace/specs");
    /// # Ok::<(), unlace::Error>(())
    /// ```
    pub fn with_sleighpath(self, dir: impl AsRef<Path>) -> Self {
        let dir = dir.as_ref().to_string_lossy().into_owned();
        self.change(|request| request.sleighpath = Some(dir))
    }

    /// Declare a function: it starts at `start`, ends before `end` (exclusive)
    /// when given, and is called `name` when given (`--define-function`).
    ///
    /// The declaration outranks discovery: an entry discovery missed becomes a
    /// function, and the end bounds flow following so the body stops at it.
    /// Addresses are in the target's address units.
    ///
    /// ```no_run
    /// let decompiler = unlace::Decompiler::open("a.out")?
    ///     .with_function(0x401000, Some(0x401080), Some("parse_header"));
    /// # Ok::<(), unlace::Error>(())
    /// ```
    pub fn with_function(self, start: u64, end: Option<u64>, name: Option<&str>) -> Self {
        let mut spec = format!("{start:#x}");
        if let Some(end) = end {
            spec.push_str(&format!("-{end:#x}"));
        }
        if let Some(name) = name {
            spec.push('=');
            spec.push_str(name);
        }
        self.change(|request| request.functions.push(spec))
    }

    /// Declare the prototype of the function at `address`, as a C declaration
    /// (`--assert "prototype <address> <declaration>"`).
    ///
    /// ```no_run
    /// let decompiler = unlace::Decompiler::open("a.out")?
    ///     .with_prototype(0x401000, "int parse_header(const char *buf, unsigned len)");
    /// # Ok::<(), unlace::Error>(())
    /// ```
    pub fn with_prototype(self, address: u64, declaration: &str) -> Self {
        self.with_assertion(format!("prototype {address:#x} {}", declaration.trim()))
    }

    /// Add one `--assert` directive (`docs/cli.md` lists the vocabulary:
    /// `prototype`, `name`, `type`, `readonly`, `flow`, `callee`, `bytes`, ...).
    ///
    /// ```no_run
    /// let decompiler = unlace::Decompiler::open("a.out")?.with_assertion("readonly 0x404028+8");
    /// # Ok::<(), unlace::Error>(())
    /// ```
    pub fn with_assertion(self, directive: impl Into<String>) -> Self {
        let directive = directive.into();
        self.change(|request| request.assertions.push(directive))
    }

    /// Say that code starts at `address`: an `--entry` seed for a raw image, a
    /// declared function (`with_function(address, None, None)`) for a container.
    ///
    /// ```no_run
    /// use unlace::{Decompiler, Target};
    /// let decompiler = Decompiler::from_raw(std::fs::read("blob.bin")?, Target::X86_64, 0, &[], &[0])?
    ///     .with_entry(0x200);
    /// # Ok::<(), Box<dyn std::error::Error>>(())
    /// ```
    pub fn with_entry(self, address: u64) -> Self {
        if self.request.raw.is_none() {
            return self.with_function(address, None, None);
        }
        self.change(|request| {
            if let Some(raw) = request.raw.as_mut() {
                raw.entries.push(address);
            }
        })
    }

    /// Declare that the function at `address` never returns (an `exit` or
    /// `abort` wrapper the analysis did not recognize), so its callers'
    /// decompiles stop at each call to it. Nothing starting there yet, a
    /// function is declared first.
    ///
    /// ```no_run
    /// let decompiler = unlace::Decompiler::open("a.out")?.with_noreturn(0x401200);
    /// # Ok::<(), unlace::Error>(())
    /// ```
    pub fn with_noreturn(self, address: u64) -> Self {
        self.change(|request| request.noreturn.push(address))
    }

    /// Apply the overrides stored in an `unlace project` file before this
    /// decompiler's own (`--project`).
    ///
    /// ```no_run
    /// let decompiler = unlace::Decompiler::open("a.out")?.with_project("a.unlace");
    /// # Ok::<(), unlace::Error>(())
    /// ```
    pub fn with_project(self, path: impl AsRef<Path>) -> Self {
        let path = path.as_ref().to_string_lossy().into_owned();
        self.change(|request| request.project = Some(path))
    }

    /// Stop a function's decompile after `seconds` (`0` disables the budget).
    ///
    /// ```no_run
    /// let decompiler = unlace::Decompiler::open("a.out")?.with_max_fn_seconds(30);
    /// # Ok::<(), unlace::Error>(())
    /// ```
    pub fn with_max_fn_seconds(self, seconds: u64) -> Self {
        self.change(|request| request.max_fn_seconds = Some(seconds))
    }

    /// Stop a function's decompile once the process holds more than `mib` MiB
    /// and the function added at least 64 MiB (`0` disables the budget).
    ///
    /// ```no_run
    /// let decompiler = unlace::Decompiler::open("a.out")?.with_max_fn_memory(4096);
    /// # Ok::<(), unlace::Error>(())
    /// ```
    pub fn with_max_fn_memory(self, mib: u64) -> Self {
        self.change(|request| request.max_fn_memory = Some(mib))
    }

    /// The SLEIGH language id of the loaded program, loading it if needed.
    ///
    /// ```no_run
    /// let mut decompiler = unlace::Decompiler::open("a.out")?;
    /// assert!(decompiler.architecture()?.starts_with("x86:LE:64"));
    /// # Ok::<(), unlace::Error>(())
    /// ```
    pub fn architecture(&mut self) -> Result<String> {
        Ok(self.session()?.architecture().to_string())
    }

    /// The function inventory, one record per entry address, address-ordered
    /// (what `unlace functions --json` lists).
    ///
    /// ```no_run
    /// let mut decompiler = unlace::Decompiler::open("a.out")?;
    /// let main = decompiler.functions()?.into_iter().find(|f| f.name == "main");
    /// # Ok::<(), unlace::Error>(())
    /// ```
    pub fn functions(&mut self) -> Result<Vec<FunctionInfo>> {
        let entries = self.session()?.functions();
        Ok(entries.into_iter().map(FunctionInfo::from).collect())
    }

    /// Decompile the function at `address` (target address units), as
    /// `unlace decompile <address> --addr --json` would over this load. An
    /// address no function starts at is decompiled from there, as asked.
    ///
    /// ```no_run
    /// let mut decompiler = unlace::Decompiler::open("a.out")?;
    /// let function = decompiler.decompile(0x401000)?;
    /// println!("{}\n{}", function.prototype.as_deref().unwrap_or(""), function.c);
    /// # Ok::<(), unlace::Error>(())
    /// ```
    pub fn decompile(&mut self, address: u64) -> Result<Decompiled> {
        self.decompile_selected(&embed::Selector::Address(address), format!("{address:#x}"))
    }

    /// Decompile the function called `name` (or carrying it as an alias).
    ///
    /// ```no_run
    /// let mut decompiler = unlace::Decompiler::open("a.out")?;
    /// let main = decompiler.decompile_named("main")?;
    /// # Ok::<(), unlace::Error>(())
    /// ```
    pub fn decompile_named(&mut self, name: &str) -> Result<Decompiled> {
        self.decompile_selected(&embed::Selector::Name(name.to_string()), name.to_string())
    }

    /// Decompile every function with a body, in address order, one load for all
    /// of them. Each item is that function's own result; a failure does not end
    /// the iteration. Functions are decompiled one at a time as with
    /// [`Decompiler::decompile`], not in `unlace decompile-all`'s callee-first
    /// batch order.
    ///
    /// ```no_run
    /// let mut decompiler = unlace::Decompiler::open("a.out")?;
    /// for function in decompiler.decompile_all() {
    ///     match function {
    ///         Ok(function) => println!("{}", function.c),
    ///         Err(error) => eprintln!("{error}"),
    ///     }
    /// }
    /// # Ok::<(), unlace::Error>(())
    /// ```
    pub fn decompile_all(&mut self) -> DecompileAll<'_> {
        let (pending, failed) = match self.session() {
            Ok(session) => (session.executable(), None),
            Err(error) => (Vec::new(), Some(error)),
        };
        DecompileAll {
            decompiler: self,
            pending: pending.into_iter(),
            failed,
        }
    }

    fn decompile_selected(
        &mut self,
        selector: &embed::Selector,
        what: String,
    ) -> Result<Decompiled> {
        let session = self.session()?;
        let outcome = catch_unwind(AssertUnwindSafe(|| session.decompile(selector)));
        let output = match outcome {
            Ok(Ok(output)) => output,
            Ok(Err(reason)) => return Err(Error::NotFound { what, reason }),
            Err(panic) => {
                self.session = None;
                return Err(Error::Panic(panic_message(panic.as_ref())));
            }
        };
        Decompiled::from_output(output)
    }

    fn session(&mut self) -> Result<&mut embed::Session> {
        if self.session.is_none() {
            let request = &self.request;
            let loaded = catch_unwind(AssertUnwindSafe(|| embed::load(request)))
                .map_err(|panic| Error::Panic(panic_message(panic.as_ref())))?;
            let mut session = loaded.map_err(|error| match error {
                embed::LoadError::Arguments(message) => Error::Request(message),
                embed::LoadError::Load(message) => Error::Load(message),
            })?;
            self.tree_hooks.install(session.arch_mut());
            self.session = Some(session);
        }
        self.session
            .as_mut()
            .ok_or_else(|| Error::Load("the program did not load".to_string()))
    }
}

/// The iterator [`Decompiler::decompile_all`] returns.
pub struct DecompileAll<'a> {
    decompiler: &'a mut Decompiler,
    pending: std::vec::IntoIter<u64>,
    failed: Option<Error>,
}

impl Iterator for DecompileAll<'_> {
    type Item = Result<Decompiled>;

    fn next(&mut self) -> Option<Self::Item> {
        if let Some(error) = self.failed.take() {
            return Some(Err(error));
        }
        let address = self.pending.next()?;
        Some(self.decompiler.decompile(address))
    }
}

fn utf8(path: &Path) -> Result<String> {
    path.to_str()
        .map(str::to_string)
        .ok_or_else(|| Error::NonUtf8Path(path.to_path_buf()))
}

fn scratch(bytes: &[u8]) -> Result<tempfile::TempPath> {
    use std::io::Write as _;
    let io = |source| Error::Io {
        path: std::env::temp_dir(),
        source,
    };
    let mut file = tempfile::Builder::new()
        .prefix("unlace-input-")
        .tempfile()
        .map_err(io)?;
    file.write_all(bytes).map_err(io)?;
    file.flush().map_err(io)?;
    Ok(file.into_temp_path())
}

fn panic_message(panic: &(dyn std::any::Any + Send)) -> String {
    panic
        .downcast_ref::<&str>()
        .map(|s| s.to_string())
        .or_else(|| panic.downcast_ref::<String>().cloned())
        .unwrap_or_else(|| "unknown panic".to_string())
}

#[cfg(test)]
mod tests;
