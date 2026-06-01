int __fastcall sub_5889B0(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  unsigned __int64 v3; // rdx

  qword_4AF3710 = 0;
  qword_4AF3718 = 0;
  qword_4AF3720 = 0;
  qword_4AF3700 = (__int64)&off_4A6E058;
  qword_4AF3708 = (unsigned int)qword_4AF3708 & 0x80000000;
  qword_4AF3728 = 0;
  qword_4AF3748 = 0x100000000LL;
  qword_4AF3730 = 0;
  qword_4AF3738 = 0;
  qword_4AF3740 = (__int64)&qword_4AF3750;
  qword_4AF3758 = (__int64)&qword_4AF3770;
  qword_4AF3760 = 1;
  dword_4AF3768 = 0;
  byte_4AF376C = 1;
  v1 = sub_259AC30(a1, &qword_4AF3750);
  v2 = (unsigned int)qword_4AF3748;
  v3 = (unsigned int)qword_4AF3748 + 1LL;
  if ( HIDWORD(qword_4AF3748) < v3 )
  {
    sub_25D6060(&qword_4AF3750 - 2, &qword_4AF3750, v3, 8);
    v2 = (unsigned int)qword_4AF3748;
  }
  *(_QWORD *)(qword_4AF3740 + 8 * v2) = v1;
  xmmword_4AF3798 = 0;
  LODWORD(qword_4AF3748) = qword_4AF3748 + 1;
  qword_4AF3780 = (__int64)&off_4A64710;
  dword_4AF3778 = 0;
  byte_4AF378C = 0;
  qword_4AF3700 = (__int64)off_4A6DEB8;
  dword_4AF3788 = 0;
  qword_4AF3790 = (__int64)off_49D9228;
  xmmword_4AF37A8 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49E9B28),
                                (__m128i)(unsigned __int64)nullsub_267);
  sub_259F400(&qword_4AF3700, "align-all-functions", 19);
  qword_4AF3728 = 91;
  qword_4AF3720 = (__int64)"Force the alignment of all functions in log2 format (e.g. 4 means align on 16B boundaries).";
  dword_4AF3778 = 0;
  byte_4AF378C = 1;
  dword_4AF3788 = 0;
  BYTE2(qword_4AF3708) = BYTE2(qword_4AF3708) & 0x9F | 0x20;
  sub_259EC40(&qword_4AF3700);
  return __cxa_atexit(sub_1F6C940, &qword_4AF3700, &off_47CFE00);
}

