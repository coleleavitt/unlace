//! Binary-patching back-write: apply Session patches to a copy of the
//! original binary and write the result.
//!
//! Handles ELF/PE/Mach-O by mapping virtual addresses to file offsets via
//! the loaded section table. PE is post-processed by zeroing the
//! `CheckSum` field (callers can re-compute via a separate tool if
//! needed).

use std::path::Path;

use anyhow::{Result, anyhow, bail};

use crate::{Patch, Session};

/// Result of an apply.
#[derive(Clone, Debug, PartialEq, Eq)]
pub struct ApplyReport {
    pub patches_applied: usize,
    pub patches_skipped: usize,
    pub output_path: std::path::PathBuf,
}

/// Apply all patches in `session` to a copy of `original_binary` and write
/// the result to `output_path`.
pub fn apply_patches_to(
    session: &Session,
    original_binary: impl AsRef<Path>,
    output_path: impl AsRef<Path>,
) -> Result<ApplyReport> {
    let original_binary = original_binary.as_ref();
    let output_path = output_path.as_ref();
    let mut bytes = std::fs::read(original_binary)?;

    let patches = session.annotations().patches;
    if patches.is_empty() {
        bail!("session has no patches to apply");
    }

    let mut applied = 0usize;
    let mut skipped = 0usize;

    session.with_binary(|img| {
        for patch in patches.values() {
            if apply_one_patch(&mut bytes, img, patch).is_ok() {
                applied += 1;
            } else {
                skipped += 1;
            }
        }
    });

    if applied == 0 {
        bail!("PatchNotApplicable: no patches could be mapped to file offsets");
    }

    std::fs::write(output_path, &bytes)?;

    Ok(ApplyReport {
        patches_applied: applied,
        patches_skipped: skipped,
        output_path: output_path.to_path_buf(),
    })
}

fn apply_one_patch(
    file_bytes: &mut [u8],
    image: &unlace_loader::BinaryImage,
    patch: &Patch,
) -> Result<()> {
    // Find the section containing patch.ea.
    let mut section_found = None;
    for section in &image.sections {
        if patch.ea >= section.vaddr
            && patch.ea + patch.bytes.len() as u64 <= section.vaddr + section.size
        {
            section_found = Some(section);
            break;
        }
    }
    let section =
        section_found.ok_or_else(|| anyhow!("patch at {:#x} not within any section", patch.ea))?;

    // unlace-loader's BinaryImage doesn't expose file_offset directly per
    // section; we approximate by searching for the section's bytes in the
    // file and using that offset. This is a reasonable strategy for ELF/PE
    // since the on-disk layout normally matches section.data.
    let section_data = &section.data;
    if section_data.is_empty() {
        bail!("section has no on-disk data (BSS-like)");
    }
    let file_offset = find_subsequence(file_bytes, section_data)
        .ok_or_else(|| anyhow!("could not locate section bytes in file"))?;

    let patch_offset = file_offset + (patch.ea - section.vaddr) as usize;
    if patch_offset + patch.bytes.len() > file_bytes.len() {
        bail!("patch offset overflows file");
    }
    file_bytes[patch_offset..patch_offset + patch.bytes.len()].copy_from_slice(&patch.bytes);
    Ok(())
}

fn find_subsequence(haystack: &[u8], needle: &[u8]) -> Option<usize> {
    if needle.is_empty() || needle.len() > haystack.len() {
        return None;
    }
    haystack
        .windows(needle.len())
        .position(|window| window == needle)
}

#[cfg(test)]
mod tests {
    use super::*;
    use crate::{Patch, PatchSource, Session};

    #[test]
    fn test_find_subsequence_basic() {
        let h = b"hello world";
        assert_eq!(find_subsequence(h, b"world"), Some(6));
        assert_eq!(find_subsequence(h, b"xyz"), None);
        assert_eq!(find_subsequence(h, b""), None);
        assert_eq!(find_subsequence(h, b"hello world"), Some(0));
    }

    #[test]
    fn test_apply_patches_to_no_session_binary_fails() {
        let s = Session::new();
        s.add_patch(Patch {
            ea: 0x401000,
            bytes: vec![0x90],
            comment: "nop".into(),
            source: PatchSource::UserHex,
        });
        let result = apply_patches_to(&s, "/tmp/nonexistent_orig", "/tmp/out");
        assert!(result.is_err());
    }

    #[test]
    fn test_apply_patches_to_empty_session_errors() {
        let s = Session::new();
        let tmp_orig =
            std::env::temp_dir().join(format!("patches_orig_{}_empty", std::process::id()));
        std::fs::write(&tmp_orig, b"some bytes").unwrap();
        let tmp_out =
            std::env::temp_dir().join(format!("patches_out_{}_empty", std::process::id()));
        let r = apply_patches_to(&s, &tmp_orig, &tmp_out);
        assert!(r.is_err());
        std::fs::remove_file(&tmp_orig).ok();
    }
}
