int sub_32E0D0()
{
  size_t v0; // rax
  __int64 v1; // r13
  __int64 v2; // rax
  __int64 v3; // rcx
  unsigned __int64 v4; // rdx
  size_t v5; // rax
  size_t v6; // rax
  __int64 v7; // r13
  __int64 v8; // rax
  __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  __m128i v11; // xmm1
  size_t v12; // rax
  size_t v13; // rax
  __int64 v14; // r13
  __int64 v15; // rax
  __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  __m128i v18; // xmm2
  size_t v19; // rax
  __m128i v21; // [rsp+0h] [rbp-58h] BYREF
  __int64 v22; // [rsp+18h] [rbp-40h]

  v0 = j__strlen("Print addresses of instructions when dumping");
  qword_2CD28F0 = 0;
  v1 = v0;
  qword_2CD28F8 = 0;
  qword_2CD2900 = 0;
  qword_2CD28E0 = (__int64)&off_2C4B8B0;
  qword_2CD28E8 = (unsigned int)qword_2CD28E8 & 0x80000000;
  qword_2CD2928 = 0x100000000LL;
  qword_2CD2908 = 0;
  qword_2CD2910 = 0;
  qword_2CD2918 = 0;
  qword_2CD2920 = (__int64)&unk_2CD2930;
  qword_2CD2938 = (__int64)&unk_2CD2950;
  qword_2CD2940 = 1;
  dword_2CD2948 = 0;
  byte_2CD294C = 1;
  v2 = sub_21ED2B0("Print addresses of instructions when dumping");
  v3 = (unsigned int)qword_2CD2928;
  v4 = (unsigned int)qword_2CD2928 + 1LL;
  if ( v4 > HIDWORD(qword_2CD2928) )
  {
    v21.m128i_i64[0] = v2;
    sub_22134E0((char *)&unk_2CD2930 - 16, &unk_2CD2930, v4, 8);
    v3 = (unsigned int)qword_2CD2928;
    v2 = v21.m128i_i64[0];
  }
  *(_QWORD *)(qword_2CD2920 + 8 * v3) = v2;
  qword_2CD2960 = (__int64)off_2C474E8;
  qword_2CD28E0 = (__int64)off_2C4B848;
  word_2CD2968 = 0;
  v21 = (__m128i)_mm_loadh_ps((const double *)off_2C4E368);
  xmmword_2CD2988 = (__int128)v21;
  LODWORD(qword_2CD2928) = qword_2CD2928 + 1;
  byte_2CD2958 = 0;
  qword_2CD2970 = (__int64)off_2BC0B68;
  v5 = j__strlen("print-inst-addrs");
  sub_21F3510(&qword_2CD28E0, "print-inst-addrs", v5);
  qword_2CD2908 = v1;
  BYTE2(qword_2CD28E8) = BYTE2(qword_2CD28E8) & 0x9F | 0x20;
  qword_2CD2900 = (__int64)"Print addresses of instructions when dumping";
  sub_21F4400(&qword_2CD28E0);
  __cxa_atexit(sub_1FEA450, &qword_2CD28E0, &off_2AFC540);
  v6 = j__strlen("Pretty print debug locations of instructions when dumping");
  qword_2CD2860 = (__int64)&unk_2CD2870;
  v7 = v6;
  qword_2CD2830 = 0;
  qword_2CD2820 = (__int64)&off_2C4B8B0;
  qword_2CD2828 = (unsigned int)qword_2CD2828 & 0x80000000;
  qword_2CD2868 = 0x100000000LL;
  qword_2CD2838 = 0;
  qword_2CD2840 = 0;
  qword_2CD2848 = 0;
  qword_2CD2850 = 0;
  qword_2CD2858 = 0;
  qword_2CD2878 = (__int64)&unk_2CD2890;
  qword_2CD2880 = 1;
  dword_2CD2888 = 0;
  byte_2CD288C = 1;
  v8 = sub_21ED2B0("Pretty print debug locations of instructions when dumping");
  v9 = (unsigned int)qword_2CD2868;
  v10 = (unsigned int)qword_2CD2868 + 1LL;
  if ( v10 > HIDWORD(qword_2CD2868) )
  {
    v22 = v8;
    sub_22134E0((char *)&unk_2CD2870 - 16, &unk_2CD2870, v10, 8);
    v9 = (unsigned int)qword_2CD2868;
    v8 = v22;
  }
  v11 = _mm_load_si128(&v21);
  *(_QWORD *)(qword_2CD2860 + 8 * v9) = v8;
  qword_2CD28A0 = (__int64)off_2C474E8;
  qword_2CD2820 = (__int64)off_2C4B848;
  xmmword_2CD28C8 = (__int128)v11;
  LODWORD(qword_2CD2868) = qword_2CD2868 + 1;
  word_2CD28A8 = 0;
  byte_2CD2898 = 0;
  qword_2CD28B0 = (__int64)off_2BC0B68;
  v12 = j__strlen("print-inst-debug-locs");
  sub_21F3510(&qword_2CD2820, "print-inst-debug-locs", v12);
  qword_2CD2848 = v7;
  BYTE2(qword_2CD2828) = BYTE2(qword_2CD2828) & 0x9F | 0x20;
  qword_2CD2840 = (__int64)"Pretty print debug locations of instructions when dumping";
  sub_21F4400(&qword_2CD2820);
  __cxa_atexit(sub_1FEA450, &qword_2CD2820, &off_2AFC540);
  v13 = j__strlen("Pretty print perf data (branch weights, etc) when dumping");
  byte_2CD27CC = 1;
  qword_2CD2770 = 0;
  v14 = v13;
  qword_2CD2760 = (__int64)&off_2C4B8B0;
  qword_2CD2768 = (unsigned int)qword_2CD2768 & 0x80000000;
  qword_2CD27A8 = 0x100000000LL;
  qword_2CD2778 = 0;
  qword_2CD2780 = 0;
  qword_2CD2788 = 0;
  qword_2CD2790 = 0;
  qword_2CD2798 = 0;
  qword_2CD27A0 = (__int64)&unk_2CD27B0;
  qword_2CD27B8 = (__int64)&unk_2CD27D0;
  qword_2CD27C0 = 1;
  dword_2CD27C8 = 0;
  v15 = sub_21ED2B0("Pretty print perf data (branch weights, etc) when dumping");
  v16 = (unsigned int)qword_2CD27A8;
  v17 = (unsigned int)qword_2CD27A8 + 1LL;
  if ( v17 > HIDWORD(qword_2CD27A8) )
  {
    v22 = v15;
    sub_22134E0((char *)&unk_2CD27B0 - 16, &unk_2CD27B0, v17, 8);
    v16 = (unsigned int)qword_2CD27A8;
    v15 = v22;
  }
  v18 = _mm_load_si128(&v21);
  *(_QWORD *)(qword_2CD27A0 + 8 * v16) = v15;
  word_2CD27E8 = 0;
  qword_2CD27E0 = (__int64)off_2C474E8;
  qword_2CD2760 = (__int64)off_2C4B848;
  xmmword_2CD2808 = (__int128)v18;
  LODWORD(qword_2CD27A8) = qword_2CD27A8 + 1;
  byte_2CD27D8 = 0;
  qword_2CD27F0 = (__int64)off_2BC0B68;
  v19 = j__strlen("print-prof-data");
  sub_21F3510(&qword_2CD2760, "print-prof-data", v19);
  qword_2CD2788 = v14;
  BYTE2(qword_2CD2768) = BYTE2(qword_2CD2768) & 0x9F | 0x20;
  qword_2CD2780 = (__int64)"Pretty print perf data (branch weights, etc) when dumping";
  sub_21F4400(&qword_2CD2760);
  return __cxa_atexit(sub_1FEA450, &qword_2CD2760, &off_2AFC540);
}

