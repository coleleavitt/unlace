int __fastcall sub_341A60(const char *a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  unsigned __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rcx
  unsigned __int64 v6; // rdx
  __m128i v7; // xmm2
  __int64 v8; // rax
  __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  __m128i v11; // xmm3
  size_t v12; // rax
  __int64 v13; // r13
  __int64 v14; // rax
  __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  size_t v17; // rax
  __int64 v18; // r13
  __int64 v19; // rax
  __int64 v20; // rcx
  unsigned __int64 v21; // rdx
  __m128i v22; // xmm4
  size_t v23; // rax
  __int64 v24; // r13
  __int64 v25; // rax
  __int64 v26; // rcx
  unsigned __int64 v27; // rdx
  __m128i v28; // xmm5
  __m128i v30; // [rsp+0h] [rbp-58h] BYREF
  __int64 v31; // [rsp+18h] [rbp-40h]

  qword_2CDBC30 = 0;
  qword_2CDBC38 = 0;
  qword_2CDBC40 = 0;
  qword_2CDBC20 = (__int64)&off_2C4B8B0;
  qword_2CDBC28 = (unsigned int)qword_2CDBC28 & 0x80000000;
  qword_2CDBC68 = 0x100000000LL;
  qword_2CDBC48 = 0;
  qword_2CDBC50 = 0;
  qword_2CDBC58 = 0;
  qword_2CDBC60 = (__int64)&unk_2CDBC70;
  qword_2CDBC78 = (__int64)&unk_2CDBC90;
  qword_2CDBC80 = 1;
  dword_2CDBC88 = 0;
  byte_2CDBC8C = 1;
  v1 = sub_21ED2B0(a1);
  v2 = (unsigned int)qword_2CDBC68;
  v3 = (unsigned int)qword_2CDBC68 + 1LL;
  if ( v3 > HIDWORD(qword_2CDBC68) )
  {
    v30.m128i_i64[0] = v1;
    sub_22134E0((char *)&unk_2CDBC70 - 16, &unk_2CDBC70, v3, 8);
    v2 = (unsigned int)qword_2CDBC68;
    v1 = v30.m128i_i64[0];
  }
  *(_QWORD *)(qword_2CDBC60 + 8 * v2) = v1;
  qword_2CDBCA0 = (__int64)off_2C474E8;
  qword_2CDBC20 = (__int64)off_2C4B848;
  v30 = (__m128i)_mm_loadh_ps((const double *)off_2C4E368);
  word_2CDBCA8 = 0;
  xmmword_2CDBCC8 = (__int128)v30;
  qword_2CDBCB0 = (__int64)off_2BC0B68;
  LODWORD(qword_2CDBC68) = qword_2CDBC68 + 1;
  byte_2CDBC98 = 0;
  sub_21F3510(&qword_2CDBC20, "loop-predication-enable-iv-truncation", 37);
  word_2CDBCA8 = 257;
  byte_2CDBC98 = 1;
  BYTE2(qword_2CDBC28) = BYTE2(qword_2CDBC28) & 0x9F | 0x20;
  sub_21F4400(&qword_2CDBC20);
  __cxa_atexit(sub_1FEA450, &qword_2CDBC20, &off_2AFC540);
  qword_2CDBB70 = 0;
  qword_2CDBB60 = (__int64)&off_2C4B8B0;
  qword_2CDBB68 = (unsigned int)qword_2CDBB68 & 0x80000000;
  qword_2CDBBA8 = 0x100000000LL;
  qword_2CDBB78 = 0;
  qword_2CDBB80 = 0;
  qword_2CDBB88 = 0;
  qword_2CDBB90 = 0;
  qword_2CDBB98 = 0;
  qword_2CDBBA0 = (__int64)&unk_2CDBBB0;
  qword_2CDBBB8 = (__int64)&unk_2CDBBD0;
  qword_2CDBBC0 = 1;
  dword_2CDBBC8 = 0;
  byte_2CDBBCC = 1;
  v4 = sub_21ED2B0((const char *)sub_1FEA450);
  v5 = (unsigned int)qword_2CDBBA8;
  v6 = (unsigned int)qword_2CDBBA8 + 1LL;
  if ( v6 > HIDWORD(qword_2CDBBA8) )
  {
    v31 = v4;
    sub_22134E0((char *)&unk_2CDBBB0 - 16, &unk_2CDBBB0, v6, 8);
    v5 = (unsigned int)qword_2CDBBA8;
    v4 = v31;
  }
  v7 = _mm_load_si128(&v30);
  *(_QWORD *)(qword_2CDBBA0 + 8 * v5) = v4;
  qword_2CDBBE0 = (__int64)off_2C474E8;
  qword_2CDBB60 = (__int64)off_2C4B848;
  word_2CDBBE8 = 0;
  xmmword_2CDBC08 = (__int128)v7;
  qword_2CDBBF0 = (__int64)off_2BC0B68;
  LODWORD(qword_2CDBBA8) = qword_2CDBBA8 + 1;
  byte_2CDBBD8 = 0;
  sub_21F3510(&qword_2CDBB60, "loop-predication-enable-count-down-loop", 39);
  word_2CDBBE8 = 257;
  byte_2CDBBD8 = 1;
  BYTE2(qword_2CDBB68) = BYTE2(qword_2CDBB68) & 0x9F | 0x20;
  sub_21F4400(&qword_2CDBB60);
  __cxa_atexit(sub_1FEA450, &qword_2CDBB60, &off_2AFC540);
  qword_2CDBAB0 = 0;
  qword_2CDBAA0 = (__int64)&off_2C4B8B0;
  qword_2CDBAA8 = (unsigned int)qword_2CDBAA8 & 0x80000000;
  qword_2CDBAE8 = 0x100000000LL;
  qword_2CDBAB8 = 0;
  qword_2CDBAC0 = 0;
  qword_2CDBAC8 = 0;
  qword_2CDBAD0 = 0;
  qword_2CDBAD8 = 0;
  qword_2CDBAE0 = (__int64)&unk_2CDBAF0;
  qword_2CDBAF8 = (__int64)&unk_2CDBB10;
  qword_2CDBB00 = 1;
  dword_2CDBB08 = 0;
  byte_2CDBB0C = 1;
  v8 = sub_21ED2B0((const char *)sub_1FEA450);
  v9 = (unsigned int)qword_2CDBAE8;
  v10 = (unsigned int)qword_2CDBAE8 + 1LL;
  if ( v10 > HIDWORD(qword_2CDBAE8) )
  {
    v31 = v8;
    sub_22134E0((char *)&unk_2CDBAF0 - 16, &unk_2CDBAF0, v10, 8);
    v9 = (unsigned int)qword_2CDBAE8;
    v8 = v31;
  }
  v11 = _mm_load_si128(&v30);
  *(_QWORD *)(qword_2CDBAE0 + 8 * v9) = v8;
  qword_2CDBB20 = (__int64)off_2C474E8;
  word_2CDBB28 = 0;
  qword_2CDBAA0 = (__int64)off_2C4B848;
  xmmword_2CDBB48 = (__int128)v11;
  qword_2CDBB30 = (__int64)off_2BC0B68;
  LODWORD(qword_2CDBAE8) = qword_2CDBAE8 + 1;
  byte_2CDBB18 = 0;
  sub_21F3510(&qword_2CDBAA0, "loop-predication-skip-profitability-checks", 42);
  word_2CDBB28 = 256;
  byte_2CDBB18 = 0;
  BYTE2(qword_2CDBAA8) = BYTE2(qword_2CDBAA8) & 0x9F | 0x20;
  sub_21F4400(&qword_2CDBAA0);
  __cxa_atexit(sub_1FEA450, &qword_2CDBAA0, &off_2AFC540);
  v12 = j__strlen("scale factor for the latch probability. Value should be greater than 1. Lower values are ignored");
  qword_2CDBA20 = (__int64)&unk_2CDBA30;
  v13 = v12;
  qword_2CDB9F0 = 0;
  qword_2CDB9E0 = (__int64)&off_2C4B8B0;
  qword_2CDB9E8 = (unsigned int)qword_2CDB9E8 & 0x80000000;
  qword_2CDBA28 = 0x100000000LL;
  qword_2CDB9F8 = 0;
  qword_2CDBA00 = 0;
  qword_2CDBA08 = 0;
  qword_2CDBA10 = 0;
  qword_2CDBA18 = 0;
  qword_2CDBA38 = (__int64)&unk_2CDBA50;
  qword_2CDBA40 = 1;
  dword_2CDBA48 = 0;
  byte_2CDBA4C = 1;
  v14 = sub_21ED2B0("scale factor for the latch probability. Value should be greater than 1. Lower values are ignored");
  v15 = (unsigned int)qword_2CDBA28;
  v16 = (unsigned int)qword_2CDBA28 + 1LL;
  if ( v16 > HIDWORD(qword_2CDBA28) )
  {
    v31 = v14;
    sub_22134E0((char *)&unk_2CDBA30 - 16, &unk_2CDBA30, v16, 8);
    v15 = (unsigned int)qword_2CDBA28;
    v14 = v31;
  }
  *(_QWORD *)(qword_2CDBA20 + 8 * v15) = v14;
  xmmword_2CDBA88 = (__int128)_mm_loadh_ps((const double *)off_2C4E0C0);
  LODWORD(qword_2CDBA28) = qword_2CDBA28 + 1;
  qword_2CDBA60 = (__int64)off_2C479C8;
  dword_2CDBA58 = 0;
  byte_2CDBA6C = 0;
  qword_2CDB9E0 = (__int64)off_2C479E8;
  dword_2CDBA68 = 0;
  qword_2CDBA70 = (__int64)off_2BC0C88;
  sub_21F3510(&qword_2CDB9E0, "loop-predication-latch-probability-scale", 40);
  qword_2CDBA08 = v13;
  dword_2CDBA58 = 0x40000000;
  dword_2CDBA68 = 0x40000000;
  BYTE2(qword_2CDB9E8) = BYTE2(qword_2CDB9E8) & 0x9F | 0x20;
  qword_2CDBA00 = (__int64)"scale factor for the latch probability. Value should be greater than 1. Lower values are ignored";
  byte_2CDBA6C = 1;
  sub_21F4400(&qword_2CDB9E0);
  __cxa_atexit(sub_1FEEED0, &qword_2CDB9E0, &off_2AFC540);
  v17 = j__strlen("Whether or not we should predicate guards expressed as widenable branches to deoptimize blocks");
  qword_2CDB960 = (__int64)&unk_2CDB970;
  v18 = v17;
  qword_2CDB930 = 0;
  qword_2CDB920 = (__int64)&off_2C4B8B0;
  qword_2CDB928 = (unsigned int)qword_2CDB928 & 0x80000000;
  qword_2CDB968 = 0x100000000LL;
  qword_2CDB938 = 0;
  qword_2CDB940 = 0;
  qword_2CDB948 = 0;
  qword_2CDB950 = 0;
  qword_2CDB958 = 0;
  qword_2CDB978 = (__int64)&unk_2CDB990;
  qword_2CDB980 = 1;
  dword_2CDB988 = 0;
  byte_2CDB98C = 1;
  v19 = sub_21ED2B0("Whether or not we should predicate guards expressed as widenable branches to deoptimize blocks");
  v20 = (unsigned int)qword_2CDB968;
  v21 = (unsigned int)qword_2CDB968 + 1LL;
  if ( v21 > HIDWORD(qword_2CDB968) )
  {
    v31 = v19;
    sub_22134E0((char *)&unk_2CDB970 - 16, &unk_2CDB970, v21, 8);
    v20 = (unsigned int)qword_2CDB968;
    v19 = v31;
  }
  v22 = _mm_load_si128(&v30);
  *(_QWORD *)(qword_2CDB960 + 8 * v20) = v19;
  qword_2CDB9A0 = (__int64)off_2C474E8;
  qword_2CDB920 = (__int64)off_2C4B848;
  word_2CDB9A8 = 0;
  xmmword_2CDB9C8 = (__int128)v22;
  qword_2CDB9B0 = (__int64)off_2BC0B68;
  LODWORD(qword_2CDB968) = qword_2CDB968 + 1;
  byte_2CDB998 = 0;
  sub_21F3510(&qword_2CDB920, "loop-predication-predicate-widenable-branches-to-deopt", 54);
  qword_2CDB948 = v18;
  word_2CDB9A8 = 257;
  byte_2CDB998 = 1;
  BYTE2(qword_2CDB928) = BYTE2(qword_2CDB928) & 0x9F | 0x20;
  qword_2CDB940 = (__int64)"Whether or not we should predicate guards expressed as widenable branches to deoptimize blocks";
  sub_21F4400(&qword_2CDB920);
  __cxa_atexit(sub_1FEA450, &qword_2CDB920, &off_2AFC540);
  v23 = j__strlen("Whether or not we should insert assumes of conditions of predicated guards");
  byte_2CDB8CC = 1;
  qword_2CDB870 = 0;
  v24 = v23;
  qword_2CDB860 = (__int64)&off_2C4B8B0;
  qword_2CDB868 = (unsigned int)qword_2CDB868 & 0x80000000;
  qword_2CDB8A8 = 0x100000000LL;
  qword_2CDB878 = 0;
  qword_2CDB880 = 0;
  qword_2CDB888 = 0;
  qword_2CDB890 = 0;
  qword_2CDB898 = 0;
  qword_2CDB8A0 = (__int64)&unk_2CDB8B0;
  qword_2CDB8B8 = (__int64)&unk_2CDB8D0;
  qword_2CDB8C0 = 1;
  dword_2CDB8C8 = 0;
  v25 = sub_21ED2B0("Whether or not we should insert assumes of conditions of predicated guards");
  v26 = (unsigned int)qword_2CDB8A8;
  v27 = (unsigned int)qword_2CDB8A8 + 1LL;
  if ( v27 > HIDWORD(qword_2CDB8A8) )
  {
    v31 = v25;
    sub_22134E0((char *)&unk_2CDB8B0 - 16, &unk_2CDB8B0, v27, 8);
    v26 = (unsigned int)qword_2CDB8A8;
    v25 = v31;
  }
  v28 = _mm_load_si128(&v30);
  *(_QWORD *)(qword_2CDB8A0 + 8 * v26) = v25;
  word_2CDB8E8 = 0;
  qword_2CDB8E0 = (__int64)off_2C474E8;
  qword_2CDB860 = (__int64)off_2C4B848;
  qword_2CDB8F0 = (__int64)off_2BC0B68;
  xmmword_2CDB908 = (__int128)v28;
  LODWORD(qword_2CDB8A8) = qword_2CDB8A8 + 1;
  byte_2CDB8D8 = 0;
  sub_21F3510(&qword_2CDB860, "loop-predication-insert-assumes-of-predicated-guards-conditions", 63);
  qword_2CDB888 = v24;
  word_2CDB8E8 = 257;
  byte_2CDB8D8 = 1;
  BYTE2(qword_2CDB868) = BYTE2(qword_2CDB868) & 0x9F | 0x20;
  qword_2CDB880 = (__int64)"Whether or not we should insert assumes of conditions of predicated guards";
  sub_21F4400(&qword_2CDB860);
  return __cxa_atexit(sub_1FEA450, &qword_2CDB860, &off_2AFC540);
}

