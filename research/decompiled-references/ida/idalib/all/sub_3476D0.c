int sub_3476D0()
{
  size_t v0; // rax
  __int64 v1; // r12
  __int64 v2; // rax
  __int64 v3; // rcx
  unsigned __int64 v4; // rdx
  size_t v5; // rax
  __int64 v6; // r13
  __int64 v7; // rax
  __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  size_t v10; // rax
  __int64 v11; // r13
  __int64 v12; // rax
  __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  __m128i v15; // xmm2
  size_t v16; // rax
  __int64 v17; // r13
  __int64 v18; // rax
  __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  __m128i v21; // xmm3
  __m128i v23; // [rsp+0h] [rbp-58h] BYREF
  __int64 v24; // [rsp+18h] [rbp-40h]

  v0 = j__strlen("Allows loops to be unroll-and-jammed.");
  qword_2D078B0 = 0;
  v1 = v0;
  qword_2D078B8 = 0;
  qword_2D078C0 = 0;
  qword_2D078A0 = (__int64)&off_2C758B0;
  qword_2D078A8 = (unsigned int)qword_2D078A8 & 0x80000000;
  qword_2D078E8 = 0x100000000LL;
  qword_2D078C8 = 0;
  qword_2D078D0 = 0;
  qword_2D078D8 = 0;
  qword_2D078E0 = (__int64)&unk_2D078F0;
  qword_2D078F8 = (__int64)&unk_2D07910;
  qword_2D07900 = 1;
  dword_2D07908 = 0;
  byte_2D0790C = 1;
  v2 = sub_2210FF0("Allows loops to be unroll-and-jammed.");
  v3 = (unsigned int)qword_2D078E8;
  v4 = (unsigned int)qword_2D078E8 + 1LL;
  if ( v4 > HIDWORD(qword_2D078E8) )
  {
    v23.m128i_i64[0] = v2;
    sub_2237220((char *)&unk_2D078F0 - 16, &unk_2D078F0, v4, 8);
    v3 = (unsigned int)qword_2D078E8;
    v2 = v23.m128i_i64[0];
  }
  *(_QWORD *)(qword_2D078E0 + 8 * v3) = v2;
  word_2D07928 = 0;
  xmmword_2D07948 = (__int128)_mm_loadh_ps((const double *)off_2C78368);
  LODWORD(qword_2D078E8) = qword_2D078E8 + 1;
  qword_2D07920 = (__int64)off_2C714E8;
  byte_2D07918 = 0;
  qword_2D078A0 = (__int64)off_2C75848;
  qword_2D07930 = (__int64)off_2BEAB08;
  sub_2217250(&qword_2D078A0, "allow-unroll-and-jam", 20);
  qword_2D078C8 = v1;
  BYTE2(qword_2D078A8) = BYTE2(qword_2D078A8) & 0x9F | 0x20;
  qword_2D078C0 = (__int64)"Allows loops to be unroll-and-jammed.";
  sub_2218140(&qword_2D078A0);
  __cxa_atexit(sub_200E190, &qword_2D078A0, &off_2B25620);
  v5 = j__strlen(
         "Use this unroll count for all loops including those with unroll_and_jam_count pragma values, for testing purposes");
  qword_2D07820 = (__int64)&unk_2D07830;
  v6 = v5;
  qword_2D077F0 = 0;
  qword_2D077E0 = (__int64)&off_2C758B0;
  qword_2D077E8 = (unsigned int)qword_2D077E8 & 0x80000000;
  qword_2D07828 = 0x100000000LL;
  qword_2D077F8 = 0;
  qword_2D07800 = 0;
  qword_2D07808 = 0;
  qword_2D07810 = 0;
  qword_2D07818 = 0;
  qword_2D07838 = (__int64)&unk_2D07850;
  qword_2D07840 = 1;
  dword_2D07848 = 0;
  byte_2D0784C = 1;
  v7 = sub_2210FF0(
         "Use this unroll count for all loops including those with unroll_and_jam_count pragma values, for testing purposes");
  v8 = (unsigned int)qword_2D07828;
  v9 = (unsigned int)qword_2D07828 + 1LL;
  if ( v9 > HIDWORD(qword_2D07828) )
  {
    v23.m128i_i64[0] = v7;
    sub_2237220((char *)&unk_2D07830 - 16, &unk_2D07830, v9, 8);
    v8 = (unsigned int)qword_2D07828;
    v7 = v23.m128i_i64[0];
  }
  *(_QWORD *)(qword_2D07820 + 8 * v8) = v7;
  qword_2D07860 = (__int64)off_2C712D0;
  qword_2D077E0 = (__int64)off_2C75710;
  v23 = (__m128i)_mm_loadh_ps((const double *)off_2C784F8);
  xmmword_2D07888 = (__int128)v23;
  qword_2D07870 = (__int64)off_2BEAB98;
  LODWORD(qword_2D07828) = qword_2D07828 + 1;
  dword_2D07858 = 0;
  dword_2D07868 = 0;
  byte_2D0786C = 0;
  sub_2217250(&qword_2D077E0, "unroll-and-jam-count", 20);
  qword_2D07808 = v6;
  BYTE2(qword_2D077E8) = BYTE2(qword_2D077E8) & 0x9F | 0x20;
  qword_2D07800 = (__int64)"Use this unroll count for all loops including those with unroll_and_jam_count pragma values, "
                           "for testing purposes";
  sub_2218140(&qword_2D077E0);
  __cxa_atexit(sub_1FED260, &qword_2D077E0, &off_2B25620);
  v10 = j__strlen("Threshold to use for inner loop when doing unroll and jam.");
  qword_2D07760 = (__int64)&unk_2D07770;
  v11 = v10;
  qword_2D07730 = 0;
  qword_2D07720 = (__int64)&off_2C758B0;
  qword_2D07728 = (unsigned int)qword_2D07728 & 0x80000000;
  qword_2D07768 = 0x100000000LL;
  qword_2D07738 = 0;
  qword_2D07740 = 0;
  qword_2D07748 = 0;
  qword_2D07750 = 0;
  qword_2D07758 = 0;
  qword_2D07778 = (__int64)&unk_2D07790;
  qword_2D07780 = 1;
  dword_2D07788 = 0;
  byte_2D0778C = 1;
  v12 = sub_2210FF0("Threshold to use for inner loop when doing unroll and jam.");
  v13 = (unsigned int)qword_2D07768;
  v14 = (unsigned int)qword_2D07768 + 1LL;
  if ( v14 > HIDWORD(qword_2D07768) )
  {
    v24 = v12;
    sub_2237220((char *)&unk_2D07770 - 16, &unk_2D07770, v14, 8);
    v13 = (unsigned int)qword_2D07768;
    v12 = v24;
  }
  v15 = _mm_load_si128(&v23);
  *(_QWORD *)(qword_2D07760 + 8 * v13) = v12;
  qword_2D077A0 = (__int64)off_2C712D0;
  qword_2D07720 = (__int64)off_2C75710;
  xmmword_2D077C8 = (__int128)v15;
  qword_2D077B0 = (__int64)off_2BEAB98;
  LODWORD(qword_2D07768) = qword_2D07768 + 1;
  dword_2D07798 = 0;
  dword_2D077A8 = 0;
  byte_2D077AC = 0;
  sub_2217250(&qword_2D07720, "unroll-and-jam-threshold", 24);
  qword_2D07748 = v11;
  dword_2D07798 = 60;
  byte_2D077AC = 1;
  dword_2D077A8 = 60;
  BYTE2(qword_2D07728) = BYTE2(qword_2D07728) & 0x9F | 0x20;
  qword_2D07740 = (__int64)"Threshold to use for inner loop when doing unroll and jam.";
  sub_2218140(&qword_2D07720);
  __cxa_atexit(sub_1FED260, &qword_2D07720, &off_2B25620);
  v16 = j__strlen("Unrolled size limit for loops with an unroll_and_jam(full) or unroll_count pragma.");
  byte_2D076CC = 1;
  qword_2D07670 = 0;
  v17 = v16;
  qword_2D07660 = (__int64)&off_2C758B0;
  qword_2D07668 = (unsigned int)qword_2D07668 & 0x80000000;
  qword_2D076A8 = 0x100000000LL;
  qword_2D07678 = 0;
  qword_2D07680 = 0;
  qword_2D07688 = 0;
  qword_2D07690 = 0;
  qword_2D07698 = 0;
  qword_2D076A0 = (__int64)&unk_2D076B0;
  qword_2D076B8 = (__int64)&unk_2D076D0;
  qword_2D076C0 = 1;
  dword_2D076C8 = 0;
  v18 = sub_2210FF0("Unrolled size limit for loops with an unroll_and_jam(full) or unroll_count pragma.");
  v19 = (unsigned int)qword_2D076A8;
  v20 = (unsigned int)qword_2D076A8 + 1LL;
  if ( v20 > HIDWORD(qword_2D076A8) )
  {
    v24 = v18;
    sub_2237220((char *)&unk_2D076B0 - 16, &unk_2D076B0, v20, 8);
    v19 = (unsigned int)qword_2D076A8;
    v18 = v24;
  }
  v21 = _mm_load_si128(&v23);
  *(_QWORD *)(qword_2D076A0 + 8 * v19) = v18;
  qword_2D076E0 = (__int64)off_2C712D0;
  qword_2D07660 = (__int64)off_2C75710;
  qword_2D076F0 = (__int64)off_2BEAB98;
  xmmword_2D07708 = (__int128)v21;
  LODWORD(qword_2D076A8) = qword_2D076A8 + 1;
  dword_2D076D8 = 0;
  dword_2D076E8 = 0;
  byte_2D076EC = 0;
  sub_2217250(&qword_2D07660, "pragma-unroll-and-jam-threshold", 31);
  qword_2D07688 = v17;
  dword_2D076D8 = 1024;
  byte_2D076EC = 1;
  dword_2D076E8 = 1024;
  BYTE2(qword_2D07668) = BYTE2(qword_2D07668) & 0x9F | 0x20;
  qword_2D07680 = (__int64)"Unrolled size limit for loops with an unroll_and_jam(full) or unroll_count pragma.";
  sub_2218140(&qword_2D07660);
  return __cxa_atexit(sub_1FED260, &qword_2D07660, &off_2B25620);
}
