use super::*;

const LINKEDIT: u64 = 0x7_0000_0000;
const STUB: u32 = 0x8000_0408;

/// A thin Mach-O at `base`: `__TEXT` with `__text` (section 1) and a
/// 12-byte-stub `__stubs` (section 2) whose two stubs import `imports`, the
/// function `local` 0x1000 past the base, and a function-starts table.
fn thin(base: u64, local: &str, imports: [&str; 2], starts: &[u64]) -> Vec<u8> {
    let mut strings = vec![0u8];
    let mut nlists = Vec::new();
    for (name, n_type, n_sect, value) in [
        (local, 0x0fu8, 1u8, base + 0x1000),
        (imports[0], 0x01, 0, 0),
        (imports[1], 0x01, 0, 0),
    ] {
        nlists.extend((strings.len() as u32).to_le_bytes());
        nlists.extend([n_type, n_sect, 0, 0]);
        nlists.extend(value.to_le_bytes());
        strings.extend(name.as_bytes());
        strings.push(0);
    }
    let indirect: Vec<u8> = [2u32, 1].iter().flat_map(|v| v.to_le_bytes()).collect();
    let mut table = Vec::new();
    let mut last = base;
    for &addr in starts {
        put_uleb(&mut table, addr - last);
        last = addr;
    }
    let mut le = Linkedit::default();
    let (symoff, indirectoff, startsoff, stroff) = (
        le.push(&nlists),
        le.push(&indirect),
        le.push(&table),
        le.push(&strings),
    );

    let name16 = |s: &str| {
        let mut raw = s.as_bytes().to_vec();
        raw.resize(16, 0);
        raw
    };
    let segment = |name: &str,
                   vmaddr: u64,
                   fileoff: u64,
                   size: u64,
                   sections: &[(&str, u64, u64, u32, u32, u32)]| {
        let mut cmd = extract::LC_SEGMENT_64.to_le_bytes().to_vec();
        cmd.extend((72 + 80 * sections.len() as u32).to_le_bytes());
        cmd.extend(name16(name));
        for v in [vmaddr, 0x4000, fileoff, size] {
            cmd.extend(v.to_le_bytes());
        }
        for v in [5u32, 5, sections.len() as u32, 0] {
            cmd.extend(v.to_le_bytes());
        }
        for &(sect, offset, size, flags, reserved1, reserved2) in sections {
            cmd.extend(name16(sect));
            cmd.extend(name16(name));
            cmd.extend((vmaddr + offset).to_le_bytes());
            cmd.extend(size.to_le_bytes());
            for v in [offset as u32, 2, 0, 0, flags, reserved1, reserved2, 0] {
                cmd.extend(v.to_le_bytes());
            }
        }
        cmd
    };
    let words = |cmd: u32, fields: &[u32]| -> Vec<u8> {
        [cmd, 8 + 4 * fields.len() as u32]
            .iter()
            .chain(fields)
            .flat_map(|v| v.to_le_bytes())
            .collect()
    };
    let le_at = |off: u64| (0x4000 + off) as u32;
    let mut dysymtab = vec![0u32, 0, 0, 1, 1, 2];
    dysymtab.resize(18, 0);
    (dysymtab[12], dysymtab[13]) = (le_at(indirectoff), 2);
    let cmds = [
        segment(
            "__TEXT",
            base,
            0,
            0x4000,
            &[
                ("__text", 0x1000, 8, 0x8000_0400, 0, 0),
                ("__stubs", 0x2000, 24, STUB, 0, 12),
            ],
        ),
        segment("__LINKEDIT", LINKEDIT, 0x4000, le.bytes.len() as u64, &[]),
        words(
            extract::LC_SYMTAB,
            &[le_at(symoff), 3, le_at(stroff), strings.len() as u32],
        ),
        words(extract::LC_DYSYMTAB, &dysymtab),
        words(
            extract::LC_FUNCTION_STARTS,
            &[le_at(startsoff), table.len() as u32],
        ),
    ]
    .concat();
    let mut out: Vec<u8> = [
        0xfeed_facfu32,
        0x0100_000c,
        2,
        6,
        5,
        cmds.len() as u32,
        0,
        0,
    ]
    .iter()
    .flat_map(|v| v.to_le_bytes())
    .collect();
    out.extend(cmds);
    out.resize(0x4000, 0);
    out.extend(&le.bytes);
    out
}

