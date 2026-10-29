int __fastcall sub_585180(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  unsigned __int64 v3; // rdx
  __int64 v4; // r12
  __int64 v5; // rax
  unsigned __int64 v6; // rdx

  qword_4AF2020 = (__int64)&off_4A6E058;
  qword_4AF2028 = (unsigned int)qword_4AF2028 & 0x80000000;
  qword_4AF2030 = 0;
  qword_4AF2038 = 0;
  qword_4AF2040 = 0;
  qword_4AF2048 = 0;
  qword_4AF2050 = 0;
  qword_4AF2058 = 0;
  qword_4AF2060 = (__int64)&qword_4AF2070;
  qword_4AF2068 = 0x100000000LL;
  qword_4AF2078 = (__int64)&qword_4AF2090;
  qword_4AF2080 = 1;
  dword_4AF2088 = 0;
  byte_4AF208C = 1;
  v1 = sub_259AC30(a1, &qword_4AF2070);
  v2 = (unsigned int)qword_4AF2068;
  v3 = (unsigned int)qword_4AF2068 + 1LL;
  if ( HIDWORD(qword_4AF2068) < v3 )
  {
    sub_25D6060(&qword_4AF2070 - 2, &qword_4AF2070, v3, 8);
    v2 = (unsigned int)qword_4AF2068;
  }
  *(_QWORD *)(qword_4AF2060 + 8 * v2) = v1;
  xmmword_4AF20B8 = 0;
  LODWORD(qword_4AF2068) = qword_4AF2068 + 1;
  qword_4AF20A0 = (__int64)&off_4A64710;
  dword_4AF2098 = 0;
  byte_4AF20AC = 0;
  qword_4AF2020 = (__int64)off_4A6DEB8;
  dword_4AF20A8 = 0;
  qword_4AF20B0 = (__int64)off_49D9228;
  xmmword_4AF20C8 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49E93D0),
                                (__m128i)(unsigned __int64)nullsub_267);
  sub_259F400(&qword_4AF2020, "early-ifcvt-limit", 17);
  dword_4AF2098 = 30;
  byte_4AF20AC = 1;
  dword_4AF20A8 = 30;
  qword_4AF2048 = 52;
  BYTE2(qword_4AF2028) = BYTE2(qword_4AF2028) & 0x9F | 0x20;
  qword_4AF2040 = (__int64)"Maximum number of instructions per speculated block.";
  sub_259EC40(&qword_4AF2020);
  __cxa_atexit(sub_1F6C940, &qword_4AF2020, &off_47CFE00);
  qword_4AF1FC0 = 1;
  qword_4AF1F60 = (__int64)&off_4A6E058;
  qword_4AF1F68 = (unsigned int)qword_4AF1F68 & 0x80000000;
  qword_4AF1FA0 = (__int64)&qword_4AF1FB0;
  qword_4AF1F70 = 0;
  qword_4AF1F78 = 0;
  qword_4AF1F80 = 0;
  qword_4AF1F88 = 0;
  qword_4AF1F90 = 0;
  qword_4AF1F98 = 0;
  qword_4AF1FA8 = 0x100000000LL;
  qword_4AF1FB8 = (__int64)&qword_4AF1FD0;
  dword_4AF1FC8 = 0;
  byte_4AF1FCC = 1;
  v4 = sub_259AC30(sub_1F6C940, &qword_4AF1FB0);
  v5 = (unsigned int)qword_4AF1FA8;
  v6 = (unsigned int)qword_4AF1FA8 + 1LL;
  if ( HIDWORD(qword_4AF1FA8) < v6 )
  {
    sub_25D6060(&qword_4AF1FB0 - 2, &qword_4AF1FB0, v6, 8);
    v5 = (unsigned int)qword_4AF1FA8;
  }
  *(_QWORD *)(qword_4AF1FA0 + 8 * v5) = v4;
  word_4AF1FE8 = 0;
  xmmword_4AF1FF8 = 0;
  LODWORD(qword_4AF1FA8) = qword_4AF1FA8 + 1;
  qword_4AF1FE0 = (__int64)&off_4A64730;
  byte_4AF1FD8 = 0;
  qword_4AF1F60 = (__int64)off_4A6DFF0;
  qword_4AF1FF0 = (__int64)off_49D9168;
  xmmword_4AF2008 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49E93D8),
                                (__m128i)(unsigned __int64)nullsub_266);
  sub_259F400(&qword_4AF1F60, "stress-early-ifcvt", 18);
  qword_4AF1F88 = 20;
  BYTE2(qword_4AF1F68) = BYTE2(qword_4AF1F68) & 0x9F | 0x20;
  qword_4AF1F80 = (__int64)"Turn all knobs to 11";
  sub_259EC40(&qword_4AF1F60);
  return __cxa_atexit(sub_1F6C9D0, &qword_4AF1F60, &off_47CFE00);
}

