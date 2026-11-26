use super::*;

fn wide(s: &str, little_endian: bool) -> Vec<u8> {
    let mut d = Vec::new();
    for ch in s.chars().chain(std::iter::once('\0')) {
        let u = ch as u32;
        d.extend_from_slice(&if little_endian {
            u.to_le_bytes()
        } else {
            u.to_be_bytes()
        });
    }
    d
}

#[test]
fn utf32_runs_in_either_byte_order() {
    for le in [true, false] {
        let data = wide("hellow", le);
        let runs = scan_utf32_runs(&data, 0x2004, le, MIN_UNITS);
        assert_eq!(
            runs,
            vec![Run32 {
                addr: 0x2004,
                units: 6,
                distinct: 5
            }]
        );
        assert_eq!(runs[0].len(), 28);
        assert!(scan_utf32_runs(&data, 0x2004, !le, MIN_UNITS).is_empty());
    }
}

#[test]
fn short_unterminated_and_misaligned_runs_are_not_runs() {
    assert!(scan_utf32_runs(&wide("abcd", true), 0x1000, true, MIN_UNITS).is_empty());
    assert_eq!(
        scan_utf32_runs(&wide("abcd", true), 0x1000, true, 1).len(),
        1
    );
    let mut open = wide("hellow", true);
    open.truncate(24);
    open.extend_from_slice(&1000u32.to_le_bytes());
    assert!(scan_utf32_runs(&open, 0x1000, true, MIN_UNITS).is_empty());
    let mut shifted = vec![0xffu8, 0xff];
    shifted.extend(wide("hellow", true));
    assert!(scan_utf32_runs(&shifted, 0x1000, true, MIN_UNITS).is_empty());
    assert!(scan_utf32_runs(&shifted, 0x1002, true, MIN_UNITS).len() == 1);
}

#[test]
fn narrow_and_utf16_text_is_never_a_utf32_run() {
    let narrow = b"NtQueryInformationProcess\0\0\0\0\0\0\0";
    assert!(scan_utf32_runs(narrow, 0x2000, true, MIN_UNITS).is_empty());
    assert_eq!(
        scan_utf32_runs(narrow, 0x2000, true, 1),
        vec![Run32 {
            addr: 0x2018,
            units: 1,
            distinct: 1
        }]
    );
    let mut utf16 = Vec::new();
    for ch in "ntdll.dll\0".bytes() {
        utf16.extend_from_slice(&[ch, 0]);
    }
    assert!(scan_utf32_runs(&utf16, 0x2000, true, 1).is_empty());
}

fn fixture_facts(name: &str, targets: &[u64], tables: &[u64]) -> Vec<(u64, u32)> {
    let path = format!("{}/tests/fixtures/{name}", env!("CARGO_MANIFEST_DIR"));
    let bytes = std::fs::read(path).expect("read widestr32 fixture");
    let raw = object::File::parse(bytes.as_slice()).expect("parse widestr32 fixture");
    let view = crate::loader::relocrebase::rebased_view(&raw, &bytes);
    let (file, _) = crate::loader::relocrebase::select(raw, &bytes, &view);
    let mut facts: Vec<(u64, u32)> = wide_string32_facts(&file, targets, tables)
        .iter()
        .map(|f| (f.addr, f.len))
        .collect();
    facts.sort_unstable();
    facts
}

