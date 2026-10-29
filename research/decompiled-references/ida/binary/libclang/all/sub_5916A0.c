int __fastcall sub_5916A0(__int64 a1)
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

  qword_4AF7F20 = (__int64)&qword_4AF7F30;
  qword_4AF7EF0 = 0;
  qword_4AF7EF8 = 0;
  qword_4AF7EE0 = (__int64)&off_4A6E058;
  qword_4AF7EE8 = (unsigned int)qword_4AF7EE8 & 0x80000000;
  qword_4AF7F38 = (__int64)&qword_4AF7F50;
  v10[0] = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_49EA320), (__m128i)(unsigned __int64)nullsub_266);
  qword_4AF7F00 = 0;
  qword_4AF7F08 = 0;
  qword_4AF7F10 = 0;
  qword_4AF7F18 = 0;
  qword_4AF7F28 = 0x100000000LL;
  qword_4AF7F40 = 1;
  dword_4AF7F48 = 0;
  byte_4AF7F4C = 1;
  v1 = sub_259AC30(a1, &qword_4AF7F30);
  v2 = (unsigned int)qword_4AF7F28;
  v3 = (unsigned int)qword_4AF7F28 + 1LL;
  if ( HIDWORD(qword_4AF7F28) < v3 )
  {
    sub_25D6060(&qword_4AF7F30 - 2, &qword_4AF7F30, v3, 8);
    v2 = (unsigned int)qword_4AF7F28;
  }
  si128 = _mm_load_si128(v10);
  *(_QWORD *)(qword_4AF7F20 + 8 * v2) = v1;
  qword_4AF7F60 = (__int64)&off_4A64730;
  word_4AF7F68 = 0;
  xmmword_4AF7F78 = 0;
  qword_4AF7EE0 = (__int64)off_4A6DFF0;
  xmmword_4AF7F88 = (__int128)si128;
  LODWORD(qword_4AF7F28) = qword_4AF7F28 + 1;
  qword_4AF7F70 = (__int64)off_49D9168;
  byte_4AF7F58 = 0;
  sub_259F400(&qword_4AF7EE0, "enable-selectiondag-sp", 22);
  word_4AF7F68 = 257;
  byte_4AF7F58 = 1;
  BYTE2(qword_4AF7EE8) = BYTE2(qword_4AF7EE8) & 0x9F | 0x20;
  sub_259EC40(&qword_4AF7EE0);
  __cxa_atexit(sub_1F6C9D0, &qword_4AF7EE0, &off_47CFE00);
  qword_4AF7E68 = 0x100000000LL;
  qword_4AF7E20 = (__int64)&off_4A6E058;
  qword_4AF7E28 = (unsigned int)qword_4AF7E28 & 0x80000000;
  qword_4AF7E60 = (__int64)&qword_4AF7E70;
  qword_4AF7E30 = 0;
  qword_4AF7E38 = 0;
  qword_4AF7E40 = 0;
  qword_4AF7E48 = 0;
  qword_4AF7E50 = 0;
  qword_4AF7E58 = 0;
  qword_4AF7E78 = (__int64)&qword_4AF7E90;
  qword_4AF7E80 = 1;
  dword_4AF7E88 = 0;
  byte_4AF7E8C = 1;
  v5 = sub_259AC30(sub_1F6C9D0, &qword_4AF7E70);
  v6 = (unsigned int)qword_4AF7E68;
  v7 = (unsigned int)qword_4AF7E68 + 1LL;
  if ( HIDWORD(qword_4AF7E68) < v7 )
  {
    sub_25D6060(&qword_4AF7E70 - 2, &qword_4AF7E70, v7, 8);
    v6 = (unsigned int)qword_4AF7E68;
  }
  v8 = _mm_load_si128(v10);
  *(_QWORD *)(qword_4AF7E60 + 8 * v6) = v5;
  word_4AF7EA8 = 0;
  qword_4AF7EA0 = (__int64)&off_4A64730;
  xmmword_4AF7EB8 = 0;
  xmmword_4AF7EC8 = (__int128)v8;
  qword_4AF7E20 = (__int64)off_4A6DFF0;
  LODWORD(qword_4AF7E68) = qword_4AF7E68 + 1;
  byte_4AF7E98 = 0;
  qword_4AF7EB0 = (__int64)off_49D9168;
  sub_259F400(&qword_4AF7E20, "disable-check-noreturn-call", 27);
  word_4AF7EA8 = 256;
  byte_4AF7E98 = 0;
  BYTE2(qword_4AF7E28) = BYTE2(qword_4AF7E28) & 0x9F | 0x20;
  sub_259EC40(&qword_4AF7E20);
  return __cxa_atexit(sub_1F6C9D0, &qword_4AF7E20, &off_47CFE00);
}

