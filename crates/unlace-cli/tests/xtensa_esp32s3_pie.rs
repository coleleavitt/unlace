//! The Xtensa ESP32-S3 language decodes the PIE (EE.*) vector instructions: a loop of two
//! post-incrementing 128-bit loads, a saturating byte add and a store, and a 32-bit fused
//! add-and-load. The base instructions were assembled with llvm-mc, the EE.* words encoded
//! from the field layout of Espressif's ESP32-S3 TableGen description.
use crate::common;
use common::{run_kuna, scratch_file};

const VECTOR_ADD_LOOP: &[u8] = &[
    0x36, 0x41, 0x00, 0x24, 0x01, 0x83, 0x34, 0x81, 0x83, 0x84, 0x08, 0x9e, 0x44, 0x01, 0x9a, 0x52,
    0xc5, 0xff, 0x56, 0xd5, 0xfe, 0x0c, 0x02, 0x1d, 0xf0,
];

const FUSED_ADD_LOAD: &[u8] = &[
    0x36, 0x41, 0x00, 0x2e, 0x0d, 0xac, 0xe1, 0x34, 0x00, 0xaa, 0x44, 0x80, 0x9a, 0x1d, 0xf0,
];

fn decompile(name: &str, image: &[u8]) -> String {
    let bin = scratch_file(name, "bin");
    std::fs::write(&bin, image).unwrap();
    let (stdout, stderr, code) = run_kuna(&[
        "decompile",
        bin.to_str().unwrap(),
        "0x40000000",
        "--raw-image",
        "--target",
        "Xtensa:LE:32:esp32s3",
        "--base",
        "0x40000000",
    ]);
    assert_eq!(code, 0, "{stderr}");
    let lower = stdout.to_lowercase();
    assert!(!lower.contains("unimplemented"), "{stdout}");
    assert!(!lower.contains("bad instruction"), "{stdout}");
    stdout
}

#[test]
fn esp32s3_pie_vector_loop_decompiles() {
    let out = decompile("esp32s3_pie_vector_loop_decompiles", VECTOR_ADD_LOOP);
    assert!(out.contains("a0 += 0x10;"), "{out}");
    assert!(out.contains("a1 += 0x10;"), "{out}");
    assert!(
        out.contains("*(char (*)[16])(a2 & 0xfffffff0) = ee_vadds_s8(*v1,*v2);"),
        "{out}"
    );
    assert!(out.contains("} while (a3);"), "{out}");
}

#[test]
fn esp32s3_pie_fused_load_decompiles() {
    let out = decompile("esp32s3_pie_fused_load_decompiles", FUSED_ADD_LOAD);
    assert!(out.contains("= ee_vadds_s16("), "{out}");
    assert!(out.contains("v2 = a0 + 0x10;"), "{out}");
}
