use super::*;

// --- FNV-1a64 golden vectors (the canonical FNV test vectors) -------------
//
// The reference values are from the FNV-1a 64-bit test suite (Landon Curt
// Noll's `test_fnv.c`). `fnv1a64(s)` runs the byte stream through `Fnv1a64`.
fn fnv1a64(bytes: &[u8]) -> u64 {
    let mut d = Fnv1a64::new();
    d.update_bytes(bytes);
    d.digest_long()
}

#[test]
fn fnv_offset_basis_is_empty_string() {
    // The empty input digests to the offset basis (no bytes mixed).
    assert_eq!(fnv1a64(b""), 0xcbf2_9ce4_8422_2325);
}

#[test]
fn fnv_known_vectors() {
    // Canonical FNV-1a64 vectors.
    assert_eq!(fnv1a64(b"a"), 0xaf63_dc4c_8601_ec8c);
    assert_eq!(fnv1a64(b"b"), 0xaf63_df4c_8601_f1a5);
    assert_eq!(fnv1a64(b"c"), 0xaf63_de4c_8601_eff2);
    assert_eq!(fnv1a64(b"foobar"), 0x8594_4171_f739_67e8);
    assert_eq!(fnv1a64(b"hello"), 0xa430_d846_80aa_bd0b);
}

#[test]
fn fnv_digest_long_resets_to_basis() {
    let mut d = Fnv1a64::new();
    d.update_bytes(b"hello");
    let first = d.digest_long();
    assert_eq!(first, 0xa430_d846_80aa_bd0b);
    // After digesting, the digest is back to the basis: a fresh "hello"
    // hashes identically.
    d.update_bytes(b"hello");
    assert_eq!(d.digest_long(), 0xa430_d846_80aa_bd0b);
}

#[test]
fn update_i32_is_big_endian() {
    // update(int) feeds bytes >>24,>>16,>>8,>>0 — verify against the
    // equivalent explicit byte stream.
    let mut a = Fnv1a64::new();
    a.update_i32(0x0102_0304);
    let via_int = a.digest_long();

    let mut b = Fnv1a64::new();
    b.update_bytes(&[0x01, 0x02, 0x03, 0x04]);
    let via_bytes = b.digest_long();

    assert_eq!(via_int, via_bytes);
}

#[test]
fn update_i32_negative_value() {
    // 0xfeeddead as a signed i32 is negative; the byte extraction reinterprets
    // as u32 (Java masks each shift with & 0xff). Big-endian: de ad ... wait,
    // 0xfeeddead → bytes fe ed de ad.
    let mut a = Fnv1a64::new();
    a.update_i32(FEEDDEAD);
    let via_int = a.digest_long();
    let mut b = Fnv1a64::new();
    b.update_bytes(&[0xfe, 0xed, 0xde, 0xad]);
    assert_eq!(via_int, b.digest_long());
}

// --- A hand-computed FidHashQuad on a tiny 4-instruction sequence ---------
//
// This drives the full `FidHasher::hash` over a synthetic extent and asserts
// the exact quad against an independent reference computation (below). It is
// the self-consistency / hand-computed fidelity gate; the Ghidra-validated
// gate is a documented follow-up (see the increment log).

