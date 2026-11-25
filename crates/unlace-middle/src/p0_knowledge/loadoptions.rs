//! (unlace) Load-time options: the settings the loader, the analysis tier and the
//! architecture build read before any `option` command can run.
//!
//! A caller fills a [`LoadOptions`] and passes it to a bootstrap
//! (`unlace_console::engine::Bootstrap::options`). The
//! bootstrap enters a [`LoadScope`] on the loading thread, the gates read the
//! options through [`scoped`], and the new `Architecture` keeps a copy, so the
//! analysis commit and every later decompile of that program read the same
//! values. Nothing on that path reads or writes the process environment, so two
//! images can load at once with different settings.
//!
//! The environment is the CLI's channel: the `unlace` CLI exports each
//! `--option` gate onto the `decomp_dbg` subprocess, and the console's
//! `load file` turns it back into options with [`LoadOptions::from_env`]. A
//! gate read outside any scope falls back to its environment variable.

use std::cell::{Cell, RefCell};
use std::collections::BTreeMap;
use std::env::VarError;
use std::ffi::OsString;
use std::marker::PhantomData;
use std::path::PathBuf;
use std::rc::Rc;

use crate::kernelcache::KernelcacheChoice;
use crate::kernelcacheboot::KernelcacheBoot;
use crate::libctypes::LibcTypesLayout;
use crate::options::parse_env_toggle;
use crate::ppc32picimports::Mode as Ppc32PicMode;
use crate::ruststdsigs::RustStdSigs;
use crate::sourcelang::SourceLang;
use crate::symbolnamechars::NameChars;

/// Carries `calltargettype` to the DWARF type mapper, which runs at `load file`
/// before any option is applied; the CLI exports it ahead of the load.
pub const CALLTARGETTYPE_ENV: &str = "UNLACE_CALLTARGETTYPE";
/// Carries `codestrings` to the string-literal pass, which runs at `load file`.
pub const CODESTRINGS_ENV: &str = "UNLACE_CODESTRINGS";
/// Carries `nameladder` to the load-time prototype and no-return passes.
pub const NAMELADDER_ENV: &str = "UNLACE_NAMELADDER";
/// Carries `swifttypes` to the Objective-C pass, which leaves a Swift class's
/// layout to the Swift pass when it is on.
pub const SWIFTTYPES_ENV: &str = "UNLACE_SWIFTTYPES";
/// Carries `dwarfscopes` to the DWARF pass, which runs at `load file`.
pub const DWARFSCOPES_ENV: &str = "UNLACE_DWARFSCOPES";
/// Carries `dwarfenumtypedef` to the DWARF type mapper, which runs at `load file`.
pub const DWARFENUMTYPEDEF_ENV: &str = "UNLACE_DWARFENUMTYPEDEF";
/// The decode lanes the discovery walk runs (`--jobs`); unset is one.
pub const DECODE_JOBS_ENV: &str = "UNLACE_DECODE_JOBS";
/// The `--slice` fat Mach-O slice override.
pub const MACHO_SLICE_ENV: &str = "UNLACE_MACHO_SLICE";
/// The external `.pdb` file to apply.
pub const PDB_PATH_ENV: &str = "unlace_pdb_path";
/// A symbol store to look the `.pdb` up in, `<cache dir>` or
/// `<cache dir>*<server URL>`; with a URL a missing `.pdb` is downloaded.
pub const PDB_SYMSRV_ENV: &str = "unlace_pdb_symsrv";
/// The external `.fid` function-ID database to apply.
pub const FID_DB_ENV: &str = "unlace_fid_db";
/// The FLIRT `.sig` files, or directories of them, to match.
pub const FLIRT_SIGS_ENV: &str = "UNLACE_FLIRT_SIGS";
/// `off` skips the Objective-C metadata pass at load.
pub const LOAD_OBJC_ENV: &str = "UNLACE_LOAD_OBJC";
/// `off` skips the string-literal pass at load.
pub const LOAD_STRINGS_ENV: &str = "UNLACE_LOAD_STRINGS";
/// `off` copies a thin Mach-O into memory instead of mapping it.
pub const LOAD_MMAP_ENV: &str = "UNLACE_LOAD_MMAP";
/// The ARM/Thumb decode mode of a 32-bit ARM image (`--isa`).
pub const ARM_ISA_ENV: &str = "UNLACE_ARM_ISA";

