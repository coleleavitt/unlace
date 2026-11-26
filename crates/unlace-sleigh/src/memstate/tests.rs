use super::*;
use crate::emulate::test_support::{TestLoader, TestTranslator, test_manager};
use unlace_base::space::AddrSpaceManager;

/// A loader with 16 mapped bytes at 0x2000:
/// `11 22 33 44 55 66 77 88 a1 a2 a3 a4 a5 a6 a7 a8`.
fn test_loader() -> Rc<RefCell<TestLoader>> {
    let mut bytes = vec![0x11u8, 0x22, 0x33, 0x44, 0x55, 0x66, 0x77, 0x88];
    bytes.extend_from_slice(&[0xa1, 0xa2, 0xa3, 0xa4, 0xa5, 0xa6, 0xa7, 0xa8]);
    Rc::new(RefCell::new(TestLoader {
        start: 0x2000,
        bytes,
    }))
}

fn ram(manager: &AddrSpaceManager) -> Rc<AddrSpace> {
    Rc::clone(manager.get_space_by_name("ram").unwrap())
}

#[test]
fn test_memstate_construct_deconstruct_value() {
    let bytes = [0x12u8, 0x34, 0x56, 0x78];
    assert_eq!(construct_value(&bytes, 4, true), 0x12345678);
    assert_eq!(construct_value(&bytes, 4, false), 0x78563412);
    assert_eq!(construct_value(&bytes, 1, true), 0x12);
    assert_eq!(construct_value(&bytes, 1, false), 0x12);

    let mut out = [0u8; 4];
    deconstruct_value(&mut out, 0x12345678, 4, true);
    assert_eq!(out, [0x12, 0x34, 0x56, 0x78]);
    deconstruct_value(&mut out, 0x12345678, 4, false);
    assert_eq!(out, [0x78, 0x56, 0x34, 0x12]);
    // round trip an 8-byte value both ways
    let mut out = [0u8; 8];
    deconstruct_value(&mut out, 0x1122334455667788, 8, true);
    assert_eq!(construct_value(&out, 8, true), 0x1122334455667788);
    deconstruct_value(&mut out, 0x1122334455667788, 8, false);
    assert_eq!(construct_value(&out, 8, false), 0x1122334455667788);
}

#[test]
fn test_memstate_memory_image() {
    let manager = test_manager(false);
    let image = MemoryImage::new(ram(&manager), 8, 16, test_loader());
    assert_eq!(image.get_word_size(), 8);
    assert_eq!(image.get_page_size(), 16);
    assert!(Rc::ptr_eq(image.get_space(), &ram(&manager)));

    // aligned word reads (little endian)
    assert_eq!(image.find(0x2000).unwrap(), 0x8877665544332211);
    assert_eq!(image.find(0x2008).unwrap(), 0xa8a7a6a5a4a3a2a1);
    // value within a word, and a value spanning two words
    assert_eq!(image.get_value(0x2002, 2).unwrap(), 0x4433);
    assert_eq!(image.get_value(0x2004, 8).unwrap(), 0xa4a3a2a188776655);
    // unmapped data is zero (DataUnavailError caught inside find)
    assert_eq!(image.find(0x4000).unwrap(), 0);
    assert_eq!(image.get_value(0x4000, 8).unwrap(), 0);
    // the bank is read-only
    let mut image = image;
    assert_eq!(
        image.set_value(0x2000, 8, 1).unwrap_err().explain(),
        "Writing to read-only MemoryBank"
    );

    // big endian variant
    let manager_be = test_manager(true);
    let image_be = MemoryImage::new(ram(&manager_be), 8, 16, test_loader());
    assert_eq!(image_be.find(0x2000).unwrap(), 0x1122334455667788);
    assert_eq!(image_be.get_value(0x2002, 2).unwrap(), 0x3344);

    // chunk read crossing the image start: the page below the region is
    // zero-filled via the DataUnavail path of the overridden get_page
    let image = MemoryImage::new(ram(&manager), 8, 16, test_loader());
    let mut res = [0xffu8; 16];
    image.get_chunk(0x1ff8, &mut res).unwrap();
    assert_eq!(&res[..8], &[0u8; 8]);
    assert_eq!(&res[8..], &[0x11, 0x22, 0x33, 0x44, 0x55, 0x66, 0x77, 0x88]);
}

