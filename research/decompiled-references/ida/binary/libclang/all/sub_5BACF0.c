int __fastcall sub_5BACF0(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  unsigned __int64 v3; // rdx

  qword_4B0B250 = 0;
  qword_4B0B258 = 0;
  qword_4B0B260 = 0;
  qword_4B0B240 = (__int64)&off_4A6E058;
  qword_4B0B248 = (unsigned int)qword_4B0B248 & 0x80000000;
  qword_4B0B268 = 0;
  qword_4B0B288 = 0x100000000LL;
  qword_4B0B270 = 0;
  qword_4B0B278 = 0;
  qword_4B0B280 = (__int64)&qword_4B0B290;
  qword_4B0B298 = (__int64)&qword_4B0B2B0;
  qword_4B0B2A0 = 1;
  dword_4B0B2A8 = 0;
  byte_4B0B2AC = 1;
  v1 = sub_259AC30(a1, &qword_4B0B290);
  v2 = (unsigned int)qword_4B0B288;
  v3 = (unsigned int)qword_4B0B288 + 1LL;
  if ( HIDWORD(qword_4B0B288) < v3 )
  {
    sub_25D6060(&qword_4B0B290 - 2, &qword_4B0B290, v3, 8);
    v2 = (unsigned int)qword_4B0B288;
  }
  *(_QWORD *)(qword_4B0B280 + 8 * v2) = v1;
  xmmword_4B0B2D8 = 0;
  LODWORD(qword_4B0B288) = qword_4B0B288 + 1;
  qword_4B0B2C0 = (__int64)&off_4A64710;
  dword_4B0B2B8 = 0;
  byte_4B0B2CC = 0;
  qword_4B0B240 = (__int64)off_4A6DEB8;
  dword_4B0B2C8 = 0;
  qword_4B0B2D0 = (__int64)off_49D9228;
  xmmword_4B0B2E8 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49EBF30),
                                (__m128i)(unsigned __int64)nullsub_267);
  sub_259F400(&qword_4B0B240, "capture-tracking-max-uses-to-explore", 36);
  qword_4B0B268 = 34;
  dword_4B0B2B8 = 100;
  byte_4B0B2CC = 1;
  dword_4B0B2C8 = 100;
  BYTE2(qword_4B0B248) = BYTE2(qword_4B0B248) & 0x9F | 0x20;
  qword_4B0B260 = (__int64)"Maximal number of uses to explore.";
  sub_259EC40(&qword_4B0B240);
  return __cxa_atexit(sub_1F6C940, &qword_4B0B240, &off_47CFE00);
}

