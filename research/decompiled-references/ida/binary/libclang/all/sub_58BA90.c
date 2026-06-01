int __fastcall sub_58BA90(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  unsigned __int64 v3; // rdx

  qword_4AF5250 = 0;
  qword_4AF5258 = 0;
  qword_4AF5260 = 0;
  qword_4AF5240 = (__int64)&off_4A6E058;
  qword_4AF5248 = (unsigned int)qword_4AF5248 & 0x80000000;
  qword_4AF5268 = 0;
  qword_4AF5288 = 0x100000000LL;
  qword_4AF5270 = 0;
  qword_4AF5278 = 0;
  qword_4AF5280 = (__int64)&qword_4AF5290;
  qword_4AF5298 = (__int64)&qword_4AF52B0;
  qword_4AF52A0 = 1;
  dword_4AF52A8 = 0;
  byte_4AF52AC = 1;
  v1 = sub_259AC30(a1, &qword_4AF5290);
  v2 = (unsigned int)qword_4AF5288;
  v3 = (unsigned int)qword_4AF5288 + 1LL;
  if ( HIDWORD(qword_4AF5288) < v3 )
  {
    sub_25D6060(&qword_4AF5290 - 2, &qword_4AF5290, v3, 8);
    v2 = (unsigned int)qword_4AF5288;
  }
  *(_QWORD *)(qword_4AF5280 + 8 * v2) = v1;
  word_4AF52C8 = 0;
  xmmword_4AF52D8 = 0;
  LODWORD(qword_4AF5288) = qword_4AF5288 + 1;
  qword_4AF52C0 = (__int64)&off_4A64730;
  byte_4AF52B8 = 0;
  qword_4AF5240 = (__int64)off_4A6DFF0;
  qword_4AF52D0 = (__int64)off_49D9168;
  xmmword_4AF52E8 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49E9F60),
                                (__m128i)(unsigned __int64)nullsub_266);
  sub_259F400(&qword_4AF5240, "misched-fusion", 14);
  word_4AF52C8 = 257;
  byte_4AF52B8 = 1;
  qword_4AF5268 = 35;
  BYTE2(qword_4AF5248) = BYTE2(qword_4AF5248) & 0x9F | 0x20;
  qword_4AF5260 = (__int64)"Enable scheduling for macro fusion.";
  sub_259EC40(&qword_4AF5240);
  return __cxa_atexit(sub_1F6C9D0, &qword_4AF5240, &off_47CFE00);
}

