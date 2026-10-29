int sub_33EBE0()
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
  qword_2CDA170 = 0;
  v1 = v0;
  qword_2CDA178 = 0;
  qword_2CDA180 = 0;
  qword_2CDA160 = (__int64)&off_2C4B8B0;
  qword_2CDA168 = (unsigned int)qword_2CDA168 & 0x80000000;
  qword_2CDA1A8 = 0x100000000LL;
  qword_2CDA188 = 0;
  qword_2CDA190 = 0;
  qword_2CDA198 = 0;
  qword_2CDA1A0 = (__int64)&unk_2CDA1B0;
  qword_2CDA1B8 = (__int64)&unk_2CDA1D0;
  qword_2CDA1C0 = 1;
  dword_2CDA1C8 = 0;
  byte_2CDA1CC = 1;
  v2 = sub_21ED2B0("Prefetch write addresses");
  v3 = (unsigned int)qword_2CDA1A8;
  v4 = (unsigned int)qword_2CDA1A8 + 1LL;
  if ( v4 > HIDWORD(qword_2CDA1A8) )
  {
    v23.m128i_i64[0] = v2;
    sub_22134E0((char *)&unk_2CDA1B0 - 16, &unk_2CDA1B0, v4, 8);
    v3 = (unsigned int)qword_2CDA1A8;
    v2 = v23.m128i_i64[0];
  }
  *(_QWORD *)(qword_2CDA1A0 + 8 * v3) = v2;
  word_2CDA1E8 = 0;
  xmmword_2CDA208 = (__int128)_mm_loadh_ps((const double *)off_2C4E368);
  LODWORD(qword_2CDA1A8) = qword_2CDA1A8 + 1;
  qword_2CDA1E0 = (__int64)off_2C474E8;
  byte_2CDA1D8 = 0;
  qword_2CDA160 = (__int64)off_2C4B848;
  qword_2CDA1F0 = (__int64)off_2BC0B68;
  sub_21F3510(&qword_2CDA160, "loop-prefetch-writes", 20);
  word_2CDA1E8 = 256;
  byte_2CDA1D8 = 0;
  qword_2CDA188 = v1;
  BYTE2(qword_2CDA168) = BYTE2(qword_2CDA168) & 0x9F | 0x20;
  qword_2CDA180 = (__int64)"Prefetch write addresses";
  sub_21F4400(&qword_2CDA160);
  __cxa_atexit(sub_1FEA450, &qword_2CDA160, &off_2AFC540);
  v5 = j__strlen("Number of instructions to prefetch ahead");
  qword_2CDA0E0 = (__int64)&unk_2CDA0F0;
  v6 = v5;
  qword_2CDA0B0 = 0;
  qword_2CDA0A0 = (__int64)&off_2C4B8B0;
  qword_2CDA0A8 = (unsigned int)qword_2CDA0A8 & 0x80000000;
  qword_2CDA0E8 = 0x100000000LL;
  qword_2CDA0B8 = 0;
  qword_2CDA0C0 = 0;
  qword_2CDA0C8 = 0;
  qword_2CDA0D0 = 0;
  qword_2CDA0D8 = 0;
  qword_2CDA0F8 = (__int64)&unk_2CDA110;
  qword_2CDA100 = 1;
  dword_2CDA108 = 0;
  byte_2CDA10C = 1;
  v7 = sub_21ED2B0("Number of instructions to prefetch ahead");
  v8 = (unsigned int)qword_2CDA0E8;
  v9 = (unsigned int)qword_2CDA0E8 + 1LL;
  if ( v9 > HIDWORD(qword_2CDA0E8) )
  {
    v23.m128i_i64[0] = v7;
    sub_22134E0((char *)&unk_2CDA0F0 - 16, &unk_2CDA0F0, v9, 8);
    v8 = (unsigned int)qword_2CDA0E8;
    v7 = v23.m128i_i64[0];
  }
  *(_QWORD *)(qword_2CDA0E0 + 8 * v8) = v7;
  qword_2CDA120 = (__int64)off_2C472D0;
  qword_2CDA0A0 = (__int64)off_2C4B710;
  v23 = (__m128i)_mm_loadh_ps((const double *)off_2C4E4F8);
  xmmword_2CDA148 = (__int128)v23;
  qword_2CDA130 = (__int64)off_2BC0BF8;
  LODWORD(qword_2CDA0E8) = qword_2CDA0E8 + 1;
  dword_2CDA118 = 0;
  dword_2CDA128 = 0;
  byte_2CDA12C = 0;
  sub_21F3510(&qword_2CDA0A0, "prefetch-distance", 17);
  qword_2CDA0C8 = v6;
  qword_2CDA0C0 = (__int64)"Number of instructions to prefetch ahead";
  BYTE2(qword_2CDA0A8) = BYTE2(qword_2CDA0A8) & 0x9F | 0x20;
  sub_21F4400(&qword_2CDA0A0);
  __cxa_atexit(sub_1FC9520, &qword_2CDA0A0, &off_2AFC540);
  v10 = j__strlen("Min stride to add prefetches");
  qword_2CDA020 = (__int64)&unk_2CDA030;
  v11 = v10;
  qword_2CD9FF0 = 0;
  qword_2CD9FE0 = (__int64)&off_2C4B8B0;
  qword_2CD9FE8 = (unsigned int)qword_2CD9FE8 & 0x80000000;
  qword_2CDA028 = 0x100000000LL;
  qword_2CD9FF8 = 0;
  qword_2CDA000 = 0;
  qword_2CDA008 = 0;
  qword_2CDA010 = 0;
  qword_2CDA018 = 0;
  qword_2CDA038 = (__int64)&unk_2CDA050;
  qword_2CDA040 = 1;
  dword_2CDA048 = 0;
  byte_2CDA04C = 1;
  v12 = sub_21ED2B0("Min stride to add prefetches");
  v13 = (unsigned int)qword_2CDA028;
  v14 = (unsigned int)qword_2CDA028 + 1LL;
  if ( v14 > HIDWORD(qword_2CDA028) )
  {
    v24 = v12;
    sub_22134E0((char *)&unk_2CDA030 - 16, &unk_2CDA030, v14, 8);
    v13 = (unsigned int)qword_2CDA028;
    v12 = v24;
  }
  v15 = _mm_load_si128(&v23);
  *(_QWORD *)(qword_2CDA020 + 8 * v13) = v12;
  qword_2CDA060 = (__int64)off_2C472D0;
  qword_2CD9FE0 = (__int64)off_2C4B710;
  xmmword_2CDA088 = (__int128)v15;
  qword_2CDA070 = (__int64)off_2BC0BF8;
  LODWORD(qword_2CDA028) = qword_2CDA028 + 1;
  dword_2CDA058 = 0;
  dword_2CDA068 = 0;
  byte_2CDA06C = 0;
  sub_21F3510(&qword_2CD9FE0, "min-prefetch-stride", 19);
  qword_2CDA008 = v11;
  qword_2CDA000 = (__int64)"Min stride to add prefetches";
  BYTE2(qword_2CD9FE8) = BYTE2(qword_2CD9FE8) & 0x9F | 0x20;
  sub_21F4400(&qword_2CD9FE0);
  __cxa_atexit(sub_1FC9520, &qword_2CD9FE0, &off_2AFC540);
  v16 = j__strlen("Max number of iterations to prefetch ahead");
  byte_2CD9F8C = 1;
  qword_2CD9F30 = 0;
  v17 = v16;
  qword_2CD9F20 = (__int64)&off_2C4B8B0;
  qword_2CD9F28 = (unsigned int)qword_2CD9F28 & 0x80000000;
  qword_2CD9F68 = 0x100000000LL;
  qword_2CD9F38 = 0;
  qword_2CD9F40 = 0;
  qword_2CD9F48 = 0;
  qword_2CD9F50 = 0;
  qword_2CD9F58 = 0;
  qword_2CD9F60 = (__int64)&unk_2CD9F70;
  qword_2CD9F78 = (__int64)&unk_2CD9F90;
  qword_2CD9F80 = 1;
  dword_2CD9F88 = 0;
  v18 = sub_21ED2B0("Max number of iterations to prefetch ahead");
  v19 = (unsigned int)qword_2CD9F68;
  v20 = (unsigned int)qword_2CD9F68 + 1LL;
  if ( v20 > HIDWORD(qword_2CD9F68) )
  {
    v24 = v18;
    sub_22134E0((char *)&unk_2CD9F70 - 16, &unk_2CD9F70, v20, 8);
    v19 = (unsigned int)qword_2CD9F68;
    v18 = v24;
  }
  v21 = _mm_load_si128(&v23);
  *(_QWORD *)(qword_2CD9F60 + 8 * v19) = v18;
  qword_2CD9FA0 = (__int64)off_2C472D0;
  qword_2CD9F20 = (__int64)off_2C4B710;
  qword_2CD9FB0 = (__int64)off_2BC0BF8;
  xmmword_2CD9FC8 = (__int128)v21;
  LODWORD(qword_2CD9F68) = qword_2CD9F68 + 1;
  dword_2CD9F98 = 0;
  dword_2CD9FA8 = 0;
  byte_2CD9FAC = 0;
  sub_21F3510(&qword_2CD9F20, "max-prefetch-iters-ahead", 24);
  qword_2CD9F48 = v17;
  qword_2CD9F40 = (__int64)"Max number of iterations to prefetch ahead";
  BYTE2(qword_2CD9F28) = BYTE2(qword_2CD9F28) & 0x9F | 0x20;
  sub_21F4400(&qword_2CD9F20);
  return __cxa_atexit(sub_1FC9520, &qword_2CD9F20, &off_2AFC540);
}

