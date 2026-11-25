use super::*;
use crate::dtype::{TypeFactory, TypeFactoryImpl};

#[test]
fn extraction_reads_the_same_value_in_both_memory_orders() {
    let value = 0x00112233445566778899aabbccddeeffu128;
    for size in [1, 2, 4, 8] {
        for lsb in 0..=16 - size {
            for big in [false, true] {
                let bytes = if big {
                    value.to_be_bytes()
                } else {
                    value.to_le_bytes()
                };
                let offset = memory_offset(16, size, lsb as u64, big).unwrap() as usize;
                let mut actual = 0u64;
                for i in 0..size as usize {
                    let shift = if big { size as usize - i - 1 } else { i };
                    actual |= u64::from(bytes[offset + i]) << (shift * 8);
                }
                let mask = (1u128 << (size * 8)) - 1;
                assert_eq!(u128::from(actual), (value >> (lsb * 8)) & mask);
            }
        }
    }
    for (container, size, lsb) in [
        (16, 8, 9),
        (16, 3, 0),
        (16, 0, 0),
        (-1, 8, 0),
        (16, 8, u64::MAX),
    ] {
        for big in [false, true] {
            assert_eq!(memory_offset(container, size, lsb, big), None);
        }
    }
}

#[test]
fn only_nonvolatile_byte_storage_and_integer_results_qualify() {
    let types = TypeFactoryImpl::new();
    types.set_default_alignment_map();
    types.set_max_basetype_size(8);
    let byte = types.get_base(1, type_metatype::TYPE_UINT).unwrap();
    let array = types.get_type_array(16, byte.clone()).unwrap();
    let word = types.get_base(8, type_metatype::TYPE_INT).unwrap();
    assert!(compatible(&array, &word, 8));
    assert!(!compatible(&array, &word, 4));
    for metatype in [
        type_metatype::TYPE_FLOAT,
        type_metatype::TYPE_PTR,
        type_metatype::TYPE_BOOL,
    ] {
        assert!(!compatible(&array, &Datatype::new(8, metatype), 8));
    }
    assert!(!compatible(&word, &word, 8));
    let words = types.get_type_array(2, word.clone()).unwrap();
    assert!(!compatible(&words, &word, 8));
    let volatile = |ty| {
        types
            .get_qualified_type(ty, crate::typequal::VOLATILE)
            .unwrap()
    };
    assert!(!compatible(&volatile(array.clone()), &word, 8));
    assert!(!compatible(&array, &volatile(word.clone()), 8));
    let bytes = types.get_type_array(16, volatile(byte)).unwrap();
    assert!(!compatible(&bytes, &word, 8));
}
