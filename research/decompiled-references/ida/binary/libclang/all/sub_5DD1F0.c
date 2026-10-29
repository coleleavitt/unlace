int __fastcall sub_5DD1F0(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  unsigned __int64 v3; // rdx

  qword_4B227D0 = 0;
  qword_4B227D8 = 0;
  qword_4B227E0 = 0;
  qword_4B227C0 = (__int64)&off_4A6E058;
  qword_4B227C8 = (unsigned int)qword_4B227C8 & 0x80000000;
  qword_4B227E8 = 0;
  qword_4B22808 = 0x100000000LL;
  qword_4B227F0 = 0;
  qword_4B227F8 = 0;
  qword_4B22800 = (__int64)&qword_4B22810;
  qword_4B22818 = (__int64)&qword_4B22830;
  qword_4B22820 = 1;
  dword_4B22828 = 0;
  byte_4B2282C = 1;
  v1 = sub_259AC30(a1, &qword_4B22810);
  v2 = (unsigned int)qword_4B22808;
  v3 = (unsigned int)qword_4B22808 + 1LL;
  if ( HIDWORD(qword_4B22808) < v3 )
  {
    sub_25D6060(&qword_4B22810 - 2, &qword_4B22810, v3, 8);
    v2 = (unsigned int)qword_4B22808;
  }
  *(_QWORD *)(qword_4B22800 + 8 * v2) = v1;
  xmmword_4B22858 = 0;
  LODWORD(qword_4B22808) = qword_4B22808 + 1;
  qword_4B22840 = (__int64)&off_4A64710;
  dword_4B22838 = 0;
  byte_4B2284C = 0;
  qword_4B227C0 = (__int64)off_4A6DEB8;
  dword_4B22848 = 0;
  qword_4B22850 = (__int64)off_49D9228;
  xmmword_4B22868 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49EEC08),
                                (__m128i)(unsigned __int64)nullsub_267);
  sub_259F400(&qword_4B227C0, "max-interleave-group-factor", 27);
  qword_4B227E8 = 60;
  dword_4B22838 = 8;
  byte_4B2284C = 1;
  dword_4B22848 = 8;
  BYTE2(qword_4B227C8) = BYTE2(qword_4B227C8) & 0x9F | 0x20;
  qword_4B227E0 = (__int64)"Maximum factor for an interleaved access group (default = 8)";
  sub_259EC40(&qword_4B227C0);
  return __cxa_atexit(sub_1F6C940, &qword_4B227C0, &off_47CFE00);
}

