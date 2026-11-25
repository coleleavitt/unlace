use super::*;

/// A claimed scalar field.
fn f(offset: int4, width: int4, meta: type_metatype) -> FieldKey {
    FieldKey {
        offset,
        width,
        ty: format!("{meta:?}:{width}:"),
        pointer: false,
        opaque: false,
    }
}

/// A claimed pointer field.
fn p(offset: int4, pointee: &str) -> FieldKey {
    FieldKey {
        offset,
        width: 8,
        ty: format!("TYPE_PTR:8:>TYPE_INT:1:{pointee}"),
        pointer: true,
        opaque: false,
    }
}

/// A claimed `code *` field.
fn code(offset: int4) -> FieldKey {
    FieldKey {
        offset,
        width: 8,
        ty: "TYPE_PTR:8:>TYPE_CODE:1:code".into(),
        pointer: false,
        opaque: true,
    }
}

fn layout(size: int4, fields: Vec<FieldKey>) -> Layout {
    Layout { size, fields }
}

/// No per-reader veto.
fn any(_: usize) -> bool {
    true
}

fn claim(offset: int4, width: int4, meta: type_metatype) -> Member {
    Member {
        offset,
        size: width,
        claim: Some(f(offset, width, meta)),
    }
}

fn filler(offset: int4, size: int4) -> Member {
    Member {
        offset,
        size,
        claim: None,
    }
}

/// cx6 `rd_c8` loads four bytes at 7 and stores a byte at 8; its writer
/// `full` stores a byte at each of 7..0xa. Answered by `full`'s structure,
/// the load is spelled through `field_0x7` and prints after the store.
#[test]
fn a_container_may_not_split_bytes_the_reader_accessed_without_claiming() {
    let u = type_metatype::TYPE_UINT;
    let own = vec![
        claim(0, 4, u),
        filler(4, 4),
        claim(8, 1, type_metatype::TYPE_INT),
        filler(9, 0xf),
        claim(0x18, 8, u),
        claim(0x20, 8, u),
        claim(0x28, 8, u),
    ];
    let full = vec![
        claim(0, 4, u),
        filler(4, 3),
        claim(7, 1, type_metatype::TYPE_INT),
        claim(8, 1, type_metatype::TYPE_INT),
        claim(9, 1, type_metatype::TYPE_INT),
        claim(0xa, 1, type_metatype::TYPE_INT),
        filler(0xb, 0xd),
        claim(0x18, 8, u),
        claim(0x20, 8, u),
        claim(0x28, 8, u),
    ];
    let load = [(7, 4)];
    assert!(!keeps_unclaimed(&full, &own, &load));
    assert!(keeps_unclaimed(&own, &own, &load));
    // Nothing unclaimed: containment alone decides.
    assert!(keeps_unclaimed(&full, &own, &[]));
    // A member that ends where the access starts moves a filler boundary
    // onto it, which spells the load through a member of its own.
    let mut edge = own.clone();
    edge.splice(
        1..2,
        [
            filler(4, 2),
            claim(6, 1, type_metatype::TYPE_INT),
            filler(7, 1),
        ],
    );
    assert!(!keeps_unclaimed(&edge, &own, &load));
    // Members away from the unclaimed bytes do not matter, but past the
    // reader's own end every member the container has is new.
    let mut longer = own.clone();
    longer.push(claim(0x30, 8, u));
    assert!(keeps_unclaimed(&longer, &own, &load));
    let past = [(0x30, 0x10)];
    assert!(!keeps_unclaimed(&longer, &own, &past));
    assert!(keeps_unclaimed(&own, &own, &past));
}

#[test]
fn a_vetoed_container_leaves_the_reader_to_mint() {
    let want = layout(16, vec![p(0, "uint1"), f(8, 4, type_metatype::TYPE_INT)]);
    let wide = layout(
        24,
        vec![
            p(0, "uint1"),
            f(8, 4, type_metatype::TYPE_INT),
            f(0xc, 4, type_metatype::TYPE_INT),
        ],
    );
    let own = want.clone();
    assert_eq!(best_of(&[&wide], &want, any), Some(0));
    assert_eq!(best_of(&[&wide], &want, |_| false), None);
    // The reader's own shape is then minted beside the container, which
    // supersedes it; a superseded entry still answers when nothing else fits.
    let held = [&wide, &own];
    assert!(is_superseded(&held, 1));
    assert_eq!(best_of(&held, &want, |i| i == 1), Some(1));
}

