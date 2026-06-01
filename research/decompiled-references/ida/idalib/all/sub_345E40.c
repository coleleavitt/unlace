int sub_345E40()
{
  size_t v0; // rbx
  __m128i si128; // xmm1
  size_t v2; // rax
  size_t v3; // rax
  __int64 v4; // r9
  size_t v5; // rax
  __int64 v6; // r9
  size_t v7; // r14
  __m128i v8; // xmm1
  size_t v9; // rax
  size_t v10; // r13
  size_t v11; // rax
  size_t v12; // r13
  __m128i v13; // xmm0
  size_t v14; // rax
  size_t v15; // rbx
  size_t v16; // rax
  size_t v17; // r13
  __m128i v18; // xmm2
  size_t v19; // rax
  size_t v20; // r13
  __m128i v21; // xmm2
  size_t v22; // rax
  __m128 v24; // [rsp+0h] [rbp-138h] BYREF
  __m128i v25; // [rsp+10h] [rbp-128h] BYREF
  __int64 (__fastcall **v26)(); // [rsp+28h] [rbp-110h]
  int v27; // [rsp+30h] [rbp-108h] BYREF
  int v28; // [rsp+34h] [rbp-104h] BYREF
  int *v29; // [rsp+38h] [rbp-100h] BYREF
  _QWORD v30[2]; // [rsp+40h] [rbp-F8h] BYREF
  void *ptr; // [rsp+50h] [rbp-E8h] BYREF
  __int64 v32; // [rsp+58h] [rbp-E0h]
  _QWORD v33[2]; // [rsp+60h] [rbp-D8h] BYREF
  int v34; // [rsp+70h] [rbp-C8h]
  const char *v35; // [rsp+78h] [rbp-C0h]
  __int64 v36; // [rsp+80h] [rbp-B8h]
  const char *v37; // [rsp+88h] [rbp-B0h]
  __int64 v38; // [rsp+90h] [rbp-A8h]
  int v39; // [rsp+98h] [rbp-A0h]
  const char *v40; // [rsp+A0h] [rbp-98h]
  __int64 v41; // [rsp+A8h] [rbp-90h]
  const char *v42; // [rsp+B0h] [rbp-88h]
  __int64 v43; // [rsp+B8h] [rbp-80h]
  int v44; // [rsp+C0h] [rbp-78h]
  const char *v45; // [rsp+C8h] [rbp-70h]
  __int64 v46; // [rsp+D0h] [rbp-68h]

  v24 = _mm_loadh_ps((const double *)off_2C78368);
  v0 = j__strlen("Enable LSR phi elimination");
  sub_200F820(&qword_2D066A0, 0, 0);
  si128 = _mm_load_si128((const __m128i *)&v24);
  word_2D06728 = 0;
  xmmword_2D06748 = (__int128)si128;
  qword_2D06720 = (__int64)off_2C714E8;
  v26 = off_2C714E8;
  qword_2D066A0 = (__int64)off_2C75848;
  v25.m128i_i64[0] = (__int64)off_2C75848;
  byte_2D06718 = 0;
  qword_2D06730 = (__int64)off_2BEAB08;
  v2 = j__strlen("enable-lsr-phielim");
  sub_2217250(&qword_2D066A0, "enable-lsr-phielim", v2);
  word_2D06728 = 257;
  qword_2D066C8 = v0;
  byte_2D06718 = 1;
  byte_2D066AA = byte_2D066AA & 0x9F | 0x20;
  qword_2D066C0 = (__int64)"Enable LSR phi elimination";
  sub_2218140(&qword_2D066A0);
  __cxa_atexit(sub_200E190, &qword_2D066A0, &off_2B25620);
  v3 = j__strlen("Add instruction count to a LSR cost model");
  LOBYTE(v28) = 1;
  v32 = v3;
  ptr = (void *)"Add instruction count to a LSR cost model";
  v30[0] = &v28;
  LODWORD(v29) = 1;
  sub_21EC320(&unk_2D065E0, "lsr-insns-cost", &v29, v30, &ptr, v4, v24.m128_u64[0], v24.m128_u64[1]);
  __cxa_atexit(sub_200E190, &unk_2D065E0, &off_2B25620);
  v5 = j__strlen("Narrow LSR complex solution using expectation of registers number");
  LOBYTE(v28) = 0;
  v32 = v5;
  ptr = (void *)"Narrow LSR complex solution using expectation of registers number";
  v30[0] = &v28;
  LODWORD(v29) = 1;
  sub_21EC320(&unk_2D06520, "lsr-exp-narrow", &v29, v30, &ptr, v6, v24.m128_u64[0], v24.m128_u64[1]);
  __cxa_atexit(sub_200E190, &unk_2D06520, &off_2B25620);
  v7 = j__strlen("Narrow LSR search space by filtering non-optimal formulae with the same ScaledReg and Scale");
  sub_200F820(&qword_2D06460, 0, 0);
  v8 = _mm_load_si128((const __m128i *)&v24);
  word_2D064E8 = 0;
  qword_2D064E0 = (__int64)v26;
  xmmword_2D06508 = (__int128)v8;
  qword_2D06460 = v25.m128i_i64[0];
  byte_2D064D8 = 0;
  qword_2D064F0 = (__int64)off_2BEAB08;
  v9 = j__strlen("lsr-filter-same-scaled-reg");
  sub_2217250(&qword_2D06460, "lsr-filter-same-scaled-reg", v9);
  word_2D064E8 = 257;
  qword_2D06488 = v7;
  byte_2D064D8 = 1;
  byte_2D0646A = byte_2D0646A & 0x9F | 0x20;
  qword_2D06480 = (__int64)"Narrow LSR search space by filtering non-optimal formulae with the same ScaledReg and Scale";
  sub_2218140(&qword_2D06460);
  __cxa_atexit(sub_200E190, &qword_2D06460, &off_2B25620);
  ptr = v33;
  v33[0] = "none";
  v35 = "Don't prefer any addressing mode";
  v37 = "preindexed";
  v40 = "Prefer pre-indexed addressing mode";
  v42 = "postindexed";
  v45 = "Prefer post-indexed addressing mode";
  v33[1] = 4;
  v34 = 2;
  v36 = 32;
  v38 = 10;
  v39 = 0;
  v41 = 34;
  v43 = 11;
  v44 = 1;
  v46 = 35;
  v32 = 0x400000003LL;
  v30[1] = j__strlen("A flag that overrides the target's preferred addressing mode.");
  v30[0] = "A flag that overrides the target's preferred addressing mode.";
  v28 = 2;
  v29 = &v28;
  v27 = 1;
  sub_21EC400(&unk_2D06200, "lsr-preferred-addressing-mode", &v27, &v29, v30, &ptr);
  if ( ptr != v33 )
    free(ptr);
  __cxa_atexit(sub_21EC280, &unk_2D06200, &off_2B25620);
  v10 = j__strlen("LSR search space complexity limit");
  sub_200F820(&qword_2D06140, 0, 0);
  dword_2D061B8 = 0;
  dword_2D061C8 = 0;
  v25 = (__m128i)_mm_loadh_ps((const double *)off_2C784F8);
  xmmword_2D061E8 = (__int128)v25;
  qword_2D061C0 = (__int64)off_2C712D0;
  qword_2D06140 = (__int64)off_2C75710;
  qword_2D061D0 = (__int64)off_2BEAB98;
  byte_2D061CC = 0;
  v11 = j__strlen("lsr-complexity-limit");
  sub_2217250(&qword_2D06140, "lsr-complexity-limit", v11);
  qword_2D06168 = v10;
  dword_2D061B8 = 0xFFFF;
  byte_2D061CC = 1;
  dword_2D061C8 = 0xFFFF;
  byte_2D0614A = byte_2D0614A & 0x9F | 0x20;
  qword_2D06160 = (__int64)"LSR search space complexity limit";
  sub_2218140(&qword_2D06140);
  __cxa_atexit(sub_1FED260, &qword_2D06140, &off_2B25620);
  v12 = j__strlen("The limit on recursion depth for LSRs setup cost");
  sub_200F820(&qword_2D06080, 0, 0);
  v13 = _mm_load_si128(&v25);
  qword_2D06100 = (__int64)off_2C712D0;
  qword_2D06080 = (__int64)off_2C75710;
  xmmword_2D06128 = (__int128)v13;
  qword_2D06110 = (__int64)off_2BEAB98;
  dword_2D060F8 = 0;
  dword_2D06108 = 0;
  byte_2D0610C = 0;
  v14 = j__strlen("lsr-setupcost-depth-limit");
  sub_2217250(&qword_2D06080, "lsr-setupcost-depth-limit", v14);
  qword_2D060A8 = v12;
  dword_2D060F8 = 7;
  byte_2D0610C = 1;
  dword_2D06108 = 7;
  byte_2D0608A = byte_2D0608A & 0x9F | 0x20;
  qword_2D060A0 = (__int64)"The limit on recursion depth for LSRs setup cost";
  sub_2218140(&qword_2D06080);
  __cxa_atexit(sub_1FED260, &qword_2D06080, &off_2B25620);
  v15 = j__strlen("Attempt to drop solution if it is less profitable");
  sub_200F820(&qword_2D05FC0, 0, 0);
  dword_2D06038 = 0;
  dword_2D06048 = 0;
  qword_2D06040 = (__int64)off_2BEAAC8;
  xmmword_2D06068 = (__int128)_mm_loadh_ps((const double *)off_2C77B30);
  byte_2D0604C = 0;
  qword_2D05FC0 = (__int64)off_2C72A80;
  qword_2D06050 = (__int64)off_2BEAB38;
  v16 = j__strlen("lsr-drop-solution");
  sub_2217250(&qword_2D05FC0, "lsr-drop-solution", v16);
  qword_2D05FE8 = v15;
  byte_2D05FCA = byte_2D05FCA & 0x9F | 0x20;
  qword_2D05FE0 = (__int64)"Attempt to drop solution if it is less profitable";
  sub_2218140(&qword_2D05FC0);
  __cxa_atexit(sub_20FE1F0, &qword_2D05FC0, &off_2B25620);
  v17 = j__strlen("Enable analysis of vscale-relative immediates in LSR");
  sub_200F820(&qword_2D05F00, 0, 0);
  v18 = _mm_load_si128((const __m128i *)&v24);
  word_2D05F88 = 0;
  xmmword_2D05FA8 = (__int128)v18;
  byte_2D05F78 = 0;
  qword_2D05F80 = (__int64)off_2C714E8;
  qword_2D05F00 = (__int64)off_2C75848;
  qword_2D05F90 = (__int64)off_2BEAB08;
  v19 = j__strlen("lsr-enable-vscale-immediates");
  sub_2217250(&qword_2D05F00, "lsr-enable-vscale-immediates", v19);
  word_2D05F88 = 257;
  qword_2D05F28 = v17;
  byte_2D05F78 = 1;
  byte_2D05F0A = byte_2D05F0A & 0x9F | 0x20;
  qword_2D05F20 = (__int64)"Enable analysis of vscale-relative immediates in LSR";
  sub_2218140(&qword_2D05F00);
  __cxa_atexit(sub_200E190, &qword_2D05F00, &off_2B25620);
  v20 = j__strlen("Avoid using scaled registers with vscale-relative addressing");
  sub_200F820(&qword_2D05E40, 0, 0);
  v21 = _mm_load_si128((const __m128i *)&v24);
  word_2D05EC8 = 0;
  xmmword_2D05EE8 = (__int128)v21;
  qword_2D05EC0 = (__int64)off_2C714E8;
  qword_2D05E40 = (__int64)off_2C75848;
  qword_2D05ED0 = (__int64)off_2BEAB08;
  byte_2D05EB8 = 0;
  v22 = j__strlen("lsr-drop-scaled-reg-for-vscale");
  sub_2217250(&qword_2D05E40, "lsr-drop-scaled-reg-for-vscale", v22);
  word_2D05EC8 = 257;
  qword_2D05E68 = v20;
  byte_2D05EB8 = 1;
  byte_2D05E4A = byte_2D05E4A & 0x9F | 0x20;
  qword_2D05E60 = (__int64)"Avoid using scaled registers with vscale-relative addressing";
  sub_2218140(&qword_2D05E40);
  return __cxa_atexit(sub_200E190, &qword_2D05E40, &off_2B25620);
}
