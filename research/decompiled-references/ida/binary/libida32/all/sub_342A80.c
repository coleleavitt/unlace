int sub_342A80()
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

  v24 = _mm_loadh_ps((const double *)off_2C4E368);
  v0 = j__strlen("Enable LSR phi elimination");
  sub_1FEBAE0(&qword_2CDC780, 0, 0);
  si128 = _mm_load_si128((const __m128i *)&v24);
  word_2CDC808 = 0;
  xmmword_2CDC828 = (__int128)si128;
  qword_2CDC800 = (__int64)off_2C474E8;
  v26 = off_2C474E8;
  qword_2CDC780 = (__int64)off_2C4B848;
  v25.m128i_i64[0] = (__int64)off_2C4B848;
  byte_2CDC7F8 = 0;
  qword_2CDC810 = (__int64)off_2BC0B68;
  v2 = j__strlen("enable-lsr-phielim");
  sub_21F3510(&qword_2CDC780, "enable-lsr-phielim", v2);
  word_2CDC808 = 257;
  qword_2CDC7A8 = v0;
  byte_2CDC7F8 = 1;
  byte_2CDC78A = byte_2CDC78A & 0x9F | 0x20;
  qword_2CDC7A0 = (__int64)"Enable LSR phi elimination";
  sub_21F4400(&qword_2CDC780);
  __cxa_atexit(sub_1FEA450, &qword_2CDC780, &off_2AFC540);
  v3 = j__strlen("Add instruction count to a LSR cost model");
  LOBYTE(v28) = 1;
  v32 = v3;
  ptr = (void *)"Add instruction count to a LSR cost model";
  v30[0] = &v28;
  LODWORD(v29) = 1;
  sub_21C85E0(&unk_2CDC6C0, "lsr-insns-cost", &v29, v30, &ptr, v4, v24.m128_u64[0], v24.m128_u64[1]);
  __cxa_atexit(sub_1FEA450, &unk_2CDC6C0, &off_2AFC540);
  v5 = j__strlen("Narrow LSR complex solution using expectation of registers number");
  LOBYTE(v28) = 0;
  v32 = v5;
  ptr = (void *)"Narrow LSR complex solution using expectation of registers number";
  v30[0] = &v28;
  LODWORD(v29) = 1;
  sub_21C85E0(&unk_2CDC600, "lsr-exp-narrow", &v29, v30, &ptr, v6, v24.m128_u64[0], v24.m128_u64[1]);
  __cxa_atexit(sub_1FEA450, &unk_2CDC600, &off_2AFC540);
  v7 = j__strlen("Narrow LSR search space by filtering non-optimal formulae with the same ScaledReg and Scale");
  sub_1FEBAE0(&qword_2CDC540, 0, 0);
  v8 = _mm_load_si128((const __m128i *)&v24);
  word_2CDC5C8 = 0;
  qword_2CDC5C0 = (__int64)v26;
  xmmword_2CDC5E8 = (__int128)v8;
  qword_2CDC540 = v25.m128i_i64[0];
  byte_2CDC5B8 = 0;
  qword_2CDC5D0 = (__int64)off_2BC0B68;
  v9 = j__strlen("lsr-filter-same-scaled-reg");
  sub_21F3510(&qword_2CDC540, "lsr-filter-same-scaled-reg", v9);
  word_2CDC5C8 = 257;
  qword_2CDC568 = v7;
  byte_2CDC5B8 = 1;
  byte_2CDC54A = byte_2CDC54A & 0x9F | 0x20;
  qword_2CDC560 = (__int64)"Narrow LSR search space by filtering non-optimal formulae with the same ScaledReg and Scale";
  sub_21F4400(&qword_2CDC540);
  __cxa_atexit(sub_1FEA450, &qword_2CDC540, &off_2AFC540);
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
  sub_21C86C0(&unk_2CDC2E0, "lsr-preferred-addressing-mode", &v27, &v29, v30, &ptr);
  if ( ptr != v33 )
    free(ptr);
  __cxa_atexit(sub_21C8540, &unk_2CDC2E0, &off_2AFC540);
  v10 = j__strlen("LSR search space complexity limit");
  sub_1FEBAE0(&qword_2CDC220, 0, 0);
  dword_2CDC298 = 0;
  dword_2CDC2A8 = 0;
  v25 = (__m128i)_mm_loadh_ps((const double *)off_2C4E4F8);
  xmmword_2CDC2C8 = (__int128)v25;
  qword_2CDC2A0 = (__int64)off_2C472D0;
  qword_2CDC220 = (__int64)off_2C4B710;
  qword_2CDC2B0 = (__int64)off_2BC0BF8;
  byte_2CDC2AC = 0;
  v11 = j__strlen("lsr-complexity-limit");
  sub_21F3510(&qword_2CDC220, "lsr-complexity-limit", v11);
  qword_2CDC248 = v10;
  dword_2CDC298 = 0xFFFF;
  byte_2CDC2AC = 1;
  dword_2CDC2A8 = 0xFFFF;
  byte_2CDC22A = byte_2CDC22A & 0x9F | 0x20;
  qword_2CDC240 = (__int64)"LSR search space complexity limit";
  sub_21F4400(&qword_2CDC220);
  __cxa_atexit(sub_1FC9520, &qword_2CDC220, &off_2AFC540);
  v12 = j__strlen("The limit on recursion depth for LSRs setup cost");
  sub_1FEBAE0(&qword_2CDC160, 0, 0);
  v13 = _mm_load_si128(&v25);
  qword_2CDC1E0 = (__int64)off_2C472D0;
  qword_2CDC160 = (__int64)off_2C4B710;
  xmmword_2CDC208 = (__int128)v13;
  qword_2CDC1F0 = (__int64)off_2BC0BF8;
  dword_2CDC1D8 = 0;
  dword_2CDC1E8 = 0;
  byte_2CDC1EC = 0;
  v14 = j__strlen("lsr-setupcost-depth-limit");
  sub_21F3510(&qword_2CDC160, "lsr-setupcost-depth-limit", v14);
  qword_2CDC188 = v12;
  dword_2CDC1D8 = 7;
  byte_2CDC1EC = 1;
  dword_2CDC1E8 = 7;
  byte_2CDC16A = byte_2CDC16A & 0x9F | 0x20;
  qword_2CDC180 = (__int64)"The limit on recursion depth for LSRs setup cost";
  sub_21F4400(&qword_2CDC160);
  __cxa_atexit(sub_1FC9520, &qword_2CDC160, &off_2AFC540);
  v15 = j__strlen("Attempt to drop solution if it is less profitable");
  sub_1FEBAE0(&qword_2CDC0A0, 0, 0);
  dword_2CDC118 = 0;
  dword_2CDC128 = 0;
  qword_2CDC120 = (__int64)off_2BC0B28;
  xmmword_2CDC148 = (__int128)_mm_loadh_ps((const double *)off_2C4DB30);
  byte_2CDC12C = 0;
  qword_2CDC0A0 = (__int64)off_2C48A80;
  qword_2CDC130 = (__int64)off_2BC0B98;
  v16 = j__strlen("lsr-drop-solution");
  sub_21F3510(&qword_2CDC0A0, "lsr-drop-solution", v16);
  qword_2CDC0C8 = v15;
  byte_2CDC0AA = byte_2CDC0AA & 0x9F | 0x20;
  qword_2CDC0C0 = (__int64)"Attempt to drop solution if it is less profitable";
  sub_21F4400(&qword_2CDC0A0);
  __cxa_atexit(sub_20DA4B0, &qword_2CDC0A0, &off_2AFC540);
  v17 = j__strlen("Enable analysis of vscale-relative immediates in LSR");
  sub_1FEBAE0(&qword_2CDBFE0, 0, 0);
  v18 = _mm_load_si128((const __m128i *)&v24);
  word_2CDC068 = 0;
  xmmword_2CDC088 = (__int128)v18;
  byte_2CDC058 = 0;
  qword_2CDC060 = (__int64)off_2C474E8;
  qword_2CDBFE0 = (__int64)off_2C4B848;
  qword_2CDC070 = (__int64)off_2BC0B68;
  v19 = j__strlen("lsr-enable-vscale-immediates");
  sub_21F3510(&qword_2CDBFE0, "lsr-enable-vscale-immediates", v19);
  word_2CDC068 = 257;
  qword_2CDC008 = v17;
  byte_2CDC058 = 1;
  byte_2CDBFEA = byte_2CDBFEA & 0x9F | 0x20;
  qword_2CDC000 = (__int64)"Enable analysis of vscale-relative immediates in LSR";
  sub_21F4400(&qword_2CDBFE0);
  __cxa_atexit(sub_1FEA450, &qword_2CDBFE0, &off_2AFC540);
  v20 = j__strlen("Avoid using scaled registers with vscale-relative addressing");
  sub_1FEBAE0(&qword_2CDBF20, 0, 0);
  v21 = _mm_load_si128((const __m128i *)&v24);
  word_2CDBFA8 = 0;
  xmmword_2CDBFC8 = (__int128)v21;
  qword_2CDBFA0 = (__int64)off_2C474E8;
  qword_2CDBF20 = (__int64)off_2C4B848;
  qword_2CDBFB0 = (__int64)off_2BC0B68;
  byte_2CDBF98 = 0;
  v22 = j__strlen("lsr-drop-scaled-reg-for-vscale");
  sub_21F3510(&qword_2CDBF20, "lsr-drop-scaled-reg-for-vscale", v22);
  word_2CDBFA8 = 257;
  qword_2CDBF48 = v20;
  byte_2CDBF98 = 1;
  byte_2CDBF2A = byte_2CDBF2A & 0x9F | 0x20;
  qword_2CDBF40 = (__int64)"Avoid using scaled registers with vscale-relative addressing";
  sub_21F4400(&qword_2CDBF20);
  return __cxa_atexit(sub_1FEA450, &qword_2CDBF20, &off_2AFC540);
}

