use super::*;
use crate::loader::format::wasm::synthetic::{
    F64, I32, I64, ModuleBuilder, block, i32_const, indexed,
};

const BASE: u32 = 0x8000_0000;
const VOID: u8 = 0x40;

/// Lower function `index` of the built module and decode its records as
/// `(opcode, type, height, lo, hi)`, calls and tables resolved to a marker.
fn records(builder: &ModuleBuilder, index: usize) -> (Lowered, Vec<(u16, u8, u32, u32, u32)>) {
    let bytes = builder.build();
    let module = Module::parse(&bytes).unwrap();
    let lowered = Lowering::new(&module, &bytes).lower(index);
    let mut code = Vec::new();
    lowered.encode(
        BASE,
        |fix| match fix {
            Fix::Function(index) => 0xf000_0000 + index,
            Fix::Table(index) => 0xe000_0000 + index,
            Fix::None | Fix::Label(_) => 0,
        },
        &mut code,
    );
    assert_eq!(code.len(), lowered.len() as usize);
    let word = |at: usize| u32::from_le_bytes(code[at..at + 4].try_into().unwrap());
    let records = (0..code.len())
        .step_by(16)
        .map(|at| {
            (
                (word(at) & 0xffff) as u16,
                (word(at) >> 16) as u8,
                word(at + 4),
                word(at + 8),
                word(at + 12),
            )
        })
        .collect();
    (lowered, records)
}

#[test]
fn straight_line_code_reads_its_operands_by_stack_height() {
    let mut builder = ModuleBuilder::default();
    let code = [
        indexed(0x20, 0),
        indexed(0x20, 1),
        vec![0x6c],
        indexed(0x20, 2),
        vec![0x6a],
    ]
    .concat();
    builder.function("mul_add", &[I32, I32, I32], &[I32], &[], &code);
    let (lowered, records) = records(&builder, 0);
    assert_eq!(lowered.refused, None);
    assert_eq!(
        records,
        vec![
            (OP_PARAM, 0, 0, 0, 0),
            (OP_PARAM, 0, 0, 1, 1),
            (OP_PARAM, 0, 0, 2, 2),
            (0x20, 0, 0, 0, 0),
            (0x20, 0, 1, 1, 0),
            (0x6c, 0, 2, 0, 0),
            (0x20, 0, 1, 2, 0),
            (0x6a, 0, 2, 0, 0),
            (OP_RETVAL, 0, 0, 0, 0),
            (OP_RETURN, 0, 0, 0, 0),
        ]
    );
}

#[test]
fn only_the_locals_a_body_reads_are_copied_in_or_zeroed() {
    let mut builder = ModuleBuilder::default();
    let code = [
        indexed(0x20, 3),
        vec![0x1a],
        indexed(0x20, 0),
        indexed(0x21, 1),
        i32_const(1),
        indexed(0x21, 2),
    ]
    .concat();
    builder.function("f", &[I64, I64], &[], &[(1, I32), (1, F64)], &code);
    let (_, records) = records(&builder, 0);
    assert_eq!(
        records[..2],
        [(OP_PARAM, 1, 0, 0, 0), (OP_ZERO, 3, 0, 3, 0)]
    );
    assert_eq!(records.len(), 8);
}

#[test]
fn a_branch_table_that_would_lower_to_a_flood_of_moves_is_refused() {
    // Thirty nested blocks of fifty results, each opened one slot higher,
    // and a br_table from the innermost naming every one of them.
    let wide: Vec<u8> = vec![I32; 50];
    let mut code = Vec::new();
    for _ in 0..30 {
        code.extend([i32_const(0), vec![0x02, 0]].concat());
    }
    (0..50).for_each(|_| code.extend(i32_const(1)));
    code.extend(i32_const(0));
    code.extend([vec![0x0e, 30], (0..30).collect::<Vec<u8>>(), vec![0]].concat());
    (0..30).for_each(|_| code.extend([0x0b, 0x00]));
    let mut builder = ModuleBuilder::default();
    builder
        .function("wide", &[], &wide, &[], &[])
        .function("f", &[], &[], &[], &code);
    let (lowered, _) = records(&builder, 1);
    assert_eq!(
        lowered.refused.as_deref(),
        Some("uses branches that lower to more than 4 records per byte")
    );
}

