//! One builder for every bootstrap. A [`Bootstrap`] names where the languages
//! come from, then takes each setting a load can have — the target language,
//! the ARM decode mode, the load-time options — and loads one input with it.
//! Each `bootstrap_*` free function calls it with fixed settings.

use std::rc::Rc;

use unlace_base::error::{UnlaceError, UnlaceResult};
use unlace_base::xml::Element;
use unlace_decomp::loadoptions::{LoadOptions, LoadScope};

use crate::engine::{
    ArmIsa, ConsoleProgram, FileInput, Languages, RawBytes, bootstrap_cil, bootstrap_dex_bytes,
    bootstrap_esp_image, bootstrap_image, bootstrap_mz_bytes, bootstrap_object,
    bootstrap_raw_image, bootstrap_retro_bytes, bootstrap_te, bootstrap_te_bytes,
    bootstrap_wasm_bytes, bootstrap_xml_image, classify_file, xml_root_image,
};

/// Where a [`Bootstrap`] finds its languages: spec roots (a slice, array or
/// `Vec` of anything [`IntoSpecRoot`](unlace_decomp::memoryspecs::IntoSpecRoot)
/// takes) it scans at each load, or a
/// [`LanguageDatabase`](unlace_decomp::sleigh_arch::LanguageDatabase) a caller
/// scanned once with [`language_database`](crate::engine::language_database).
/// Unlace implements it; callers cannot.
pub trait LanguageSource: Languages {}

impl<L: Languages + ?Sized> LanguageSource for L {}

/// The settings for loading a binary into a [`ConsoleProgram`].
///
/// ```no_run
/// # use unlace_console::engine::{language_database, ArmIsa, Bootstrap};
/// # use unlace_decomp::loadoptions::LoadOptions;
/// let db = language_database(&["specs"])?;
/// let options = LoadOptions::default();
/// let load = Bootstrap::new(&db).arm_isa(Some(ArmIsa::Thumb)).options(&options);
/// let first = load.object("a.elf")?;
/// let second = load.object("b.elf")?;
/// # Ok::<(), unlace_base::error::UnlaceError>(())
/// ```
///
/// Each setting has a default:
///
/// - **target**: empty, so the input chooses its language. A raw image has no
///   header to choose from and needs one.
/// - **options**: none, so the load reads its options from the process
///   environment once, as [`LoadOptions::from_env_for_load`] states them, even
///   when another program's options are in force on the thread. With
///   [`Bootstrap::options`], it reads none. Either way nothing on the load
///   writes the environment, and the program keeps the options for its
///   analysis commit and decompiles.
/// - **arm_isa**: unset, so the options' `arm_isa` decides: without options
///   that is `UNLACE_ARM_ISA` read at the load, with options the field's value
///   (`None` by default, the image's own evidence decides).
///
/// The builder only borrows its settings and holds no state of its own, so
/// one builder can load many inputs, on one thread or on several. Each load
/// enters its options on the thread that runs it and leaves them when it
/// returns.
pub struct Bootstrap<'a, L: LanguageSource + ?Sized> {
    languages: &'a L,
    target: &'a str,
    arm_isa: Option<Option<ArmIsa>>,
    options: Option<&'a LoadOptions>,
}

impl<L: LanguageSource + ?Sized> Clone for Bootstrap<'_, L> {
    fn clone(&self) -> Self {
        *self
    }
}

impl<L: LanguageSource + ?Sized> Copy for Bootstrap<'_, L> {}

impl<'a, L: LanguageSource + ?Sized> Bootstrap<'a, L> {
    /// A bootstrap over `languages`, with every other setting at its default.
    pub fn new(languages: &'a L) -> Self {
        Self {
            languages,
            target: "",
            arm_isa: None,
            options: None,
        }
    }

    /// The SLEIGH language id to load as. Empty or `default` lets the input
    /// choose; any other id overrides the language the input names. An XML
    /// input carries its own and ignores this.
    pub fn target(mut self, target: &'a str) -> Self {
        self.target = target;
        self
    }

    /// The ARM/Thumb decode mode for a 32-bit ARM target: `Some` paints the
    /// executable ranges with it, `None` leaves the image's own evidence to
    /// decide. A load whose language is not 32-bit ARM fails when this is
    /// `Some`. Not read for an XML input.
    pub fn arm_isa(mut self, isa: Option<ArmIsa>) -> Self {
        self.arm_isa = Some(isa);
        self
    }

