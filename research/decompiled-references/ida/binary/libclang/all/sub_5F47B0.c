int __fastcall sub_5F47B0(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // rdx
  __m128i v4; // xmm3
  __int64 v5; // rax
  __int64 v6; // rdx
  __m128i v7; // xmm4
  __int64 v8; // rbp
  __int64 v9; // rax
  __m128i v10; // xmm0
  char v11; // al
  __m128i v13; // [rsp+0h] [rbp-58h] BYREF
  __int64 v14; // [rsp+18h] [rbp-40h]

  qword_4B33060 = (__int64)&qword_4B33070;
  qword_4B33030 = 0;
  qword_4B33038 = 0;
  qword_4B33020 = (__int64)&off_4A6E058;
  qword_4B33028 = (unsigned int)qword_4B33028 & 0x80000000;
  qword_4B33078 = (__int64)&qword_4B33090;
  v13 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_49F2078), (__m128i)(unsigned __int64)nullsub_266);
  qword_4B33040 = 0;
  qword_4B33048 = 0;
  qword_4B33050 = 0;
  qword_4B33058 = 0;
  qword_4B33068 = 0x100000000LL;
  qword_4B33080 = 1;
  dword_4B33088 = 0;
  byte_4B3308C = 1;
  v1 = sub_259AC30(a1, &qword_4B33070);
  v2 = (unsigned int)qword_4B33068;
  v3 = (unsigned int)qword_4B33068 + 1LL;
  if ( HIDWORD(qword_4B33068) < v3 )
  {
    sub_25D6060(&qword_4B33070 - 2, &qword_4B33070, v3, 8);
    v2 = (unsigned int)qword_4B33068;
  }
  v4 = _mm_load_si128(&v13);
  *(_QWORD *)(qword_4B33060 + 8 * v2) = v1;
  word_4B330A8 = 0;
  xmmword_4B330B8 = 0;
  qword_4B330A0 = (__int64)&off_4A64730;
  xmmword_4B330C8 = (__int128)v4;
  LODWORD(qword_4B33068) = qword_4B33068 + 1;
  qword_4B33020 = (__int64)off_4A6DFF0;
  byte_4B33098 = 0;
  qword_4B330B0 = (__int64)off_49D9168;
  sub_259F400(&qword_4B33020, "print-summary-global-ids", 24);
  word_4B330A8 = 256;
  byte_4B33098 = 0;
  qword_4B33048 = 66;
  BYTE2(qword_4B33028) = BYTE2(qword_4B33028) & 0x9F | 0x20;
  qword_4B33040 = (__int64)"Print the global id for each value when reading the module summary";
  sub_259EC40(&qword_4B33020);
  __cxa_atexit(sub_1F6C9D0, &qword_4B33020, &off_47CFE00);
  qword_4B32F70 = 0;
  qword_4B32F60 = (__int64)&off_4A6E058;
  qword_4B32F68 = (unsigned int)qword_4B32F68 & 0x80000000;
  qword_4B32FA0 = (__int64)&qword_4B32FB0;
  qword_4B32F78 = 0;
  qword_4B32F80 = 0;
  qword_4B32F88 = 0;
  qword_4B32F90 = 0;
  qword_4B32F98 = 0;
  qword_4B32FA8 = 0x100000000LL;
  qword_4B32FB8 = (__int64)&qword_4B32FD0;
  qword_4B32FC0 = 1;
  dword_4B32FC8 = 0;
  byte_4B32FCC = 1;
  v5 = sub_259AC30(sub_1F6C9D0, &qword_4B32FB0);
  v6 = (unsigned int)qword_4B32FA8;
  if ( HIDWORD(qword_4B32FA8) < (unsigned __int64)(unsigned int)qword_4B32FA8 + 1 )
  {
    v14 = v5;
    sub_25D6060(&qword_4B32FB0 - 2, &qword_4B32FB0, (unsigned int)qword_4B32FA8 + 1LL, 8);
    v6 = (unsigned int)qword_4B32FA8;
    v5 = v14;
  }
  v7 = _mm_load_si128(&v13);
  *(_QWORD *)(qword_4B32FA0 + 8 * v6) = v5;
  word_4B32FE8 = 0;
  xmmword_4B32FF8 = 0;
  xmmword_4B33008 = (__int128)v7;
  qword_4B32FE0 = (__int64)&off_4A64730;
  LODWORD(qword_4B32FA8) = qword_4B32FA8 + 1;
  byte_4B32FD8 = 0;
  qword_4B32F60 = (__int64)off_4A6DFF0;
  qword_4B32FF0 = (__int64)off_49D9168;
  sub_259F400(&qword_4B32F60, "expand-constant-exprs", 21);
  qword_4B32F88 = 64;
  BYTE2(qword_4B32F68) = BYTE2(qword_4B32F68) & 0x9F | 0x20;
  qword_4B32F80 = (__int64)"Expand constant expressions to instructions for testing purposes";
  sub_259EC40(&qword_4B32F60);
  __cxa_atexit(sub_1F6C9D0, &qword_4B32F60, &off_47CFE00);
  qword_4B32EA0[0] = (__int64)&off_4A6E058;
  qword_4B32EA0[1] &= 0x80000000uLL;
  qword_4B32EA0[12] = 1;
  qword_4B32EA0[2] = 0;
  qword_4B32EA0[3] = 0;
  qword_4B32EA0[4] = 0;
  qword_4B32EA0[5] = 0;
  qword_4B32EA0[6] = 0;
  qword_4B32EA0[7] = 0;
  qword_4B32EA0[8] = (__int64)&qword_4B32EA0[10];
  qword_4B32EA0[9] = 0x100000000LL;
  qword_4B32EA0[11] = (__int64)&qword_4B32EA0[14];
  LODWORD(qword_4B32EA0[13]) = 0;
  BYTE4(qword_4B32EA0[13]) = 1;
  v8 = sub_259AC30(sub_1F6C9D0, &qword_4B32F60);
  v9 = LODWORD(qword_4B32EA0[9]);
  if ( HIDWORD(qword_4B32EA0[9]) < (unsigned __int64)(v9 + 1) )
  {
    sub_25D6060(&qword_4B32EA0[8], &qword_4B32EA0[10], v9 + 1, 8);
    v9 = LODWORD(qword_4B32EA0[9]);
  }
  *(_QWORD *)(qword_4B32EA0[8] + 8 * v9) = v8;
  *(_OWORD *)&qword_4B32EA0[19] = 0;
  v10 = _mm_loadl_epi64((const __m128i *)&off_49F2080);
  ++LODWORD(qword_4B32EA0[9]);
  qword_4B32EA0[16] = (__int64)off_49D90F8;
  LODWORD(qword_4B32EA0[15]) = 0;
  BYTE4(qword_4B32EA0[17]) = 0;
  qword_4B32EA0[0] = (__int64)off_4A6D1F8;
  LODWORD(qword_4B32EA0[17]) = 0;
  qword_4B32EA0[18] = (__int64)off_49D9198;
  *(__m128i *)&qword_4B32EA0[21] = _mm_unpacklo_epi64(v10, (__m128i)(unsigned __int64)nullsub_328);
  sub_259F400(qword_4B32EA0, "load-bitcode-into-experimental-debuginfo-iterators", 50);
  v11 = BYTE2(qword_4B32EA0[1]);
  qword_4B32EA0[5] = 81;
  BYTE2(qword_4B32EA0[1]) = v11 & 0x9F | 0x20;
  qword_4B32EA0[4] = (__int64)"Load bitcode directly into the new debug info format (regardless of input format)";
  sub_259EC40(qword_4B32EA0);
  return __cxa_atexit(sub_23D2630, qword_4B32EA0, &off_47CFE00);
}