/// The ARM/Thumb decode mode a 32-bit ARM image is painted with (`--isa`).
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub enum ArmIsa {
    Arm,
    Thumb,
}

impl ArmIsa {
    /// Parse an `--isa` value: `auto` or empty leaves the decode mode to the image.
    pub fn parse(value: &str) -> Result<Option<Self>, String> {
        match value.trim().to_ascii_lowercase().as_str() {
            "" | "auto" => Ok(None),
            "arm" => Ok(Some(Self::Arm)),
            "thumb" => Ok(Some(Self::Thumb)),
            _ => Err(format!(
                "invalid --isa value {value:?} (expected auto, arm, or thumb)"
            )),
        }
    }

    pub fn as_str(self) -> &'static str {
        match self {
            Self::Arm => "arm",
            Self::Thumb => "thumb",
        }
    }
}

/// Every load-time setting, one field per option. [`Default`] is the shipped
/// default of each option, the value an unset environment variable means.
#[derive(Clone, Debug, PartialEq, Eq)]
pub struct LoadOptions {
    /// `ppc32picimports`; only `abi` acts at load time.
    pub ppc32picimports: Ppc32PicMode,
    /// `ifuncfpret`: name x86-64 IFUNC PLT stubs.
    pub ifuncfpret: bool,
    /// `ppcapu`: select the PowerPC APU language for an image that needs it.
    pub ppcapu: bool,
    /// `kernelcache`: unwrap Apple firmware containers and pick a fileset entry.
    pub kernelcache: KernelcacheChoice,
    /// `kernelcache-boot`: where the collections a kernel collection links are found.
    pub kernelcache_boot: KernelcacheBoot,
    /// `goabi`: select the golang compiler spec for a Go image.
    pub goabi: bool,
    /// `cil`: load a managed .NET assembly from its CIL method bodies.
    pub cil: bool,
    /// `symbolnamechars`: how symbol-name characters are sanitized.
    pub symbolnamechars: NameChars,
    /// `libctypes`: the named libc aggregate types.
    pub libctypes: LibcTypesLayout,
    /// `calltargettype`: give DWARF function pointers their prototypes.
    pub calltargettype: bool,
    /// `macho-arm64e`: select the Apple-Silicon spec for an arm64e Mach-O.
    pub macho_arm64e: bool,
    /// `sourcelang`: force the source language; `None` trusts detection.
    pub sourcelang: Option<SourceLang>,
    /// `objcivars`: build Objective-C instance layouts.
    pub objcivars: bool,
    /// `objcsdk`: the SDK or header directory Objective-C signatures come from.
    pub objcsdk: Option<PathBuf>,
    /// `dyldimage`: the dyld shared cache image to load; `None` takes the default.
    pub dyldimage: Option<String>,
    /// `dyldcrossrefs`: name references into other dyld cache images.
    pub dyldcrossrefs: bool,
    /// The fat Mach-O slice to load (`--slice`); `None` takes the default.
    pub macho_slice: Option<String>,
    /// An external `.pdb` file to apply.
    pub pdb_path: Option<PathBuf>,
    /// The symbol store (and optional server) to look the `.pdb` up in.
    pub pdb_symsrv: Option<String>,
    /// An external `.fid` function-ID database to apply.
    pub fid_db: Option<PathBuf>,
    /// FLIRT `.sig` files, or directories whose `*.sig` files are all taken.
    pub flirt_sigs: Vec<PathBuf>,
    /// The Go toolchain release, which picks the `runtime.g` layout. The
    /// bootstrap takes it from the image's build info, else from here.
    pub go_version: Option<(u16, u16)>,
    /// Run the Objective-C metadata pass at load, so `objc` has facts to commit.
    pub load_objc: bool,
    /// Run the string-literal pass at load, so `strings` has facts to commit.
    pub load_strings: bool,
    /// Map a thin Mach-O read-only rather than copy it into memory.
    pub load_mmap: bool,
    /// `codestrings`: keep only long strings inside code sections.
    pub codestrings: bool,
    /// `nameladder`: look a name up under its undecorated spellings.
    pub nameladder: bool,
    /// `swifttypes`: a Swift image's class layouts come from its field descriptors.
    pub swifttypes: bool,
    /// `delphiabi`: read a 32-bit Delphi PE under the Delphi compiler spec.
    pub delphiabi: bool,
    /// `debuglink`: name a stripped ELF's functions from its separate debug file.
    pub debuglink: bool,
    /// `exporttrie`: read Mach-O export tries for names.
    pub exporttrie: bool,
    /// `ruststdsigs`: the toolchain Rust standard-library signatures come from.
    pub ruststdsigs: RustStdSigs,
    /// `dwarfscopes`: collect locals nested in DWARF lexical blocks.
    pub dwarfscopes: bool,
    /// `dwarfenumtypedef`: name an anonymous DWARF enumeration after its typedef.
    pub dwarfenumtypedef: bool,
    /// The discovery walk's decode lanes (`--jobs`); `None` runs one.
    pub decode_jobs: Option<usize>,
    /// `UNLACE_ARM_ISA` (`--isa`): the ARM/Thumb decode mode of a 32-bit ARM
    /// image. `Ok(None)` leaves the image's own evidence to decide; an
    /// unrecognized value is an error at each load that reads it.
    pub arm_isa: Result<Option<ArmIsa>, String>,
}