    /// The load-time options, in place of the environment.
    pub fn options(mut self, options: &'a LoadOptions) -> Self {
        self.options = Some(options);
        self
    }

    /// Load an object-format binary: ELF, PE, Mach-O or COFF, as
    /// [`bootstrap_from_object`](crate::engine::bootstrap_from_object) does.
    pub fn object(&self, path: &str) -> UnlaceResult<ConsoleProgram> {
        let isa = self.resolved_isa()?;
        match self.options {
            Some(options) => {
                bootstrap_object(path, self.target, self.languages, isa, options, false)
            }
            None => bootstrap_object(
                path,
                self.target,
                self.languages,
                isa,
                &LoadOptions::from_env_for_load(),
                false,
            ),
        }
    }

    /// Load a real image on disk, choosing the loader by its bytes: a UEFI
    /// TE, a DOS `MZ`, one of the [`Bootstrap::retro_bytes`] containers, or an
    /// object-format binary, as
    /// [`bootstrap_from_image`](crate::engine::bootstrap_from_image) does.
    pub fn image(&self, path: &str) -> UnlaceResult<ConsoleProgram> {
        let isa = self.resolved_isa()?;
        match self.options {
            Some(options) => {
                bootstrap_image(path, self.target, self.languages, isa, options, false)
            }
            None => bootstrap_image(
                path,
                self.target,
                self.languages,
                isa,
                &LoadOptions::from_env_for_load(),
                false,
            ),
        }
    }

    /// Load any input `load file` accepts: a real image as [`Bootstrap::image`]
    /// takes it, or an XML document holding a `<binaryimage>`, as
    /// [`bootstrap_from_file`](crate::engine::bootstrap_from_file) does.
    pub fn file(&self, path: &str) -> UnlaceResult<ConsoleProgram> {
        let input = {
            let _load = self.enter();
            classify_file(path)?
        };
        match input {
            FileInput::Wasm(bytes) => self.wasm_bytes(path, &bytes),
            FileInput::Mz(bytes) => self.mz_bytes(path, &bytes),
            FileInput::Esp(image) => {
                let isa = self.resolved_isa()?;
                let _load = self.enter();
                bootstrap_esp_image(path, &image, self.target, self.languages, isa)
            }
            FileInput::Te(bytes) => self.te_bytes(path, &bytes),
            FileInput::Retro(bytes) => self.retro_bytes(path, &bytes),
            FileInput::Dex(bytes) => self.dex_bytes(path, bytes),
            FileInput::Class(bytes) => {
                let _load = self.enter();
                crate::engine::bootstrap_class_bytes(path, bytes, self.target, self.languages)
            }
            FileInput::Cil(image) => {
                let _load = self.enter();
                bootstrap_cil(path, *image, self.languages)
            }
            FileInput::Object => self.object(path),
            FileInput::Xml(root) => self.xml_root(&root),
        }
    }

    /// Load a headerless byte image mapped at `base`, its functions found from
    /// `entries`, as [`bootstrap_from_raw`](crate::engine::bootstrap_from_raw)
    /// does. Needs a target.
    pub fn raw(&self, path: &str, base: u64, entries: &[u64]) -> UnlaceResult<ConsoleProgram> {
        let isa = self.resolved_isa()?;
        let _load = self.enter();
        bootstrap_raw_image(
            path,
            self.target,
            base,
            entries,
            isa,
            self.languages,
            RawBytes::File,
        )
    }

    /// Load a headerless image from separate runs of bytes, each `(address,
    /// bytes, flags)` with [`section_flags`](unlace_sleigh::loadimage::section_flags),
    /// as [`bootstrap_from_raw_segments`](crate::engine::bootstrap_from_raw_segments) does.
    pub fn raw_segments(
        &self,
        path: &str,
        runs: Vec<(u64, Vec<u8>, u32)>,
        entries: &[u64],
    ) -> UnlaceResult<ConsoleProgram> {
        let isa = self.resolved_isa()?;
        let (image, base) = unlace_sleigh::loadimage::RawLoadImage::from_segments(path, runs)
            .ok_or_else(|| {
                UnlaceError::lowlevel(
                    "raw segments: none holds a byte, two overlap, or one wraps the address space",
                )
            })?;
        let _load = self.enter();
        bootstrap_raw_image(
            path,
            self.target,
            base,
            entries,
            isa,
            self.languages,
            RawBytes::Segmented(image),
        )
    }

