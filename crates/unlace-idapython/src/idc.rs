//! IDA's legacy `idc` API ported to Python (and Rust).
//!
//! Reference: `research/ida-hexrays-docs/scripting/idapython/idc.py`
//! (the actual IDA 9.3sp1 module).
//!
//! Each function records itself in the coverage registry on first call.

use anyhow::Result;
use unlace_session::Session;

use crate::{coverage, idaapi};

/// `idc.get_func_name(ea)` — return the name of the function containing ea.
pub fn get_func_name(session: &Session, ea: u64) -> Option<String> {
    coverage::mark_implemented("idc.get_func_name");
    session.with_binary(|img| {
        img.symbols.get(&ea).map(|s| s.name.clone()).or_else(|| {
            // Walk function entries to find the containing function.
            img.symbols
                .range(..=ea)
                .next_back()
                .map(|(_, s)| s.name.clone())
        })
    })?
}

/// `idc.set_name(ea, name)` — rename the symbol at ea. Returns true on success.
pub fn set_name(session: &Session, ea: u64, name: &str) -> bool {
    coverage::mark_implemented("idc.set_name");
    let old_name = get_func_name(session, ea).unwrap_or_default();
    session.rename(unlace_session::Rename {
        ea,
        old_name,
        new_name: name.to_string(),
    });
    true
}

/// `idc.get_segm_name(ea)` — the name of the segment containing ea.
pub fn get_segm_name(session: &Session, ea: u64) -> Option<String> {
    coverage::mark_implemented("idc.get_segm_name");
    session.with_binary(|img| {
        img.sections
            .iter()
            .find(|s| ea >= s.vaddr && ea < s.vaddr + s.size)
            .map(|s| s.name.clone())
    })?
}

/// `idc.get_bytes(ea, n)` — read n bytes at ea, or None if out of range.
pub fn get_bytes(session: &Session, ea: u64, n: usize) -> Option<Vec<u8>> {
    coverage::mark_implemented("idc.get_bytes");
    session.with_binary(|img| {
        for section in &img.sections {
            if ea >= section.vaddr && ea + n as u64 <= section.vaddr + section.size {
                let off = (ea - section.vaddr) as usize;
                return Some(section.data[off..off + n].to_vec());
            }
        }
        None
    })?
}

/// `idc.set_cmt(ea, comment, repeatable)` — attach a comment to ea.
pub fn set_cmt(session: &Session, ea: u64, comment: &str, repeatable: bool) -> Result<()> {
    coverage::mark_implemented("idc.set_cmt");
    session.add_comment(unlace_session::Comment {
        ea,
        text: comment.to_string(),
        repeatable,
    });
    Ok(())
}

/// `idc.get_cmt(ea, repeatable)` — retrieve a comment at ea.
pub fn get_cmt(session: &Session, ea: u64, repeatable: bool) -> Option<String> {
    coverage::mark_implemented("idc.get_cmt");
    session
        .annotations()
        .comments
        .get(&ea)
        .filter(|c| c.repeatable == repeatable)
        .map(|c| c.text.clone())
}

/// `idc.SetType(ea, decl)` — apply a type declaration.
pub fn set_type(session: &Session, ea: u64, decl: &str) -> Result<()> {
    coverage::mark_implemented("idc.SetType");
    session.set_type(unlace_session::TypeAnnotation {
        ea,
        declaration: decl.to_string(),
    });
    Ok(())
}

/// `idc.get_inf_attr(attr)` — get an "inf" attribute (compiler / image base / etc.).
///
/// We support the most common attrs: INF_IMAGE_BASE, INF_MIN_EA, INF_MAX_EA.
pub fn get_inf_attr(session: &Session, attr: &str) -> Option<u64> {
    coverage::mark_implemented("idc.get_inf_attr");
    session.with_binary(|img| match attr {
        "INF_IMAGE_BASE" | "image_base" => idaapi::image_base_or_min_section(img),
        "INF_MIN_EA" | "min_ea" => img.sections.iter().map(|s| s.vaddr).min(),
        "INF_MAX_EA" | "max_ea" => img.sections.iter().map(|s| s.vaddr + s.size).max(),
        _ => None,
    })?
}

#[cfg(test)]
mod tests {
    use super::*;
    use unlace_loader::{ArchId, BinaryImage, Endian, Section, SectionFlags};

    #[test]
    fn test_idc_get_func_name_no_binary() {
        let s = Session::new();
        assert!(get_func_name(&s, 0x1000).is_none());
    }

    #[test]
    fn test_idc_set_name_records_rename() {
        let s = Session::new();
        let ok = set_name(&s, 0x401000, "main");
        assert!(ok);
        assert_eq!(s.annotations().renames.len(), 1);
        assert_eq!(s.annotations().renames[&0x401000].new_name, "main");
    }

    #[test]
    fn test_idc_set_get_cmt_round_trip() {
        let s = Session::new();
        set_cmt(&s, 0x100, "interesting", false).unwrap();
        assert_eq!(get_cmt(&s, 0x100, false), Some("interesting".to_string()));
        assert_eq!(get_cmt(&s, 0x100, true), None); // wrong repeatable flag
    }

    #[test]
    fn test_idc_set_type_records() {
        let s = Session::new();
        set_type(&s, 0x401000, "int main(int argc, char **argv)").unwrap();
        assert_eq!(s.annotations().types.len(), 1);
    }

    #[test]
    fn test_get_inf_attr_image_base_uses_loader_base_not_entry() {
        let mut image = BinaryImage::empty(ArchId::X86_64, Endian::Little);
        image.entry = 0x401080;
        image.image_base = Some(0x400000);
        image.sections.push(Section {
            name: ".text".into(),
            vaddr: 0x401000,
            size: 0x100,
            data: vec![0; 0x100],
            flags: SectionFlags::READ | SectionFlags::EXEC,
        });
        let session = Session::new();
        session.set_binary(image);

        assert_eq!(get_inf_attr(&session, "INF_IMAGE_BASE"), Some(0x400000));
        assert_eq!(get_inf_attr(&session, "image_base"), Some(0x400000));
        assert_eq!(get_inf_attr(&session, "min_ea"), Some(0x401000));
        assert_eq!(get_inf_attr(&session, "max_ea"), Some(0x401100));
    }

    #[test]
    fn test_idc_coverage_marks_apis() {
        let s = Session::new();
        _ = get_func_name(&s, 0);
        _ = set_cmt(&s, 0, "x", false);
        let apis = coverage::implemented_apis();
        assert!(apis.contains(&"idc.get_func_name"));
        assert!(apis.contains(&"idc.set_cmt"));
    }
}
