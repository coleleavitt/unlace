//! The values the API takes and returns.

use std::borrow::Cow;

use unlace_cli::embed;

use crate::{Error, Result};

/// A SLEIGH language id (`processor:endian:size:variant`), the processor a raw
/// image is decoded as. `unlace specs` and the `.ldefs` files under `specs/`
/// list every id.
///
/// ```
/// use unlace::Target;
/// assert_eq!(Target::X86_64.id(), "x86:LE:64:default");
/// assert_eq!(Target::new("ARM:LE:32:v8T").id(), "ARM:LE:32:v8T");
/// ```
#[derive(Clone, Debug, PartialEq, Eq, Hash)]
pub struct Target(Cow<'static, str>);

impl Target {
    /// x86-64.
    pub const X86_64: Target = Target(Cow::Borrowed("x86:LE:64:default"));
    /// 32-bit x86.
    pub const X86: Target = Target(Cow::Borrowed("x86:LE:32:default"));
    /// AArch64 (ARMv8-A).
    pub const AARCH64: Target = Target(Cow::Borrowed("AARCH64:LE:64:v8A"));
    /// 32-bit little-endian ARM (ARMv8). A raw ARM image also needs its
    /// instruction-set state: [`Decompiler::with_isa`](crate::Decompiler::with_isa).
    pub const ARM: Target = Target(Cow::Borrowed("ARM:LE:32:v8"));
    /// 32-bit little-endian ARM with Thumb (ARMv8).
    pub const ARM_THUMB: Target = Target(Cow::Borrowed("ARM:LE:32:v8T"));
    /// Big-endian 32-bit MIPS.
    pub const MIPS_BE: Target = Target(Cow::Borrowed("MIPS:BE:32:default"));
    /// 64-bit RISC-V (RV64GC).
    pub const RISCV64: Target = Target(Cow::Borrowed("RISCV:LE:64:RV64GC"));
    /// Big-endian 32-bit PowerPC.
    pub const PPC_BE: Target = Target(Cow::Borrowed("PowerPC:BE:32:default"));

    /// Any SLEIGH language id.
    ///
    /// ```
    /// let target = unlace::Target::new("sparc:BE:64:default");
    /// ```
    pub fn new(id: impl Into<String>) -> Self {
        Target(Cow::Owned(id.into()))
    }

    /// The id.
    ///
    /// ```
    /// assert_eq!(unlace::Target::AARCH64.id(), "AARCH64:LE:64:v8A");
    /// ```
    pub fn id(&self) -> &str {
        &self.0
    }
}

/// The output language (`--language`).
///
/// ```
/// use unlace::Language;
/// assert_eq!(Language::default(), Language::Auto);
/// ```
#[derive(Clone, Copy, Debug, Default, PartialEq, Eq, Hash)]
#[non_exhaustive]
pub enum Language {
    /// Follow the binary: Rust for a Rust binary, Java for DEX, C otherwise.
    #[default]
    Auto,
    /// C.
    C,
    /// Rust.
    Rust,
    /// Java.
    Java,
    /// Go.
    Go,
}

impl Language {
    pub(crate) fn flag_value(self) -> &'static str {
        match self {
            Language::Auto => "auto",
            Language::C => "c",
            Language::Rust => "rust",
            Language::Java => "java",
            Language::Go => "go",
        }
    }
}

/// A segment's access rights.
///
/// ```
/// use unlace::Perms;
/// assert!(Perms::RX.execute && !Perms::RX.write);
/// ```
#[derive(Clone, Copy, Debug, Default, PartialEq, Eq, Hash)]
pub struct Perms {
    /// Readable.
    pub read: bool,
    /// Writable. A segment that is not is read-only, so its constants fold.
    pub write: bool,
    /// Executable: the segment holds code.
    pub execute: bool,
}

impl Perms {
    /// Read-only data.
    pub const R: Perms = Perms {
        read: true,
        write: false,
        execute: false,
    };
    /// Read-write data.
    pub const RW: Perms = Perms {
        read: true,
        write: true,
        execute: false,
    };
    /// Code.
    pub const RX: Perms = Perms {
        read: true,
        write: false,
        execute: true,
    };
    /// Writable code.
    pub const RWX: Perms = Perms {
        read: true,
        write: true,
        execute: true,
    };
}

