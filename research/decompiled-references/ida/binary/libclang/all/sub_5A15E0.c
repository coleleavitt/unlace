int __fastcall sub_5A15E0(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  unsigned __int64 v3; // rdx

  qword_4B00D90 = 0;
  qword_4B00D98 = 0;
  qword_4B00DA0 = 0;
  qword_4B00D80 = (__int64)&off_4A6E058;
  qword_4B00D88 = (unsigned int)qword_4B00D88 & 0x80000000;
  qword_4B00DA8 = 0;
  qword_4B00DC8 = 0x100000000LL;
  qword_4B00DB0 = 0;
  qword_4B00DB8 = 0;
  qword_4B00DC0 = (__int64)&qword_4B00DD0;
  qword_4B00DD8 = (__int64)&qword_4B00DF0;
  qword_4B00DE0 = 1;
  dword_4B00DE8 = 0;
  byte_4B00DEC = 1;
  v1 = sub_259AC30(a1, &qword_4B00DD0);
  v2 = (unsigned int)qword_4B00DC8;
  v3 = (unsigned int)qword_4B00DC8 + 1LL;
  if ( HIDWORD(qword_4B00DC8) < v3 )
  {
    sub_25D6060(&qword_4B00DD0 - 2, &qword_4B00DD0, v3, 8);
    v2 = (unsigned int)qword_4B00DC8;
  }
  *(_QWORD *)(qword_4B00DC0 + 8 * v2) = v1;
  word_4B00E08 = 0;
  xmmword_4B00E18 = 0;
  LODWORD(qword_4B00DC8) = qword_4B00DC8 + 1;
  qword_4B00E00 = (__int64)&off_4A64730;
  byte_4B00DF8 = 0;
  qword_4B00D80 = (__int64)off_4A6DFF0;
  qword_4B00E10 = (__int64)off_49D9168;
  xmmword_4B00E28 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49EB418),
                                (__m128i)(unsigned __int64)nullsub_266);
  sub_259F400(&qword_4B00D80, "mir-strip-debugify-only", 23);
  word_4B00E08 = 257;
  qword_4B00DA0 = (__int64)"Should mir-strip-debug only strip debug info from debugified modules by default";
  qword_4B00DA8 = 79;
  byte_4B00DF8 = 1;
  sub_259EC40(&qword_4B00D80);
  return __cxa_atexit(sub_1F6C9D0, &qword_4B00D80, &off_47CFE00);
}