#[test]
fn test_memstate_page_overlay_little_endian() {
    let manager = test_manager(false);
    let r = ram(&manager);
    let image: Rc<RefCell<dyn MemoryBank>> = Rc::new(RefCell::new(MemoryImage::new(
        Rc::clone(&r),
        8,
        16,
        test_loader(),
    )));
    let mut overlay = MemoryPageOverlay::new(Rc::clone(&r), 8, 16, Some(Rc::clone(&image)));

    // read-through to the underlying image (no page cached)
    assert_eq!(overlay.get_value(0x2000, 8).unwrap(), 0x8877665544332211);

    // copy-on-write: a 2-byte write inside the first word
    overlay.set_value(0x2003, 2, 0xBEEF).unwrap();
    assert_eq!(overlay.get_value(0x2000, 8).unwrap(), 0x887766BEEF332211);
    assert_eq!(overlay.get_value(0x2003, 2).unwrap(), 0xBEEF);
    // the underlying image is untouched
    assert_eq!(image.borrow().find(0x2000).unwrap(), 0x8877665544332211);

    // a write spanning the word boundary inside the cached page
    overlay.set_value(0x2006, 4, 0xAABBCCDD).unwrap();
    assert_eq!(overlay.find(0x2000).unwrap(), 0xCCDD66BEEF332211);
    assert_eq!(overlay.find(0x2008).unwrap(), 0xA8A7A6A5A4A3AABB);
    assert_eq!(overlay.get_value(0x2006, 4).unwrap(), 0xAABBCCDD);

    // word read across PAGES: word 0x2008 comes from the cached page,
    // word 0x2010 from the underlying image (outside the region: zero)
    assert_eq!(overlay.get_value(0x200c, 8).unwrap(), 0xA8A7A6A5);

    // chunk read across pages: cached page bytes then underlying zeros
    let mut res = [0u8; 16];
    overlay.get_chunk(0x2008, &mut res).unwrap();
    assert_eq!(&res[..8], &[0xBB, 0xAA, 0xA3, 0xA4, 0xA5, 0xA6, 0xA7, 0xA8]);
    assert_eq!(&res[8..], &[0u8; 8]);

    // chunk write across pages (the second page is created copy-on-write)
    overlay
        .set_chunk(0x200e, &[0xDE, 0xAD, 0xBE, 0xEF])
        .unwrap();
    assert_eq!(overlay.get_value(0x200e, 2).unwrap(), 0xADDE);
    assert_eq!(overlay.get_value(0x2010, 2).unwrap(), 0xEFBE);

    // overlay with no underlying bank starts as zeros
    let mut zeros = MemoryPageOverlay::new(Rc::clone(&r), 8, 16, None);
    assert_eq!(zeros.get_value(0x80, 8).unwrap(), 0);
    zeros.set_value(0x84, 4, 0xCAFEBABE).unwrap();
    assert_eq!(zeros.find(0x80).unwrap(), 0xCAFEBABE00000000);
    let mut res = [0u8; 4];
    zeros.get_chunk(0x84, &mut res).unwrap();
    assert_eq!(res, [0xBE, 0xBA, 0xFE, 0xCA]);
}

