int __fastcall sub_56D300(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  unsigned __int64 v3; // rdx

  qword_4AE10D0 = 0;
  qword_4AE10D8 = 0;
  qword_4AE10E0 = 0;
  qword_4AE10C0 = (__int64)&off_4A6E058;
  qword_4AE10C8 = (unsigned int)qword_4AE10C8 & 0x80000000;
  qword_4AE10E8 = 0;
  qword_4AE1108 = 0x100000000LL;
  qword_4AE10F0 = 0;
  qword_4AE10F8 = 0;
  qword_4AE1100 = (__int64)&qword_4AE1110;
  qword_4AE1118 = (__int64)&qword_4AE1130;
  qword_4AE1120 = 1;
  dword_4AE1128 = 0;
  byte_4AE112C = 1;
  v1 = sub_259AC30(a1, &qword_4AE1110);
  v2 = (unsigned int)qword_4AE1108;
  v3 = (unsigned int)qword_4AE1108 + 1LL;
  if ( HIDWORD(qword_4AE1108) < v3 )
  {
    sub_25D6060(&qword_4AE1110 - 2, &qword_4AE1110, v3, 8);
    v2 = (unsigned int)qword_4AE1108;
  }
  *(_QWORD *)(qword_4AE1100 + 8 * v2) = v1;
  word_4AE1148 = 0;
  qword_4AE1140 = (__int64)&off_4A64730;
  xmmword_4AE1158 = 0;
  LODWORD(qword_4AE1108) = qword_4AE1108 + 1;
  qword_4AE10C0 = (__int64)off_4A6DFF0;
  byte_4AE1138 = 0;
  qword_4AE1150 = (__int64)off_49D9168;
  xmmword_4AE1168 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49CC070),
                                (__m128i)(unsigned __int64)nullsub_266);
  sub_259F400(&qword_4AE10C0, "x86-early-ifcvt", 15);
  qword_4AE10E8 = 33;
  BYTE2(qword_4AE10C8) = BYTE2(qword_4AE10C8) & 0x9F | 0x20;
  qword_4AE10E0 = (__int64)"Enable early if-conversion on X86";
  sub_259EC40(&qword_4AE10C0);
  return __cxa_atexit(sub_1F6C9D0, &qword_4AE10C0, &off_47CFE00);
}

