int sub_567650()
{
  __int64 v0; // rbp
  __int64 v1; // rax
  unsigned __int64 v2; // rdx
  __int64 v3; // r12
  __int64 v4; // rax
  unsigned __int64 v5; // rdx

  qword_4ADDBE0 = (__int64)&off_4A6E058;
  qword_4ADDBE8 = (unsigned int)qword_4ADDBE8 & 0x80000000;
  qword_4ADDBF0 = 0;
  qword_4ADDBF8 = 0;
  qword_4ADDC00 = 0;
  qword_4ADDC08 = 0;
  qword_4ADDC10 = 0;
  qword_4ADDC18 = 0;
  qword_4ADDC20 = (__int64)&qword_4ADDC30;
  qword_4ADDC28 = 0x100000000LL;
  qword_4ADDC38 = (__int64)&qword_4ADDC50;
  qword_4ADDC40 = 1;
  dword_4ADDC48 = 0;
  byte_4ADDC4C = 1;
  v0 = sub_259AC30();
  v1 = (unsigned int)qword_4ADDC28;
  v2 = (unsigned int)qword_4ADDC28 + 1LL;
  if ( HIDWORD(qword_4ADDC28) < v2 )
  {
    sub_25D6060(&qword_4ADDC30 - 2, &qword_4ADDC30, v2, 8);
    v1 = (unsigned int)qword_4ADDC28;
  }
  *(_QWORD *)(qword_4ADDC20 + 8 * v1) = v0;
  word_4ADDC68 = 0;
  qword_4ADDC60 = (__int64)&off_4A64730;
  xmmword_4ADDC78 = 0;
  LODWORD(qword_4ADDC28) = qword_4ADDC28 + 1;
  qword_4ADDBE0 = (__int64)off_4A6DFF0;
  byte_4ADDC58 = 0;
  qword_4ADDC70 = (__int64)off_49D9168;
  xmmword_4ADDC88 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49C94E8),
                                (__m128i)(unsigned __int64)nullsub_266);
  sub_259F400(&qword_4ADDBE0, "enable-branch-hint", 18);
  qword_4ADDC00 = (__int64)"Enable branch hint.";
  word_4ADDC68 = 256;
  byte_4ADDC58 = 0;
  qword_4ADDC08 = 19;
  BYTE2(qword_4ADDBE8) = BYTE2(qword_4ADDBE8) & 0x9F | 0x20;
  sub_259EC40(&qword_4ADDBE0);
  __cxa_atexit(sub_1F6C9D0, &qword_4ADDBE0, &off_47CFE00);
  qword_4ADDB80 = 1;
  qword_4ADDB20 = (__int64)&off_4A6E058;
  qword_4ADDB28 = (unsigned int)qword_4ADDB28 & 0x80000000;
  qword_4ADDB60 = (__int64)&qword_4ADDB70;
  qword_4ADDB30 = 0;
  qword_4ADDB38 = 0;
  qword_4ADDB40 = 0;
  qword_4ADDB48 = 0;
  qword_4ADDB50 = 0;
  qword_4ADDB58 = 0;
  qword_4ADDB68 = 0x100000000LL;
  qword_4ADDB78 = (__int64)&qword_4ADDB90;
  dword_4ADDB88 = 0;
  byte_4ADDB8C = 1;
  v3 = sub_259AC30();
  v4 = (unsigned int)qword_4ADDB68;
  v5 = (unsigned int)qword_4ADDB68 + 1LL;
  if ( HIDWORD(qword_4ADDB68) < v5 )
  {
    sub_25D6060(&qword_4ADDB70 - 2, &qword_4ADDB70, v5, 8);
    v4 = (unsigned int)qword_4ADDB68;
  }
  *(_QWORD *)(qword_4ADDB60 + 8 * v4) = v3;
  qword_4ADDBA0 = (__int64)&off_4A64710;
  xmmword_4ADDBB8 = 0;
  LODWORD(qword_4ADDB68) = qword_4ADDB68 + 1;
  qword_4ADDB20 = (__int64)off_4A6DEB8;
  dword_4ADDB98 = 0;
  byte_4ADDBAC = 0;
  qword_4ADDBB0 = (__int64)off_49D9228;
  dword_4ADDBA8 = 0;
  xmmword_4ADDBC8 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49C94F0),
                                (__m128i)(unsigned __int64)nullsub_267);
  sub_259F400(&qword_4ADDB20, "branch-hint-probability-threshold", 33);
  qword_4ADDB48 = 50;
  qword_4ADDB40 = (__int64)"The probability threshold of enabling branch hint.";
  dword_4ADDB98 = 50;
  byte_4ADDBAC = 1;
  dword_4ADDBA8 = 50;
  BYTE2(qword_4ADDB28) = BYTE2(qword_4ADDB28) & 0x9F | 0x20;
  sub_259EC40(&qword_4ADDB20);
  return __cxa_atexit(sub_1F6C940, &qword_4ADDB20, &off_47CFE00);
}

