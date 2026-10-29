int __fastcall sub_56E6A0(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // rdx
  __m128i v4; // xmm5
  __int64 v5; // r15
  __int64 v6; // rax
  unsigned __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // r9
  __int64 v12; // r14
  __int64 v13; // rax
  unsigned __int64 v14; // rdx
  __m128i v15; // xmm7
  __int64 v16; // rax
  __int64 v17; // rdx
  __m128i v18; // xmm3
  __int64 v19; // rax
  __int64 v20; // rdx
  __m128i v21; // xmm4
  __int64 v22; // r12
  __int64 v23; // rax
  unsigned __int64 v24; // rdx
  __m128i v25; // xmm5
  __m128i v27; // [rsp+0h] [rbp-98h] BYREF
  __m128i v28; // [rsp+10h] [rbp-88h] BYREF
  __int64 v29; // [rsp+28h] [rbp-70h]
  const char *v30; // [rsp+30h] [rbp-68h] BYREF
  __int16 v31; // [rsp+50h] [rbp-48h]

  qword_4AE21A0 = (__int64)&qword_4AE21B0;
  qword_4AE2170 = 0;
  qword_4AE2178 = 0;
  qword_4AE2160 = (__int64)&off_4A6E058;
  qword_4AE2168 = (unsigned int)qword_4AE2168 & 0x80000000;
  qword_4AE21B8 = (__int64)&qword_4AE21D0;
  v27 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_49D8360), (__m128i)(unsigned __int64)nullsub_266);
  v28 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_49D8368), (__m128i)(unsigned __int64)nullsub_267);
  qword_4AE2180 = 0;
  qword_4AE2188 = 0;
  qword_4AE2190 = 0;
  qword_4AE2198 = 0;
  qword_4AE21A8 = 0x100000000LL;
  dword_4AE21C8 = 0;
  qword_4AE21C0 = 1;
  byte_4AE21CC = 1;
  v1 = sub_259AC30(a1, &qword_4AE21B0);
  v2 = (unsigned int)qword_4AE21A8;
  v3 = (unsigned int)qword_4AE21A8 + 1LL;
  if ( HIDWORD(qword_4AE21A8) < v3 )
  {
    sub_25D6060(&qword_4AE21B0 - 2, &qword_4AE21B0, v3, 8);
    v2 = (unsigned int)qword_4AE21A8;
  }
  v4 = _mm_load_si128(&v28);
  *(_QWORD *)(qword_4AE21A0 + 8 * v2) = v1;
  qword_4AE21E0 = (__int64)&off_4A64710;
  xmmword_4AE21F8 = 0;
  xmmword_4AE2208 = (__int128)v4;
  qword_4AE2160 = (__int64)off_4A6DEB8;
  LODWORD(qword_4AE21A8) = qword_4AE21A8 + 1;
  byte_4AE21EC = 0;
  qword_4AE21F0 = (__int64)off_49D9228;
  dword_4AE21D8 = 0;
  dword_4AE21E8 = 0;
  sub_259F400(&qword_4AE2160, "x86-align-branch-boundary", 25);
  dword_4AE21D8 = 0;
  qword_4AE2180 = (__int64)"Control how the assembler should align branches with NOP. If the boundary's size is not 0, it"
                           " should be a power of 2 and no less than 32. Branches will be aligned to prevent from being a"
                           "cross or against the boundary of specified size. The default value 0 does not align branches.";
  byte_4AE21EC = 1;
  dword_4AE21E8 = 0;
  qword_4AE2188 = 279;
  sub_259EC40(&qword_4AE2160);
  __cxa_atexit(sub_1F6C940, &qword_4AE2160, &off_47CFE00);
  qword_4AE20B0 = 0;
  qword_4AE20A0 = (__int64)&off_4A6E058;
  qword_4AE20A8 = (unsigned int)qword_4AE20A8 & 0x80000000;
  qword_4AE20E0 = (__int64)&qword_4AE20F0;
  qword_4AE20B8 = 0;
  qword_4AE20C0 = 0;
  qword_4AE20C8 = 0;
  qword_4AE20D0 = 0;
  qword_4AE20D8 = 0;
  qword_4AE20E8 = 0x100000000LL;
  qword_4AE20F8 = (__int64)&qword_4AE2110;
  qword_4AE2100 = 1;
  dword_4AE2108 = 0;
  byte_4AE210C = 1;
  v5 = sub_259AC30(sub_1F6C940, &qword_4AE20F0);
  v6 = (unsigned int)qword_4AE20E8;
  v7 = (unsigned int)qword_4AE20E8 + 1LL;
  if ( HIDWORD(qword_4AE20E8) < v7 )
  {
    sub_25D6060(&qword_4AE20F0 - 2, &qword_4AE20F0, v7, 8);
    v6 = (unsigned int)qword_4AE20E8;
  }
  *(_QWORD *)(qword_4AE20E0 + 8 * v6) = v5;
  qword_4AE2120 = (__int64)off_4A6C490;
  qword_4AE20A0 = (__int64)&off_4A6C4B0;
  xmmword_4AE2130 = 0;
  LODWORD(qword_4AE20E8) = qword_4AE20E8 + 1;
  qword_4AE2128 = (__int64)off_49D92E8;
  qword_4AE2118 = 0;
  xmmword_4AE2140 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49D8370),
                                (__m128i)(unsigned __int64)nullsub_326);
  sub_259F400(&qword_4AE20A0, "x86-align-branch", 16);
  qword_4AE20C8 = 309;
  qword_4AE20C0 = (__int64)"Specify types of branches to align (plus separated list of types):\n"
                           "jcc      indicates conditional jumps\n"
                           "fused    indicates fused conditional jumps\n"
                           "jmp      indicates direct unconditional jumps\n"
                           "call     indicates direct and indirect calls\n"
                           "ret      indicates rets\n"
                           "indirect indicates indirect unconditional jumps";
  if ( qword_4AE2118 )
  {
    v10 = sub_26260E0(&qword_4AE20A0, "x86-align-branch", v8, v9);
    v31 = 259;
    v30 = "cl::location(x) specified more than once!";
    sub_2598800(
      &qword_4AE20A0,
      &v30,
      0,
      0,
      v10,
      v11,
      v27.m128i_i64[0],
      v27.m128i_i64[1],
      v28.m128i_i64[0],
      v28.m128i_i64[1]);
  }
  else
  {
    qword_4AE2118 = (__int64)&byte_4AE2218;
  }
  sub_259EC40(&qword_4AE20A0);
  __cxa_atexit(sub_23BBF80, &qword_4AE20A0, &off_47CFE00);
  qword_4AE1FF0 = 0;
  qword_4AE1FE0 = (__int64)&off_4A6E058;
  qword_4AE1FE8 = (unsigned int)qword_4AE1FE8 & 0x80000000;
  qword_4AE2020 = (__int64)&qword_4AE2030;
  qword_4AE1FF8 = 0;
  qword_4AE2000 = 0;
  qword_4AE2008 = 0;
  qword_4AE2010 = 0;
  qword_4AE2018 = 0;
  qword_4AE2028 = 0x100000000LL;
  qword_4AE2038 = (__int64)&qword_4AE2050;
  qword_4AE2040 = 1;
  dword_4AE2048 = 0;
  byte_4AE204C = 1;
  v12 = sub_259AC30(sub_23BBF80, &qword_4AE2030);
  v13 = (unsigned int)qword_4AE2028;
  v14 = (unsigned int)qword_4AE2028 + 1LL;
  if ( HIDWORD(qword_4AE2028) < v14 )
  {
    sub_25D6060(&qword_4AE2030 - 2, &qword_4AE2030, v14, 8);
    v13 = (unsigned int)qword_4AE2028;
  }
  v15 = _mm_load_si128(&v27);
  *(_QWORD *)(qword_4AE2020 + 8 * v13) = v12;
  word_4AE2068 = 0;
  xmmword_4AE2078 = 0;
  qword_4AE1FE0 = (__int64)off_4A6DFF0;
  xmmword_4AE2088 = (__int128)v15;
  LODWORD(qword_4AE2028) = qword_4AE2028 + 1;
  qword_4AE2070 = (__int64)off_49D9168;
  byte_4AE2058 = 0;
  qword_4AE2060 = (__int64)&off_4A64730;
  sub_259F400(&qword_4AE1FE0, "x86-branches-within-32B-boundaries", 34);
  byte_4AE2058 = 0;
  qword_4AE2008 = 226;
  word_4AE2068 = 256;
  qword_4AE2000 = (__int64)"Align selected instructions to mitigate negative performance impact of Intel's micro code upd"
                           "ate for errata skx102.  May break assumptions about labels corresponding to particular instru"
                           "ctions, and should be used with caution.";
  sub_259EC40(&qword_4AE1FE0);
  __cxa_atexit(sub_1F6C9D0, &qword_4AE1FE0, &off_47CFE00);
  qword_4AE1F30 = 0;
  qword_4AE1F20 = (__int64)&off_4A6E058;
  qword_4AE1F28 = (unsigned int)qword_4AE1F28 & 0x80000000;
  qword_4AE1F60 = (__int64)&qword_4AE1F70;
  qword_4AE1F38 = 0;
  qword_4AE1F40 = 0;
  qword_4AE1F48 = 0;
  qword_4AE1F50 = 0;
  qword_4AE1F58 = 0;
  qword_4AE1F68 = 0x100000000LL;
  qword_4AE1F78 = (__int64)&qword_4AE1F90;
  qword_4AE1F80 = 1;
  dword_4AE1F88 = 0;
  byte_4AE1F8C = 1;
  v16 = sub_259AC30(sub_1F6C9D0, &qword_4AE1F70);
  v17 = (unsigned int)qword_4AE1F68;
  if ( HIDWORD(qword_4AE1F68) < (unsigned __int64)(unsigned int)qword_4AE1F68 + 1 )
  {
    v29 = v16;
    sub_25D6060(&qword_4AE1F70 - 2, &qword_4AE1F70, (unsigned int)qword_4AE1F68 + 1LL, 8);
    v17 = (unsigned int)qword_4AE1F68;
    v16 = v29;
  }
  v18 = _mm_load_si128(&v28);
  *(_QWORD *)(qword_4AE1F60 + 8 * v17) = v16;
  qword_4AE1FA0 = (__int64)&off_4A64710;
  xmmword_4AE1FB8 = 0;
  xmmword_4AE1FC8 = (__int128)v18;
  qword_4AE1F20 = (__int64)off_4A6DEB8;
  LODWORD(qword_4AE1F68) = qword_4AE1F68 + 1;
  byte_4AE1FAC = 0;
  qword_4AE1FB0 = (__int64)off_49D9228;
  dword_4AE1F98 = 0;
  dword_4AE1FA8 = 0;
  sub_259F400(&qword_4AE1F20, "x86-pad-max-prefix-size", 23);
  dword_4AE1F98 = 0;
  qword_4AE1F40 = (__int64)"Maximum number of prefixes to use for padding";
  byte_4AE1FAC = 1;
  dword_4AE1FA8 = 0;
  qword_4AE1F48 = 45;
  sub_259EC40(&qword_4AE1F20);
  __cxa_atexit(sub_1F6C940, &qword_4AE1F20, &off_47CFE00);
  qword_4AE1E70 = 0;
  qword_4AE1E60 = (__int64)&off_4A6E058;
  qword_4AE1E68 = (unsigned int)qword_4AE1E68 & 0x80000000;
  qword_4AE1EA0 = (__int64)&qword_4AE1EB0;
  qword_4AE1E78 = 0;
  qword_4AE1E80 = 0;
  qword_4AE1E88 = 0;
  qword_4AE1E90 = 0;
  qword_4AE1E98 = 0;
  qword_4AE1EA8 = 0x100000000LL;
  qword_4AE1EB8 = (__int64)&qword_4AE1ED0;
  qword_4AE1EC0 = 1;
  dword_4AE1EC8 = 0;
  byte_4AE1ECC = 1;
  v19 = sub_259AC30(sub_1F6C940, &qword_4AE1EB0);
  v20 = (unsigned int)qword_4AE1EA8;
  if ( HIDWORD(qword_4AE1EA8) < (unsigned __int64)(unsigned int)qword_4AE1EA8 + 1 )
  {
    v28.m128i_i64[0] = v19;
    sub_25D6060(&qword_4AE1EB0 - 2, &qword_4AE1EB0, (unsigned int)qword_4AE1EA8 + 1LL, 8);
    v20 = (unsigned int)qword_4AE1EA8;
    v19 = v28.m128i_i64[0];
  }
  v21 = _mm_load_si128(&v27);
  *(_QWORD *)(qword_4AE1EA0 + 8 * v20) = v19;
  word_4AE1EE8 = 0;
  xmmword_4AE1EF8 = 0;
  qword_4AE1E60 = (__int64)off_4A6DFF0;
  xmmword_4AE1F08 = (__int128)v21;
  LODWORD(qword_4AE1EA8) = qword_4AE1EA8 + 1;
  qword_4AE1EF0 = (__int64)off_49D9168;
  byte_4AE1ED8 = 0;
  qword_4AE1EE0 = (__int64)&off_4A64730;
  sub_259F400(&qword_4AE1E60, "x86-pad-for-align", 17);
  byte_4AE1ED8 = 0;
  qword_4AE1E88 = 55;
  word_4AE1EE8 = 256;
  BYTE2(qword_4AE1E68) = BYTE2(qword_4AE1E68) & 0x9F | 0x20;
  qword_4AE1E80 = (__int64)"Pad previous instructions to implement align directives";
  sub_259EC40(&qword_4AE1E60);
  __cxa_atexit(sub_1F6C9D0, &qword_4AE1E60, &off_47CFE00);
  qword_4AE1DE8 = 0x100000000LL;
  qword_4AE1DA0 = (__int64)&off_4A6E058;
  qword_4AE1DA8 = (unsigned int)qword_4AE1DA8 & 0x80000000;
  qword_4AE1DE0 = (__int64)&qword_4AE1DF0;
  qword_4AE1DB0 = 0;
  qword_4AE1DB8 = 0;
  qword_4AE1DC0 = 0;
  qword_4AE1DC8 = 0;
  qword_4AE1DD0 = 0;
  qword_4AE1DD8 = 0;
  qword_4AE1DF8 = (__int64)&qword_4AE1E10;
  qword_4AE1E00 = 1;
  dword_4AE1E08 = 0;
  byte_4AE1E0C = 1;
  v22 = sub_259AC30(sub_1F6C9D0, &qword_4AE1DF0);
  v23 = (unsigned int)qword_4AE1DE8;
  v24 = (unsigned int)qword_4AE1DE8 + 1LL;
  if ( HIDWORD(qword_4AE1DE8) < v24 )
  {
    sub_25D6060(&qword_4AE1DF0 - 2, &qword_4AE1DF0, v24, 8);
    v23 = (unsigned int)qword_4AE1DE8;
  }
  v25 = _mm_load_si128(&v27);
  *(_QWORD *)(qword_4AE1DE0 + 8 * v23) = v22;
  word_4AE1E28 = 0;
  qword_4AE1E20 = (__int64)&off_4A64730;
  xmmword_4AE1E38 = 0;
  qword_4AE1DA0 = (__int64)off_4A6DFF0;
  xmmword_4AE1E48 = (__int128)v25;
  LODWORD(qword_4AE1DE8) = qword_4AE1DE8 + 1;
  qword_4AE1E30 = (__int64)off_49D9168;
  byte_4AE1E18 = 0;
  sub_259F400(&qword_4AE1DA0, "x86-pad-for-branch-align", 24);
  word_4AE1E28 = 257;
  byte_4AE1E18 = 1;
  qword_4AE1DC8 = 55;
  BYTE2(qword_4AE1DA8) = BYTE2(qword_4AE1DA8) & 0x9F | 0x20;
  qword_4AE1DC0 = (__int64)"Pad previous instructions to implement branch alignment";
  sub_259EC40(&qword_4AE1DA0);
  return __cxa_atexit(sub_1F6C9D0, &qword_4AE1DA0, &off_47CFE00);
}

