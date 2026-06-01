int sub_2FCC60()
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

  v25 = _mm_loadh_ps((const double *)&off_2C78250);
  v0 = j__strlen("Sets the SIMD width. Zero is autoselect.");
  sub_200F820(&qword_2CDFD60, 0, 0);
  si128 = _mm_load_si128((const __m128i *)&v25);
  qword_2CDFDD8 = 0;
  xmmword_2CDFE08 = (__int128)si128;
  qword_2CDFDE0 = (__int64)off_2C712D0;
  qword_2CDFD60 = (__int64)off_2C71CA8;
  byte_2CDFDEC = 0;
  qword_2CDFDF0 = (__int64)off_2BEAB98;
  v2 = j__strlen("force-vector-width");
  sub_2217250(&qword_2CDFD60, "force-vector-width", v2);
  qword_2CDFD88 = v0;
  byte_2CDFD6A = byte_2CDFD6A & 0x9F | 0x20;
  qword_2CDFD80 = (__int64)"Sets the SIMD width. Zero is autoselect.";
  if ( qword_2CDFDD8 )
  {
    sub_2015530(&qword_2CDFD60);
  }
  else
  {
    byte_2CDFDEC = 1;
    qword_2CDFDD8 = (__int64)dword_2CDFD58;
    dword_2CDFDE8 = dword_2CDFD58[0];
  }
  sub_2218140(&qword_2CDFD60);
  __cxa_atexit(sub_20156F0, &qword_2CDFD60, &off_2B25620);
  v3 = j__strlen("Sets the vectorization interleave count. Zero is autoselect.");
  sub_200F820(&qword_2CDFCA0, 0, 0);
  v4 = _mm_load_si128((const __m128i *)&v25);
  qword_2CDFD20 = (__int64)off_2C712D0;
  qword_2CDFCA0 = (__int64)off_2C71CA8;
  xmmword_2CDFD48 = (__int128)v4;
  qword_2CDFD18 = 0;
  byte_2CDFD2C = 0;
  qword_2CDFD30 = (__int64)off_2BEAB98;
  v5 = j__strlen("force-vector-interleave");
  sub_2217250(&qword_2CDFCA0, "force-vector-interleave", v5);
  qword_2CDFCC8 = v3;
  byte_2CDFCAA = byte_2CDFCAA & 0x9F | 0x20;
  qword_2CDFCC0 = (__int64)"Sets the vectorization interleave count. Zero is autoselect.";
  if ( qword_2CDFD18 )
  {
    sub_2015530(&qword_2CDFCA0);
  }
  else
  {
    byte_2CDFD2C = 1;
    qword_2CDFD18 = (__int64)dword_2CDFC98;
    dword_2CDFD28 = dword_2CDFC98[0];
  }
  sub_2218140(&qword_2CDFCA0);
  __cxa_atexit(sub_20156F0, &qword_2CDFCA0, &off_2B25620);
  v6 = j__strlen(
         "When performing memory disambiguation checks at runtime do not generate more than this number of comparisons (default = 8).");
  sub_200F820(&qword_2CDFBE0, 0, 0);
  v7 = _mm_load_si128((const __m128i *)&v25);
  qword_2CDFC60 = (__int64)off_2C712D0;
  qword_2CDFBE0 = (__int64)off_2C71CA8;
  xmmword_2CDFC88 = (__int128)v7;
  qword_2CDFC58 = 0;
  byte_2CDFC6C = 0;
  qword_2CDFC70 = (__int64)off_2BEAB98;
  v8 = j__strlen("runtime-memory-check-threshold");
  sub_2217250(&qword_2CDFBE0, "runtime-memory-check-threshold", v8);
  qword_2CDFC08 = v6;
  byte_2CDFBEA = byte_2CDFBEA & 0x9F | 0x20;
  qword_2CDFC00 = (__int64)"When performing memory disambiguation checks at runtime do not generate more than this number"
                           " of comparisons (default = 8).";
  if ( qword_2CDFC58 )
    sub_2015530(&qword_2CDFBE0);
  else
    qword_2CDFC58 = (__int64)&unk_2CDFBD8;
  *(_DWORD *)qword_2CDFC58 = 8;
  byte_2CDFC6C = 1;
  dword_2CDFC68 = 8;
  sub_2218140(&qword_2CDFBE0);
  __cxa_atexit(sub_20156F0, &qword_2CDFBE0, &off_2B25620);
  v9 = j__strlen("Maximum number of comparisons done when trying to merge runtime memory checks. (default = 100)");
  sub_200F820(&qword_2CDFB20, 0, 0);
  qword_2CDFBB0 = (__int64)off_2BEAB98;
  dword_2CDFB98 = 0;
  xmmword_2CDFBC8 = (__int128)_mm_loadh_ps((const double *)off_2C784F8);
  v25 = (__m128)xmmword_2CDFBC8;
  dword_2CDFBA8 = 0;
  byte_2CDFBAC = 0;
  qword_2CDFBA0 = (__int64)off_2C712D0;
  qword_2CDFB20 = (__int64)off_2C75710;
  v10 = j__strlen("memory-check-merge-threshold");
  sub_2217250(&qword_2CDFB20, "memory-check-merge-threshold", v10);
  qword_2CDFB48 = v9;
  dword_2CDFB98 = 100;
  byte_2CDFBAC = 1;
  dword_2CDFBA8 = 100;
  byte_2CDFB2A = byte_2CDFB2A & 0x9F | 0x20;
  qword_2CDFB40 = (__int64)"Maximum number of comparisons done when trying to merge runtime memory checks. (default = 100)";
  sub_2218140(&qword_2CDFB20);
  __cxa_atexit(sub_1FED260, &qword_2CDFB20, &off_2B25620);
  v11 = j__strlen("Maximum number of dependences collected by loop-access analysis (default = 100)");
  sub_200F820(&qword_2CDFA60, 0, 0);
  v12 = _mm_load_si128((const __m128i *)&v25);
  qword_2CDFAF0 = (__int64)off_2BEAB98;
  dword_2CDFAD8 = 0;
  xmmword_2CDFB08 = (__int128)v12;
  v27[0] = v12;
  dword_2CDFAE8 = 0;
  byte_2CDFAEC = 0;
  qword_2CDFAE0 = (__int64)off_2C712D0;
  qword_2CDFA60 = (__int64)off_2C75710;
  v13 = j__strlen("max-dependences");
  sub_2217250(&qword_2CDFA60, "max-dependences", v13);
  qword_2CDFA88 = v11;
  dword_2CDFAD8 = 100;
  byte_2CDFAEC = 1;
  dword_2CDFAE8 = 100;
  byte_2CDFA6A = byte_2CDFA6A & 0x9F | 0x20;
  qword_2CDFA80 = (__int64)"Maximum number of dependences collected by loop-access analysis (default = 100)";
  sub_2218140(&qword_2CDFA60);
  __cxa_atexit(sub_1FED260, &qword_2CDFA60, &off_2B25620);
  v25.m128_u64[0] = j__strlen("Enable symbolic stride memory access versioning");
  sub_200F820(&qword_2CDF9A0, 0, 0);
  word_2CDFA28 = 0;
  byte_2CDFA18 = 0;
  xmmword_2CDFA48 = (__int128)_mm_loadh_ps((const double *)off_2C78368);
  v26 = xmmword_2CDFA48;
  qword_2CDF9A0 = (__int64)off_2C75848;
  qword_2CDFA20 = (__int64)off_2C714E8;
  qword_2CDFA30 = (__int64)off_2BEAB08;
  v14 = j__strlen("enable-mem-access-versioning");
  sub_2217250(&qword_2CDF9A0, "enable-mem-access-versioning", v14);
  word_2CDFA28 = 257;
  byte_2CDFA18 = 1;
  qword_2CDF9C8 = v25.m128_u64[0];
  byte_2CDF9AA = byte_2CDF9AA & 0x9F | 0x20;
  qword_2CDF9C0 = (__int64)"Enable symbolic stride memory access versioning";
  sub_2218140(&qword_2CDF9A0);
  __cxa_atexit(sub_200E190, &qword_2CDF9A0, &off_2B25620);
  v25.m128_u64[0] = j__strlen("Enable conflict detection in loop-access analysis");
  sub_200F820(&qword_2CDF8E0, 0, 0);
  v15 = _mm_load_si128((const __m128i *)&v26);
  word_2CDF968 = 0;
  xmmword_2CDF988 = (__int128)v15;
  qword_2CDF8E0 = (__int64)off_2C75848;
  byte_2CDF958 = 0;
  qword_2CDF960 = (__int64)off_2C714E8;
  qword_2CDF970 = (__int64)off_2BEAB08;
  v16 = j__strlen("store-to-load-forwarding-conflict-detection");
  sub_2217250(&qword_2CDF8E0, "store-to-load-forwarding-conflict-detection", v16);
  word_2CDF968 = 257;
  qword_2CDF908 = v25.m128_u64[0];
  byte_2CDF958 = 1;
  byte_2CDF8EA = byte_2CDF8EA & 0x9F | 0x20;
  qword_2CDF900 = (__int64)"Enable conflict detection in loop-access analysis";
  sub_2218140(&qword_2CDF8E0);
  __cxa_atexit(sub_200E190, &qword_2CDF8E0, &off_2B25620);
  v25.m128_u64[0] = j__strlen("Maximum recursion depth when finding forked SCEVs (default = 5)");
  sub_200F820(&qword_2CDF820, 0, 0);
  v17 = _mm_load_si128(v27);
  qword_2CDF8B0 = (__int64)off_2BEAB98;
  dword_2CDF898 = 0;
  xmmword_2CDF8C8 = (__int128)v17;
  dword_2CDF8A8 = 0;
  byte_2CDF8AC = 0;
  qword_2CDF8A0 = (__int64)off_2C712D0;
  qword_2CDF820 = (__int64)off_2C75710;
  v18 = j__strlen("max-forked-scev-depth");
  sub_2217250(&qword_2CDF820, "max-forked-scev-depth", v18);
  dword_2CDF898 = 5;
  qword_2CDF848 = v25.m128_u64[0];
  byte_2CDF8AC = 1;
  byte_2CDF82A = byte_2CDF82A & 0x9F | 0x20;
  qword_2CDF840 = (__int64)"Maximum recursion depth when finding forked SCEVs (default = 5)";
  dword_2CDF8A8 = 5;
  sub_2218140(&qword_2CDF820);
  __cxa_atexit(sub_1FED260, &qword_2CDF820, &off_2B25620);
  v19 = j__strlen("Speculate that non-constant strides are unit in LAA");
  sub_200F820(&qword_2CDF760, 0, 0);
  v20 = _mm_load_si128((const __m128i *)&v26);
  word_2CDF7E8 = 0;
  xmmword_2CDF808 = (__int128)v20;
  qword_2CDF760 = (__int64)off_2C75848;
  byte_2CDF7D8 = 0;
  qword_2CDF7E0 = (__int64)off_2C714E8;
  qword_2CDF7F0 = (__int64)off_2BEAB08;
  v21 = j__strlen("laa-speculate-unit-stride");
  sub_2217250(&qword_2CDF760, "laa-speculate-unit-stride", v21);
  word_2CDF7E8 = 257;
  qword_2CDF788 = v19;
  byte_2CDF7D8 = 1;
  byte_2CDF76A = byte_2CDF76A & 0x9F | 0x20;
  qword_2CDF780 = (__int64)"Speculate that non-constant strides are unit in LAA";
  sub_2218140(&qword_2CDF760);
  __cxa_atexit(sub_200E190, &qword_2CDF760, &off_2B25620);
  v22 = j__strlen("Hoist inner loop runtime memory checks to outer loop if possible");
  sub_200F820(&qword_2CDF6A0, 0, 0);
  qword_2CDF718 = 0;
  byte_2CDF729 = 0;
  xmmword_2CDF748 = (__int128)_mm_loadh_ps((const double *)off_2C778E8);
  qword_2CDF720 = (__int64)off_2C714E8;
  qword_2CDF6A0 = (__int64)off_2C71D10;
  qword_2CDF730 = (__int64)off_2BEAB08;
  v23 = j__strlen("hoist-runtime-checks");
  sub_2217250(&qword_2CDF6A0, "hoist-runtime-checks", v23);
  qword_2CDF6C8 = v22;
  byte_2CDF6AA = byte_2CDF6AA & 0x9F | 0x20;
  qword_2CDF6C0 = (__int64)"Hoist inner loop runtime memory checks to outer loop if possible";
  if ( qword_2CDF718 )
    sub_2015530(&qword_2CDF6A0);
  else
    qword_2CDF718 = (__int64)&unk_2CDF698;
  *(_BYTE *)qword_2CDF718 = 1;
  unk_2CDF728 = 257;
  sub_2218140(&qword_2CDF6A0);
  return __cxa_atexit(sub_2015670, &qword_2CDF6A0, &off_2B25620);
}
