use super::*;

/// A hand-written program: segment 1 at 0x2000, symbol `_a` bound at +0x10 and
/// again two slots later via IMM_SCALED, then `_b` bound once with ADD_ADDR.
#[test]
fn replays_the_common_opcodes() {
    let program = [
        BIND_OPCODE_SET_DYLIB_ORDINAL_IMM | 1,
        BIND_OPCODE_SET_TYPE_IMM | 1,
        BIND_OPCODE_SET_SYMBOL_TRAILING_FLAGS_IMM,
        b'_',
        b'a',
        0,
        BIND_OPCODE_SET_SEGMENT_AND_OFFSET_ULEB | 1,
        0x10,
        BIND_OPCODE_DO_BIND_ADD_ADDR_IMM_SCALED | 1,
        BIND_OPCODE_DO_BIND,
        BIND_OPCODE_SET_SYMBOL_TRAILING_FLAGS_IMM,
        b'_',
        b'b',
        0,
        BIND_OPCODE_ADD_ADDR_ULEB,
        0x80,
        0x01,
        BIND_OPCODE_DO_BIND,
        BIND_OPCODE_DONE,
    ];
    let mut out = HashMap::new();
    replay(
        &program,
        &[0x1000, 0x2000],
        8,
        &mut out,
        &mut MAX_BINDS.clone(),
    );
    assert_eq!(out.get(&0x2010).map(|(n, _)| n.as_ref()), Some("_a"));
    assert_eq!(out.get(&0x2020).map(|(n, _)| n.as_ref()), Some("_a"));
    assert_eq!(out.get(&0x20a8).map(|(n, _)| n.as_ref()), Some("_b"));
    assert_eq!(out.len(), 3);
}

/// The classic x86-64 `macho_objc` fixture binds `__objc_empty_cache` (the
/// `class_t.cache` word) and nothing is read from a chained image.
#[test]
fn classic_fixture_binds_resolve_and_chained_is_empty() {
    for (name, expect_some) in [("macho_objc", true), ("macho_objc_arm64", false)] {
        let path = format!("{}/tests/fixtures/{name}", env!("CARGO_MANIFEST_DIR"));
        let bytes = std::fs::read(&path).expect("fixture");
        let file = object::File::parse(bytes.as_slice()).expect("parse");
        let binds = resolve_dyld_info_binds(&file, &bytes);
        assert_eq!(!binds.is_empty(), expect_some, "{name}");
        if expect_some {
            assert!(
                binds.values().any(|n| n.as_ref() == "__objc_empty_cache"),
                "{name}: {binds:?}"
            );
        }
    }
}

/// A program that repeats a bind past the budget is cut off there.
#[test]
fn a_repeating_program_is_bounded() {
    let mut program = vec![
        BIND_OPCODE_SET_SYMBOL_TRAILING_FLAGS_IMM,
        b'_',
        b'a',
        0,
        BIND_OPCODE_SET_SEGMENT_AND_OFFSET_ULEB,
        0,
    ];
    for _ in 0..40 {
        program.extend_from_slice(&[
            BIND_OPCODE_DO_BIND_ULEB_TIMES_SKIPPING_ULEB,
            0xff,
            0xff,
            0x03,
            0,
        ]);
    }
    let mut out = HashMap::new();
    replay(&program, &[0x1000], 8, &mut out, &mut MAX_BINDS.clone());
    assert_eq!(out.len(), MAX_BINDS);
}

/// One long symbol bound many times shares its text, so the program's cost
/// is its own bytes rather than one copy of the symbol per slot.
#[test]
fn a_long_symbol_is_shared_between_its_slots() {
    let mut program = vec![BIND_OPCODE_SET_SYMBOL_TRAILING_FLAGS_IMM];
    program.extend(std::iter::repeat(b'A').take(100_000));
    program.push(0);
    program.extend_from_slice(&[BIND_OPCODE_SET_SEGMENT_AND_OFFSET_ULEB, 0]);
    program.extend_from_slice(&[BIND_OPCODE_DO_BIND_ULEB_TIMES_SKIPPING_ULEB, 0x80, 0x10, 0]);
    let mut out = HashMap::new();
    replay(&program, &[0x1000], 8, &mut out, &mut MAX_BINDS.clone());
    assert_eq!(out.len(), 0x800);
    assert!(
        out.values()
            .all(|(n, _)| Rc::ptr_eq(n, &out.values().next().unwrap().0))
    );
}

/// A run longer than 65,536 slots (ld64 folds every same-symbol, same-stride
/// run into one opcode, e.g. a large app's `__objc_empty_cache` slots) is
/// replayed whole, so the binds after it land on their own slots.
#[test]
fn a_long_uniform_run_is_replayed_whole() {
    let program = [
        BIND_OPCODE_SET_SYMBOL_TRAILING_FLAGS_IMM,
        b'_',
        b'a',
        0,
        BIND_OPCODE_SET_SEGMENT_AND_OFFSET_ULEB,
        0,
        BIND_OPCODE_DO_BIND_ULEB_TIMES_SKIPPING_ULEB,
        0xf0,
        0xa2,
        0x04,
        0x18,
        BIND_OPCODE_SET_SYMBOL_TRAILING_FLAGS_IMM,
        b'_',
        b'b',
        0,
        BIND_OPCODE_DO_BIND,
        BIND_OPCODE_DONE,
    ];
    let mut out = HashMap::new();
    assert_eq!(
        replay(&program, &[0x1000], 8, &mut out, &mut MAX_BINDS.clone()),
        Some(())
    );
    assert_eq!(out.len(), 70_001);
    assert_eq!(
        out.get(&(0x1000 + 69_999 * 32)).map(|(n, _)| n.as_ref()),
        Some("_a")
    );
    assert_eq!(
        out.get(&(0x1000 + 70_000 * 32)).map(|(n, _)| n.as_ref()),
        Some("_b")
    );
}

/// A program that rebinds one slot over and over spends the budget though
/// the map never grows.
#[test]
fn rebinding_one_slot_spends_the_budget() {
    let skip = (2u128.pow(64) - 8) as u64;
    let mut unit = vec![
        BIND_OPCODE_DO_BIND_ULEB_TIMES_SKIPPING_ULEB,
        0xff,
        0xff,
        0x03,
    ];
    let mut v = skip;
    loop {
        let byte = (v & 0x7f) as u8;
        v >>= 7;
        unit.push(if v == 0 { byte } else { byte | 0x80 });
        if v == 0 {
            break;
        }
    }
    let mut program = vec![
        BIND_OPCODE_SET_SYMBOL_TRAILING_FLAGS_IMM,
        b'_',
        b'a',
        0,
        BIND_OPCODE_SET_SEGMENT_AND_OFFSET_ULEB,
        0,
    ];
    for _ in 0..40 {
        program.extend_from_slice(&unit);
    }
    let mut out = HashMap::new();
    let mut left = MAX_BINDS;
    assert_eq!(replay(&program, &[0x1000], 8, &mut out, &mut left), None);
    assert_eq!((left, out.len()), (0, 1));
}
