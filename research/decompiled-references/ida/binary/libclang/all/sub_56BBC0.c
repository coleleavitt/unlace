int __fastcall sub_56BBC0(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  unsigned __int64 v3; // rdx

  qword_4AE06F0 = 0;
  qword_4AE06F8 = 0;
  qword_4AE0700 = 0;
  qword_4AE06E0 = (__int64)&off_4A6E058;
  qword_4AE06E8 = (unsigned int)qword_4AE06E8 & 0x80000000;
  qword_4AE0708 = 0;
  qword_4AE0728 = 0x100000000LL;
  qword_4AE0710 = 0;
  qword_4AE0718 = 0;
  qword_4AE0720 = (__int64)&qword_4AE0730;
  qword_4AE0738 = (__int64)&qword_4AE0750;
  qword_4AE0740 = 1;
  dword_4AE0748 = 0;
  byte_4AE074C = 1;
  v1 = sub_259AC30(a1, &qword_4AE0730);
  v2 = (unsigned int)qword_4AE0728;
  v3 = (unsigned int)qword_4AE0728 + 1LL;
  if ( HIDWORD(qword_4AE0728) < v3 )
  {
    sub_25D6060(&qword_4AE0730 - 2, &qword_4AE0730, v3, 8);
    v2 = (unsigned int)qword_4AE0728;
  }
  *(_QWORD *)(qword_4AE0720 + 8 * v2) = v1;
  word_4AE0768 = 0;
  qword_4AE0760 = (__int64)&off_4A64730;
  xmmword_4AE0778 = 0;
  LODWORD(qword_4AE0728) = qword_4AE0728 + 1;
  qword_4AE06E0 = (__int64)off_4A6DFF0;
  byte_4AE0758 = 0;
  qword_4AE0770 = (__int64)off_49D9168;
  xmmword_4AE0788 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49CC050),
                                (__m128i)(unsigned __int64)nullsub_266);
  sub_259F400(&qword_4AE06E0, "disable-x86-lea-opt", 19);
  word_4AE0768 = 256;
  byte_4AE0758 = 0;
  qword_4AE0708 = 31;
  BYTE2(qword_4AE06E8) = BYTE2(qword_4AE06E8) & 0x9F | 0x20;
  qword_4AE0700 = (__int64)"X86: Disable LEA optimizations.";
  sub_259EC40(&qword_4AE06E0);
  return __cxa_atexit(sub_1F6C9D0, &qword_4AE06E0, &off_47CFE00);
}

