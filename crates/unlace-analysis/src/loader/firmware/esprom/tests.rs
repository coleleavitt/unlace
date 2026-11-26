use super::*;

#[test]
fn every_table_is_sorted_and_names_rom_addresses() {
    for chip in EspChip::ALL {
        let all: Vec<RomSymbol> = symbols(chip).collect();
        assert!(!all.is_empty(), "{chip:?}");
        assert_eq!(
            all.len(),
            table(chip).lines().filter(|l| !l.starts_with('#')).count(),
            "{chip:?}"
        );
        assert!(all.windows(2).all(|w| w[0].addr < w[1].addr), "{chip:?}");
        for s in all.iter().filter(|s| s.function) {
            assert_eq!(
                region_at(chip, s.addr).map(|r| r.name),
                Some("ROM"),
                "{chip:?} {}",
                s.name
            );
        }
    }
}

#[test]
fn the_maps_are_ascending_and_disjoint() {
    for chip in EspChip::ALL {
        assert!(
            regions(chip).windows(2).all(|w| w[0].end <= w[1].start),
            "{chip:?}"
        );
    }
}

#[test]
fn well_known_routines_resolve() {
    let find = |chip, name: &str| {
        symbols(chip)
            .find(|s| s.name == name)
            .map(|s| (s.addr, s.function))
    };
    assert_eq!(find(EspChip::Esp32, "memcpy"), Some((0x4000_c2c8, true)));
    assert_eq!(
        find(EspChip::Esp32, "ets_printf"),
        Some((0x4000_7d54, true))
    );
    assert_eq!(
        find(EspChip::Esp8266, "uart_rx_one_char"),
        Some((0x4000_3b8c, true))
    );
    assert_eq!(
        find(EspChip::Esp32C3, "ets_delay_us"),
        Some((0x4000_0050, true))
    );
}