#[test]
fn a_layout_contained_at_the_same_offsets_is_subsumed() {
    let put_word = layout(16, vec![p(0, "uint1"), f(8, 4, type_metatype::TYPE_INT)]);
    let get_line = layout(
        24,
        vec![
            p(0, "uint1"),
            f(8, 4, type_metatype::TYPE_INT),
            f(0xc, 4, type_metatype::TYPE_INT),
            f(0x10, 1, type_metatype::TYPE_UINT),
        ],
    );
    assert!(get_line.answers_for(&put_word));
    assert!(!put_word.answers_for(&get_line));
    assert!(get_line.strictly_subsumes(&put_word));
}

#[test]
fn a_smaller_structure_never_subsumes_a_larger_one() {
    let small = layout(8, vec![f(0, 8, type_metatype::TYPE_INT)]);
    let big = layout(16, vec![f(0, 8, type_metatype::TYPE_INT)]);
    assert!(big.subsumes(&small));
    assert!(!small.subsumes(&big));
}

#[test]
fn two_types_at_one_offset_are_a_conflict_not_a_refinement() {
    let a = layout(16, vec![p(0, "char"), f(8, 4, type_metatype::TYPE_INT)]);
    let b = layout(
        16,
        vec![
            f(0, 8, type_metatype::TYPE_UINT),
            f(8, 4, type_metatype::TYPE_INT),
        ],
    );
    assert!(!a.subsumes(&b));
    assert!(!b.subsumes(&a));
}

#[test]
fn an_untyped_field_is_its_own_answer_not_a_wildcard() {
    let known = layout(8, vec![p(0, "char")]);
    let unknown = layout(8, vec![f(0, 8, type_metatype::TYPE_UNKNOWN)]);
    assert!(!known.subsumes(&unknown));
    assert!(!unknown.subsumes(&known));
    // Two readers that both failed to type the same 8 bytes still agree.
    assert!(unknown.subsumes(&unknown.clone()));
}

#[test]
fn a_field_of_a_different_width_at_one_offset_is_not_the_same_field() {
    let wide = layout(8, vec![f(0, 8, type_metatype::TYPE_INT)]);
    let narrow = layout(8, vec![f(0, 4, type_metatype::TYPE_INT)]);
    assert!(!wide.subsumes(&narrow));
    assert!(!narrow.subsumes(&wide));
}

#[test]
fn equal_layouts_subsume_each_other_and_neither_is_superseded() {
    let a = layout(16, vec![p(0, "uint1"), f(8, 4, type_metatype::TYPE_INT)]);
    let b = a.clone();
    assert!(a.subsumes(&b) && b.subsumes(&a));
    assert!(!a.strictly_subsumes(&b));
}

#[test]
fn the_smallest_live_container_is_the_one_reused() {
    let want = layout(16, vec![p(0, "uint1"), f(8, 4, type_metatype::TYPE_INT)]);
    let wide = layout(
        32,
        vec![
            p(0, "uint1"),
            f(8, 4, type_metatype::TYPE_INT),
            f(0xc, 4, type_metatype::TYPE_INT),
            f(0x10, 1, type_metatype::TYPE_UINT),
        ],
    );
    // Disagrees with `wide` at 0xc, so neither supersedes the other.
    let tight = layout(
        16,
        vec![
            p(0, "uint1"),
            f(8, 4, type_metatype::TYPE_INT),
            f(0xc, 4, type_metatype::TYPE_UINT),
        ],
    );
    assert!(!wide.subsumes(&tight));
    assert_eq!(best_of(&[&wide, &tight], &want, any), Some(1));
}

#[test]
fn a_superseded_entry_is_never_handed_out_again() {
    let want = layout(16, vec![p(0, "uint1"), f(8, 4, type_metatype::TYPE_INT)]);
    let gone = want.clone();
    let survivor = layout(
        24,
        vec![
            p(0, "uint1"),
            f(8, 4, type_metatype::TYPE_INT),
            f(0xc, 4, type_metatype::TYPE_INT),
        ],
    );
    let held = [&gone, &survivor];
    assert!(is_superseded(&held, 0));
    assert!(!is_superseded(&held, 1));
    assert_eq!(best_of(&held, &want, any), Some(1));
}

