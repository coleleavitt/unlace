int __fastcall sub_58E670(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  unsigned __int64 v3; // rdx

  qword_4AF6790 = 0;
  qword_4AF6798 = 0;
  qword_4AF67A0 = 0;
  qword_4AF6780 = (__int64)&off_4A6E058;
  qword_4AF6788 = (unsigned int)qword_4AF6788 & 0x80000000;
  qword_4AF67A8 = 0;
  qword_4AF67C8 = 0x100000000LL;
  qword_4AF67B0 = 0;
  qword_4AF67B8 = 0;
  qword_4AF67C0 = (__int64)&qword_4AF67D0;
  qword_4AF67D8 = (__int64)&qword_4AF67F0;
  qword_4AF67E0 = 1;
  dword_4AF67E8 = 0;
  byte_4AF67EC = 1;
  v1 = sub_259AC30(a1, &qword_4AF67D0);
  v2 = (unsigned int)qword_4AF67C8;
  v3 = (unsigned int)qword_4AF67C8 + 1LL;
  if ( HIDWORD(qword_4AF67C8) < v3 )
  {
    sub_25D6060(&qword_4AF67D0 - 2, &qword_4AF67D0, v3, 8);
    v2 = (unsigned int)qword_4AF67C8;
  }
  *(_QWORD *)(qword_4AF67C0 + 8 * v2) = v1;
  xmmword_4AF6818 = 0;
  LODWORD(qword_4AF67C8) = qword_4AF67C8 + 1;
  qword_4AF6800 = (__int64)&off_4A64710;
  dword_4AF67F8 = 0;
  byte_4AF680C = 0;
  qword_4AF6780 = (__int64)off_4A6DEB8;
  dword_4AF6808 = 0;
  qword_4AF6810 = (__int64)off_49D9228;
  xmmword_4AF6828 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49EA1A0),
                                (__m128i)(unsigned __int64)nullsub_267);
  sub_259F400(&qword_4AF6780, "stress-regalloc", 15);
  dword_4AF67F8 = 0;
  byte_4AF680C = 1;
  dword_4AF6808 = 0;
  qword_4AF67B8 = 1;
  BYTE2(qword_4AF6788) = BYTE2(qword_4AF6788) & 0x9F | 0x20;
  qword_4AF67B0 = (__int64)"N";
  qword_4AF67A0 = (__int64)"Limit all regclasses to N registers";
  qword_4AF67A8 = 35;
  sub_259EC40(&qword_4AF6780);
  return __cxa_atexit(sub_1F6C940, &qword_4AF6780, &off_47CFE00);
}

