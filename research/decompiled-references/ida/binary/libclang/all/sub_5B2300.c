int __fastcall sub_5B2300(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // rdx
  __m128i v4; // xmm5
  __int64 v5; // rax
  __int64 v6; // rdx
  __m128i v7; // xmm6
  __int64 v8; // rax
  __int64 v9; // rdx
  __m128i v10; // xmm7
  __int64 v11; // rax
  __int64 v12; // rdx
  __m128i v13; // xmm3
  __int64 v14; // r13
  __int64 v15; // rax
  unsigned __int64 v16; // rdx
  __m128i v17; // xmm4
  __m128i v19; // [rsp+0h] [rbp-88h] BYREF
  int *v20; // [rsp+10h] [rbp-78h]
  int **v21; // [rsp+18h] [rbp-70h]
  __m128i v22; // [rsp+20h] [rbp-68h] BYREF
  int v23; // [rsp+30h] [rbp-58h] BYREF
  int v24; // [rsp+34h] [rbp-54h] BYREF
  int *v25; // [rsp+38h] [rbp-50h] BYREF
  const char *v26; // [rsp+40h] [rbp-48h] BYREF
  __int64 v27; // [rsp+48h] [rbp-40h]

  qword_4B081C0 = (__int64)&qword_4B081D0;
  qword_4B08190 = 0;
  qword_4B08198 = 0;
  qword_4B08180 = (__int64)&off_4A6E058;
  qword_4B08188 = (unsigned int)qword_4B08188 & 0x80000000;
  qword_4B081D8 = (__int64)&qword_4B081F0;
  v22 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_49EBBC0), (__m128i)(unsigned __int64)nullsub_267);
  v19 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_49EBBC8), (__m128i)(unsigned __int64)nullsub_266);
  qword_4B081A0 = 0;
  qword_4B081A8 = 0;
  qword_4B081B0 = 0;
  qword_4B081B8 = 0;
  qword_4B081C8 = 0x100000000LL;
  dword_4B081E8 = 0;
  qword_4B081E0 = 1;
  byte_4B081EC = 1;
  v1 = sub_259AC30(a1, &qword_4B081D0);
  v2 = (unsigned int)qword_4B081C8;
  v3 = (unsigned int)qword_4B081C8 + 1LL;
  if ( HIDWORD(qword_4B081C8) < v3 )
  {
    sub_25D6060(&qword_4B081D0 - 2, &qword_4B081D0, v3, 8);
    v2 = (unsigned int)qword_4B081C8;
  }
  v4 = _mm_load_si128(&v19);
  *(_QWORD *)(qword_4B081C0 + 8 * v2) = v1;
  word_4B08208 = 0;
  xmmword_4B08218 = 0;
  qword_4B08200 = (__int64)&off_4A64730;
  xmmword_4B08228 = (__int128)v4;
  LODWORD(qword_4B081C8) = qword_4B081C8 + 1;
  qword_4B08180 = (__int64)off_4A6DFF0;
  byte_4B081F8 = 0;
  qword_4B08210 = (__int64)off_49D9168;
  sub_259F400(&qword_4B08180, "sample-profile-even-flow-distribution", 37);
  byte_4B081F8 = 1;
  word_4B08208 = 257;
  qword_4B081A8 = 77;
  BYTE2(qword_4B08188) = BYTE2(qword_4B08188) & 0x9F | 0x20;
  qword_4B081A0 = (__int64)"Try to evenly distribute flow when there are multiple equally likely options.";
  sub_259EC40(&qword_4B08180);
  __cxa_atexit(sub_1F6C9D0, &qword_4B08180, &off_47CFE00);
  qword_4B080D0 = 0;
  qword_4B080C0 = (__int64)&off_4A6E058;
  qword_4B080C8 = (unsigned int)qword_4B080C8 & 0x80000000;
  qword_4B08100 = (__int64)&qword_4B08110;
  qword_4B080D8 = 0;
  qword_4B080E0 = 0;
  qword_4B080E8 = 0;
  qword_4B080F0 = 0;
  qword_4B080F8 = 0;
  qword_4B08108 = 0x100000000LL;
  qword_4B08118 = (__int64)&qword_4B08130;
  qword_4B08120 = 1;
  dword_4B08128 = 0;
  byte_4B0812C = 1;
  v5 = sub_259AC30(sub_1F6C9D0, &qword_4B08110);
  v6 = (unsigned int)qword_4B08108;
  if ( HIDWORD(qword_4B08108) < (unsigned __int64)(unsigned int)qword_4B08108 + 1 )
  {
    v20 = (int *)v5;
    sub_25D6060(&qword_4B08110 - 2, &qword_4B08110, (unsigned int)qword_4B08108 + 1LL, 8);
    v6 = (unsigned int)qword_4B08108;
    v5 = (__int64)v20;
  }
  v7 = _mm_load_si128(&v19);
  *(_QWORD *)(qword_4B08100 + 8 * v6) = v5;
  word_4B08148 = 0;
  xmmword_4B08158 = 0;
  qword_4B08140 = (__int64)&off_4A64730;
  xmmword_4B08168 = (__int128)v7;
  LODWORD(qword_4B08108) = qword_4B08108 + 1;
  qword_4B080C0 = (__int64)off_4A6DFF0;
  byte_4B08138 = 0;
  qword_4B08150 = (__int64)off_49D9168;
  sub_259F400(&qword_4B080C0, "sample-profile-rebalance-unknown", 32);
  byte_4B08138 = 1;
  word_4B08148 = 257;
  qword_4B080E8 = 50;
  BYTE2(qword_4B080C8) = BYTE2(qword_4B080C8) & 0x9F | 0x20;
  qword_4B080E0 = (__int64)"Evenly re-distribute flow among unknown subgraphs.";
  sub_259EC40(&qword_4B080C0);
  __cxa_atexit(sub_1F6C9D0, &qword_4B080C0, &off_47CFE00);
  qword_4B08010 = 0;
  qword_4B08000 = (__int64)&off_4A6E058;
  qword_4B08008 = (unsigned int)qword_4B08008 & 0x80000000;
  qword_4B08040 = (__int64)&qword_4B08050;
  qword_4B08018 = 0;
  qword_4B08020 = 0;
  qword_4B08028 = 0;
  qword_4B08030 = 0;
  qword_4B08038 = 0;
  qword_4B08048 = 0x100000000LL;
  qword_4B08058 = (__int64)&qword_4B08070;
  qword_4B08060 = 1;
  dword_4B08068 = 0;
  byte_4B0806C = 1;
  v8 = sub_259AC30(sub_1F6C9D0, &qword_4B08050);
  v9 = (unsigned int)qword_4B08048;
  if ( HIDWORD(qword_4B08048) < (unsigned __int64)(unsigned int)qword_4B08048 + 1 )
  {
    v20 = (int *)v8;
    sub_25D6060(&qword_4B08050 - 2, &qword_4B08050, (unsigned int)qword_4B08048 + 1LL, 8);
    v9 = (unsigned int)qword_4B08048;
    v8 = (__int64)v20;
  }
  v10 = _mm_load_si128(&v19);
  *(_QWORD *)(qword_4B08040 + 8 * v9) = v8;
  word_4B08088 = 0;
  xmmword_4B08098 = 0;
  xmmword_4B080A8 = (__int128)v10;
  qword_4B08080 = (__int64)&off_4A64730;
  LODWORD(qword_4B08048) = qword_4B08048 + 1;
  byte_4B08078 = 0;
  qword_4B08000 = (__int64)off_4A6DFF0;
  qword_4B08090 = (__int64)off_49D9168;
  sub_259F400(&qword_4B08000, "sample-profile-join-islands", 27);
  word_4B08088 = 257;
  byte_4B08078 = 1;
  qword_4B08028 = 46;
  BYTE2(qword_4B08008) = BYTE2(qword_4B08008) & 0x9F | 0x20;
  qword_4B08020 = (__int64)"Join isolated components having positive flow.";
  sub_259EC40(&qword_4B08000);
  __cxa_atexit(sub_1F6C9D0, &qword_4B08000, &off_47CFE00);
  v25 = &v23;
  v21 = &v25;
  v26 = "The cost of increasing a block's count by one.";
  v20 = &v24;
  v19.m128i_i64[0] = (__int64)&v26;
  v27 = 46;
  v24 = 1;
  v23 = 10;
  sub_36A37A0(qword_4B07F40, "sample-profile-profi-cost-block-inc", &v25, &v24, &v26);
  __cxa_atexit(sub_1F6C940, qword_4B07F40, &off_47CFE00);
  v25 = &v23;
  v26 = "The cost of decreasing a block's count by one.";
  v27 = 46;
  v24 = 1;
  v23 = 20;
  sub_36A37A0(qword_4B07E80, "sample-profile-profi-cost-block-dec", v21, v20, v19.m128i_i64[0]);
  __cxa_atexit(sub_1F6C940, qword_4B07E80, &off_47CFE00);
  v25 = &v23;
  v26 = "The cost of increasing the entry block's count by one.";
  v27 = 54;
  v24 = 1;
  v23 = 40;
  sub_36A3960(qword_4B07DC0, "sample-profile-profi-cost-block-entry-inc", v21, v20, v19.m128i_i64[0]);
  __cxa_atexit(sub_1F6C940, qword_4B07DC0, &off_47CFE00);
  v25 = &v23;
  v27 = 54;
  v26 = "The cost of decreasing the entry block's count by one.";
  v24 = 1;
  v23 = 10;
  sub_36A3960(qword_4B07D00, "sample-profile-profi-cost-block-entry-dec", v21, v20, v19.m128i_i64[0]);
  __cxa_atexit(sub_1F6C940, qword_4B07D00, &off_47CFE00);
  qword_4B07C50 = 0;
  qword_4B07C40 = (__int64)&off_4A6E058;
  qword_4B07C48 = (unsigned int)qword_4B07C48 & 0x80000000;
  qword_4B07C80 = (__int64)&qword_4B07C90;
  qword_4B07C58 = 0;
  qword_4B07C60 = 0;
  qword_4B07C68 = 0;
  qword_4B07C70 = 0;
  qword_4B07C78 = 0;
  qword_4B07C88 = 0x100000000LL;
  qword_4B07C98 = (__int64)&qword_4B07CB0;
  qword_4B07CA0 = 1;
  dword_4B07CA8 = 0;
  byte_4B07CAC = 1;
  v11 = sub_259AC30(sub_1F6C940, &qword_4B07C90);
  v12 = (unsigned int)qword_4B07C88;
  if ( HIDWORD(qword_4B07C88) < (unsigned __int64)(unsigned int)qword_4B07C88 + 1 )
  {
    v19.m128i_i64[0] = v11;
    sub_25D6060(&qword_4B07C90 - 2, &qword_4B07C90, (unsigned int)qword_4B07C88 + 1LL, 8);
    v12 = (unsigned int)qword_4B07C88;
    v11 = v19.m128i_i64[0];
  }
  v13 = _mm_load_si128(&v22);
  *(_QWORD *)(qword_4B07C80 + 8 * v12) = v11;
  xmmword_4B07CD8 = 0;
  xmmword_4B07CE8 = (__int128)v13;
  qword_4B07CC0 = (__int64)&off_4A64710;
  LODWORD(qword_4B07C88) = qword_4B07C88 + 1;
  byte_4B07CCC = 0;
  qword_4B07C40 = (__int64)off_4A6DEB8;
  dword_4B07CB8 = 0;
  dword_4B07CC8 = 0;
  qword_4B07CD0 = (__int64)off_49D9228;
  sub_259F400(&qword_4B07C40, "sample-profile-profi-cost-block-zero-inc", 40);
  dword_4B07CB8 = 11;
  byte_4B07CCC = 1;
  dword_4B07CC8 = 11;
  qword_4B07C68 = 59;
  BYTE2(qword_4B07C48) = BYTE2(qword_4B07C48) & 0x9F | 0x20;
  qword_4B07C60 = (__int64)"The cost of increasing a count of zero-weight block by one.";
  sub_259EC40(&qword_4B07C40);
  __cxa_atexit(sub_1F6C940, &qword_4B07C40, &off_47CFE00);
  qword_4B07BC8 = 0x100000000LL;
  qword_4B07B80 = (__int64)&off_4A6E058;
  qword_4B07B88 = (unsigned int)qword_4B07B88 & 0x80000000;
  qword_4B07BC0 = (__int64)&qword_4B07BD0;
  qword_4B07B90 = 0;
  qword_4B07B98 = 0;
  qword_4B07BA0 = 0;
  qword_4B07BA8 = 0;
  qword_4B07BB0 = 0;
  qword_4B07BB8 = 0;
  qword_4B07BD8 = (__int64)&qword_4B07BF0;
  qword_4B07BE0 = 1;
  dword_4B07BE8 = 0;
  byte_4B07BEC = 1;
  v14 = sub_259AC30(sub_1F6C940, &qword_4B07BD0);
  v15 = (unsigned int)qword_4B07BC8;
  v16 = (unsigned int)qword_4B07BC8 + 1LL;
  if ( HIDWORD(qword_4B07BC8) < v16 )
  {
    sub_25D6060(&qword_4B07BD0 - 2, &qword_4B07BD0, v16, 8);
    v15 = (unsigned int)qword_4B07BC8;
  }
  v17 = _mm_load_si128(&v22);
  *(_QWORD *)(qword_4B07BC0 + 8 * v15) = v14;
  xmmword_4B07C18 = 0;
  xmmword_4B07C28 = (__int128)v17;
  qword_4B07C00 = (__int64)&off_4A64710;
  LODWORD(qword_4B07BC8) = qword_4B07BC8 + 1;
  byte_4B07C0C = 0;
  qword_4B07B80 = (__int64)off_4A6DEB8;
  dword_4B07BF8 = 0;
  dword_4B07C08 = 0;
  qword_4B07C10 = (__int64)off_49D9228;
  sub_259F400(&qword_4B07B80, "sample-profile-profi-cost-block-unknown-inc", 43);
  dword_4B07BF8 = 0;
  byte_4B07C0C = 1;
  dword_4B07C08 = 0;
  qword_4B07BA8 = 55;
  BYTE2(qword_4B07B88) = BYTE2(qword_4B07B88) & 0x9F | 0x20;
  qword_4B07BA0 = (__int64)"The cost of increasing an unknown block's count by one.";
  sub_259EC40(&qword_4B07B80);
  return __cxa_atexit(sub_1F6C940, &qword_4B07B80, &off_47CFE00);
}

