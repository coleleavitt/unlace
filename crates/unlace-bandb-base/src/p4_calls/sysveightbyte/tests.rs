use super::*;

#[test]
fn merge_same_and_none() {
    assert_eq!(
        EightbyteClass::Integer.merge(EightbyteClass::Integer),
        EightbyteClass::Integer
    );
    assert_eq!(
        EightbyteClass::NoClass.merge(EightbyteClass::Sse),
        EightbyteClass::Sse
    );
    assert_eq!(
        EightbyteClass::Integer.merge(EightbyteClass::NoClass),
        EightbyteClass::Integer
    );
}

#[test]
fn merge_integer_wins_over_sse() {
    assert_eq!(
        EightbyteClass::Integer.merge(EightbyteClass::Sse),
        EightbyteClass::Integer
    );
    assert_eq!(
        EightbyteClass::Integer.merge(EightbyteClass::X87),
        EightbyteClass::Integer
    );
}

#[test]
fn merge_x87_with_sse_is_memory() {
    assert_eq!(
        EightbyteClass::X87.merge(EightbyteClass::Sse),
        EightbyteClass::Memory
    );
    assert_eq!(
        EightbyteClass::ComplexX87.merge(EightbyteClass::Sse),
        EightbyteClass::Memory
    );
}

#[test]
fn small_int_struct_is_integer() {
    let fields = vec![(0, FieldKind::Int(4)), (4, FieldKind::Int(4))];
    assert_eq!(
        classify_aggregate(&fields, 8),
        vec![EightbyteClass::Integer]
    );
}

#[test]
fn small_float_struct_is_sse() {
    let fields = vec![(0, FieldKind::Float), (4, FieldKind::Float)];
    assert_eq!(classify_aggregate(&fields, 8), vec![EightbyteClass::Sse]);
}

#[test]
fn int_and_float_in_one_eightbyte_is_integer() {
    let fields = vec![(0, FieldKind::Int(4)), (4, FieldKind::Float)];
    assert_eq!(
        classify_aggregate(&fields, 8),
        vec![EightbyteClass::Integer]
    );
}

#[test]
fn mixed_struct_is_integer_then_sse() {
    let fields = vec![(0, FieldKind::Int(4)), (8, FieldKind::Double)];
    assert_eq!(
        classify_aggregate(&fields, 16),
        vec![EightbyteClass::Integer, EightbyteClass::Sse]
    );
}

#[test]
fn oversized_struct_is_memory() {
    let fields = vec![(0, FieldKind::Int(8))];
    let classes = classify_aggregate(&fields, 80);
    assert_eq!(classes.len(), 10);
    assert!(classes.iter().all(|c| *c == EightbyteClass::Memory));
}

#[test]
fn long_double_is_x87_then_x87up() {
    let fields = vec![(0, FieldKind::LongDouble)];
    assert_eq!(
        classify_aggregate(&fields, 16),
        vec![EightbyteClass::X87, EightbyteClass::X87Up]
    );
}

#[test]
fn sse_struct_over_two_eightbytes_is_memory() {
    // Six floats are 24 bytes: the third eightbyte is SSE, not SSEUP (rule c).
    let fields = (0..6)
        .map(|i| (i * 4, FieldKind::Float))
        .collect::<Vec<_>>();
    let classes = classify_aggregate(&fields, 24);
    assert!(classes.iter().all(|c| *c == EightbyteClass::Memory));
}

#[test]
fn vector_member_is_sse_then_sseup() {
    // struct { __m256 v; } is SSE, SSEUP, SSEUP, SSEUP.
    let fields = vec![(0, FieldKind::Vector(32))];
    assert_eq!(
        classify_aggregate(&fields, 32),
        vec![
            EightbyteClass::Sse,
            EightbyteClass::SseUp,
            EightbyteClass::SseUp,
            EightbyteClass::SseUp
        ]
    );
}

#[test]
fn unaligned_field_is_memory() {
    // A double at offset 4 is packed and passed in memory.
    let fields = vec![(4, FieldKind::Double)];
    let classes = classify_aggregate(&fields, 16);
    assert!(classes.iter().all(|c| *c == EightbyteClass::Memory));
}

#[test]
fn field_past_the_end_is_memory() {
    let fields = vec![(8, FieldKind::Int(8))];
    let classes = classify_aggregate(&fields, 8);
    assert_eq!(classes, vec![EightbyteClass::Memory]);
}

#[test]
fn int_array_in_one_eightbyte_is_integer() {
    let fields = vec![(
        0,
        FieldKind::Array {
            element: Box::new(FieldKind::Int(4)),
            count: 2,
        },
    )];
    assert_eq!(
        classify_aggregate(&fields, 8),
        vec![EightbyteClass::Integer]
    );
}

#[test]
fn huge_array_count_does_not_panic() {
    let fields = vec![(
        0,
        FieldKind::Array {
            element: Box::new(FieldKind::Int(8)),
            count: u32::MAX,
        },
    )];
    assert_eq!(classify_aggregate(&fields, 8), vec![EightbyteClass::Memory]);
}

#[test]
fn field_kind_sizes() {
    assert_eq!(FieldKind::Int(8).size_in_bytes(), 8);
    assert_eq!(FieldKind::Float.size_in_bytes(), 4);
    assert_eq!(FieldKind::Double.size_in_bytes(), 8);
    let arr = FieldKind::Array {
        element: Box::new(FieldKind::Int(4)),
        count: 3,
    };
    assert_eq!(arr.size_in_bytes(), 12);
}
