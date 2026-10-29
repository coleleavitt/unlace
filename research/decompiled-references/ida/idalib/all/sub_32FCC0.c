int __fastcall sub_32FCC0(__int64 a1, __int64 a2)
{
  size_t v2; // rax
  __int64 v3; // r12
  __int64 v4; // rax
  __int64 v5; // rcx
  unsigned __int64 v6; // rdx
  size_t v7; // rax
  __int64 v8; // r13
  __int64 v9; // rax
  __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  size_t v12; // rax
  __int64 v13; // r13
  __int64 v14; // rax
  __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  __m128i v17; // xmm2
  size_t v18; // rax
  __int64 v19; // r13
  __int64 v20; // rax
  __int64 v21; // rcx
  unsigned __int64 v22; // rdx
  __m128i v23; // xmm3
  __m128i v25; // [rsp+0h] [rbp-58h] BYREF
  __int64 v26; // [rsp+18h] [rbp-40h]

  v2 = j__strlen("Recognize reduction patterns.");
  qword_2CFBCF0 = 0;
  v3 = v2;
  qword_2CFBCF8 = 0;
  qword_2CFBD00 = 0;
  qword_2CFBCE0 = (__int64)&off_2C758B0;
  qword_2CFBCE8 = (unsigned int)qword_2CFBCE8 & 0x80000000;
  qword_2CFBD28 = 0x100000000LL;
  qword_2CFBD08 = 0;
  qword_2CFBD10 = 0;
  qword_2CFBD18 = 0;
  qword_2CFBD20 = (__int64)&unk_2CFBD30;
  qword_2CFBD38 = (__int64)&unk_2CFBD50;
  qword_2CFBD40 = 1;
  dword_2CFBD48 = 0;
  byte_2CFBD4C = 1;
  v4 = sub_2210FF0("Recognize reduction patterns.", a2);
  v5 = (unsigned int)qword_2CFBD28;
  v6 = (unsigned int)qword_2CFBD28 + 1LL;
  if ( v6 > HIDWORD(qword_2CFBD28) )
  {
    v25.m128i_i64[0] = v4;
    sub_2237220((char *)&unk_2CFBD30 - 16, &unk_2CFBD30, v6, 8);
    v5 = (unsigned int)qword_2CFBD28;
    v4 = v25.m128i_i64[0];
  }
  *(_QWORD *)(qword_2CFBD20 + 8 * v5) = v4;
  word_2CFBD68 = 0;
  xmmword_2CFBD88 = (__int128)_mm_loadh_ps((const double *)off_2C78368);
  LODWORD(qword_2CFBD28) = qword_2CFBD28 + 1;
  qword_2CFBD60 = (__int64)off_2C714E8;
  byte_2CFBD58 = 0;
  qword_2CFBCE0 = (__int64)off_2C75848;
  qword_2CFBD70 = (__int64)off_2BEAB08;
  sub_2217250(&qword_2CFBCE0, "costmodel-reduxcost", 19);
  word_2CFBD68 = 256;
  byte_2CFBD58 = 0;
  qword_2CFBD08 = v3;
  BYTE2(qword_2CFBCE8) = BYTE2(qword_2CFBCE8) & 0x9F | 0x20;
  qword_2CFBD00 = (__int64)"Recognize reduction patterns.";
  sub_2218140(&qword_2CFBCE0);
  __cxa_atexit(sub_200E190, &qword_2CFBCE0, &off_2B25620);
  v7 = j__strlen("Use this to override the target cache line size when specified by the user.");
  qword_2CFBC60 = (__int64)&unk_2CFBC70;
  v8 = v7;
  qword_2CFBC30 = 0;
  qword_2CFBC20 = (__int64)&off_2C758B0;
  qword_2CFBC28 = (unsigned int)qword_2CFBC28 & 0x80000000;
  qword_2CFBC68 = 0x100000000LL;
  qword_2CFBC38 = 0;
  qword_2CFBC40 = 0;
  qword_2CFBC48 = 0;
  qword_2CFBC50 = 0;
  qword_2CFBC58 = 0;
  qword_2CFBC78 = (__int64)&unk_2CFBC90;
  qword_2CFBC80 = 1;
  dword_2CFBC88 = 0;
  byte_2CFBC8C = 1;
  v9 = sub_2210FF0("Use this to override the target cache line size when specified by the user.", &qword_2CFBCE0);
  v10 = (unsigned int)qword_2CFBC68;
  v11 = (unsigned int)qword_2CFBC68 + 1LL;
  if ( v11 > HIDWORD(qword_2CFBC68) )
  {
    v25.m128i_i64[0] = v9;
    sub_2237220((char *)&unk_2CFBC70 - 16, &unk_2CFBC70, v11, 8);
    v10 = (unsigned int)qword_2CFBC68;
    v9 = v25.m128i_i64[0];
  }
  *(_QWORD *)(qword_2CFBC60 + 8 * v10) = v9;
  qword_2CFBCA0 = (__int64)off_2C712D0;
  qword_2CFBC20 = (__int64)off_2C75710;
  v25 = (__m128i)_mm_loadh_ps((const double *)off_2C784F8);
  xmmword_2CFBCC8 = (__int128)v25;
  qword_2CFBCB0 = (__int64)off_2BEAB98;
  LODWORD(qword_2CFBC68) = qword_2CFBC68 + 1;
  dword_2CFBC98 = 0;
  dword_2CFBCA8 = 0;
  byte_2CFBCAC = 0;
  sub_2217250(&qword_2CFBC20, "cache-line-size", 15);
  qword_2CFBC48 = v8;
  dword_2CFBC98 = 0;
  byte_2CFBCAC = 1;
  dword_2CFBCA8 = 0;
  BYTE2(qword_2CFBC28) = BYTE2(qword_2CFBC28) & 0x9F | 0x20;
  qword_2CFBC40 = (__int64)"Use this to override the target cache line size when specified by the user.";
  sub_2218140(&qword_2CFBC20);
  __cxa_atexit(sub_1FED260, &qword_2CFBC20, &off_2B25620);
  v12 = j__strlen("Use this to override the target's minimum page size.");
  qword_2CFBBA0 = (__int64)&unk_2CFBBB0;
  v13 = v12;
  qword_2CFBB70 = 0;
  qword_2CFBB60 = (__int64)&off_2C758B0;
  qword_2CFBB68 = (unsigned int)qword_2CFBB68 & 0x80000000;
  qword_2CFBBA8 = 0x100000000LL;
  qword_2CFBB78 = 0;
  qword_2CFBB80 = 0;
  qword_2CFBB88 = 0;
  qword_2CFBB90 = 0;
  qword_2CFBB98 = 0;
  qword_2CFBBB8 = (__int64)&unk_2CFBBD0;
  qword_2CFBBC0 = 1;
  dword_2CFBBC8 = 0;
  byte_2CFBBCC = 1;
  v14 = sub_2210FF0("Use this to override the target's minimum page size.", &qword_2CFBC20);
  v15 = (unsigned int)qword_2CFBBA8;
  v16 = (unsigned int)qword_2CFBBA8 + 1LL;
  if ( v16 > HIDWORD(qword_2CFBBA8) )
  {
    v26 = v14;
    sub_2237220((char *)&unk_2CFBBB0 - 16, &unk_2CFBBB0, v16, 8);
    v15 = (unsigned int)qword_2CFBBA8;
    v14 = v26;
  }
  v17 = _mm_load_si128(&v25);
  *(_QWORD *)(qword_2CFBBA0 + 8 * v15) = v14;
  qword_2CFBBE0 = (__int64)off_2C712D0;
  qword_2CFBB60 = (__int64)off_2C75710;
  xmmword_2CFBC08 = (__int128)v17;
  qword_2CFBBF0 = (__int64)off_2BEAB98;
  LODWORD(qword_2CFBBA8) = qword_2CFBBA8 + 1;
  dword_2CFBBD8 = 0;
  dword_2CFBBE8 = 0;
  byte_2CFBBEC = 0;
  sub_2217250(&qword_2CFBB60, "min-page-size", 13);
  qword_2CFBB88 = v13;
  dword_2CFBBD8 = 0;
  byte_2CFBBEC = 1;
  dword_2CFBBE8 = 0;
  BYTE2(qword_2CFBB68) = BYTE2(qword_2CFBB68) & 0x9F | 0x20;
  qword_2CFBB80 = (__int64)"Use this to override the target's minimum page size.";
  sub_2218140(&qword_2CFBB60);
  __cxa_atexit(sub_1FED260, &qword_2CFBB60, &off_2B25620);
  v18 = j__strlen("Use this to override the target's predictable branch threshold (%).");
  byte_2CFBB0C = 1;
  qword_2CFBAB0 = 0;
  v19 = v18;
  qword_2CFBAA0 = (__int64)&off_2C758B0;
  qword_2CFBAA8 = (unsigned int)qword_2CFBAA8 & 0x80000000;
  qword_2CFBAE8 = 0x100000000LL;
  qword_2CFBAB8 = 0;
  qword_2CFBAC0 = 0;
  qword_2CFBAC8 = 0;
  qword_2CFBAD0 = 0;
  qword_2CFBAD8 = 0;
  qword_2CFBAE0 = (__int64)&unk_2CFBAF0;
  qword_2CFBAF8 = (__int64)&unk_2CFBB10;
  qword_2CFBB00 = 1;
  dword_2CFBB08 = 0;
  v20 = sub_2210FF0("Use this to override the target's predictable branch threshold (%).");
  v21 = (unsigned int)qword_2CFBAE8;
  v22 = (unsigned int)qword_2CFBAE8 + 1LL;
  if ( v22 > HIDWORD(qword_2CFBAE8) )
  {
    v26 = v20;
    sub_2237220((char *)&unk_2CFBAF0 - 16, &unk_2CFBAF0, v22, 8);
    v21 = (unsigned int)qword_2CFBAE8;
    v20 = v26;
  }
  v23 = _mm_load_si128(&v25);
  *(_QWORD *)(qword_2CFBAE0 + 8 * v21) = v20;
  qword_2CFBB20 = (__int64)off_2C712D0;
  qword_2CFBAA0 = (__int64)off_2C75710;
  qword_2CFBB30 = (__int64)off_2BEAB98;
  xmmword_2CFBB48 = (__int128)v23;
  LODWORD(qword_2CFBAE8) = qword_2CFBAE8 + 1;
  dword_2CFBB18 = 0;
  dword_2CFBB28 = 0;
  byte_2CFBB2C = 0;
  sub_2217250(&qword_2CFBAA0, "predictable-branch-threshold", 28);
  qword_2CFBAC8 = v19;
  dword_2CFBB18 = 99;
  byte_2CFBB2C = 1;
  dword_2CFBB28 = 99;
  BYTE2(qword_2CFBAA8) = BYTE2(qword_2CFBAA8) & 0x9F | 0x20;
  qword_2CFBAC0 = (__int64)"Use this to override the target's predictable branch threshold (%).";
  sub_2218140(&qword_2CFBAA0);
  return __cxa_atexit(sub_1FED260, &qword_2CFBAA0, &off_2B25620);
}
