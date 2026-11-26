use super::*;

const M: uintb = 0xffff_ffff;

fn ids() -> Vec<VarnodeId> {
    let mut map: slotmap::SlotMap<VarnodeId, ()> = slotmap::SlotMap::with_key();
    (0..10).map(|_| map.insert(())).collect()
}
fn v(n: usize) -> Lin {
    Lin::leaf(Leaf::Vn(ids()[n]))
}
fn atom(signed_borrow: bool, signed: bool, p: Lin, q: Lin, neg: bool) -> Atom {
    Atom {
        signed_borrow,
        signed,
        p,
        q,
        neg,
    }
}

#[test]
fn signed_borrow_xor_tree_is_a_signed_compare() {
    let (xh, yh) = (v(1), v(2));
    let c = Lin::leaf(Leaf::Borrow);
    let d = xh.sub(&yh, M);
    let atoms = [
        atom(true, true, xh.clone(), yh.clone(), false),
        atom(true, true, d.clone(), c.clone(), false),
        atom(false, true, d.sub(&c, M), Lin::konst(0, M), false),
    ];
    assert_eq!(signed_match(&atoms, &xh, &yh, M), Some(false));
    let folded = [atom(false, true, d.clone(), c.clone(), true)];
    assert_eq!(signed_match(&folded, &xh, &Lin::konst(0, M), M), None);
    let zero = Lin::konst(0, M);
    let against_zero = [atom(false, true, xh.clone(), c.clone(), true)];
    assert_eq!(signed_match(&against_zero, &xh, &zero, M), Some(true));
    let extra = [
        atoms[0].clone(),
        atoms[1].clone(),
        atom(false, true, xh.clone(), zero, false),
    ];
    assert_eq!(signed_match(&extra, &xh, &yh, M), None);
}

#[test]
fn unsigned_borrow_and_carry_out() {
    let (xh, yh) = (v(1), v(2));
    let c = Lin::leaf(Leaf::Borrow);
    let d = xh.sub(&yh, M);
    let borrow = [
        atom(false, false, xh.clone(), yh.clone(), false),
        atom(false, false, d.clone(), c.clone(), false),
    ];
    assert_eq!(unsigned_match(&borrow, false, &xh, &yh, M), Some(false));
    let notc = Lin::konst(1, M).sub(&c, M);
    let carry = [
        atom(false, false, yh.clone(), xh.clone(), false),
        atom(false, false, d.clone(), notc, false),
    ];
    assert_eq!(unsigned_match(&carry, false, &xh, &yh, M), Some(true));
    let wrong = [
        atom(false, false, xh.clone(), yh.clone(), false),
        atom(false, false, d, Lin::konst(1, M), false),
    ];
    assert_eq!(unsigned_match(&wrong, false, &xh, &yh, M), None);
}

#[test]
fn carried_into_needs_the_carry_and_the_high_word_in_one_sum() {
    let c = Lin::leaf(Leaf::Borrow);
    let hi = ids()[7];
    let sum = v(7).add(&v(8), M).add(&c, M);
    assert!(carried_into(&[sum], hi, M));
    let apart = [v(7).add(&v(8), M), v(9).add(&c, M)];
    assert!(!carried_into(&apart, hi, M));
}
