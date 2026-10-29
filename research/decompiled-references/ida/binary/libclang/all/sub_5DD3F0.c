int __fastcall sub_5DD3F0(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  unsigned __int64 v3; // rdx

  qword_4B22890 = 0;
  qword_4B22898 = 0;
  qword_4B228A0 = 0;
  qword_4B22880 = (__int64)&off_4A6E058;
  qword_4B22888 = (unsigned int)qword_4B22888 & 0x80000000;
  qword_4B228A8 = 0;
  qword_4B228C8 = 0x100000000LL;
  qword_4B228B0 = 0;
  qword_4B228B8 = 0;
  qword_4B228C0 = (__int64)&qword_4B228D0;
  qword_4B228D8 = (__int64)&qword_4B228F0;
  qword_4B228E0 = 1;
  dword_4B228E8 = 0;
  byte_4B228EC = 1;
  v1 = sub_259AC30(a1, &qword_4B228D0);
  v2 = (unsigned int)qword_4B228C8;
  v3 = (unsigned int)qword_4B228C8 + 1LL;
  if ( HIDWORD(qword_4B228C8) < v3 )
  {
    sub_25D6060(&qword_4B228D0 - 2, &qword_4B228D0, v3, 8);
    v2 = (unsigned int)qword_4B228C8;
  }
  *(_QWORD *)(qword_4B228C0 + 8 * v2) = v1;
  xmmword_4B22918 = 0;
  LODWORD(qword_4B228C8) = qword_4B228C8 + 1;
  qword_4B22900 = (__int64)&off_4A64710;
  dword_4B228F8 = 0;
  byte_4B2290C = 0;
  qword_4B22880 = (__int64)off_4A6DEB8;
  dword_4B22908 = 0;
  qword_4B22910 = (__int64)off_49D9228;
  xmmword_4B22928 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49EEC10),
                                (__m128i)(unsigned __int64)nullsub_267);
  sub_259F400(&qword_4B22880, "alias-set-saturation-threshold", 30);
  dword_4B228F8 = 250;
  byte_4B2290C = 1;
  dword_4B22908 = 250;
  qword_4B228A8 = 86;
  BYTE2(qword_4B22888) = BYTE2(qword_4B22888) & 0x9F | 0x20;
  qword_4B228A0 = (__int64)"The maximum total number of memory locations alias sets may contain before degradation";
  sub_259EC40(&qword_4B22880);
  return __cxa_atexit(sub_1F6C940, &qword_4B22880, &off_47CFE00);
}

