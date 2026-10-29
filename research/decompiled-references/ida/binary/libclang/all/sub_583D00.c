int __fastcall sub_583D00(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  unsigned __int64 v3; // rdx

  qword_4AF0730 = 0;
  qword_4AF0738 = 0;
  qword_4AF0740 = 0;
  qword_4AF0720 = (__int64)&off_4A6E058;
  qword_4AF0728 = (unsigned int)qword_4AF0728 & 0x80000000;
  qword_4AF0748 = 0;
  qword_4AF0768 = 0x100000000LL;
  qword_4AF0750 = 0;
  qword_4AF0758 = 0;
  qword_4AF0760 = (__int64)&qword_4AF0770;
  qword_4AF0778 = (__int64)&qword_4AF0790;
  qword_4AF0780 = 1;
  dword_4AF0788 = 0;
  byte_4AF078C = 1;
  v1 = sub_259AC30(a1, &qword_4AF0770);
  v2 = (unsigned int)qword_4AF0768;
  v3 = (unsigned int)qword_4AF0768 + 1LL;
  if ( HIDWORD(qword_4AF0768) < v3 )
  {
    sub_25D6060(&qword_4AF0770 - 2, &qword_4AF0770, v3, 8);
    v2 = (unsigned int)qword_4AF0768;
  }
  *(_QWORD *)(qword_4AF0760 + 8 * v2) = v1;
  word_4AF07A8 = 0;
  xmmword_4AF07B8 = 0;
  LODWORD(qword_4AF0768) = qword_4AF0768 + 1;
  qword_4AF07A0 = (__int64)&off_4A64730;
  byte_4AF0798 = 0;
  qword_4AF0720 = (__int64)off_4A6DFF0;
  qword_4AF07B0 = (__int64)off_49D9168;
  xmmword_4AF07C8 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49E91E0),
                                (__m128i)(unsigned __int64)nullsub_266);
  sub_259F400(&qword_4AF0720, "verify-cfiinstrs", 16);
  qword_4AF0740 = (__int64)"Verify Call Frame Information instructions";
  word_4AF07A8 = 256;
  byte_4AF0798 = 0;
  qword_4AF0748 = 42;
  BYTE2(qword_4AF0728) = BYTE2(qword_4AF0728) & 0x9F | 0x20;
  sub_259EC40(&qword_4AF0720);
  return __cxa_atexit(sub_1F6C9D0, &qword_4AF0720, &off_47CFE00);
}

