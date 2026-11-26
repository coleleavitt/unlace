use super::*;

fn pe(opt_magic: u16, clr: bool, sections: &[&[u8]], extra: &[u8]) -> Vec<u8> {
    let mut b = vec![0u8; 0x400];
    b[0] = b'M';
    b[1] = b'Z';
    b[0x3c] = 0x80;
    b[0x80..0x84].copy_from_slice(b"PE\0\0");
    let coff = 0x84;
    b[coff + 2..coff + 4].copy_from_slice(&(sections.len() as u16).to_le_bytes());
    let opt_size: u16 = if opt_magic == 0x20b { 0xf0 } else { 0xe0 };
    b[coff + 16..coff + 18].copy_from_slice(&opt_size.to_le_bytes());
    let opt = coff + 20;
    b[opt..opt + 2].copy_from_slice(&opt_magic.to_le_bytes());
    let (ndirs_at, dirs_at) = if opt_magic == 0x20b {
        (opt + 108, opt + 112)
    } else {
        (opt + 92, opt + 96)
    };
    b[ndirs_at..ndirs_at + 4].copy_from_slice(&16u32.to_le_bytes());
    if clr {
        b[dirs_at + 112..dirs_at + 116].copy_from_slice(&0x2008u32.to_le_bytes());
        b[dirs_at + 116..dirs_at + 120].copy_from_slice(&0x48u32.to_le_bytes());
    }
    let table = opt + opt_size as usize;
    for (i, name) in sections.iter().enumerate() {
        b[table + i * 40..table + i * 40 + name.len()].copy_from_slice(name);
    }
    b.extend_from_slice(extra);
    b
}

/// Point section `index` of a PE32+ image from [`pe`] at `data`, appended.
fn pe_section_data(mut image: Vec<u8>, index: usize, data: &[u8]) -> Vec<u8> {
    let header = 0x84 + 20 + 0xf0 + index * 40;
    let (len, at) = (data.len() as u32, image.len() as u32);
    image[header + 8..header + 12].copy_from_slice(&len.to_le_bytes());
    image[header + 16..header + 20].copy_from_slice(&len.to_le_bytes());
    image[header + 20..header + 24].copy_from_slice(&at.to_le_bytes());
    image.extend_from_slice(data);
    image
}

fn cookie(pyvers: u32, lib: &[u8]) -> Vec<u8> {
    let mut c = PYI_MAGIC.to_vec();
    c.extend_from_slice(&0x1000u32.to_be_bytes());
    c.extend_from_slice(&0x800u32.to_be_bytes());
    c.extend_from_slice(&0x100u32.to_be_bytes());
    c.extend_from_slice(&pyvers.to_be_bytes());
    let mut name = lib.to_vec();
    name.resize(64, 0);
    c.extend_from_slice(&name);
    c
}

fn ids(h: &[RuntimeHint]) -> Vec<&'static str> {
    h.iter().map(|h| h.id).collect()
}

#[test]
fn clr_directory_marks_a_managed_assembly() {
    let native = detect(&pe(0x10b, true, &[b".text"], &[]), false, false);
    assert_eq!(ids(&native), ["dotnet"]);
    assert!(native[0].actionable && native[0].hint.contains("only the stub"));
    let cil = detect(&pe(0x10b, true, &[b".text"], &[]), false, true);
    assert_eq!(ids(&cil), ["dotnet"]);
    assert!(!cil[0].actionable && cil[0].hint.contains("CIL method bodies"));
    assert!(detect(&pe(0x20b, true, &[b".text"], &[]), false, false)[0].id == "dotnet");
    assert!(detect(&pe(0x10b, false, &[b".text"], &[]), false, false).is_empty());
}

#[test]
fn the_cil_view_ends_at_an_explicit_target_or_the_last_cil_off() {
    let args = |list: &[&str]| list.iter().map(|a| a.to_string()).collect::<Vec<_>>();
    assert!(cil_view(&args(&["a.dll"])));
    assert!(cil_view(&args(&["a.dll", "--option", "cil", "on"])));
    assert!(!cil_view(&args(&["a.dll", "--option", "cil", "off"])));
    assert!(cil_view(&args(&[
        "a.dll", "--option", "cil", "off", "--option", "cil", "on"
    ])));
    assert!(!cil_view(&args(&[
        "a.dll", "--option", "cil", "on", "--option", "cil", "OFF"
    ])));
    assert!(!cil_view(&args(&[
        "a.dll",
        "--target",
        "x86:LE:32:default"
    ])));
    assert!(cil_view(&args(&["a.dll", "--option", "strings", "off"])));
}

fn elf(sections: &[(&[u8], &[u8])]) -> Vec<u8> {
    use object::{Architecture, BinaryFormat, Endianness, SectionKind, write};
    let mut obj = write::Object::new(BinaryFormat::Elf, Architecture::X86_64, Endianness::Little);
    for (name, data) in sections {
        let id = obj.add_section(Vec::new(), name.to_vec(), SectionKind::Data);
        obj.append_section_data(id, data, 1);
    }
    obj.write().unwrap()
}

