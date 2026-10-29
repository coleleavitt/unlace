int __fastcall sub_589660(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  unsigned __int64 v3; // rdx

  qword_4AF3F10 = 0;
  qword_4AF3F18 = 0;
  qword_4AF3F20 = 0;
  qword_4AF3F00 = (__int64)&off_4A6E058;
  qword_4AF3F08 = (unsigned int)qword_4AF3F08 & 0x80000000;
  qword_4AF3F28 = 0;
  qword_4AF3F48 = 0x100000000LL;
  qword_4AF3F30 = 0;
  qword_4AF3F38 = 0;
  qword_4AF3F40 = (__int64)&qword_4AF3F50;
  qword_4AF3F58 = (__int64)&qword_4AF3F70;
  qword_4AF3F60 = 1;
  dword_4AF3F68 = 0;
  byte_4AF3F6C = 1;
  v1 = sub_259AC30(a1, &qword_4AF3F50);
  v2 = (unsigned int)qword_4AF3F48;
  v3 = (unsigned int)qword_4AF3F48 + 1LL;
  if ( HIDWORD(qword_4AF3F48) < v3 )
  {
    sub_25D6060(&qword_4AF3F50 - 2, &qword_4AF3F50, v3, 8);
    v2 = (unsigned int)qword_4AF3F48;
  }
  *(_QWORD *)(qword_4AF3F40 + 8 * v2) = v1;
  word_4AF3F88 = 0;
  xmmword_4AF3F98 = 0;
  LODWORD(qword_4AF3F48) = qword_4AF3F48 + 1;
  qword_4AF3F80 = (__int64)&off_4A64730;
  byte_4AF3F78 = 0;
  qword_4AF3F00 = (__int64)off_4A6DFF0;
  qword_4AF3F90 = (__int64)off_49D9168;
  xmmword_4AF3FA8 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49E9C58),
                                (__m128i)(unsigned __int64)nullsub_266);
  sub_259F400(&qword_4AF3F00, "enable-subreg-liveness", 22);
  word_4AF3F88 = 257;
  byte_4AF3F78 = 1;
  qword_4AF3F28 = 37;
  BYTE2(qword_4AF3F08) = BYTE2(qword_4AF3F08) & 0x9F | 0x20;
  qword_4AF3F20 = (__int64)"Enable subregister liveness tracking.";
  sub_259EC40(&qword_4AF3F00);
  return __cxa_atexit(sub_1F6C9D0, &qword_4AF3F00, &off_47CFE00);
}