impl Default for LoadOptions {
    fn default() -> Self {
        LoadOptions {
            ppc32picimports: Ppc32PicMode::Off,
            ifuncfpret: true,
            ppcapu: false,
            kernelcache: KernelcacheChoice::default(),
            kernelcache_boot: KernelcacheBoot::default(),
            goabi: true,
            cil: true,
            symbolnamechars: NameChars::default(),
            libctypes: LibcTypesLayout::Streams,
            calltargettype: true,
            macho_arm64e: true,
            sourcelang: None,
            objcivars: true,
            objcsdk: None,
            dyldimage: None,
            dyldcrossrefs: true,
            macho_slice: None,
            pdb_path: None,
            pdb_symsrv: None,
            fid_db: None,
            flirt_sigs: Vec::new(),
            go_version: None,
            load_objc: true,
            load_strings: true,
            load_mmap: true,
            codestrings: true,
            nameladder: true,
            swifttypes: true,
            delphiabi: true,
            debuglink: true,
            exporttrie: true,
            ruststdsigs: RustStdSigs::Off,
            dwarfscopes: true,
            dwarfenumtypedef: true,
            decode_jobs: None,
            arm_isa: Ok(None),
        }
    }
}

impl LoadOptions {
    /// The options the environment states, in the vocabulary the CLI exports.
    /// An unset or unrecognized variable leaves that option at its default.
    pub fn from_env() -> Self {
        Self::from_vars(&Vars::process())
    }

    /// The options the environment would state with each variable `overrides`
    /// names set (`Some`) or removed (`None`); the environment is not changed.
    pub fn from_env_with(overrides: &BTreeMap<&'static str, Option<String>>) -> Self {
        Self::from_vars(&Vars::with(overrides))
    }

