//! (unlace `debuglink`) A Mach-O image's separate debug information: the `.dSYM`
//! bundle that `dsymutil` writes beside it.
//!
//! A shipped binary is stripped and its DWARF lives in
//! `<name>.dSYM/Contents/Resources/DWARF/<name>`, where `<name>` is the binary's
//! file name. For a framework or bundle the bundle is named after the wrapper,
//! `Foo.framework.dSYM` next to `Foo.framework`, so each enclosing directory up
//! to three levels is tried by its own name. A candidate is accepted only when
//! its `LC_UUID` equals the image's, so a dSYM of another build is never applied.
//! A universal dSYM keeps one thin Mach-O per arch; the slice whose UUID matches
//! the image is the one returned.

use object::Object;
use object::read::macho::{FatArch, MachOFatFile32, MachOFatFile64};
use std::path::{Path, PathBuf};

/// A debug file larger than this is not read.
const MAX_DSYM_BYTES: u64 = 1 << 30;

/// Enclosing directories tried for a bundle, the binary's own included.
const BUNDLE_DEPTH: usize = 3;

/// The dSYM DWARF file of `image`, with the thin Mach-O bytes of the slice that
/// carries the image's UUID.
pub fn find_dsym(file: &object::File, image: &Path) -> Option<(PathBuf, Vec<u8>)> {
    let want = file.mach_uuid().ok().flatten()?;
    for path in candidates(image) {
        let Ok(meta) = std::fs::metadata(&path) else {
            continue;
        };
        if !meta.is_file() || meta.len() > MAX_DSYM_BYTES {
            continue;
        }
        let Ok(bytes) = std::fs::read(&path) else {
            continue;
        };
        if let Some(slice) = slice_with_uuid(&bytes, &want) {
            return Some((path, slice));
        }
    }
    None
}

/// The DWARF file a dSYM for `image` would hold, tried in search order.
fn candidates(image: &Path) -> Vec<PathBuf> {
    let Some(name) = image.file_name() else {
        return Vec::new();
    };
    let dwarf = |bundle: &Path| bundle.join("Contents/Resources/DWARF").join(name);
    let mut out = Vec::new();
    let mut dir = image.parent();
    for _ in 0..BUNDLE_DEPTH {
        let Some(d) = dir else { break };
        if let (Some(parent), Some(bundle)) = (d.parent(), d.file_name()) {
            let mut dsym = bundle.to_os_string();
            dsym.push(".dSYM");
            out.push(dwarf(&parent.join(dsym)));
        }
        dir = d.parent();
    }
    if let Some(parent) = image.parent() {
        let mut dsym = name.to_os_string();
        dsym.push(".dSYM");
        out.push(dwarf(&parent.join(dsym)));
    }
    out
}

/// The thin Mach-O in `bytes` (itself, or the slice of a universal file) whose
/// `LC_UUID` is `want`.
fn slice_with_uuid(bytes: &[u8], want: &[u8; 16]) -> Option<Vec<u8>> {
    if let Ok(fat) = MachOFatFile32::parse(bytes) {
        return fat
            .arches()
            .iter()
            .find_map(|arch| thin_with_uuid(arch.data(bytes).ok()?, want));
    }
    if let Ok(fat) = MachOFatFile64::parse(bytes) {
        return fat
            .arches()
            .iter()
            .find_map(|arch| thin_with_uuid(arch.data(bytes).ok()?, want));
    }
    thin_with_uuid(bytes, want)
}

fn thin_with_uuid(bytes: &[u8], want: &[u8; 16]) -> Option<Vec<u8>> {
    let file = object::File::parse(bytes).ok()?;
    (file.mach_uuid().ok().flatten()? == *want).then(|| bytes.to_vec())
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn candidates_walk_enclosing_bundles() {
        let c = candidates(Path::new("/s/Foo.framework/Versions/A/Foo"));
        assert!(c.contains(&PathBuf::from(
            "/s/Foo.framework.dSYM/Contents/Resources/DWARF/Foo"
        )));
        assert!(c.contains(&PathBuf::from(
            "/s/Foo.framework/Versions/A/Foo.dSYM/Contents/Resources/DWARF/Foo"
        )));
    }

    #[test]
    fn candidates_for_a_bare_binary() {
        let c = candidates(Path::new("/s/Toyota"));
        assert!(c.contains(&PathBuf::from(
            "/s/Toyota.dSYM/Contents/Resources/DWARF/Toyota"
        )));
    }

    #[test]
    fn a_non_macho_has_no_slice() {
        assert!(slice_with_uuid(b"\x7fELF not a macho", &[0; 16]).is_none());
    }
}
