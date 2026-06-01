int __fastcall sub_5F4DD0(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  unsigned __int64 v3; // rdx
  int result; // eax

  qword_4B33270 = 0;
  qword_4B33278 = 0;
  qword_4B33280 = 0;
  qword_4B33260 = (__int64)&off_4A6E058;
  qword_4B33268 = (unsigned int)qword_4B33268 & 0x80000000;
  qword_4B33288 = 0;
  qword_4B332A8 = 0x100000000LL;
  qword_4B33290 = 0;
  qword_4B33298 = 0;
  qword_4B332A0 = (__int64)&qword_4B332B0;
  qword_4B332B8 = (__int64)&qword_4B332D0;
  qword_4B332C0 = 1;
  dword_4B332C8 = 0;
  byte_4B332CC = 1;
  v1 = sub_259AC30(a1, &qword_4B332B0);
  v2 = (unsigned int)qword_4B332A8;
  v3 = (unsigned int)qword_4B332A8 + 1LL;
  if ( HIDWORD(qword_4B332A8) < v3 )
  {
    sub_25D6060(&qword_4B332B0 - 2, &qword_4B332B0, v3, 8);
    v2 = (unsigned int)qword_4B332A8;
  }
  *(_QWORD *)(qword_4B332A0 + 8 * v2) = v1;
  word_4B332E8 = 0;
  xmmword_4B332F8 = 0;
  LODWORD(qword_4B332A8) = qword_4B332A8 + 1;
  qword_4B332E0 = (__int64)&off_4A64730;
  byte_4B332D8 = 0;
  qword_4B33260 = (__int64)off_4A6DFF0;
  qword_4B332F0 = (__int64)off_49D9168;
  xmmword_4B33308 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49F2090),
                                (__m128i)(unsigned __int64)nullsub_266);
  sub_259F400(&qword_4B33260, "allow-incomplete-ir", 19);
  word_4B332E8 = 256;
  byte_4B332D8 = 0;
  qword_4B33288 = 91;
  BYTE2(qword_4B33268) = BYTE2(qword_4B33268) & 0x9F | 0x20;
  qword_4B33280 = (__int64)"Allow incomplete IR on a best effort basis (references to unknown metadata will be dropped)";
  sub_259EC40(&qword_4B33260);
  result = __cxa_atexit(sub_1F6C9D0, &qword_4B33260, &off_47CFE00);
  qword_4B33258 = -8;
  return result;
}

