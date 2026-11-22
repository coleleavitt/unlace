//! (kuna `dynrelocs`, Mach-O arm) Apply a linked Mach-O image's chained-fixup
//! rebases (and a zero for each bind) into the loaded image, and report the
//! slots `SG_READ_ONLY` freezes as constant — the twin of the ELF walk in [`super::kuna_dynrelocs`].
//!
//! A chained-fixup Mach-O (`LC_DYLD_CHAINED_FIXUPS`, every arm64 image since
//! macOS 12 / iOS 15) stores no pointer in a fixed-up slot: the word is a packed
//! `dyld_chained_ptr_*` entry whose high bits carry the chain's `next` hop, so a
//! read of `__objc_selrefs[0]` yields `0x001000010000090c` where the running
//! program holds `0x10000090c`. dyld unpacks every chain at load; this does the
//! same on the loader's own segment copies, through the resolver in
//! [`crate::loader::format::macho::chained`].
//!
//! The constant subset is the segments the linker flags `SG_READ_ONLY`
//! (`__DATA_CONST`): dyld maps them read-only once the fixups are in, which is
//! exactly the `PT_GNU_RELRO` statement the ELF arm keys on. A rebase slot in a
//! writable segment (`__DATA`) is written but not declared constant; the ObjC
//! reference slots there get their own, metadata-backed constancy from the
//! `objc` pass (`analyzers/objc/kuna_objcrefs.rs`).
//!
//! Bind slots (imports) have no static value: each is written as zero (never
//! declared constant), the word every other format's loader leaves in an import
//! slot; the `__stubs`/`__got` import naming covers those calls. A classic
//! `LC_DYLD_INFO` image already holds its unslid pointers in the file, so the
//! resolver yields nothing and the image is untouched.


use super::format::macho::resolve_chained_fixups;
use super::kuna_dynrelocs::{DynRelocWrite, DynRelocs};

/// The rebase writes and the `SG_READ_ONLY`-frozen constant slots of a
/// chained-fixup Mach-O. Empty for any other input.
pub fn resolve(file: &object::File, bytes: &[u8]) -> DynRelocs {
    let mut out = DynRelocs::default();
    if file.format() != object::BinaryFormat::MachO {
        return out;
    }
    let fixups = resolve_chained_fixups(file, bytes);
    let width = fixups.slot_width();
    for (vma, value) in fixups.rebases() {
        out.writes.push(DynRelocWrite { vma, value, width });
        if fixups.in_readonly_segment(vma) {
            out.const_ranges.push((vma, vma.wrapping_add(width as u64 - 1)));
        }
    }
    out.writes.extend(fixups.binds().map(|(vma, _)| DynRelocWrite { vma, value: 0, width }));
    out.writes.sort_unstable_by_key(|w| w.vma);
    out
}

#[cfg(test)]
mod tests {
    use super::*;

    fn fixture(name: &str) -> Vec<u8> {
        std::fs::read(format!("{}/tests/fixtures/{name}", env!("CARGO_MANIFEST_DIR")))
            .expect("read fixture")
    }

    /// The arm64 chained-fixup fixture: every rebase becomes a write holding the
    /// unpacked pointer, and only the `__DATA_CONST` (`SG_READ_ONLY`) slots are
    /// constant — `__objc_classlist[0]` is, the `__DATA` `class_t.isa` slot is not.
    #[test]
    fn chained_rebases_are_written_and_data_const_is_constant() {
        let bytes = fixture("macho_objc_arm64");
        let file = object::File::parse(bytes.as_slice()).expect("parse");
        let r = resolve(&file, &bytes);
        let classlist = r.writes.iter().find(|w| w.vma == 0x100004000).expect("classlist slot");
        assert_eq!((classlist.value, classlist.width), (0x100008000, 8));
        let isa = r.writes.iter().find(|w| w.vma == 0x100008000).expect("class_t.isa slot");
        assert_eq!(isa.value, 0x100008028);
        assert!(r.const_ranges.contains(&(0x100004000, 0x100004007)));
        assert!(!r.const_ranges.iter().any(|&(lo, _)| lo == 0x100008000));
    }

    /// A classic `LC_DYLD_INFO` Mach-O and an ELF yield nothing.
    #[test]
    fn inert_without_chained_fixups() {
        for name in ["macho_objc", "macho_imports"] {
            let bytes = fixture(name);
            let file = object::File::parse(bytes.as_slice()).expect("parse");
            let r = resolve(&file, &bytes);
            assert!(r.writes.is_empty() && r.const_ranges.is_empty(), "{name}");
        }
    }
}
