int __fastcall sub_5A53F0(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  unsigned __int64 v3; // rdx

  qword_4B02FF0 = 0;
  qword_4B02FF8 = 0;
  qword_4B03000 = 0;
  qword_4B02FE0 = (__int64)&off_4A6E058;
  qword_4B02FE8 = (unsigned int)qword_4B02FE8 & 0x80000000;
  qword_4B03008 = 0;
  qword_4B03028 = 0x100000000LL;
  qword_4B03010 = 0;
  qword_4B03018 = 0;
  qword_4B03020 = (__int64)&qword_4B03030;
  qword_4B03038 = (__int64)&qword_4B03050;
  qword_4B03040 = 1;
  dword_4B03048 = 0;
  byte_4B0304C = 1;
  v1 = sub_259AC30(a1, &qword_4B03030);
  v2 = (unsigned int)qword_4B03028;
  v3 = (unsigned int)qword_4B03028 + 1LL;
  if ( HIDWORD(qword_4B03028) < v3 )
  {
    sub_25D6060(&qword_4B03030 - 2, &qword_4B03030, v3, 8);
    v2 = (unsigned int)qword_4B03028;
  }
  *(_QWORD *)(qword_4B03020 + 8 * v2) = v1;
  word_4B03068 = 0;
  xmmword_4B03078 = 0;
  LODWORD(qword_4B03028) = qword_4B03028 + 1;
  qword_4B03060 = (__int64)&off_4A64730;
  byte_4B03058 = 0;
  qword_4B02FE0 = (__int64)off_4A6DFF0;
  qword_4B03070 = (__int64)off_49D9168;
  xmmword_4B03088 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49EB7D8),
                                (__m128i)(unsigned __int64)nullsub_266);
  sub_259F400(&qword_4B02FE0, "mir-vreg-namer-use-stable-hash", 30);
  word_4B03068 = 256;
  byte_4B03058 = 0;
  qword_4B03008 = 40;
  BYTE2(qword_4B02FE8) = BYTE2(qword_4B02FE8) & 0x9F | 0x20;
  qword_4B03000 = (__int64)"Use Stable Hashing for MIR VReg Renaming";
  sub_259EC40(&qword_4B02FE0);
  return __cxa_atexit(sub_1F6C9D0, &qword_4B02FE0, &off_47CFE00);
}

