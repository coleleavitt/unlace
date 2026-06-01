int __fastcall sub_59C0C0(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  unsigned __int64 v3; // rdx

  qword_4AFDC70 = 0;
  qword_4AFDC78 = 0;
  qword_4AFDC80 = 0;
  qword_4AFDC60 = (__int64)&off_4A6E058;
  qword_4AFDC68 = (unsigned int)qword_4AFDC68 & 0x80000000;
  qword_4AFDC88 = 0;
  qword_4AFDCA8 = 0x100000000LL;
  qword_4AFDC90 = 0;
  qword_4AFDC98 = 0;
  qword_4AFDCA0 = (__int64)&qword_4AFDCB0;
  qword_4AFDCB8 = (__int64)&qword_4AFDCD0;
  qword_4AFDCC0 = 1;
  dword_4AFDCC8 = 0;
  byte_4AFDCCC = 1;
  v1 = sub_259AC30(a1, &qword_4AFDCB0);
  v2 = (unsigned int)qword_4AFDCA8;
  v3 = (unsigned int)qword_4AFDCA8 + 1LL;
  if ( HIDWORD(qword_4AFDCA8) < v3 )
  {
    sub_25D6060(&qword_4AFDCB0 - 2, &qword_4AFDCB0, v3, 8);
    v2 = (unsigned int)qword_4AFDCA8;
  }
  *(_QWORD *)(qword_4AFDCA0 + 8 * v2) = v1;
  word_4AFDCE8 = 0;
  xmmword_4AFDCF8 = 0;
  LODWORD(qword_4AFDCA8) = qword_4AFDCA8 + 1;
  qword_4AFDCE0 = (__int64)&off_4A64730;
  byte_4AFDCD8 = 0;
  qword_4AFDC60 = (__int64)off_4A6DFF0;
  qword_4AFDCF0 = (__int64)off_49D9168;
  xmmword_4AFDD08 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49EB238),
                                (__m128i)(unsigned __int64)nullsub_266);
  sub_259F400(&qword_4AFDC60, "disable-interleaved-load-combine", 32);
  word_4AFDCE8 = 256;
  byte_4AFDCD8 = 0;
  qword_4AFDC88 = 38;
  BYTE2(qword_4AFDC68) = BYTE2(qword_4AFDC68) & 0x9F | 0x20;
  qword_4AFDC80 = (__int64)"Disable combining of interleaved loads";
  sub_259EC40(&qword_4AFDC60);
  return __cxa_atexit(sub_1F6C9D0, &qword_4AFDC60, &off_47CFE00);
}

