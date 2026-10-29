int __fastcall sub_569DE0(__int64 a1)
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
  __int64 v14; // r12
  __int64 v15; // rax
  unsigned __int64 v16; // rdx
  __m128i v17; // xmm4
  __m128i v19; // [rsp+0h] [rbp-98h] BYREF
  __m128i v20; // [rsp+10h] [rbp-88h] BYREF
  const char **v21; // [rsp+28h] [rbp-70h]
  int *v22; // [rsp+30h] [rbp-68h]
  int *v23; // [rsp+38h] [rbp-60h]
  int v24; // [rsp+40h] [rbp-58h] BYREF
  int v25; // [rsp+44h] [rbp-54h] BYREF
  int *v26; // [rsp+48h] [rbp-50h] BYREF
  const char *v27; // [rsp+50h] [rbp-48h] BYREF
  __int64 v28; // [rsp+58h] [rbp-40h]

  qword_4ADFC80 = (__int64)&qword_4ADFC90;
  qword_4ADFC50 = 0;
  qword_4ADFC58 = 0;
  qword_4ADFC40 = (__int64)&off_4A6E058;
  qword_4ADFC48 = (unsigned int)qword_4ADFC48 & 0x80000000;
  qword_4ADFC98 = (__int64)&qword_4ADFCB0;
  v20 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_49CBD98), (__m128i)(unsigned __int64)nullsub_266);
  v19 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_49CBD80), (__m128i)(unsigned __int64)nullsub_291);
  qword_4ADFC60 = 0;
  qword_4ADFC68 = 0;
  qword_4ADFC70 = 0;
  qword_4ADFC78 = 0;
  qword_4ADFC88 = 0x100000000LL;
  dword_4ADFCA8 = 0;
  qword_4ADFCA0 = 1;
  byte_4ADFCAC = 1;
  v1 = sub_259AC30(a1, &qword_4ADFC90);
  v2 = (unsigned int)qword_4ADFC88;
  v3 = (unsigned int)qword_4ADFC88 + 1LL;
  if ( HIDWORD(qword_4ADFC88) < v3 )
  {
    sub_25D6060(&qword_4ADFC90 - 2, &qword_4ADFC90, v3, 8);
    v2 = (unsigned int)qword_4ADFC88;
  }
  v4 = _mm_load_si128(&v19);
  *(_QWORD *)(qword_4ADFC80 + 8 * v2) = v1;
  xmmword_4ADFCD8 = 0;
  xmmword_4ADFCE8 = (__int128)v4;
  qword_4ADFC40 = (__int64)off_4A6DF20;
  LODWORD(qword_4ADFC88) = qword_4ADFC88 + 1;
  byte_4ADFCCC = 0;
  qword_4ADFCD0 = (__int64)off_49D91C8;
  dword_4ADFCB8 = 0;
  dword_4ADFCC8 = 0;
  qword_4ADFCC0 = (__int64)&off_4A692B8;
  sub_259F400(&qword_4ADFC40, "x86-experimental-pref-innermost-loop-alignment", 46);
  dword_4ADFCB8 = 4;
  qword_4ADFC60 = (__int64)"Sets the preferable loop alignment for experiments (as log2 bytes) for innermost loops only. "
                           "If specified, this option overrides alignment set by x86-experimental-pref-loop-alignment.";
  byte_4ADFCCC = 1;
  dword_4ADFCC8 = 4;
  qword_4ADFC68 = 183;
  BYTE2(qword_4ADFC48) = BYTE2(qword_4ADFC48) & 0x9F | 0x20;
  sub_259EC40(&qword_4ADFC40);
  __cxa_atexit(sub_20B86E0, &qword_4ADFC40, &off_47CFE00);
  v27 = "Sets the cost threshold for when multiple conditionals will be merged into one branch versus be split in multipl"
        "e branches. Merging conditionals saves branches at the cost of additional instructions. This value sets the inst"
        "ruction cost limit, below which conditionals will be merged, and above which conditionals will be split. Set to "
        "-1 to never merge branches.";
  v26 = &v24;
  v23 = &v24;
  v22 = &v25;
  v21 = &v27;
  v25 = 1;
  v28 = 363;
  v24 = 2;
  sub_21851D0(
    qword_4ADFB80,
    "x86-br-merging-base-cost",
    &v26,
    &v27,
    &v25,
    &v24,
    v19.m128i_i64[0],
    v19.m128i_i64[1],
    v20.m128i_i64[0],
    v20.m128i_i64[1]);
  __cxa_atexit(sub_20B86E0, qword_4ADFB80, &off_47CFE00);
  v25 = 1;
  v26 = v23;
  v27 = "Increases 'x86-br-merging-base-cost' in cases that the target supports conditional compare instructions.";
  v28 = 104;
  v24 = 6;
  sub_21851D0(
    qword_4ADFAC0,
    "x86-br-merging-ccmp-bias",
    &v26,
    v21,
    v22,
    v23,
    v19.m128i_i64[0],
    v19.m128i_i64[1],
    v20.m128i_i64[0],
    v20.m128i_i64[1]);
  __cxa_atexit(sub_20B86E0, qword_4ADFAC0, &off_47CFE00);
  qword_4ADFA10 = 0;
  qword_4ADFA40 = (__int64)&qword_4ADFA50;
  qword_4ADFA18 = 0;
  qword_4ADFA00 = (__int64)&off_4A6E058;
  qword_4ADFA08 = (unsigned int)qword_4ADFA08 & 0x80000000;
  qword_4ADFA20 = 0;
  qword_4ADFA28 = 0;
  qword_4ADFA30 = 0;
  qword_4ADFA38 = 0;
  qword_4ADFA48 = 0x100000000LL;
  qword_4ADFA58 = (__int64)&qword_4ADFA70;
  qword_4ADFA60 = 1;
  dword_4ADFA68 = 0;
  byte_4ADFA6C = 1;
  v5 = sub_259AC30(sub_20B86E0, &qword_4ADFA50);
  v6 = (unsigned int)qword_4ADFA48;
  if ( HIDWORD(qword_4ADFA48) < (unsigned __int64)(unsigned int)qword_4ADFA48 + 1 )
  {
    v21 = (const char **)v5;
    sub_25D6060(&qword_4ADFA50 - 2, &qword_4ADFA50, (unsigned int)qword_4ADFA48 + 1LL, 8);
    v6 = (unsigned int)qword_4ADFA48;
    v5 = (__int64)v21;
  }
  v7 = _mm_load_si128(&v20);
  *(_QWORD *)(qword_4ADFA40 + 8 * v6) = v5;
  qword_4ADFA80 = (__int64)&off_4A64730;
  word_4ADFA88 = 0;
  xmmword_4ADFA98 = 0;
  qword_4ADFA00 = (__int64)off_4A6DFF0;
  xmmword_4ADFAA8 = (__int128)v7;
  LODWORD(qword_4ADFA48) = qword_4ADFA48 + 1;
  qword_4ADFA90 = (__int64)off_49D9168;
  byte_4ADFA78 = 0;
  sub_259F400(&qword_4ADFA00, "x86-widen-shift", 15);
  byte_4ADFA78 = 1;
  qword_4ADFA28 = 40;
  word_4ADFA88 = 257;
  qword_4ADFA20 = (__int64)"Replace narrow shifts with wider shifts.";
  BYTE2(qword_4ADFA08) = BYTE2(qword_4ADFA08) & 0x9F | 0x20;
  sub_259EC40(&qword_4ADFA00);
  __cxa_atexit(sub_1F6C9D0, &qword_4ADFA00, &off_47CFE00);
  qword_4ADF950 = 0;
  qword_4ADF980 = (__int64)&qword_4ADF990;
  qword_4ADF958 = 0;
  qword_4ADF940 = (__int64)&off_4A6E058;
  qword_4ADF948 = (unsigned int)qword_4ADF948 & 0x80000000;
  qword_4ADF960 = 0;
  qword_4ADF968 = 0;
  qword_4ADF970 = 0;
  qword_4ADF978 = 0;
  qword_4ADF988 = 0x100000000LL;
  qword_4ADF998 = (__int64)&qword_4ADF9B0;
  qword_4ADF9A0 = 1;
  dword_4ADF9A8 = 0;
  byte_4ADF9AC = 1;
  v8 = sub_259AC30(sub_1F6C9D0, &qword_4ADF990);
  v9 = (unsigned int)qword_4ADF988;
  if ( HIDWORD(qword_4ADF988) < (unsigned __int64)(unsigned int)qword_4ADF988 + 1 )
  {
    v21 = (const char **)v8;
    sub_25D6060(&qword_4ADF990 - 2, &qword_4ADF990, (unsigned int)qword_4ADF988 + 1LL, 8);
    v9 = (unsigned int)qword_4ADF988;
    v8 = (__int64)v21;
  }
  v10 = _mm_load_si128(&v19);
  *(_QWORD *)(qword_4ADF980 + 8 * v9) = v8;
  xmmword_4ADF9D8 = 0;
  xmmword_4ADF9E8 = (__int128)v10;
  qword_4ADF940 = (__int64)off_4A6DF20;
  LODWORD(qword_4ADF988) = qword_4ADF988 + 1;
  byte_4ADF9CC = 0;
  qword_4ADF9D0 = (__int64)off_49D91C8;
  dword_4ADF9B8 = 0;
  dword_4ADF9C8 = 0;
  qword_4ADF9C0 = (__int64)&off_4A692B8;
  sub_259F400(&qword_4ADF940, "x86-br-merging-likely-bias", 26);
  dword_4ADF9B8 = 0;
  qword_4ADF960 = (__int64)"Increases 'x86-br-merging-base-cost' in cases that it is likely that all conditionals will be"
                           " executed. For example for merging the conditionals (a == b && c > d), if its known that a =="
                           " b is likely, then it is likely that if the conditionals are split both sides will be execute"
                           "d, so it may be desirable to increase the instruction cost threshold. Set to -1 to never merg"
                           "e likely branches.";
  byte_4ADF9CC = 1;
  dword_4ADF9C8 = 0;
  qword_4ADF968 = 390;
  BYTE2(qword_4ADF948) = BYTE2(qword_4ADF948) & 0x9F | 0x20;
  sub_259EC40(&qword_4ADF940);
  __cxa_atexit(sub_20B86E0, &qword_4ADF940, &off_47CFE00);
  qword_4ADF890 = 0;
  qword_4ADF8C0 = (__int64)&qword_4ADF8D0;
  qword_4ADF898 = 0;
  qword_4ADF880 = (__int64)&off_4A6E058;
  qword_4ADF888 = (unsigned int)qword_4ADF888 & 0x80000000;
  qword_4ADF8A0 = 0;
  qword_4ADF8A8 = 0;
  qword_4ADF8B0 = 0;
  qword_4ADF8B8 = 0;
  qword_4ADF8C8 = 0x100000000LL;
  qword_4ADF8D8 = (__int64)&qword_4ADF8F0;
  qword_4ADF8E0 = 1;
  dword_4ADF8E8 = 0;
  byte_4ADF8EC = 1;
  v11 = sub_259AC30(sub_20B86E0, &qword_4ADF8D0);
  v12 = (unsigned int)qword_4ADF8C8;
  if ( HIDWORD(qword_4ADF8C8) < (unsigned __int64)(unsigned int)qword_4ADF8C8 + 1 )
  {
    v21 = (const char **)v11;
    sub_25D6060(&qword_4ADF8D0 - 2, &qword_4ADF8D0, (unsigned int)qword_4ADF8C8 + 1LL, 8);
    v12 = (unsigned int)qword_4ADF8C8;
    v11 = (__int64)v21;
  }
  v13 = _mm_load_si128(&v19);
  *(_QWORD *)(qword_4ADF8C0 + 8 * v12) = v11;
  xmmword_4ADF918 = 0;
  xmmword_4ADF928 = (__int128)v13;
  qword_4ADF880 = (__int64)off_4A6DF20;
  LODWORD(qword_4ADF8C8) = qword_4ADF8C8 + 1;
  byte_4ADF90C = 0;
  qword_4ADF910 = (__int64)off_49D91C8;
  dword_4ADF8F8 = 0;
  dword_4ADF908 = 0;
  qword_4ADF900 = (__int64)&off_4A692B8;
  sub_259F400(&qword_4ADF880, "x86-br-merging-unlikely-bias", 28);
  dword_4ADF8F8 = -1;
  qword_4ADF8A0 = (__int64)"Decreases 'x86-br-merging-base-cost' in cases that it is unlikely that all conditionals will "
                           "be executed. For example for merging the conditionals (a == b && c > d), if its known that a "
                           "== b is unlikely, then it is unlikely that if the conditionals are split both sides will be e"
                           "xecuted, so it may be desirable to decrease the instruction cost threshold. Set to -1 to neve"
                           "r merge unlikely branches.";
  byte_4ADF90C = 1;
  dword_4ADF908 = -1;
  qword_4ADF8A8 = 398;
  BYTE2(qword_4ADF888) = BYTE2(qword_4ADF888) & 0x9F | 0x20;
  sub_259EC40(&qword_4ADF880);
  __cxa_atexit(sub_20B86E0, &qword_4ADF880, &off_47CFE00);
  qword_4ADF808 = 0x100000000LL;
  qword_4ADF800 = (__int64)&qword_4ADF810;
  qword_4ADF7D0 = 0;
  qword_4ADF7C0 = (__int64)&off_4A6E058;
  qword_4ADF7C8 = (unsigned int)qword_4ADF7C8 & 0x80000000;
  qword_4ADF7D8 = 0;
  qword_4ADF7E0 = 0;
  qword_4ADF7E8 = 0;
  qword_4ADF7F0 = 0;
  qword_4ADF7F8 = 0;
  qword_4ADF818 = (__int64)&qword_4ADF830;
  qword_4ADF820 = 1;
  dword_4ADF828 = 0;
  byte_4ADF82C = 1;
  v14 = sub_259AC30(sub_20B86E0, &qword_4ADF810);
  v15 = (unsigned int)qword_4ADF808;
  v16 = (unsigned int)qword_4ADF808 + 1LL;
  if ( HIDWORD(qword_4ADF808) < v16 )
  {
    sub_25D6060(&qword_4ADF810 - 2, &qword_4ADF810, v16, 8);
    v15 = (unsigned int)qword_4ADF808;
  }
  v17 = _mm_load_si128(&v20);
  *(_QWORD *)(qword_4ADF800 + 8 * v15) = v14;
  word_4ADF848 = 0;
  qword_4ADF840 = (__int64)&off_4A64730;
  xmmword_4ADF858 = 0;
  xmmword_4ADF868 = (__int128)v17;
  qword_4ADF7C0 = (__int64)off_4A6DFF0;
  LODWORD(qword_4ADF808) = qword_4ADF808 + 1;
  byte_4ADF838 = 0;
  qword_4ADF850 = (__int64)off_49D9168;
  sub_259F400(&qword_4ADF7C0, "mul-constant-optimization", 25);
  byte_4ADF838 = 1;
  qword_4ADF7E8 = 77;
  word_4ADF848 = 257;
  qword_4ADF7E0 = (__int64)"Replace 'mul x, Const' with more effective instructions like SHIFT, LEA, etc.";
  BYTE2(qword_4ADF7C8) = BYTE2(qword_4ADF7C8) & 0x9F | 0x20;
  sub_259EC40(&qword_4ADF7C0);
  return __cxa_atexit(sub_1F6C9D0, &qword_4ADF7C0, &off_47CFE00);
}

