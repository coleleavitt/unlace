use super::*;

fn bytes(code: &[u32]) -> Vec<u8> {
    code.iter().flat_map(|w| w.to_le_bytes()).collect()
}

/// (unlace `iokitclasses on`) A virtual call on a metaclass object: the vtable
/// pointer loaded from an `adrp`-addressed global reports that object.
#[test]
fn reports_the_fixed_object_a_vtable_pointer_was_loaded_from() {
    let code = [
        0x90000000, // adrp  x0, 0x0
        0x91010000, // add   x0, x0, #0x40
        0xf9400010, // ldr   x16, [x0]
        0xaa0003f1, // mov   x17, x0
        0xf2ec69f1, // movk  x17, #0x634f, lsl #48
        0xdac11a30, // autda x16, x17
        0xf8468e08, // ldr   x8, [x16, #0x68]!
        0xaa1003f1, // mov   x17, x16
        0xf2e88891, // movk  x17, #0x4444, lsl #48
        0xd73f0911, // blraa x8, x17
    ];
    assert_eq!(
        call_sites_with_objects(0x1000, &bytes(&code)),
        vec![(
            0x1024,
            8,
            Slot::Relative {
                word: 13,
                diversity: 0x4444
            },
            Some(0x1040)
        )]
    );
}

/// debugserver's virtual call: the vtable pointer authenticated with `autda`,
/// slot 2 loaded with writeback, the slot address copied twice into x17.
#[test]
fn traces_the_debugserver_call_shape() {
    let code = [
        0xaa1403f1, // mov   x17, x20
        0xf2ec69f1, // movk  x17, #0x634f, lsl #48
        0xdac11a30, // autda x16, x17
        0xf8410e08, // ldr   x8, [x16, #0x10]!
        0xaa1003e9, // mov   x9, x16
        0xaa1403e0, // mov   x0, x20
        0xaa0903f1, // mov   x17, x9
        0xf2e88891, // movk  x17, #0x4444, lsl #48
        0xd73f0911, // blraa x8, x17
    ];
    assert_eq!(
        call_sites(0x1000, &bytes(&code)),
        vec![(
            0x1020,
            8,
            Slot::Relative {
                word: 2,
                diversity: 0x4444
            }
        )]
    );
}

/// The kernel's far-slot shape: the slot offset does not fit a pre-index
/// `ldr`, so it is a constant added to the vtable pointer.
#[test]
fn traces_a_constant_register_offset() {
    let code = [
        0xdac11a30, // autda x16, x17
        0xd2802311, // mov   x17, #0x118
        0x8b110210, // add   x16, x16, x17
        0xf9400208, // ldr   x8, [x16]
        0xaa1003e9, // mov   x9, x16
        0xaa0903f1, // mov   x17, x9
        0xf2f73191, // movk  x17, #0xb98c, lsl #48
        0xd73f0911, // blraa x8, x17
    ];
    assert_eq!(
        call_sites(0, &bytes(&code)),
        vec![(
            0x1c,
            8,
            Slot::Relative {
                word: 35,
                diversity: 0xb98c
            }
        )]
    );
}

/// A slot at a fixed address: `adrp` + `add` blended into the
/// discriminator, or loaded from under a plain constant one.
#[test]
fn traces_fixed_slots() {
    let blended = [
        0xb0000008, // adrp  x8, 0x2000 (from 0x1000)
        0x91170108, // add   x8, x8, #0x5c0
        0xf9400109, // ldr   x9, [x8]
        0xaa0803f1, // mov   x17, x8
        0xf2fec151, // movk  x17, #0xf60a, lsl #48
        0xd73f0931, // blraa x9, x17
    ];
    assert_eq!(
        call_sites(0x1000, &bytes(&blended)),
        vec![(
            0x1014,
            9,
            Slot::Fixed {
                addr: 0x25c0,
                diversity: 0xf60a,
                addr_div: true
            }
        )]
    );
    let constant = [
        0xb0000008, // adrp  x8, 0x2000 (from 0x1000)
        0xf942e109, // ldr   x9, [x8, #0x5c0]
        0xd28e0e11, // mov   x17, #0x7070
        0xd73f0931, // blraa x9, x17
    ];
    assert_eq!(
        call_sites(0x1000, &bytes(&constant)),
        vec![(
            0x100c,
            9,
            Slot::Fixed {
                addr: 0x25c0,
                diversity: 0x7070,
                addr_div: false
            }
        )]
    );
}

