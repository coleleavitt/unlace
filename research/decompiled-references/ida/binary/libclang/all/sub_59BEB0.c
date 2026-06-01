int __fastcall sub_59BEB0(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  unsigned __int64 v3; // rdx

  qword_4AFDB90 = 0;
  qword_4AFDB98 = 0;
  qword_4AFDBA0 = 0;
  qword_4AFDB80 = (__int64)&off_4A6E058;
  qword_4AFDB88 = (unsigned int)qword_4AFDB88 & 0x80000000;
  qword_4AFDBA8 = 0;
  qword_4AFDBC8 = 0x100000000LL;
  qword_4AFDBB0 = 0;
  qword_4AFDBB8 = 0;
  qword_4AFDBC0 = (__int64)&qword_4AFDBD0;
  qword_4AFDBD8 = (__int64)&qword_4AFDBF0;
  qword_4AFDBE0 = 1;
  dword_4AFDBE8 = 0;
  byte_4AFDBEC = 1;
  v1 = sub_259AC30(a1, &qword_4AFDBD0);
  v2 = (unsigned int)qword_4AFDBC8;
  v3 = (unsigned int)qword_4AFDBC8 + 1LL;
  if ( HIDWORD(qword_4AFDBC8) < v3 )
  {
    sub_25D6060(&qword_4AFDBD0 - 2, &qword_4AFDBD0, v3, 8);
    v2 = (unsigned int)qword_4AFDBC8;
  }
  *(_QWORD *)(qword_4AFDBC0 + 8 * v2) = v1;
  word_4AFDC08 = 0;
  xmmword_4AFDC18 = 0;
  LODWORD(qword_4AFDBC8) = qword_4AFDBC8 + 1;
  qword_4AFDC00 = (__int64)&off_4A64730;
  byte_4AFDBF8 = 0;
  qword_4AFDB80 = (__int64)off_4A6DFF0;
  qword_4AFDC10 = (__int64)off_49D9168;
  xmmword_4AFDC28 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49EB210),
                                (__m128i)(unsigned __int64)nullsub_266);
  sub_259F400(&qword_4AFDB80, "restrict-statepoint-remat", 25);
  word_4AFDC08 = 256;
  byte_4AFDBF8 = 0;
  qword_4AFDBA8 = 38;
  BYTE2(qword_4AFDB88) = BYTE2(qword_4AFDB88) & 0x9F | 0x20;
  qword_4AFDBA0 = (__int64)"Restrict remat for statepoint operands";
  sub_259EC40(&qword_4AFDB80);
  return __cxa_atexit(sub_1F6C9D0, &qword_4AFDB80, &off_47CFE00);
}

