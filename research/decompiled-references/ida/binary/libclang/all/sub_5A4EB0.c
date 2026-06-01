int __fastcall sub_5A4EB0(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  unsigned __int64 v3; // rdx

  qword_4B02930 = 0;
  qword_4B02938 = 0;
  qword_4B02940 = 0;
  qword_4B02920 = (__int64)&off_4A6E058;
  qword_4B02928 = (unsigned int)qword_4B02928 & 0x80000000;
  qword_4B02948 = 0;
  qword_4B02968 = 0x100000000LL;
  qword_4B02950 = 0;
  qword_4B02958 = 0;
  qword_4B02960 = (__int64)&qword_4B02970;
  qword_4B02978 = (__int64)&qword_4B02990;
  qword_4B02980 = 1;
  dword_4B02988 = 0;
  byte_4B0298C = 1;
  v1 = sub_259AC30(a1, &qword_4B02970);
  v2 = (unsigned int)qword_4B02968;
  v3 = (unsigned int)qword_4B02968 + 1LL;
  if ( HIDWORD(qword_4B02968) < v3 )
  {
    sub_25D6060(&qword_4B02970 - 2, &qword_4B02970, v3, 8);
    v2 = (unsigned int)qword_4B02968;
  }
  *(_QWORD *)(qword_4B02960 + 8 * v2) = v1;
  word_4B029A8 = 0;
  xmmword_4B029B8 = 0;
  LODWORD(qword_4B02968) = qword_4B02968 + 1;
  qword_4B029A0 = (__int64)&off_4A64730;
  byte_4B02998 = 0;
  qword_4B02920 = (__int64)off_4A6DFF0;
  qword_4B029B0 = (__int64)off_49D9168;
  xmmword_4B029C8 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49EB6A8),
                                (__m128i)(unsigned __int64)nullsub_266);
  sub_259F400(&qword_4B02920, "disable-type-promotion", 22);
  word_4B029A8 = 256;
  byte_4B02998 = 0;
  qword_4B02948 = 27;
  BYTE2(qword_4B02928) = BYTE2(qword_4B02928) & 0x9F | 0x20;
  qword_4B02940 = (__int64)"Disable type promotion pass";
  sub_259EC40(&qword_4B02920);
  return __cxa_atexit(sub_1F6C9D0, &qword_4B02920, &off_47CFE00);
}

