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
use std::marker::PhantomData;
use std::path::PathBuf;
use std::rc::Rc;

use crate::kernelcache::KernelcacheChoice;
use crate::kernelcacheboot::KernelcacheBoot;
use crate::libctypes::LibcTypesLayout;
use crate::options::env_toggle;
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
            libctypes: LibcTypesLayout::Opaque,
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
        }
    }
}

impl LoadOptions {
    /// The options the environment states, in the vocabulary the CLI exports.
    /// An unset or unrecognized variable leaves that option at its default.
    pub fn from_env() -> Self {
        LoadOptions {
            ppc32picimports: env::ppc32picimports(),
            ifuncfpret: env::ifuncfpret(),
            ppcapu: env::ppcapu(),
            kernelcache: env::kernelcache(),
            kernelcache_boot: env::kernelcache_boot(),
            goabi: env::goabi(),
            cil: env::cil(),
            symbolnamechars: env::symbolnamechars(),
            libctypes: env::libctypes(),
            calltargettype: env::calltargettype(),
            macho_arm64e: env::macho_arm64e(),
            sourcelang: env::sourcelang(),
            objcivars: env::objcivars(),
            objcsdk: env::objcsdk(),
            dyldimage: env::dyldimage(),
            dyldcrossrefs: env::dyldcrossrefs(),
            macho_slice: env::macho_slice(),
            pdb_path: env::pdb_path(),
            pdb_symsrv: env::pdb_symsrv(),
            fid_db: env::fid_db(),
            flirt_sigs: env::flirt_sigs(),
            go_version: env::go_version(),
            load_objc: env::load_objc(),
            load_strings: env::load_strings(),
            load_mmap: env::load_mmap(),
            codestrings: env::codestrings(),
            nameladder: env::nameladder(),
            swifttypes: env::swifttypes(),
            delphiabi: env::delphiabi(),
            debuglink: env::debuglink(),
            exporttrie: env::exporttrie(),
            ruststdsigs: env::ruststdsigs(),
            dwarfscopes: env::dwarfscopes(),
            dwarfenumtypedef: env::dwarfenumtypedef(),
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

    /// Write the named option's value to the environment variable a later
    /// `load file` in this process reads. `Architecture::set_unlace_option`
    /// already does this for the option it sets; this serves a caller that
    /// changed the options through `Architecture::load_options_mut`. A load
    /// with explicit options never needs it. A name that is not a load-time
    /// option is ignored.
    pub fn export_env(&self, option: &str) {
        use crate::*;
        match option {
            "ppc32picimports" => self.ppc32picimports.set_env(),
            "ifuncfpret" => ifuncfpret::set_ifuncfpret_env(self.ifuncfpret),
            "ppcapu" => ppcapu::set_ppcapu_env(self.ppcapu),
            "kernelcache" => kernelcache::set_kernelcache_env(&self.kernelcache),
            "kernelcache-boot" => kernelcacheboot::set_kernelcache_boot_env(&self.kernelcache_boot),
            "goabi" => goabi::set_goabi_env(self.goabi),
            "cil" => cil::set_cil_env(self.cil),
            "symbolnamechars" => symbolnamechars::set_symbolnamechars_env(self.symbolnamechars),
            "libctypes" => libctypes::set_libctypes_env_layout(self.libctypes),
            // FIXME: Audit that the environment access only happens in single-threaded code.
            "calltargettype" => unsafe {
                std::env::set_var(
                    CALLTARGETTYPE_ENV,
                    if self.calltargettype { "on" } else { "off" },
                )
            },
            "macho-arm64e" => macho_arm64e::set_macho_arm64e_env(self.macho_arm64e),
            "sourcelang" => sourcelang::set_sourcelang_env(self.sourcelang),
            "objcivars" => objcivars::set_objcivars_env(self.objcivars),
            "objcsdk" => objcsdk::set_objcsdk_env(self.objcsdk.as_deref().and_then(|p| p.to_str())),
            "dyldimage" => {
                dyldcache::set_dyldimage_env(self.dyldimage.as_deref().unwrap_or("none"))
            }
            "dyldcrossrefs" => dyldcache::set_dyldcrossrefs_env(self.dyldcrossrefs),
            "codestrings" => set_toggle_env(CODESTRINGS_ENV, self.codestrings),
            "nameladder" => set_toggle_env(NAMELADDER_ENV, self.nameladder),
            "swifttypes" => set_toggle_env(SWIFTTYPES_ENV, self.swifttypes),
            _ => {}
        }
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

fn set_toggle_env(name: &str, on: bool) {
    // FIXME: Audit that the environment access only happens in single-threaded code.
    unsafe { std::env::set_var(name, if on { "on" } else { "off" }) };
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

/// Each option read from its environment variable, in the vocabulary the CLI
/// exports: the fallback a gate takes outside every scope.
pub mod env {
    use super::*;

    fn path(name: &str) -> Option<PathBuf> {
        unlace_base::env::var_os(name)
            .filter(|p| !p.is_empty())
            .map(PathBuf::from)
    }

    pub fn ppc32picimports() -> Ppc32PicMode {
        unlace_base::env::var(crate::ppc32picimports::ENV).map_or(Ppc32PicMode::Off, |value| {
            Ppc32PicMode::from_env_value(&value)
        })
    }

    pub fn ifuncfpret() -> bool {
        env_toggle(crate::ifuncfpret::IFUNCFPRET_ENV, true)
    }

    pub fn ppcapu() -> bool {
        env_toggle(crate::ppcapu::PPCAPU_ENV, false)
    }

    pub fn kernelcache() -> KernelcacheChoice {
        KernelcacheChoice::from_env()
    }

    pub fn kernelcache_boot() -> KernelcacheBoot {
        KernelcacheBoot::from_env()
    }

    pub fn goabi() -> bool {
        env_toggle(crate::goabi::GOABI_ENV, true)
    }

    pub fn cil() -> bool {
        env_toggle(crate::cil::CIL_ENV, true)
    }

    pub fn symbolnamechars() -> NameChars {
        match unlace_base::env::var(crate::symbolnamechars::SYMBOLNAMECHARS_ENV) {
            Ok(v) => NameChars::parse(&v).unwrap_or_default(),
            Err(_) => NameChars::default(),
        }
    }

    pub fn libctypes() -> LibcTypesLayout {
        match unlace_base::env::var(crate::libctypes::LIBCTYPES_ENV) {
            Ok(v) => match v.trim().to_ascii_lowercase().as_str() {
                "off" | "0" | "false" => LibcTypesLayout::Off,
                "glibc" => LibcTypesLayout::Glibc,
                _ => LibcTypesLayout::Opaque,
            },
            Err(_) => LibcTypesLayout::Opaque,
        }
    }

    pub fn calltargettype() -> bool {
        env_toggle(super::CALLTARGETTYPE_ENV, true)
    }

    pub fn macho_arm64e() -> bool {
        env_toggle(crate::macho_arm64e::MACHO_ARM64E_ENV, true)
    }

    pub fn sourcelang() -> Option<SourceLang> {
        SourceLang::parse_forced(&unlace_base::env::var(crate::sourcelang::SOURCELANG_ENV).ok()?)
    }

    pub fn codestrings() -> bool {
        env_toggle(super::CODESTRINGS_ENV, true)
    }

    pub fn nameladder() -> bool {
        env_toggle(super::NAMELADDER_ENV, true)
    }

    pub fn swifttypes() -> bool {
        env_toggle(super::SWIFTTYPES_ENV, true)
    }

    pub fn delphiabi() -> bool {
        match unlace_base::env::var(crate::delphiabi::DELPHIABI_ENV) {
            Ok(v) => !matches!(
                v.trim().to_ascii_lowercase().as_str(),
                "off" | "0" | "false"
            ),
            Err(_) => true,
        }
    }

    pub fn debuglink() -> bool {
        env_toggle(crate::debuglink::DEBUGLINK_ENV, true)
    }

    pub fn exporttrie() -> bool {
        env_toggle(crate::exporttrie::EXPORTTRIE_ENV, true)
    }

    pub fn ruststdsigs() -> RustStdSigs {
        unlace_base::env::var(crate::ruststdsigs::RUSTSTDSIGS_ENV)
            .ok()
            .and_then(|v| RustStdSigs::parse(&v))
            .unwrap_or_default()
    }

    fn dwarf_toggle(name: &str) -> bool {
        unlace_base::env::var(name).map_or(true, |v| {
            !matches!(
                v.trim().to_ascii_lowercase().as_str(),
                "off" | "0" | "false"
            )
        })
    }

    pub fn dwarfscopes() -> bool {
        dwarf_toggle(super::DWARFSCOPES_ENV)
    }

    pub fn dwarfenumtypedef() -> bool {
        dwarf_toggle(super::DWARFENUMTYPEDEF_ENV)
    }

    pub fn objcivars() -> bool {
        match unlace_base::env::var(crate::objcivars::OBJCIVARS_ENV) {
            Ok(v) => !matches!(
                v.trim().to_ascii_lowercase().as_str(),
                "off" | "0" | "false" | "no"
            ),
            Err(_) => true,
        }
    }

    pub fn objcsdk() -> Option<PathBuf> {
        crate::objcsdk::sdk_path_from_env()
    }

    pub fn dyldimage() -> Option<String> {
        unlace_base::env::var(crate::dyldcache::DYLDIMAGE_ENV)
            .ok()
            .and_then(|v| crate::dyldcache::image_name(&v).map(str::to_string))
    }

    pub fn dyldcrossrefs() -> bool {
        env_toggle(crate::dyldcache::DYLDCROSSREFS_ENV, true)
    }

    pub fn macho_slice() -> Option<String> {
        unlace_base::env::var(MACHO_SLICE_ENV)
            .ok()
            .filter(|t| !t.trim().is_empty())
    }

    pub fn pdb_path() -> Option<PathBuf> {
        path(PDB_PATH_ENV)
    }

    pub fn pdb_symsrv() -> Option<String> {
        std::env::var(PDB_SYMSRV_ENV)
            .ok()
            .filter(|v| !v.trim().is_empty())
    }

    pub fn fid_db() -> Option<PathBuf> {
        path(FID_DB_ENV)
    }

    pub fn flirt_sigs() -> Vec<PathBuf> {
        unlace_base::env::var_os(FLIRT_SIGS_ENV)
            .map(|list| std::env::split_paths(&list).collect())
            .unwrap_or_default()
    }

    fn load_pass(name: &str) -> bool {
        !unlace_base::env::var(name).is_ok_and(|value| {
            matches!(
                value.trim().to_ascii_lowercase().as_str(),
                "off" | "0" | "false"
            )
        })
    }

    pub fn load_objc() -> bool {
        load_pass(LOAD_OBJC_ENV)
    }

    pub fn load_strings() -> bool {
        load_pass(LOAD_STRINGS_ENV)
    }

    pub fn load_mmap() -> bool {
        !unlace_base::env::var(LOAD_MMAP_ENV)
            .is_ok_and(|value| matches!(value.as_str(), "off" | "0" | "false"))
    }

    /// The `"<maj>.<min>"` release in `UNLACE_GOVERSION`; `None` when it is
    /// unset or unparsable.
    pub fn go_version() -> Option<(u16, u16)> {
        let value = unlace_base::env::var(crate::architecture::GOVERSION_ENV).ok()?;
        let mut parts = value.trim().split('.');
        Some((parts.next()?.parse().ok()?, parts.next()?.parse().ok()?))
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn scopes_nest_and_restore_per_thread() {
        assert_eq!(scoped(|o| o.goabi), None);
        let outer = LoadOptions {
            goabi: false,
            ..LoadOptions::default()
        };
        let _outer = outer.enter();
        assert_eq!(scoped(|o| o.goabi), Some(false));
        {
            let _inner = LoadOptions::default().enter();
            assert_eq!(scoped(|o| o.goabi), Some(true));
            std::thread::spawn(|| assert_eq!(scoped(|o| o.goabi), None))
                .join()
                .unwrap();
        }
        assert_eq!(scoped(|o| o.goabi), Some(false));
        assert!(!LoadOptions::in_force().goabi);
    }

    #[test]
    fn a_scope_restores_the_enclosing_options_after_a_panic() {
        let _outer = LoadOptions {
            dyldcrossrefs: false,
            ..LoadOptions::default()
        }
        .enter();
        let unwound = std::panic::catch_unwind(|| {
            let _inner = LoadOptions::default().enter();
            panic!("load failed");
        });
        assert!(unwound.is_err());
        assert_eq!(scoped(|o| o.dyldcrossrefs), Some(false));
    }

    #[test]
    fn a_scope_dropped_out_of_order_leaves_the_live_ones_in_force() {
        let first = LoadOptions {
            goabi: false,
            ..LoadOptions::default()
        }
        .enter();
        let second = LoadOptions {
            ppcapu: true,
            ..LoadOptions::default()
        }
        .enter();
        let environment = enter_environment();
        drop(second);
        assert_eq!(
            scoped(|o| o.goabi),
            None,
            "the environment scope is still innermost"
        );
        drop(first);
        assert_eq!(scoped(|o| o.goabi), None);
        let third = LoadOptions {
            ppcapu: true,
            ..LoadOptions::default()
        }
        .enter();
        drop(environment);
        assert_eq!(scoped(|o| o.ppcapu), Some(true));
        drop(third);
        assert_eq!(scoped(|o| o.goabi), None, "no scope outlives its guard");
        assert!(!options_in_force());
    }

    #[test]
    fn gates_read_the_scope_not_the_environment() {
        let options = LoadOptions {
            ifuncfpret: false,
            ppcapu: true,
            kernelcache: KernelcacheChoice::Off,
            kernelcache_boot: KernelcacheBoot::Off,
            symbolnamechars: NameChars::Ident,
            libctypes: LibcTypesLayout::Glibc,
            calltargettype: false,
            macho_arm64e: false,
            sourcelang: Some(SourceLang::Rust),
            ppc32picimports: Ppc32PicMode::Abi,
            objcivars: false,
            objcsdk: Some(PathBuf::from("/sdk")),
            dyldimage: Some("libfoo.dylib".into()),
            dyldcrossrefs: false,
            cil: false,
            codestrings: false,
            nameladder: false,
            swifttypes: false,
            delphiabi: false,
            debuglink: false,
            exporttrie: false,
            ruststdsigs: RustStdSigs::Nearest,
            ..LoadOptions::default()
        };
        let _scope = options.enter();
        assert!(!crate::delphiabi::delphiabi_enabled());
        assert!(!crate::debuglink::debuglink_enabled());
        assert!(!crate::exporttrie::exporttrie_enabled());
        assert_eq!(crate::ruststdsigs::ruststdsigs(), RustStdSigs::Nearest);
        assert!(!crate::loadoptions::codestrings_enabled());
        assert!(!crate::loadoptions::nameladder_enabled());
        assert!(!crate::loadoptions::swifttypes_enabled());
        assert!(!crate::ifuncfpret::ifuncfpret_enabled());
        assert!(crate::ppcapu::ppcapu_enabled());
        assert_eq!(KernelcacheChoice::in_force(), KernelcacheChoice::Off);
        assert_eq!(KernelcacheBoot::in_force(), KernelcacheBoot::Off);
        assert_eq!(
            crate::symbolnamechars::symbolnamechars_mode(),
            NameChars::Ident
        );
        assert_eq!(crate::libctypes::libctypes_layout(), LibcTypesLayout::Glibc);
        assert!(
            !crate::loadoptions::scoped(|o| o.calltargettype)
                .unwrap_or_else(crate::loadoptions::env::calltargettype)
        );
        assert!(!crate::macho_arm64e::macho_arm64e_enabled());
        assert_eq!(crate::sourcelang::forced(), Some(SourceLang::Rust));
        assert!(crate::ppc32picimports::abi_enabled());
        assert!(!crate::objcivars::objcivars_enabled());
        assert_eq!(crate::objcsdk::sdk_path(), Some(PathBuf::from("/sdk")));
        assert_eq!(
            crate::dyldcache::selected_image().as_deref(),
            Some("libfoo.dylib")
        );
        assert!(!crate::dyldcache::dyldcrossrefs_enabled());
        assert!(!crate::cil::cil_enabled());
    }
}
