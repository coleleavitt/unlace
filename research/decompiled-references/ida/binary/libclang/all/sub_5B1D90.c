int __fastcall sub_5B1D90(__int64 a1)
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

  qword_4B07A20 = (__int64)&qword_4B07A30;
  qword_4B079F0 = 0;
  qword_4B079F8 = 0;
  qword_4B079E0 = (__int64)&off_4A6E058;
  qword_4B079E8 = (unsigned int)qword_4B079E8 & 0x80000000;
  qword_4B07A38 = (__int64)&qword_4B07A50;
  v10[0] = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_49EBB78), (__m128i)(unsigned __int64)nullsub_266);
  qword_4B07A00 = 0;
  qword_4B07A08 = 0;
  qword_4B07A10 = 0;
  qword_4B07A18 = 0;
  qword_4B07A28 = 0x100000000LL;
  qword_4B07A40 = 1;
  dword_4B07A48 = 0;
  byte_4B07A4C = 1;
  v1 = sub_259AC30(a1, &qword_4B07A30);
  v2 = (unsigned int)qword_4B07A28;
  v3 = (unsigned int)qword_4B07A28 + 1LL;
  if ( HIDWORD(qword_4B07A28) < v3 )
  {
    sub_25D6060(&qword_4B07A30 - 2, &qword_4B07A30, v3, 8);
    v2 = (unsigned int)qword_4B07A28;
  }
  si128 = _mm_load_si128(v10);
  *(_QWORD *)(qword_4B07A20 + 8 * v2) = v1;
  word_4B07A68 = 0;
  xmmword_4B07A78 = 0;
  qword_4B07A60 = (__int64)&off_4A64730;
  xmmword_4B07A88 = (__int128)si128;
  LODWORD(qword_4B07A28) = qword_4B07A28 + 1;
  qword_4B079E0 = (__int64)off_4A6DFF0;
  byte_4B07A58 = 0;
  qword_4B07A70 = (__int64)off_49D9168;
  sub_259F400(&qword_4B079E0, "unroll-runtime-multi-exit", 25);
  byte_4B07A58 = 0;
  word_4B07A68 = 256;
  qword_4B07A08 = 79;
  BYTE2(qword_4B079E8) = BYTE2(qword_4B079E8) & 0x9F | 0x20;
  qword_4B07A00 = (__int64)"Allow runtime unrolling for loops with multiple exits, when epilog is generated";
  sub_259EC40(&qword_4B079E0);
  __cxa_atexit(sub_1F6C9D0, &qword_4B079E0, &off_47CFE00);
  qword_4B07968 = 0x100000000LL;
  qword_4B07920 = (__int64)&off_4A6E058;
  qword_4B07928 = (unsigned int)qword_4B07928 & 0x80000000;
  qword_4B07960 = (__int64)&qword_4B07970;
  qword_4B07930 = 0;
  qword_4B07938 = 0;
  qword_4B07940 = 0;
  qword_4B07948 = 0;
  qword_4B07950 = 0;
  qword_4B07958 = 0;
  qword_4B07978 = (__int64)&qword_4B07990;
  qword_4B07980 = 1;
  dword_4B07988 = 0;
  byte_4B0798C = 1;
  v5 = sub_259AC30(sub_1F6C9D0, &qword_4B07970);
  v6 = (unsigned int)qword_4B07968;
  v7 = (unsigned int)qword_4B07968 + 1LL;
  if ( HIDWORD(qword_4B07968) < v7 )
  {
    sub_25D6060(&qword_4B07970 - 2, &qword_4B07970, v7, 8);
    v6 = (unsigned int)qword_4B07968;
  }
  v8 = _mm_load_si128(v10);
  *(_QWORD *)(qword_4B07960 + 8 * v6) = v5;
  word_4B079A8 = 0;
  xmmword_4B079B8 = 0;
  xmmword_4B079C8 = (__int128)v8;
  qword_4B079A0 = (__int64)&off_4A64730;
  LODWORD(qword_4B07968) = qword_4B07968 + 1;
  byte_4B07998 = 0;
  qword_4B07920 = (__int64)off_4A6DFF0;
  qword_4B079B0 = (__int64)off_49D9168;
  sub_259F400(&qword_4B07920, "unroll-runtime-other-exit-predictable", 37);
  word_4B079A8 = 256;
  byte_4B07998 = 0;
  qword_4B07948 = 49;
  BYTE2(qword_4B07928) = BYTE2(qword_4B07928) & 0x9F | 0x20;
  qword_4B07940 = (__int64)"Assume the non latch exit block to be predictable";
  sub_259EC40(&qword_4B07920);
  return __cxa_atexit(sub_1F6C9D0, &qword_4B07920, &off_47CFE00);
}

