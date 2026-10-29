int __fastcall sub_5B8030(__int64 a1)
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

  qword_4B0A180 = (__int64)&qword_4B0A190;
  qword_4B0A150 = 0;
  qword_4B0A158 = 0;
  qword_4B0A140 = (__int64)&off_4A6E058;
  qword_4B0A148 = (unsigned int)qword_4B0A148 & 0x80000000;
  qword_4B0A198 = (__int64)&qword_4B0A1B0;
  v10[0] = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_49EBE08), (__m128i)(unsigned __int64)nullsub_266);
  qword_4B0A160 = 0;
  qword_4B0A168 = 0;
  qword_4B0A170 = 0;
  qword_4B0A178 = 0;
  qword_4B0A188 = 0x100000000LL;
  qword_4B0A1A0 = 1;
  dword_4B0A1A8 = 0;
  byte_4B0A1AC = 1;
  v1 = sub_259AC30(a1, &qword_4B0A190);
  v2 = (unsigned int)qword_4B0A188;
  v3 = (unsigned int)qword_4B0A188 + 1LL;
  if ( HIDWORD(qword_4B0A188) < v3 )
  {
    sub_25D6060(&qword_4B0A190 - 2, &qword_4B0A190, v3, 8);
    v2 = (unsigned int)qword_4B0A188;
  }
  si128 = _mm_load_si128(v10);
  *(_QWORD *)(qword_4B0A180 + 8 * v2) = v1;
  word_4B0A1C8 = 0;
  xmmword_4B0A1D8 = 0;
  qword_4B0A1C0 = (__int64)&off_4A64730;
  xmmword_4B0A1E8 = (__int128)si128;
  LODWORD(qword_4B0A188) = qword_4B0A188 + 1;
  qword_4B0A140 = (__int64)off_4A6DFF0;
  byte_4B0A1B8 = 0;
  qword_4B0A1D0 = (__int64)off_49D9168;
  sub_259F400(&qword_4B0A140, "basic-aa-recphi", 15);
  byte_4B0A1B8 = 1;
  word_4B0A1C8 = 257;
  BYTE2(qword_4B0A148) = BYTE2(qword_4B0A148) & 0x9F | 0x20;
  sub_259EC40(&qword_4B0A140);
  __cxa_atexit(sub_1F6C9D0, &qword_4B0A140, &off_47CFE00);
  qword_4B0A0C8 = 0x100000000LL;
  qword_4B0A080 = (__int64)&off_4A6E058;
  qword_4B0A088 = (unsigned int)qword_4B0A088 & 0x80000000;
  qword_4B0A0C0 = (__int64)&qword_4B0A0D0;
  qword_4B0A090 = 0;
  qword_4B0A098 = 0;
  qword_4B0A0A0 = 0;
  qword_4B0A0A8 = 0;
  qword_4B0A0B0 = 0;
  qword_4B0A0B8 = 0;
  qword_4B0A0D8 = (__int64)&qword_4B0A0F0;
  qword_4B0A0E0 = 1;
  dword_4B0A0E8 = 0;
  byte_4B0A0EC = 1;
  v5 = sub_259AC30(sub_1F6C9D0, &qword_4B0A0D0);
  v6 = (unsigned int)qword_4B0A0C8;
  v7 = (unsigned int)qword_4B0A0C8 + 1LL;
  if ( HIDWORD(qword_4B0A0C8) < v7 )
  {
    sub_25D6060(&qword_4B0A0D0 - 2, &qword_4B0A0D0, v7, 8);
    v6 = (unsigned int)qword_4B0A0C8;
  }
  v8 = _mm_load_si128(v10);
  *(_QWORD *)(qword_4B0A0C0 + 8 * v6) = v5;
  word_4B0A108 = 0;
  xmmword_4B0A118 = 0;
  xmmword_4B0A128 = (__int128)v8;
  qword_4B0A100 = (__int64)&off_4A64730;
  LODWORD(qword_4B0A0C8) = qword_4B0A0C8 + 1;
  byte_4B0A0F8 = 0;
  qword_4B0A080 = (__int64)off_4A6DFF0;
  qword_4B0A110 = (__int64)off_49D9168;
  sub_259F400(&qword_4B0A080, "basic-aa-separate-storage", 25);
  word_4B0A108 = 257;
  byte_4B0A0F8 = 1;
  BYTE2(qword_4B0A088) = BYTE2(qword_4B0A088) & 0x9F | 0x20;
  sub_259EC40(&qword_4B0A080);
  return __cxa_atexit(sub_1F6C9D0, &qword_4B0A080, &off_47CFE00);
}

