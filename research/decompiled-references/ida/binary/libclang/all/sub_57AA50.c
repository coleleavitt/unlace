int __fastcall sub_57AA50(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  unsigned __int64 v3; // rdx

  qword_4AEB110 = 0;
  qword_4AEB118 = 0;
  qword_4AEB120 = 0;
  qword_4AEB100 = (__int64)&off_4A6E058;
  qword_4AEB108 = (unsigned int)qword_4AEB108 & 0x80000000;
  qword_4AEB128 = 0;
  qword_4AEB148 = 0x100000000LL;
  qword_4AEB130 = 0;
  qword_4AEB138 = 0;
  qword_4AEB140 = (__int64)&qword_4AEB150;
  qword_4AEB158 = (__int64)&qword_4AEB170;
  qword_4AEB160 = 1;
  dword_4AEB168 = 0;
  byte_4AEB16C = 1;
  v1 = sub_259AC30(a1, &qword_4AEB150);
  v2 = (unsigned int)qword_4AEB148;
  v3 = (unsigned int)qword_4AEB148 + 1LL;
  if ( HIDWORD(qword_4AEB148) < v3 )
  {
    sub_25D6060(&qword_4AEB150 - 2, &qword_4AEB150, v3, 8);
    v2 = (unsigned int)qword_4AEB148;
  }
  *(_QWORD *)(qword_4AEB140 + 8 * v2) = v1;
  word_4AEB188 = 0;
  xmmword_4AEB198 = 0;
  LODWORD(qword_4AEB148) = qword_4AEB148 + 1;
  qword_4AEB180 = (__int64)&off_4A64730;
  byte_4AEB178 = 0;
  qword_4AEB100 = (__int64)off_4A6DFF0;
  qword_4AEB190 = (__int64)off_49D9168;
  xmmword_4AEB1A8 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49E8890),
                                (__m128i)(unsigned __int64)nullsub_266);
  sub_259F400(&qword_4AEB100, "enable-cse-in-irtranslator", 26);
  BYTE2(qword_4AEB108) &= 0xF8u;
  word_4AEB188 = 256;
  qword_4AEB120 = (__int64)"Should enable CSE in irtranslator";
  qword_4AEB128 = 33;
  byte_4AEB178 = 0;
  sub_259EC40(&qword_4AEB100);
  return __cxa_atexit(sub_1F6C9D0, &qword_4AEB100, &off_47CFE00);
}

