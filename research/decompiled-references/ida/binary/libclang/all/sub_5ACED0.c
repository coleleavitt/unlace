int __fastcall sub_5ACED0(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  unsigned __int64 v3; // rdx

  qword_4B05870 = 0;
  qword_4B05878 = 0;
  qword_4B05880 = 0;
  qword_4B05860 = (__int64)&off_4A6E058;
  qword_4B05868 = (unsigned int)qword_4B05868 & 0x80000000;
  qword_4B05888 = 0;
  qword_4B058A8 = 0x100000000LL;
  qword_4B05890 = 0;
  qword_4B05898 = 0;
  qword_4B058A0 = (__int64)&qword_4B058B0;
  qword_4B058B8 = (__int64)&qword_4B058D0;
  qword_4B058C0 = 1;
  dword_4B058C8 = 0;
  byte_4B058CC = 1;
  v1 = sub_259AC30(a1, &qword_4B058B0);
  v2 = (unsigned int)qword_4B058A8;
  v3 = (unsigned int)qword_4B058A8 + 1LL;
  if ( HIDWORD(qword_4B058A8) < v3 )
  {
    sub_25D6060(&qword_4B058B0 - 2, &qword_4B058B0, v3, 8);
    v2 = (unsigned int)qword_4B058A8;
  }
  *(_QWORD *)(qword_4B058A0 + 8 * v2) = v1;
  word_4B058E8 = 0;
  xmmword_4B058F8 = 0;
  LODWORD(qword_4B058A8) = qword_4B058A8 + 1;
  qword_4B058E0 = (__int64)&off_4A64730;
  byte_4B058D8 = 0;
  qword_4B05860 = (__int64)off_4A6DFF0;
  qword_4B058F0 = (__int64)off_49D9168;
  xmmword_4B05908 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49EBAD0),
                                (__m128i)(unsigned __int64)nullsub_266);
  sub_259F400(&qword_4B05860, "aggregate-extracted-args", 24);
  qword_4B05888 = 47;
  BYTE2(qword_4B05868) = BYTE2(qword_4B05868) & 0x9F | 0x20;
  qword_4B05880 = (__int64)"Aggregate arguments to code-extracted functions";
  sub_259EC40(&qword_4B05860);
  return __cxa_atexit(sub_1F6C9D0, &qword_4B05860, &off_47CFE00);
}

