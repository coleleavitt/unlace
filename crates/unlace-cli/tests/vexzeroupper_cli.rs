//! (unlace `vexzeroupper`) A scalar VEX result written to `xmm0` is split at its own
//! width like an XMM or YMM one, so a function that computes a `double` with
//! `vmulsd`/`vsubsd` and reloads it with `vmovsd` still returns it. Left whole,
//! the scalar ops' 64-byte `zmm0` writes hid the return and `grow` printed
//! `void`; Ubuntu's gcc emits this code without `-mavx`.

use crate::common;

#[test]
fn an_avx_scalar_double_is_returned() {
    let binary = common::fixture("vexret_avx_x86_64");
    let (out, err, code) =
        common::run_unlace(&["decompile-all", &binary, "--functions", "grow,shrink"]);
    assert_eq!(code, 0, "{err}");
    assert!(out.contains("double grow(double a0)"), "{out}");
    assert!(out.contains("return scale;"), "{out}");
    assert!(out.contains("float shrink(float a0)"), "{out}");
    assert!(out.contains("return ratio;"), "{out}");
}
