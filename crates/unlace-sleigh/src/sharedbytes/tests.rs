use super::*;
use unlace_base::space::{addrspace_flags, spacetype};

#[derive(Debug)]
struct AllMapped;

impl ImageBytes for AllMapped {
    fn fill_span(&self, dst: &mut [u8], start: u64) -> usize {
        for (i, b) in dst.iter_mut().enumerate() {
            *b = start.wrapping_add(i as u64) as u8;
        }
        0
    }
    fn mapped_covers(&self, _lo: u64, _hi: u64) -> bool {
        true
    }
}

#[test]
fn read_at_top_of_address_space_does_not_wrap_into_window() {
    let ram = Rc::new(AddrSpace::new(
        spacetype::IPTR_PROCESSOR,
        "ram",
        false,
        8,
        1,
        1,
        addrspace_flags::hasphysical,
        1,
        1,
    ));
    let buffer = RefCell::new(vec![0u8; IMAGE_WINDOW_BYTES]);
    let bufoffset = RefCell::new(!0u64);
    let mut small = [0u8; 4];
    windowed_load_fill(
        &AllMapped,
        &buffer,
        &bufoffset,
        &mut small,
        &Address::new(Rc::clone(&ram), 0x1000),
    )
    .unwrap();
    assert_eq!(*bufoffset.borrow(), 0x1000);

    let top = 0xffff_ffff_ffff_fffeu64;
    windowed_load_fill(
        &AllMapped,
        &buffer,
        &bufoffset,
        &mut small,
        &Address::new(Rc::clone(&ram), top),
    )
    .unwrap();
    assert_eq!(small, [0xfe, 0xff, 0x00, 0x01]);
}