#[test]
fn a_container_that_dwarfs_the_measurement_does_not_answer_for_it() {
    // `ls` O0: two words of a `hash_entry` against a 200-byte record that
    // happens to start with two words of the same width.
    let measured = layout(
        16,
        vec![
            f(0, 8, type_metatype::TYPE_UINT),
            f(8, 8, type_metatype::TYPE_UINT),
        ],
    );
    let big = layout(
        200,
        vec![
            f(0, 8, type_metatype::TYPE_UINT),
            f(8, 8, type_metatype::TYPE_UINT),
            f(0x10, 8, type_metatype::TYPE_UINT),
            f(0xc4, 4, type_metatype::TYPE_UINT),
        ],
    );
    assert!(big.subsumes(&measured));
    assert!(!big.answers_for(&measured));
    assert_eq!(best_of(&[&big], &measured, any), None);
    // `ls` O0 `sub_afe2`: only 1.5x the size, but eight times the claims.
    let two = layout(
        80,
        vec![
            f(0, 8, type_metatype::TYPE_UINT),
            f(8, 8, type_metatype::TYPE_UINT),
        ],
    );
    let sixteen = layout(
        120,
        (0..16)
            .map(|i| f(i * 8, 8, type_metatype::TYPE_UINT))
            .collect(),
    );
    assert!(sixteen.subsumes(&two));
    assert!(!sixteen.answers_for(&two));
    // A layout the prune left with one claim is answered only by its shape.
    let lone = layout(32, vec![f(0, 8, type_metatype::TYPE_UINT)]);
    let pair = layout(
        40,
        vec![
            f(0, 8, type_metatype::TYPE_UINT),
            f(0x20, 8, type_metatype::TYPE_UINT),
        ],
    );
    assert!(!pair.answers_for(&lone));
    assert!(lone.answers_for(&layout(32, vec![f(0, 8, type_metatype::TYPE_UINT)])));
    // The witness pair is well inside both bounds.
    let put_word = layout(16, vec![p(0, "uint1"), f(8, 4, type_metatype::TYPE_INT)]);
    let get_line = layout(
        24,
        vec![
            p(0, "uint1"),
            f(8, 4, type_metatype::TYPE_INT),
            f(0xc, 4, type_metatype::TYPE_INT),
            f(0x10, 1, type_metatype::TYPE_UINT),
        ],
    );
    assert!(get_line.answers_for(&put_word));
}

/// The bound costs subsumption its transitivity, so a layout whose only
/// container has been superseded is still answered by that container.
/// Minting instead gives a name the container supersedes the moment it
/// exists: `fb` claims four fields, `fa` two of them, `fc` eight that include
/// `fb`'s four. In address order `fb` mints, `fa` reuses it, `fc` supersedes
/// it, and when the convergence sweep decides `fa` again the survivor is out
/// of its reach.
#[test]
fn a_superseded_container_answers_when_nothing_live_reaches_this_layout() {
    let wide = |n: int4, size: int4| {
        let mut fields = vec![p(0, "char")];
        fields.extend((1..n).map(|i| f(i * 8, 8, type_metatype::TYPE_UINT)));
        layout(size, fields)
    };
    let fa = wide(2, 16);
    let fb = wide(4, 32);
    let fc = wide(8, 64);
    assert!(fb.answers_for(&fa));
    assert!(fc.strictly_subsumes(&fb));
    assert!(!fc.answers_for(&fa));
    let held = [&fb, &fc];
    assert!(is_superseded(&held, 0));
    assert_eq!(best_of(&held, &fa, any), Some(0));
    // An entry holding exactly the layout is the smallest answer of all.
    let held = [&fb, &fa, &fc];
    assert_eq!(best_of(&held, &fa, any), Some(1));
}

/// `du`/`cp` `cycle_check(struct cycle_check_state *, const struct stat *)`:
/// the `stat` reader measures `{dev, ino}`, which is also how the state
/// record begins, and the two must not share a name.
#[test]
fn two_integer_words_are_answered_only_by_their_own_shape() {
    let u8_ = |o: int4| f(o, 8, type_metatype::TYPE_UINT);
    let stat_reader = layout(16, vec![u8_(0), u8_(8)]);
    let state = layout(
        32,
        vec![
            u8_(0),
            u8_(8),
            u8_(0x10),
            f(0x18, 4, type_metatype::TYPE_INT),
        ],
    );
    assert!(state.subsumes(&stat_reader));
    assert!(!state.answers_for(&stat_reader));
    assert_eq!(best_of(&[&state], &stat_reader, any), None);
    assert!(stat_reader.answers_for(&stat_reader.clone()));
    // A typed pointer among the two is evidence enough.
    let typed = layout(16, vec![p(0, "char"), u8_(8)]);
    let typed_state = layout(32, vec![p(0, "char"), u8_(8), u8_(0x10), u8_(0x18)]);
    assert!(typed_state.answers_for(&typed));
}

