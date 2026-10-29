int __fastcall sub_5B1800(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  unsigned __int64 v3; // rdx
  __m128i v4; // xmm3
  __int64 v5; // rax
  __int64 v6; // rdx
  __m128i v7; // xmm4
  __int64 v8; // r14
  __int64 v9; // rax
  unsigned __int64 v10; // rdx
  __m128i v11; // xmm5
  __m128i v13; // [rsp+0h] [rbp-58h] BYREF
  __int64 v14; // [rsp+18h] [rbp-40h]

  qword_4B078A0 = (__int64)&qword_4B078B0;
  qword_4B07870 = 0;
  qword_4B07878 = 0;
  qword_4B07860 = (__int64)&off_4A6E058;
  qword_4B07868 = (unsigned int)qword_4B07868 & 0x80000000;
  qword_4B078B8 = (__int64)&qword_4B078D0;
  v13 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_49EBB70), (__m128i)(unsigned __int64)nullsub_266);
  qword_4B07880 = 0;
  qword_4B07888 = 0;
  qword_4B07890 = 0;
  qword_4B07898 = 0;
  qword_4B078A8 = 0x100000000LL;
  qword_4B078C0 = 1;
  dword_4B078C8 = 0;
  byte_4B078CC = 1;
  v1 = sub_259AC30(a1, &qword_4B078B0);
  v2 = (unsigned int)qword_4B078A8;
  v3 = (unsigned int)qword_4B078A8 + 1LL;
  if ( HIDWORD(qword_4B078A8) < v3 )
  {
    sub_25D6060(&qword_4B078B0 - 2, &qword_4B078B0, v3, 8);
    v2 = (unsigned int)qword_4B078A8;
  }
  v4 = _mm_load_si128(&v13);
  *(_QWORD *)(qword_4B078A0 + 8 * v2) = v1;
  word_4B078E8 = 0;
  xmmword_4B078F8 = 0;
  qword_4B078E0 = (__int64)&off_4A64730;
  xmmword_4B07908 = (__int128)v4;
  LODWORD(qword_4B078A8) = qword_4B078A8 + 1;
  qword_4B07860 = (__int64)off_4A6DFF0;
  byte_4B078D8 = 0;
  qword_4B078F0 = (__int64)off_49D9168;
  sub_259F400(&qword_4B07860, "unroll-runtime-epilog", 21);
  byte_4B078D8 = 0;
  word_4B078E8 = 256;
  qword_4B07888 = 74;
  BYTE2(qword_4B07868) = BYTE2(qword_4B07868) & 0x9F | 0x20;
  qword_4B07880 = (__int64)"Allow runtime unrolled loops to be unrolled with epilog instead of prolog.";
  sub_259EC40(&qword_4B07860);
  __cxa_atexit(sub_1F6C9D0, &qword_4B07860, &off_47CFE00);
  qword_4B077B0 = 0;
  qword_4B077E0 = (__int64)&qword_4B077F0;
  qword_4B077B8 = 0;
  qword_4B077A0 = (__int64)&off_4A6E058;
  qword_4B077A8 = (unsigned int)qword_4B077A8 & 0x80000000;
  qword_4B077C0 = 0;
  qword_4B077C8 = 0;
  qword_4B077D0 = 0;
  qword_4B077D8 = 0;
  qword_4B077E8 = 0x100000000LL;
  qword_4B077F8 = (__int64)&qword_4B07810;
  qword_4B07800 = 1;
  dword_4B07808 = 0;
  byte_4B0780C = 1;
  v5 = sub_259AC30(sub_1F6C9D0, &qword_4B077F0);
  v6 = (unsigned int)qword_4B077E8;
  if ( HIDWORD(qword_4B077E8) < (unsigned __int64)(unsigned int)qword_4B077E8 + 1 )
  {
    v14 = v5;
    sub_25D6060(&qword_4B077F0 - 2, &qword_4B077F0, (unsigned int)qword_4B077E8 + 1LL, 8);
    v6 = (unsigned int)qword_4B077E8;
    v5 = v14;
  }
  v7 = _mm_load_si128(&v13);
  *(_QWORD *)(qword_4B077E0 + 8 * v6) = v5;
  word_4B07828 = 0;
  xmmword_4B07838 = 0;
  qword_4B07820 = (__int64)&off_4A64730;
  xmmword_4B07848 = (__int128)v7;
  LODWORD(qword_4B077E8) = qword_4B077E8 + 1;
  qword_4B077A0 = (__int64)off_4A6DFF0;
  byte_4B07818 = 0;
  qword_4B07830 = (__int64)off_49D9168;
  sub_259F400(&qword_4B077A0, "unroll-verify-domtree", 21);
  qword_4B077C8 = 30;
  byte_4B07818 = 0;
  word_4B07828 = 256;
  BYTE2(qword_4B077A8) = BYTE2(qword_4B077A8) & 0x9F | 0x20;
  qword_4B077C0 = (__int64)"Verify domtree after unrolling";
  sub_259EC40(&qword_4B077A0);
  __cxa_atexit(sub_1F6C9D0, &qword_4B077A0, &off_47CFE00);
  qword_4B07728 = 0x100000000LL;
  qword_4B07720 = (__int64)&qword_4B07730;
  qword_4B076F0 = 0;
  qword_4B076E0 = (__int64)&off_4A6E058;
  qword_4B076E8 = (unsigned int)qword_4B076E8 & 0x80000000;
  qword_4B076F8 = 0;
  qword_4B07700 = 0;
  qword_4B07708 = 0;
  qword_4B07710 = 0;
  qword_4B07718 = 0;
  qword_4B07738 = (__int64)&qword_4B07750;
  qword_4B07740 = 1;
  dword_4B07748 = 0;
  byte_4B0774C = 1;
  v8 = sub_259AC30(sub_1F6C9D0, &qword_4B07730);
  v9 = (unsigned int)qword_4B07728;
  v10 = (unsigned int)qword_4B07728 + 1LL;
  if ( HIDWORD(qword_4B07728) < v10 )
  {
    sub_25D6060(&qword_4B07730 - 2, &qword_4B07730, v10, 8);
    v9 = (unsigned int)qword_4B07728;
  }
  v11 = _mm_load_si128(&v13);
  *(_QWORD *)(qword_4B07720 + 8 * v9) = v8;
  word_4B07768 = 0;
  xmmword_4B07778 = 0;
  xmmword_4B07788 = (__int128)v11;
  qword_4B07760 = (__int64)&off_4A64730;
  LODWORD(qword_4B07728) = qword_4B07728 + 1;
  byte_4B07758 = 0;
  qword_4B076E0 = (__int64)off_4A6DFF0;
  qword_4B07770 = (__int64)off_49D9168;
  sub_259F400(&qword_4B076E0, "unroll-verify-loopinfo", 22);
  word_4B07768 = 256;
  qword_4B07708 = 31;
  byte_4B07758 = 0;
  BYTE2(qword_4B076E8) = BYTE2(qword_4B076E8) & 0x9F | 0x20;
  qword_4B07700 = (__int64)"Verify loopinfo after unrolling";
  sub_259EC40(&qword_4B076E0);
  return __cxa_atexit(sub_1F6C9D0, &qword_4B076E0, &off_47CFE00);
}

