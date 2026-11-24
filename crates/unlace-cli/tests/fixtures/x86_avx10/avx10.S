# AVX10.2 test image for crates/unlace-cli/tests/x86_avx10.rs (see README.md).
.intel_syntax noprefix
.text
.globl probe, gt, mm, cvt, mvrs
.type probe,@function
.type gt,@function
.type mm,@function
.type cvt,@function
.type mvrs,@function
.p2align 4
probe:
    tcvtrowd2ps zmm1, tmm3, ecx
    tcvtrowd2ps zmm1, tmm3, 3
    tcvtrowps2bf16h zmm1, tmm3, ecx
    tcvtrowps2bf16h zmm1, tmm3, 3
    tcvtrowps2bf16l zmm1, tmm3, ecx
    tcvtrowps2bf16l zmm1, tmm3, 3
    tcvtrowps2phh zmm1, tmm3, ecx
    tcvtrowps2phh zmm1, tmm3, 3
    tcvtrowps2phl zmm1, tmm3, ecx
    tcvtrowps2phl zmm1, tmm3, 3
    tilemovrow zmm1, tmm3, ecx
    tilemovrow zmm1, tmm3, 3
    vaddbf16 xmm1, xmm18, xmmword ptr [rax + 8*r9 + 32]
    vaddbf16 xmm1, xmm18, word ptr [rax + 8*r9 + 4]{1to8}
    vaddbf16 xmm1, xmm18, xmm3
    vaddbf16 ymm1, ymm18, ymmword ptr [rax + 8*r9 + 64]
    vaddbf16 ymm1, ymm18, word ptr [rax + 8*r9 + 4]{1to16}
    vaddbf16 ymm1, ymm18, ymm3
    vaddbf16 zmm1, zmm18, zmmword ptr [rax + 8*r9 + 128]
    vaddbf16 zmm1, zmm18, word ptr [rax + 8*r9 + 4]{1to32}
    vaddbf16 zmm1, zmm18, zmm3
    vcmpbf16 k2, xmm18, word ptr [rax + 8*r9 + 4]{1to8}, 3
    vcmpbf16 k2, xmm18, xmmword ptr [rax + 8*r9 + 32], 3
    vcmpbf16 k2, xmm18, xmm3, 3
    vcmpbf16 k2, ymm18, word ptr [rax + 8*r9 + 4]{1to16}, 3
    vcmpbf16 k2, ymm18, ymmword ptr [rax + 8*r9 + 64], 3
    vcmpbf16 k2, ymm18, ymm3, 3
    vcmpbf16 k2, zmm18, word ptr [rax + 8*r9 + 4]{1to32}, 3
    vcmpbf16 k2, zmm18, zmmword ptr [rax + 8*r9 + 128], 3
    vcmpbf16 k2, zmm18, zmm3, 3
    vcomisbf16 xmm18, word ptr [rax + 8*r9 + 4]
    vcomisbf16 xmm18, xmm3
    vcomxsd xmm18, qword ptr [rax + 8*r9 + 16]
    vcomxsd xmm18, xmm3
    vcomxsd xmm18, xmm3, {sae}
    vcomxsh xmm18, word ptr [rax + 8*r9 + 4]
    vcomxsh xmm18, xmm3
    vcomxsh xmm18, xmm3, {sae}
    vcomxss xmm18, dword ptr [rax + 8*r9 + 8]
    vcomxss xmm18, xmm3
    vcomxss xmm18, xmm3, {sae}
    vcvt2ph2bf8s xmm1, xmm18, xmmword ptr [rax + 8*r9 + 32]
    vcvt2ph2bf8s xmm1, xmm18, word ptr [rax + 8*r9 + 4]{1to8}
    vcvt2ph2bf8s xmm1, xmm18, xmm3
    vcvt2ph2bf8s ymm1, ymm18, ymmword ptr [rax + 8*r9 + 64]
    vcvt2ph2bf8s ymm1, ymm18, word ptr [rax + 8*r9 + 4]{1to16}
    vcvt2ph2bf8s ymm1, ymm18, ymm3
    vcvt2ph2bf8s zmm1, zmm18, zmmword ptr [rax + 8*r9 + 128]
    vcvt2ph2bf8s zmm1, zmm18, word ptr [rax + 8*r9 + 4]{1to32}
    vcvt2ph2bf8s zmm1, zmm18, zmm3
    vcvt2ph2bf8 xmm1, xmm18, xmmword ptr [rax + 8*r9 + 32]
    vcvt2ph2bf8 xmm1, xmm18, word ptr [rax + 8*r9 + 4]{1to8}
    vcvt2ph2bf8 xmm1, xmm18, xmm3
    vcvt2ph2bf8 ymm1, ymm18, ymmword ptr [rax + 8*r9 + 64]
    vcvt2ph2bf8 ymm1, ymm18, word ptr [rax + 8*r9 + 4]{1to16}
    vcvt2ph2bf8 ymm1, ymm18, ymm3
    vcvt2ph2bf8 zmm1, zmm18, zmmword ptr [rax + 8*r9 + 128]
    vcvt2ph2bf8 zmm1, zmm18, word ptr [rax + 8*r9 + 4]{1to32}
    vcvt2ph2bf8 zmm1, zmm18, zmm3
    vcvt2ph2hf8s xmm1, xmm18, xmmword ptr [rax + 8*r9 + 32]
    vcvt2ph2hf8s xmm1, xmm18, word ptr [rax + 8*r9 + 4]{1to8}
    vcvt2ph2hf8s xmm1, xmm18, xmm3
    vcvt2ph2hf8s ymm1, ymm18, ymmword ptr [rax + 8*r9 + 64]
    vcvt2ph2hf8s ymm1, ymm18, word ptr [rax + 8*r9 + 4]{1to16}
    vcvt2ph2hf8s ymm1, ymm18, ymm3
    vcvt2ph2hf8s zmm1, zmm18, zmmword ptr [rax + 8*r9 + 128]
    vcvt2ph2hf8s zmm1, zmm18, word ptr [rax + 8*r9 + 4]{1to32}
    vcvt2ph2hf8s zmm1, zmm18, zmm3
    vcvt2ph2hf8 xmm1, xmm18, xmmword ptr [rax + 8*r9 + 32]
    vcvt2ph2hf8 xmm1, xmm18, word ptr [rax + 8*r9 + 4]{1to8}
    vcvt2ph2hf8 xmm1, xmm18, xmm3
    vcvt2ph2hf8 ymm1, ymm18, ymmword ptr [rax + 8*r9 + 64]
    vcvt2ph2hf8 ymm1, ymm18, word ptr [rax + 8*r9 + 4]{1to16}
    vcvt2ph2hf8 ymm1, ymm18, ymm3
    vcvt2ph2hf8 zmm1, zmm18, zmmword ptr [rax + 8*r9 + 128]
    vcvt2ph2hf8 zmm1, zmm18, word ptr [rax + 8*r9 + 4]{1to32}
    vcvt2ph2hf8 zmm1, zmm18, zmm3
    vcvt2ps2phx xmm1, xmm18, xmmword ptr [rax + 8*r9 + 32]
    vcvt2ps2phx xmm1, xmm18, dword ptr [rax + 8*r9 + 8]{1to4}
    vcvt2ps2phx xmm1, xmm18, xmm3
    vcvt2ps2phx ymm1, ymm18, ymmword ptr [rax + 8*r9 + 64]
    vcvt2ps2phx ymm1, ymm18, dword ptr [rax + 8*r9 + 8]{1to8}
    vcvt2ps2phx ymm1, ymm18, ymm3
    vcvt2ps2phx zmm1, zmm18, zmmword ptr [rax + 8*r9 + 128]
    vcvt2ps2phx zmm1, zmm18, dword ptr [rax + 8*r9 + 8]{1to16}
    vcvt2ps2phx zmm1, zmm18, zmm3
    vcvt2ps2phx zmm1, zmm18, zmm3, {rz-sae}
    vcvtbf162ibs xmm1, xmmword ptr [rax + 8*r9 + 32]
    vcvtbf162ibs xmm1, word ptr [rax + 8*r9 + 4]{1to8}
    vcvtbf162ibs xmm1, xmm18
    vcvtbf162ibs ymm1, ymmword ptr [rax + 8*r9 + 64]
    vcvtbf162ibs ymm1, word ptr [rax + 8*r9 + 4]{1to16}
    vcvtbf162ibs ymm1, ymm18
    vcvtbf162ibs zmm1, zmmword ptr [rax + 8*r9 + 128]
    vcvtbf162ibs zmm1, word ptr [rax + 8*r9 + 4]{1to32}
    vcvtbf162ibs zmm1, zmm18
    vcvtbf162iubs xmm1, xmmword ptr [rax + 8*r9 + 32]
    vcvtbf162iubs xmm1, word ptr [rax + 8*r9 + 4]{1to8}
    vcvtbf162iubs xmm1, xmm18
    vcvtbf162iubs ymm1, ymmword ptr [rax + 8*r9 + 64]
    vcvtbf162iubs ymm1, word ptr [rax + 8*r9 + 4]{1to16}
    vcvtbf162iubs ymm1, ymm18
    vcvtbf162iubs zmm1, zmmword ptr [rax + 8*r9 + 128]
    vcvtbf162iubs zmm1, word ptr [rax + 8*r9 + 4]{1to32}
    vcvtbf162iubs zmm1, zmm18
    vcvtbiasph2bf8s xmm1, xmm18, xmmword ptr [rax + 8*r9 + 32]
    vcvtbiasph2bf8s xmm1, xmm18, word ptr [rax + 8*r9 + 4]{1to8}
    vcvtbiasph2bf8s xmm1, xmm18, xmm3
    vcvtbiasph2bf8s xmm1, ymm18, ymmword ptr [rax + 8*r9 + 64]
    vcvtbiasph2bf8s xmm1, ymm18, word ptr [rax + 8*r9 + 4]{1to16}
    vcvtbiasph2bf8s xmm1, ymm18, ymm3
    vcvtbiasph2bf8s ymm1, zmm18, zmmword ptr [rax + 8*r9 + 128]
    vcvtbiasph2bf8s ymm1, zmm18, word ptr [rax + 8*r9 + 4]{1to32}
    vcvtbiasph2bf8s ymm1, zmm18, zmm3
    vcvtbiasph2bf8 xmm1, xmm18, xmmword ptr [rax + 8*r9 + 32]
    vcvtbiasph2bf8 xmm1, xmm18, word ptr [rax + 8*r9 + 4]{1to8}
    vcvtbiasph2bf8 xmm1, xmm18, xmm3
    vcvtbiasph2bf8 xmm1, ymm18, ymmword ptr [rax + 8*r9 + 64]
    vcvtbiasph2bf8 xmm1, ymm18, word ptr [rax + 8*r9 + 4]{1to16}
    vcvtbiasph2bf8 xmm1, ymm18, ymm3
    vcvtbiasph2bf8 ymm1, zmm18, zmmword ptr [rax + 8*r9 + 128]
    vcvtbiasph2bf8 ymm1, zmm18, word ptr [rax + 8*r9 + 4]{1to32}
    vcvtbiasph2bf8 ymm1, zmm18, zmm3
    vcvtbiasph2hf8s xmm1, xmm18, xmmword ptr [rax + 8*r9 + 32]
    vcvtbiasph2hf8s xmm1, xmm18, word ptr [rax + 8*r9 + 4]{1to8}
    vcvtbiasph2hf8s xmm1, xmm18, xmm3
    vcvtbiasph2hf8s xmm1, ymm18, ymmword ptr [rax + 8*r9 + 64]
    vcvtbiasph2hf8s xmm1, ymm18, word ptr [rax + 8*r9 + 4]{1to16}
    vcvtbiasph2hf8s xmm1, ymm18, ymm3
    vcvtbiasph2hf8s ymm1, zmm18, zmmword ptr [rax + 8*r9 + 128]
    vcvtbiasph2hf8s ymm1, zmm18, word ptr [rax + 8*r9 + 4]{1to32}
    vcvtbiasph2hf8s ymm1, zmm18, zmm3
    vcvtbiasph2hf8 xmm1, xmm18, xmmword ptr [rax + 8*r9 + 32]
    vcvtbiasph2hf8 xmm1, xmm18, word ptr [rax + 8*r9 + 4]{1to8}
    vcvtbiasph2hf8 xmm1, xmm18, xmm3
    vcvtbiasph2hf8 xmm1, ymm18, ymmword ptr [rax + 8*r9 + 64]
    vcvtbiasph2hf8 xmm1, ymm18, word ptr [rax + 8*r9 + 4]{1to16}
    vcvtbiasph2hf8 xmm1, ymm18, ymm3
    vcvtbiasph2hf8 ymm1, zmm18, zmmword ptr [rax + 8*r9 + 128]
    vcvtbiasph2hf8 ymm1, zmm18, word ptr [rax + 8*r9 + 4]{1to32}
    vcvtbiasph2hf8 ymm1, zmm18, zmm3
    vcvthf82ph xmm1, qword ptr [rax + 8*r9 + 16]
    vcvthf82ph xmm1, xmm18
    vcvthf82ph ymm1, xmmword ptr [rax + 8*r9 + 32]
    vcvthf82ph ymm1, xmm18
    vcvthf82ph zmm1, ymmword ptr [rax + 8*r9 + 64]
    vcvthf82ph zmm1, ymm18
    vcvtph2bf8s xmm1, xmmword ptr [rax + 8*r9 + 32]
    vcvtph2bf8s xmm1, word ptr [rax + 8*r9 + 4]{1to8}
    vcvtph2bf8s xmm1, xmm18
    vcvtph2bf8s xmm1, ymmword ptr [rax + 8*r9 + 64]
    vcvtph2bf8s xmm1, word ptr [rax + 8*r9 + 4]{1to16}
    vcvtph2bf8s xmm1, ymm18
    vcvtph2bf8s ymm1, zmmword ptr [rax + 8*r9 + 128]
    vcvtph2bf8s ymm1, word ptr [rax + 8*r9 + 4]{1to32}
    vcvtph2bf8s ymm1, zmm18
    vcvtph2bf8 xmm1, xmmword ptr [rax + 8*r9 + 32]
    vcvtph2bf8 xmm1, word ptr [rax + 8*r9 + 4]{1to8}
    vcvtph2bf8 xmm1, xmm18
    vcvtph2bf8 xmm1, ymmword ptr [rax + 8*r9 + 64]
    vcvtph2bf8 xmm1, word ptr [rax + 8*r9 + 4]{1to16}
    vcvtph2bf8 xmm1, ymm18
    vcvtph2bf8 ymm1, zmmword ptr [rax + 8*r9 + 128]
    vcvtph2bf8 ymm1, word ptr [rax + 8*r9 + 4]{1to32}
    vcvtph2bf8 ymm1, zmm18
    vcvtph2hf8s xmm1, xmmword ptr [rax + 8*r9 + 32]
    vcvtph2hf8s xmm1, word ptr [rax + 8*r9 + 4]{1to8}
    vcvtph2hf8s xmm1, xmm18
    vcvtph2hf8s xmm1, ymmword ptr [rax + 8*r9 + 64]
    vcvtph2hf8s xmm1, word ptr [rax + 8*r9 + 4]{1to16}
    vcvtph2hf8s xmm1, ymm18
    vcvtph2hf8s ymm1, zmmword ptr [rax + 8*r9 + 128]
    vcvtph2hf8s ymm1, word ptr [rax + 8*r9 + 4]{1to32}
    vcvtph2hf8s ymm1, zmm18
    vcvtph2hf8 xmm1, xmmword ptr [rax + 8*r9 + 32]
    vcvtph2hf8 xmm1, word ptr [rax + 8*r9 + 4]{1to8}
    vcvtph2hf8 xmm1, xmm18
    vcvtph2hf8 xmm1, ymmword ptr [rax + 8*r9 + 64]
    vcvtph2hf8 xmm1, word ptr [rax + 8*r9 + 4]{1to16}
    vcvtph2hf8 xmm1, ymm18
    vcvtph2hf8 ymm1, zmmword ptr [rax + 8*r9 + 128]
    vcvtph2hf8 ymm1, word ptr [rax + 8*r9 + 4]{1to32}
    vcvtph2hf8 ymm1, zmm18
    vcvtph2ibs xmm1, xmmword ptr [rax + 8*r9 + 32]
    vcvtph2ibs xmm1, word ptr [rax + 8*r9 + 4]{1to8}
    vcvtph2ibs xmm1, xmm18
    vcvtph2ibs ymm1, ymmword ptr [rax + 8*r9 + 64]
    vcvtph2ibs ymm1, word ptr [rax + 8*r9 + 4]{1to16}
    vcvtph2ibs ymm1, ymm18
    vcvtph2ibs zmm1, zmmword ptr [rax + 8*r9 + 128]
    vcvtph2ibs zmm1, word ptr [rax + 8*r9 + 4]{1to32}
    vcvtph2ibs zmm1, zmm18
    vcvtph2ibs zmm1, zmm18, {rz-sae}
    vcvtph2iubs xmm1, xmmword ptr [rax + 8*r9 + 32]
    vcvtph2iubs xmm1, word ptr [rax + 8*r9 + 4]{1to8}
    vcvtph2iubs xmm1, xmm18
    vcvtph2iubs ymm1, ymmword ptr [rax + 8*r9 + 64]
    vcvtph2iubs ymm1, word ptr [rax + 8*r9 + 4]{1to16}
    vcvtph2iubs ymm1, ymm18
    vcvtph2iubs zmm1, zmmword ptr [rax + 8*r9 + 128]
    vcvtph2iubs zmm1, word ptr [rax + 8*r9 + 4]{1to32}
    vcvtph2iubs zmm1, zmm18
    vcvtph2iubs zmm1, zmm18, {rz-sae}
    vcvtps2ibs xmm1, xmmword ptr [rax + 8*r9 + 32]
    vcvtps2ibs xmm1, dword ptr [rax + 8*r9 + 8]{1to4}
    vcvtps2ibs xmm1, xmm18
    vcvtps2ibs ymm1, ymmword ptr [rax + 8*r9 + 64]
    vcvtps2ibs ymm1, dword ptr [rax + 8*r9 + 8]{1to8}
    vcvtps2ibs ymm1, ymm18
    vcvtps2ibs zmm1, zmmword ptr [rax + 8*r9 + 128]
    vcvtps2ibs zmm1, dword ptr [rax + 8*r9 + 8]{1to16}
    vcvtps2ibs zmm1, zmm18
    vcvtps2ibs zmm1, zmm18, {rz-sae}
    vcvtps2iubs xmm1, xmmword ptr [rax + 8*r9 + 32]
    vcvtps2iubs xmm1, dword ptr [rax + 8*r9 + 8]{1to4}
    vcvtps2iubs xmm1, xmm18
    vcvtps2iubs ymm1, ymmword ptr [rax + 8*r9 + 64]
    vcvtps2iubs ymm1, dword ptr [rax + 8*r9 + 8]{1to8}
    vcvtps2iubs ymm1, ymm18
    vcvtps2iubs zmm1, zmmword ptr [rax + 8*r9 + 128]
    vcvtps2iubs zmm1, dword ptr [rax + 8*r9 + 8]{1to16}
    vcvtps2iubs zmm1, zmm18
    vcvtps2iubs zmm1, zmm18, {rz-sae}
    vcvttbf162ibs xmm1, xmmword ptr [rax + 8*r9 + 32]
    vcvttbf162ibs xmm1, word ptr [rax + 8*r9 + 4]{1to8}
    vcvttbf162ibs xmm1, xmm18
    vcvttbf162ibs ymm1, ymmword ptr [rax + 8*r9 + 64]
    vcvttbf162ibs ymm1, word ptr [rax + 8*r9 + 4]{1to16}
    vcvttbf162ibs ymm1, ymm18
    vcvttbf162ibs zmm1, zmmword ptr [rax + 8*r9 + 128]
    vcvttbf162ibs zmm1, word ptr [rax + 8*r9 + 4]{1to32}
    vcvttbf162ibs zmm1, zmm18
    vcvttbf162iubs xmm1, xmmword ptr [rax + 8*r9 + 32]
    vcvttbf162iubs xmm1, word ptr [rax + 8*r9 + 4]{1to8}
    vcvttbf162iubs xmm1, xmm18
    vcvttbf162iubs ymm1, ymmword ptr [rax + 8*r9 + 64]
    vcvttbf162iubs ymm1, word ptr [rax + 8*r9 + 4]{1to16}
    vcvttbf162iubs ymm1, ymm18
    vcvttbf162iubs zmm1, zmmword ptr [rax + 8*r9 + 128]
    vcvttbf162iubs zmm1, word ptr [rax + 8*r9 + 4]{1to32}
    vcvttbf162iubs zmm1, zmm18
    vcvttpd2dqs xmm1, xmmword ptr [rax + 8*r9 + 32]
    vcvttpd2dqs xmm1, qword ptr [rax + 8*r9 + 16]{1to2}
    vcvttpd2dqs xmm1, xmm18
    vcvttpd2dqs xmm1, ymmword ptr [rax + 8*r9 + 64]
    vcvttpd2dqs xmm1, qword ptr [rax + 8*r9 + 16]{1to4}
    vcvttpd2dqs xmm1, ymm18
    vcvttpd2dqs xmm1, ymm18, {sae}
    vcvttpd2dqs ymm1, zmmword ptr [rax + 8*r9 + 128]
    vcvttpd2dqs ymm1, qword ptr [rax + 8*r9 + 16]{1to8}
    vcvttpd2dqs ymm1, zmm18
    vcvttpd2dqs ymm1, zmm18, {sae}
    vcvttpd2qqs xmm1, xmmword ptr [rax + 8*r9 + 32]
    vcvttpd2qqs xmm1, qword ptr [rax + 8*r9 + 16]{1to2}
    vcvttpd2qqs xmm1, xmm18
    vcvttpd2qqs ymm1, ymmword ptr [rax + 8*r9 + 64]
    vcvttpd2qqs ymm1, qword ptr [rax + 8*r9 + 16]{1to4}
    vcvttpd2qqs ymm1, ymm18
    vcvttpd2qqs ymm1, ymm18, {sae}
    vcvttpd2qqs zmm1, zmmword ptr [rax + 8*r9 + 128]
    vcvttpd2qqs zmm1, qword ptr [rax + 8*r9 + 16]{1to8}
    vcvttpd2qqs zmm1, zmm18
    vcvttpd2qqs zmm1, zmm18, {sae}
    vcvttpd2udqs xmm1, xmmword ptr [rax + 8*r9 + 32]
    vcvttpd2udqs xmm1, qword ptr [rax + 8*r9 + 16]{1to2}
    vcvttpd2udqs xmm1, xmm18
    vcvttpd2udqs xmm1, ymmword ptr [rax + 8*r9 + 64]
    vcvttpd2udqs xmm1, qword ptr [rax + 8*r9 + 16]{1to4}
    vcvttpd2udqs xmm1, ymm18
    vcvttpd2udqs xmm1, ymm18, {sae}
    vcvttpd2udqs ymm1, zmmword ptr [rax + 8*r9 + 128]
    vcvttpd2udqs ymm1, qword ptr [rax + 8*r9 + 16]{1to8}
    vcvttpd2udqs ymm1, zmm18
    vcvttpd2udqs ymm1, zmm18, {sae}
    vcvttpd2uqqs xmm1, xmmword ptr [rax + 8*r9 + 32]
    vcvttpd2uqqs xmm1, qword ptr [rax + 8*r9 + 16]{1to2}
    vcvttpd2uqqs xmm1, xmm18
    vcvttpd2uqqs ymm1, ymmword ptr [rax + 8*r9 + 64]
    vcvttpd2uqqs ymm1, qword ptr [rax + 8*r9 + 16]{1to4}
    vcvttpd2uqqs ymm1, ymm18
    vcvttpd2uqqs ymm1, ymm18, {sae}
    vcvttpd2uqqs zmm1, zmmword ptr [rax + 8*r9 + 128]
    vcvttpd2uqqs zmm1, qword ptr [rax + 8*r9 + 16]{1to8}
    vcvttpd2uqqs zmm1, zmm18
    vcvttpd2uqqs zmm1, zmm18, {sae}
    vcvttph2ibs xmm1, xmmword ptr [rax + 8*r9 + 32]
    vcvttph2ibs xmm1, word ptr [rax + 8*r9 + 4]{1to8}
    vcvttph2ibs xmm1, xmm18
    vcvttph2ibs ymm1, ymmword ptr [rax + 8*r9 + 64]
    vcvttph2ibs ymm1, word ptr [rax + 8*r9 + 4]{1to16}
    vcvttph2ibs ymm1, ymm18
    vcvttph2ibs zmm1, zmmword ptr [rax + 8*r9 + 128]
    vcvttph2ibs zmm1, word ptr [rax + 8*r9 + 4]{1to32}
    vcvttph2ibs zmm1, zmm18
    vcvttph2ibs zmm1, zmm18, {sae}
    vcvttph2iubs xmm1, xmmword ptr [rax + 8*r9 + 32]
    vcvttph2iubs xmm1, word ptr [rax + 8*r9 + 4]{1to8}
    vcvttph2iubs xmm1, xmm18
    vcvttph2iubs ymm1, ymmword ptr [rax + 8*r9 + 64]
    vcvttph2iubs ymm1, word ptr [rax + 8*r9 + 4]{1to16}
    vcvttph2iubs ymm1, ymm18
    vcvttph2iubs zmm1, zmmword ptr [rax + 8*r9 + 128]
    vcvttph2iubs zmm1, word ptr [rax + 8*r9 + 4]{1to32}
    vcvttph2iubs zmm1, zmm18
    vcvttph2iubs zmm1, zmm18, {sae}
    vcvttps2dqs xmm1, xmmword ptr [rax + 8*r9 + 32]
    vcvttps2dqs xmm1, dword ptr [rax + 8*r9 + 8]{1to4}
    vcvttps2dqs xmm1, xmm18
    vcvttps2dqs ymm1, ymmword ptr [rax + 8*r9 + 64]
    vcvttps2dqs ymm1, dword ptr [rax + 8*r9 + 8]{1to8}
    vcvttps2dqs ymm1, ymm18
    vcvttps2dqs zmm1, zmmword ptr [rax + 8*r9 + 128]
    vcvttps2dqs zmm1, dword ptr [rax + 8*r9 + 8]{1to16}
    vcvttps2dqs zmm1, zmm18
    vcvttps2dqs zmm1, zmm18, {sae}
    vcvttps2ibs xmm1, xmmword ptr [rax + 8*r9 + 32]
    vcvttps2ibs xmm1, dword ptr [rax + 8*r9 + 8]{1to4}
    vcvttps2ibs xmm1, xmm18
    vcvttps2ibs ymm1, ymmword ptr [rax + 8*r9 + 64]
    vcvttps2ibs ymm1, dword ptr [rax + 8*r9 + 8]{1to8}
    vcvttps2ibs ymm1, ymm18
    vcvttps2ibs zmm1, zmmword ptr [rax + 8*r9 + 128]
    vcvttps2ibs zmm1, dword ptr [rax + 8*r9 + 8]{1to16}
    vcvttps2ibs zmm1, zmm18
    vcvttps2ibs zmm1, zmm18, {sae}
    vcvttps2iubs xmm1, xmmword ptr [rax + 8*r9 + 32]
    vcvttps2iubs xmm1, dword ptr [rax + 8*r9 + 8]{1to4}
    vcvttps2iubs xmm1, xmm18
    vcvttps2iubs ymm1, ymmword ptr [rax + 8*r9 + 64]
    vcvttps2iubs ymm1, dword ptr [rax + 8*r9 + 8]{1to8}
    vcvttps2iubs ymm1, ymm18
    vcvttps2iubs zmm1, zmmword ptr [rax + 8*r9 + 128]
    vcvttps2iubs zmm1, dword ptr [rax + 8*r9 + 8]{1to16}
    vcvttps2iubs zmm1, zmm18
    vcvttps2iubs zmm1, zmm18, {sae}
    vcvttps2qqs xmm1, qword ptr [rax + 8*r9 + 16]
    vcvttps2qqs xmm1, dword ptr [rax + 8*r9 + 8]{1to2}
    vcvttps2qqs xmm1, xmm18
    vcvttps2qqs ymm1, xmmword ptr [rax + 8*r9 + 32]
    vcvttps2qqs ymm1, dword ptr [rax + 8*r9 + 8]{1to4}
    vcvttps2qqs ymm1, xmm18
    vcvttps2qqs ymm1, xmm18, {sae}
    vcvttps2qqs zmm1, ymmword ptr [rax + 8*r9 + 64]
    vcvttps2qqs zmm1, dword ptr [rax + 8*r9 + 8]{1to8}
    vcvttps2qqs zmm1, ymm18
    vcvttps2qqs zmm1, ymm18, {sae}
    vcvttps2udqs xmm1, xmmword ptr [rax + 8*r9 + 32]
    vcvttps2udqs xmm1, dword ptr [rax + 8*r9 + 8]{1to4}
    vcvttps2udqs xmm1, xmm18
    vcvttps2udqs ymm1, ymmword ptr [rax + 8*r9 + 64]
    vcvttps2udqs ymm1, dword ptr [rax + 8*r9 + 8]{1to8}
    vcvttps2udqs ymm1, ymm18
    vcvttps2udqs zmm1, zmmword ptr [rax + 8*r9 + 128]
    vcvttps2udqs zmm1, dword ptr [rax + 8*r9 + 8]{1to16}
    vcvttps2udqs zmm1, zmm18
    vcvttps2udqs zmm1, zmm18, {sae}
    vcvttps2uqqs xmm1, qword ptr [rax + 8*r9 + 16]
    vcvttps2uqqs xmm1, dword ptr [rax + 8*r9 + 8]{1to2}
    vcvttps2uqqs xmm1, xmm18
    vcvttps2uqqs ymm1, xmmword ptr [rax + 8*r9 + 32]
    vcvttps2uqqs ymm1, dword ptr [rax + 8*r9 + 8]{1to4}
    vcvttps2uqqs ymm1, xmm18
    vcvttps2uqqs ymm1, xmm18, {sae}
    vcvttps2uqqs zmm1, ymmword ptr [rax + 8*r9 + 64]
    vcvttps2uqqs zmm1, dword ptr [rax + 8*r9 + 8]{1to8}
    vcvttps2uqqs zmm1, ymm18
    vcvttps2uqqs zmm1, ymm18, {sae}
    vcvttsd2sis r17, qword ptr [rax + 8*r9 + 16]
    vcvttsd2sis r17, xmm18
    vcvttsd2sis r17, xmm18, {sae}
    vcvttsd2sis r17d, qword ptr [rax + 8*r9 + 16]
    vcvttsd2sis r17d, xmm18
    vcvttsd2sis r17d, xmm18, {sae}
    vcvttsd2usis r17, qword ptr [rax + 8*r9 + 16]
    vcvttsd2usis r17, xmm18
    vcvttsd2usis r17, xmm18, {sae}
    vcvttsd2usis r17d, qword ptr [rax + 8*r9 + 16]
    vcvttsd2usis r17d, xmm18
    vcvttsd2usis r17d, xmm18, {sae}
    vcvttss2sis r17, dword ptr [rax + 8*r9 + 8]
    vcvttss2sis r17, xmm18
    vcvttss2sis r17, xmm18, {sae}
    vcvttss2sis r17d, dword ptr [rax + 8*r9 + 8]
    vcvttss2sis r17d, xmm18
    vcvttss2sis r17d, xmm18, {sae}
    vcvttss2usis r17, dword ptr [rax + 8*r9 + 8]
    vcvttss2usis r17, xmm18
    vcvttss2usis r17, xmm18, {sae}
    vcvttss2usis r17d, dword ptr [rax + 8*r9 + 8]
    vcvttss2usis r17d, xmm18
    vcvttss2usis r17d, xmm18, {sae}
    vdivbf16 xmm1, xmm18, xmmword ptr [rax + 8*r9 + 32]
    vdivbf16 xmm1, xmm18, word ptr [rax + 8*r9 + 4]{1to8}
    vdivbf16 xmm1, xmm18, xmm3
    vdivbf16 ymm1, ymm18, ymmword ptr [rax + 8*r9 + 64]
    vdivbf16 ymm1, ymm18, word ptr [rax + 8*r9 + 4]{1to16}
    vdivbf16 ymm1, ymm18, ymm3
    vdivbf16 zmm1, zmm18, zmmword ptr [rax + 8*r9 + 128]
    vdivbf16 zmm1, zmm18, word ptr [rax + 8*r9 + 4]{1to32}
    vdivbf16 zmm1, zmm18, zmm3
    vdpphps xmm1, xmm3, xmmword ptr [rax + 8*r9 + 32]
    vdpphps xmm1, xmm3, dword ptr [rax + 8*r9 + 8]{1to4}
    vdpphps xmm1, xmm3, xmm4
    vdpphps ymm1, ymm3, ymmword ptr [rax + 8*r9 + 64]
    vdpphps ymm1, ymm3, dword ptr [rax + 8*r9 + 8]{1to8}
    vdpphps ymm1, ymm3, ymm4
    vdpphps zmm1, zmm3, zmmword ptr [rax + 8*r9 + 128]
    vdpphps zmm1, zmm3, dword ptr [rax + 8*r9 + 8]{1to16}
    vdpphps zmm1, zmm3, zmm4
    vfmadd132bf16 xmm1, xmm3, xmmword ptr [rax + 8*r9 + 32]
    vfmadd132bf16 xmm1, xmm3, word ptr [rax + 8*r9 + 4]{1to8}
    vfmadd132bf16 xmm1, xmm3, xmm4
    vfmadd132bf16 ymm1, ymm3, ymmword ptr [rax + 8*r9 + 64]
    vfmadd132bf16 ymm1, ymm3, word ptr [rax + 8*r9 + 4]{1to16}
    vfmadd132bf16 ymm1, ymm3, ymm4
    vfmadd132bf16 zmm1, zmm3, zmmword ptr [rax + 8*r9 + 128]
    vfmadd132bf16 zmm1, zmm3, word ptr [rax + 8*r9 + 4]{1to32}
    vfmadd132bf16 zmm1, zmm3, zmm4
    vfmadd213bf16 xmm1, xmm3, xmmword ptr [rax + 8*r9 + 32]
    vfmadd213bf16 xmm1, xmm3, word ptr [rax + 8*r9 + 4]{1to8}
    vfmadd213bf16 xmm1, xmm3, xmm4
    vfmadd213bf16 ymm1, ymm3, ymmword ptr [rax + 8*r9 + 64]
    vfmadd213bf16 ymm1, ymm3, word ptr [rax + 8*r9 + 4]{1to16}
    vfmadd213bf16 ymm1, ymm3, ymm4
    vfmadd213bf16 zmm1, zmm3, zmmword ptr [rax + 8*r9 + 128]
    vfmadd213bf16 zmm1, zmm3, word ptr [rax + 8*r9 + 4]{1to32}
    vfmadd213bf16 zmm1, zmm3, zmm4
    vfmadd231bf16 xmm1, xmm3, xmmword ptr [rax + 8*r9 + 32]
    vfmadd231bf16 xmm1, xmm3, word ptr [rax + 8*r9 + 4]{1to8}
    vfmadd231bf16 xmm1, xmm3, xmm4
    vfmadd231bf16 ymm1, ymm3, ymmword ptr [rax + 8*r9 + 64]
    vfmadd231bf16 ymm1, ymm3, word ptr [rax + 8*r9 + 4]{1to16}
    vfmadd231bf16 ymm1, ymm3, ymm4
    vfmadd231bf16 zmm1, zmm3, zmmword ptr [rax + 8*r9 + 128]
    vfmadd231bf16 zmm1, zmm3, word ptr [rax + 8*r9 + 4]{1to32}
    vfmadd231bf16 zmm1, zmm3, zmm4
    vfmsub132bf16 xmm1, xmm3, xmmword ptr [rax + 8*r9 + 32]
    vfmsub132bf16 xmm1, xmm3, word ptr [rax + 8*r9 + 4]{1to8}
    vfmsub132bf16 xmm1, xmm3, xmm4
    vfmsub132bf16 ymm1, ymm3, ymmword ptr [rax + 8*r9 + 64]
    vfmsub132bf16 ymm1, ymm3, word ptr [rax + 8*r9 + 4]{1to16}
    vfmsub132bf16 ymm1, ymm3, ymm4
    vfmsub132bf16 zmm1, zmm3, zmmword ptr [rax + 8*r9 + 128]
    vfmsub132bf16 zmm1, zmm3, word ptr [rax + 8*r9 + 4]{1to32}
    vfmsub132bf16 zmm1, zmm3, zmm4
    vfmsub213bf16 xmm1, xmm3, xmmword ptr [rax + 8*r9 + 32]
    vfmsub213bf16 xmm1, xmm3, word ptr [rax + 8*r9 + 4]{1to8}
    vfmsub213bf16 xmm1, xmm3, xmm4
    vfmsub213bf16 ymm1, ymm3, ymmword ptr [rax + 8*r9 + 64]
    vfmsub213bf16 ymm1, ymm3, word ptr [rax + 8*r9 + 4]{1to16}
    vfmsub213bf16 ymm1, ymm3, ymm4
    vfmsub213bf16 zmm1, zmm3, zmmword ptr [rax + 8*r9 + 128]
    vfmsub213bf16 zmm1, zmm3, word ptr [rax + 8*r9 + 4]{1to32}
    vfmsub213bf16 zmm1, zmm3, zmm4
    vfmsub231bf16 xmm1, xmm3, xmmword ptr [rax + 8*r9 + 32]
    vfmsub231bf16 xmm1, xmm3, word ptr [rax + 8*r9 + 4]{1to8}
    vfmsub231bf16 xmm1, xmm3, xmm4
    vfmsub231bf16 ymm1, ymm3, ymmword ptr [rax + 8*r9 + 64]
    vfmsub231bf16 ymm1, ymm3, word ptr [rax + 8*r9 + 4]{1to16}
    vfmsub231bf16 ymm1, ymm3, ymm4
    vfmsub231bf16 zmm1, zmm3, zmmword ptr [rax + 8*r9 + 128]
    vfmsub231bf16 zmm1, zmm3, word ptr [rax + 8*r9 + 4]{1to32}
    vfmsub231bf16 zmm1, zmm3, zmm4
    vfnmadd132bf16 xmm1, xmm3, xmmword ptr [rax + 8*r9 + 32]
    vfnmadd132bf16 xmm1, xmm3, word ptr [rax + 8*r9 + 4]{1to8}
    vfnmadd132bf16 xmm1, xmm3, xmm4
    vfnmadd132bf16 ymm1, ymm3, ymmword ptr [rax + 8*r9 + 64]
    vfnmadd132bf16 ymm1, ymm3, word ptr [rax + 8*r9 + 4]{1to16}
    vfnmadd132bf16 ymm1, ymm3, ymm4
    vfnmadd132bf16 zmm1, zmm3, zmmword ptr [rax + 8*r9 + 128]
    vfnmadd132bf16 zmm1, zmm3, word ptr [rax + 8*r9 + 4]{1to32}
    vfnmadd132bf16 zmm1, zmm3, zmm4
    vfnmadd213bf16 xmm1, xmm3, xmmword ptr [rax + 8*r9 + 32]
    vfnmadd213bf16 xmm1, xmm3, word ptr [rax + 8*r9 + 4]{1to8}
    vfnmadd213bf16 xmm1, xmm3, xmm4
    vfnmadd213bf16 ymm1, ymm3, ymmword ptr [rax + 8*r9 + 64]
    vfnmadd213bf16 ymm1, ymm3, word ptr [rax + 8*r9 + 4]{1to16}
    vfnmadd213bf16 ymm1, ymm3, ymm4
    vfnmadd213bf16 zmm1, zmm3, zmmword ptr [rax + 8*r9 + 128]
    vfnmadd213bf16 zmm1, zmm3, word ptr [rax + 8*r9 + 4]{1to32}
    vfnmadd213bf16 zmm1, zmm3, zmm4
    vfnmadd231bf16 xmm1, xmm3, xmmword ptr [rax + 8*r9 + 32]
    vfnmadd231bf16 xmm1, xmm3, word ptr [rax + 8*r9 + 4]{1to8}
    vfnmadd231bf16 xmm1, xmm3, xmm4
    vfnmadd231bf16 ymm1, ymm3, ymmword ptr [rax + 8*r9 + 64]
    vfnmadd231bf16 ymm1, ymm3, word ptr [rax + 8*r9 + 4]{1to16}
    vfnmadd231bf16 ymm1, ymm3, ymm4
    vfnmadd231bf16 zmm1, zmm3, zmmword ptr [rax + 8*r9 + 128]
    vfnmadd231bf16 zmm1, zmm3, word ptr [rax + 8*r9 + 4]{1to32}
    vfnmadd231bf16 zmm1, zmm3, zmm4
    vfnmsub132bf16 xmm1, xmm3, xmmword ptr [rax + 8*r9 + 32]
    vfnmsub132bf16 xmm1, xmm3, word ptr [rax + 8*r9 + 4]{1to8}
    vfnmsub132bf16 xmm1, xmm3, xmm4
    vfnmsub132bf16 ymm1, ymm3, ymmword ptr [rax + 8*r9 + 64]
    vfnmsub132bf16 ymm1, ymm3, word ptr [rax + 8*r9 + 4]{1to16}
    vfnmsub132bf16 ymm1, ymm3, ymm4
    vfnmsub132bf16 zmm1, zmm3, zmmword ptr [rax + 8*r9 + 128]
    vfnmsub132bf16 zmm1, zmm3, word ptr [rax + 8*r9 + 4]{1to32}
    vfnmsub132bf16 zmm1, zmm3, zmm4
    vfnmsub213bf16 xmm1, xmm3, xmmword ptr [rax + 8*r9 + 32]
    vfnmsub213bf16 xmm1, xmm3, word ptr [rax + 8*r9 + 4]{1to8}
    vfnmsub213bf16 xmm1, xmm3, xmm4
    vfnmsub213bf16 ymm1, ymm3, ymmword ptr [rax + 8*r9 + 64]
    vfnmsub213bf16 ymm1, ymm3, word ptr [rax + 8*r9 + 4]{1to16}
    vfnmsub213bf16 ymm1, ymm3, ymm4
    vfnmsub213bf16 zmm1, zmm3, zmmword ptr [rax + 8*r9 + 128]
    vfnmsub213bf16 zmm1, zmm3, word ptr [rax + 8*r9 + 4]{1to32}
    vfnmsub213bf16 zmm1, zmm3, zmm4
    vfnmsub231bf16 xmm1, xmm3, xmmword ptr [rax + 8*r9 + 32]
    vfnmsub231bf16 xmm1, xmm3, word ptr [rax + 8*r9 + 4]{1to8}
    vfnmsub231bf16 xmm1, xmm3, xmm4
    vfnmsub231bf16 ymm1, ymm3, ymmword ptr [rax + 8*r9 + 64]
    vfnmsub231bf16 ymm1, ymm3, word ptr [rax + 8*r9 + 4]{1to16}
    vfnmsub231bf16 ymm1, ymm3, ymm4
    vfnmsub231bf16 zmm1, zmm3, zmmword ptr [rax + 8*r9 + 128]
    vfnmsub231bf16 zmm1, zmm3, word ptr [rax + 8*r9 + 4]{1to32}
    vfnmsub231bf16 zmm1, zmm3, zmm4
    vfpclassbf16 k2, word ptr [rax + 8*r9 + 4]{1to8}, 3
    vfpclassbf16 k2, xmmword ptr [rax + 8*r9 + 32], 3
    vfpclassbf16 k2, xmm18, 3
    vfpclassbf16 k2, word ptr [rax + 8*r9 + 4]{1to16}, 3
    vfpclassbf16 k2, ymmword ptr [rax + 8*r9 + 64], 3
    vfpclassbf16 k2, ymm18, 3
    vfpclassbf16 k2, word ptr [rax + 8*r9 + 4]{1to32}, 3
    vfpclassbf16 k2, zmmword ptr [rax + 8*r9 + 128], 3
    vfpclassbf16 k2, zmm18, 3
    vgetexpbf16 xmm1, xmmword ptr [rax + 8*r9 + 32]
    vgetexpbf16 xmm1, word ptr [rax + 8*r9 + 4]{1to8}
    vgetexpbf16 xmm1, xmm18
    vgetexpbf16 ymm1, ymmword ptr [rax + 8*r9 + 64]
    vgetexpbf16 ymm1, word ptr [rax + 8*r9 + 4]{1to16}
    vgetexpbf16 ymm1, ymm18
    vgetexpbf16 zmm1, zmmword ptr [rax + 8*r9 + 128]
    vgetexpbf16 zmm1, word ptr [rax + 8*r9 + 4]{1to32}
    vgetexpbf16 zmm1, zmm18
    vgetmantbf16 xmm1, word ptr [rax + 8*r9 + 4]{1to8}, 3
    vgetmantbf16 xmm1, xmmword ptr [rax + 8*r9 + 32], 3
    vgetmantbf16 xmm1, xmm18, 3
    vgetmantbf16 ymm1, word ptr [rax + 8*r9 + 4]{1to16}, 3
    vgetmantbf16 ymm1, ymmword ptr [rax + 8*r9 + 64], 3
    vgetmantbf16 ymm1, ymm18, 3
    vgetmantbf16 zmm1, word ptr [rax + 8*r9 + 4]{1to32}, 3
    vgetmantbf16 zmm1, zmmword ptr [rax + 8*r9 + 128], 3
    vgetmantbf16 zmm1, zmm18, 3
    vmaxbf16 xmm1, xmm18, xmmword ptr [rax + 8*r9 + 32]
    vmaxbf16 xmm1, xmm18, word ptr [rax + 8*r9 + 4]{1to8}
    vmaxbf16 xmm1, xmm18, xmm3
    vmaxbf16 ymm1, ymm18, ymmword ptr [rax + 8*r9 + 64]
    vmaxbf16 ymm1, ymm18, word ptr [rax + 8*r9 + 4]{1to16}
    vmaxbf16 ymm1, ymm18, ymm3
    vmaxbf16 zmm1, zmm18, zmmword ptr [rax + 8*r9 + 128]
    vmaxbf16 zmm1, zmm18, word ptr [rax + 8*r9 + 4]{1to32}
    vmaxbf16 zmm1, zmm18, zmm3
    vminbf16 xmm1, xmm18, xmmword ptr [rax + 8*r9 + 32]
    vminbf16 xmm1, xmm18, word ptr [rax + 8*r9 + 4]{1to8}
    vminbf16 xmm1, xmm18, xmm3
    vminbf16 ymm1, ymm18, ymmword ptr [rax + 8*r9 + 64]
    vminbf16 ymm1, ymm18, word ptr [rax + 8*r9 + 4]{1to16}
    vminbf16 ymm1, ymm18, ymm3
    vminbf16 zmm1, zmm18, zmmword ptr [rax + 8*r9 + 128]
    vminbf16 zmm1, zmm18, word ptr [rax + 8*r9 + 4]{1to32}
    vminbf16 zmm1, zmm18, zmm3
    vminmaxbf16 xmm1, xmm18, word ptr [rax + 8*r9 + 4]{1to8}, 3
    vminmaxbf16 xmm1, xmm18, xmmword ptr [rax + 8*r9 + 32], 3
    vminmaxbf16 xmm1, xmm18, xmm3, 3
    vminmaxbf16 ymm1, ymm18, word ptr [rax + 8*r9 + 4]{1to16}, 3
    vminmaxbf16 ymm1, ymm18, ymmword ptr [rax + 8*r9 + 64], 3
    vminmaxbf16 ymm1, ymm18, ymm3, 3
    vminmaxbf16 zmm1, zmm18, word ptr [rax + 8*r9 + 4]{1to32}, 3
    vminmaxbf16 zmm1, zmm18, zmmword ptr [rax + 8*r9 + 128], 3
    vminmaxbf16 zmm1, zmm18, zmm3, 3
    vminmaxpd xmm1, xmm18, qword ptr [rax + 8*r9 + 16]{1to2}, 3
    vminmaxpd xmm1, xmm18, xmmword ptr [rax + 8*r9 + 32], 3
    vminmaxpd xmm1, xmm18, xmm3, 3
    vminmaxpd ymm1, ymm18, qword ptr [rax + 8*r9 + 16]{1to4}, 3
    vminmaxpd ymm1, ymm18, ymmword ptr [rax + 8*r9 + 64], 3
    vminmaxpd ymm1, ymm18, ymm3, 3
    vminmaxpd zmm1, zmm18, qword ptr [rax + 8*r9 + 16]{1to8}, 3
    vminmaxpd zmm1, zmm18, zmmword ptr [rax + 8*r9 + 128], 3
    vminmaxpd zmm1, zmm18, zmm3, 3
    vminmaxph xmm1, xmm18, word ptr [rax + 8*r9 + 4]{1to8}, 3
    vminmaxph xmm1, xmm18, xmmword ptr [rax + 8*r9 + 32], 3
    vminmaxph xmm1, xmm18, xmm3, 3
    vminmaxph ymm1, ymm18, word ptr [rax + 8*r9 + 4]{1to16}, 3
    vminmaxph ymm1, ymm18, ymmword ptr [rax + 8*r9 + 64], 3
    vminmaxph ymm1, ymm18, ymm3, 3
    vminmaxph zmm1, zmm18, word ptr [rax + 8*r9 + 4]{1to32}, 3
    vminmaxph zmm1, zmm18, zmmword ptr [rax + 8*r9 + 128], 3
    vminmaxph zmm1, zmm18, zmm3, 3
    vminmaxps xmm1, xmm18, dword ptr [rax + 8*r9 + 8]{1to4}, 3
    vminmaxps xmm1, xmm18, xmmword ptr [rax + 8*r9 + 32], 3
    vminmaxps xmm1, xmm18, xmm3, 3
    vminmaxps ymm1, ymm18, dword ptr [rax + 8*r9 + 8]{1to8}, 3
    vminmaxps ymm1, ymm18, ymmword ptr [rax + 8*r9 + 64], 3
    vminmaxps ymm1, ymm18, ymm3, 3
    vminmaxps zmm1, zmm18, dword ptr [rax + 8*r9 + 8]{1to16}, 3
    vminmaxps zmm1, zmm18, zmmword ptr [rax + 8*r9 + 128], 3
    vminmaxps zmm1, zmm18, zmm3, 3
    vminmaxsd xmm1, xmm18, qword ptr [rax + 8*r9 + 16], 3
    vminmaxsd xmm1, xmm18, xmm3, 3
    vminmaxsd xmm1, xmm18, xmm3, {sae}, 3
    vminmaxsh xmm1, xmm18, word ptr [rax + 8*r9 + 4], 3
    vminmaxsh xmm1, xmm18, xmm3, 3
    vminmaxsh xmm1, xmm18, xmm3, {sae}, 3
    vminmaxss xmm1, xmm18, dword ptr [rax + 8*r9 + 8], 3
    vminmaxss xmm1, xmm18, xmm3, 3
    vminmaxss xmm1, xmm18, xmm3, {sae}, 3
    vmovrsb xmm1, xmmword ptr [rax + 8*r9 + 32]
    vmovrsb ymm1, ymmword ptr [rax + 8*r9 + 64]
    vmovrsb zmm1, zmmword ptr [rax + 8*r9 + 128]
    vmovrsd xmm1, xmmword ptr [rax + 8*r9 + 32]
    vmovrsd ymm1, ymmword ptr [rax + 8*r9 + 64]
    vmovrsd zmm1, zmmword ptr [rax + 8*r9 + 128]
    vmovrsq xmm1, xmmword ptr [rax + 8*r9 + 32]
    vmovrsq ymm1, ymmword ptr [rax + 8*r9 + 64]
    vmovrsq zmm1, zmmword ptr [rax + 8*r9 + 128]
    vmovrsw xmm1, xmmword ptr [rax + 8*r9 + 32]
    vmovrsw ymm1, ymmword ptr [rax + 8*r9 + 64]
    vmovrsw zmm1, zmmword ptr [rax + 8*r9 + 128]
    vmovd xmm1, xmm18
    vmovw xmm1, xmm18
    vmpsadbw xmm1, xmm18, xmmword ptr [rax + 8*r9 + 32], 3
    vmpsadbw xmm1, xmm18, xmm3, 3
    vmpsadbw ymm1, ymm18, ymmword ptr [rax + 8*r9 + 64], 3
    vmpsadbw ymm1, ymm18, ymm3, 3
    vmpsadbw zmm1, zmm18, zmmword ptr [rax + 8*r9 + 128], 3
    vmpsadbw zmm1, zmm18, zmm3, 3
    vmulbf16 xmm1, xmm18, xmmword ptr [rax + 8*r9 + 32]
    vmulbf16 xmm1, xmm18, word ptr [rax + 8*r9 + 4]{1to8}
    vmulbf16 xmm1, xmm18, xmm3
    vmulbf16 ymm1, ymm18, ymmword ptr [rax + 8*r9 + 64]
    vmulbf16 ymm1, ymm18, word ptr [rax + 8*r9 + 4]{1to16}
    vmulbf16 ymm1, ymm18, ymm3
    vmulbf16 zmm1, zmm18, zmmword ptr [rax + 8*r9 + 128]
    vmulbf16 zmm1, zmm18, word ptr [rax + 8*r9 + 4]{1to32}
    vmulbf16 zmm1, zmm18, zmm3
    vpdpbssds xmm1, xmm3, xmmword ptr [rax + 8*r9 + 32]
    vpdpbssds xmm1, xmm3, dword ptr [rax + 8*r9 + 8]{1to4}
    vpdpbssds xmm1, xmm3, xmm4
    vpdpbssds ymm1, ymm3, ymmword ptr [rax + 8*r9 + 64]
    vpdpbssds ymm1, ymm3, dword ptr [rax + 8*r9 + 8]{1to8}
    vpdpbssds ymm1, ymm3, ymm4
    vpdpbssds zmm1, zmm3, zmmword ptr [rax + 8*r9 + 128]
    vpdpbssds zmm1, zmm3, dword ptr [rax + 8*r9 + 8]{1to16}
    vpdpbssds zmm1, zmm3, zmm4
    vpdpbssd xmm1, xmm3, xmmword ptr [rax + 8*r9 + 32]
    vpdpbssd xmm1, xmm3, dword ptr [rax + 8*r9 + 8]{1to4}
    vpdpbssd xmm1, xmm3, xmm4
    vpdpbssd ymm1, ymm3, ymmword ptr [rax + 8*r9 + 64]
    vpdpbssd ymm1, ymm3, dword ptr [rax + 8*r9 + 8]{1to8}
    vpdpbssd ymm1, ymm3, ymm4
    vpdpbssd zmm1, zmm3, zmmword ptr [rax + 8*r9 + 128]
    vpdpbssd zmm1, zmm3, dword ptr [rax + 8*r9 + 8]{1to16}
    vpdpbssd zmm1, zmm3, zmm4
    vpdpbsuds xmm1, xmm3, xmmword ptr [rax + 8*r9 + 32]
    vpdpbsuds xmm1, xmm3, dword ptr [rax + 8*r9 + 8]{1to4}
    vpdpbsuds xmm1, xmm3, xmm4
    vpdpbsuds ymm1, ymm3, ymmword ptr [rax + 8*r9 + 64]
    vpdpbsuds ymm1, ymm3, dword ptr [rax + 8*r9 + 8]{1to8}
    vpdpbsuds ymm1, ymm3, ymm4
    vpdpbsuds zmm1, zmm3, zmmword ptr [rax + 8*r9 + 128]
    vpdpbsuds zmm1, zmm3, dword ptr [rax + 8*r9 + 8]{1to16}
    vpdpbsuds zmm1, zmm3, zmm4
    vpdpbsud xmm1, xmm3, xmmword ptr [rax + 8*r9 + 32]
    vpdpbsud xmm1, xmm3, dword ptr [rax + 8*r9 + 8]{1to4}
    vpdpbsud xmm1, xmm3, xmm4
    vpdpbsud ymm1, ymm3, ymmword ptr [rax + 8*r9 + 64]
    vpdpbsud ymm1, ymm3, dword ptr [rax + 8*r9 + 8]{1to8}
    vpdpbsud ymm1, ymm3, ymm4
    vpdpbsud zmm1, zmm3, zmmword ptr [rax + 8*r9 + 128]
    vpdpbsud zmm1, zmm3, dword ptr [rax + 8*r9 + 8]{1to16}
    vpdpbsud zmm1, zmm3, zmm4
    vpdpbuuds xmm1, xmm3, xmmword ptr [rax + 8*r9 + 32]
    vpdpbuuds xmm1, xmm3, dword ptr [rax + 8*r9 + 8]{1to4}
    vpdpbuuds xmm1, xmm3, xmm4
    vpdpbuuds ymm1, ymm3, ymmword ptr [rax + 8*r9 + 64]
    vpdpbuuds ymm1, ymm3, dword ptr [rax + 8*r9 + 8]{1to8}
    vpdpbuuds ymm1, ymm3, ymm4
    vpdpbuuds zmm1, zmm3, zmmword ptr [rax + 8*r9 + 128]
    vpdpbuuds zmm1, zmm3, dword ptr [rax + 8*r9 + 8]{1to16}
    vpdpbuuds zmm1, zmm3, zmm4
    vpdpbuud xmm1, xmm3, xmmword ptr [rax + 8*r9 + 32]
    vpdpbuud xmm1, xmm3, dword ptr [rax + 8*r9 + 8]{1to4}
    vpdpbuud xmm1, xmm3, xmm4
    vpdpbuud ymm1, ymm3, ymmword ptr [rax + 8*r9 + 64]
    vpdpbuud ymm1, ymm3, dword ptr [rax + 8*r9 + 8]{1to8}
    vpdpbuud ymm1, ymm3, ymm4
    vpdpbuud zmm1, zmm3, zmmword ptr [rax + 8*r9 + 128]
    vpdpbuud zmm1, zmm3, dword ptr [rax + 8*r9 + 8]{1to16}
    vpdpbuud zmm1, zmm3, zmm4
    vpdpwsuds xmm1, xmm3, xmmword ptr [rax + 8*r9 + 32]
    vpdpwsuds xmm1, xmm3, dword ptr [rax + 8*r9 + 8]{1to4}
    vpdpwsuds xmm1, xmm3, xmm4
    vpdpwsuds ymm1, ymm3, ymmword ptr [rax + 8*r9 + 64]
    vpdpwsuds ymm1, ymm3, dword ptr [rax + 8*r9 + 8]{1to8}
    vpdpwsuds ymm1, ymm3, ymm4
    vpdpwsuds zmm1, zmm3, zmmword ptr [rax + 8*r9 + 128]
    vpdpwsuds zmm1, zmm3, dword ptr [rax + 8*r9 + 8]{1to16}
    vpdpwsuds zmm1, zmm3, zmm4
    vpdpwsud xmm1, xmm3, xmmword ptr [rax + 8*r9 + 32]
    vpdpwsud xmm1, xmm3, dword ptr [rax + 8*r9 + 8]{1to4}
    vpdpwsud xmm1, xmm3, xmm4
    vpdpwsud ymm1, ymm3, ymmword ptr [rax + 8*r9 + 64]
    vpdpwsud ymm1, ymm3, dword ptr [rax + 8*r9 + 8]{1to8}
    vpdpwsud ymm1, ymm3, ymm4
    vpdpwsud zmm1, zmm3, zmmword ptr [rax + 8*r9 + 128]
    vpdpwsud zmm1, zmm3, dword ptr [rax + 8*r9 + 8]{1to16}
    vpdpwsud zmm1, zmm3, zmm4
    vpdpwusds xmm1, xmm3, xmmword ptr [rax + 8*r9 + 32]
    vpdpwusds xmm1, xmm3, dword ptr [rax + 8*r9 + 8]{1to4}
    vpdpwusds xmm1, xmm3, xmm4
    vpdpwusds ymm1, ymm3, ymmword ptr [rax + 8*r9 + 64]
    vpdpwusds ymm1, ymm3, dword ptr [rax + 8*r9 + 8]{1to8}
    vpdpwusds ymm1, ymm3, ymm4
    vpdpwusds zmm1, zmm3, zmmword ptr [rax + 8*r9 + 128]
    vpdpwusds zmm1, zmm3, dword ptr [rax + 8*r9 + 8]{1to16}
    vpdpwusds zmm1, zmm3, zmm4
    vpdpwusd xmm1, xmm3, xmmword ptr [rax + 8*r9 + 32]
    vpdpwusd xmm1, xmm3, dword ptr [rax + 8*r9 + 8]{1to4}
    vpdpwusd xmm1, xmm3, xmm4
    vpdpwusd ymm1, ymm3, ymmword ptr [rax + 8*r9 + 64]
    vpdpwusd ymm1, ymm3, dword ptr [rax + 8*r9 + 8]{1to8}
    vpdpwusd ymm1, ymm3, ymm4
    vpdpwusd zmm1, zmm3, zmmword ptr [rax + 8*r9 + 128]
    vpdpwusd zmm1, zmm3, dword ptr [rax + 8*r9 + 8]{1to16}
    vpdpwusd zmm1, zmm3, zmm4
    vpdpwuuds xmm1, xmm3, xmmword ptr [rax + 8*r9 + 32]
    vpdpwuuds xmm1, xmm3, dword ptr [rax + 8*r9 + 8]{1to4}
    vpdpwuuds xmm1, xmm3, xmm4
    vpdpwuuds ymm1, ymm3, ymmword ptr [rax + 8*r9 + 64]
    vpdpwuuds ymm1, ymm3, dword ptr [rax + 8*r9 + 8]{1to8}
    vpdpwuuds ymm1, ymm3, ymm4
    vpdpwuuds zmm1, zmm3, zmmword ptr [rax + 8*r9 + 128]
    vpdpwuuds zmm1, zmm3, dword ptr [rax + 8*r9 + 8]{1to16}
    vpdpwuuds zmm1, zmm3, zmm4
    vpdpwuud xmm1, xmm3, xmmword ptr [rax + 8*r9 + 32]
    vpdpwuud xmm1, xmm3, dword ptr [rax + 8*r9 + 8]{1to4}
    vpdpwuud xmm1, xmm3, xmm4
    vpdpwuud ymm1, ymm3, ymmword ptr [rax + 8*r9 + 64]
    vpdpwuud ymm1, ymm3, dword ptr [rax + 8*r9 + 8]{1to8}
    vpdpwuud ymm1, ymm3, ymm4
    vpdpwuud zmm1, zmm3, zmmword ptr [rax + 8*r9 + 128]
    vpdpwuud zmm1, zmm3, dword ptr [rax + 8*r9 + 8]{1to16}
    vpdpwuud zmm1, zmm3, zmm4
    vrcpbf16 xmm1, xmmword ptr [rax + 8*r9 + 32]
    vrcpbf16 xmm1, word ptr [rax + 8*r9 + 4]{1to8}
    vrcpbf16 xmm1, xmm18
    vrcpbf16 ymm1, ymmword ptr [rax + 8*r9 + 64]
    vrcpbf16 ymm1, word ptr [rax + 8*r9 + 4]{1to16}
    vrcpbf16 ymm1, ymm18
    vrcpbf16 zmm1, zmmword ptr [rax + 8*r9 + 128]
    vrcpbf16 zmm1, word ptr [rax + 8*r9 + 4]{1to32}
    vrcpbf16 zmm1, zmm18
    vreducebf16 xmm1, word ptr [rax + 8*r9 + 4]{1to8}, 3
    vreducebf16 xmm1, xmmword ptr [rax + 8*r9 + 32], 3
    vreducebf16 xmm1, xmm18, 3
    vreducebf16 ymm1, word ptr [rax + 8*r9 + 4]{1to16}, 3
    vreducebf16 ymm1, ymmword ptr [rax + 8*r9 + 64], 3
    vreducebf16 ymm1, ymm18, 3
    vreducebf16 zmm1, word ptr [rax + 8*r9 + 4]{1to32}, 3
    vreducebf16 zmm1, zmmword ptr [rax + 8*r9 + 128], 3
    vreducebf16 zmm1, zmm18, 3
    vrndscalebf16 xmm1, word ptr [rax + 8*r9 + 4]{1to8}, 3
    vrndscalebf16 xmm1, xmmword ptr [rax + 8*r9 + 32], 3
    vrndscalebf16 xmm1, xmm18, 3
    vrndscalebf16 ymm1, word ptr [rax + 8*r9 + 4]{1to16}, 3
    vrndscalebf16 ymm1, ymmword ptr [rax + 8*r9 + 64], 3
    vrndscalebf16 ymm1, ymm18, 3
    vrndscalebf16 zmm1, word ptr [rax + 8*r9 + 4]{1to32}, 3
    vrndscalebf16 zmm1, zmmword ptr [rax + 8*r9 + 128], 3
    vrndscalebf16 zmm1, zmm18, 3
    vrsqrtbf16 xmm1, xmmword ptr [rax + 8*r9 + 32]
    vrsqrtbf16 xmm1, word ptr [rax + 8*r9 + 4]{1to8}
    vrsqrtbf16 xmm1, xmm18
    vrsqrtbf16 ymm1, ymmword ptr [rax + 8*r9 + 64]
    vrsqrtbf16 ymm1, word ptr [rax + 8*r9 + 4]{1to16}
    vrsqrtbf16 ymm1, ymm18
    vrsqrtbf16 zmm1, zmmword ptr [rax + 8*r9 + 128]
    vrsqrtbf16 zmm1, word ptr [rax + 8*r9 + 4]{1to32}
    vrsqrtbf16 zmm1, zmm18
    vscalefbf16 xmm1, xmm18, xmmword ptr [rax + 8*r9 + 32]
    vscalefbf16 xmm1, xmm18, word ptr [rax + 8*r9 + 4]{1to8}
    vscalefbf16 xmm1, xmm18, xmm3
    vscalefbf16 ymm1, ymm18, ymmword ptr [rax + 8*r9 + 64]
    vscalefbf16 ymm1, ymm18, word ptr [rax + 8*r9 + 4]{1to16}
    vscalefbf16 ymm1, ymm18, ymm3
    vscalefbf16 zmm1, zmm18, zmmword ptr [rax + 8*r9 + 128]
    vscalefbf16 zmm1, zmm18, word ptr [rax + 8*r9 + 4]{1to32}
    vscalefbf16 zmm1, zmm18, zmm3
    vsm4key4 xmm1, xmm18, xmmword ptr [rax + 8*r9 + 32]
    vsm4key4 xmm1, xmm18, xmm3
    vsm4key4 ymm1, ymm18, ymmword ptr [rax + 8*r9 + 64]
    vsm4key4 ymm1, ymm18, ymm3
    vsm4key4 zmm1, zmm18, zmmword ptr [rax + 8*r9 + 128]
    vsm4key4 zmm1, zmm18, zmm3
    vsm4rnds4 xmm1, xmm18, xmmword ptr [rax + 8*r9 + 32]
    vsm4rnds4 xmm1, xmm18, xmm3
    vsm4rnds4 ymm1, ymm18, ymmword ptr [rax + 8*r9 + 64]
    vsm4rnds4 ymm1, ymm18, ymm3
    vsm4rnds4 zmm1, zmm18, zmmword ptr [rax + 8*r9 + 128]
    vsm4rnds4 zmm1, zmm18, zmm3
    vsqrtbf16 xmm1, xmmword ptr [rax + 8*r9 + 32]
    vsqrtbf16 xmm1, word ptr [rax + 8*r9 + 4]{1to8}
    vsqrtbf16 xmm1, xmm18
    vsqrtbf16 ymm1, ymmword ptr [rax + 8*r9 + 64]
    vsqrtbf16 ymm1, word ptr [rax + 8*r9 + 4]{1to16}
    vsqrtbf16 ymm1, ymm18
    vsqrtbf16 zmm1, zmmword ptr [rax + 8*r9 + 128]
    vsqrtbf16 zmm1, word ptr [rax + 8*r9 + 4]{1to32}
    vsqrtbf16 zmm1, zmm18
    vsubbf16 xmm1, xmm18, xmmword ptr [rax + 8*r9 + 32]
    vsubbf16 xmm1, xmm18, word ptr [rax + 8*r9 + 4]{1to8}
    vsubbf16 xmm1, xmm18, xmm3
    vsubbf16 ymm1, ymm18, ymmword ptr [rax + 8*r9 + 64]
    vsubbf16 ymm1, ymm18, word ptr [rax + 8*r9 + 4]{1to16}
    vsubbf16 ymm1, ymm18, ymm3
    vsubbf16 zmm1, zmm18, zmmword ptr [rax + 8*r9 + 128]
    vsubbf16 zmm1, zmm18, word ptr [rax + 8*r9 + 4]{1to32}
    vsubbf16 zmm1, zmm18, zmm3
    vucomxsd xmm18, qword ptr [rax + 8*r9 + 16]
    vucomxsd xmm18, xmm3
    vucomxsd xmm18, xmm3, {sae}
    vucomxsh xmm18, word ptr [rax + 8*r9 + 4]
    vucomxsh xmm18, xmm3
    vucomxsh xmm18, xmm3, {sae}
    vucomxss xmm18, dword ptr [rax + 8*r9 + 8]
    vucomxss xmm18, xmm3
    vucomxss xmm18, xmm3, {sae}
    ret
.size probe, .-probe

.p2align 4
gt:
    xor eax, eax
    vcomxsd xmm0, xmm1
    seta al
    ret
.p2align 4
mm:
    vminmaxpd zmm0, zmm0, zmm1, 3
    ret
.p2align 4
cvt:
    vcvttsd2sis rax, xmm0
    ret
.p2align 4
mvrs:
    vmovrsd zmm0 {k1} {z}, zmmword ptr [rdi + 64]
    vmovdqu32 zmmword ptr [rsi], zmm0
    vzeroupper
    ret