#[test]
fn test_memstate_page_overlay_big_endian() {
    let manager = test_manager(true);
    let r = ram(&manager);
    let mut overlay = MemoryPageOverlay::new(Rc::clone(&r), 8, 16, None);

    overlay.set_value(0x0, 8, 0x1122334455667788).unwrap();
    let mut res = [0u8; 8];
    overlay.get_chunk(0x0, &mut res).unwrap();
    // big endian: most significant byte at the lowest address
    assert_eq!(res, [0x11, 0x22, 0x33, 0x44, 0x55, 0x66, 0x77, 0x88]);

    // partial-word write lands in address order
    overlay.set_value(0x3, 2, 0xBEEF).unwrap();
    assert_eq!(overlay.find(0x0).unwrap(), 0x112233BEEF667788);
    overlay.get_chunk(0x0, &mut res).unwrap();
    assert_eq!(res, [0x11, 0x22, 0x33, 0xBE, 0xEF, 0x66, 0x77, 0x88]);
    assert_eq!(overlay.get_value(0x3, 2).unwrap(), 0xBEEF);

    // spill over a word boundary, big endian
    overlay.set_value(0x6, 4, 0xAABBCCDD).unwrap();
    assert_eq!(overlay.find(0x0).unwrap(), 0x112233BEEF66AABB);
    assert_eq!(overlay.find(0x8).unwrap(), 0xCCDD000000000000);
    assert_eq!(overlay.get_value(0x6, 4).unwrap(), 0xAABBCCDD);
}

#[test]
fn test_memstate_hash_overlay() {
    let manager = test_manager(false);
    let r = ram(&manager);
    let image: Rc<RefCell<dyn MemoryBank>> = Rc::new(RefCell::new(MemoryImage::new(
        Rc::clone(&r),
        8,
        16,
        test_loader(),
    )));
    let mut hash = MemoryHashOverlay::new(Rc::clone(&r), 8, 16, 16, Some(Rc::clone(&image)));

    // unwritten addresses fall through to the underlying bank
    assert_eq!(hash.get_value(0x2000, 8).unwrap(), 0x8877665544332211);
    // aligned write and replacement
    hash.set_value(0x100, 8, 42).unwrap();
    assert_eq!(hash.get_value(0x100, 8).unwrap(), 42);
    hash.set_value(0x100, 8, 43).unwrap();
    assert_eq!(hash.get_value(0x100, 8).unwrap(), 43);
    hash.set_value(0x100, 8, 42).unwrap();

    // unaligned write spanning two words (read-modify-write through the
    // hash): word 0x100 keeps 42 in its low half
    hash.set_value(0x104, 8, 0x1122334455667788).unwrap();
    assert_eq!(hash.get_value(0x100, 8).unwrap(), 0x556677880000002A);
    assert_eq!(hash.get_value(0x108, 8).unwrap(), 0x11223344);
    assert_eq!(hash.get_value(0x104, 8).unwrap(), 0x1122334455667788);

    // chunk access goes through the DEFAULT page methods (word loops)
    let mut res = [0u8; 16];
    hash.get_chunk(0x100, &mut res).unwrap();
    assert_eq!(
        res,
        [
            0x2A, 0, 0, 0, 0x88, 0x77, 0x66, 0x55, 0x44, 0x33, 0x22, 0x11, 0, 0, 0, 0
        ]
    );
    hash.set_chunk(0x110, &[1, 2, 3, 4, 5, 6, 7, 8]).unwrap();
    assert_eq!(hash.get_value(0x110, 8).unwrap(), 0x0807060504030201);

    // collision probing: hashsize 4, addresses 0x0 and 0x20 both hash
    // to slot 0; the second probes (0 + 1023) % 4 = 3
    let mut small = MemoryHashOverlay::new(Rc::clone(&r), 8, 16, 4, None);
    small.set_value(0x0, 8, 7).unwrap();
    small.set_value(0x20, 8, 9).unwrap();
    assert_eq!(small.get_value(0x0, 8).unwrap(), 7);
    assert_eq!(small.get_value(0x20, 8).unwrap(), 9);

    // table full: hashsize 2 holds two addresses, the third errs
    let mut tiny = MemoryHashOverlay::new(Rc::clone(&r), 8, 16, 2, None);
    tiny.set_value(0x0, 8, 1).unwrap();
    tiny.set_value(0x8, 8, 2).unwrap();
    assert_eq!(
        tiny.set_value(0x10, 8, 3).unwrap_err().explain(),
        "Memory state hash_table is full"
    );
    // unwritten with no underlying bank reads zero
    let empty = MemoryHashOverlay::new(Rc::clone(&r), 8, 16, 4, None);
    assert_eq!(empty.get_value(0x40, 8).unwrap(), 0);
}