/// `widestr32_gcc_O2_x86_64`: the literals `L"hellow"` (0x402004),
/// `L"(NULL)"`, `L"xbind"` (whose tail is passed too), `U"char32-text"`,
/// `L"first-msg"` and `L"second-msg"` (both held by the pointer table `msgs`),
/// beside the switch table `CSWTCH.19` (`L"helpz"` and then `'q'`), `rows`
/// (`L"alpha"`, `L"bravo"`), `weeks` (two characters) and `codes`
/// (`L"Hello"`, the last object of `.rodata`). With no operand only the
/// pointer table backs a literal; with the operands the literals are planted
/// and every declared table keeps its name; stripped, the operand at `codes`
/// plants it, while the switch table, whose `'q'` nothing points at, `rows`
/// and the two-character `weeks` never are.
#[test]
fn gcc_builds_plant_what_points_at_a_literal() {
    let held = vec![(0x402088, 40), (0x4020b0, 44)];
    assert_eq!(fixture_facts("widestr32_gcc_O2_x86_64", &[], &[]), held);
    let targets = [
        0x402004, 0x402020, 0x40203c, 0x402040, 0x402058, 0x402088, 0x4020e0, 0x402100, 0x402160,
        0x402180,
    ];
    let tables = [0x4020e0, 0x402100];
    let literals = vec![
        (0x402004, 28),
        (0x402020, 28),
        (0x40203c, 24),
        (0x402058, 48),
        (0x402088, 40),
        (0x4020b0, 44),
    ];
    assert_eq!(
        fixture_facts("widestr32_gcc_O2_x86_64", &targets, &tables),
        literals
    );
    let mut stripped = literals.clone();
    stripped.push((0x402180, 24));
    for tables in [&tables[..], &[]] {
        assert_eq!(
            fixture_facts("widestr32_gcc_O2_stripped_x86_64", &targets, tables),
            stripped
        );
    }
}

/// `widestr32_clang_O2_x86_64` keeps no symbol for its switch table
/// (`L"helpz"` at 0x20a0, then `'q'`), so `L"hellow"` right after it is the
/// tail of the run `L"qhellow"`: the operand at 0x20bc plants the literal
/// from there. `L"first-msg"` is followed by `L"second-msg"`, which only
/// clang's table of relative offsets `reltable.pick` (0x2050) reaches: with
/// the operand at that table both are planted.
#[test]
fn an_operand_inside_a_run_plants_the_literal_it_points_at() {
    assert!(fixture_facts("widestr32_clang_O2_x86_64", &[], &[]).is_empty());
    let targets = [0x20a0, 0x20bc, 0x20d8, 0x2108, 0x2124, 0x2128, 0x213c];
    let literals = vec![(0x20bc, 28), (0x20d8, 48), (0x2108, 28), (0x2124, 24)];
    assert_eq!(
        fixture_facts("widestr32_clang_O2_x86_64", &targets, &[0x2060, 0x20a0]),
        literals
    );
    let mut explained = targets.to_vec();
    explained.insert(0, 0x2050);
    let mut first = literals.clone();
    first.extend([(0x213c, 40), (0x2164, 44)]);
    assert_eq!(
        fixture_facts("widestr32_clang_O2_x86_64", &explained, &[0x2060, 0x20a0]),
        first
    );
}

/// `widestr32_tables_gcc_O2_stripped`: int tables of character codes that
/// run on past their zero, and `L"control"` (0x2008), followed by the format
/// string `"%ld %u\n"`, which `printf`'s operand points at. A run whose next
/// unit is a code that opens no literal is refused, whatever points at it
/// (`passed`, 0x2100, then `7`; `keys`, 0x2040, held by the struct `s`, then
/// `'z'`, `'x'`, 27); so is a run holding a table base, even from an operand
/// inside it.
#[test]
fn a_table_past_its_zero_is_no_literal() {
    let name = "widestr32_tables_gcc_O2_stripped";
    assert!(fixture_facts(name, &[0x2008], &[]).is_empty());
    assert_eq!(fixture_facts(name, &[0x2008, 0x2028], &[]), [(0x2008, 32)]);
    assert!(fixture_facts(name, &[0x2100, 0x2118], &[]).is_empty());
    assert!(
        fixture_facts(name, &[], &[])
            .iter()
            .all(|&(addr, _)| addr != 0x2040)
    );
    assert!(fixture_facts(name, &[0x200c, 0x2028], &[0x2008]).is_empty());
    assert_eq!(fixture_facts(name, &[0x200c, 0x2028], &[]), [(0x200c, 28)]);
}

