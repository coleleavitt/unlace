int sub_3426E0()
{
  size_t v0; // rax
  size_t v1; // rax
  __int64 v2; // r15
  __int64 v3; // rax
  __int64 v4; // rcx
  unsigned __int64 v5; // rdx
  size_t v6; // rax
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  size_t v11; // rax
  __int64 v12; // r15
  __int64 v13; // rax
  __int64 v14; // rcx
  __m128i v15; // xmm0
  unsigned __int64 v16; // rdx
  size_t v17; // rax
  __m128i v19; // [rsp+0h] [rbp-78h] BYREF
  __int64 v20; // [rsp+18h] [rbp-60h]
  char v21; // [rsp+23h] [rbp-55h] BYREF
  int v22; // [rsp+24h] [rbp-54h] BYREF
  char *v23; // [rsp+28h] [rbp-50h] BYREF
  const char *v24; // [rsp+30h] [rbp-48h] BYREF
  size_t v25; // [rsp+38h] [rbp-40h]

  v21 = 0;
  v23 = &v21;
  v0 = j__strlen("Turn on DominatorTree and LoopInfo verification after Loop Distribution");
  v24 = "Turn on DominatorTree and LoopInfo verification after Loop Distribution";
  v25 = v0;
  v22 = 1;
  sub_21EA6D0(&unk_2D04440, "loop-distribute-verify", &v22, &v24, &v23);
  __cxa_atexit(sub_200E190, &unk_2D04440, &off_2B25620);
  v1 = j__strlen("Whether to distribute into a loop that may not be if-convertible by the loop vectorizer");
  qword_2D04390 = 0;
  v2 = v1;
  qword_2D04398 = 0;
  qword_2D043A0 = 0;
  qword_2D04380 = (__int64)&off_2C758B0;
  qword_2D04388 = (unsigned int)qword_2D04388 & 0x80000000;
  qword_2D043C8 = 0x100000000LL;
  qword_2D043A8 = 0;
  qword_2D043B0 = 0;
  qword_2D043B8 = 0;
  qword_2D043C0 = (__int64)&unk_2D043D0;
  qword_2D043D8 = (__int64)&unk_2D043F0;
  qword_2D043E0 = 1;
  dword_2D043E8 = 0;
  byte_2D043EC = 1;
  v3 = sub_2210FF0("Whether to distribute into a loop that may not be if-convertible by the loop vectorizer");
  v4 = (unsigned int)qword_2D043C8;
  v5 = (unsigned int)qword_2D043C8 + 1LL;
  if ( v5 > HIDWORD(qword_2D043C8) )
  {
    v19.m128i_i64[0] = v3;
    sub_2237220((char *)&unk_2D043D0 - 16, &unk_2D043D0, v5, 8);
    v4 = (unsigned int)qword_2D043C8;
    v3 = v19.m128i_i64[0];
  }
  *(_QWORD *)(qword_2D043C0 + 8 * v4) = v3;
  word_2D04408 = 0;
  xmmword_2D04428 = (__int128)_mm_loadh_ps((const double *)off_2C78368);
  LODWORD(qword_2D043C8) = qword_2D043C8 + 1;
  qword_2D04400 = (__int64)off_2C714E8;
  byte_2D043F8 = 0;
  qword_2D04380 = (__int64)off_2C75848;
  qword_2D04410 = (__int64)off_2BEAB08;
  sub_2217250(&qword_2D04380, "loop-distribute-non-if-convertible", 34);
  qword_2D043A8 = v2;
  word_2D04408 = 256;
  byte_2D043F8 = 0;
  BYTE2(qword_2D04388) = BYTE2(qword_2D04388) & 0x9F | 0x20;
  qword_2D043A0 = (__int64)"Whether to distribute into a loop that may not be if-convertible by the loop vectorizer";
  sub_2218140(&qword_2D04380);
  __cxa_atexit(sub_200E190, &qword_2D04380, &off_2B25620);
  v6 = j__strlen("The maximum number of SCEV checks allowed for Loop Distribution");
  qword_2D042D0 = 0;
  v7 = v6;
  qword_2D04300 = (__int64)&unk_2D04310;
  qword_2D042C0 = (__int64)&off_2C758B0;
  qword_2D042C8 = (unsigned int)qword_2D042C8 & 0x80000000;
  qword_2D04308 = 0x100000000LL;
  qword_2D042D8 = 0;
  qword_2D042E0 = 0;
  qword_2D042E8 = 0;
  qword_2D042F0 = 0;
  qword_2D042F8 = 0;
  qword_2D04318 = (__int64)&unk_2D04330;
  qword_2D04320 = 1;
  dword_2D04328 = 0;
  byte_2D0432C = 1;
  v8 = sub_2210FF0("The maximum number of SCEV checks allowed for Loop Distribution");
  v9 = (unsigned int)qword_2D04308;
  v10 = (unsigned int)qword_2D04308 + 1LL;
  if ( v10 > HIDWORD(qword_2D04308) )
  {
    v19.m128i_i64[0] = v8;
    sub_2237220((char *)&unk_2D04310 - 16, &unk_2D04310, v10, 8);
    v9 = (unsigned int)qword_2D04308;
    v8 = v19.m128i_i64[0];
  }
  *(_QWORD *)(qword_2D04300 + 8 * v9) = v8;
  xmmword_2D04368 = (__int128)_mm_loadh_ps((const double *)off_2C784F8);
  v19 = (__m128i)xmmword_2D04368;
  qword_2D04340 = (__int64)off_2C712D0;
  LODWORD(qword_2D04308) = qword_2D04308 + 1;
  byte_2D0434C = 0;
  qword_2D042C0 = (__int64)off_2C75710;
  dword_2D04338 = 0;
  dword_2D04348 = 0;
  qword_2D04350 = (__int64)off_2BEAB98;
  sub_2217250(&qword_2D042C0, "loop-distribute-scev-check-threshold", 36);
  qword_2D042E8 = v7;
  dword_2D04338 = 8;
  byte_2D0434C = 1;
  dword_2D04348 = 8;
  BYTE2(qword_2D042C8) = BYTE2(qword_2D042C8) & 0x9F | 0x20;
  qword_2D042E0 = (__int64)"The maximum number of SCEV checks allowed for Loop Distribution";
  sub_2218140(&qword_2D042C0);
  __cxa_atexit(sub_1FED260, &qword_2D042C0, &off_2B25620);
  v11 = j__strlen(
          "The maximum number of SCEV checks allowed for Loop Distribution for loop marked with #pragma clang loop distribute(enable)");
  byte_2D0426C = 1;
  qword_2D04210 = 0;
  v12 = v11;
  qword_2D04200 = (__int64)&off_2C758B0;
  qword_2D04208 = (unsigned int)qword_2D04208 & 0x80000000;
  qword_2D04248 = 0x100000000LL;
  qword_2D04218 = 0;
  qword_2D04220 = 0;
  qword_2D04228 = 0;
  qword_2D04230 = 0;
  qword_2D04238 = 0;
  qword_2D04240 = (__int64)&unk_2D04250;
  qword_2D04258 = (__int64)&unk_2D04270;
  qword_2D04260 = 1;
  dword_2D04268 = 0;
  v13 = sub_2210FF0(
          "The maximum number of SCEV checks allowed for Loop Distribution for loop marked with #pragma clang loop distribute(enable)");
  v14 = (unsigned int)qword_2D04248;
  v15 = _mm_load_si128(&v19);
  v16 = (unsigned int)qword_2D04248 + 1LL;
  if ( v16 > HIDWORD(qword_2D04248) )
  {
    v20 = v13;
    sub_2237220((char *)&unk_2D04250 - 16, &unk_2D04250, v16, 8);
    v14 = (unsigned int)qword_2D04248;
    v13 = v20;
    v15 = _mm_load_si128(&v19);
  }
  *(_QWORD *)(qword_2D04240 + 8 * v14) = v13;
  xmmword_2D042A8 = (__int128)v15;
  LODWORD(qword_2D04248) = qword_2D04248 + 1;
  qword_2D04280 = (__int64)off_2C712D0;
  dword_2D04278 = 0;
  byte_2D0428C = 0;
  qword_2D04200 = (__int64)off_2C75710;
  dword_2D04288 = 0;
  qword_2D04290 = (__int64)off_2BEAB98;
  sub_2217250(&qword_2D04200, "loop-distribute-scev-check-threshold-with-pragma", 48);
  qword_2D04228 = v12;
  dword_2D04278 = 128;
  byte_2D0428C = 1;
  dword_2D04288 = 128;
  BYTE2(qword_2D04208) = BYTE2(qword_2D04208) & 0x9F | 0x20;
  qword_2D04220 = (__int64)"The maximum number of SCEV checks allowed for Loop Distribution for loop marked with #pragma "
                           "clang loop distribute(enable)";
  sub_2218140(&qword_2D04200);
  __cxa_atexit(sub_1FED260, &qword_2D04200, &off_2B25620);
  v23 = &v21;
  v21 = 0;
  v17 = j__strlen("Enable the new, experimental LoopDistribution Pass");
  v24 = "Enable the new, experimental LoopDistribution Pass";
  v25 = v17;
  v22 = 1;
  sub_21EA6D0(&unk_2D04140, "enable-loop-distribute", &v22, &v24, &v23);
  return __cxa_atexit(sub_200E190, &unk_2D04140, &off_2B25620);
}
