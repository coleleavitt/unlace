//! Shared object-file view, including Mach-O slice selection, the PE view of
//! a TE image, and MZ refusal.

use unlace_analysis::loader::kernelcache::FilesetMap;
use unlace_analysis::loader::macho_fat::SlicePref;

/// Inspect a thin Mach-O through its mapping; retain legacy reads for other inputs.
pub(crate) fn inspect<T>(binary: &str, inspect: impl FnOnce(&[u8]) -> Option<T>) -> Option<T> {
    match unlace_analysis::image_bytes::ImageBytes::map_thin_macho(binary)
        .ok()
        .flatten()
    {
        Some(bytes) => inspect(&bytes),
        _ => {
            let bytes = unlace_analysis::loader::elf_shdr::read_image(binary).ok()?;
            inspect(&bytes)
        }
    }
}

/// Read the loader's selected image slice for an object-file consumer. A UEFI
/// TE input is handed out as its PE view (`objectview`), which maps every
/// section where the TE loader does.
pub(crate) fn image_bytes(binary: &str, pref: SlicePref) -> Result<Vec<u8>, String> {
    image_bytes_and_fileset(binary, pref).map(|(bytes, _)| bytes)
}

/// [`image_bytes`], and the entry map of the `MH_FILESET` kernel collection
/// the image is one entry of.
pub(crate) fn image_bytes_and_fileset(
    binary: &str,
    pref: SlicePref,
) -> Result<(Vec<u8>, Option<FilesetMap>), String> {
    let image = unlace_analysis::loader::elf_shdr::read_image_selected(binary, pref)
        .map_err(|e| format!("{binary}: {e}"))?;
    Ok((object_view(binary, image.bytes)?, image.fileset))
}

/// `[start, end)` offsets into an image slice whose bytes are not the file's.
pub(crate) type Repairs = Vec<(u64, u64)>;

/// [`image_bytes`], and the [`Repairs`]: the header fields the loader's repairs
/// rewrote so the image parses at all (a corrupt ELF section table, DOS magic
/// or PE data-directory count). The file is read a second time only when a
/// repair happened.
pub(crate) fn image_bytes_and_repairs(
    binary: &str,
    pref: SlicePref,
) -> Result<(Vec<u8>, Repairs), String> {
    let (bytes, repaired) =
        unlace_analysis::loader::elf_shdr::read_image_sliced_repaired(binary, pref)
            .map_err(|e| format!("{binary}: {e}"))?;
    let bytes = object_view(binary, bytes)?;
    if !repaired {
        return Ok((bytes, Vec::new()));
    }
    let file = std::fs::read(binary).map_err(|e| format!("{binary}: {e}"))?;
    let file = unlace_analysis::loader::macho_fat::peel_fat_image(file, pref);
    let mut spans = Repairs::new();
    for (i, &b) in bytes.iter().enumerate() {
        if file.get(i) == Some(&b) {
            continue;
        }
        let at = i as u64; // cast: a byte index
        match spans.last_mut() {
            Some(last) if last.1 == at => last.1 = at + 1,
            _ => spans.push((at, at + 1)),
        }
    }
    Ok((bytes, spans))
}

/// `bytes`, unless the image has no object-file view (TE, MZ, WebAssembly,
/// the `retroimage` formats).
fn object_view(binary: &str, bytes: Vec<u8>) -> Result<Vec<u8>, String> {
    if unlace_analysis::loadimage_te::is_te_image(&bytes) {
        return unlace_analysis::loader::objectview::te_as_pe(&bytes)
            .ok_or_else(|| format!("{binary}: UEFI TE section table does not fit the file"));
    }
    if unlace_analysis::loadimage_mz::is_mz_dos_image(&bytes) {
        return Err(mz_object_view_error(binary));
    }
    if unlace_analysis::loader::retroimage::is_retro_image(&bytes) {
        return Err(retro_object_view_error(binary));
    }
    if unlace_analysis::loadimage_wasm::is_wasm_module(&bytes) {
        return Err(wasm_object_view_error(binary));
    }
    Ok(bytes)
}

/// Where [`image_bytes`]'s slice starts in `binary`: the selected arch's offset
/// in a fat Mach-O, and `0` for every thin input. Only a file that opens with a
/// fat magic is read whole a second time.
pub(crate) fn slice_offset(binary: &str, pref: SlicePref) -> u64 {
    use std::io::Read;
    let mut head = [0u8; 16];
    let opened = std::fs::File::open(binary).and_then(|mut f| f.read_exact(&mut head));
    if opened.is_err() || !unlace_analysis::loader::macho_fat::is_fat(&head) {
        return 0;
    }
    std::fs::read(binary)
        .ok()
        .and_then(|bytes| unlace_analysis::loader::macho_fat::fat_slice_offset(&bytes, pref))
        .unwrap_or(0)
}

