int __fastcall sub_569A20(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  unsigned __int64 v3; // rdx
  __m128i si128; // xmm3
  __int64 v5; // r14
  __int64 v6; // rax
  unsigned __int64 v7; // rdx
  __m128i v8; // xmm4
  __m128i v10[4]; // [rsp+0h] [rbp-48h] BYREF

  qword_4ADF740 = (__int64)&qword_4ADF750;
  qword_4ADF710 = 0;
  qword_4ADF718 = 0;
  qword_4ADF700 = (__int64)&off_4A6E058;
  qword_4ADF708 = (unsigned int)qword_4ADF708 & 0x80000000;
  qword_4ADF758 = (__int64)&qword_4ADF770;
  v10[0] = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_49CBC78), (__m128i)(unsigned __int64)nullsub_266);
  qword_4ADF720 = 0;
  qword_4ADF728 = 0;
  qword_4ADF730 = 0;
  qword_4ADF738 = 0;
  qword_4ADF748 = 0x100000000LL;
  qword_4ADF760 = 1;
  dword_4ADF768 = 0;
  byte_4ADF76C = 1;
  v1 = sub_259AC30(a1, &qword_4ADF750);
  v2 = (unsigned int)qword_4ADF748;
  v3 = (unsigned int)qword_4ADF748 + 1LL;
  if ( HIDWORD(qword_4ADF748) < v3 )
  {
    sub_25D6060(&qword_4ADF750 - 2, &qword_4ADF750, v3, 8);
    v2 = (unsigned int)qword_4ADF748;
  }
  si128 = _mm_load_si128(v10);
  *(_QWORD *)(qword_4ADF740 + 8 * v2) = v1;
  word_4ADF788 = 0;
  xmmword_4ADF798 = 0;
  qword_4ADF700 = (__int64)off_4A6DFF0;
  xmmword_4ADF7A8 = (__int128)si128;
  LODWORD(qword_4ADF748) = qword_4ADF748 + 1;
  qword_4ADF790 = (__int64)off_49D9168;
  byte_4ADF778 = 0;
  qword_4ADF780 = (__int64)&off_4A64730;
  sub_259F400(&qword_4ADF700, "x86-and-imm-shrink", 18);
  qword_4ADF720 = (__int64)"Enable setting constant bits to reduce size of mask immediates";
  byte_4ADF778 = 1;
  word_4ADF788 = 257;
  qword_4ADF728 = 62;
  BYTE2(qword_4ADF708) = BYTE2(qword_4ADF708) & 0x9F | 0x20;
  sub_259EC40(&qword_4ADF700);
  __cxa_atexit(sub_1F6C9D0, &qword_4ADF700, &off_47CFE00);
  qword_4ADF688 = 0x100000000LL;
  qword_4ADF680 = (__int64)&qword_4ADF690;
  qword_4ADF650 = 0;
  qword_4ADF640 = (__int64)&off_4A6E058;
  qword_4ADF648 = (unsigned int)qword_4ADF648 & 0x80000000;
  qword_4ADF658 = 0;
  qword_4ADF660 = 0;
  qword_4ADF668 = 0;
  qword_4ADF670 = 0;
  qword_4ADF678 = 0;
  qword_4ADF698 = (__int64)&qword_4ADF6B0;
  qword_4ADF6A0 = 1;
  dword_4ADF6A8 = 0;
  byte_4ADF6AC = 1;
  v5 = sub_259AC30(sub_1F6C9D0, &qword_4ADF690);
  v6 = (unsigned int)qword_4ADF688;
  v7 = (unsigned int)qword_4ADF688 + 1LL;
  if ( HIDWORD(qword_4ADF688) < v7 )
  {
    sub_25D6060(&qword_4ADF690 - 2, &qword_4ADF690, v7, 8);
    v6 = (unsigned int)qword_4ADF688;
  }
  v8 = _mm_load_si128(v10);
  *(_QWORD *)(qword_4ADF680 + 8 * v6) = v5;
  word_4ADF6C8 = 0;
  qword_4ADF6C0 = (__int64)&off_4A64730;
  xmmword_4ADF6D8 = 0;
  qword_4ADF640 = (__int64)off_4A6DFF0;
  xmmword_4ADF6E8 = (__int128)v8;
  LODWORD(qword_4ADF688) = qword_4ADF688 + 1;
  qword_4ADF6D0 = (__int64)off_49D9168;
  byte_4ADF6B8 = 0;
  sub_259F400(&qword_4ADF640, "x86-promote-anyext-load", 23);
  word_4ADF6C8 = 257;
  qword_4ADF660 = (__int64)"Enable promoting aligned anyext load to wider load";
  byte_4ADF6B8 = 1;
  qword_4ADF668 = 50;
  BYTE2(qword_4ADF648) = BYTE2(qword_4ADF648) & 0x9F | 0x20;
  sub_259EC40(&qword_4ADF640);
  return __cxa_atexit(sub_1F6C9D0, &qword_4ADF640, &off_47CFE00);
}