    /// The options `vars` states, in the vocabulary the CLI exports.
    pub fn from_vars(vars: &Vars<'_>) -> Self {
        LoadOptions {
            ppc32picimports: read::ppc32picimports(vars),
            ifuncfpret: read::ifuncfpret(vars),
            ppcapu: read::ppcapu(vars),
            kernelcache: read::kernelcache(vars),
            kernelcache_boot: read::kernelcache_boot(vars),
            goabi: read::goabi(vars),
            cil: read::cil(vars),
            symbolnamechars: read::symbolnamechars(vars),
            libctypes: read::libctypes(vars),
            calltargettype: read::calltargettype(vars),
            macho_arm64e: read::macho_arm64e(vars),
            sourcelang: read::sourcelang(vars),
            objcivars: read::objcivars(vars),
            objcsdk: read::objcsdk(vars),
            dyldimage: read::dyldimage(vars),
            dyldcrossrefs: read::dyldcrossrefs(vars),
            macho_slice: read::macho_slice(vars),
            pdb_path: read::pdb_path(vars),
            pdb_symsrv: read::pdb_symsrv(vars),
            fid_db: read::fid_db(vars),
            flirt_sigs: read::flirt_sigs(vars),
            go_version: read::go_version(vars),
            load_objc: read::load_objc(vars),
            load_strings: read::load_strings(vars),
            load_mmap: read::load_mmap(vars),
            codestrings: read::codestrings(vars),
            nameladder: read::nameladder(vars),
            swifttypes: read::swifttypes(vars),
            delphiabi: read::delphiabi(vars),
            debuglink: read::debuglink(vars),
            exporttrie: read::exporttrie(vars),
            ruststdsigs: read::ruststdsigs(vars),
            dwarfscopes: read::dwarfscopes(vars),
            dwarfenumtypedef: read::dwarfenumtypedef(vars),
            decode_jobs: read::decode_jobs(vars),
            arm_isa: read::arm_isa(vars),
        }
    }

    /// The options an entry point that takes none loads with: the environment
    /// read once, as [`LoadOptions::from_env`], with the Go release left to the
    /// image, as a load without options leaves it.
    pub fn from_env_for_load() -> Self {
        LoadOptions {
            go_version: None,
            ..LoadOptions::from_env()
        }
    }

    /// The options in force on this thread: the innermost scope's, else the
    /// environment's.
    pub fn in_force() -> Rc<LoadOptions> {
        SCOPES
            .with(|scopes| {
                scopes
                    .borrow()
                    .last()
                    .and_then(|(_, options)| options.clone())
            })
            .unwrap_or_else(|| {
                FALLBACKS.with(|count| count.set(count.get() + 1));
                Rc::new(LoadOptions::from_env())
            })
    }

    /// Make these the options in force on this thread until the scope drops.
    pub fn enter(&self) -> LoadScope {
        enter(Rc::new(self.clone()))
    }
}

thread_local! {
    /// The live scopes on this thread, oldest first; the last one is in force.
    static SCOPES: RefCell<Vec<(u64, Option<Rc<LoadOptions>>)>> = const { RefCell::new(Vec::new()) };
    static NEXT_SCOPE: Cell<u64> = const { Cell::new(0) };
    static FALLBACKS: Cell<u64> = const { Cell::new(0) };
}

fn push(options: Option<Rc<LoadOptions>>) -> LoadScope {
    let id = NEXT_SCOPE.with(|next| next.replace(next.get().wrapping_add(1)));
    SCOPES.with(|scopes| scopes.borrow_mut().push((id, options)));
    LoadScope {
        id,
        _thread: PhantomData,
    }
}

/// The options of the innermost live scope, or `None` when there is none or it
/// defers to the environment.
fn current<T>(read: impl FnOnce(Option<&LoadOptions>) -> T) -> T {
    SCOPES.with(|scopes| {
        read(
            scopes
                .borrow()
                .last()
                .and_then(|(_, options)| options.as_deref()),
        )
    })
}

/// Make `options` the options in force on this thread until the scope drops.
pub fn enter(options: Rc<LoadOptions>) -> LoadScope {
    push(Some(options))
}

/// Hand this thread back to the environment until the scope drops: every gate
/// reads its environment variable when it runs. A program built under this
/// scope keeps reading the environment through
/// [`crate::infra::architecture::Architecture::load_scope`].
pub fn enter_environment() -> LoadScope {
    push(None)
}

