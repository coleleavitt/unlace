int __fastcall sub_585920(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  unsigned __int64 v3; // rdx

  qword_4AF22B0 = 0;
  qword_4AF22B8 = 0;
  qword_4AF22C0 = 0;
  qword_4AF22A0 = (__int64)&off_4A6E058;
  qword_4AF22A8 = (unsigned int)qword_4AF22A8 & 0x80000000;
  qword_4AF22C8 = 0;
  qword_4AF22E8 = 0x100000000LL;
  qword_4AF22D0 = 0;
  qword_4AF22D8 = 0;
  qword_4AF22E0 = (__int64)&qword_4AF22F0;
  qword_4AF22F8 = (__int64)&qword_4AF2310;
  qword_4AF2300 = 1;
  dword_4AF2308 = 0;
  byte_4AF230C = 1;
  v1 = sub_259AC30(a1, &qword_4AF22F0);
  v2 = (unsigned int)qword_4AF22E8;
  v3 = (unsigned int)qword_4AF22E8 + 1LL;
  if ( HIDWORD(qword_4AF22E8) < v3 )
  {
    sub_25D6060(&qword_4AF22F0 - 2, &qword_4AF22F0, v3, 8);
    v2 = (unsigned int)qword_4AF22E8;
  }
  *(_QWORD *)(qword_4AF22E0 + 8 * v2) = v1;
  xmmword_4AF2338 = 0;
  LODWORD(qword_4AF22E8) = qword_4AF22E8 + 1;
  qword_4AF2320 = (__int64)&off_4A64710;
  dword_4AF2318 = 0;
  byte_4AF232C = 0;
  qword_4AF22A0 = (__int64)off_4A6DEB8;
  dword_4AF2328 = 0;
  qword_4AF2330 = (__int64)off_49D9228;
  xmmword_4AF2348 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49E93F0),
                                (__m128i)(unsigned __int64)nullsub_267);
  sub_259F400(&qword_4AF22A0, "expand-fp-convert-bits", 22);
  dword_4AF2318 = 0x800000;
  byte_4AF232C = 1;
  dword_4AF2328 = 0x800000;
  qword_4AF22C8 = 73;
  BYTE2(qword_4AF22A8) = BYTE2(qword_4AF22A8) & 0x9F | 0x20;
  qword_4AF22C0 = (__int64)"fp convert instructions on integers with more than <N> bits are expanded.";
  sub_259EC40(&qword_4AF22A0);
  return __cxa_atexit(sub_1F6C940, &qword_4AF22A0, &off_47CFE00);
}

