//! Turning an on-disk binary into a [`BinaryImage`] ready for analysis.

use std::path::Path;

use anyhow::{Context, Result, bail};
use unlace_loader::{
    ArchId, BinaryImage, ElfLoader, Loader, MachoLoader, PeLoader, import_pdb, import_pdb_types,
};

use crate::profiling::{self, TraceField};

/// Parse `data`, read from `binary_path`, with the first loader that recognizes it.
/// `preferred_arch` picks the slice of a universal Mach-O.
pub fn parse_image(
    data: &[u8],
    binary_path: &Path,
    preferred_arch: Option<ArchId>,
) -> Result<BinaryImage> {
    if ElfLoader::can_load(data) {
        ElfLoader::load(data)
    } else if MachoLoader::can_load(data) {
        MachoLoader::load_arch(data, preferred_arch)
    } else if PeLoader::can_load(data) {
        PeLoader::load(data)
    } else {
        bail!(
            "'{}' is not a recognized binary format (ELF, Mach-O, or PE)",
            binary_path.display(),
        );
    }
    .with_context(|| format!("failed to parse '{}'", binary_path.display()))
}

/// Read and parse `binary_path`, then attach any PDB found next to it, the
/// same preparation `unlace decompile` applies before discovery.
pub fn open_image(binary_path: &Path) -> Result<BinaryImage> {
    let data = std::fs::read(binary_path)
        .with_context(|| format!("failed to read '{}'", binary_path.display()))?;
    let mut image = parse_image(&data, binary_path, None)?;
    attach_pdb_sidecar(&mut image, binary_path);
    Ok(image)
}

/// Import PDB types and debug info from a sidecar next to `binary_path`,
/// trying CodeView-recorded basenames first and then `<stem>.pdb`.
pub fn attach_pdb_sidecar(image: &mut BinaryImage, binary_path: &std::path::Path) {
    if image.pdb_types.is_some() && image.pdb_info.is_some() {
        return;
    }
    let parent = binary_path
        .parent()
        .unwrap_or_else(|| std::path::Path::new("."));
    let mut candidates: Vec<std::path::PathBuf> = Vec::new();

    for rec in &image.debug_records {
        if let Some(pdb_path) = rec.pdb_path.as_deref()
            && let Some(name) = std::path::Path::new(pdb_path).file_name()
        {
            candidates.push(parent.join(name));
        }
    }
    if let Some(stem) = binary_path.file_stem() {
        let mut sibling = parent.join(stem);
        sibling.set_extension("pdb");
        candidates.push(sibling);
    }

    for candidate in candidates {
        if !candidate.exists() {
            continue;
        }
        let mut loaded_sidecar = false;
        if image.pdb_types.is_none() {
            match import_pdb_types(&candidate) {
                Ok(types) => {
                    profiling::diagnostic(
                        "info",
                        "loaded PDB type sidecar",
                        [
                            TraceField::text("pdb", candidate.display().to_string()),
                            TraceField::count("structs", types.structs.len() as u64),
                        ],
                    );
                    image.pdb_types = Some(types);
                    loaded_sidecar = true;
                }
                Err(e) => {
                    profiling::diagnostic(
                        "debug",
                        "PDB type sidecar import failed; continuing without it",
                        [
                            TraceField::text("pdb", candidate.display().to_string()),
                            TraceField::text("err", e.to_string()),
                        ],
                    );
                }
            }
        }
        if image.pdb_info.is_none() {
            match import_pdb(&candidate) {
                Ok(info) => {
                    profiling::diagnostic(
                        "info",
                        "loaded PDB debug sidecar",
                        [
                            TraceField::text("pdb", candidate.display().to_string()),
                            TraceField::count("local_functions", info.function_locals.len() as u64),
                        ],
                    );
                    image.pdb_info = Some(info);
                    loaded_sidecar = true;
                }
                Err(e) => {
                    profiling::diagnostic(
                        "debug",
                        "PDB debug sidecar import failed; continuing without it",
                        [
                            TraceField::text("pdb", candidate.display().to_string()),
                            TraceField::text("err", e.to_string()),
                        ],
                    );
                }
            }
        }
        if loaded_sidecar {
            return;
        }
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    use unlace_loader::{ArchId, DebugRecord, Endian};

    #[test]
    fn attach_pdb_sidecar_is_noop_when_no_pdb_present() {
        let tmp = tempfile::tempdir().expect("tempdir");
        let bin = tmp.path().join("nopdb.exe");
        std::fs::write(&bin, b"MZ").unwrap();

        let mut image = BinaryImage::empty(ArchId::X86_64, Endian::Little);
        assert!(image.pdb_types.is_none());
        attach_pdb_sidecar(&mut image, &bin);
        assert!(
            image.pdb_types.is_none(),
            "no sidecar should leave pdb_types empty",
        );
    }

    #[test]
    fn attach_pdb_sidecar_skips_when_already_populated() {
        // Pre-populate pdb_types to force the early-return branch and
        // confirm the helper does not stomp existing data.
        let tmp = tempfile::tempdir().expect("tempdir");
        let bin = tmp.path().join("preloaded.exe");
        std::fs::write(&bin, b"MZ").unwrap();

        let mut image = BinaryImage::empty(ArchId::X86_64, Endian::Little);
        image.pdb_types = Some(Default::default());
        let before_ptr = image.pdb_types.as_ref().map(|t| t as *const _);
        attach_pdb_sidecar(&mut image, &bin);
        let after_ptr = image.pdb_types.as_ref().map(|t| t as *const _);
        assert_eq!(
            before_ptr, after_ptr,
            "existing pdb_types must be preserved"
        );
    }

    #[test]
    fn attach_pdb_sidecar_drops_absolute_build_host_path() {
        // PE CodeView records frequently contain a Windows build-host
        // absolute path (e.g. `D:\src\foo\bar.pdb`). The helper must
        // resolve only by basename next to the binary, so a nonexistent
        // absolute path never causes a panic or attempts to load it.
        let tmp = tempfile::tempdir().expect("tempdir");
        let bin = tmp.path().join("absolute-cv.exe");
        std::fs::write(&bin, b"MZ").unwrap();

        let mut image = BinaryImage::empty(ArchId::X86_64, Endian::Little);
        image.debug_records.push(DebugRecord {
            typ: 2, // IMAGE_DEBUG_TYPE_CODEVIEW
            time_stamp: 0,
            pdb_path: Some("D:\\nonexistent\\absolute\\path.pdb".into()),
            pdb_guid: None,
            pdb_age: None,
        });
        attach_pdb_sidecar(&mut image, &bin);
        assert!(
            image.pdb_types.is_none(),
            "no real .pdb on disk → no panic, no spurious load",
        );
    }
}