#[test]
fn a_branch_moves_its_value_down_to_the_height_its_target_expects() {
    // i32.const 100; block (result i32) i32.const 1; i32.const 2; local.get 0; br_if 0; i32.add end; i32.add
    let inner = [
        i32_const(1),
        i32_const(2),
        indexed(0x20, 0),
        indexed(0x0d, 0),
        vec![0x6a],
    ]
    .concat();
    let code = [i32_const(100), block(0x02, I32, &inner), vec![0x6a]].concat();
    let mut builder = ModuleBuilder::default();
    builder.function("f", &[I32], &[I32], &[], &code);
    let (_, records) = records(&builder, 0);
    let skip = BASE + 16 * 8;
    let end = BASE + 16 * 9;
    assert_eq!(
        records[4..],
        [
            (0x20, 0, 3, 0, 0),
            (OP_BR_UNLESS, 0, 4, skip, 0),
            (OP_MOVE, 0, 2, 1, 0),
            (OP_BR, 0, 4, end, 0),
            (0x6a, 0, 3, 0, 0),
            (0x6a, 0, 2, 0, 0),
            (OP_RETVAL, 0, 0, 0, 0),
            (OP_RETURN, 0, 0, 0, 0),
        ]
    );
}

#[test]
fn an_if_branches_past_its_true_arm_and_the_true_arm_past_the_false_one() {
    let then = [i32_const(2), vec![0x05], i32_const(3)].concat();
    let code = [indexed(0x20, 0), block(0x04, I32, &then)].concat();
    let mut builder = ModuleBuilder::default();
    builder.function("f", &[I32], &[I32], &[], &code);
    let (_, records) = records(&builder, 0);
    assert_eq!(
        records[2..6],
        [
            (OP_BR_UNLESS, 0, 1, BASE + 16 * 5, 0),
            (0x41, 0, 0, 2, 0),
            (OP_BR, 0, 1, BASE + 16 * 6, 0),
            (0x41, 0, 0, 3, 0),
        ]
    );
}

#[test]
fn br_table_is_a_bounds_test_and_a_jump_through_a_table_of_addresses() {
    // block block local.get 0; br_table 0 1 0, default 1; end; i32.const 5; return; end; i32.const 6
    let table = [vec![0x0e, 3, 0, 1, 0, 1]].concat();
    let inner = block(0x02, VOID, &[indexed(0x20, 0), table].concat());
    let code = [
        block(0x02, VOID, &[inner, i32_const(5), vec![0x0f]].concat()),
        i32_const(6),
    ]
    .concat();
    let mut builder = ModuleBuilder::default();
    builder.function("f", &[I32], &[I32], &[], &code);
    let bytes = builder.build();
    let module = Module::parse(&bytes).unwrap();
    let lowered = Lowering::new(&module, &bytes).lower(0);
    let mut image = Vec::new();
    lowered.encode(BASE, |_| 0, &mut image);
    let word = |at: usize| u32::from_le_bytes(image[at..at + 4].try_into().unwrap());
    // param, local.get, default test, br_table, [3 entries + pad], const 5, br, const 6, retval, return
    let (inner_end, outer_end) = (BASE + 16 * 5, BASE + 16 * 7);
    assert_eq!(
        (word(32) & 0xffff, word(40), word(44)),
        (u32::from(OP_BR_TABLE_DEFAULT), outer_end, 3)
    );
    assert_eq!(
        (word(48) & 0xffff, word(56)),
        (u32::from(OP_BR_TABLE), BASE + 64)
    );
    assert_eq!(
        [word(64), word(68), word(72), word(76)],
        [inner_end, outer_end, inner_end, 0]
    );
    assert_eq!(word(80) & 0xffff, 0x41);
}

#[test]
fn a_call_copies_its_arguments_out_and_its_result_back() {
    let code = [
        i32_const(9),
        indexed(0x20, 0),
        indexed(0x20, 1),
        indexed(0x10, 0),
        vec![0x1a],
    ]
    .concat();
    let mut builder = ModuleBuilder::default();
    builder
        .import("ext", &[I64, I32], &[I64])
        .function("f", &[I64, I32], &[I32], &[], &code);
    let (lowered, records) = records(&builder, 0);
    assert_eq!(lowered.refused, None);
    assert_eq!(
        records[5..9],
        [
            (OP_ARG, 1, 1, 0, 0),
            (OP_ARG, 0, 2, 0, 1),
            (0x10, 0, 3, 0xf000_0000, 0),
            (OP_RESULT, 1, 1, 0, 0)
        ]
    );
}

