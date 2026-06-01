int __fastcall sub_5BDF60(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  unsigned __int64 v3; // rdx

  qword_4B0D2B0 = 0;
  qword_4B0D2B8 = 0;
  qword_4B0D2C0 = 0;
  qword_4B0D2A0 = (__int64)&off_4A6E058;
  qword_4B0D2A8 = (unsigned int)qword_4B0D2A8 & 0x80000000;
  qword_4B0D2C8 = 0;
  qword_4B0D2E8 = 0x100000000LL;
  qword_4B0D2D0 = 0;
  qword_4B0D2D8 = 0;
  qword_4B0D2E0 = (__int64)&qword_4B0D2F0;
  qword_4B0D2F8 = (__int64)&qword_4B0D310;
  qword_4B0D300 = 1;
  dword_4B0D308 = 0;
  byte_4B0D30C = 1;
  v1 = sub_259AC30(a1, &qword_4B0D2F0);
  v2 = (unsigned int)qword_4B0D2E8;
  v3 = (unsigned int)qword_4B0D2E8 + 1LL;
  if ( HIDWORD(qword_4B0D2E8) < v3 )
  {
    sub_25D6060(&qword_4B0D2F0 - 2, &qword_4B0D2F0, v3, 8);
    v2 = (unsigned int)qword_4B0D2E8;
  }
  *(_QWORD *)(qword_4B0D2E0 + 8 * v2) = v1;
  xmmword_4B0D338 = 0;
  LODWORD(qword_4B0D2E8) = qword_4B0D2E8 + 1;
  qword_4B0D320 = (__int64)&off_4A64710;
  dword_4B0D318 = 0;
  byte_4B0D32C = 0;
  qword_4B0D2A0 = (__int64)off_4A6DEB8;
  dword_4B0D328 = 0;
  qword_4B0D330 = (__int64)off_49D9228;
  xmmword_4B0D348 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49EC298),
                                (__m128i)(unsigned __int64)nullsub_267);
  sub_259F400(&qword_4B0D2A0, "object-size-offset-visitor-max-visit-instructions", 49);
  qword_4B0D2C8 = 69;
  qword_4B0D2C0 = (__int64)"Maximum number of instructions for ObjectSizeOffsetVisitor to look at";
  dword_4B0D318 = 100;
  byte_4B0D32C = 1;
  dword_4B0D328 = 100;
  sub_259EC40(&qword_4B0D2A0);
  return __cxa_atexit(sub_1F6C940, &qword_4B0D2A0, &off_47CFE00);
}

