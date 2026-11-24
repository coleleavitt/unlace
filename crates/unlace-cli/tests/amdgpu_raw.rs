//! The AMD GCN5 (gfx900) language decompiles clang-built OpenCL kernels from a raw image:
//! SMEM kernel-argument loads, a VOPC compare feeding s_and_saveexec / s_cbranch_execz,
//! global loads and stores, v_mad_u64_u32, and a scalar loop with s_add_u32/s_addc_u32.
use crate::common;
use common::{repo_root, run_kuna};

fn decompile(addr: &str) -> String {
    let bin = repo_root()
        .join("crates/unlace-cli/tests/fixtures/amdgpu/gfx900_kernels.bin")
        .to_str()
        .unwrap()
        .to_owned();
    let (stdout, stderr, code) = run_kuna(&[
        "decompile",
        &bin,
        addr,
        "--raw-image",
        "--target",
        "AMDGPU:LE:64:GFX9",
        "--base",
        "0",
    ]);
    assert_eq!(code, 0, "{stderr}");
    let lower = stdout.to_lowercase();
    assert!(!lower.contains("unimplemented"), "{stdout}");
    assert!(!lower.contains("bad instruction"), "{stdout}");
    stdout
}

/// `scale`: `if (i < n) out[i] = in[i] * 3 + k;` with the kernel arguments behind s[4:5]
/// and the lane id in v0; EXEC is 1 on entry, so the saveexec mask folds into the branch.
#[test]
fn amdgpu_guarded_store_decompiles() {
    let out = decompile("0x0");
    assert!(
        out.contains("if (a5 < (int)((unsigned long)a2[2] >> 0x20))"),
        "{out}"
    );
    assert!(out.contains("* 3 + (int)a2[2];"), "{out}");
}

/// `sum`: a scalar loop over `in` with the 64-bit pointer split across s2/s3.
#[test]
fn amdgpu_scalar_loop_decompiles() {
    let out = decompile("0x100");
    assert!(out.contains("while (v5) {"), "{out}");
    assert!(out.contains("v4 = *(int *)CONCAT44(v3,v2) + v4;"), "{out}");
    assert!(out.contains("v5 -= 1;"), "{out}");
    assert!(out.contains("*a2->field_0x0 = v4;"), "{out}");
}