/// An independent, straight-line reimplementation of the hasher loop used
/// only to derive the expected quad in the test (a second pair of eyes on the
/// algorithm — if both diverge from Ghidra they diverge together, but a
/// transcription slip in the production `hash` shows up as a mismatch here).
fn reference_quad(extent: &[InsnFingerprint]) -> Option<FidHashQuad> {
    if (extent.len() as i32) < SHORT_HASH_CODE_UNIT_LENGTH {
        return None;
    }
    let mut full = Fnv1a64::new();
    let mut spec = Fnv1a64::new();
    let mut specific_count: i32 = 0;
    let mut call_count: i32 = 0;
    let mut idx: i32 = -1;
    let no_reloc = NoRelocations;
    for insn in extent {
        idx += 1;
        let mut buf = insn.bytes.clone();
        let n = buf.len();
        if insn.is_call {
            call_count += 1;
        }
        for (ii, op) in insn.operands.iter().enumerate() {
            if op.value_mask.is_empty() {
                continue;
            }
            let base = ((ii as i32) + 1).wrapping_mul(7777);
            let mut su = base;
            let mut fu = base;
            for obj in &op.objects {
                match *obj {
                    OpObject::Scalar {
                        signed,
                        whole_operand,
                        is_address,
                    } => {
                        let mut val = signed;
                        let _ = no_reloc;
                        if whole_operand {
                            if is_address {
                                val = i64::from(FEEDDEAD);
                            } else {
                                specific_count += 1;
                            }
                        } else if val >= 256 || val <= -256 {
                            val = i64::from(FEEDDEAD);
                        } else {
                            specific_count += 1;
                        }
                        su =
                            su.wrapping_add((val as i32).wrapping_add(1234567).wrapping_mul(67999));
                        fu = fu.wrapping_add(FEEDDEAD);
                    }
                    OpObject::Register { offset } => {
                        let v = (offset as i32).wrapping_add(7654321).wrapping_mul(98777);
                        fu = fu.wrapping_add(v);
                        su = su.wrapping_add(v);
                    }
                    OpObject::Address => {
                        su = su.wrapping_add(FEEDDEAD.wrapping_add(1234567).wrapping_mul(67999));
                        fu = fu.wrapping_add(FEEDDEAD);
                    }
                }
            }
            full.update_i32(fu);
            spec.update_i32(su);
        }
        for i in 0..n {
            buf[i] &= insn.fixed_mask[i];
        }
        full.update_bytes(&buf[..n]);
        spec.update_bytes(&buf[..n]);
    }
    idx += 1;
    if idx < SHORT_HASH_CODE_UNIT_LENGTH {
        return None;
    }
    Some(FidHashQuad {
        code_unit_size: (idx - call_count) as i16,
        full_hash: full.digest_long(),
        specific_addl_size: specific_count.min(BYTE_MAX_VALUE) as u8,
        specific_hash: spec.digest_long(),
    })
}

/// A small but representative 5-instruction synthetic extent exercising:
/// a register operand, a small usable scalar, a large suppressed scalar,
/// a whole-operand address, and a plain no-operand instruction.
fn sample_extent() -> Vec<InsnFingerprint> {
    let insn =
        |min: u64, bytes: &[u8], mask: &[u8], is_call: bool, operands: Vec<OperandFingerprint>| {
            InsnFingerprint {
                min_addr: min,
                max_addr: min + bytes.len() as u64 - 1,
                bytes: bytes.to_vec(),
                fixed_mask: mask.to_vec(),
                is_call,
                operands,
            }
        };
    vec![
        // push rbp  (no operand value mask)
        insn(0x1000, &[0x55], &[0xff], false, vec![]),
        // mov rbp, rsp  (register operands)
        insn(
            0x1001,
            &[0x48, 0x89, 0xe5],
            &[0xff, 0xff, 0xc0],
            false,
            vec![
                OperandFingerprint {
                    value_mask: vec![0x00, 0x00, 0x38],
                    objects: vec![OpObject::Register { offset: 0x20 }],
                },
                OperandFingerprint {
                    value_mask: vec![0x00, 0x00, 0x07],
                    objects: vec![OpObject::Register { offset: 0x28 }],
                },
            ],
        ),
        // add eax, 0x10  (small usable scalar)
        insn(
            0x1004,
            &[0x83, 0xc0, 0x10],
            &[0xff, 0xff, 0x00],
            false,
            vec![OperandFingerprint {
                value_mask: vec![0x00, 0x00, 0xff],
                objects: vec![OpObject::Scalar {
                    signed: 0x10,
                    whole_operand: false,
                    is_address: false,
                }],
            }],
        ),
        // mov eax, 0x12345678  (large suppressed scalar — whole operand, but
        // not an address, so it counts; value still folded as-is since whole
        // operand path keeps the value)
        insn(
            0x1007,
            &[0xb8, 0x78, 0x56, 0x34, 0x12],
            &[0xff, 0x00, 0x00, 0x00, 0x00],
            false,
            vec![OperandFingerprint {
                value_mask: vec![0x00, 0xff, 0xff, 0xff, 0xff],
                objects: vec![OpObject::Scalar {
                    signed: 0x1234_5678,
                    whole_operand: true,
                    is_address: false,
                }],
            }],
        ),
        // call rel32 (whole-operand address scalar → suppressed; is_call)
        insn(
            0x100c,
            &[0xe8, 0x00, 0x00, 0x00, 0x00],
            &[0xff, 0x00, 0x00, 0x00, 0x00],
            true,
            vec![OperandFingerprint {
                value_mask: vec![0x00, 0xff, 0xff, 0xff, 0xff],
                objects: vec![OpObject::Scalar {
                    signed: 0x0,
                    whole_operand: true,
                    is_address: true,
                }],
            }],
        ),
    ]
}