const ILC_COMMENT: &[u8] = b"\0GCC: (GNU) 13.3.0\0.NET: ilc 10.0.2-servicing.25612.105+hash\0";

#[test]
fn nativeaot_elf_is_named_with_its_ilc_version() {
    let elf = elf(&[
        (b"__managedcode", b"\xc3"),
        (b"__unbox", b"\xc3"),
        (b".dotnet_eh_table", b"\0"),
        (b".comment", ILC_COMMENT),
    ]);
    let hints = detect(&elf, false, false);
    assert_eq!(ids(&hints), ["nativeaot"]);
    assert_eq!(hints[0].version.as_deref(), Some("10.0.2"));
    assert!(hints[0].hint.contains("NativeAOT (ILC 10.0.2)"));
    assert!(!hints[0].actionable);
}

#[test]
fn nativeaot_version_comes_from_the_comment_section() {
    let managed: &[(&[u8], &[u8])] = &[(b"__managedcode", b"\xc3"), (b".dotnet_eh_table", b"\0")];
    let decoy: (&[u8], &[u8]) = (b".rodata", b"built with ilc 1.2.3\0");
    let image = elf(&[managed[0], decoy, managed[1], (b".comment", ILC_COMMENT)]);
    assert_eq!(
        detect(&image, false, false)[0].version.as_deref(),
        Some("10.0.2")
    );

    let no_comment = detect(&elf(&[managed[0], decoy, managed[1]]), false, false);
    assert_eq!(ids(&no_comment), ["nativeaot"]);
    assert_eq!(no_comment[0].version, None);
    assert!(no_comment[0].hint.starts_with("NativeAOT image:"));
}

#[test]
fn nativeaot_markers_spelled_out_in_data_are_not_section_names() {
    let image = elf(&[
        (b".text", b"\xc3"),
        (
            b".rodata",
            b"__managedcode\0.dotnet_eh_table\0.NET: ilc 1.2.3\0",
        ),
        (b".comment", ILC_COMMENT),
    ]);
    assert!(detect(&image, false, false).is_empty());
}

#[test]
fn an_image_carrying_the_detector_literals_is_not_nativeaot() {
    let exe = std::fs::read(std::env::current_exe().unwrap()).unwrap();
    let has = |needle: &[u8]| exe.windows(needle.len()).any(|w| w == needle);
    assert!(has(b"__managedcode") && has(b".dotnet_eh_table"));
    assert!(!ids(&detect(&exe, false, false)).contains(&"nativeaot"));
}

#[test]
fn nativeaot_windows_pe_is_named_by_unbox_and_modules() {
    let sections: &[&[u8]] = &[b".text", b".unbox", b".modules", b".comment"];
    let image = pe_section_data(pe(0x20b, false, sections, b"\0ilc 1.2.3\0"), 3, ILC_COMMENT);
    let hints = detect(&image, false, false);
    assert_eq!(ids(&hints), ["nativeaot"]);
    assert_eq!(hints[0].version.as_deref(), Some("10.0.2"));

    let only_unbox = pe(0x20b, false, &[b".text", b".unbox"], &[]);
    assert!(detect(&only_unbox, false, false).is_empty());
}

/// A PE32+ image from [`pe`] whose second section is an export directory
/// naming `names`, which must be sorted.
fn pe_exporting(names: &[&[u8]]) -> Vec<u8> {
    let rva = 0x2000u32;
    let strings_at = 40 + 4 * names.len() as u32;
    let mut data = vec![0u8; 40];
    data[24..28].copy_from_slice(&(names.len() as u32).to_le_bytes());
    data[32..36].copy_from_slice(&(rva + 40).to_le_bytes());
    let mut strings = Vec::new();
    for name in names {
        data.extend_from_slice(&(rva + strings_at + strings.len() as u32).to_le_bytes());
        strings.extend_from_slice(name);
        strings.push(0);
    }
    data.extend_from_slice(&strings);
    let mut image = pe_section_data(pe(0x20b, false, &[b".text", b".rdata"], &[]), 1, &data);
    let (header, dirs_at) = (0x84 + 20 + 0xf0 + 40, 0x84 + 20 + 112);
    image[header + 12..header + 16].copy_from_slice(&rva.to_le_bytes());
    image[dirs_at..dirs_at + 4].copy_from_slice(&rva.to_le_bytes());
    image[dirs_at + 4..dirs_at + 8].copy_from_slice(&(data.len() as u32).to_le_bytes());
    image
}