/// Whether some options are in force on this thread. Unlike [`scoped`], asking
/// does not count as an environment read.
#[doc(hidden)]
pub fn options_in_force() -> bool {
    current(|options| options.is_some())
}

/// `read` applied to the options in force on this thread, or `None` outside
/// every scope (the caller then reads its environment variable).
pub fn scoped<T>(read: impl FnOnce(&LoadOptions) -> T) -> Option<T> {
    let read = current(|options| options.map(read));
    if read.is_none() {
        FALLBACKS.with(|count| count.set(count.get() + 1));
    }
    read
}

/// The load-time half of `codestrings`: the string-literal pass runs at
/// `load file`, before any `option` command, so the CLI carries the value
/// in [`CODESTRINGS_ENV`].
pub fn codestrings_enabled() -> bool {
    scoped(|o| o.codestrings).unwrap_or_else(env::codestrings)
}

/// The load-time half of `nameladder` ([`NAMELADDER_ENV`]).
pub fn nameladder_enabled() -> bool {
    scoped(|o| o.nameladder).unwrap_or_else(env::nameladder)
}

/// The load-time half of `swifttypes` ([`SWIFTTYPES_ENV`]).
pub fn swifttypes_enabled() -> bool {
    scoped(|o| o.swifttypes).unwrap_or_else(env::swifttypes)
}

/// How many reads of the options on this thread found no scope in force and
/// fell back to the environment. Test instrumentation: a test that loads with
/// explicit options checks that its calls leave this unchanged.
#[doc(hidden)]
pub fn environment_fallbacks() -> u64 {
    FALLBACKS.with(Cell::get)
}

/// Keeps its options in force on the thread that entered it until dropped.
/// Scopes nest: the most recently entered live scope is in force. Dropping a
/// scope out of order removes only its own options, so the scopes still alive
/// keep theirs.
#[must_use = "the options leave force when the scope drops"]
pub struct LoadScope {
    id: u64,
    _thread: PhantomData<Rc<()>>,
}

impl Drop for LoadScope {
    fn drop(&mut self) {
        let _ = SCOPES.try_with(|scopes| {
            let mut scopes = scopes.borrow_mut();
            if let Some(at) = scopes.iter().rposition(|(id, _)| *id == self.id) {
                scopes.remove(at);
            }
        });
    }
}

/// Where a set of load options reads its variables: the process environment,
/// optionally with some variables set or removed on top of it.
pub struct Vars<'a> {
    overrides: Option<&'a BTreeMap<&'static str, Option<String>>>,
}

impl<'a> Vars<'a> {
    /// The process environment as it stands.
    pub fn process() -> Vars<'static> {
        Vars { overrides: None }
    }

    /// The process environment with each variable `overrides` names set to its
    /// value (`Some`) or removed (`None`).
    pub fn with(overrides: &'a BTreeMap<&'static str, Option<String>>) -> Vars<'a> {
        Vars {
            overrides: Some(overrides),
        }
    }

    fn var_os(&self, name: &str) -> Option<OsString> {
        if let Some(overrides) = self.overrides
            && let Some(value) = overrides.get(name)
        {
            return value.clone().map(OsString::from);
        }
        unlace_base::env::var_os(name)
    }

    fn var(&self, name: &str) -> Result<String, VarError> {
        match self.var_os(name) {
            Some(value) => value.into_string().map_err(VarError::NotUnicode),
            None => Err(VarError::NotPresent),
        }
    }

    fn toggle(&self, name: &str, default: bool) -> bool {
        self.var(name)
            .map_or(default, |value| parse_env_toggle(&value, default))
    }
}

/// Each option read from a [`Vars`] source, in the vocabulary the CLI exports.
pub mod read {
    use super::*;

    fn path(v: &Vars<'_>, name: &str) -> Option<PathBuf> {
        v.var_os(name).filter(|p| !p.is_empty()).map(PathBuf::from)
    }

