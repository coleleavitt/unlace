int __fastcall sub_5DD000(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  unsigned __int64 v3; // rdx

  qword_4B22710 = 0;
  qword_4B22718 = 0;
  qword_4B22720 = 0;
  qword_4B22700 = (__int64)&off_4A6E058;
  qword_4B22708 = (unsigned int)qword_4B22708 & 0x80000000;
  qword_4B22728 = 0;
  qword_4B22748 = 0x100000000LL;
  qword_4B22730 = 0;
  qword_4B22738 = 0;
  qword_4B22740 = (__int64)&qword_4B22750;
  qword_4B22758 = (__int64)&qword_4B22770;
  qword_4B22760 = 1;
  dword_4B22768 = 0;
  byte_4B2276C = 1;
  v1 = sub_259AC30(a1, &qword_4B22750);
  v2 = (unsigned int)qword_4B22748;
  v3 = (unsigned int)qword_4B22748 + 1LL;
  if ( HIDWORD(qword_4B22748) < v3 )
  {
    sub_25D6060(&qword_4B22750 - 2, &qword_4B22750, v3, 8);
    v2 = (unsigned int)qword_4B22748;
  }
  *(_QWORD *)(qword_4B22740 + 8 * v2) = v1;
  xmmword_4B22798 = 0;
  LODWORD(qword_4B22748) = qword_4B22748 + 1;
  qword_4B22780 = (__int64)&off_4A64710;
  dword_4B22778 = 0;
  byte_4B2278C = 0;
  qword_4B22700 = (__int64)off_4A6DEB8;
  dword_4B22788 = 0;
  qword_4B22790 = (__int64)off_49D9228;
  xmmword_4B227A8 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49EEC00),
                                (__m128i)(unsigned __int64)nullsub_267);
  sub_259F400(&qword_4B22700, "dom-conditions-max-uses", 23);
  dword_4B22778 = 20;
  byte_4B2278C = 1;
  dword_4B22788 = 20;
  BYTE2(qword_4B22708) = BYTE2(qword_4B22708) & 0x9F | 0x20;
  sub_259EC40(&qword_4B22700);
  return __cxa_atexit(sub_1F6C940, &qword_4B22700, &off_47CFE00);
}

