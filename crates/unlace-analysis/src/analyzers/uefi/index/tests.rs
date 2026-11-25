use super::*;

#[test]
fn index_round_trips() {
    let guid = [
        0xa1, 0x31, 0x1b, 0x5b, 0x62, 0x95, 0xd2, 0x11, 0x8e, 0x3f, 0x00, 0xa0, 0xc9, 0x69, 0x72,
        0x3b,
    ];
    let text = render(&[
        ModuleRecord {
            file: "A.efi".into(),
            file_type: 0x07,
            installs: vec![InstalledInterface {
                guid,
                addr: 0x1920,
                interface: "PROTOCOL_5B1B31A1".into(),
                fields: vec![
                    ("Field_00".into(), "UINTN".into()),
                    ("Function_08".into(), "FUNC".into()),
                ],
                members: vec![("Function_08".into(), 0x436)],
            }],
        },
        ModuleRecord {
            file: "B.efi".into(),
            file_type: 0x06,
            installs: Vec::new(),
        },
    ]);
    let index = Index::parse(&text).expect("parses");
    assert_eq!(index.kind_of(Path::new("/x/B.efi")), Some(Kind::Pei));
    assert_eq!(index.kind_of(Path::new("/x/A.efi")), Some(Kind::Dxe));
    assert_eq!(
        index.entry_name(Path::new("/x/B.efi")),
        Some("PeimEntryPoint")
    );
    assert_eq!(index.entry_name(Path::new("/x/A.efi")), None);
    assert_eq!(index.foreign()[&guid].1.len(), 2);
    let note = index
        .installer_note(&guid, Some(Path::new("/x/B.efi")))
        .expect("another module installs it");
    assert!(
        note.contains("A.efi (PROTOCOL_5B1B31A1 at 0x1920: Function_08=0x436)"),
        "{note}"
    );
    assert_eq!(
        index.installer_note(&guid, Some(Path::new("/x/A.efi"))),
        None
    );
    assert!(Index::parse("garbage\nmodule A 07\n").is_none());
    let hostile = "unlace-uefi-index 1\ninstall A zz 1 X\nmodule\nstruct\nmodule a*/b.efi 06\ninstall B.efi 00112233445566778899aabbccddeeff 10 X*/\n";
    let index = Index::parse(hostile).expect("the header is right");
    assert!(index.modules.is_empty() && index.installs.is_empty());
}
