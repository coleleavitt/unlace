int __fastcall sub_58F630(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  unsigned __int64 v3; // rdx
  __m128i si128; // xmm3
  __int64 v5; // r14
  __int64 v6; // rax
  unsigned __int64 v7; // rdx
  __m128i v8; // xmm4
  __m128i v10[4]; // [rsp+0h] [rbp-48h] BYREF

  qword_4AF70A0 = (__int64)&qword_4AF70B0;
  qword_4AF7070 = 0;
  qword_4AF7078 = 0;
  qword_4AF7060 = (__int64)&off_4A6E058;
  qword_4AF7068 = (unsigned int)qword_4AF7068 & 0x80000000;
  qword_4AF70B8 = (__int64)&qword_4AF70D0;
  v10[0] = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_49EA240), (__m128i)(unsigned __int64)nullsub_266);
  qword_4AF7080 = 0;
  qword_4AF7088 = 0;
  qword_4AF7090 = 0;
  qword_4AF7098 = 0;
  qword_4AF70A8 = 0x100000000LL;
  qword_4AF70C0 = 1;
  dword_4AF70C8 = 0;
  byte_4AF70CC = 1;
  v1 = sub_259AC30(a1, &qword_4AF70B0);
  v2 = (unsigned int)qword_4AF70A8;
  v3 = (unsigned int)qword_4AF70A8 + 1LL;
  if ( HIDWORD(qword_4AF70A8) < v3 )
  {
    sub_25D6060(&qword_4AF70B0 - 2, &qword_4AF70B0, v3, 8);
    v2 = (unsigned int)qword_4AF70A8;
  }
  si128 = _mm_load_si128(v10);
  *(_QWORD *)(qword_4AF70A0 + 8 * v2) = v1;
  qword_4AF70E0 = (__int64)&off_4A64730;
  word_4AF70E8 = 0;
  xmmword_4AF70F8 = 0;
  qword_4AF7060 = (__int64)off_4A6DFF0;
  xmmword_4AF7108 = (__int128)si128;
  LODWORD(qword_4AF70A8) = qword_4AF70A8 + 1;
  qword_4AF70F0 = (__int64)off_49D9168;
  byte_4AF70D8 = 0;
  sub_259F400(&qword_4AF7060, "safestack-use-pointer-address", 29);
  word_4AF70E8 = 256;
  byte_4AF70D8 = 0;
  BYTE2(qword_4AF7068) = BYTE2(qword_4AF7068) & 0x9F | 0x20;
  sub_259EC40(&qword_4AF7060);
  __cxa_atexit(sub_1F6C9D0, &qword_4AF7060, &off_47CFE00);
  qword_4AF6FE8 = 0x100000000LL;
  qword_4AF6FA0 = (__int64)&off_4A6E058;
  qword_4AF6FA8 = (unsigned int)qword_4AF6FA8 & 0x80000000;
  qword_4AF6FE0 = (__int64)&qword_4AF6FF0;
  qword_4AF6FB0 = 0;
  qword_4AF6FB8 = 0;
  qword_4AF6FC0 = 0;
  qword_4AF6FC8 = 0;
  qword_4AF6FD0 = 0;
  qword_4AF6FD8 = 0;
  qword_4AF6FF8 = (__int64)&qword_4AF7010;
  qword_4AF7000 = 1;
  dword_4AF7008 = 0;
  byte_4AF700C = 1;
  v5 = sub_259AC30(sub_1F6C9D0, &qword_4AF6FF0);
  v6 = (unsigned int)qword_4AF6FE8;
  v7 = (unsigned int)qword_4AF6FE8 + 1LL;
  if ( HIDWORD(qword_4AF6FE8) < v7 )
  {
    sub_25D6060(&qword_4AF6FF0 - 2, &qword_4AF6FF0, v7, 8);
    v6 = (unsigned int)qword_4AF6FE8;
  }
  v8 = _mm_load_si128(v10);
  *(_QWORD *)(qword_4AF6FE0 + 8 * v6) = v5;
  word_4AF7028 = 0;
  qword_4AF7020 = (__int64)&off_4A64730;
  xmmword_4AF7038 = 0;
  xmmword_4AF7048 = (__int128)v8;
  qword_4AF6FA0 = (__int64)off_4A6DFF0;
  LODWORD(qword_4AF6FE8) = qword_4AF6FE8 + 1;
  byte_4AF7018 = 0;
  qword_4AF7030 = (__int64)off_49D9168;
  sub_259F400(&qword_4AF6FA0, "safe-stack-coloring", 19);
  qword_4AF6FC0 = (__int64)"enable safe stack coloring";
  word_4AF7028 = 257;
  byte_4AF7018 = 1;
  qword_4AF6FC8 = 26;
  BYTE2(qword_4AF6FA8) = BYTE2(qword_4AF6FA8) & 0x9F | 0x20;
  sub_259EC40(&qword_4AF6FA0);
  return __cxa_atexit(sub_1F6C9D0, &qword_4AF6FA0, &off_47CFE00);
}

