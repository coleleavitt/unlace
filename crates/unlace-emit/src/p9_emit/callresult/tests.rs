use super::*;
use unlace_base::space::AddrSpace;

fn space(big: bool, index: i32, width: u32, word: u32) -> Rc<AddrSpace> {
    Rc::new(AddrSpace::new(
        spacetype::IPTR_PROCESSOR,
        "register",
        big,
        width,
        word,
        index,
        0,
        1,
        1,
    ))
}

#[test]
fn narrowing_requires_the_low_storage_slice_in_either_byte_order() {
    for big in [false, true] {
        let register = space(big, 2, 8, 1);
        for source_size in [2, 4, 8] {
            for target_size in [1, 2, 4].into_iter().filter(|size| *size < source_size) {
                let source = Address::new(register.clone(), 0x100);
                for offset in 0..source_size {
                    let target = Address::new(register.clone(), 0x100 + offset as u64);
                    assert_eq!(
                        low_storage(&source, source_size, &target, target_size),
                        offset == if big { source_size - target_size } else { 0 }
                    );
                }
            }
        }
    }
}

#[test]
fn ambiguous_storage_and_wrapped_ranges_are_rejected() {
    let register = space(false, 2, 8, 1);
    let source = Address::new(register.clone(), 0x100);
    assert!(!low_storage(
        &source,
        8,
        &Address::new(space(false, 3, 8, 1), 0x100),
        1
    ));
    for size in [0, 8, 16] {
        assert!(!low_storage(&source, 8, &source, size));
    }
    let wrapped = Address::new(register, u64::MAX - 3);
    assert!(!low_storage(&wrapped, 8, &wrapped, 1));
    let limited = Address::new(space(false, 2, 1, 1), 0xfc);
    assert!(!low_storage(&limited, 8, &limited, 1));
    let word = Address::new(space(false, 2, 8, 2), 0x100);
    assert!(!low_storage(&word, 8, &word, 1));
    for kind in [
        spacetype::IPTR_INTERNAL,
        spacetype::IPTR_JOIN,
        spacetype::IPTR_SPACEBASE,
    ] {
        let address = Address::new(
            Rc::new(AddrSpace::new(kind, "other", false, 8, 1, 2, 0, 1, 1)),
            0x100,
        );
        assert!(!low_storage(&address, 8, &address, 1));
    }
}
