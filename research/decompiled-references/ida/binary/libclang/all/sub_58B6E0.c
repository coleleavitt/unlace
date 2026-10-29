int __fastcall sub_58B6E0(__int64 a1)
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

  qword_4AF51C0 = (__int64)&qword_4AF51D0;
  qword_4AF5190 = 0;
  qword_4AF5198 = 0;
  qword_4AF5180 = (__int64)&off_4A6E058;
  qword_4AF5188 = (unsigned int)qword_4AF5188 & 0x80000000;
  qword_4AF51D8 = (__int64)&qword_4AF51F0;
  v10[0] = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_49E9F58), (__m128i)(unsigned __int64)nullsub_266);
  qword_4AF51A0 = 0;
  qword_4AF51A8 = 0;
  qword_4AF51B0 = 0;
  qword_4AF51B8 = 0;
  qword_4AF51C8 = 0x100000000LL;
  qword_4AF51E0 = 1;
  dword_4AF51E8 = 0;
  byte_4AF51EC = 1;
  v1 = sub_259AC30(a1, &qword_4AF51D0);
  v2 = (unsigned int)qword_4AF51C8;
  v3 = (unsigned int)qword_4AF51C8 + 1LL;
  if ( HIDWORD(qword_4AF51C8) < v3 )
  {
    sub_25D6060(&qword_4AF51D0 - 2, &qword_4AF51D0, v3, 8);
    v2 = (unsigned int)qword_4AF51C8;
  }
  si128 = _mm_load_si128(v10);
  *(_QWORD *)(qword_4AF51C0 + 8 * v2) = v1;
  qword_4AF5200 = (__int64)&off_4A64730;
  word_4AF5208 = 0;
  xmmword_4AF5218 = 0;
  qword_4AF5180 = (__int64)off_4A6DFF0;
  xmmword_4AF5228 = (__int128)si128;
  LODWORD(qword_4AF51C8) = qword_4AF51C8 + 1;
  qword_4AF5210 = (__int64)off_49D9168;
  byte_4AF51F8 = 0;
  sub_259F400(&qword_4AF5180, "simplify-mir", 12);
  qword_4AF51A8 = 51;
  BYTE2(qword_4AF5188) = BYTE2(qword_4AF5188) & 0x9F | 0x20;
  qword_4AF51A0 = (__int64)"Leave out unnecessary information when printing MIR";
  sub_259EC40(&qword_4AF5180);
  __cxa_atexit(sub_1F6C9D0, &qword_4AF5180, &off_47CFE00);
  qword_4AF5108 = 0x100000000LL;
  qword_4AF50C0 = (__int64)&off_4A6E058;
  qword_4AF50C8 = (unsigned int)qword_4AF50C8 & 0x80000000;
  qword_4AF5100 = (__int64)&qword_4AF5110;
  qword_4AF50D0 = 0;
  qword_4AF50D8 = 0;
  qword_4AF50E0 = 0;
  qword_4AF50E8 = 0;
  qword_4AF50F0 = 0;
  qword_4AF50F8 = 0;
  qword_4AF5118 = (__int64)&qword_4AF5130;
  qword_4AF5120 = 1;
  dword_4AF5128 = 0;
  byte_4AF512C = 1;
  v5 = sub_259AC30(sub_1F6C9D0, &qword_4AF5110);
  v6 = (unsigned int)qword_4AF5108;
  v7 = (unsigned int)qword_4AF5108 + 1LL;
  if ( HIDWORD(qword_4AF5108) < v7 )
  {
    sub_25D6060(&qword_4AF5110 - 2, &qword_4AF5110, v7, 8);
    v6 = (unsigned int)qword_4AF5108;
  }
  v8 = _mm_load_si128(v10);
  *(_QWORD *)(qword_4AF5100 + 8 * v6) = v5;
  word_4AF5148 = 0;
  qword_4AF5140 = (__int64)&off_4A64730;
  xmmword_4AF5158 = 0;
  xmmword_4AF5168 = (__int128)v8;
  qword_4AF50C0 = (__int64)off_4A6DFF0;
  LODWORD(qword_4AF5108) = qword_4AF5108 + 1;
  byte_4AF5138 = 0;
  qword_4AF5150 = (__int64)off_49D9168;
  sub_259F400(&qword_4AF50C0, "mir-debug-loc", 13);
  word_4AF5148 = 257;
  byte_4AF5138 = 1;
  qword_4AF50E8 = 25;
  BYTE2(qword_4AF50C8) = BYTE2(qword_4AF50C8) & 0x9F | 0x20;
  qword_4AF50E0 = (__int64)"Print MIR debug-locations";
  sub_259EC40(&qword_4AF50C0);
  return __cxa_atexit(sub_1F6C9D0, &qword_4AF50C0, &off_47CFE00);
}

