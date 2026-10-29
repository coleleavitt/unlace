int sub_352510()
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
  qword_2CE5310 = 0;
  v1 = v0;
  qword_2CE5318 = 0;
  qword_2CE5320 = 0;
  qword_2CE5300 = (__int64)&off_2C4B8B0;
  qword_2CE5308 = (unsigned int)qword_2CE5308 & 0x80000000;
  qword_2CE5348 = 0x100000000LL;
  qword_2CE5328 = 0;
  qword_2CE5330 = 0;
  qword_2CE5338 = 0;
  qword_2CE5340 = (__int64)&unk_2CE5350;
  qword_2CE5358 = (__int64)&unk_2CE5370;
  qword_2CE5360 = 1;
  dword_2CE5368 = 0;
  byte_2CE536C = 1;
  v2 = sub_21ED2B0("Try to evenly distribute flow when there are multiple equally likely options.");
  v3 = (unsigned int)qword_2CE5348;
  v4 = (unsigned int)qword_2CE5348 + 1LL;
  if ( v4 > HIDWORD(qword_2CE5348) )
  {
    v35.m128i_i64[0] = v2;
    sub_22134E0((char *)&unk_2CE5350 - 16, &unk_2CE5350, v4, 8);
    v3 = (unsigned int)qword_2CE5348;
    v2 = v35.m128i_i64[0];
  }
  *(_QWORD *)(qword_2CE5340 + 8 * v3) = v2;
  qword_2CE5380 = (__int64)off_2C474E8;
  word_2CE5388 = 0;
  qword_2CE5300 = (__int64)off_2C4B848;
  v35 = (__m128i)_mm_loadh_ps((const double *)off_2C4E368);
  xmmword_2CE53A8 = (__int128)v35;
  qword_2CE5390 = (__int64)off_2BC0B68;
  LODWORD(qword_2CE5348) = qword_2CE5348 + 1;
  byte_2CE5378 = 0;
  sub_21F3510(&qword_2CE5300, "sample-profile-even-flow-distribution", 37);
  word_2CE5388 = 257;
  qword_2CE5328 = v1;
  byte_2CE5378 = 1;
  BYTE2(qword_2CE5308) = BYTE2(qword_2CE5308) & 0x9F | 0x20;
  qword_2CE5320 = (__int64)"Try to evenly distribute flow when there are multiple equally likely options.";
  sub_21F4400(&qword_2CE5300);
  __cxa_atexit(sub_1FEA450, &qword_2CE5300, &off_2AFC540);
  v5 = j__strlen("Evenly re-distribute flow among unknown subgraphs.");
  qword_2CE5280 = (__int64)&unk_2CE5290;
  v6 = v5;
  qword_2CE5250 = 0;
  qword_2CE5240 = (__int64)&off_2C4B8B0;
  qword_2CE5248 = (unsigned int)qword_2CE5248 & 0x80000000;
  qword_2CE5288 = 0x100000000LL;
  qword_2CE5258 = 0;
  qword_2CE5260 = 0;
  qword_2CE5268 = 0;
  qword_2CE5270 = 0;
  qword_2CE5278 = 0;
  qword_2CE5298 = (__int64)&unk_2CE52B0;
  qword_2CE52A0 = 1;
  dword_2CE52A8 = 0;
  byte_2CE52AC = 1;
  v7 = sub_21ED2B0("Evenly re-distribute flow among unknown subgraphs.");
  v8 = (unsigned int)qword_2CE5288;
  v9 = (unsigned int)qword_2CE5288 + 1LL;
  if ( v9 > HIDWORD(qword_2CE5288) )
  {
    v36 = v7;
    sub_22134E0((char *)&unk_2CE5290 - 16, &unk_2CE5290, v9, 8);
    v8 = (unsigned int)qword_2CE5288;
    v7 = v36;
  }
  v10 = _mm_load_si128(&v35);
  *(_QWORD *)(qword_2CE5280 + 8 * v8) = v7;
  qword_2CE52C0 = (__int64)off_2C474E8;
  qword_2CE5240 = (__int64)off_2C4B848;
  word_2CE52C8 = 0;
  xmmword_2CE52E8 = (__int128)v10;
  qword_2CE52D0 = (__int64)off_2BC0B68;
  LODWORD(qword_2CE5288) = qword_2CE5288 + 1;
  byte_2CE52B8 = 0;
  sub_21F3510(&qword_2CE5240, "sample-profile-rebalance-unknown", 32);
  word_2CE52C8 = 257;
  qword_2CE5268 = v6;
  byte_2CE52B8 = 1;
  BYTE2(qword_2CE5248) = BYTE2(qword_2CE5248) & 0x9F | 0x20;
  qword_2CE5260 = (__int64)"Evenly re-distribute flow among unknown subgraphs.";
  sub_21F4400(&qword_2CE5240);
  __cxa_atexit(sub_1FEA450, &qword_2CE5240, &off_2AFC540);
  v11 = j__strlen("Join isolated components having positive flow.");
  qword_2CE51C0 = (__int64)&unk_2CE51D0;
  v12 = v11;
  qword_2CE5190 = 0;
  qword_2CE5180 = (__int64)&off_2C4B8B0;
  qword_2CE5188 = (unsigned int)qword_2CE5188 & 0x80000000;
  qword_2CE51C8 = 0x100000000LL;
  qword_2CE5198 = 0;
  qword_2CE51A0 = 0;
  qword_2CE51A8 = 0;
  qword_2CE51B0 = 0;
  qword_2CE51B8 = 0;
  qword_2CE51D8 = (__int64)&unk_2CE51F0;
  qword_2CE51E0 = 1;
  dword_2CE51E8 = 0;
  byte_2CE51EC = 1;
  v13 = sub_21ED2B0("Join isolated components having positive flow.");
  v14 = (unsigned int)qword_2CE51C8;
  v15 = (unsigned int)qword_2CE51C8 + 1LL;
  if ( v15 > HIDWORD(qword_2CE51C8) )
  {
    v36 = v13;
    sub_22134E0((char *)&unk_2CE51D0 - 16, &unk_2CE51D0, v15, 8);
    v14 = (unsigned int)qword_2CE51C8;
    v13 = v36;
  }
  v16 = _mm_load_si128(&v35);
  *(_QWORD *)(qword_2CE51C0 + 8 * v14) = v13;
  word_2CE5208 = 0;
  qword_2CE5200 = (__int64)off_2C474E8;
  qword_2CE5180 = (__int64)off_2C4B848;
  xmmword_2CE5228 = (__int128)v16;
  qword_2CE5210 = (__int64)off_2BC0B68;
  LODWORD(qword_2CE51C8) = qword_2CE51C8 + 1;
  byte_2CE51F8 = 0;
  sub_21F3510(&qword_2CE5180, "sample-profile-join-islands", 27);
  word_2CE5208 = 257;
  qword_2CE51A8 = v12;
  byte_2CE51F8 = 1;
  BYTE2(qword_2CE5188) = BYTE2(qword_2CE5188) & 0x9F | 0x20;
  qword_2CE51A0 = (__int64)"Join isolated components having positive flow.";
  sub_21F4400(&qword_2CE5180);
  __cxa_atexit(sub_1FEA450, &qword_2CE5180, &off_2AFC540);
  v17 = j__strlen("The cost of increasing a block's count by one.");
  v39 = &v37;
  v41 = v17;
  v40 = "The cost of increasing a block's count by one.";
  v38 = 1;
  v37 = 10;
  sub_22A4960(
    &unk_2CE50C0,
    "sample-profile-profi-cost-block-inc",
    &v39,
    &v38,
    &v40,
    v18,
    v35.m128i_i64[0],
    v35.m128i_i64[1]);
  __cxa_atexit(sub_1FC9520, &unk_2CE50C0, &off_2AFC540);
  v19 = j__strlen("The cost of decreasing a block's count by one.");
  v39 = &v37;
  v41 = v19;
  v40 = "The cost of decreasing a block's count by one.";
  v38 = 1;
  v37 = 20;
  sub_22A4960(
    &unk_2CE5000,
    "sample-profile-profi-cost-block-dec",
    &v39,
    &v38,
    &v40,
    v20,
    v35.m128i_i64[0],
    v35.m128i_i64[1]);
  __cxa_atexit(sub_1FC9520, &unk_2CE5000, &off_2AFC540);
  v21 = j__strlen("The cost of increasing the entry block's count by one.");
  v39 = &v37;
  v41 = v21;
  v40 = "The cost of increasing the entry block's count by one.";
  v38 = 1;
  v37 = 40;
  sub_22A4B10(&unk_2CE4F40, "sample-profile-profi-cost-block-entry-inc", &v39, &v38, &v40);
  __cxa_atexit(sub_1FC9520, &unk_2CE4F40, &off_2AFC540);
  v22 = j__strlen("The cost of decreasing the entry block's count by one.");
  v39 = &v37;
  v41 = v22;
  v40 = "The cost of decreasing the entry block's count by one.";
  v38 = 1;
  v37 = 10;
  sub_22A4B10(&unk_2CE4E80, "sample-profile-profi-cost-block-entry-dec", &v39, &v38, &v40);
  __cxa_atexit(sub_1FC9520, &unk_2CE4E80, &off_2AFC540);
  v23 = j__strlen("The cost of increasing a count of zero-weight block by one.");
  qword_2CE4E00 = (__int64)&unk_2CE4E10;
  v24 = v23;
  qword_2CE4DD0 = 0;
  qword_2CE4DC0 = (__int64)&off_2C4B8B0;
  qword_2CE4DC8 = (unsigned int)qword_2CE4DC8 & 0x80000000;
  qword_2CE4E08 = 0x100000000LL;
  qword_2CE4DD8 = 0;
  qword_2CE4DE0 = 0;
  qword_2CE4DE8 = 0;
  qword_2CE4DF0 = 0;
  qword_2CE4DF8 = 0;
  qword_2CE4E18 = (__int64)&unk_2CE4E30;
  qword_2CE4E20 = 1;
  dword_2CE4E28 = 0;
  byte_2CE4E2C = 1;
  v25 = sub_21ED2B0("The cost of increasing a count of zero-weight block by one.");
  v26 = (unsigned int)qword_2CE4E08;
  v27 = (unsigned int)qword_2CE4E08 + 1LL;
  if ( v27 > HIDWORD(qword_2CE4E08) )
  {
    v35.m128i_i64[0] = v25;
    sub_22134E0((char *)&unk_2CE4E10 - 16, &unk_2CE4E10, v27, 8);
    v26 = (unsigned int)qword_2CE4E08;
    v25 = v35.m128i_i64[0];
  }
  *(_QWORD *)(qword_2CE4E00 + 8 * v26) = v25;
  qword_2CE4E40 = (__int64)off_2C472D0;
  qword_2CE4DC0 = (__int64)off_2C4B710;
  xmmword_2CE4E68 = (__int128)_mm_loadh_ps((const double *)off_2C4E4F8);
  v35 = (__m128i)xmmword_2CE4E68;
  LODWORD(qword_2CE4E08) = qword_2CE4E08 + 1;
  qword_2CE4E50 = (__int64)off_2BC0BF8;
  dword_2CE4E38 = 0;
  dword_2CE4E48 = 0;
  byte_2CE4E4C = 0;
  sub_21F3510(&qword_2CE4DC0, "sample-profile-profi-cost-block-zero-inc", 40);
  qword_2CE4DE8 = v24;
  dword_2CE4E38 = 11;
  byte_2CE4E4C = 1;
  dword_2CE4E48 = 11;
  BYTE2(qword_2CE4DC8) = BYTE2(qword_2CE4DC8) & 0x9F | 0x20;
  qword_2CE4DE0 = (__int64)"The cost of increasing a count of zero-weight block by one.";
  sub_21F4400(&qword_2CE4DC0);
  __cxa_atexit(sub_1FC9520, &qword_2CE4DC0, &off_2AFC540);
  v28 = j__strlen("The cost of increasing an unknown block's count by one.");
  byte_2CE4D6C = 1;
  qword_2CE4D10 = 0;
  v29 = v28;
  qword_2CE4D00 = (__int64)&off_2C4B8B0;
  qword_2CE4D08 = (unsigned int)qword_2CE4D08 & 0x80000000;
  qword_2CE4D48 = 0x100000000LL;
  qword_2CE4D18 = 0;
  qword_2CE4D20 = 0;
  qword_2CE4D28 = 0;
  qword_2CE4D30 = 0;
  qword_2CE4D38 = 0;
  qword_2CE4D40 = (__int64)&unk_2CE4D50;
  qword_2CE4D58 = (__int64)&unk_2CE4D70;
  qword_2CE4D60 = 1;
  dword_2CE4D68 = 0;
  v30 = sub_21ED2B0("The cost of increasing an unknown block's count by one.");
  v31 = (unsigned int)qword_2CE4D48;
  v32 = _mm_load_si128(&v35);
  v33 = (unsigned int)qword_2CE4D48 + 1LL;
  if ( v33 > HIDWORD(qword_2CE4D48) )
  {
    v36 = v30;
    sub_22134E0((char *)&unk_2CE4D50 - 16, &unk_2CE4D50, v33, 8);
    v31 = (unsigned int)qword_2CE4D48;
    v30 = v36;
    v32 = _mm_load_si128(&v35);
  }
  *(_QWORD *)(qword_2CE4D40 + 8 * v31) = v30;
  qword_2CE4D80 = (__int64)off_2C472D0;
  qword_2CE4D00 = (__int64)off_2C4B710;
  xmmword_2CE4DA8 = (__int128)v32;
  qword_2CE4D90 = (__int64)off_2BC0BF8;
  LODWORD(qword_2CE4D48) = qword_2CE4D48 + 1;
  dword_2CE4D78 = 0;
  dword_2CE4D88 = 0;
  byte_2CE4D8C = 0;
  sub_21F3510(&qword_2CE4D00, "sample-profile-profi-cost-block-unknown-inc", 43);
  qword_2CE4D28 = v29;
  dword_2CE4D78 = 0;
  byte_2CE4D8C = 1;
  dword_2CE4D88 = 0;
  BYTE2(qword_2CE4D08) = BYTE2(qword_2CE4D08) & 0x9F | 0x20;
  qword_2CE4D20 = (__int64)"The cost of increasing an unknown block's count by one.";
  sub_21F4400(&qword_2CE4D00);
  return __cxa_atexit(sub_1FC9520, &qword_2CE4D00, &off_2AFC540);
}