/// dpkg `pkg_queue_destroy` measures `{0: ulong, 8: ulong, 0x10: uint}` of a
/// 24-byte `pkg_queue`, which is also how a 40-byte command record begins.
/// Without a typed pointer, a reader is answered only by a structure of its
/// own size, which may fill in its holes but never extends it.
#[test]
fn integer_claims_are_never_answered_by_a_larger_structure() {
    let u8_ = |o: int4| f(o, 8, type_metatype::TYPE_UINT);
    let queue = layout(
        24,
        vec![u8_(0), u8_(8), f(0x10, 4, type_metatype::TYPE_UINT)],
    );
    let command = layout(
        40,
        vec![
            u8_(0),
            u8_(8),
            f(0x10, 4, type_metatype::TYPE_UINT),
            u8_(0x18),
            u8_(0x20),
        ],
    );
    assert!(command.subsumes(&queue));
    assert!(!command.answers_for(&queue));
    assert_eq!(best_of(&[&command], &queue, any), None);
    // dpkg `pkg_spec` is 24 bytes too, with two flag bytes at 0x14 and 0x15
    // where `pkg_queue` has tail padding.
    let spec = layout(
        24,
        vec![
            u8_(0),
            u8_(8),
            f(0x10, 4, type_metatype::TYPE_UINT),
            f(0x14, 1, type_metatype::TYPE_INT),
            f(0x15, 1, type_metatype::TYPE_INT),
        ],
    );
    assert!(spec.subsumes(&queue));
    assert!(!spec.answers_for(&queue));
    // The same extent with its hole filled in still answers.
    let holey = layout(32, vec![u8_(0), u8_(8), u8_(0x18)]);
    let filled = layout(32, vec![u8_(0), u8_(8), u8_(0x10), u8_(0x18)]);
    assert!(filled.answers_for(&holey));
    assert!(filled.strictly_subsumes(&holey));
    // A typed pointer lifts the restriction.
    let typed = layout(24, vec![p(0, "char"), u8_(8), u8_(0x10)]);
    let wider = layout(40, vec![p(0, "char"), u8_(8), u8_(0x10), u8_(0x18)]);
    assert!(wider.answers_for(&typed));
    // Including a member in the typed reader's tail: `fmt`'s `WORD` readers.
    let two_fields = layout(16, vec![p(0, "uint1"), f(8, 4, type_metatype::TYPE_INT)]);
    let three_fields = layout(
        16,
        vec![
            p(0, "uint1"),
            f(8, 4, type_metatype::TYPE_INT),
            f(0xc, 4, type_metatype::TYPE_INT),
        ],
    );
    assert!(three_fields.answers_for(&two_fields));
}

/// bash's `if_com` is `{int flags; COMMAND *test, *true_case, *false_case}`
/// and `for_com` is `{int flags; int line; WORD_DESC *name; ...}`. A reader
/// of the first measures `{0: uint, 8, 0x10, 0x18}`, and the second fills
/// in offset 4, exactly the padding the first leaves between its `int` and
/// its first pointer. The `it_init_*` readers of `ITEMLIST` measure
/// `{0: uint, 0x10: long *}`, and `case_com` has an `int` at 4 as well.
#[test]
fn a_member_in_the_readers_alignment_padding_is_a_different_record() {
    let u4 = |o: int4| f(o, 4, type_metatype::TYPE_UINT);
    let u8_ = |o: int4| f(o, 8, type_metatype::TYPE_UINT);
    let if_com = layout(32, vec![u4(0), u8_(8), u8_(0x10), u8_(0x18)]);
    let for_com = layout(32, vec![u4(0), u4(4), u8_(8), u8_(0x10), u8_(0x18)]);
    assert_eq!(if_com.interior_padding(), vec![(4, 8)]);
    assert!(for_com.subsumes(&if_com));
    assert!(!for_com.answers_for(&if_com));
    assert_eq!(best_of(&[&for_com], &if_com, any), None);
    assert!(!for_com.strictly_subsumes(&if_com));
    let items = layout(24, vec![u4(0), p(0x10, "int8")]);
    let case_com = layout(24, vec![u4(0), u4(4), u8_(8), p(0x10, "int8")]);
    assert!(case_com.subsumes(&items));
    assert!(!case_com.answers_for(&items));
    // Past the padding, a hole is room for a member the reader skipped.
    let skipped = layout(24, vec![u4(0), u8_(8), p(0x10, "int8")]);
    assert!(skipped.answers_for(&items));
    // A byte and then a word leave three bytes of padding.
    let byte_word = layout(8, vec![f(0, 1, type_metatype::TYPE_UINT), u4(4)]);
    assert_eq!(byte_word.interior_padding(), vec![(1, 4)]);
}