    /// Load a UEFI TE image, as [`bootstrap_from_te`](crate::engine::bootstrap_from_te) does.
    pub fn te(&self, path: &str) -> UnlaceResult<ConsoleProgram> {
        let isa = self.resolved_isa()?;
        let _load = self.enter();
        bootstrap_te(path, self.target, self.languages, isa)
    }

    /// Load a UEFI TE image from bytes already read from `path`, as
    /// [`bootstrap_from_te_bytes`](crate::engine::bootstrap_from_te_bytes) does.
    pub fn te_bytes(&self, path: &str, bytes: &[u8]) -> UnlaceResult<ConsoleProgram> {
        let isa = self.resolved_isa()?;
        let _load = self.enter();
        bootstrap_te_bytes(path, bytes, self.target, self.languages, isa)
    }

    /// Load a DEX file, or an APK's `classes*.dex` files, from bytes already
    /// read from `path`, as [`bootstrap_from_dex_bytes`](crate::engine::bootstrap_from_dex_bytes) does.
    pub fn dex_bytes(&self, path: &str, bytes: Vec<u8>) -> UnlaceResult<ConsoleProgram> {
        let _load = self.enter();
        bootstrap_dex_bytes(path, bytes, self.target, self.languages)
    }

    /// Load a DOS `MZ` executable from bytes already read from `path`, as
    /// [`bootstrap_from_mz_bytes`](crate::engine::bootstrap_from_mz_bytes) does.
    pub fn mz_bytes(&self, path: &str, bytes: &[u8]) -> UnlaceResult<ConsoleProgram> {
        let isa = self.resolved_isa()?;
        let _load = self.enter();
        bootstrap_mz_bytes(path, bytes, self.target, self.languages, isa)
    }

    /// Load a WebAssembly module from bytes already read from `path`, as
    /// [`bootstrap_from_wasm_bytes`](crate::engine::bootstrap_from_wasm_bytes) does.
    pub fn wasm_bytes(&self, path: &str, bytes: &[u8]) -> UnlaceResult<ConsoleProgram> {
        let _load = self.enter();
        bootstrap_wasm_bytes(path, bytes, self.target, self.languages)
    }

    /// Load a PS-X EXE, N64 ROM, a.out, Amiga hunk or PEF executable from
    /// bytes already read from `path`.
    pub fn retro_bytes(&self, path: &str, bytes: &[u8]) -> UnlaceResult<ConsoleProgram> {
        let isa = self.resolved_isa()?;
        let _load = self.enter();
        bootstrap_retro_bytes(path, bytes, self.target, self.languages, isa)
    }

    /// Load a `<binaryimage>` element as language `arch_id`, as
    /// [`bootstrap_program`](crate::engine::bootstrap_program) does.
    pub fn xml_image(
        &self,
        binaryimage: Rc<Element>,
        arch_id: &str,
    ) -> UnlaceResult<ConsoleProgram> {
        let _load = self.enter();
        bootstrap_xml_image(binaryimage, arch_id, self.languages)
    }

    /// Load the `<binaryimage>` inside a parsed XML document, as language its
    /// `arch` attribute names, as
    /// [`bootstrap_from_root`](crate::engine::bootstrap_from_root) does.
    pub fn xml_root(&self, root: &Rc<Element>) -> UnlaceResult<ConsoleProgram> {
        let (binaryimage, arch_id) = xml_root_image(root)?;
        self.xml_image(binaryimage, &arch_id)
    }

    fn enter(&self) -> LoadScope {
        match self.options {
            Some(options) => options.enter(),
            None => LoadOptions::from_env_for_load().enter(),
        }
    }

    fn resolved_isa(&self) -> UnlaceResult<Option<ArmIsa>> {
        if let Some(isa) = self.arm_isa {
            return Ok(isa);
        }
        let read = |options: &LoadOptions| options.arm_isa.clone().map_err(UnlaceError::lowlevel);
        match self.options {
            Some(options) => read(options),
            None => read(&LoadOptions::from_env_for_load()),
        }
    }
}