    pub fn ppc32picimports(v: &Vars<'_>) -> Ppc32PicMode {
        v.var(crate::ppc32picimports::ENV)
            .map_or(Ppc32PicMode::Off, |value| {
                Ppc32PicMode::from_env_value(&value)
            })
    }

    pub fn ifuncfpret(v: &Vars<'_>) -> bool {
        v.toggle(crate::ifuncfpret::IFUNCFPRET_ENV, true)
    }

    pub fn ppcapu(v: &Vars<'_>) -> bool {
        v.toggle(crate::ppcapu::PPCAPU_ENV, false)
    }

    pub fn kernelcache(v: &Vars<'_>) -> KernelcacheChoice {
        v.var(crate::kernelcache::KERNELCACHE_ENV)
            .ok()
            .and_then(|value| KernelcacheChoice::parse(&value))
            .unwrap_or_default()
    }

    pub fn kernelcache_boot(v: &Vars<'_>) -> KernelcacheBoot {
        v.var(crate::kernelcacheboot::KERNELCACHE_BOOT_ENV)
            .map(|value| KernelcacheBoot::parse(&value))
            .unwrap_or_default()
    }

    pub fn goabi(v: &Vars<'_>) -> bool {
        v.toggle(crate::goabi::GOABI_ENV, true)
    }

    pub fn cil(v: &Vars<'_>) -> bool {
        v.toggle(crate::cil::CIL_ENV, true)
    }

    pub fn symbolnamechars(v: &Vars<'_>) -> NameChars {
        match v.var(crate::symbolnamechars::SYMBOLNAMECHARS_ENV) {
            Ok(value) => NameChars::parse(&value).unwrap_or_default(),
            Err(_) => NameChars::default(),
        }
    }

    pub fn libctypes(v: &Vars<'_>) -> LibcTypesLayout {
        match v.var(crate::libctypes::LIBCTYPES_ENV) {
            Ok(value) => match value.trim().to_ascii_lowercase().as_str() {
                "off" | "0" | "false" => LibcTypesLayout::Off,
                "opaque" => LibcTypesLayout::Opaque,
                "glibc" => LibcTypesLayout::Glibc,
                _ => LibcTypesLayout::Streams,
            },
            Err(_) => LibcTypesLayout::Streams,
        }
    }

    pub fn calltargettype(v: &Vars<'_>) -> bool {
        v.toggle(super::CALLTARGETTYPE_ENV, true)
    }

    pub fn macho_arm64e(v: &Vars<'_>) -> bool {
        v.toggle(crate::macho_arm64e::MACHO_ARM64E_ENV, true)
    }

    pub fn sourcelang(v: &Vars<'_>) -> Option<SourceLang> {
        SourceLang::parse_forced(&v.var(crate::sourcelang::SOURCELANG_ENV).ok()?)
    }

    pub fn codestrings(v: &Vars<'_>) -> bool {
        v.toggle(super::CODESTRINGS_ENV, true)
    }

    pub fn nameladder(v: &Vars<'_>) -> bool {
        v.toggle(super::NAMELADDER_ENV, true)
    }

    pub fn swifttypes(v: &Vars<'_>) -> bool {
        v.toggle(super::SWIFTTYPES_ENV, true)
    }

    fn on_unless_off(v: &Vars<'_>, name: &str) -> bool {
        v.var(name).map_or(true, |value| {
            !matches!(
                value.trim().to_ascii_lowercase().as_str(),
                "off" | "0" | "false"
            )
        })
    }

    pub fn delphiabi(v: &Vars<'_>) -> bool {
        on_unless_off(v, crate::delphiabi::DELPHIABI_ENV)
    }

    pub fn debuglink(v: &Vars<'_>) -> bool {
        v.toggle(crate::debuglink::DEBUGLINK_ENV, true)
    }

    pub fn exporttrie(v: &Vars<'_>) -> bool {
        v.toggle(crate::exporttrie::EXPORTTRIE_ENV, true)
    }