#[test]
fn what_follows_a_literal_is_the_next_literal_or_no_code() {
    let mut d = wide("abcde", true);
    d.extend_from_slice(&[0; 8]);
    let run = scan_utf32_runs(&d, 0x1000, true, MIN_UNITS)[0];
    assert_eq!(follower(&run, &d, 0x1000, true), Some(None));
    d.extend(wide("fg", true));
    assert_eq!(
        follower(&run, &d, 0x1000, true),
        Some(Some(Follower {
            addr: 0x1020,
            string: true
        }))
    );
    assert_eq!(follower(&run, &d, 0x1004, true), None);
    let mut named = wide("abcde", true);
    named.extend_from_slice(&7u32.to_le_bytes());
    let run = scan_utf32_runs(&named, 0x1000, true, MIN_UNITS)[0];
    assert_eq!(follower(&run, &named, 0x1000, true), None);
    let mut next = wide("abcde", true);
    next.extend(wide("xy", true));
    assert_eq!(
        follower(&run, &next, 0x1000, true),
        Some(Some(Follower {
            addr: 0x1018,
            string: true
        }))
    );
    next.truncate(next.len() - 4);
    assert_eq!(follower(&run, &next, 0x1000, true), None);
    let mut other = wide("abcde", true);
    other.extend_from_slice(b"%ld %u\n\0");
    assert_eq!(
        follower(&run, &other, 0x1000, true),
        Some(Some(Follower {
            addr: 0x1018,
            string: true
        }))
    );
    let mut pointer = wide("abcde", true);
    pointer.extend_from_slice(&0x40_2039u64.to_le_bytes());
    assert_eq!(
        follower(&run, &pointer, 0x1000, true),
        Some(Some(Follower {
            addr: 0x1018,
            string: false
        }))
    );
    let mut field = wide("abcde", true);
    field.extend_from_slice(&(-5i32).to_le_bytes());
    assert_eq!(
        follower(&run, &field, 0x1000, true),
        Some(Some(Follower {
            addr: 0x1018,
            string: false
        }))
    );
    let mut cafe = wide("abcde", true);
    cafe.extend(wide("caf\u{e9}", true));
    assert_eq!(
        follower(&run, &cafe, 0x1000, true),
        Some(Some(Follower {
            addr: 0x1018,
            string: true
        }))
    );
    let mut long = wide("abcde", true);
    long.extend_from_slice(&[0; 68]);
    long.extend_from_slice(&7u32.to_le_bytes());
    let run = scan_utf32_runs(&long, 0x1000, true, MIN_UNITS)[0];
    assert_eq!(follower(&run, &long, 0x1000, true), None);
}

/// A relocatable object's `.rodata.str4.4` holds only literals, so every run
/// there is planted, while the tables in `.rodata` are not, nothing pointing
/// at them.
#[test]
fn a_four_byte_string_section_backs_its_runs() {
    for name in ["widestr32_aarch64_O2.o", "widestr32_arm32_O2.o"] {
        let lens: Vec<u32> = fixture_facts(name, &[], &[])
            .iter()
            .map(|&(_, len)| len)
            .collect();
        assert_eq!(lens, [28, 48, 28, 24, 20, 40, 44], "{name}");
    }
}

/// The big-endian MIPS image reaches its literals through `lui`/`addiu`
/// pairs, which no operand names, so only the two `msgs` holds are planted.
#[test]
fn a_big_endian_image_reads_its_units_in_its_byte_order() {
    assert_eq!(
        fixture_facts("widestr32_mips32_be_O2", &[], &[]),
        [(0x400520, 40), (0x400548, 44)]
    );
}

#[test]
fn a_pe_image_is_not_scanned() {
    assert!(fixture_facts("widestrings_x86_64.exe", &[], &[]).is_empty());
}

#[test]
fn distinct_characters_are_counted() {
    let weeks: Vec<u8> = [52u32, 53, 52, 52, 52, 53, 0]
        .iter()
        .flat_map(|u| u.to_le_bytes())
        .collect();
    let runs = scan_utf32_runs(&weeks, 0x3000, true, MIN_UNITS);
    assert_eq!(
        runs,
        vec![Run32 {
            addr: 0x3000,
            units: 6,
            distinct: 2
        }]
    );
}
