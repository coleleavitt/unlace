int __fastcall sub_568190(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  unsigned __int64 v3; // rdx

  qword_4ADDFB0 = 0;
  qword_4ADDFB8 = 0;
  qword_4ADDFC0 = 0;
  qword_4ADDFA0 = (__int64)&off_4A6E058;
  qword_4ADDFA8 = (unsigned int)qword_4ADDFA8 & 0x80000000;
  qword_4ADDFC8 = 0;
  qword_4ADDFE8 = 0x100000000LL;
  qword_4ADDFD0 = 0;
  qword_4ADDFD8 = 0;
  qword_4ADDFE0 = (__int64)&qword_4ADDFF0;
  qword_4ADDFF8 = (__int64)&qword_4ADE010;
  qword_4ADE000 = 1;
  dword_4ADE008 = 0;
  byte_4ADE00C = 1;
  v1 = sub_259AC30(a1, &qword_4ADDFF0);
  v2 = (unsigned int)qword_4ADDFE8;
  v3 = (unsigned int)qword_4ADDFE8 + 1LL;
  if ( HIDWORD(qword_4ADDFE8) < v3 )
  {
    sub_25D6060(&qword_4ADDFF0 - 2, &qword_4ADDFF0, v3, 8);
    v2 = (unsigned int)qword_4ADDFE8;
  }
  *(_QWORD *)(qword_4ADDFE0 + 8 * v2) = v1;
  word_4ADE028 = 0;
  qword_4ADE020 = (__int64)&off_4A64730;
  xmmword_4ADE038 = 0;
  LODWORD(qword_4ADDFE8) = qword_4ADDFE8 + 1;
  qword_4ADDFA0 = (__int64)off_4A6DFF0;
  byte_4ADE018 = 0;
  qword_4ADE030 = (__int64)off_49D9168;
  xmmword_4ADE048 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49CA340),
                                (__m128i)(unsigned __int64)nullsub_266);
  sub_259F400(&qword_4ADDFA0, "x86-use-vzeroupper", 18);
  word_4ADE028 = 257;
  byte_4ADE018 = 1;
  qword_4ADDFC8 = 38;
  BYTE2(qword_4ADDFA8) = BYTE2(qword_4ADDFA8) & 0x9F | 0x20;
  qword_4ADDFC0 = (__int64)"Minimize AVX to SSE transition penalty";
  sub_259EC40(&qword_4ADDFA0);
  return __cxa_atexit(sub_1F6C9D0, &qword_4ADDFA0, &off_47CFE00);
}

