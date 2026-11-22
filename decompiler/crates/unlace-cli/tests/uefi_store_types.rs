//! (kuna `storetype`) A UEFI driver's service-table globals are typed from the
//! value its entry stores into them, so every reader calls through `gBS->`.

use crate::common;

fn decompile_all(extra: &[&str]) -> String {
    let fixture = common::fixture("uefi_diskio_x64.efi");
    let mut args = vec!["decompile-all", fixture.as_str()];
    args.extend_from_slice(extra);
    let (out, err, code) = common::run_kuna(&args);
    assert_eq!(code, 0, "{err}");
    out
}

#[test]
fn store_typed_boot_services_reach_every_reader() {
    let off = decompile_all(&["--option", "storetype", "off"]);
    assert!(off.contains("(dat_1a70 + 0x30)"), "off: the readers index an untyped word");
    assert!(!off.contains("gBS"));

    let on = decompile_all(&[]);
    assert!(on.contains("gST = SystemTable;"), "the system-table global is named");
    assert!(on.contains("(*gBS->FreePool)(a0);"), "a reader calls through the typed table");
    assert!(on.matches("gBS->").count() >= 20);
    assert!(!on.contains("dat_1a70"));
}
