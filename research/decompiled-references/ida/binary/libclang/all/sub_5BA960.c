int __fastcall sub_5BA960(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  unsigned __int64 v3; // rdx

  qword_4B0B0D0 = 0;
  qword_4B0B0D8 = 0;
  qword_4B0B0E0 = 0;
  qword_4B0B0C0 = (__int64)&off_4A6E058;
  qword_4B0B0C8 = (unsigned int)qword_4B0B0C8 & 0x80000000;
  qword_4B0B0E8 = 0;
  qword_4B0B108 = 0x100000000LL;
  qword_4B0B0F0 = 0;
  qword_4B0B0F8 = 0;
  qword_4B0B100 = (__int64)&qword_4B0B110;
  qword_4B0B118 = (__int64)&qword_4B0B130;
  qword_4B0B120 = 1;
  dword_4B0B128 = 0;
  byte_4B0B12C = 1;
  v1 = sub_259AC30(a1, &qword_4B0B110);
  v2 = (unsigned int)qword_4B0B108;
  v3 = (unsigned int)qword_4B0B108 + 1LL;
  if ( HIDWORD(qword_4B0B108) < v3 )
  {
    sub_25D6060(&qword_4B0B110 - 2, &qword_4B0B110, v3, 8);
    v2 = (unsigned int)qword_4B0B108;
  }
  *(_QWORD *)(qword_4B0B100 + 8 * v2) = v1;
  xmmword_4B0B158 = 0;
  LODWORD(qword_4B0B108) = qword_4B0B108 + 1;
  qword_4B0B140 = (__int64)&off_4A64710;
  dword_4B0B138 = 0;
  byte_4B0B14C = 0;
  qword_4B0B0C0 = (__int64)off_4A6DEB8;
  dword_4B0B148 = 0;
  qword_4B0B150 = (__int64)off_49D9228;
  xmmword_4B0B168 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49EBEA0),
                                (__m128i)(unsigned __int64)nullsub_267);
  sub_259F400(&qword_4B0B0C0, "dom-tree-reachability-max-bbs-to-explore", 40);
  qword_4B0B0E8 = 54;
  dword_4B0B138 = 32;
  byte_4B0B14C = 1;
  dword_4B0B148 = 32;
  BYTE2(qword_4B0B0C8) = BYTE2(qword_4B0B0C8) & 0x9F | 0x20;
  qword_4B0B0E0 = (__int64)"Max number of BBs to explore for reachability analysis";
  sub_259EC40(&qword_4B0B0C0);
  return __cxa_atexit(sub_1F6C940, &qword_4B0B0C0, &off_47CFE00);
}

