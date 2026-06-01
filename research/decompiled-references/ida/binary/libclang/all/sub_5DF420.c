int __fastcall sub_5DF420(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  unsigned __int64 v3; // rdx

  qword_4B23710 = 0;
  qword_4B23718 = 0;
  qword_4B23720 = 0;
  qword_4B23700 = (__int64)&off_4A6E058;
  qword_4B23708 = (unsigned int)qword_4B23708 & 0x80000000;
  qword_4B23728 = 0;
  qword_4B23748 = 0x100000000LL;
  qword_4B23730 = 0;
  qword_4B23738 = 0;
  qword_4B23740 = (__int64)&qword_4B23750;
  qword_4B23758 = (__int64)&qword_4B23770;
  qword_4B23760 = 1;
  dword_4B23768 = 0;
  byte_4B2376C = 1;
  v1 = sub_259AC30(a1, &qword_4B23750);
  v2 = (unsigned int)qword_4B23748;
  v3 = (unsigned int)qword_4B23748 + 1LL;
  if ( HIDWORD(qword_4B23748) < v3 )
  {
    sub_25D6060(&qword_4B23750 - 2, &qword_4B23750, v3, 8);
    v2 = (unsigned int)qword_4B23748;
  }
  *(_QWORD *)(qword_4B23740 + 8 * v2) = v1;
  word_4B23788 = 0;
  xmmword_4B23798 = 0;
  LODWORD(qword_4B23748) = qword_4B23748 + 1;
  qword_4B23780 = (__int64)&off_4A64730;
  byte_4B23778 = 0;
  qword_4B23700 = (__int64)off_4A6DFF0;
  qword_4B23790 = (__int64)off_49D9168;
  xmmword_4B237A8 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49F15E0),
                                (__m128i)(unsigned __int64)nullsub_266);
  sub_259F400(&qword_4B23700, "profile-isfs", 12);
  word_4B23788 = 256;
  byte_4B23778 = 0;
  qword_4B23728 = 42;
  BYTE2(qword_4B23708) = BYTE2(qword_4B23708) & 0x9F | 0x20;
  qword_4B23720 = (__int64)"Profile uses flow sensitive discriminators";
  sub_259EC40(&qword_4B23700);
  return __cxa_atexit(sub_1F6C9D0, &qword_4B23700, &off_47CFE00);
}