#[test]
fn an_indirect_call_reads_its_table_and_a_tail_call_returns() {
    let code = [indexed(0x20, 0), indexed(0x20, 0), vec![0x13, 0, 0]].concat();
    let mut builder = ModuleBuilder::default();
    builder
        .function("f", &[I32], &[I32], &[], &code)
        .table(&[0], false);
    let (lowered, records) = records(&builder, 0);
    assert_eq!(lowered.refused, None);
    assert_eq!(
        records[3..],
        [
            (OP_ARG, 0, 0, 0, 0),
            (OP_CALL_INDIRECT, 0, 2, 0xe000_0000, 0),
            (OP_RESULT, 0, 0, 0, 0),
            (OP_BR, 0, 1, BASE + 16 * 7, 0),
            (OP_RETVAL, 0, 0, 0, 0),
            (OP_RETURN, 0, 0, 0, 0),
        ]
    );
}

#[test]
fn unreachable_code_is_dropped_and_its_blocks_skipped_whole() {
    // br 0 (to the function); then dead: i32.const 1; block i32.const 2; end; drop; then the end
    let dead = [
        i32_const(1),
        block(0x02, I32, &i32_const(2)),
        vec![0x1a, 0x1a],
    ]
    .concat();
    let code = [i32_const(4), indexed(0x0c, 0), dead].concat();
    let mut builder = ModuleBuilder::default();
    builder.function("f", &[], &[I32], &[], &code);
    let (lowered, records) = records(&builder, 0);
    assert_eq!(lowered.refused, None);
    assert_eq!(
        records,
        vec![
            (0x41, 0, 0, 4, 0),
            (OP_BR, 0, 1, BASE + 32, 0),
            (OP_RETVAL, 0, 0, 0, 0),
            (OP_RETURN, 0, 0, 0, 0)
        ]
    );
}

#[test]
fn the_stack_pointer_global_is_marked() {
    let code = [
        indexed(0x23, 0),
        indexed(0x24, 0),
        indexed(0x23, 1),
        vec![0x1a],
    ]
    .concat();
    let mut builder = ModuleBuilder::default();
    builder
        .function("f", &[], &[], &[], &code)
        .global("__stack_pointer", I32, true, 0x1_0000)
        .global("other", I32, true, 0);
    let (_, records) = records(&builder, 0);
    assert_eq!(
        records[..3],
        [
            (0x23, TYPE_STACK_POINTER, 0, 0, 0),
            (0x24, TYPE_STACK_POINTER, 1, 0, 0),
            (0x23, 0, 0, 1, 0)
        ]
    );
}

#[test]
fn a_body_outside_the_supported_set_is_one_unsupported_record_and_a_reason() {
    let cases: [(&[u8], &[u8], &[u8], &str); 6] = [
        (&[], &[], &[0xfd, 0x0c], "uses instruction 0xfd"),
        (
            &[],
            &[I32, I32],
            &[0x41, 1, 0x41, 2],
            "uses a function type with more than one result",
        ),
        (
            &[],
            &[I32],
            &[],
            "malformed body: a block ends without its results",
        ),
        (&[], &[], &[0x6a], "malformed body: operand stack underflow"),
        (
            &[I32],
            &[],
            &[0x20, 0, 0x50, 0x1a],
            "malformed body: operand type mismatch",
        ),
        (
            &[],
            &[],
            &[0x0c, 4],
            "malformed body: branch depth out of range",
        ),
    ];
    for (params, results, code, reason) in cases {
        let mut builder = ModuleBuilder::default();
        builder.function("f", params, results, &[], code);
        let (lowered, records) = records(&builder, 0);
        assert_eq!(lowered.refused.as_deref(), Some(reason));
        assert_eq!(records, vec![(OP_UNSUPPORTED, 0, 0, 0, 0)]);
    }
}

#[test]
fn a_body_cut_short_anywhere_is_refused_without_a_panic() {
    let then = [i32_const(2), vec![0x05], i32_const(3)].concat();
    let code = [
        indexed(0x20, 0),
        block(0x04, I32, &then),
        vec![0x0e, 1, 0, 0],
    ]
    .concat();
    let mut builder = ModuleBuilder::default();
    builder.function("f", &[I32], &[I32], &[], &code);
    let bytes = builder.build();
    let mut module = Module::parse(&bytes).unwrap();
    let full = module.bodies[0].code.clone();
    for end in full.start..full.end {
        module.bodies[0].code = full.start..end;
        assert!(
            Lowering::new(&module, &bytes).lower(0).refused.is_some(),
            "cut at {end}"
        );
    }
}