/// One mapped range of a raw image: `size` bytes at `address`.
///
/// ```
/// use unlace::{Perms, Segment};
/// let text = Segment::new(0x1000, 0x400, Perms::RX);
/// assert_eq!(text.end(), Some(0x1400));
/// ```
#[derive(Clone, Copy, Debug, PartialEq, Eq, Hash)]
pub struct Segment {
    /// The first byte's address.
    pub address: u64,
    /// The length in bytes.
    pub size: u64,
    /// The access rights.
    pub perms: Perms,
}

impl Segment {
    /// A segment of `size` bytes at `address`.
    ///
    /// ```
    /// let data = unlace::Segment::new(0x2000, 0x100, unlace::Perms::RW);
    /// ```
    pub fn new(address: u64, size: u64, perms: Perms) -> Self {
        Segment {
            address,
            size,
            perms,
        }
    }

    /// The first address past the segment, or `None` when it wraps.
    ///
    /// ```
    /// assert_eq!(unlace::Segment::new(u64::MAX, 2, unlace::Perms::R).end(), None);
    /// ```
    pub fn end(&self) -> Option<u64> {
        self.address.checked_add(self.size)
    }
}

/// One function of the inventory.
///
/// ```no_run
/// let mut decompiler = unlace::Decompiler::open("a.out")?;
/// for function in decompiler.functions()? {
///     println!("{:#x} {} ({} bytes)", function.address, function.name, function.size);
/// }
/// # Ok::<(), unlace::Error>(())
/// ```
#[derive(Clone, Debug, PartialEq, Eq)]
#[non_exhaustive]
pub struct FunctionInfo {
    /// The most informative name at the entry.
    pub name: String,
    /// The entry address, in the target's address units.
    pub address: u64,
    /// The byte extent: the declared end when one was declared, otherwise an
    /// upper bound clipped at the next entry; `0` when it cannot be measured.
    pub size: u64,
    /// Every other name the entry carries.
    pub aliases: Vec<String>,
    /// Whether the entry has a body (an import slot has none and does not
    /// decompile).
    pub executable: bool,
}

impl From<embed::Entry> for FunctionInfo {
    fn from(entry: embed::Entry) -> Self {
        FunctionInfo {
            name: entry.name,
            address: entry.address,
            size: entry.size,
            aliases: entry.aliases,
            executable: entry.executable,
        }
    }
}

/// One decompiled function.
///
/// ```no_run
/// let mut decompiler = unlace::Decompiler::open("a.out")?;
/// let function = decompiler.decompile_named("main")?;
/// let record = &function.json["functions"][0];
/// assert_eq!(record["name"], function.name.as_str());
/// for variable in record["variables"].as_array().into_iter().flatten() {
///     println!("{}", variable["name"]);
/// }
/// # Ok::<(), unlace::Error>(())
/// ```
#[derive(Clone, Debug)]
#[non_exhaustive]
pub struct Decompiled {
    /// The function's name.
    pub name: String,
    /// The function's address, in the target's address units.
    pub address: u64,
    /// The rendered body: C unless another language was chosen.
    pub c: String,
    /// The prototype line (`<ret> <name>(<params>);`), when one was recovered.
    pub prototype: Option<String>,
    /// The analysis warnings the body carries as comments.
    pub warnings: Vec<String>,
    /// The `unlace decompile --json` document: `functions[0]` is this
    /// function's record (`code`, `size`, `variables`, `line_mappings`,
    /// `types`, `warnings`, ...), beside the run-level `assertions` and `error`.
    pub json: serde_json::Value,
}

impl Decompiled {
    pub(crate) fn from_output(output: embed::Output) -> Result<Self> {
        let json = serde_json::from_str(&output.document).map_err(|error| {
            Error::Load(format!(
                "the decompiler wrote a document that does not parse: {error}"
            ))
        })?;
        match (output.code, output.error) {
            (Some(c), None) => Ok(Decompiled {
                name: output.name,
                address: output.address,
                c,
                prototype: output.prototype,
                warnings: output.warnings,
                json,
            }),
            (_, error) => Err(Error::Decompile {
                reason: error.unwrap_or_else(|| format!("{} produced no code", output.name)),
                name: output.name,
                address: output.address,
                json,
            }),
        }
    }
}
