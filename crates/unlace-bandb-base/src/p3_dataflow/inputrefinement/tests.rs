use super::*;

fn partitions(refine: &[int4]) -> Vec<(usize, int4)> {
    let mut result = Vec::new();
    let mut pos = 0;
    while pos < refine.len() {
        let size = refine[pos];
        assert!(size > 0);
        result.push((pos, size));
        pos += size as usize;
    }
    assert_eq!(pos, refine.len());
    result
}

#[test]
fn known_argument_boundary_survives_mixed_byte_halfword_word_reads() {
    let mut refine = [2, 0, 1, 1, 3, 0, 0, 1];
    coalesce(&mut refine, &mut |start, junction, end| {
        [(0, 4), (4, 8)]
            .into_iter()
            .any(|span| span_straddles_join(span, start, junction, end))
    });
    assert_eq!(partitions(&refine), [(0, 2), (2, 1), (3, 1), (4, 4)]);
}

#[test]
fn both_slice_orders_preserve_a_straddling_input_boundary() {
    for (mut refine, span) in [
        ([2, 0, 1, 3, 0, 0, 2, 0], (3, 8)),
        ([2, 0, 3, 0, 0, 1, 2, 0], (0, 5)),
    ] {
        let before = partitions(&refine);
        coalesce(&mut refine, &mut |start, junction, end| {
            span_straddles_join(span, start, junction, end)
        });
        assert_eq!(partitions(&refine), before);
    }
}

#[test]
fn contained_narrow_input_keeps_legacy_join() {
    for (mut refine, span) in [([1, 3, 0, 0], (0, 1)), ([3, 0, 0, 1], (3, 4))] {
        coalesce(&mut refine, &mut |start, junction, end| {
            span_straddles_join(span, start, junction, end)
        });
        assert_eq!(partitions(&refine), [(0, 4)]);
    }
}

#[test]
fn ordinary_slices_retain_legacy_coalescing() {
    for mut refine in [[1, 3, 0, 0], [3, 0, 0, 1]] {
        coalesce(&mut refine, &mut |_, _, _| false);
        assert_eq!(partitions(&refine), [(0, 4)]);
    }
}