/// Reading only the structures inside [`lookup_window`] gives the same
/// answer as reading all of them.
#[test]
fn the_size_window_never_changes_the_answer() {
    let chain = |n: int4, size: int4| {
        let mut fields = vec![p(0, "char")];
        fields.extend((1..n).map(|i| f(i * 8, 8, type_metatype::TYPE_UINT)));
        layout(size, fields)
    };
    let held = [
        chain(1, 8),
        chain(2, 16),
        chain(4, 32),
        chain(8, 64),
        chain(16, 256),
        chain(40, 400),
    ];
    for want in [chain(2, 16), chain(3, 24), chain(4, 32), chain(8, 64)] {
        let all: Vec<&Layout> = held.iter().collect();
        let window = lookup_window(want.size);
        let kept: Vec<usize> = (0..held.len())
            .filter(|&i| window.contains(&i64::from(held[i].size)))
            .collect();
        let some: Vec<&Layout> = kept.iter().map(|&i| &held[i]).collect();
        assert_eq!(
            best_of(&all, &want, any),
            best_of(&some, &want, any).map(|k| kept[k])
        );
    }
}

/// `rsyslogd` O2 `strgenQueryInterface` fills `{int ifVersion; code *...}`
/// up to 0x48 and `statsobjQueryInterface` a table of the same shape up to
/// 0x88. They are different interface records, and each gets its own name.
#[test]
fn a_table_of_code_pointers_is_answered_only_by_its_own_shape() {
    let table = |slots: int4| {
        let mut fields = vec![f(0, 4, type_metatype::TYPE_INT)];
        fields.extend((1..=slots).map(|i| code(i * 8)));
        layout(8 * (slots + 1), fields)
    };
    let strgen = table(9);
    let statsobj = table(17);
    assert!(strgen.is_table() && statsobj.is_table());
    assert!(statsobj.subsumes(&strgen));
    assert!(!statsobj.answers_for(&strgen));
    assert_eq!(best_of(&[&statsobj], &strgen, any), None);
    assert!(!is_superseded(&[&strgen, &statsobj], 0));
    assert!(strgen.answers_for(&table(9)));
    // A table without a header at offset 0 is still a table.
    let vtable = layout(24, vec![code(0), code(8), code(0x10)]);
    let wider = layout(32, vec![code(0), code(8), code(0x10), code(0x18)]);
    assert!(!wider.answers_for(&vtable));
    // One typed claim past offset 0 makes it a record again.
    let record = layout(
        24,
        vec![f(0, 4, type_metatype::TYPE_INT), code(8), p(0x10, "char")],
    );
    let bigger = layout(
        32,
        vec![
            f(0, 4, type_metatype::TYPE_INT),
            code(8),
            p(0x10, "char"),
            code(0x18),
        ],
    );
    assert!(!record.is_table());
    assert!(bigger.answers_for(&record));
    // An opaque pointer is not the pointer that makes two claims evidence.
    let two = layout(16, vec![code(0), f(8, 8, type_metatype::TYPE_UINT)]);
    let three = layout(
        24,
        vec![
            code(0),
            f(8, 8, type_metatype::TYPE_UINT),
            f(0x10, 8, type_metatype::TYPE_UINT),
        ],
    );
    assert!(!two.is_table());
    assert!(three.subsumes(&two));
    assert!(!three.answers_for(&two));
}

#[test]
fn nothing_contains_a_conflicting_layout_so_it_mints() {
    let want = layout(16, vec![p(0, "char"), f(8, 4, type_metatype::TYPE_INT)]);
    let held = layout(16, vec![p(0, "uint1"), f(8, 4, type_metatype::TYPE_INT)]);
    assert_eq!(best_of(&[&held], &want, any), None);
}
