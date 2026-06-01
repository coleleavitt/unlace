int sub_341FA0()
{
  size_t v0; // rax
  __int64 v1; // r12
  __int64 v2; // rax
  __int64 v3; // rcx
  unsigned __int64 v4; // rdx
  size_t v5; // rax
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  size_t v10; // rax
  __int64 v11; // r14
  __int64 v12; // rax
  __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  __m128i v15; // xmm2
  size_t v16; // rax
  __int64 v17; // r14
  __int64 v18; // rax
  __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  __m128i v21; // xmm3
  __m128i v23; // [rsp+0h] [rbp-58h] BYREF
  __int64 v24; // [rsp+18h] [rbp-40h]

  v0 = j__strlen("Prefetch write addresses");
  qword_2D04090 = 0;
  v1 = v0;
  qword_2D04098 = 0;
  qword_2D040A0 = 0;
  qword_2D04080 = (__int64)&off_2C758B0;
  qword_2D04088 = (unsigned int)qword_2D04088 & 0x80000000;
  qword_2D040C8 = 0x100000000LL;
  qword_2D040A8 = 0;
  qword_2D040B0 = 0;
  qword_2D040B8 = 0;
  qword_2D040C0 = (__int64)&unk_2D040D0;
  qword_2D040D8 = (__int64)&unk_2D040F0;
  qword_2D040E0 = 1;
  dword_2D040E8 = 0;
  byte_2D040EC = 1;
  v2 = sub_2210FF0("Prefetch write addresses");
  v3 = (unsigned int)qword_2D040C8;
  v4 = (unsigned int)qword_2D040C8 + 1LL;
  if ( v4 > HIDWORD(qword_2D040C8) )
  {
    v23.m128i_i64[0] = v2;
    sub_2237220((char *)&unk_2D040D0 - 16, &unk_2D040D0, v4, 8);
    v3 = (unsigned int)qword_2D040C8;
    v2 = v23.m128i_i64[0];
  }
  *(_QWORD *)(qword_2D040C0 + 8 * v3) = v2;
  word_2D04108 = 0;
  xmmword_2D04128 = (__int128)_mm_loadh_ps((const double *)off_2C78368);
  LODWORD(qword_2D040C8) = qword_2D040C8 + 1;
  qword_2D04100 = (__int64)off_2C714E8;
  byte_2D040F8 = 0;
  qword_2D04080 = (__int64)off_2C75848;
  qword_2D04110 = (__int64)off_2BEAB08;
  sub_2217250(&qword_2D04080, "loop-prefetch-writes", 20);
  word_2D04108 = 256;
  byte_2D040F8 = 0;
  qword_2D040A8 = v1;
  BYTE2(qword_2D04088) = BYTE2(qword_2D04088) & 0x9F | 0x20;
  qword_2D040A0 = (__int64)"Prefetch write addresses";
  sub_2218140(&qword_2D04080);
  __cxa_atexit(sub_200E190, &qword_2D04080, &off_2B25620);
  v5 = j__strlen("Number of instructions to prefetch ahead");
  qword_2D04000 = (__int64)&unk_2D04010;
  v6 = v5;
  qword_2D03FD0 = 0;
  qword_2D03FC0 = (__int64)&off_2C758B0;
  qword_2D03FC8 = (unsigned int)qword_2D03FC8 & 0x80000000;
  qword_2D04008 = 0x100000000LL;
  qword_2D03FD8 = 0;
  qword_2D03FE0 = 0;
  qword_2D03FE8 = 0;
  qword_2D03FF0 = 0;
  qword_2D03FF8 = 0;
  qword_2D04018 = (__int64)&unk_2D04030;
  qword_2D04020 = 1;
  dword_2D04028 = 0;
  byte_2D0402C = 1;
  v7 = sub_2210FF0("Number of instructions to prefetch ahead");
  v8 = (unsigned int)qword_2D04008;
  v9 = (unsigned int)qword_2D04008 + 1LL;
  if ( v9 > HIDWORD(qword_2D04008) )
  {
    v23.m128i_i64[0] = v7;
    sub_2237220((char *)&unk_2D04010 - 16, &unk_2D04010, v9, 8);
    v8 = (unsigned int)qword_2D04008;
    v7 = v23.m128i_i64[0];
  }
  *(_QWORD *)(qword_2D04000 + 8 * v8) = v7;
  qword_2D04040 = (__int64)off_2C712D0;
  qword_2D03FC0 = (__int64)off_2C75710;
  v23 = (__m128i)_mm_loadh_ps((const double *)off_2C784F8);
  xmmword_2D04068 = (__int128)v23;
  qword_2D04050 = (__int64)off_2BEAB98;
  LODWORD(qword_2D04008) = qword_2D04008 + 1;
  dword_2D04038 = 0;
  dword_2D04048 = 0;
  byte_2D0404C = 0;
  sub_2217250(&qword_2D03FC0, "prefetch-distance", 17);
  qword_2D03FE8 = v6;
  qword_2D03FE0 = (__int64)"Number of instructions to prefetch ahead";
  BYTE2(qword_2D03FC8) = BYTE2(qword_2D03FC8) & 0x9F | 0x20;
  sub_2218140(&qword_2D03FC0);
  __cxa_atexit(sub_1FED260, &qword_2D03FC0, &off_2B25620);
  v10 = j__strlen("Min stride to add prefetches");
  qword_2D03F40 = (__int64)&unk_2D03F50;
  v11 = v10;
  qword_2D03F10 = 0;
  qword_2D03F00 = (__int64)&off_2C758B0;
  qword_2D03F08 = (unsigned int)qword_2D03F08 & 0x80000000;
  qword_2D03F48 = 0x100000000LL;
  qword_2D03F18 = 0;
  qword_2D03F20 = 0;
  qword_2D03F28 = 0;
  qword_2D03F30 = 0;
  qword_2D03F38 = 0;
  qword_2D03F58 = (__int64)&unk_2D03F70;
  qword_2D03F60 = 1;
  dword_2D03F68 = 0;
  byte_2D03F6C = 1;
  v12 = sub_2210FF0("Min stride to add prefetches");
  v13 = (unsigned int)qword_2D03F48;
  v14 = (unsigned int)qword_2D03F48 + 1LL;
  if ( v14 > HIDWORD(qword_2D03F48) )
  {
    v24 = v12;
    sub_2237220((char *)&unk_2D03F50 - 16, &unk_2D03F50, v14, 8);
    v13 = (unsigned int)qword_2D03F48;
    v12 = v24;
  }
  v15 = _mm_load_si128(&v23);
  *(_QWORD *)(qword_2D03F40 + 8 * v13) = v12;
  qword_2D03F80 = (__int64)off_2C712D0;
  qword_2D03F00 = (__int64)off_2C75710;
  xmmword_2D03FA8 = (__int128)v15;
  qword_2D03F90 = (__int64)off_2BEAB98;
  LODWORD(qword_2D03F48) = qword_2D03F48 + 1;
  dword_2D03F78 = 0;
  dword_2D03F88 = 0;
  byte_2D03F8C = 0;
  sub_2217250(&qword_2D03F00, "min-prefetch-stride", 19);
  qword_2D03F28 = v11;
  qword_2D03F20 = (__int64)"Min stride to add prefetches";
  BYTE2(qword_2D03F08) = BYTE2(qword_2D03F08) & 0x9F | 0x20;
  sub_2218140(&qword_2D03F00);
  __cxa_atexit(sub_1FED260, &qword_2D03F00, &off_2B25620);
  v16 = j__strlen("Max number of iterations to prefetch ahead");
  byte_2D03EAC = 1;
  qword_2D03E50 = 0;
  v17 = v16;
  qword_2D03E40 = (__int64)&off_2C758B0;
  qword_2D03E48 = (unsigned int)qword_2D03E48 & 0x80000000;
  qword_2D03E88 = 0x100000000LL;
  qword_2D03E58 = 0;
  qword_2D03E60 = 0;
  qword_2D03E68 = 0;
  qword_2D03E70 = 0;
  qword_2D03E78 = 0;
  qword_2D03E80 = (__int64)&unk_2D03E90;
  qword_2D03E98 = (__int64)&unk_2D03EB0;
  qword_2D03EA0 = 1;
  dword_2D03EA8 = 0;
  v18 = sub_2210FF0("Max number of iterations to prefetch ahead");
  v19 = (unsigned int)qword_2D03E88;
  v20 = (unsigned int)qword_2D03E88 + 1LL;
  if ( v20 > HIDWORD(qword_2D03E88) )
  {
    v24 = v18;
    sub_2237220((char *)&unk_2D03E90 - 16, &unk_2D03E90, v20, 8);
    v19 = (unsigned int)qword_2D03E88;
    v18 = v24;
  }
  v21 = _mm_load_si128(&v23);
  *(_QWORD *)(qword_2D03E80 + 8 * v19) = v18;
  qword_2D03EC0 = (__int64)off_2C712D0;
  qword_2D03E40 = (__int64)off_2C75710;
  qword_2D03ED0 = (__int64)off_2BEAB98;
  xmmword_2D03EE8 = (__int128)v21;
  LODWORD(qword_2D03E88) = qword_2D03E88 + 1;
  dword_2D03EB8 = 0;
  dword_2D03EC8 = 0;
  byte_2D03ECC = 0;
  sub_2217250(&qword_2D03E40, "max-prefetch-iters-ahead", 24);
  qword_2D03E68 = v17;
  qword_2D03E60 = (__int64)"Max number of iterations to prefetch ahead";
  BYTE2(qword_2D03E48) = BYTE2(qword_2D03E48) & 0x9F | 0x20;
  sub_2218140(&qword_2D03E40);
  return __cxa_atexit(sub_1FED260, &qword_2D03E40, &off_2B25620);
}
