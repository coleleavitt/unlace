use super::*;

fn frame_row(off: i64, size: i64) -> VarInfo {
    VarInfo {
        name: format!("local_{:x}", -off),
        type_name: format!("undefined{size}"),
        stack_offset: Some(off),
        size,
        is_param: false,
        arg_index: None,
        line_numbers: Vec::new(),
        addresses: Vec::new(),
        split_piece: false,
        storage: Vec::new(),
    }
}

fn split(slots: &DeclaredSlots, rows: Vec<VarInfo>) -> Vec<(String, String, i64, i64)> {
    let mut out = rows;
    let candidates: Vec<usize> = (0..out.len()).collect();
    split_rows(slots, &mut out, &candidates);
    out.into_iter()
        .map(|v| (v.name, v.type_name, v.stack_offset.unwrap(), v.size))
        .collect()
}

fn row(name: &str, ty: &str, off: i64, size: i64) -> (String, String, i64, i64) {
    (name.to_string(), ty.to_string(), off, size)
}

#[test]
fn a_pointer_at_the_start_of_a_span_splits_it() {
    let slots = DeclaredSlots::for_test(&[((-0x40, 8), &[("v3", Some("char *"), true)])]);
    assert_eq!(
        split(&slots, vec![frame_row(-0x40, 16)]),
        [
            row("local_40", "char *", -0x40, 8),
            row("local_38", "undefined8", -0x38, 8)
        ]
    );
}

#[test]
fn declarations_inside_an_odd_width_row_split_it_with_gaps() {
    let slots = DeclaredSlots::for_test(&[
        ((-0x10, 4), &[("v1", Some("int"), false)]),
        ((-0xc, 1), &[("v2", None, false)]),
    ]);
    assert_eq!(
        split(&slots, vec![frame_row(-0x12, 7)]),
        [
            row("local_12", "undefined2", -0x12, 2),
            row("local_10", "int", -0x10, 4),
            row("local_c", "undefined1", -0xc, 1),
        ]
    );
}

#[test]
fn a_scalar_width_row_splits_only_at_a_pointer_or_float() {
    let int = DeclaredSlots::for_test(&[((-0x10, 4), &[("v1", Some("int"), false)])]);
    assert_eq!(
        split(&int, vec![frame_row(-0x10, 8)]),
        [row("local_10", "undefined8", -0x10, 8)]
    );
    let float = DeclaredSlots::for_test(&[((-0xc, 4), &[("v1", Some("float"), true)])]);
    assert_eq!(
        split(&float, vec![frame_row(-0x10, 8)]),
        [
            row("local_10", "undefined4", -0x10, 4),
            row("local_c", "float", -0xc, 4)
        ]
    );
}

#[test]
fn declarations_that_disagree_leave_their_piece_width_only() {
    let slots = DeclaredSlots::for_test(&[(
        (-0x20, 8),
        &[("v1", Some("long"), false), ("v2", Some("char *"), true)],
    )]);
    assert_eq!(
        split(&slots, vec![frame_row(-0x20, 24)]),
        [
            row("local_20", "undefined8", -0x20, 8),
            row("local_18", "undefined16", -0x18, 16)
        ]
    );
}

#[test]
fn overlapping_declarations_leave_the_row_whole() {
    let slots = DeclaredSlots::for_test(&[
        ((-0x20, 8), &[("v1", Some("char *"), true)]),
        ((-0x1c, 8), &[("v2", Some("long"), false)]),
    ]);
    assert_eq!(
        split(&slots, vec![frame_row(-0x20, 24)]),
        [row("local_20", "undefined24", -0x20, 24)]
    );
}

#[test]
fn no_piece_starts_where_another_row_does() {
    let slots = DeclaredSlots::for_test(&[((-0x18, 8), &[("v1", Some("char *"), true)])]);
    let mut symbol = frame_row(-0x18, 8);
    symbol.name = "v1".to_string();
    symbol.type_name = "char *".to_string();
    assert_eq!(
        split(&slots, vec![frame_row(-0x20, 24), symbol]),
        [
            row("local_20", "undefined24", -0x20, 24),
            row("v1", "char *", -0x18, 8)
        ]
    );
}

#[test]
fn overlapping_rows_never_report_a_piece_twice() {
    let slots = DeclaredSlots::for_test(&[
        ((-0xa8, 4), &[("v10", Some("void *"), true)]),
        (
            (-0xa4, 4),
            &[
                ("v9", Some("unsigned int"), false),
                ("v12", Some("char *"), true),
            ],
        ),
    ]);
    let mut out = vec![
        frame_row(-0xb0, 40),
        frame_row(-0xac, 4),
        frame_row(-0xa8, 32),
    ];
    split_rows(&slots, &mut out, &[0, 1, 2]);
    let rows: Vec<_> = out
        .iter()
        .map(|v| {
            (
                v.name.as_str(),
                v.type_name.as_str(),
                v.stack_offset.unwrap(),
                v.size,
            )
        })
        .collect();
    assert_eq!(
        rows,
        [
            ("local_b0", "undefined4", -0xb0, 4),
            ("local_a4", "undefined4", -0xa4, 4),
            ("local_a0", "undefined24", -0xa0, 24),
            ("local_ac", "undefined4", -0xac, 4),
            ("local_a8", "void *", -0xa8, 4),
        ]
    );
}

#[test]
fn the_pieces_after_the_first_are_marked() {
    let slots = DeclaredSlots::for_test(&[((-0x18, 8), &[("v1", Some("double"), true)])]);
    let mut out = vec![frame_row(-0x20, 4), frame_row(-0x18, 12)];
    split_rows(&slots, &mut out, &[0, 1]);
    let marks: Vec<_> = out
        .iter()
        .map(|v| (v.stack_offset.unwrap(), v.split_piece))
        .collect();
    assert_eq!(marks, [(-0x20, false), (-0x18, false), (-0x10, true)]);
    assert_eq!(out.iter().filter(|v| !v.split_piece).count(), 2);
}
