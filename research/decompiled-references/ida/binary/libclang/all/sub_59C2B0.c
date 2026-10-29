int __fastcall sub_59C2B0(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  unsigned __int64 v3; // rdx

  qword_4AFDD30 = 0;
  qword_4AFDD38 = 0;
  qword_4AFDD40 = 0;
  qword_4AFDD20 = (__int64)&off_4A6E058;
  qword_4AFDD28 = (unsigned int)qword_4AFDD28 & 0x80000000;
  qword_4AFDD48 = 0;
  qword_4AFDD68 = 0x100000000LL;
  qword_4AFDD50 = 0;
  qword_4AFDD58 = 0;
  qword_4AFDD60 = (__int64)&qword_4AFDD70;
  qword_4AFDD78 = (__int64)&qword_4AFDD90;
  qword_4AFDD80 = 1;
  dword_4AFDD88 = 0;
  byte_4AFDD8C = 1;
  v1 = sub_259AC30(a1, &qword_4AFDD70);
  v2 = (unsigned int)qword_4AFDD68;
  v3 = (unsigned int)qword_4AFDD68 + 1LL;
  if ( HIDWORD(qword_4AFDD68) < v3 )
  {
    sub_25D6060(&qword_4AFDD70 - 2, &qword_4AFDD70, v3, 8);
    v2 = (unsigned int)qword_4AFDD68;
  }
  *(_QWORD *)(qword_4AFDD60 + 8 * v2) = v1;
  word_4AFDDA8 = 0;
  xmmword_4AFDDB8 = 0;
  LODWORD(qword_4AFDD68) = qword_4AFDD68 + 1;
  qword_4AFDDA0 = (__int64)&off_4A64730;
  byte_4AFDD98 = 0;
  qword_4AFDD20 = (__int64)off_4A6DFF0;
  qword_4AFDDB0 = (__int64)off_49D9168;
  xmmword_4AFDDC8 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49EB240),
                                (__m128i)(unsigned __int64)nullsub_266);
  sub_259F400(&qword_4AFDD20, "live-debug-variables", 20);
  qword_4AFDD40 = (__int64)"Enable the live debug variables pass";
  word_4AFDDA8 = 257;
  byte_4AFDD98 = 1;
  qword_4AFDD48 = 36;
  BYTE2(qword_4AFDD28) = BYTE2(qword_4AFDD28) & 0x9F | 0x20;
  sub_259EC40(&qword_4AFDD20);
  return __cxa_atexit(sub_1F6C9D0, &qword_4AFDD20, &off_47CFE00);
}

