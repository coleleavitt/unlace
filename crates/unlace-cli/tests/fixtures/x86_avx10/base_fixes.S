# AVX-512 base-spec fixes for crates/unlace-cli/tests/x86_avx10.rs (see README.md).
.intel_syntax noprefix
.text
.globl base_fixes
.type base_fixes,@function
base_fixes:
    vpbroadcastq zmm25, r10
    vpbroadcastb xmm1 {k1}, eax
    vaddps zmm1, zmm2, dword ptr [rax + 4]{1to16}
    vaddpd ymm1, ymm2, qword ptr [rax + 8]{1to4}
    vpgatherdd zmm0 {k1}, dword ptr [rax + 4*zmm17 + 64]
    vgatherqpd ymm3 {k2}, qword ptr [r9 + 8*ymm30]
    vpscatterqd dword ptr [rax + 4*zmm20 + 8] {k1}, ymm18
    vaddph zmm1, zmm2, word ptr [rax + 2]{1to32}
    vcvtph2pd zmm1, xmmword ptr [rax + 32]
    vcvtph2qq zmm1 {k1}, word ptr [rax + 2]{1to8}
    ret