/// A kext's checked authentication branches over a trap between the
/// vtable-pointer load and the slot load; the walk steps over it.
#[test]
fn traces_through_a_checked_authentication() {
    let code = [
        0xf9400270, // ldr   x16, [x19]
        0xaa1303f1, // mov   x17, x19
        0xf2f9b431, // movk  x17, #0xcda1, lsl #48
        0xdac11a30, // autda x16, x17
        0xaa1003f1, // mov   x17, x16
        0xdac147f1, // xpacd x17
        0xeb11021f, // cmp   x16, x17
        0x54000040, // b.eq  #8
        0xd4388e40, // brk   #0xc472
        0x9108c208, // add   x8, x16, #0x230
        0xf9411a09, // ldr   x9, [x16, #0x230]
        0xaa1303e0, // mov   x0, x19
        0xaa0803f1, // mov   x17, x8
        0xf2f3f851, // movk  x17, #0x9fc2, lsl #48
        0xd73f0931, // blraa x9, x17
    ];
    assert_eq!(
        call_sites(0, &bytes(&code)),
        vec![(
            0x38,
            9,
            Slot::Relative {
                word: 70,
                diversity: 0x9fc2
            }
        )]
    );
    let mut other_branch = code;
    other_branch[7] = 0x54000060; // b.eq #12
    assert!(call_sites(0, &bytes(&other_branch)).is_empty());
}

/// A branch between the slot load and the call, a modifier with no `movk`,
/// or one set by anything but a `movz`, resolves nothing.
#[test]
fn a_branch_or_an_unknown_modifier_stops_the_walk() {
    let with_branch = [
        0xdac11a30, 0xf8410e08, 0x14000001, 0xaa1003f1, 0xf2e88891, 0xd73f0911,
    ];
    assert!(call_sites(0, &bytes(&with_branch)).is_empty());
    let no_disc = [0xdac11a30, 0xf8410e08, 0xaa1003f1, 0xd73f0911];
    assert!(call_sites(0, &bytes(&no_disc)).is_empty());
    let plain_struct = [0xf9400408, 0xd28e0e11, 0xd73f0911];
    assert!(call_sites(0, &bytes(&plain_struct)).is_empty());
}

/// A store names a register it does not write; a load pair writes two.
#[test]
fn writes_tells_stores_and_load_pairs() {
    assert!(!writes(0xf9000211, 17), "str x17, [x16]");
    assert!(writes(0xf9400211, 17), "ldr x17, [x16]");
    assert!(writes(0xa94047e0, 17), "ldp x0, x17, [sp]");
    assert!(!writes(0xa90047e0, 17), "stp x0, x17, [sp]");
    assert!(writes(0xb9800211, 17), "ldrsw x17, [x16]");
    assert!(!writes(0x4f000411, 17), "movi v17.4s, #0");
}

fn fixture(name: &str) -> Vec<VcallSite> {
    let path = format!("{}/tests/fixtures/{name}", env!("CARGO_MANIFEST_DIR"));
    let bytes = std::fs::read(path).expect("read fixture");
    let file = object::File::parse(bytes.as_slice()).expect("parse Mach-O");
    resolve(&file, &bytes)
}

/// `macho_arm64e_vcall`: slot 1 holds `_A_g` in both vtables, slot 0 holds
/// `_A_f` or `_B_f`.
#[test]
fn resolves_the_fixture_calls() {
    assert_eq!(
        fixture("macho_arm64e_vcall"),
        vec![
            VcallSite {
                site: 0x10000035c,
                register: 8,
                targets: vec![0x100000328, 0x100000338],
                object: None
            },
            VcallSite {
                site: 0x10000037c,
                register: 8,
                targets: vec![0x100000330],
                object: None
            },
        ]
    );
}

/// `macho_arm64e_vcall_shapes`: a far C++ slot, a Swift class method, a
/// static signed slot and a constant-discriminator slot resolve; a signed
/// slot in writable `__data` does not.
#[test]
fn resolves_every_call_shape() {
    assert_eq!(
        fixture("macho_arm64e_vcall_shapes"),
        vec![
            VcallSite {
                site: 0x100000480,
                register: 8,
                targets: vec![0x100000410],
                object: None
            },
            VcallSite {
                site: 0x1000004a0,
                register: 8,
                targets: vec![0x100000428],
                object: None
            },
            VcallSite {
                site: 0x1000004c4,
                register: 8,
                targets: vec![0x100000430],
                object: None
            },
            VcallSite {
                site: 0x1000004e4,
                register: 9,
                targets: vec![0x100000440],
                object: None
            },
            VcallSite {
                site: 0x10000050c,
                register: 9,
                targets: vec![0x100000450],
                object: None
            },
        ]
    );
}
