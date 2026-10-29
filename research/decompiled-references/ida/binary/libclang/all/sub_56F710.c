int __fastcall sub_56F710(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  unsigned __int64 v3; // rdx
  __m128i v4; // xmm3
  __int64 v5; // rax
  __int64 v6; // rdx
  __m128i v7; // xmm4
  __int64 v8; // rax
  __int64 v9; // rdx
  __m128i v10; // xmm5
  __int64 v11; // r14
  __int64 v12; // rax
  unsigned __int64 v13; // rdx
  __m128i v14; // xmm6
  __m128i v16; // [rsp+0h] [rbp-58h] BYREF
  __int64 v17; // [rsp+18h] [rbp-40h]

  qword_4AE2920 = (__int64)&qword_4AE2930;
  qword_4AE28F0 = 0;
  qword_4AE28F8 = 0;
  qword_4AE28E0 = (__int64)&off_4A6E058;
  qword_4AE28E8 = (unsigned int)qword_4AE28E8 & 0x80000000;
  qword_4AE2938 = (__int64)&qword_4AE2950;
  v16 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_49D8430), (__m128i)(unsigned __int64)nullsub_266);
  qword_4AE2900 = 0;
  qword_4AE2908 = 0;
  qword_4AE2910 = 0;
  qword_4AE2918 = 0;
  qword_4AE2928 = 0x100000000LL;
  qword_4AE2940 = 1;
  dword_4AE2948 = 0;
  byte_4AE294C = 1;
  v1 = sub_259AC30(a1, &qword_4AE2930);
  v2 = (unsigned int)qword_4AE2928;
  v3 = (unsigned int)qword_4AE2928 + 1LL;
  if ( HIDWORD(qword_4AE2928) < v3 )
  {
    sub_25D6060(&qword_4AE2930 - 2, &qword_4AE2930, v3, 8);
    v2 = (unsigned int)qword_4AE2928;
  }
  v4 = _mm_load_si128(&v16);
  *(_QWORD *)(qword_4AE2920 + 8 * v2) = v1;
  word_4AE2968 = 0;
  xmmword_4AE2978 = 0;
  qword_4AE2960 = (__int64)&off_4A64730;
  xmmword_4AE2988 = (__int128)v4;
  LODWORD(qword_4AE2928) = qword_4AE2928 + 1;
  qword_4AE28E0 = (__int64)off_4A6DFF0;
  byte_4AE2958 = 0;
  qword_4AE2970 = (__int64)off_49D9168;
  sub_259F400(&qword_4AE28E0, "use-constant-int-for-fixed-length-splat", 39);
  byte_4AE2958 = 0;
  word_4AE2968 = 256;
  qword_4AE2908 = 59;
  BYTE2(qword_4AE28E8) = BYTE2(qword_4AE28E8) & 0x9F | 0x20;
  qword_4AE2900 = (__int64)"Use ConstantInt's native fixed-length vector splat support.";
  sub_259EC40(&qword_4AE28E0);
  __cxa_atexit(sub_1F6C9D0, &qword_4AE28E0, &off_47CFE00);
  qword_4AE2830 = 0;
  qword_4AE2860 = (__int64)&qword_4AE2870;
  qword_4AE2838 = 0;
  qword_4AE2820 = (__int64)&off_4A6E058;
  qword_4AE2828 = (unsigned int)qword_4AE2828 & 0x80000000;
  qword_4AE2840 = 0;
  qword_4AE2848 = 0;
  qword_4AE2850 = 0;
  qword_4AE2858 = 0;
  qword_4AE2868 = 0x100000000LL;
  qword_4AE2878 = (__int64)&qword_4AE2890;
  qword_4AE2880 = 1;
  dword_4AE2888 = 0;
  byte_4AE288C = 1;
  v5 = sub_259AC30(sub_1F6C9D0, &qword_4AE2870);
  v6 = (unsigned int)qword_4AE2868;
  if ( HIDWORD(qword_4AE2868) < (unsigned __int64)(unsigned int)qword_4AE2868 + 1 )
  {
    v17 = v5;
    sub_25D6060(&qword_4AE2870 - 2, &qword_4AE2870, (unsigned int)qword_4AE2868 + 1LL, 8);
    v6 = (unsigned int)qword_4AE2868;
    v5 = v17;
  }
  v7 = _mm_load_si128(&v16);
  *(_QWORD *)(qword_4AE2860 + 8 * v6) = v5;
  word_4AE28A8 = 0;
  xmmword_4AE28B8 = 0;
  qword_4AE28A0 = (__int64)&off_4A64730;
  xmmword_4AE28C8 = (__int128)v7;
  LODWORD(qword_4AE2868) = qword_4AE2868 + 1;
  qword_4AE2820 = (__int64)off_4A6DFF0;
  byte_4AE2898 = 0;
  qword_4AE28B0 = (__int64)off_49D9168;
  sub_259F400(&qword_4AE2820, "use-constant-fp-for-fixed-length-splat", 38);
  byte_4AE2898 = 0;
  word_4AE28A8 = 256;
  qword_4AE2848 = 58;
  BYTE2(qword_4AE2828) = BYTE2(qword_4AE2828) & 0x9F | 0x20;
  qword_4AE2840 = (__int64)"Use ConstantFP's native fixed-length vector splat support.";
  sub_259EC40(&qword_4AE2820);
  __cxa_atexit(sub_1F6C9D0, &qword_4AE2820, &off_47CFE00);
  qword_4AE2770 = 0;
  qword_4AE27A0 = (__int64)&qword_4AE27B0;
  qword_4AE2778 = 0;
  qword_4AE2760 = (__int64)&off_4A6E058;
  qword_4AE2768 = (unsigned int)qword_4AE2768 & 0x80000000;
  qword_4AE2780 = 0;
  qword_4AE2788 = 0;
  qword_4AE2790 = 0;
  qword_4AE2798 = 0;
  qword_4AE27A8 = 0x100000000LL;
  qword_4AE27B8 = (__int64)&qword_4AE27D0;
  qword_4AE27C0 = 1;
  dword_4AE27C8 = 0;
  byte_4AE27CC = 1;
  v8 = sub_259AC30(sub_1F6C9D0, &qword_4AE27B0);
  v9 = (unsigned int)qword_4AE27A8;
  if ( HIDWORD(qword_4AE27A8) < (unsigned __int64)(unsigned int)qword_4AE27A8 + 1 )
  {
    v17 = v8;
    sub_25D6060(&qword_4AE27B0 - 2, &qword_4AE27B0, (unsigned int)qword_4AE27A8 + 1LL, 8);
    v9 = (unsigned int)qword_4AE27A8;
    v8 = v17;
  }
  v10 = _mm_load_si128(&v16);
  *(_QWORD *)(qword_4AE27A0 + 8 * v9) = v8;
  word_4AE27E8 = 0;
  xmmword_4AE27F8 = 0;
  qword_4AE27E0 = (__int64)&off_4A64730;
  xmmword_4AE2808 = (__int128)v10;
  LODWORD(qword_4AE27A8) = qword_4AE27A8 + 1;
  qword_4AE2760 = (__int64)off_4A6DFF0;
  byte_4AE27D8 = 0;
  qword_4AE27F0 = (__int64)off_49D9168;
  sub_259F400(&qword_4AE2760, "use-constant-int-for-scalable-splat", 35);
  byte_4AE27D8 = 0;
  word_4AE27E8 = 256;
  qword_4AE2788 = 55;
  BYTE2(qword_4AE2768) = BYTE2(qword_4AE2768) & 0x9F | 0x20;
  qword_4AE2780 = (__int64)"Use ConstantInt's native scalable vector splat support.";
  sub_259EC40(&qword_4AE2760);
  __cxa_atexit(sub_1F6C9D0, &qword_4AE2760, &off_47CFE00);
  qword_4AE26E8 = 0x100000000LL;
  qword_4AE26E0 = (__int64)&qword_4AE26F0;
  qword_4AE26B0 = 0;
  qword_4AE26A0 = (__int64)&off_4A6E058;
  qword_4AE26A8 = (unsigned int)qword_4AE26A8 & 0x80000000;
  qword_4AE26B8 = 0;
  qword_4AE26C0 = 0;
  qword_4AE26C8 = 0;
  qword_4AE26D0 = 0;
  qword_4AE26D8 = 0;
  qword_4AE26F8 = (__int64)&qword_4AE2710;
  qword_4AE2700 = 1;
  dword_4AE2708 = 0;
  byte_4AE270C = 1;
  v11 = sub_259AC30(sub_1F6C9D0, &qword_4AE26F0);
  v12 = (unsigned int)qword_4AE26E8;
  v13 = (unsigned int)qword_4AE26E8 + 1LL;
  if ( HIDWORD(qword_4AE26E8) < v13 )
  {
    sub_25D6060(&qword_4AE26F0 - 2, &qword_4AE26F0, v13, 8);
    v12 = (unsigned int)qword_4AE26E8;
  }
  v14 = _mm_load_si128(&v16);
  *(_QWORD *)(qword_4AE26E0 + 8 * v12) = v11;
  word_4AE2728 = 0;
  xmmword_4AE2738 = 0;
  xmmword_4AE2748 = (__int128)v14;
  qword_4AE2720 = (__int64)&off_4A64730;
  LODWORD(qword_4AE26E8) = qword_4AE26E8 + 1;
  byte_4AE2718 = 0;
  qword_4AE26A0 = (__int64)off_4A6DFF0;
  qword_4AE2730 = (__int64)off_49D9168;
  sub_259F400(&qword_4AE26A0, "use-constant-fp-for-scalable-splat", 34);
  word_4AE2728 = 256;
  byte_4AE2718 = 0;
  qword_4AE26C8 = 54;
  BYTE2(qword_4AE26A8) = BYTE2(qword_4AE26A8) & 0x9F | 0x20;
  qword_4AE26C0 = (__int64)"Use ConstantFP's native scalable vector splat support.";
  sub_259EC40(&qword_4AE26A0);
  return __cxa_atexit(sub_1F6C9D0, &qword_4AE26A0, &off_47CFE00);
}