#[test]
fn hand_computed_quad_matches_reference() {
    let extent = sample_extent();
    let expected = reference_quad(&extent).expect("extent >= 4 code units");
    let mut hasher = FidHasher::new(vec![]);
    let got = hasher.hash(&extent, &NoRelocations).expect("hashable");
    assert_eq!(got, expected, "production hash diverged from reference");
}

#[test]
fn quad_field_values_are_as_expected() {
    // 5 code units, 1 call → code_unit_size = 5 - 1 = 4.
    // Usable scalars: the small `0x10` (counts) and the whole-operand
    // `0x12345678` (counts) → specific_count = 2; the call's address scalar
    // is suppressed (whole-operand address) → does not count.
    let extent = sample_extent();
    let mut hasher = FidHasher::new(vec![]);
    let q = hasher.hash(&extent, &NoRelocations).unwrap();
    assert_eq!(q.code_unit_size, 4);
    assert_eq!(q.specific_addl_size, 2);
    // Full and specific hashes differ (scalars folded only into specific).
    assert_ne!(q.full_hash, q.specific_hash);
}

#[test]
fn hash_is_deterministic_across_runs() {
    // Self-consistency: the same extent hashes identically twice (the digest
    // reset between runs is correct).
    let extent = sample_extent();
    let mut hasher = FidHasher::new(vec![]);
    let q1 = hasher.hash(&extent, &NoRelocations).unwrap();
    let q2 = hasher.hash(&extent, &NoRelocations).unwrap();
    assert_eq!(q1, q2);
    // And a fresh hasher agrees.
    let mut hasher2 = FidHasher::new(vec![]);
    let q3 = hasher2.hash(&extent, &NoRelocations).unwrap();
    assert_eq!(q1, q3);
}

#[test]
fn extent_below_four_returns_none() {
    let extent = sample_extent();
    let short = &extent[..3];
    let mut hasher = FidHasher::new(vec![]);
    assert!(hasher.hash(short, &NoRelocations).is_none());
}

#[test]
fn relocation_suppresses_scalar_in_specific_count() {
    // A scalar that would otherwise count is suppressed when a relocation
    // covers its bytes → specific_count drops, and the specific hash changes.
    struct AlwaysReloc;
    impl RelocationQuery for AlwaysReloc {
        fn has_relocation_in(&self, _min: u64, _max: u64) -> bool {
            true
        }
    }
    // A single instruction with a small whole-operand scalar, repeated to
    // reach >= 4 code units (distinct addresses so the loop is well-formed).
    let mk = |a: u64| InsnFingerprint {
        min_addr: a,
        max_addr: a + 3,
        bytes: vec![0xb8, 0x10, 0x00, 0x00],
        fixed_mask: vec![0xff, 0x00, 0x00, 0x00],
        is_call: false,
        operands: vec![OperandFingerprint {
            value_mask: vec![0x00, 0xff, 0xff, 0xff],
            objects: vec![OpObject::Scalar {
                signed: 0x10,
                whole_operand: true,
                is_address: false,
            }],
        }],
    };
    let extent: Vec<_> = (0..4).map(|i| mk(0x2000 + i * 4)).collect();

    let mut h1 = FidHasher::new(vec![]);
    let no_reloc = h1.hash(&extent, &NoRelocations).unwrap();
    let mut h2 = FidHasher::new(vec![]);
    let with_reloc = h2.hash(&extent, &AlwaysReloc).unwrap();

    // Without relocations all four scalars count; with relocations none do.
    assert_eq!(no_reloc.specific_addl_size, 4);
    assert_eq!(with_reloc.specific_addl_size, 0);
    // Suppressing the value changes the specific hash; the full hash (never
    // sees the value) is identical either way.
    assert_ne!(no_reloc.specific_hash, with_reloc.specific_hash);
    assert_eq!(no_reloc.full_hash, with_reloc.full_hash);
}
