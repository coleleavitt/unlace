use super::*;
use crate::loadimage_te::synthetic::{CODE_RVA, IMAGE_BASE, TeImage};
use object::{Object, ObjectSection};

#[test]
fn te_view_maps_sections_where_the_te_loader_does() {
    let code = [0x31, 0xc0, 0xc3];
    let te = TeImage::arm(&code)
        .machine(object::pe::IMAGE_FILE_MACHINE_AMD64)
        .build();
    let pe = te_as_pe(&te).unwrap();
    let file = object::File::parse(pe.as_slice()).unwrap();
    assert_eq!(file.architecture(), object::Architecture::X86_64);
    assert_eq!(file.entry(), IMAGE_BASE + u64::from(CODE_RVA));
    let text = file.section_by_name(".text").unwrap();
    assert_eq!(text.address(), IMAGE_BASE + u64::from(CODE_RVA));
    assert_eq!(text.data().unwrap(), code);
}

#[test]
fn te_view_shifts_raw_pointers_when_the_stripped_header_is_short() {
    let code = [0x70, 0x47];
    let mut te = TeImage::thumb(&code).build();
    let at = TeImage::thumb(&code).code_file_offset();
    let stripped = 0x60u16;
    let raw_pointer = (at + usize::from(stripped) - 40) as u32;
    te[6..8].copy_from_slice(&stripped.to_le_bytes());
    te[60..64].copy_from_slice(&raw_pointer.to_le_bytes());
    let pe = te_as_pe(&te).unwrap();
    let file = object::File::parse(pe.as_slice()).unwrap();
    assert_eq!(file.section_by_name(".text").unwrap().data().unwrap(), code);
}

#[test]
fn raw_view_is_one_executable_section_at_the_base() {
    let image = [0x13, 0x00, 0x00, 0x00, 0x67, 0x80, 0x00, 0x00];
    for (language, arch) in [
        ("RISCV:LE:32:default", object::Architecture::Riscv32),
        ("PowerPC:BE:32:default", object::Architecture::PowerPc),
        ("AARCH64:LE:64:v8A", object::Architecture::Aarch64),
        ("6502:LE:16:default", object::Architecture::Unknown),
    ] {
        let elf = raw_as_elf(&image, 0x8000_0000, 0x8000_0004, language).unwrap();
        let file = object::File::parse(elf.as_slice()).unwrap();
        assert_eq!(file.architecture(), arch, "{language}");
        assert_eq!(file.entry(), 0x8000_0004, "{language}");
        let text = file.section_by_name(".text").unwrap();
        assert_eq!(
            (text.address(), text.data().unwrap()),
            (0x8000_0000, image.as_slice()),
            "{language}"
        );
    }
    assert!(raw_as_elf(&image, 0, 0, "x86").is_none());
}