/// The same capability error for a PS-X EXE, N64 ROM, a.out, Amiga hunk or
/// PEF executable, which loads through its own parser.
fn retro_object_view_error(binary: &str) -> String {
    format!(
        "{binary}: this executable format has no object-file view, which this operation needs; \
         its support covers decompile, decompile-all, functions, disassemble/read, \
         decompile-project, and the console"
    )
}

/// The capability error every object-view consumer reports for an MS-DOS
/// `MZ` executable, which loads as one relocated real-mode image with no
/// sections or symbols.
fn mz_object_view_error(binary: &str) -> String {
    format!(
        "{binary}: MS-DOS MZ input has no object-file view, which this operation needs; \
         MZ support covers decompile, decompile-all, functions, disassemble/read, \
         decompile-project, and the console"
    )
}

/// The same capability error for a WebAssembly module, which loads as a flat
/// image of lowered code, linear memory, globals and tables.
fn wasm_object_view_error(binary: &str) -> String {
    format!(
        "{binary}: WebAssembly input has no object-file view, which this operation needs; \
         WebAssembly support covers decompile, decompile-all, functions, disassemble/read, \
         raw-pcode, decompile-project, and the console"
    )
}

/// The `--raw-image --base <addr> --entry <addr>` flags of an object-view
/// consumer (`strings`, `crypto`, `xrefs`): the same headerless load
/// `decompile-all` takes, read through its ELF view (`objectview`).
#[derive(Clone, Debug, Default)]
pub(crate) struct RawFlags {
    pub(crate) on: bool,
    pub(crate) base: Option<u64>,
    pub(crate) entries: Vec<u64>,
}

impl RawFlags {
    /// Take the raw-image flag at `argv[*i]`, if it is one.
    pub(crate) fn take(&mut self, argv: &[String], i: &mut usize) -> Result<bool, String> {
        match argv[*i].as_str() {
            "--raw-image" => self.on = true,
            "--base" => {
                self.base = Some(parse_address(&crate::args::take_value(argv, i, "--base")?)?)
            }
            "--entry" => self.entries.push(parse_address(&crate::args::take_value(
                argv, i, "--entry",
            )?)?),
            _ => return Ok(false),
        }
        Ok(true)
    }

    /// The flag combinations a raw load needs, checked once the line is read.
    pub(crate) fn check(&self, target: Option<&str>) -> Result<(), String> {
        if !self.on {
            if self.base.is_some() || !self.entries.is_empty() {
                return Err("--base and --entry require --raw-image".into());
            }
            return Ok(());
        }
        if target.is_none_or(|t| t.trim().is_empty()) {
            return Err("--raw-image requires --target <SLEIGH-language-id>".into());
        }
        if self.base.is_none() {
            return Err("--raw-image requires --base <address>".into());
        }
        if self.entries.is_empty() {
            return Err("--raw-image requires at least one --entry".into());
        }
        Ok(())
    }

    /// Carry the raw load into the driver arguments `load_program` takes.
    pub(crate) fn apply(&self, args: &mut crate::decompile_all::Args) {
        args.raw_image = self.on;
        args.base = self.base;
        args.entry_seeds = self
            .entries
            .iter()
            .map(|&a| unlace_console::engine::EntrySelector::Numeric(a))
            .collect();
    }

    /// The object view the consumer scans: the ELF view of a raw image, else
    /// [`image_bytes`].
    pub(crate) fn image(
        &self,
        binary: &str,
        pref: SlicePref,
        target: Option<&str>,
    ) -> Result<Vec<u8>, String> {
        self.image_and_fileset(binary, pref, target)
            .map(|(bytes, _)| bytes)
    }

    /// [`Self::image`], and the entry map of the `MH_FILESET` kernel collection
    /// the image is one entry of (a raw image is of none).
    pub(crate) fn image_and_fileset(
        &self,
        binary: &str,
        pref: SlicePref,
        target: Option<&str>,
    ) -> Result<(Vec<u8>, Option<FilesetMap>), String> {
        if !self.on {
            return image_bytes_and_fileset(binary, pref);
        }
        let bytes = std::fs::read(binary).map_err(|e| format!("{binary}: {e}"))?;
        let base = self.base.unwrap_or(0);
        let entry = self.entries.first().copied().unwrap_or(base);
        let language = target.unwrap_or_default();
        let view = unlace_analysis::loader::objectview::raw_as_elf(&bytes, base, entry, language)
            .ok_or_else(|| {
            format!(
                "{binary}: --target {language:?} does not name a processor:endian:size language"
            )
        })?;
        Ok((view, None))
    }
}

fn parse_address(s: &str) -> Result<u64, String> {
    let t = s.trim();
    let body = t
        .strip_prefix("0x")
        .or_else(|| t.strip_prefix("0X"))
        .unwrap_or(t);
    u64::from_str_radix(body, 16).map_err(|_| format!("invalid address {s:?}"))
}
