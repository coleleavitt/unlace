//! The Propeller language decompiles a cog routine: a djnz loop, a call/ret pair, a
//! conditional (if_nc) move after a compare and a hub write. Hand-assembled PASM:
//! `mov sum,#0; mov cnt,#10; loop add sum,cnt; djnz cnt,#loop; call #double;
//! cmp sum,limit wc; if_nc mov sum,limit; wrlong sum,par; halt jmp #halt;
//! double shl sum,#1; double_ret ret`.
use crate::common;
use common::{run_kuna, scratch_file};

const IMAGE: &[u8] = &[
    0x00, 0x16, 0xfc, 0xa0, 0x0a, 0x18, 0xfc, 0xa0, 0x0c, 0x16, 0xbc, 0x80, 0x02, 0x18, 0xfc, 0xe4,
    0x09, 0x14, 0xfc, 0x5c, 0x0d, 0x16, 0x3c, 0x85, 0x0d, 0x16, 0x8c, 0xa0, 0xf0, 0x17, 0x3c, 0x08,
    0x08, 0x00, 0x7c, 0x5c, 0x01, 0x16, 0xfc, 0x2c, 0x00, 0x00, 0x7c, 0x5c, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x64, 0x00, 0x00, 0x00,
];

fn decompile(name: &str, addr: &str) -> String {
    let bin = scratch_file(name, "bin");
    std::fs::write(&bin, IMAGE).unwrap();
    let (stdout, stderr, code) = run_kuna(&[
        "decompile",
        bin.to_str().unwrap(),
        addr,
        "--raw-image",
        "--target",
        "propeller:LE:16:default",
        "--base",
        "0x0",
    ]);
    assert_eq!(code, 0, "{stderr}");
    let lower = stdout.to_lowercase();
    assert!(!lower.contains("unimplemented"), "{stdout}");
    assert!(!lower.contains("bad instruction"), "{stdout}");
    stdout
}

#[test]
fn propeller_cog_routine_decompiles() {
    let out = decompile("propeller_cog_routine_decompiles", "0x0");
    assert!(out.contains("dat_30 = 10;"), "{out}");
    assert!(out.contains("dat_2c += dat_30;"), "{out}");
    assert!(out.contains("} while (dat_30);"), "{out}");
    assert!(out.contains("sub_24();"), "{out}");
    assert!(out.contains("if (dat_34 <= dat_2c)"), "{out}");
    assert!(out.contains("dat_2c = dat_34;"), "{out}");
}

#[test]
fn propeller_subroutine_decompiles() {
    let out = decompile("propeller_subroutine_decompiles", "0x24");
    assert!(out.contains("dat_2c <<= 1;"), "{out}");
}
