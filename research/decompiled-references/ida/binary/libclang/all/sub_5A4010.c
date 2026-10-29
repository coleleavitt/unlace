int __fastcall sub_5A4010(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  unsigned __int64 v3; // rdx

  qword_4B02210 = 0;
  qword_4B02218 = 0;
  qword_4B02220 = 0;
  qword_4B02200 = (__int64)&off_4A6E058;
  qword_4B02208 = (unsigned int)qword_4B02208 & 0x80000000;
  qword_4B02228 = 0;
  qword_4B02248 = 0x100000000LL;
  qword_4B02230 = 0;
  qword_4B02238 = 0;
  qword_4B02240 = (__int64)&qword_4B02250;
  qword_4B02258 = (__int64)&qword_4B02270;
  qword_4B02260 = 1;
  dword_4B02268 = 0;
  byte_4B0226C = 1;
  v1 = sub_259AC30(a1, &qword_4B02250);
  v2 = (unsigned int)qword_4B02248;
  v3 = (unsigned int)qword_4B02248 + 1LL;
  if ( HIDWORD(qword_4B02248) < v3 )
  {
    sub_25D6060(&qword_4B02250 - 2, &qword_4B02250, v3, 8);
    v2 = (unsigned int)qword_4B02248;
  }
  *(_QWORD *)(qword_4B02240 + 8 * v2) = v1;
  xmmword_4B02298 = 0;
  LODWORD(qword_4B02248) = qword_4B02248 + 1;
  qword_4B02280 = (__int64)&off_4A64710;
  dword_4B02278 = 0;
  byte_4B0228C = 0;
  qword_4B02200 = (__int64)off_4A6DEB8;
  dword_4B02288 = 0;
  qword_4B02290 = (__int64)off_49D9228;
  xmmword_4B022A8 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49EB5C8),
                                (__m128i)(unsigned __int64)nullsub_267);
  sub_259F400(&qword_4B02200, "canon-nth-function", 18);
  dword_4B02278 = -1;
  byte_4B0228C = 1;
  dword_4B02288 = -1;
  qword_4B02238 = 1;
  BYTE2(qword_4B02208) = BYTE2(qword_4B02208) & 0x9F | 0x20;
  qword_4B02230 = (__int64)"N";
  qword_4B02220 = (__int64)"Function number to canonicalize.";
  qword_4B02228 = 32;
  sub_259EC40(&qword_4B02200);
  return __cxa_atexit(sub_1F6C940, &qword_4B02200, &off_47CFE00);
}

