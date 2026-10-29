int __fastcall sub_5C0030(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  unsigned __int64 v3; // rdx

  qword_4B0E050 = 0;
  qword_4B0E058 = 0;
  qword_4B0E060 = 0;
  qword_4B0E040 = (__int64)&off_4A6E058;
  qword_4B0E048 = (unsigned int)qword_4B0E048 & 0x80000000;
  qword_4B0E068 = 0;
  qword_4B0E088 = 0x100000000LL;
  qword_4B0E070 = 0;
  qword_4B0E078 = 0;
  qword_4B0E080 = (__int64)&qword_4B0E090;
  qword_4B0E098 = (__int64)&qword_4B0E0B0;
  qword_4B0E0A0 = 1;
  dword_4B0E0A8 = 0;
  byte_4B0E0AC = 1;
  v1 = sub_259AC30(a1, &qword_4B0E090);
  v2 = (unsigned int)qword_4B0E088;
  v3 = (unsigned int)qword_4B0E088 + 1LL;
  if ( HIDWORD(qword_4B0E088) < v3 )
  {
    sub_25D6060(&qword_4B0E090 - 2, &qword_4B0E090, v3, 8);
    v2 = (unsigned int)qword_4B0E088;
  }
  *(_QWORD *)(qword_4B0E080 + 8 * v2) = v1;
  word_4B0E0C8 = 0;
  xmmword_4B0E0D8 = 0;
  LODWORD(qword_4B0E088) = qword_4B0E088 + 1;
  qword_4B0E0C0 = (__int64)&off_4A64730;
  byte_4B0E0B8 = 0;
  qword_4B0E040 = (__int64)off_4A6DFF0;
  qword_4B0E0D0 = (__int64)off_49D9168;
  xmmword_4B0E0E8 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49EC3A0),
                                (__m128i)(unsigned __int64)nullsub_266);
  sub_259F400(&qword_4B0E040, "gvn-add-phi-translation", 23);
  word_4B0E0C8 = 256;
  byte_4B0E0B8 = 0;
  qword_4B0E068 = 42;
  BYTE2(qword_4B0E048) = BYTE2(qword_4B0E048) & 0x9F | 0x20;
  qword_4B0E060 = (__int64)"Enable phi-translation of add instructions";
  sub_259EC40(&qword_4B0E040);
  return __cxa_atexit(sub_1F6C9D0, &qword_4B0E040, &off_47CFE00);
}

