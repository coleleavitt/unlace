//! Archive-member ingestion with owned staging files for the path-based loader.

use std::io::Write;

use super::{FidRecord, ObjectRefusal, records_for_object_path};

/// The records of every object member `lang` applies to. An archive with object
/// members `lang` applies to none of is refused, so a mislabeled library writes
/// no database rather than an empty one.
pub(super) fn records_for_archive(
    archive_path: &str,
    bytes: &[u8],
    spec_roots: &[String],
    lang: &str,
) -> Result<Vec<FidRecord>, String> {
    use object::read::archive::ArchiveFile;

    let archive = ArchiveFile::parse(bytes).map_err(|e| format!("not a valid archive: {e}"))?;
    let mut out: Vec<FidRecord> = Vec::new();
    let (mut described, mut refused) = (0usize, 0usize);
    for member in archive.members() {
        let member = member.map_err(|e| format!("archive member error: {e}"))?;
        let data = member
            .data(bytes)
            .map_err(|e| format!("archive member data error: {e}"))?;
        if !is_object(data) {
            continue;
        }
        let name = String::from_utf8_lossy(member.name());
        let tmp = stage_object(data).map_err(|e| format!("cannot stage member {name}: {e}"))?;
        let tmp_str = tmp.to_string_lossy().into_owned();
        let res = records_for_object_path(&tmp_str, spec_roots, lang);
        drop(tmp);
        match res {
            Ok(mut recs) => {
                described += 1;
                out.append(&mut recs);
            }
            Err(e) => {
                refused += usize::from(matches!(e, ObjectRefusal::Language(_)));
                eprintln!("unlace fid build: {archive_path}({name}): skipped: {e}");
            }
        }
    }
    if described == 0 && refused > 0 {
        return Err(format!(
            "--lang {lang} describes none of its object members ({refused} refused)"
        ));
    }
    Ok(out)
}

fn stage_object(data: &[u8]) -> std::io::Result<tempfile::TempPath> {
    let mut file = tempfile::Builder::new()
        .prefix("unlace_fid_")
        .suffix(".o")
        .tempfile()?;
    file.write_all(data)?;
    Ok(file.into_temp_path())
}

fn is_object(bytes: &[u8]) -> bool {
    bytes.starts_with(b"\x7fELF")
        || bytes.starts_with(&[0xcf, 0xfa, 0xed, 0xfe])
        || bytes.starts_with(&[0xce, 0xfa, 0xed, 0xfe])
        || bytes.starts_with(b"MZ")
        || (bytes.len() >= 2 && bytes[0] == 0x4c && bytes[1] == 0x01)
        || (bytes.len() >= 2 && bytes[0] == 0x64 && bytes[1] == 0x86)
}

#[cfg(test)]
mod tests;
