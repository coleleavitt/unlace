int __fastcall sub_58CC40(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  unsigned __int64 v3; // rdx

  qword_4AF5AD0 = 0;
  qword_4AF5AD8 = 0;
  qword_4AF5AE0 = 0;
  qword_4AF5AC0 = (__int64)&off_4A6E058;
  qword_4AF5AC8 = (unsigned int)qword_4AF5AC8 & 0x80000000;
  qword_4AF5AE8 = 0;
  qword_4AF5B08 = 0x100000000LL;
  qword_4AF5AF0 = 0;
  qword_4AF5AF8 = 0;
  qword_4AF5B00 = (__int64)&qword_4AF5B10;
  qword_4AF5B18 = (__int64)&qword_4AF5B30;
  qword_4AF5B20 = 1;
  dword_4AF5B28 = 0;
  byte_4AF5B2C = 1;
  v1 = sub_259AC30(a1, &qword_4AF5B10);
  v2 = (unsigned int)qword_4AF5B08;
  v3 = (unsigned int)qword_4AF5B08 + 1LL;
  if ( HIDWORD(qword_4AF5B08) < v3 )
  {
    sub_25D6060(&qword_4AF5B10 - 2, &qword_4AF5B10, v3, 8);
    v2 = (unsigned int)qword_4AF5B08;
  }
  *(_QWORD *)(qword_4AF5B00 + 8 * v2) = v1;
  xmmword_4AF5B58 = 0;
  LODWORD(qword_4AF5B08) = qword_4AF5B08 + 1;
  qword_4AF5B40 = (__int64)&off_4A64710;
  dword_4AF5B38 = 0;
  byte_4AF5B4C = 0;
  qword_4AF5AC0 = (__int64)off_4A6DEB8;
  dword_4AF5B48 = 0;
  qword_4AF5B50 = (__int64)off_49D9228;
  xmmword_4AF5B68 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49EA0F0),
                                (__m128i)(unsigned __int64)nullsub_267);
  sub_259F400(&qword_4AF5AC0, "rdf-liveness-max-rec", 20);
  dword_4AF5B38 = 25;
  byte_4AF5B4C = 1;
  dword_4AF5B48 = 25;
  qword_4AF5AE8 = 23;
  BYTE2(qword_4AF5AC8) = BYTE2(qword_4AF5AC8) & 0x9F | 0x20;
  qword_4AF5AE0 = (__int64)"Maximum recursion level";
  sub_259EC40(&qword_4AF5AC0);
  return __cxa_atexit(sub_1F6C940, &qword_4AF5AC0, &off_47CFE00);
}