#[test]
fn test_memstate_memory_state() {
    let manager = Rc::new(test_manager(false));
    let r = ram(&manager);
    let register = Rc::clone(manager.get_space_by_name("register").unwrap());
    let unique = Rc::clone(manager.get_space_by_name("unique").unwrap());
    let trans: Rc<dyn Translate> =
        Rc::new(TestTranslator::new(&manager, BTreeMap::new(), Vec::new()));

    let image: Rc<RefCell<dyn MemoryBank>> = Rc::new(RefCell::new(MemoryImage::new(
        Rc::clone(&r),
        8,
        16,
        test_loader(),
    )));
    let ramstate: Rc<RefCell<dyn MemoryBank>> = Rc::new(RefCell::new(MemoryPageOverlay::new(
        Rc::clone(&r),
        8,
        16,
        Some(image),
    )));
    let registerstate: Rc<RefCell<dyn MemoryBank>> = Rc::new(RefCell::new(MemoryHashOverlay::new(
        Rc::clone(&register),
        8,
        16,
        64,
        None,
    )));

    let mut state = MemoryState::new(Rc::clone(&trans));
    assert!(Rc::ptr_eq(state.get_translate(), &trans));
    state.set_memory_bank(Rc::clone(&ramstate));
    state.set_memory_bank(Rc::clone(&registerstate));
    assert!(Rc::ptr_eq(state.get_memory_bank(&r).unwrap(), &ramstate));
    assert!(state.get_memory_bank(&unique).is_none());

    // constant space reads return the offset directly
    let cst = Rc::clone(manager.get_constant_space().unwrap());
    assert_eq!(state.get_value(&cst, 12345, 8).unwrap(), 12345);

    // space/offset and named-register interfaces
    state.set_value(&r, 0x3000, 8, 0x1234).unwrap();
    assert_eq!(state.get_value(&r, 0x3000, 8).unwrap(), 0x1234);
    state.set_value_by_name("r0", 99).unwrap();
    assert_eq!(state.get_value_by_name("r0").unwrap(), 99);
    assert_eq!(
        state.get_value(&register, 0, 8).unwrap(),
        99,
        "r0 lives at register:0"
    );
    assert!(state.get_value_by_name("nope").is_err());

    // varnode interface
    let vn = VarnodeData {
        space: Some(Rc::clone(&register)),
        offset: 8,
        size: 8,
    };
    state.set_value_data(&vn, 0xfeed).unwrap();
    assert_eq!(state.get_value_data(&vn).unwrap(), 0xfeed);

    // chunk interface
    state.set_chunk(&[0xDE, 0xAD], &r, 0x3008).unwrap();
    let mut res = [0u8; 2];
    state.get_chunk(&mut res, &r, 0x3008).unwrap();
    assert_eq!(res, [0xDE, 0xAD]);

    // unmapped space errors carry the C++ strings
    assert_eq!(
        state.get_value(&unique, 0, 8).unwrap_err().explain(),
        "Getting value from unmapped memory space: unique"
    );
    assert_eq!(
        state.set_value(&unique, 0, 8, 1).unwrap_err().explain(),
        "Setting value for unmapped memory space: unique"
    );
    let mut res = [0u8; 1];
    assert_eq!(
        state.get_chunk(&mut res, &unique, 0).unwrap_err().explain(),
        "Getting chunk from unmapped memory space: unique"
    );
    assert_eq!(
        state.set_chunk(&[0], &unique, 0).unwrap_err().explain(),
        "Setting chunk of unmapped memory space: unique"
    );
}
