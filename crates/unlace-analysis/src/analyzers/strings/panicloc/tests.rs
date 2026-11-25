use super::*;

#[test]
fn names_keep_the_last_two_path_components() {
    let loc = PanicLocation {
        addr: 0,
        file_addr: 0,
        file: "/rustc/abc/library/core/src/str/mod.rs".into(),
        line: 68,
        col: 5,
    };
    assert_eq!(location_name(&loc), "panic_loc_str_mod_rs_68_5");
    let loc = PanicLocation {
        addr: 0,
        file_addr: 0,
        file: "p.rs".into(),
        line: 3,
        col: 39,
    };
    assert_eq!(location_name(&loc), "panic_loc_p_rs_3_39");
}

#[test]
fn record_shape_tests() {
    let text = b"src/main.rs\0";
    let mut data = vec![0u8; 0x40];
    data[..8].copy_from_slice(&0x2000u64.to_le_bytes());
    data[8..16].copy_from_slice(&11u64.to_le_bytes());
    data[16..20].copy_from_slice(&10u32.to_le_bytes());
    data[20..24].copy_from_slice(&5u32.to_le_bytes());
    let regions = vec![
        RoRegion {
            vma: 0x1000,
            data: &data,
        },
        RoRegion {
            vma: 0x2000,
            data: text,
        },
    ];
    let loc = record_at(&regions, &regions[0], 0x1000, 8, &HashMap::new()).expect("location");
    assert_eq!(
        (loc.file.as_str(), loc.line, loc.col),
        ("src/main.rs", 10, 5)
    );
    assert!(record_at(&regions, &regions[0], 0x1008, 8, &HashMap::new()).is_none());
}

#[test]
fn a_zero_column_is_not_a_location_and_a_counted_nul_is_dropped() {
    let text = b"src/main.rs\0";
    let mut data = vec![0u8; 0x40];
    data[..8].copy_from_slice(&0x2000u64.to_le_bytes());
    data[8..16].copy_from_slice(&11u64.to_le_bytes());
    data[16..20].copy_from_slice(&0x2010u32.to_le_bytes());
    data[24..32].copy_from_slice(&0x2000u64.to_le_bytes());
    data[32..40].copy_from_slice(&12u64.to_le_bytes());
    data[40..44].copy_from_slice(&7u32.to_le_bytes());
    data[44..48].copy_from_slice(&3u32.to_le_bytes());
    let regions = vec![
        RoRegion {
            vma: 0x1000,
            data: &data,
        },
        RoRegion {
            vma: 0x2000,
            data: text,
        },
    ];
    assert!(record_at(&regions, &regions[0], 0x1000, 8, &HashMap::new()).is_none());
    let loc = record_at(&regions, &regions[0], 0x1018, 8, &HashMap::new()).expect("location");
    assert_eq!(
        (loc.file.as_str(), loc.line, loc.col),
        ("src/main.rs", 7, 3)
    );
}
