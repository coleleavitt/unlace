use super::select;
use super::select_by_header;

#[test]
fn header_byte_order_and_flags_select_their_language() {
    assert_eq!(
        select_by_header(4, 0, true, 0),
        Some("68000:BE:32:MC68020:default")
    );
    assert_eq!(
        select_by_header(4, 0x0100_0000, true, 0),
        Some("68000:BE:32:default:default")
    );
    assert_eq!(
        select_by_header(4, 0x8065, true, 0),
        Some("68000:BE:32:Coldfire:default")
    );
    assert_eq!(
        select_by_header(141, 0, false, 0),
        Some("tms320c28:LE:32:default:default")
    );
    assert_eq!(
        select_by_header(92, 0, true, 0),
        Some("OpenRISC:BE:32:default:default")
    );
    assert_eq!(
        select_by_header(94, 0x300, false, 0),
        Some("Xtensa:LE:32:default:default")
    );
    assert_eq!(
        select_by_header(252, 0x2100_0008, false, 0),
        Some("CSKY:LE:32:v2:default")
    );
    assert_eq!(
        select_by_header(252, 0x1000_0000, true, 0),
        Some("CSKY:BE:32:v1:default")
    );
    assert_eq!(
        select_by_header(190, 0x0600_5004, false, 8),
        Some("SASS:LE:64:SM80:default")
    );
    assert_eq!(
        select_by_header(190, 0x0050_0550, false, 7),
        Some("SASS:LE:64:SM80:default")
    );
    assert_eq!(select_by_header(190, 0x0000_1e04, false, 8), None, "sm_30");
    let ids: Vec<String> = super::language_ids().collect();
    for (m, f, b, a) in [
        (4, 0, true, 0),
        (4, 0x0100_0000, true, 0),
        (4, 0x8065, true, 0),
        (92, 0, false, 0),
        (94, 0, true, 0),
        (252, 0x1000_0000, false, 0),
        (190, 0x0000_7804, false, 8),
    ] {
        let id = select_by_header(m, f, b, a);
        assert!(ids.iter().any(|i| Some(i.as_str()) == id), "{id:?}");
    }
}

#[test]
fn machines_and_flags_select_their_language() {
    assert_eq!(select(83, 0x82, false), Some("avr8:LE:16:default:gcc"));
    assert_eq!(select(83, 0x06, false), Some("avr8:LE:16:atmega256:gcc"));
    assert_eq!(select(83, 0x6a, false), Some("avr8:LE:24:xmega:gcc"));
    assert_eq!(
        select(105, 0, false),
        Some("TI_MSP430:LE:16:default:default")
    );
    assert_eq!(
        select(164, 0x68, false),
        Some("Hexagon:LE:32:default:default")
    );
    assert_eq!(select(244, 0, false), Some("lanai:BE:32:default:default"));
    assert_eq!(
        select(258, 0x43, true),
        Some("Loongarch:LE:64:lp64d:default")
    );
    assert_eq!(
        select(258, 0x42, true),
        Some("Loongarch:LE:64:lp64f:default")
    );
    assert_eq!(
        select(258, 0x41, false),
        Some("Loongarch:LE:32:ilp32d:default")
    );
    assert_eq!(select(224, 0x12c, true), Some("AMDGPU:LE:64:GFX9:default"));
    assert_eq!(select(224, 0x36, true), Some("AMDGPU:LE:64:GFX10:default"));
    assert_eq!(select(224, 0x41, true), Some("AMDGPU:LE:64:GFX11:default"));
    assert_eq!(select(224, 0x4c, true), None, "gfx942");
    assert_eq!(select(224, 0x2a, true), None, "gfx803");
    assert_eq!(select(40, 0, false), None, "ARM");
}

#[test]
fn every_selected_id_is_enumerated() {
    let ids: Vec<String> = super::language_ids().collect();
    for (m, f, w) in [
        (83, 2, false),
        (83, 6, false),
        (83, 0x65, false),
        (258, 2, false),
        (224, 0x58, true),
    ] {
        assert!(ids.iter().any(|id| Some(id.as_str()) == select(m, f, w)));
    }
}
