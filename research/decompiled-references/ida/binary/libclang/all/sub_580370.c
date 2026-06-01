int __fastcall sub_580370(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  unsigned __int64 v3; // rdx
  __int64 v4; // r15
  __int64 v5; // rax
  unsigned __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // r9
  __int64 v11; // r12
  __int64 v12; // rax
  unsigned __int64 v13; // rdx
  const char *v15; // [rsp+0h] [rbp-68h] BYREF
  __int16 v16; // [rsp+20h] [rbp-48h]

  qword_4AEEAB0 = 0;
  qword_4AEEAB8 = 0;
  qword_4AEEAC0 = 0;
  qword_4AEEAA0 = (__int64)&off_4A6E058;
  qword_4AEEAA8 = (unsigned int)qword_4AEEAA8 & 0x80000000;
  qword_4AEEAC8 = 0;
  qword_4AEEAD0 = 0;
  qword_4AEEAD8 = 0;
  qword_4AEEAE0 = (__int64)&qword_4AEEAF0;
  qword_4AEEAE8 = 0x100000000LL;
  qword_4AEEAF8 = (__int64)&qword_4AEEB10;
  qword_4AEEB00 = 1;
  dword_4AEEB08 = 0;
  byte_4AEEB0C = 1;
  v1 = sub_259AC30(a1, &qword_4AEEAF0);
  v2 = (unsigned int)qword_4AEEAE8;
  v3 = (unsigned int)qword_4AEEAE8 + 1LL;
  if ( HIDWORD(qword_4AEEAE8) < v3 )
  {
    sub_25D6060(&qword_4AEEAF0 - 2, &qword_4AEEAF0, v3, 8);
    v2 = (unsigned int)qword_4AEEAE8;
  }
  *(_QWORD *)(qword_4AEEAE0 + 8 * v2) = v1;
  word_4AEEB28 = 0;
  xmmword_4AEEB38 = 0;
  LODWORD(qword_4AEEAE8) = qword_4AEEAE8 + 1;
  qword_4AEEB20 = (__int64)&off_4A64730;
  byte_4AEEB18 = 0;
  qword_4AEEAA0 = (__int64)off_4A6DFF0;
  qword_4AEEB30 = (__int64)off_49D9168;
  xmmword_4AEEB48 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49E8DE0),
                                (__m128i)(unsigned __int64)nullsub_266);
  sub_259F400(&qword_4AEEAA0, "insert-assert-align", 19);
  qword_4AEEAC0 = (__int64)"Insert the experimental `assertalign` node.";
  word_4AEEB28 = 257;
  byte_4AEEB18 = 1;
  qword_4AEEAC8 = 43;
  BYTE2(qword_4AEEAA8) = BYTE2(qword_4AEEAA8) & 0x9F | 0x40;
  sub_259EC40(&qword_4AEEAA0);
  __cxa_atexit(sub_1F6C9D0, &qword_4AEEAA0, &off_47CFE00);
  qword_4AEE9F0 = 0;
  qword_4AEE9E0 = (__int64)&off_4A6E058;
  qword_4AEE9E8 = (unsigned int)qword_4AEE9E8 & 0x80000000;
  qword_4AEEA20 = (__int64)&qword_4AEEA30;
  qword_4AEE9F8 = 0;
  qword_4AEEA00 = 0;
  qword_4AEEA08 = 0;
  qword_4AEEA10 = 0;
  qword_4AEEA18 = 0;
  qword_4AEEA28 = 0x100000000LL;
  qword_4AEEA38 = (__int64)&qword_4AEEA50;
  qword_4AEEA40 = 1;
  dword_4AEEA48 = 0;
  byte_4AEEA4C = 1;
  v4 = sub_259AC30(sub_1F6C9D0, &qword_4AEEA30);
  v5 = (unsigned int)qword_4AEEA28;
  v6 = (unsigned int)qword_4AEEA28 + 1LL;
  if ( HIDWORD(qword_4AEEA28) < v6 )
  {
    sub_25D6060(&qword_4AEEA30 - 2, &qword_4AEEA30, v6, 8);
    v5 = (unsigned int)qword_4AEEA28;
  }
  *(_QWORD *)(qword_4AEEA20 + 8 * v5) = v4;
  xmmword_4AEEA78 = 0;
  LODWORD(qword_4AEEA28) = qword_4AEEA28 + 1;
  qword_4AEEA60 = (__int64)&off_4A64710;
  qword_4AEEA58 = 0;
  byte_4AEEA6C = 0;
  qword_4AEE9E0 = (__int64)off_4A783B8;
  qword_4AEEA70 = (__int64)off_49D9228;
  xmmword_4AEEA88 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49E8DE8),
                                (__m128i)(unsigned __int64)nullsub_501);
  sub_259F400(&qword_4AEE9E0, "limit-float-precision", 21);
  qword_4AEEA08 = 63;
  qword_4AEEA00 = (__int64)"Generate low-precision inline sequences for some float libcalls";
  if ( qword_4AEEA58 )
  {
    v9 = sub_26260E0(&qword_4AEE9E0, "limit-float-precision", v7, v8);
    v16 = 259;
    v15 = "cl::location(x) specified more than once!";
    sub_2598800(&qword_4AEE9E0, &v15, 0, 0, v9, v10);
  }
  else
  {
    qword_4AEEA58 = (__int64)&dword_4AEEB58;
  }
  BYTE2(qword_4AEE9E8) = BYTE2(qword_4AEE9E8) & 0x9F | 0x20;
  *(_DWORD *)qword_4AEEA58 = 0;
  byte_4AEEA6C = 1;
  dword_4AEEA68 = 0;
  sub_259EC40(&qword_4AEE9E0);
  __cxa_atexit(sub_2D3BD70, &qword_4AEE9E0, &off_47CFE00);
  qword_4AEE980 = 1;
  qword_4AEE920 = (__int64)&off_4A6E058;
  qword_4AEE928 = (unsigned int)qword_4AEE928 & 0x80000000;
  qword_4AEE960 = (__int64)&qword_4AEE970;
  qword_4AEE930 = 0;
  qword_4AEE938 = 0;
  qword_4AEE940 = 0;
  qword_4AEE948 = 0;
  qword_4AEE950 = 0;
  qword_4AEE958 = 0;
  qword_4AEE968 = 0x100000000LL;
  qword_4AEE978 = (__int64)&qword_4AEE990;
  dword_4AEE988 = 0;
  byte_4AEE98C = 1;
  v11 = sub_259AC30(sub_2D3BD70, &qword_4AEE970);
  v12 = (unsigned int)qword_4AEE968;
  v13 = (unsigned int)qword_4AEE968 + 1LL;
  if ( HIDWORD(qword_4AEE968) < v13 )
  {
    sub_25D6060(&qword_4AEE970 - 2, &qword_4AEE970, v13, 8);
    v12 = (unsigned int)qword_4AEE968;
  }
  *(_QWORD *)(qword_4AEE960 + 8 * v12) = v11;
  qword_4AEE9A0 = (__int64)&off_4A64710;
  xmmword_4AEE9B8 = 0;
  LODWORD(qword_4AEE968) = qword_4AEE968 + 1;
  qword_4AEE920 = (__int64)off_4A6DEB8;
  dword_4AEE998 = 0;
  byte_4AEE9AC = 0;
  qword_4AEE9B0 = (__int64)off_49D9228;
  dword_4AEE9A8 = 0;
  xmmword_4AEE9C8 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49E8DF0),
                                (__m128i)(unsigned __int64)nullsub_267);
  sub_259F400(&qword_4AEE920, "switch-peel-threshold", 21);
  dword_4AEE998 = 66;
  byte_4AEE9AC = 1;
  dword_4AEE9A8 = 66;
  qword_4AEE948 = 133;
  BYTE2(qword_4AEE928) = BYTE2(qword_4AEE928) & 0x9F | 0x20;
  qword_4AEE940 = (__int64)"Set the case probability threshold for peeling the case from a switch statement. A value grea"
                           "ter than 100 will void this optimization";
  sub_259EC40(&qword_4AEE920);
  return __cxa_atexit(sub_1F6C940, &qword_4AEE920, &off_47CFE00);
}

