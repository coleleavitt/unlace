int __fastcall sub_592F90(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  unsigned __int64 v3; // rdx

  qword_4AF8990 = 0;
  qword_4AF8998 = 0;
  qword_4AF89A0 = 0;
  qword_4AF8980 = (__int64)&off_4A6E058;
  qword_4AF8988 = (unsigned int)qword_4AF8988 & 0x80000000;
  qword_4AF89A8 = 0;
  qword_4AF89C8 = 0x100000000LL;
  qword_4AF89B0 = 0;
  qword_4AF89B8 = 0;
  qword_4AF89C0 = (__int64)&qword_4AF89D0;
  qword_4AF89D8 = (__int64)&qword_4AF89F0;
  qword_4AF89E0 = 1;
  dword_4AF89E8 = 0;
  byte_4AF89EC = 1;
  v1 = sub_259AC30(a1, &qword_4AF89D0);
  v2 = (unsigned int)qword_4AF89C8;
  v3 = (unsigned int)qword_4AF89C8 + 1LL;
  if ( HIDWORD(qword_4AF89C8) < v3 )
  {
    sub_25D6060(&qword_4AF89D0 - 2, &qword_4AF89D0, v3, 8);
    v2 = (unsigned int)qword_4AF89C8;
  }
  *(_QWORD *)(qword_4AF89C0 + 8 * v2) = v1;
  word_4AF8A08 = 0;
  xmmword_4AF8A18 = 0;
  LODWORD(qword_4AF89C8) = qword_4AF89C8 + 1;
  qword_4AF8A00 = (__int64)&off_4A64730;
  byte_4AF89F8 = 0;
  qword_4AF8980 = (__int64)off_4A6DFF0;
  qword_4AF8A10 = (__int64)off_49D9168;
  xmmword_4AF8A28 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49EB008),
                                (__m128i)(unsigned __int64)nullsub_266);
  sub_259F400(&qword_4AF8980, "jumptable-in-function-section", 29);
  word_4AF8A08 = 256;
  byte_4AF89F8 = 0;
  qword_4AF89A8 = 38;
  BYTE2(qword_4AF8988) = BYTE2(qword_4AF8988) & 0x9F | 0x20;
  qword_4AF89A0 = (__int64)"Putting Jump Table in function section";
  sub_259EC40(&qword_4AF8980);
  return __cxa_atexit(sub_1F6C9D0, &qword_4AF8980, &off_47CFE00);
}

