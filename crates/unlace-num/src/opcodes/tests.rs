use super::*;

/// Every actual operation, in enum order (no BLANK/UNUSED1/CPUI_MAX).
fn all_ops() -> Vec<OpCode> {
    (1..OpCode::CPUI_MAX as i32)
        .filter_map(OpCode::from_i32)
        .collect()
}

#[test]
fn test_opcodes_table_is_sorted_permutation() {
    // OPCODE_INDICES must be a permutation of 0..CPUI_MAX ...
    let mut seen = [false; 75];
    for &ind in OPCODE_INDICES.iter() {
        assert!(!seen[ind as usize], "duplicate sort slot {ind}");
        seen[ind as usize] = true;
    }
    assert!(seen.iter().all(|&b| b));
    // ... in strictly ascending (byte-lexicographic) name order.
    for w in OPCODE_INDICES.windows(2) {
        assert!(
            OPCODE_NAME[w[0] as usize] < OPCODE_NAME[w[1] as usize],
            "sort order violated at {} vs {}",
            OPCODE_NAME[w[0] as usize],
            OPCODE_NAME[w[1] as usize]
        );
    }
}

#[test]
fn test_opcodes_name_roundtrip_all_ops() {
    // get_opcode(get_opname(op)) == op for every real operation —
    // these are exactly the names the C++ sorted search resolves
    // correctly (UB-1 aside), plus ZPULL/SPULL which it does not.
    for op in all_ops() {
        assert_eq!(get_opcode(get_opname(op)), Some(op), "roundtrip of {op:?}");
    }
    assert_eq!(all_ops().len(), 73); // 74 slots minus unused 45
}

#[test]
fn test_opcodes_ub1_names_fixed() {
    // UB-1: upstream returns "EXTRACT" for ZPULL and reads out of
    // bounds for SPULL; the canonical names are pinned here and the
    // stale name no longer resolves.
    assert_eq!(get_opname(OpCode::CPUI_ZPULL), "ZPULL");
    assert_eq!(get_opname(OpCode::CPUI_SPULL), "SPULL");
    assert_eq!(get_opcode("EXTRACT"), None);
    assert_eq!(get_opcode("ZPULL"), Some(OpCode::CPUI_ZPULL));
    assert_eq!(get_opcode("SPULL"), Some(OpCode::CPUI_SPULL));
}

#[test]
fn test_opcodes_lookup_misses() {
    assert_eq!(get_opcode(""), None);
    assert_eq!(get_opcode("BLANK"), None); // excluded by min=1
    assert_eq!(get_opcode("UNUSED1"), None); // names no enum value
    assert_eq!(get_opcode("INT_AD"), None);
    assert_eq!(get_opcode("INT_ADDX"), None);
    // Greater than every table name: the C++ search would probe the
    // out-of-bounds sorted slot 74 here (part of the UB-1 surface).
    assert_eq!(get_opcode("ZZZZ"), None);
    assert_eq!(get_opcode("AAAA"), None);
}

#[test]
fn test_opcodes_booleanflip_pairs() {
    let cases = [
        (OpCode::CPUI_INT_EQUAL, OpCode::CPUI_INT_NOTEQUAL, false),
        (OpCode::CPUI_INT_NOTEQUAL, OpCode::CPUI_INT_EQUAL, false),
        (OpCode::CPUI_INT_SLESS, OpCode::CPUI_INT_SLESSEQUAL, true),
        (OpCode::CPUI_INT_SLESSEQUAL, OpCode::CPUI_INT_SLESS, true),
        (OpCode::CPUI_INT_LESS, OpCode::CPUI_INT_LESSEQUAL, true),
        (OpCode::CPUI_INT_LESSEQUAL, OpCode::CPUI_INT_LESS, true),
        (OpCode::CPUI_BOOL_NEGATE, OpCode::CPUI_COPY, false),
        (OpCode::CPUI_FLOAT_EQUAL, OpCode::CPUI_FLOAT_NOTEQUAL, false),
        (OpCode::CPUI_FLOAT_NOTEQUAL, OpCode::CPUI_FLOAT_EQUAL, false),
    ];
    for (opc, flip, expect_reorder) in cases {
        let mut reorder = !expect_reorder; // must be overwritten
        assert_eq!(get_booleanflip(opc, &mut reorder), flip);
        assert_eq!(reorder, expect_reorder, "reorder flag for {opc:?}");
    }
    for opc in [
        OpCode::CPUI_INT_ADD,
        OpCode::CPUI_FLOAT_LESS,
        OpCode::CPUI_FLOAT_LESSEQUAL,
    ] {
        let mut reorder = true;
        assert_eq!(get_booleanflip(opc, &mut reorder), OpCode::CPUI_MAX);
        assert!(reorder);
    }
}
