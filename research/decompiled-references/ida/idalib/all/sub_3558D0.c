int sub_3558D0()
{
  size_t v0; // rax
  __int64 v1; // r13
  __int64 v2; // rax
  __int64 v3; // rcx
  unsigned __int64 v4; // rdx
  size_t v5; // rax
  __int64 v6; // r13
  __int64 v7; // rax
  __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  __m128i v10; // xmm2
  size_t v11; // rax
  __int64 v12; // r13
  __int64 v13; // rax
  __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  __m128i v16; // xmm3
  size_t v17; // rax
  __int64 v18; // r9
  size_t v19; // rax
  __int64 v20; // r9
  size_t v21; // rax
  size_t v22; // rax
  size_t v23; // rax
  __int64 v24; // r13
  __int64 v25; // rax
  __int64 v26; // rcx
  unsigned __int64 v27; // rdx
  size_t v28; // rax
  __int64 v29; // r13
  __int64 v30; // rax
  __int64 v31; // rcx
  __m128i v32; // xmm0
  unsigned __int64 v33; // rdx
  __m128i v35; // [rsp+0h] [rbp-78h] BYREF
  __int64 v36; // [rsp+18h] [rbp-60h]
  int v37; // [rsp+20h] [rbp-58h] BYREF
  int v38; // [rsp+24h] [rbp-54h] BYREF
  int *v39; // [rsp+28h] [rbp-50h] BYREF
  const char *v40; // [rsp+30h] [rbp-48h] BYREF
  size_t v41; // [rsp+38h] [rbp-40h]

  v0 = j__strlen("Try to evenly distribute flow when there are multiple equally likely options.");
  qword_2D0F230 = 0;
  v1 = v0;
  qword_2D0F238 = 0;
  qword_2D0F240 = 0;
  qword_2D0F220 = (__int64)&off_2C758B0;
  qword_2D0F228 = (unsigned int)qword_2D0F228 & 0x80000000;
  qword_2D0F268 = 0x100000000LL;
  qword_2D0F248 = 0;
  qword_2D0F250 = 0;
  qword_2D0F258 = 0;
  qword_2D0F260 = (__int64)&unk_2D0F270;
  qword_2D0F278 = (__int64)&unk_2D0F290;
  qword_2D0F280 = 1;
  dword_2D0F288 = 0;
  byte_2D0F28C = 1;
  v2 = sub_2210FF0("Try to evenly distribute flow when there are multiple equally likely options.");
  v3 = (unsigned int)qword_2D0F268;
  v4 = (unsigned int)qword_2D0F268 + 1LL;
  if ( v4 > HIDWORD(qword_2D0F268) )
  {
    v35.m128i_i64[0] = v2;
    sub_2237220((char *)&unk_2D0F270 - 16, &unk_2D0F270, v4, 8);
    v3 = (unsigned int)qword_2D0F268;
    v2 = v35.m128i_i64[0];
  }
  *(_QWORD *)(qword_2D0F260 + 8 * v3) = v2;
  qword_2D0F2A0 = (__int64)off_2C714E8;
  word_2D0F2A8 = 0;
  qword_2D0F220 = (__int64)off_2C75848;
  v35 = (__m128i)_mm_loadh_ps((const double *)off_2C78368);
  xmmword_2D0F2C8 = (__int128)v35;
  qword_2D0F2B0 = (__int64)off_2BEAB08;
  LODWORD(qword_2D0F268) = qword_2D0F268 + 1;
  byte_2D0F298 = 0;
  sub_2217250(&qword_2D0F220, "sample-profile-even-flow-distribution", 37);
  word_2D0F2A8 = 257;
  qword_2D0F248 = v1;
  byte_2D0F298 = 1;
  BYTE2(qword_2D0F228) = BYTE2(qword_2D0F228) & 0x9F | 0x20;
  qword_2D0F240 = (__int64)"Try to evenly distribute flow when there are multiple equally likely options.";
  sub_2218140(&qword_2D0F220);
  __cxa_atexit(sub_200E190, &qword_2D0F220, &off_2B25620);
  v5 = j__strlen("Evenly re-distribute flow among unknown subgraphs.");
  qword_2D0F1A0 = (__int64)&unk_2D0F1B0;
  v6 = v5;
  qword_2D0F170 = 0;
  qword_2D0F160 = (__int64)&off_2C758B0;
  qword_2D0F168 = (unsigned int)qword_2D0F168 & 0x80000000;
  qword_2D0F1A8 = 0x100000000LL;
  qword_2D0F178 = 0;
  qword_2D0F180 = 0;
  qword_2D0F188 = 0;
  qword_2D0F190 = 0;
  qword_2D0F198 = 0;
  qword_2D0F1B8 = (__int64)&unk_2D0F1D0;
  qword_2D0F1C0 = 1;
  dword_2D0F1C8 = 0;
  byte_2D0F1CC = 1;
  v7 = sub_2210FF0("Evenly re-distribute flow among unknown subgraphs.");
  v8 = (unsigned int)qword_2D0F1A8;
  v9 = (unsigned int)qword_2D0F1A8 + 1LL;
  if ( v9 > HIDWORD(qword_2D0F1A8) )
  {
    v36 = v7;
    sub_2237220((char *)&unk_2D0F1B0 - 16, &unk_2D0F1B0, v9, 8);
    v8 = (unsigned int)qword_2D0F1A8;
    v7 = v36;
  }
  v10 = _mm_load_si128(&v35);
  *(_QWORD *)(qword_2D0F1A0 + 8 * v8) = v7;
  qword_2D0F1E0 = (__int64)off_2C714E8;
  qword_2D0F160 = (__int64)off_2C75848;
  word_2D0F1E8 = 0;
  xmmword_2D0F208 = (__int128)v10;
  qword_2D0F1F0 = (__int64)off_2BEAB08;
  LODWORD(qword_2D0F1A8) = qword_2D0F1A8 + 1;
  byte_2D0F1D8 = 0;
  sub_2217250(&qword_2D0F160, "sample-profile-rebalance-unknown", 32);
  word_2D0F1E8 = 257;
  qword_2D0F188 = v6;
  byte_2D0F1D8 = 1;
  BYTE2(qword_2D0F168) = BYTE2(qword_2D0F168) & 0x9F | 0x20;
  qword_2D0F180 = (__int64)"Evenly re-distribute flow among unknown subgraphs.";
  sub_2218140(&qword_2D0F160);
  __cxa_atexit(sub_200E190, &qword_2D0F160, &off_2B25620);
  v11 = j__strlen("Join isolated components having positive flow.");
  qword_2D0F0E0 = (__int64)&unk_2D0F0F0;
  v12 = v11;
  qword_2D0F0B0 = 0;
  qword_2D0F0A0 = (__int64)&off_2C758B0;
  qword_2D0F0A8 = (unsigned int)qword_2D0F0A8 & 0x80000000;
  qword_2D0F0E8 = 0x100000000LL;
  qword_2D0F0B8 = 0;
  qword_2D0F0C0 = 0;
  qword_2D0F0C8 = 0;
  qword_2D0F0D0 = 0;
  qword_2D0F0D8 = 0;
  qword_2D0F0F8 = (__int64)&unk_2D0F110;
  qword_2D0F100 = 1;
  dword_2D0F108 = 0;
  byte_2D0F10C = 1;
  v13 = sub_2210FF0("Join isolated components having positive flow.");
  v14 = (unsigned int)qword_2D0F0E8;
  v15 = (unsigned int)qword_2D0F0E8 + 1LL;
  if ( v15 > HIDWORD(qword_2D0F0E8) )
  {
    v36 = v13;
    sub_2237220((char *)&unk_2D0F0F0 - 16, &unk_2D0F0F0, v15, 8);
    v14 = (unsigned int)qword_2D0F0E8;
    v13 = v36;
  }
  v16 = _mm_load_si128(&v35);
  *(_QWORD *)(qword_2D0F0E0 + 8 * v14) = v13;
  word_2D0F128 = 0;
  qword_2D0F120 = (__int64)off_2C714E8;
  qword_2D0F0A0 = (__int64)off_2C75848;
  xmmword_2D0F148 = (__int128)v16;
  qword_2D0F130 = (__int64)off_2BEAB08;
  LODWORD(qword_2D0F0E8) = qword_2D0F0E8 + 1;
  byte_2D0F118 = 0;
  sub_2217250(&qword_2D0F0A0, "sample-profile-join-islands", 27);
  word_2D0F128 = 257;
  qword_2D0F0C8 = v12;
  byte_2D0F118 = 1;
  BYTE2(qword_2D0F0A8) = BYTE2(qword_2D0F0A8) & 0x9F | 0x20;
  qword_2D0F0C0 = (__int64)"Join isolated components having positive flow.";
  sub_2218140(&qword_2D0F0A0);
  __cxa_atexit(sub_200E190, &qword_2D0F0A0, &off_2B25620);
  v17 = j__strlen("The cost of increasing a block's count by one.");
  v39 = &v37;
  v41 = v17;
  v40 = "The cost of increasing a block's count by one.";
  v38 = 1;
  v37 = 10;
  sub_22C86A0(
    &unk_2D0EFE0,
    "sample-profile-profi-cost-block-inc",
    &v39,
    &v38,
    &v40,
    v18,
    v35.m128i_i64[0],
    v35.m128i_i64[1]);
  __cxa_atexit(sub_1FED260, &unk_2D0EFE0, &off_2B25620);
  v19 = j__strlen("The cost of decreasing a block's count by one.");
  v39 = &v37;
  v41 = v19;
  v40 = "The cost of decreasing a block's count by one.";
  v38 = 1;
  v37 = 20;
  sub_22C86A0(
    &unk_2D0EF20,
    "sample-profile-profi-cost-block-dec",
    &v39,
    &v38,
    &v40,
    v20,
    v35.m128i_i64[0],
    v35.m128i_i64[1]);
  __cxa_atexit(sub_1FED260, &unk_2D0EF20, &off_2B25620);
  v21 = j__strlen("The cost of increasing the entry block's count by one.");
  v39 = &v37;
  v41 = v21;
  v40 = "The cost of increasing the entry block's count by one.";
  v38 = 1;
  v37 = 40;
  sub_22C8850(&unk_2D0EE60, "sample-profile-profi-cost-block-entry-inc", &v39, &v38, &v40);
  __cxa_atexit(sub_1FED260, &unk_2D0EE60, &off_2B25620);
  v22 = j__strlen("The cost of decreasing the entry block's count by one.");
  v39 = &v37;
  v41 = v22;
  v40 = "The cost of decreasing the entry block's count by one.";
  v38 = 1;
  v37 = 10;
  sub_22C8850(&unk_2D0EDA0, "sample-profile-profi-cost-block-entry-dec", &v39, &v38, &v40);
  __cxa_atexit(sub_1FED260, &unk_2D0EDA0, &off_2B25620);
  v23 = j__strlen("The cost of increasing a count of zero-weight block by one.");
  qword_2D0ED20 = (__int64)&unk_2D0ED30;
  v24 = v23;
  qword_2D0ECF0 = 0;
  qword_2D0ECE0 = (__int64)&off_2C758B0;
  qword_2D0ECE8 = (unsigned int)qword_2D0ECE8 & 0x80000000;
  qword_2D0ED28 = 0x100000000LL;
  qword_2D0ECF8 = 0;
  qword_2D0ED00 = 0;
  qword_2D0ED08 = 0;
  qword_2D0ED10 = 0;
  qword_2D0ED18 = 0;
  qword_2D0ED38 = (__int64)&unk_2D0ED50;
  qword_2D0ED40 = 1;
  dword_2D0ED48 = 0;
  byte_2D0ED4C = 1;
  v25 = sub_2210FF0("The cost of increasing a count of zero-weight block by one.");
  v26 = (unsigned int)qword_2D0ED28;
  v27 = (unsigned int)qword_2D0ED28 + 1LL;
  if ( v27 > HIDWORD(qword_2D0ED28) )
  {
    v35.m128i_i64[0] = v25;
    sub_2237220((char *)&unk_2D0ED30 - 16, &unk_2D0ED30, v27, 8);
    v26 = (unsigned int)qword_2D0ED28;
    v25 = v35.m128i_i64[0];
  }
  *(_QWORD *)(qword_2D0ED20 + 8 * v26) = v25;
  qword_2D0ED60 = (__int64)off_2C712D0;
  qword_2D0ECE0 = (__int64)off_2C75710;
  xmmword_2D0ED88 = (__int128)_mm_loadh_ps((const double *)off_2C784F8);
  v35 = (__m128i)xmmword_2D0ED88;
  LODWORD(qword_2D0ED28) = qword_2D0ED28 + 1;
  qword_2D0ED70 = (__int64)off_2BEAB98;
  dword_2D0ED58 = 0;
  dword_2D0ED68 = 0;
  byte_2D0ED6C = 0;
  sub_2217250(&qword_2D0ECE0, "sample-profile-profi-cost-block-zero-inc", 40);
  qword_2D0ED08 = v24;
  dword_2D0ED58 = 11;
  byte_2D0ED6C = 1;
  dword_2D0ED68 = 11;
  BYTE2(qword_2D0ECE8) = BYTE2(qword_2D0ECE8) & 0x9F | 0x20;
  qword_2D0ED00 = (__int64)"The cost of increasing a count of zero-weight block by one.";
  sub_2218140(&qword_2D0ECE0);
  __cxa_atexit(sub_1FED260, &qword_2D0ECE0, &off_2B25620);
  v28 = j__strlen("The cost of increasing an unknown block's count by one.");
  byte_2D0EC8C = 1;
  qword_2D0EC30 = 0;
  v29 = v28;
  qword_2D0EC20 = (__int64)&off_2C758B0;
  qword_2D0EC28 = (unsigned int)qword_2D0EC28 & 0x80000000;
  qword_2D0EC68 = 0x100000000LL;
  qword_2D0EC38 = 0;
  qword_2D0EC40 = 0;
  qword_2D0EC48 = 0;
  qword_2D0EC50 = 0;
  qword_2D0EC58 = 0;
  qword_2D0EC60 = (__int64)&unk_2D0EC70;
  qword_2D0EC78 = (__int64)&unk_2D0EC90;
  qword_2D0EC80 = 1;
  dword_2D0EC88 = 0;
  v30 = sub_2210FF0("The cost of increasing an unknown block's count by one.");
  v31 = (unsigned int)qword_2D0EC68;
  v32 = _mm_load_si128(&v35);
  v33 = (unsigned int)qword_2D0EC68 + 1LL;
  if ( v33 > HIDWORD(qword_2D0EC68) )
  {
    v36 = v30;
    sub_2237220((char *)&unk_2D0EC70 - 16, &unk_2D0EC70, v33, 8);
    v31 = (unsigned int)qword_2D0EC68;
    v30 = v36;
    v32 = _mm_load_si128(&v35);
  }
  *(_QWORD *)(qword_2D0EC60 + 8 * v31) = v30;
  qword_2D0ECA0 = (__int64)off_2C712D0;
  qword_2D0EC20 = (__int64)off_2C75710;
  xmmword_2D0ECC8 = (__int128)v32;
  qword_2D0ECB0 = (__int64)off_2BEAB98;
  LODWORD(qword_2D0EC68) = qword_2D0EC68 + 1;
  dword_2D0EC98 = 0;
  dword_2D0ECA8 = 0;
  byte_2D0ECAC = 0;
  sub_2217250(&qword_2D0EC20, "sample-profile-profi-cost-block-unknown-inc", 43);
  qword_2D0EC48 = v29;
  dword_2D0EC98 = 0;
  byte_2D0ECAC = 1;
  dword_2D0ECA8 = 0;
  BYTE2(qword_2D0EC28) = BYTE2(qword_2D0EC28) & 0x9F | 0x20;
  qword_2D0EC40 = (__int64)"The cost of increasing an unknown block's count by one.";
  sub_2218140(&qword_2D0EC20);
  return __cxa_atexit(sub_1FED260, &qword_2D0EC20, &off_2B25620);
}
