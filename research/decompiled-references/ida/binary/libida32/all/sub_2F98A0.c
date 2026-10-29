int sub_2F98A0()
{
  size_t v0; // r13
  __m128i si128; // xmm2
  size_t v2; // rax
  size_t v3; // r13
  __m128i v4; // xmm3
  size_t v5; // rax
  size_t v6; // r13
  __m128i v7; // xmm4
  size_t v8; // rax
  size_t v9; // r12
  size_t v10; // rax
  size_t v11; // rbx
  __m128i v12; // xmm1
  size_t v13; // rax
  size_t v14; // rax
  __m128i v15; // xmm0
  size_t v16; // rax
  __m128i v17; // xmm1
  size_t v18; // rax
  size_t v19; // r13
  __m128i v20; // xmm0
  size_t v21; // rax
  size_t v22; // r12
  size_t v23; // rax
  __m128 v25; // [rsp+0h] [rbp-68h] BYREF
  __int128 v26; // [rsp+10h] [rbp-58h] BYREF
  __m128i v27[4]; // [rsp+20h] [rbp-48h] BYREF

  v25 = _mm_loadh_ps((const double *)&off_2C4E250);
  v0 = j__strlen("Sets the SIMD width. Zero is autoselect.");
  sub_1FEBAE0(&qword_2CB5E40, 0, 0);
  si128 = _mm_load_si128((const __m128i *)&v25);
  qword_2CB5EB8 = 0;
  xmmword_2CB5EE8 = (__int128)si128;
  qword_2CB5EC0 = (__int64)off_2C472D0;
  qword_2CB5E40 = (__int64)off_2C47CA8;
  byte_2CB5ECC = 0;
  qword_2CB5ED0 = (__int64)off_2BC0BF8;
  v2 = j__strlen("force-vector-width");
  sub_21F3510(&qword_2CB5E40, "force-vector-width", v2);
  qword_2CB5E68 = v0;
  byte_2CB5E4A = byte_2CB5E4A & 0x9F | 0x20;
  qword_2CB5E60 = (__int64)"Sets the SIMD width. Zero is autoselect.";
  if ( qword_2CB5EB8 )
  {
    sub_1FF17F0(&qword_2CB5E40);
  }
  else
  {
    byte_2CB5ECC = 1;
    qword_2CB5EB8 = (__int64)dword_2CB5E38;
    dword_2CB5EC8 = dword_2CB5E38[0];
  }
  sub_21F4400(&qword_2CB5E40);
  __cxa_atexit(sub_1FF19B0, &qword_2CB5E40, &off_2AFC540);
  v3 = j__strlen("Sets the vectorization interleave count. Zero is autoselect.");
  sub_1FEBAE0(&qword_2CB5D80, 0, 0);
  v4 = _mm_load_si128((const __m128i *)&v25);
  qword_2CB5E00 = (__int64)off_2C472D0;
  qword_2CB5D80 = (__int64)off_2C47CA8;
  xmmword_2CB5E28 = (__int128)v4;
  qword_2CB5DF8 = 0;
  byte_2CB5E0C = 0;
  qword_2CB5E10 = (__int64)off_2BC0BF8;
  v5 = j__strlen("force-vector-interleave");
  sub_21F3510(&qword_2CB5D80, "force-vector-interleave", v5);
  qword_2CB5DA8 = v3;
  byte_2CB5D8A = byte_2CB5D8A & 0x9F | 0x20;
  qword_2CB5DA0 = (__int64)"Sets the vectorization interleave count. Zero is autoselect.";
  if ( qword_2CB5DF8 )
  {
    sub_1FF17F0(&qword_2CB5D80);
  }
  else
  {
    byte_2CB5E0C = 1;
    qword_2CB5DF8 = (__int64)dword_2CB5D78;
    dword_2CB5E08 = dword_2CB5D78[0];
  }
  sub_21F4400(&qword_2CB5D80);
  __cxa_atexit(sub_1FF19B0, &qword_2CB5D80, &off_2AFC540);
  v6 = j__strlen(
         "When performing memory disambiguation checks at runtime do not generate more than this number of comparisons (default = 8).");
  sub_1FEBAE0(&qword_2CB5CC0, 0, 0);
  v7 = _mm_load_si128((const __m128i *)&v25);
  qword_2CB5D40 = (__int64)off_2C472D0;
  qword_2CB5CC0 = (__int64)off_2C47CA8;
  xmmword_2CB5D68 = (__int128)v7;
  qword_2CB5D38 = 0;
  byte_2CB5D4C = 0;
  qword_2CB5D50 = (__int64)off_2BC0BF8;
  v8 = j__strlen("runtime-memory-check-threshold");
  sub_21F3510(&qword_2CB5CC0, "runtime-memory-check-threshold", v8);
  qword_2CB5CE8 = v6;
  byte_2CB5CCA = byte_2CB5CCA & 0x9F | 0x20;
  qword_2CB5CE0 = (__int64)"When performing memory disambiguation checks at runtime do not generate more than this number"
                           " of comparisons (default = 8).";
  if ( qword_2CB5D38 )
    sub_1FF17F0(&qword_2CB5CC0);
  else
    qword_2CB5D38 = (__int64)&unk_2CB5CB8;
  *(_DWORD *)qword_2CB5D38 = 8;
  byte_2CB5D4C = 1;
  dword_2CB5D48 = 8;
  sub_21F4400(&qword_2CB5CC0);
  __cxa_atexit(sub_1FF19B0, &qword_2CB5CC0, &off_2AFC540);
  v9 = j__strlen("Maximum number of comparisons done when trying to merge runtime memory checks. (default = 100)");
  sub_1FEBAE0(&qword_2CB5C00, 0, 0);
  qword_2CB5C90 = (__int64)off_2BC0BF8;
  dword_2CB5C78 = 0;
  xmmword_2CB5CA8 = (__int128)_mm_loadh_ps((const double *)off_2C4E4F8);
  v25 = (__m128)xmmword_2CB5CA8;
  dword_2CB5C88 = 0;
  byte_2CB5C8C = 0;
  qword_2CB5C80 = (__int64)off_2C472D0;
  qword_2CB5C00 = (__int64)off_2C4B710;
  v10 = j__strlen("memory-check-merge-threshold");
  sub_21F3510(&qword_2CB5C00, "memory-check-merge-threshold", v10);
  qword_2CB5C28 = v9;
  dword_2CB5C78 = 100;
  byte_2CB5C8C = 1;
  dword_2CB5C88 = 100;
  byte_2CB5C0A = byte_2CB5C0A & 0x9F | 0x20;
  qword_2CB5C20 = (__int64)"Maximum number of comparisons done when trying to merge runtime memory checks. (default = 100)";
  sub_21F4400(&qword_2CB5C00);
  __cxa_atexit(sub_1FC9520, &qword_2CB5C00, &off_2AFC540);
  v11 = j__strlen("Maximum number of dependences collected by loop-access analysis (default = 100)");
  sub_1FEBAE0(&qword_2CB5B40, 0, 0);
  v12 = _mm_load_si128((const __m128i *)&v25);
  qword_2CB5BD0 = (__int64)off_2BC0BF8;
  dword_2CB5BB8 = 0;
  xmmword_2CB5BE8 = (__int128)v12;
  v27[0] = v12;
  dword_2CB5BC8 = 0;
  byte_2CB5BCC = 0;
  qword_2CB5BC0 = (__int64)off_2C472D0;
  qword_2CB5B40 = (__int64)off_2C4B710;
  v13 = j__strlen("max-dependences");
  sub_21F3510(&qword_2CB5B40, "max-dependences", v13);
  qword_2CB5B68 = v11;
  dword_2CB5BB8 = 100;
  byte_2CB5BCC = 1;
  dword_2CB5BC8 = 100;
  byte_2CB5B4A = byte_2CB5B4A & 0x9F | 0x20;
  qword_2CB5B60 = (__int64)"Maximum number of dependences collected by loop-access analysis (default = 100)";
  sub_21F4400(&qword_2CB5B40);
  __cxa_atexit(sub_1FC9520, &qword_2CB5B40, &off_2AFC540);
  v25.m128_u64[0] = j__strlen("Enable symbolic stride memory access versioning");
  sub_1FEBAE0(&qword_2CB5A80, 0, 0);
  word_2CB5B08 = 0;
  byte_2CB5AF8 = 0;
  xmmword_2CB5B28 = (__int128)_mm_loadh_ps((const double *)off_2C4E368);
  v26 = xmmword_2CB5B28;
  qword_2CB5A80 = (__int64)off_2C4B848;
  qword_2CB5B00 = (__int64)off_2C474E8;
  qword_2CB5B10 = (__int64)off_2BC0B68;
  v14 = j__strlen("enable-mem-access-versioning");
  sub_21F3510(&qword_2CB5A80, "enable-mem-access-versioning", v14);
  word_2CB5B08 = 257;
  byte_2CB5AF8 = 1;
  qword_2CB5AA8 = v25.m128_u64[0];
  byte_2CB5A8A = byte_2CB5A8A & 0x9F | 0x20;
  qword_2CB5AA0 = (__int64)"Enable symbolic stride memory access versioning";
  sub_21F4400(&qword_2CB5A80);
  __cxa_atexit(sub_1FEA450, &qword_2CB5A80, &off_2AFC540);
  v25.m128_u64[0] = j__strlen("Enable conflict detection in loop-access analysis");
  sub_1FEBAE0(&qword_2CB59C0, 0, 0);
  v15 = _mm_load_si128((const __m128i *)&v26);
  word_2CB5A48 = 0;
  xmmword_2CB5A68 = (__int128)v15;
  qword_2CB59C0 = (__int64)off_2C4B848;
  byte_2CB5A38 = 0;
  qword_2CB5A40 = (__int64)off_2C474E8;
  qword_2CB5A50 = (__int64)off_2BC0B68;
  v16 = j__strlen("store-to-load-forwarding-conflict-detection");
  sub_21F3510(&qword_2CB59C0, "store-to-load-forwarding-conflict-detection", v16);
  word_2CB5A48 = 257;
  qword_2CB59E8 = v25.m128_u64[0];
  byte_2CB5A38 = 1;
  byte_2CB59CA = byte_2CB59CA & 0x9F | 0x20;
  qword_2CB59E0 = (__int64)"Enable conflict detection in loop-access analysis";
  sub_21F4400(&qword_2CB59C0);
  __cxa_atexit(sub_1FEA450, &qword_2CB59C0, &off_2AFC540);
  v25.m128_u64[0] = j__strlen("Maximum recursion depth when finding forked SCEVs (default = 5)");
  sub_1FEBAE0(&qword_2CB5900, 0, 0);
  v17 = _mm_load_si128(v27);
  qword_2CB5990 = (__int64)off_2BC0BF8;
  dword_2CB5978 = 0;
  xmmword_2CB59A8 = (__int128)v17;
  dword_2CB5988 = 0;
  byte_2CB598C = 0;
  qword_2CB5980 = (__int64)off_2C472D0;
  qword_2CB5900 = (__int64)off_2C4B710;
  v18 = j__strlen("max-forked-scev-depth");
  sub_21F3510(&qword_2CB5900, "max-forked-scev-depth", v18);
  dword_2CB5978 = 5;
  qword_2CB5928 = v25.m128_u64[0];
  byte_2CB598C = 1;
  byte_2CB590A = byte_2CB590A & 0x9F | 0x20;
  qword_2CB5920 = (__int64)"Maximum recursion depth when finding forked SCEVs (default = 5)";
  dword_2CB5988 = 5;
  sub_21F4400(&qword_2CB5900);
  __cxa_atexit(sub_1FC9520, &qword_2CB5900, &off_2AFC540);
  v19 = j__strlen("Speculate that non-constant strides are unit in LAA");
  sub_1FEBAE0(&qword_2CB5840, 0, 0);
  v20 = _mm_load_si128((const __m128i *)&v26);
  word_2CB58C8 = 0;
  xmmword_2CB58E8 = (__int128)v20;
  qword_2CB5840 = (__int64)off_2C4B848;
  byte_2CB58B8 = 0;
  qword_2CB58C0 = (__int64)off_2C474E8;
  qword_2CB58D0 = (__int64)off_2BC0B68;
  v21 = j__strlen("laa-speculate-unit-stride");
  sub_21F3510(&qword_2CB5840, "laa-speculate-unit-stride", v21);
  word_2CB58C8 = 257;
  qword_2CB5868 = v19;
  byte_2CB58B8 = 1;
  byte_2CB584A = byte_2CB584A & 0x9F | 0x20;
  qword_2CB5860 = (__int64)"Speculate that non-constant strides are unit in LAA";
  sub_21F4400(&qword_2CB5840);
  __cxa_atexit(sub_1FEA450, &qword_2CB5840, &off_2AFC540);
  v22 = j__strlen("Hoist inner loop runtime memory checks to outer loop if possible");
  sub_1FEBAE0(&qword_2CB5780, 0, 0);
  qword_2CB57F8 = 0;
  byte_2CB5809 = 0;
  xmmword_2CB5828 = (__int128)_mm_loadh_ps((const double *)off_2C4D8E8);
  qword_2CB5800 = (__int64)off_2C474E8;
  qword_2CB5780 = (__int64)off_2C47D10;
  qword_2CB5810 = (__int64)off_2BC0B68;
  v23 = j__strlen("hoist-runtime-checks");
  sub_21F3510(&qword_2CB5780, "hoist-runtime-checks", v23);
  qword_2CB57A8 = v22;
  byte_2CB578A = byte_2CB578A & 0x9F | 0x20;
  qword_2CB57A0 = (__int64)"Hoist inner loop runtime memory checks to outer loop if possible";
  if ( qword_2CB57F8 )
    sub_1FF17F0(&qword_2CB5780);
  else
    qword_2CB57F8 = (__int64)&unk_2CB5778;
  *(_BYTE *)qword_2CB57F8 = 1;
  unk_2CB5808 = 257;
  sub_21F4400(&qword_2CB5780);
  return __cxa_atexit(sub_1FF1930, &qword_2CB5780, &off_2AFC540);
}

