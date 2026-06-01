int __fastcall sub_5BB440(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  unsigned __int64 v3; // rdx

  qword_4B0B690 = 0;
  qword_4B0B698 = 0;
  qword_4B0B6A0 = 0;
  qword_4B0B680 = (__int64)&off_4A6E058;
  qword_4B0B688 = (unsigned int)qword_4B0B688 & 0x80000000;
  qword_4B0B6A8 = 0;
  qword_4B0B6C8 = 0x100000000LL;
  qword_4B0B6B0 = 0;
  qword_4B0B6B8 = 0;
  qword_4B0B6C0 = (__int64)&qword_4B0B6D0;
  qword_4B0B6D8 = (__int64)&qword_4B0B6F0;
  qword_4B0B6E0 = 1;
  dword_4B0B6E8 = 0;
  byte_4B0B6EC = 1;
  v1 = sub_259AC30(a1, &qword_4B0B6D0);
  v2 = (unsigned int)qword_4B0B6C8;
  v3 = (unsigned int)qword_4B0B6C8 + 1LL;
  if ( HIDWORD(qword_4B0B6C8) < v3 )
  {
    sub_25D6060(&qword_4B0B6D0 - 2, &qword_4B0B6D0, v3, 8);
    v2 = (unsigned int)qword_4B0B6C8;
  }
  *(_QWORD *)(qword_4B0B6C0 + 8 * v2) = v1;
  word_4B0B708 = 0;
  xmmword_4B0B718 = 0;
  LODWORD(qword_4B0B6C8) = qword_4B0B6C8 + 1;
  qword_4B0B700 = (__int64)&off_4A64730;
  byte_4B0B6F8 = 0;
  qword_4B0B680 = (__int64)off_4A6DFF0;
  qword_4B0B710 = (__int64)off_49D9168;
  xmmword_4B0B728 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49EC020),
                                (__m128i)(unsigned __int64)nullsub_266);
  sub_259F400(&qword_4B0B680, "enable-unsafe-globalsmodref-alias-results", 41);
  word_4B0B708 = 256;
  byte_4B0B6F8 = 0;
  BYTE2(qword_4B0B688) = BYTE2(qword_4B0B688) & 0x9F | 0x20;
  sub_259EC40(&qword_4B0B680);
  return __cxa_atexit(sub_1F6C9D0, &qword_4B0B680, &off_47CFE00);
}

