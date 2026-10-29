int __fastcall sub_5DDD30(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // rdx
  __m128i v4; // xmm3
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 *v9; // rsi
  __m128i v10; // xmm5
  __int64 v11; // rax
  __int64 *v12; // rsi
  __int64 *v13; // r8
  __int64 v14; // rax
  __m128i v15; // xmm6
  __int64 v16; // rbp
  __int64 v17; // rax
  __m128i v18; // xmm7
  __m128i v20; // [rsp+0h] [rbp-58h] BYREF
  __int64 *v21; // [rsp+18h] [rbp-40h]

  qword_4B22FA0 = (__int64)&qword_4B22FB0;
  qword_4B22F70 = 0;
  qword_4B22F78 = 0;
  qword_4B22F60 = (__int64)&off_4A6E058;
  qword_4B22F68 = (unsigned int)qword_4B22F68 & 0x80000000;
  qword_4B22FB8 = (__int64)&qword_4B22FD0;
  v20 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_49EED98), (__m128i)(unsigned __int64)nullsub_266);
  qword_4B22F80 = 0;
  qword_4B22F88 = 0;
  qword_4B22F90 = 0;
  qword_4B22F98 = 0;
  qword_4B22FA8 = 0x100000000LL;
  qword_4B22FC0 = 1;
  dword_4B22FC8 = 0;
  byte_4B22FCC = 1;
  v1 = sub_259AC30(a1, &qword_4B22FB0);
  v2 = (unsigned int)qword_4B22FA8;
  v3 = (unsigned int)qword_4B22FA8 + 1LL;
  if ( HIDWORD(qword_4B22FA8) < v3 )
  {
    sub_25D6060(&qword_4B22FB0 - 2, &qword_4B22FB0, v3, 8);
    v2 = (unsigned int)qword_4B22FA8;
  }
  v4 = _mm_load_si128(&v20);
  *(_QWORD *)(qword_4B22FA0 + 8 * v2) = v1;
  word_4B22FE8 = 0;
  xmmword_4B22FF8 = 0;
  qword_4B22FE0 = (__int64)&off_4A64730;
  xmmword_4B23008 = (__int128)v4;
  LODWORD(qword_4B22FA8) = qword_4B22FA8 + 1;
  qword_4B22F60 = (__int64)off_4A6DFF0;
  byte_4B22FD8 = 0;
  qword_4B22FF0 = (__int64)off_49D9168;
  sub_259F400(&qword_4B22F60, "static-func-full-module-prefix", 30);
  byte_4B22FD8 = 1;
  qword_4B22F88 = 78;
  word_4B22FE8 = 257;
  BYTE2(qword_4B22F68) = BYTE2(qword_4B22F68) & 0x9F | 0x20;
  qword_4B22F80 = (__int64)"Use full module build paths in the profile counter names for static functions.";
  sub_259EC40(&qword_4B22F60);
  __cxa_atexit(sub_1F6C9D0, &qword_4B22F60, &off_47CFE00);
  qword_4B22EB0 = 0;
  qword_4B22EA0 = (__int64)&off_4A6E058;
  qword_4B22EA8 = (unsigned int)qword_4B22EA8 & 0x80000000;
  qword_4B22EE0 = (__int64)&qword_4B22EF0;
  qword_4B22EB8 = 0;
  qword_4B22EC0 = 0;
  qword_4B22EC8 = 0;
  qword_4B22ED0 = 0;
  qword_4B22ED8 = 0;
  qword_4B22EE8 = 0x100000000LL;
  qword_4B22EF8 = (__int64)&qword_4B22F10;
  qword_4B22F00 = 1;
  dword_4B22F08 = 0;
  byte_4B22F0C = 1;
  v5 = sub_259AC30(sub_1F6C9D0, &qword_4B22EF0);
  v6 = (unsigned int)qword_4B22EE8;
  if ( HIDWORD(qword_4B22EE8) < (unsigned __int64)(unsigned int)qword_4B22EE8 + 1 )
  {
    v21 = (__int64 *)v5;
    sub_25D6060(&qword_4B22EF0 - 2, &qword_4B22EF0, (unsigned int)qword_4B22EE8 + 1LL, 8);
    v6 = (unsigned int)qword_4B22EE8;
    v5 = (__int64)v21;
  }
  *(_QWORD *)(qword_4B22EE0 + 8 * v6) = v5;
  xmmword_4B22F38 = 0;
  LODWORD(qword_4B22EE8) = qword_4B22EE8 + 1;
  qword_4B22F20 = (__int64)&off_4A64710;
  dword_4B22F18 = 0;
  byte_4B22F2C = 0;
  qword_4B22EA0 = (__int64)off_4A6DEB8;
  dword_4B22F28 = 0;
  qword_4B22F30 = (__int64)off_49D9228;
  xmmword_4B22F48 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49EEDA0),
                                (__m128i)(unsigned __int64)nullsub_267);
  sub_259F400(&qword_4B22EA0, "static-func-strip-dirname-prefix", 32);
  dword_4B22F18 = 0;
  byte_4B22F2C = 1;
  dword_4B22F28 = 0;
  qword_4B22EC8 = 106;
  BYTE2(qword_4B22EA8) = BYTE2(qword_4B22EA8) & 0x9F | 0x20;
  qword_4B22EC0 = (__int64)"Strip specified level of directory name from source path in the profile counter name for static functions.";
  sub_259EC40(&qword_4B22EA0);
  __cxa_atexit(sub_1F6C940, &qword_4B22EA0, &off_47CFE00);
  qword_4B22DE0[0] = (__int64)&off_4A6E058;
  qword_4B22DE0[1] &= 0x80000000uLL;
  qword_4B22DE0[8] = (__int64)&qword_4B22DE0[10];
  v21 = &qword_4B22DE0[10];
  qword_4B22DE0[2] = 0;
  qword_4B22DE0[3] = 0;
  qword_4B22DE0[4] = 0;
  qword_4B22DE0[5] = 0;
  qword_4B22DE0[6] = 0;
  qword_4B22DE0[7] = 0;
  qword_4B22DE0[9] = 0x100000000LL;
  qword_4B22DE0[11] = (__int64)&qword_4B22DE0[14];
  qword_4B22DE0[12] = 1;
  LODWORD(qword_4B22DE0[13]) = 0;
  BYTE4(qword_4B22DE0[13]) = 1;
  v7 = sub_259AC30(sub_1F6C940, &qword_4B22DE0[10]);
  v8 = LODWORD(qword_4B22DE0[9]);
  v9 = v21;
  if ( HIDWORD(qword_4B22DE0[9]) < (unsigned __int64)(v8 + 1) )
  {
    v21 = (__int64 *)v7;
    sub_25D6060(&qword_4B22DE0[8], v9, v8 + 1, 8);
    v8 = LODWORD(qword_4B22DE0[9]);
    v7 = (__int64)v21;
  }
  v10 = _mm_load_si128(&v20);
  *(_QWORD *)(qword_4B22DE0[8] + 8 * v8) = v7;
  LOWORD(qword_4B22DE0[17]) = 0;
  *(_OWORD *)&qword_4B22DE0[19] = 0;
  qword_4B22DE0[16] = (__int64)&off_4A64730;
  *(__m128i *)&qword_4B22DE0[21] = v10;
  ++LODWORD(qword_4B22DE0[9]);
  qword_4B22DE0[0] = (__int64)off_4A6DFF0;
  LOBYTE(qword_4B22DE0[15]) = 0;
  qword_4B22DE0[18] = (__int64)off_49D9168;
  sub_259F400(qword_4B22DE0, "enable-name-compression", 23);
  qword_4B22DE0[5] = 39;
  qword_4B22DE0[4] = (__int64)"Enable name/filename string compression";
  LOBYTE(qword_4B22DE0[15]) = 1;
  LOWORD(qword_4B22DE0[17]) = 257;
  sub_259EC40(qword_4B22DE0);
  __cxa_atexit(sub_1F6C9D0, qword_4B22DE0, &off_47CFE00);
  qword_4B22D20[0] = (__int64)&off_4A6E058;
  qword_4B22D20[1] &= 0x80000000uLL;
  qword_4B22D20[8] = (__int64)&qword_4B22D20[10];
  v21 = &qword_4B22D20[10];
  qword_4B22D20[2] = 0;
  qword_4B22D20[3] = 0;
  qword_4B22D20[4] = 0;
  qword_4B22D20[5] = 0;
  qword_4B22D20[6] = 0;
  qword_4B22D20[7] = 0;
  qword_4B22D20[9] = 0x100000000LL;
  qword_4B22D20[11] = (__int64)&qword_4B22D20[14];
  qword_4B22D20[12] = 1;
  LODWORD(qword_4B22D20[13]) = 0;
  BYTE4(qword_4B22D20[13]) = 1;
  v11 = sub_259AC30(sub_1F6C9D0, &qword_4B22D20[10]);
  v12 = v21;
  v13 = (__int64 *)v11;
  v14 = LODWORD(qword_4B22D20[9]);
  if ( HIDWORD(qword_4B22D20[9]) < (unsigned __int64)(v14 + 1) )
  {
    v21 = v13;
    sub_25D6060(&qword_4B22D20[8], v12, v14 + 1, 8);
    v14 = LODWORD(qword_4B22D20[9]);
    v13 = v21;
  }
  v15 = _mm_load_si128(&v20);
  *(_QWORD *)(qword_4B22D20[8] + 8 * v14) = v13;
  LOWORD(qword_4B22D20[17]) = 0;
  *(_OWORD *)&qword_4B22D20[19] = 0;
  qword_4B22D20[16] = (__int64)&off_4A64730;
  *(__m128i *)&qword_4B22D20[21] = v15;
  ++LODWORD(qword_4B22D20[9]);
  qword_4B22D20[0] = (__int64)off_4A6DFF0;
  LOBYTE(qword_4B22D20[15]) = 0;
  qword_4B22D20[18] = (__int64)off_49D9168;
  sub_259F400(qword_4B22D20, "enable-vtable-value-profiling", 29);
  LOBYTE(qword_4B22D20[15]) = 0;
  qword_4B22D20[5] = 183;
  LOWORD(qword_4B22D20[17]) = 256;
  qword_4B22D20[4] = (__int64)"If true, the virtual table address will be instrumented to know the types of a C++ pointer"
                              ". The information is used in indirect call promotion to do selective vtable-based comparison.";
  sub_259EC40(qword_4B22D20);
  __cxa_atexit(sub_1F6C9D0, qword_4B22D20, &off_47CFE00);
  qword_4B22C60[0] = (__int64)&off_4A6E058;
  qword_4B22C60[1] &= 0x80000000uLL;
  qword_4B22C60[12] = 1;
  qword_4B22C60[2] = 0;
  qword_4B22C60[3] = 0;
  qword_4B22C60[4] = 0;
  qword_4B22C60[5] = 0;
  qword_4B22C60[6] = 0;
  qword_4B22C60[7] = 0;
  qword_4B22C60[8] = (__int64)&qword_4B22C60[10];
  qword_4B22C60[9] = 0x100000000LL;
  qword_4B22C60[11] = (__int64)&qword_4B22C60[14];
  LODWORD(qword_4B22C60[13]) = 0;
  BYTE4(qword_4B22C60[13]) = 1;
  v16 = sub_259AC30(sub_1F6C9D0, qword_4B22D20);
  v17 = LODWORD(qword_4B22C60[9]);
  if ( HIDWORD(qword_4B22C60[9]) < (unsigned __int64)(v17 + 1) )
  {
    sub_25D6060(&qword_4B22C60[8], &qword_4B22C60[10], v17 + 1, 8);
    v17 = LODWORD(qword_4B22C60[9]);
  }
  v18 = _mm_load_si128(&v20);
  *(_QWORD *)(qword_4B22C60[8] + 8 * v17) = v16;
  LOWORD(qword_4B22C60[17]) = 0;
  *(_OWORD *)&qword_4B22C60[19] = 0;
  *(__m128i *)&qword_4B22C60[21] = v18;
  qword_4B22C60[16] = (__int64)&off_4A64730;
  ++LODWORD(qword_4B22C60[9]);
  LOBYTE(qword_4B22C60[15]) = 0;
  qword_4B22C60[0] = (__int64)off_4A6DFF0;
  qword_4B22C60[18] = (__int64)off_49D9168;
  sub_259F400(qword_4B22C60, "enable-vtable-profile-use", 25);
  LOBYTE(qword_4B22C60[15]) = 0;
  qword_4B22C60[5] = 177;
  LOWORD(qword_4B22C60[17]) = 256;
  qword_4B22C60[4] = (__int64)"If ThinLTO and WPD is enabled and this option is true, vtable profiles will be used by ICP"
                              " pass for more efficient indirect call sequence. If false, type profiles won't be used.";
  sub_259EC40(qword_4B22C60);
  return __cxa_atexit(sub_1F6C9D0, qword_4B22C60, &off_47CFE00);
}