    pub fn ruststdsigs(v: &Vars<'_>) -> RustStdSigs {
        v.var(crate::ruststdsigs::RUSTSTDSIGS_ENV)
            .ok()
            .and_then(|value| RustStdSigs::parse(&value))
            .unwrap_or_default()
    }

    pub fn dwarfscopes(v: &Vars<'_>) -> bool {
        on_unless_off(v, super::DWARFSCOPES_ENV)
    }

    pub fn dwarfenumtypedef(v: &Vars<'_>) -> bool {
        on_unless_off(v, super::DWARFENUMTYPEDEF_ENV)
    }

    pub fn objcivars(v: &Vars<'_>) -> bool {
        match v.var(crate::objcivars::OBJCIVARS_ENV) {
            Ok(value) => !matches!(
                value.trim().to_ascii_lowercase().as_str(),
                "off" | "0" | "false" | "no"
            ),
            Err(_) => true,
        }
    }

    pub fn objcsdk(v: &Vars<'_>) -> Option<PathBuf> {
        crate::objcsdk::sdk_path_from_value(&v.var(crate::objcsdk::OBJCSDK_ENV).ok()?)
    }

    pub fn dyldimage(v: &Vars<'_>) -> Option<String> {
        v.var(crate::dyldcache::DYLDIMAGE_ENV)
            .ok()
            .and_then(|value| crate::dyldcache::image_name(&value).map(str::to_string))
    }

    pub fn dyldcrossrefs(v: &Vars<'_>) -> bool {
        v.toggle(crate::dyldcache::DYLDCROSSREFS_ENV, true)
    }

    pub fn macho_slice(v: &Vars<'_>) -> Option<String> {
        v.var(MACHO_SLICE_ENV).ok().filter(|t| !t.trim().is_empty())
    }

    pub fn pdb_path(v: &Vars<'_>) -> Option<PathBuf> {
        path(v, PDB_PATH_ENV)
    }

    pub fn pdb_symsrv(v: &Vars<'_>) -> Option<String> {
        v.var(PDB_SYMSRV_ENV)
            .ok()
            .filter(|value| !value.trim().is_empty())
    }

    pub fn fid_db(v: &Vars<'_>) -> Option<PathBuf> {
        path(v, FID_DB_ENV)
    }

    pub fn flirt_sigs(v: &Vars<'_>) -> Vec<PathBuf> {
        v.var_os(FLIRT_SIGS_ENV)
            .map(|list| std::env::split_paths(&list).collect())
            .unwrap_or_default()
    }

    fn load_pass(v: &Vars<'_>, name: &str) -> bool {
        !v.var(name).is_ok_and(|value| {
            matches!(
                value.trim().to_ascii_lowercase().as_str(),
                "off" | "0" | "false"
            )
        })
    }

    pub fn load_objc(v: &Vars<'_>) -> bool {
        load_pass(v, LOAD_OBJC_ENV)
    }

    pub fn load_strings(v: &Vars<'_>) -> bool {
        load_pass(v, LOAD_STRINGS_ENV)
    }

    pub fn load_mmap(v: &Vars<'_>) -> bool {
        !v.var(LOAD_MMAP_ENV)
            .is_ok_and(|value| matches!(value.as_str(), "off" | "0" | "false"))
    }

    pub fn decode_jobs(v: &Vars<'_>) -> Option<usize> {
        v.var(DECODE_JOBS_ENV).ok()?.trim().parse::<usize>().ok()
    }

    pub fn arm_isa(v: &Vars<'_>) -> Result<Option<ArmIsa>, String> {
        match v.var(ARM_ISA_ENV) {
            Ok(value) => ArmIsa::parse(&value),
            Err(_) => Ok(None),
        }
    }

    /// The `"<maj>.<min>"` release in `UNLACE_GOVERSION`; `None` when it is
    /// unset or unparsable.
    pub fn go_version(v: &Vars<'_>) -> Option<(u16, u16)> {
        let value = v.var(crate::architecture::GOVERSION_ENV).ok()?;
        let mut parts = value.trim().split('.');
        Some((parts.next()?.parse().ok()?, parts.next()?.parse().ok()?))
    }
}

