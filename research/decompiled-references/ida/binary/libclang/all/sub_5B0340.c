int __fastcall sub_5B0340(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  unsigned __int64 v3; // rdx

  qword_4B06EB0 = 0;
  qword_4B06EB8 = 0;
  qword_4B06EC0 = 0;
  qword_4B06EA0 = (__int64)&off_4A6E058;
  qword_4B06EA8 = (unsigned int)qword_4B06EA8 & 0x80000000;
  qword_4B06EC8 = 0;
  qword_4B06EE8 = 0x100000000LL;
  qword_4B06ED0 = 0;
  qword_4B06ED8 = 0;
  qword_4B06EE0 = (__int64)&qword_4B06EF0;
  qword_4B06EF8 = (__int64)&qword_4B06F10;
  qword_4B06F00 = 1;
  dword_4B06F08 = 0;
  byte_4B06F0C = 1;
  v1 = sub_259AC30(a1, &qword_4B06EF0);
  v2 = (unsigned int)qword_4B06EE8;
  v3 = (unsigned int)qword_4B06EE8 + 1LL;
  if ( HIDWORD(qword_4B06EE8) < v3 )
  {
    sub_25D6060(&qword_4B06EF0 - 2, &qword_4B06EF0, v3, 8);
    v2 = (unsigned int)qword_4B06EE8;
  }
  *(_QWORD *)(qword_4B06EE0 + 8 * v2) = v1;
  word_4B06F28 = 0;
  xmmword_4B06F38 = 0;
  LODWORD(qword_4B06EE8) = qword_4B06EE8 + 1;
  qword_4B06F20 = (__int64)&off_4A64730;
  byte_4B06F18 = 0;
  qword_4B06EA0 = (__int64)off_4A6DFF0;
  qword_4B06F30 = (__int64)off_49D9168;
  xmmword_4B06F48 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49EBB28),
                                (__m128i)(unsigned __int64)nullsub_266);
  sub_259F400(&qword_4B06EA0, "ignore-redundant-instrumentation", 32);
  qword_4B06EC0 = (__int64)"Ignore redundant instrumentation";
  word_4B06F28 = 256;
  byte_4B06F18 = 0;
  qword_4B06EC8 = 32;
  BYTE2(qword_4B06EA8) = BYTE2(qword_4B06EA8) & 0x9F | 0x20;
  sub_259EC40(&qword_4B06EA0);
  return __cxa_atexit(sub_1F6C9D0, &qword_4B06EA0, &off_47CFE00);
}

