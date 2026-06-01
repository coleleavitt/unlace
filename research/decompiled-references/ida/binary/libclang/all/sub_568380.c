int __fastcall sub_568380(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  unsigned __int64 v3; // rdx

  qword_4ADE090 = 0;
  qword_4ADE098 = 0;
  qword_4ADE0A0 = 0;
  qword_4ADE080 = (__int64)&off_4A6E058;
  qword_4ADE088 = (unsigned int)qword_4ADE088 & 0x80000000;
  qword_4ADE0A8 = 0;
  qword_4ADE0C8 = 0x100000000LL;
  qword_4ADE0B0 = 0;
  qword_4ADE0B8 = 0;
  qword_4ADE0C0 = (__int64)&qword_4ADE0D0;
  qword_4ADE0D8 = (__int64)&qword_4ADE0F0;
  qword_4ADE0E0 = 1;
  dword_4ADE0E8 = 0;
  byte_4ADE0EC = 1;
  v1 = sub_259AC30(a1, &qword_4ADE0D0);
  v2 = (unsigned int)qword_4ADE0C8;
  v3 = (unsigned int)qword_4ADE0C8 + 1LL;
  if ( HIDWORD(qword_4ADE0C8) < v3 )
  {
    sub_25D6060(&qword_4ADE0D0 - 2, &qword_4ADE0D0, v3, 8);
    v2 = (unsigned int)qword_4ADE0C8;
  }
  *(_QWORD *)(qword_4ADE0C0 + 8 * v2) = v1;
  word_4ADE108 = 0;
  qword_4ADE100 = (__int64)&off_4A64730;
  xmmword_4ADE118 = 0;
  LODWORD(qword_4ADE0C8) = qword_4ADE0C8 + 1;
  qword_4ADE080 = (__int64)off_4A6DFF0;
  byte_4ADE0F8 = 0;
  qword_4ADE110 = (__int64)off_49D9168;
  xmmword_4ADE128 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49CA348),
                                (__m128i)(unsigned __int64)nullsub_266);
  sub_259F400(&qword_4ADE080, "no-x86-call-frame-opt", 21);
  qword_4ADE0A0 = (__int64)"Avoid optimizing x86 call frames for size";
  word_4ADE108 = 256;
  byte_4ADE0F8 = 0;
  qword_4ADE0A8 = 41;
  BYTE2(qword_4ADE088) = BYTE2(qword_4ADE088) & 0x9F | 0x20;
  sub_259EC40(&qword_4ADE080);
  return __cxa_atexit(sub_1F6C9D0, &qword_4ADE080, &off_47CFE00);
}

