int __fastcall sub_5A2EA0(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  unsigned __int64 v3; // rdx

  qword_4B017B0 = 0;
  qword_4B017B8 = 0;
  qword_4B017C0 = 0;
  qword_4B017A0 = (__int64)&off_4A6E058;
  qword_4B017A8 = (unsigned int)qword_4B017A8 & 0x80000000;
  qword_4B017C8 = 0;
  qword_4B017E8 = 0x100000000LL;
  qword_4B017D0 = 0;
  qword_4B017D8 = 0;
  qword_4B017E0 = (__int64)&qword_4B017F0;
  qword_4B017F8 = (__int64)&qword_4B01810;
  qword_4B01800 = 1;
  dword_4B01808 = 0;
  byte_4B0180C = 1;
  v1 = sub_259AC30(a1, &qword_4B017F0);
  v2 = (unsigned int)qword_4B017E8;
  v3 = (unsigned int)qword_4B017E8 + 1LL;
  if ( HIDWORD(qword_4B017E8) < v3 )
  {
    sub_25D6060(&qword_4B017F0 - 2, &qword_4B017F0, v3, 8);
    v2 = (unsigned int)qword_4B017E8;
  }
  *(_QWORD *)(qword_4B017E0 + 8 * v2) = v1;
  word_4B01828 = 0;
  xmmword_4B01838 = 0;
  LODWORD(qword_4B017E8) = qword_4B017E8 + 1;
  qword_4B01820 = (__int64)&off_4A64730;
  byte_4B01818 = 0;
  qword_4B017A0 = (__int64)off_4A6DFF0;
  qword_4B01830 = (__int64)off_49D9168;
  xmmword_4B01848 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49EB500),
                                (__m128i)(unsigned __int64)nullsub_266);
  sub_259F400(&qword_4B017A0, "pipeliner-swap-branch-targets-mve", 33);
  word_4B01828 = 256;
  byte_4B01818 = 0;
  qword_4B017C8 = 59;
  BYTE2(qword_4B017A8) = BYTE2(qword_4B017A8) & 0x9F | 0x20;
  qword_4B017C0 = (__int64)"Swap target blocks of a conditional branch for MVE expander";
  sub_259EC40(&qword_4B017A0);
  return __cxa_atexit(sub_1F6C9D0, &qword_4B017A0, &off_47CFE00);
}

