int __fastcall sub_56AA00(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  unsigned __int64 v3; // rdx

  qword_4ADFDD0 = 0;
  qword_4ADFDD8 = 0;
  qword_4ADFDE0 = 0;
  qword_4ADFDC0 = (__int64)&off_4A6E058;
  qword_4ADFDC8 = (unsigned int)qword_4ADFDC8 & 0x80000000;
  qword_4ADFDE8 = 0;
  qword_4ADFE08 = 0x100000000LL;
  qword_4ADFDF0 = 0;
  qword_4ADFDF8 = 0;
  qword_4ADFE00 = (__int64)&qword_4ADFE10;
  qword_4ADFE18 = (__int64)&qword_4ADFE30;
  qword_4ADFE20 = 1;
  dword_4ADFE28 = 0;
  byte_4ADFE2C = 1;
  v1 = sub_259AC30(a1, &qword_4ADFE10);
  v2 = (unsigned int)qword_4ADFE08;
  v3 = (unsigned int)qword_4ADFE08 + 1LL;
  if ( HIDWORD(qword_4ADFE08) < v3 )
  {
    sub_25D6060(&qword_4ADFE10 - 2, &qword_4ADFE10, v3, 8);
    v2 = (unsigned int)qword_4ADFE08;
  }
  *(_QWORD *)(qword_4ADFE00 + 8 * v2) = v1;
  src = &byte_4ADFE48;
  LODWORD(qword_4ADFE08) = qword_4ADFE08 + 1;
  qword_4ADFE40 = 0;
  qword_4ADFDC0 = (__int64)&off_4A6DF88;
  xmmword_4ADFE58 = (__int128)_mm_unpacklo_epi64(
                                (__m128i)(unsigned __int64)&off_49D9118,
                                (__m128i)(unsigned __int64)&byte_4ADFE70);
  xmmword_4ADFE90 = 0;
  qword_4ADFE88 = (__int64)off_49D92E8;
  byte_4ADFE48 = 0;
  byte_4ADFE70 = 0;
  xmmword_4ADFEA0 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49CBDE8),
                                (__m128i)(unsigned __int64)nullsub_294);
  qword_4ADFE68 = 0;
  byte_4ADFE80 = 0;
  sub_259F400(&qword_4ADFDC0, "prefetch-hints-file", 19);
  qword_4ADFDE8 = 69;
  qword_4ADFDE0 = (__int64)"Path to the prefetch hints profile. See also -x86-discriminate-memops";
  BYTE2(qword_4ADFDC8) = BYTE2(qword_4ADFDC8) & 0x9F | 0x20;
  sub_259EC40(&qword_4ADFDC0);
  return __cxa_atexit(sub_2283FB0, &qword_4ADFDC0, &off_47CFE00);
}

