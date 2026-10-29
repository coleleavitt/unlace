int __fastcall sub_5A0BD0(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // rdx
  __m128i v4; // xmm5
  __int64 v5; // rax
  __int64 v6; // rdx
  __m128i v7; // xmm6
  __int64 v8; // r15
  __int64 v9; // rax
  unsigned __int64 v10; // rdx
  __m128i v11; // xmm7
  __int64 v12; // rax
  __int64 v13; // rdx
  __m128i v14; // xmm3
  __int64 v15; // r12
  __int64 v16; // rax
  unsigned __int64 v17; // rdx
  __m128i v18; // xmm4
  __m128i v20; // [rsp+0h] [rbp-98h] BYREF
  __m128i v21; // [rsp+10h] [rbp-88h] BYREF
  int **v22; // [rsp+28h] [rbp-70h]
  int *v23; // [rsp+30h] [rbp-68h]
  int *v24; // [rsp+38h] [rbp-60h]
  int v25; // [rsp+40h] [rbp-58h] BYREF
  int v26; // [rsp+44h] [rbp-54h] BYREF
  int *v27; // [rsp+48h] [rbp-50h] BYREF
  const char *v28; // [rsp+50h] [rbp-48h] BYREF
  __int64 v29; // [rsp+58h] [rbp-40h]

  qword_4B00D00 = (__int64)&qword_4B00D10;
  qword_4B00CD0 = 0;
  qword_4B00CD8 = 0;
  qword_4B00CC0 = (__int64)&off_4A6E058;
  qword_4B00CC8 = (unsigned int)qword_4B00CC8 & 0x80000000;
  qword_4B00D18 = (__int64)&qword_4B00D30;
  v21 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_49EB3F8), (__m128i)(unsigned __int64)nullsub_267);
  v20 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_49EB408), (__m128i)(unsigned __int64)nullsub_266);
  qword_4B00CE0 = 0;
  qword_4B00CE8 = 0;
  qword_4B00CF0 = 0;
  qword_4B00CF8 = 0;
  qword_4B00D08 = 0x100000000LL;
  dword_4B00D28 = 0;
  qword_4B00D20 = 1;
  byte_4B00D2C = 1;
  v1 = sub_259AC30(a1, &qword_4B00D10);
  v2 = (unsigned int)qword_4B00D08;
  v3 = (unsigned int)qword_4B00D08 + 1LL;
  if ( HIDWORD(qword_4B00D08) < v3 )
  {
    sub_25D6060(&qword_4B00D10 - 2, &qword_4B00D10, v3, 8);
    v2 = (unsigned int)qword_4B00D08;
  }
  v4 = _mm_load_si128(&v20);
  *(_QWORD *)(qword_4B00D00 + 8 * v2) = v1;
  word_4B00D48 = 0;
  xmmword_4B00D58 = 0;
  qword_4B00D40 = (__int64)&off_4A64730;
  xmmword_4B00D68 = (__int128)v4;
  LODWORD(qword_4B00D08) = qword_4B00D08 + 1;
  qword_4B00CC0 = (__int64)off_4A6DFF0;
  byte_4B00D38 = 0;
  qword_4B00D50 = (__int64)off_49D9168;
  sub_259F400(&qword_4B00CC0, "machine-sink-split", 18);
  qword_4B00CE0 = (__int64)"Split critical edges during machine sinking";
  qword_4B00CE8 = 43;
  byte_4B00D38 = 1;
  word_4B00D48 = 257;
  BYTE2(qword_4B00CC8) = BYTE2(qword_4B00CC8) & 0x9F | 0x20;
  sub_259EC40(&qword_4B00CC0);
  __cxa_atexit(sub_1F6C9D0, &qword_4B00CC0, &off_47CFE00);
  qword_4B00C10 = 0;
  qword_4B00C00 = (__int64)&off_4A6E058;
  qword_4B00C08 = (unsigned int)qword_4B00C08 & 0x80000000;
  qword_4B00C40 = (__int64)&qword_4B00C50;
  qword_4B00C18 = 0;
  qword_4B00C20 = 0;
  qword_4B00C28 = 0;
  qword_4B00C30 = 0;
  qword_4B00C38 = 0;
  qword_4B00C48 = 0x100000000LL;
  qword_4B00C58 = (__int64)&qword_4B00C70;
  qword_4B00C60 = 1;
  dword_4B00C68 = 0;
  byte_4B00C6C = 1;
  v5 = sub_259AC30(sub_1F6C9D0, &qword_4B00C50);
  v6 = (unsigned int)qword_4B00C48;
  if ( HIDWORD(qword_4B00C48) < (unsigned __int64)(unsigned int)qword_4B00C48 + 1 )
  {
    v22 = (int **)v5;
    sub_25D6060(&qword_4B00C50 - 2, &qword_4B00C50, (unsigned int)qword_4B00C48 + 1LL, 8);
    v6 = (unsigned int)qword_4B00C48;
    v5 = (__int64)v22;
  }
  v7 = _mm_load_si128(&v20);
  *(_QWORD *)(qword_4B00C40 + 8 * v6) = v5;
  word_4B00C88 = 0;
  xmmword_4B00C98 = 0;
  qword_4B00C80 = (__int64)&off_4A64730;
  xmmword_4B00CA8 = (__int128)v7;
  LODWORD(qword_4B00C48) = qword_4B00C48 + 1;
  qword_4B00C00 = (__int64)off_4A6DFF0;
  byte_4B00C78 = 0;
  qword_4B00C90 = (__int64)off_49D9168;
  sub_259F400(&qword_4B00C00, "machine-sink-bfi", 16);
  word_4B00C88 = 257;
  qword_4B00C20 = (__int64)"Use block frequency info to find successors to sink";
  qword_4B00C28 = 51;
  byte_4B00C78 = 1;
  BYTE2(qword_4B00C08) = BYTE2(qword_4B00C08) & 0x9F | 0x20;
  sub_259EC40(&qword_4B00C00);
  __cxa_atexit(sub_1F6C9D0, &qword_4B00C00, &off_47CFE00);
  qword_4B00B50 = 0;
  qword_4B00B40 = (__int64)&off_4A6E058;
  qword_4B00B48 = (unsigned int)qword_4B00B48 & 0x80000000;
  qword_4B00B80 = (__int64)&qword_4B00B90;
  qword_4B00B58 = 0;
  qword_4B00B60 = 0;
  qword_4B00B68 = 0;
  qword_4B00B70 = 0;
  qword_4B00B78 = 0;
  qword_4B00B88 = 0x100000000LL;
  qword_4B00B98 = (__int64)&qword_4B00BB0;
  qword_4B00BA0 = 1;
  dword_4B00BA8 = 0;
  byte_4B00BAC = 1;
  v8 = sub_259AC30(sub_1F6C9D0, &qword_4B00B90);
  v9 = (unsigned int)qword_4B00B88;
  v10 = (unsigned int)qword_4B00B88 + 1LL;
  if ( HIDWORD(qword_4B00B88) < v10 )
  {
    sub_25D6060(&qword_4B00B90 - 2, &qword_4B00B90, v10, 8);
    v9 = (unsigned int)qword_4B00B88;
  }
  v11 = _mm_load_si128(&v21);
  *(_QWORD *)(qword_4B00B80 + 8 * v9) = v8;
  xmmword_4B00BD8 = 0;
  xmmword_4B00BE8 = (__int128)v11;
  qword_4B00BC0 = (__int64)&off_4A64710;
  LODWORD(qword_4B00B88) = qword_4B00B88 + 1;
  byte_4B00BCC = 0;
  qword_4B00B40 = (__int64)off_4A6DEB8;
  dword_4B00BB8 = 0;
  dword_4B00BC8 = 0;
  qword_4B00BD0 = (__int64)off_49D9228;
  sub_259F400(&qword_4B00B40, "machine-sink-split-probability-threshold", 40);
  qword_4B00B68 = 222;
  qword_4B00B60 = (__int64)"Percentage threshold for splitting single-instruction critical edge. If the branch threshold "
                           "is higher than this threshold, we allow speculative execution of up to 1 instruction to avoid"
                           " branching to splitted critical edge";
  dword_4B00BB8 = 40;
  byte_4B00BCC = 1;
  dword_4B00BC8 = 40;
  BYTE2(qword_4B00B48) = BYTE2(qword_4B00B48) & 0x9F | 0x20;
  sub_259EC40(&qword_4B00B40);
  __cxa_atexit(sub_1F6C940, &qword_4B00B40, &off_47CFE00);
  v28 = "Do not try to find alias store for a load if there is a in-path block whose instruction number is higher than this threshold.";
  v27 = &v25;
  v24 = &v25;
  v23 = &v26;
  v22 = &v27;
  v26 = 1;
  v25 = 2000;
  v29 = 125;
  sub_3485E90(
    qword_4B00A80,
    "machine-sink-load-instrs-threshold",
    &v28,
    &v27,
    &v26,
    &v25,
    v20.m128i_i64[0],
    v20.m128i_i64[1],
    v21.m128i_i64[0],
    v21.m128i_i64[1]);
  __cxa_atexit(sub_1F6C940, qword_4B00A80, &off_47CFE00);
  v26 = 1;
  v27 = v24;
  v28 = "Do not try to find alias store for a load if the block number in the straight line is higher than this threshold.";
  v25 = 20;
  v29 = 113;
  sub_3485E90(
    qword_4B009C0,
    "machine-sink-load-blocks-threshold",
    &v28,
    v22,
    v23,
    v24,
    v20.m128i_i64[0],
    v20.m128i_i64[1],
    v21.m128i_i64[0],
    v21.m128i_i64[1]);
  __cxa_atexit(sub_1F6C940, qword_4B009C0, &off_47CFE00);
  qword_4B00910 = 0;
  qword_4B00900 = (__int64)&off_4A6E058;
  qword_4B00908 = (unsigned int)qword_4B00908 & 0x80000000;
  qword_4B00940 = (__int64)&qword_4B00950;
  qword_4B00918 = 0;
  qword_4B00920 = 0;
  qword_4B00928 = 0;
  qword_4B00930 = 0;
  qword_4B00938 = 0;
  qword_4B00948 = 0x100000000LL;
  qword_4B00958 = (__int64)&qword_4B00970;
  qword_4B00960 = 1;
  dword_4B00968 = 0;
  byte_4B0096C = 1;
  v12 = sub_259AC30(sub_1F6C940, &qword_4B00950);
  v13 = (unsigned int)qword_4B00948;
  if ( HIDWORD(qword_4B00948) < (unsigned __int64)(unsigned int)qword_4B00948 + 1 )
  {
    v22 = (int **)v12;
    sub_25D6060(&qword_4B00950 - 2, &qword_4B00950, (unsigned int)qword_4B00948 + 1LL, 8);
    v13 = (unsigned int)qword_4B00948;
    v12 = (__int64)v22;
  }
  v14 = _mm_load_si128(&v20);
  *(_QWORD *)(qword_4B00940 + 8 * v13) = v12;
  word_4B00988 = 0;
  xmmword_4B00998 = 0;
  xmmword_4B009A8 = (__int128)v14;
  qword_4B00980 = (__int64)&off_4A64730;
  LODWORD(qword_4B00948) = qword_4B00948 + 1;
  byte_4B00978 = 0;
  qword_4B00900 = (__int64)off_4A6DFF0;
  qword_4B00990 = (__int64)off_49D9168;
  sub_259F400(&qword_4B00900, "sink-insts-to-avoid-spills", 26);
  qword_4B00920 = (__int64)"Sink instructions into cycles to avoid register spills";
  word_4B00988 = 256;
  byte_4B00978 = 0;
  qword_4B00928 = 54;
  BYTE2(qword_4B00908) = BYTE2(qword_4B00908) & 0x9F | 0x20;
  sub_259EC40(&qword_4B00900);
  __cxa_atexit(sub_1F6C9D0, &qword_4B00900, &off_47CFE00);
  qword_4B00888 = 0x100000000LL;
  qword_4B00840 = (__int64)&off_4A6E058;
  qword_4B00848 = (unsigned int)qword_4B00848 & 0x80000000;
  qword_4B00880 = (__int64)&qword_4B00890;
  qword_4B00850 = 0;
  qword_4B00858 = 0;
  qword_4B00860 = 0;
  qword_4B00868 = 0;
  qword_4B00870 = 0;
  qword_4B00878 = 0;
  qword_4B00898 = (__int64)&qword_4B008B0;
  qword_4B008A0 = 1;
  dword_4B008A8 = 0;
  byte_4B008AC = 1;
  v15 = sub_259AC30(sub_1F6C9D0, &qword_4B00890);
  v16 = (unsigned int)qword_4B00888;
  v17 = (unsigned int)qword_4B00888 + 1LL;
  if ( HIDWORD(qword_4B00888) < v17 )
  {
    sub_25D6060(&qword_4B00890 - 2, &qword_4B00890, v17, 8);
    v16 = (unsigned int)qword_4B00888;
  }
  v18 = _mm_load_si128(&v21);
  *(_QWORD *)(qword_4B00880 + 8 * v16) = v15;
  xmmword_4B008D8 = 0;
  xmmword_4B008E8 = (__int128)v18;
  qword_4B008C0 = (__int64)&off_4A64710;
  LODWORD(qword_4B00888) = qword_4B00888 + 1;
  byte_4B008CC = 0;
  qword_4B00840 = (__int64)off_4A6DEB8;
  dword_4B008B8 = 0;
  dword_4B008C8 = 0;
  qword_4B008D0 = (__int64)off_49D9228;
  sub_259F400(&qword_4B00840, "machine-sink-cycle-limit", 24);
  qword_4B00868 = 64;
  qword_4B00860 = (__int64)"The maximum number of instructions considered for cycle sinking.";
  dword_4B008B8 = 50;
  byte_4B008CC = 1;
  dword_4B008C8 = 50;
  BYTE2(qword_4B00848) = BYTE2(qword_4B00848) & 0x9F | 0x20;
  sub_259EC40(&qword_4B00840);
  return __cxa_atexit(sub_1F6C940, &qword_4B00840, &off_47CFE00);
}