fn merged() -> Vec<u8> {
    let (low, high) = (0x1_0000_0000u64, 0x2_0000_0000u64);
    let a = thin(
        high,
        "_high_fn",
        ["_malloc", "_free"],
        &[high + 0x1000, high + 0x1004],
    );
    let b = thin(low, "_low_fn", ["_open", "_close"], &[low + 0x1000]);
    let mut parts = vec![
        Part::parse(high, &a).unwrap(),
        Part::parse(low, &b).unwrap(),
    ];
    parts.sort_by_key(Part::text_base);
    merge(&parts, high).unwrap()
}

#[test]
fn symbols_keep_their_sections_and_stubs_their_imports() {
    use object::{Object, ObjectSection, ObjectSymbol};
    let bytes = merged();
    let file = object::File::parse(bytes.as_slice()).unwrap();
    for (name, addr) in [("_low_fn", 0x1_0000_1000u64), ("_high_fn", 0x2_0000_1000)] {
        let sym = file.symbols().find(|s| s.name() == Ok(name)).unwrap();
        let section = file.section_by_index(sym.section_index().unwrap()).unwrap();
        assert_eq!(
            (sym.address(), section.name().unwrap(), section.address()),
            (addr, "__text", addr),
            "{name}"
        );
    }

    let part = Part::parse(0x2_0000_0000, &bytes).unwrap();
    let layout = &part.layout;
    let (symtab, dysymtab) = (layout.symtab.unwrap(), layout.dysymtab.unwrap());
    let fields: Vec<u32> = (0..6)
        .map(|i| layout.cmd_u32(dysymtab + 8 + i * 4))
        .collect();
    assert_eq!(
        fields,
        [0, 0, 0, 2, 2, 4],
        "no locals, two definitions, four imports"
    );
    let nlists = part
        .slice(layout.cmd_u32(symtab + 8) as u64, 6 * 16)
        .unwrap();
    let pool = part
        .slice(
            layout.cmd_u32(symtab + 16) as u64,
            layout.cmd_u32(symtab + 20) as u64,
        )
        .unwrap();
    let name = |index: u32| {
        let at = u32_at(nlists, index as usize * 16) as usize;
        String::from_utf8_lossy(&pool[at..at + pool[at..].iter().position(|&b| b == 0).unwrap()])
            .into_owned()
    };
    let indirect = part
        .slice(layout.cmd_u32(dysymtab + 56) as u64, 16)
        .unwrap();
    let stubs: Vec<(u64, Vec<String>)> = layout
        .segments
        .iter()
        .flat_map(|s| &s.sections)
        .filter(|s| s.sectname == "__stubs")
        .map(|s| {
            (
                s.addr,
                (0..2)
                    .map(|i| name(u32_at(indirect, (s.reserved1 as usize + i) * 4)))
                    .collect(),
            )
        })
        .collect();
    assert_eq!(
        stubs,
        [
            (
                0x1_0000_2000,
                vec!["_close".to_string(), "_open".to_string()]
            ),
            (
                0x2_0000_2000,
                vec!["_free".to_string(), "_malloc".to_string()]
            ),
        ]
    );
}

#[test]
fn function_starts_count_from_the_lowest_text() {
    let bytes = merged();
    let part = Part::parse(0x2_0000_0000, &bytes).unwrap();
    assert_eq!(
        part.layout
            .segments
            .iter()
            .map(|s| s.name.as_str())
            .collect::<Vec<_>>(),
        ["__TEXT", "__TEXT", "__LINKEDIT"]
    );
    let mut starts = Vec::new();
    function_starts(
        part.linkedit_data(extract::LC_FUNCTION_STARTS).unwrap(),
        0x1_0000_0000,
        &mut starts,
    );
    assert_eq!(starts, [0x1_0000_1000, 0x2_0000_1000, 0x2_0000_1004]);
}

#[test]
fn more_sections_than_a_symbol_can_index_are_refused() {
    let image = thin(0x1_0000_0000, "_f", ["_a", "_b"], &[]);
    let parts: Vec<Part> = (0..128)
        .map(|i| Part::parse(0x1_0000_0000 + i * 0x4000, &image).unwrap())
        .collect();
    let err = merge(&parts, 0x1_0000_0000).unwrap_err();
    assert!(err.contains("256 sections"), "{err}");
}