#[test]
fn nativeaot_windows_pe_is_named_by_its_debug_header_export() {
    let names: &[&[u8]] = &[
        b"AppEntry",
        b"DotNetRuntimeDebugHeader",
        b"add",
        b"shutdown",
    ];
    for count in 2..=names.len() {
        let hints = detect(&pe_exporting(&names[..count]), false, false);
        assert_eq!(ids(&hints), ["nativeaot"]);
        assert_eq!(hints[0].version, None);
        assert!(hints[0].hint.starts_with("NativeAOT image:"));
    }
    assert_eq!(
        ids(&detect(&pe_exporting(&names[1..2]), false, false)),
        ["nativeaot"]
    );

    let near: &[&[u8]] = &[
        b"DotNetRuntimeDebugHeade",
        b"DotNetRuntimeDebugHeaderV2",
        b"add",
    ];
    assert!(detect(&pe_exporting(near), false, false).is_empty());
    assert!(detect(&pe_exporting(&[]), false, false).is_empty());
    let spelled_out = pe(0x20b, false, &[b".text"], b"\0DotNetRuntimeDebugHeader\0");
    assert!(detect(&spelled_out, false, false).is_empty());

    let mut cut = pe_exporting(names);
    cut.truncate(cut.len() - 30);
    assert!(detect(&cut, false, false).is_empty());
}

#[test]
fn nativeaot_needs_both_elf_markers_and_an_elf() {
    let only_managed = elf(&[(b"__managedcode", b"\xc3"), (b".comment", ILC_COMMENT)]);
    assert!(detect(&only_managed, false, false).is_empty());

    let pe_image = pe(
        0x20b,
        false,
        &[b".text"],
        b"__managedcode\0.dotnet_eh_table\0",
    );
    assert!(detect(&pe_image, false, false).is_empty());
}

#[test]
fn pyinstaller_cookie_reports_its_python_version() {
    let mut image = pe(0x20b, false, &[b".text"], &[]);
    image.extend(cookie(313, b"python313.dll"));
    let hints = detect(&image, false, false);
    assert_eq!(ids(&hints), ["pyinstaller"]);
    assert_eq!(hints[0].version.as_deref(), Some("3.13"));
    assert_eq!(
        hints[0].hint,
        "PyInstaller bundle (Python 3.13): extract with pyinstxtractor-ng"
    );

    let mut elf = b"\x7fELF".to_vec();
    elf.resize(0x200, 0);
    elf.extend(cookie(312, b"libpython3.12.so"));
    elf.extend(vec![0u8; 0x800]);
    assert_eq!(
        detect(&elf, false, false)[0].version.as_deref(),
        Some("3.12")
    );
}

#[test]
fn a_bare_cookie_magic_is_not_a_bundle() {
    let mut elf = b"\x7fELF".to_vec();
    elf.resize(0x200, 0);
    elf.extend_from_slice(PYI_MAGIC);
    elf.extend(vec![0xffu8; 0x100]);
    assert!(detect(&elf, false, false).is_empty());
}

#[test]
fn upx_sections_or_magic_mark_a_packed_image() {
    assert_eq!(
        ids(&detect(
            &pe(0x10b, false, &[b"UPX0", b"UPX1"], &[]),
            false,
            false
        )),
        ["upx"]
    );
    let mut elf = b"\x7fELF".to_vec();
    elf.resize(0xe8, 0);
    elf.extend_from_slice(b"UPX!");
    elf.resize(0x400, 0);
    assert_eq!(ids(&detect(&elf, false, false)), ["upx"]);
}

#[test]
fn windows_script_runtimes_need_a_pe() {
    let autoit = pe(0x10b, false, &[b".text"], b"....AU3!EA06....");
    assert_eq!(ids(&detect(&autoit, false, false)), ["autoit"]);
    let vb6 = pe(0x10b, false, &[b".text"], b"MSVBVM60.DLL\0");
    assert_eq!(ids(&detect(&vb6, false, false)), ["vb6"]);
    let mut elf = b"\x7fELF".to_vec();
    elf.extend_from_slice(b"AU3!EA06 twinBASIC MSVBVM60.DLL");
    assert!(detect(&elf, false, false).is_empty());
}

#[test]
fn a_damaged_dos_magic_still_names_twinbasic() {
    let mut image = pe(0x10b, false, &[b".text"], b"\0twinBASIC\0");
    image[0] = 0x15;
    assert_eq!(ids(&detect(&image, false, false)), ["twinbasic"]);
}

#[test]
fn nuitka_marker_is_recognized() {
    let mut elf = b"\x7fELF".to_vec();
    elf.extend_from_slice(b"\0NUITKA_ONEFILE_PARENT\0");
    assert_eq!(ids(&detect(&elf, false, false)), ["nuitka"]);
}

#[test]
fn json_rows_carry_id_version_and_hint() {
    let rows = to_json(&[hint("pyinstaller", Some("3.12".into()), "x".into(), true)]);
    let text = crate::jsonfmt::dumps_compact(&rows);
    assert!(
        text.contains("\"id\"") && text.contains("\"3.12\"") && text.contains("\"actionable\"")
    );
}
