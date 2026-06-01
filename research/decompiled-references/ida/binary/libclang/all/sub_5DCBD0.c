int __fastcall sub_5DCBD0(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  unsigned __int64 v3; // rdx

  qword_4B224F0 = 0;
  qword_4B224F8 = 0;
  qword_4B22500 = 0;
  qword_4B224E0 = (__int64)&off_4A6E058;
  qword_4B224E8 = (unsigned int)qword_4B224E8 & 0x80000000;
  qword_4B22508 = 0;
  qword_4B22528 = 0x100000000LL;
  qword_4B22510 = 0;
  qword_4B22518 = 0;
  qword_4B22520 = (__int64)&qword_4B22530;
  qword_4B22538 = (__int64)&qword_4B22550;
  qword_4B22540 = 1;
  dword_4B22548 = 0;
  byte_4B2254C = 1;
  v1 = sub_259AC30(a1, &qword_4B22530);
  v2 = (unsigned int)qword_4B22528;
  v3 = (unsigned int)qword_4B22528 + 1LL;
  if ( HIDWORD(qword_4B22528) < v3 )
  {
    sub_25D6060(&qword_4B22530 - 2, &qword_4B22530, v3, 8);
    v2 = (unsigned int)qword_4B22528;
  }
  *(_QWORD *)(qword_4B22520 + 8 * v2) = v1;
  word_4B22568 = 0;
  xmmword_4B22578 = 0;
  LODWORD(qword_4B22528) = qword_4B22528 + 1;
  qword_4B22560 = (__int64)&off_4A64730;
  byte_4B22558 = 0;
  qword_4B224E0 = (__int64)off_4A6DFF0;
  qword_4B22570 = (__int64)off_49D9168;
  xmmword_4B22588 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49EEBF0),
                                (__m128i)(unsigned __int64)nullsub_266);
  sub_259F400(&qword_4B224E0, "enable-tbaa", 11);
  word_4B22568 = 257;
  byte_4B22558 = 1;
  BYTE2(qword_4B224E8) = BYTE2(qword_4B224E8) & 0x9F | 0x20;
  sub_259EC40(&qword_4B224E0);
  return __cxa_atexit(sub_1F6C9D0, &qword_4B224E0, &off_47CFE00);
}