/// Each option read from its environment variable, in the vocabulary the CLI
/// exports: the fallback a gate takes outside every scope.
pub mod env {
    use super::*;

    pub fn ppc32picimports() -> Ppc32PicMode {
        read::ppc32picimports(&Vars::process())
    }

    pub fn ifuncfpret() -> bool {
        read::ifuncfpret(&Vars::process())
    }

    pub fn ppcapu() -> bool {
        read::ppcapu(&Vars::process())
    }

    pub fn kernelcache() -> KernelcacheChoice {
        read::kernelcache(&Vars::process())
    }

    pub fn kernelcache_boot() -> KernelcacheBoot {
        read::kernelcache_boot(&Vars::process())
    }

    pub fn goabi() -> bool {
        read::goabi(&Vars::process())
    }

    pub fn cil() -> bool {
        read::cil(&Vars::process())
    }

    pub fn symbolnamechars() -> NameChars {
        read::symbolnamechars(&Vars::process())
    }

    pub fn libctypes() -> LibcTypesLayout {
        read::libctypes(&Vars::process())
    }

    pub fn calltargettype() -> bool {
        read::calltargettype(&Vars::process())
    }

    pub fn macho_arm64e() -> bool {
        read::macho_arm64e(&Vars::process())
    }

    pub fn sourcelang() -> Option<SourceLang> {
        read::sourcelang(&Vars::process())
    }

    pub fn codestrings() -> bool {
        read::codestrings(&Vars::process())
    }

    pub fn nameladder() -> bool {
        read::nameladder(&Vars::process())
    }

    pub fn swifttypes() -> bool {
        read::swifttypes(&Vars::process())
    }

    pub fn delphiabi() -> bool {
        read::delphiabi(&Vars::process())
    }

    pub fn debuglink() -> bool {
        read::debuglink(&Vars::process())
    }

    pub fn exporttrie() -> bool {
        read::exporttrie(&Vars::process())
    }

    pub fn ruststdsigs() -> RustStdSigs {
        read::ruststdsigs(&Vars::process())
    }

    pub fn dwarfscopes() -> bool {
        read::dwarfscopes(&Vars::process())
    }

    pub fn dwarfenumtypedef() -> bool {
        read::dwarfenumtypedef(&Vars::process())
    }

    pub fn objcivars() -> bool {
        read::objcivars(&Vars::process())
    }

    pub fn objcsdk() -> Option<PathBuf> {
        read::objcsdk(&Vars::process())
    }

    pub fn dyldimage() -> Option<String> {
        read::dyldimage(&Vars::process())
    }

    pub fn dyldcrossrefs() -> bool {
        read::dyldcrossrefs(&Vars::process())
    }

    pub fn macho_slice() -> Option<String> {
        read::macho_slice(&Vars::process())
    }

    pub fn pdb_path() -> Option<PathBuf> {
        read::pdb_path(&Vars::process())
    }

    pub fn pdb_symsrv() -> Option<String> {
        read::pdb_symsrv(&Vars::process())
    }

    pub fn fid_db() -> Option<PathBuf> {
        read::fid_db(&Vars::process())
    }

    pub fn flirt_sigs() -> Vec<PathBuf> {
        read::flirt_sigs(&Vars::process())
    }

    pub fn load_objc() -> bool {
        read::load_objc(&Vars::process())
    }

    pub fn load_strings() -> bool {
        read::load_strings(&Vars::process())
    }

    pub fn load_mmap() -> bool {
        read::load_mmap(&Vars::process())
    }

    pub fn go_version() -> Option<(u16, u16)> {
        read::go_version(&Vars::process())
    }

    pub fn decode_jobs() -> Option<usize> {
        read::decode_jobs(&Vars::process())
    }
}

#[cfg(test)]
mod tests;
