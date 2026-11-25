use super::*;

fn block(start: u64, stop: u64, preds: &[usize]) -> BindBlock {
    BindBlock {
        start,
        stop,
        preds: preds.to_vec(),
    }
}

fn write(block: usize, at: u64, size: i32) -> BindWrite {
    BindWrite { block, at, size }
}

#[test]
fn block_start_is_the_phi() {
    let blocks = [block(0x10, 0x1f, &[]), block(0x20, 0x2f, &[0])];
    assert_eq!(
        reaching_write(&blocks, &[write(0, 0x18, 4)], 0x20, 4),
        Some(BindPoint::Phi(0x20))
    );
}

#[test]
fn a_write_far_back_in_the_block_still_binds() {
    let blocks = [block(0x10, 0x200, &[])];
    let writes = [write(0, 0x14, 4), write(0, 0x40, 4), write(0, 0x180, 4)];
    assert_eq!(
        reaching_write(&blocks, &writes, 0x100, 4),
        Some(BindPoint::Write(1))
    );
}

#[test]
fn the_single_predecessor_chain_is_walked() {
    let blocks = [
        block(0x10, 0x1f, &[]),
        block(0x20, 0x2f, &[0]),
        block(0x30, 0x3f, &[1]),
    ];
    let writes = [write(0, 0x12, 4), write(2, 0x38, 4)];
    assert_eq!(
        reaching_write(&blocks, &writes, 0x34, 4),
        Some(BindPoint::Write(0))
    );
}

#[test]
fn a_merge_on_the_chain_binds_its_phi() {
    let blocks = [
        block(0x10, 0x1f, &[]),
        block(0x20, 0x2f, &[0]),
        block(0x30, 0x3f, &[0, 1]),
    ];
    assert_eq!(
        reaching_write(&blocks, &[write(0, 0x12, 4)], 0x34, 4),
        Some(BindPoint::Phi(0x30))
    );
}

#[test]
fn an_input_or_a_loop_without_a_write_binds_nothing() {
    let entry = [block(0x10, 0x1f, &[])];
    assert_eq!(reaching_write(&entry, &[], 0x14, 4), None);
    let cycle = [block(0x10, 0x1f, &[1]), block(0x20, 0x2f, &[0])];
    assert_eq!(reaching_write(&cycle, &[], 0x14, 4), None);
    assert_eq!(reaching_write(&entry, &[], 0x40, 4), None);
}

#[test]
fn the_exact_width_wins_a_tie_then_the_narrowest() {
    let blocks = [block(0x10, 0x1f, &[])];
    let writes = [write(0, 0x12, 8), write(0, 0x12, 4), write(0, 0x12, 1)];
    assert_eq!(
        reaching_write(&blocks, &writes, 0x18, 4),
        Some(BindPoint::Write(1))
    );
    assert_eq!(
        reaching_write(&blocks, &writes[..2], 0x18, 2),
        Some(BindPoint::Write(1))
    );
}

#[test]
fn only_integer_types_widen() {
    assert_eq!(
        widened_metatype(type_metatype::TYPE_INT),
        Some(type_metatype::TYPE_INT)
    );
    assert_eq!(
        widened_metatype(type_metatype::TYPE_BOOL),
        Some(type_metatype::TYPE_UINT)
    );
    assert_eq!(widened_metatype(type_metatype::TYPE_PTR), None);
    assert_eq!(widened_metatype(type_metatype::TYPE_FLOAT), None);
}
