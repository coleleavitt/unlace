int sub_33F320()
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
  sub_21C6990(&unk_2CDA520, "loop-distribute-verify", &v22, &v24, &v23);
  __cxa_atexit(sub_1FEA450, &unk_2CDA520, &off_2AFC540);
  v1 = j__strlen("Whether to distribute into a loop that may not be if-convertible by the loop vectorizer");
  qword_2CDA470 = 0;
  v2 = v1;
  qword_2CDA478 = 0;
  qword_2CDA480 = 0;
  qword_2CDA460 = (__int64)&off_2C4B8B0;
  qword_2CDA468 = (unsigned int)qword_2CDA468 & 0x80000000;
  qword_2CDA4A8 = 0x100000000LL;
  qword_2CDA488 = 0;
  qword_2CDA490 = 0;
  qword_2CDA498 = 0;
  qword_2CDA4A0 = (__int64)&unk_2CDA4B0;
  qword_2CDA4B8 = (__int64)&unk_2CDA4D0;
  qword_2CDA4C0 = 1;
  dword_2CDA4C8 = 0;
  byte_2CDA4CC = 1;
  v3 = sub_21ED2B0("Whether to distribute into a loop that may not be if-convertible by the loop vectorizer");
  v4 = (unsigned int)qword_2CDA4A8;
  v5 = (unsigned int)qword_2CDA4A8 + 1LL;
  if ( v5 > HIDWORD(qword_2CDA4A8) )
  {
    v19.m128i_i64[0] = v3;
    sub_22134E0((char *)&unk_2CDA4B0 - 16, &unk_2CDA4B0, v5, 8);
    v4 = (unsigned int)qword_2CDA4A8;
    v3 = v19.m128i_i64[0];
  }
  *(_QWORD *)(qword_2CDA4A0 + 8 * v4) = v3;
  word_2CDA4E8 = 0;
  xmmword_2CDA508 = (__int128)_mm_loadh_ps((const double *)off_2C4E368);
  LODWORD(qword_2CDA4A8) = qword_2CDA4A8 + 1;
  qword_2CDA4E0 = (__int64)off_2C474E8;
  byte_2CDA4D8 = 0;
  qword_2CDA460 = (__int64)off_2C4B848;
  qword_2CDA4F0 = (__int64)off_2BC0B68;
  sub_21F3510(&qword_2CDA460, "loop-distribute-non-if-convertible", 34);
  qword_2CDA488 = v2;
  word_2CDA4E8 = 256;
  byte_2CDA4D8 = 0;
  BYTE2(qword_2CDA468) = BYTE2(qword_2CDA468) & 0x9F | 0x20;
  qword_2CDA480 = (__int64)"Whether to distribute into a loop that may not be if-convertible by the loop vectorizer";
  sub_21F4400(&qword_2CDA460);
  __cxa_atexit(sub_1FEA450, &qword_2CDA460, &off_2AFC540);
  v6 = j__strlen("The maximum number of SCEV checks allowed for Loop Distribution");
  qword_2CDA3B0 = 0;
  v7 = v6;
  qword_2CDA3E0 = (__int64)&unk_2CDA3F0;
  qword_2CDA3A0 = (__int64)&off_2C4B8B0;
  qword_2CDA3A8 = (unsigned int)qword_2CDA3A8 & 0x80000000;
  qword_2CDA3E8 = 0x100000000LL;
  qword_2CDA3B8 = 0;
  qword_2CDA3C0 = 0;
  qword_2CDA3C8 = 0;
  qword_2CDA3D0 = 0;
  qword_2CDA3D8 = 0;
  qword_2CDA3F8 = (__int64)&unk_2CDA410;
  qword_2CDA400 = 1;
  dword_2CDA408 = 0;
  byte_2CDA40C = 1;
  v8 = sub_21ED2B0("The maximum number of SCEV checks allowed for Loop Distribution");
  v9 = (unsigned int)qword_2CDA3E8;
  v10 = (unsigned int)qword_2CDA3E8 + 1LL;
  if ( v10 > HIDWORD(qword_2CDA3E8) )
  {
    v19.m128i_i64[0] = v8;
    sub_22134E0((char *)&unk_2CDA3F0 - 16, &unk_2CDA3F0, v10, 8);
    v9 = (unsigned int)qword_2CDA3E8;
    v8 = v19.m128i_i64[0];
  }
  *(_QWORD *)(qword_2CDA3E0 + 8 * v9) = v8;
  xmmword_2CDA448 = (__int128)_mm_loadh_ps((const double *)off_2C4E4F8);
  v19 = (__m128i)xmmword_2CDA448;
  qword_2CDA420 = (__int64)off_2C472D0;
  LODWORD(qword_2CDA3E8) = qword_2CDA3E8 + 1;
  byte_2CDA42C = 0;
  qword_2CDA3A0 = (__int64)off_2C4B710;
  dword_2CDA418 = 0;
  dword_2CDA428 = 0;
  qword_2CDA430 = (__int64)off_2BC0BF8;
  sub_21F3510(&qword_2CDA3A0, "loop-distribute-scev-check-threshold", 36);
  qword_2CDA3C8 = v7;
  dword_2CDA418 = 8;
  byte_2CDA42C = 1;
  dword_2CDA428 = 8;
  BYTE2(qword_2CDA3A8) = BYTE2(qword_2CDA3A8) & 0x9F | 0x20;
  qword_2CDA3C0 = (__int64)"The maximum number of SCEV checks allowed for Loop Distribution";
  sub_21F4400(&qword_2CDA3A0);
  __cxa_atexit(sub_1FC9520, &qword_2CDA3A0, &off_2AFC540);
  v11 = j__strlen(
          "The maximum number of SCEV checks allowed for Loop Distribution for loop marked with #pragma clang loop distribute(enable)");
  byte_2CDA34C = 1;
  qword_2CDA2F0 = 0;
  v12 = v11;
  qword_2CDA2E0 = (__int64)&off_2C4B8B0;
  qword_2CDA2E8 = (unsigned int)qword_2CDA2E8 & 0x80000000;
  qword_2CDA328 = 0x100000000LL;
  qword_2CDA2F8 = 0;
  qword_2CDA300 = 0;
  qword_2CDA308 = 0;
  qword_2CDA310 = 0;
  qword_2CDA318 = 0;
  qword_2CDA320 = (__int64)&unk_2CDA330;
  qword_2CDA338 = (__int64)&unk_2CDA350;
  qword_2CDA340 = 1;
  dword_2CDA348 = 0;
  v13 = sub_21ED2B0(
          "The maximum number of SCEV checks allowed for Loop Distribution for loop marked with #pragma clang loop distribute(enable)");
  v14 = (unsigned int)qword_2CDA328;
  v15 = _mm_load_si128(&v19);
  v16 = (unsigned int)qword_2CDA328 + 1LL;
  if ( v16 > HIDWORD(qword_2CDA328) )
  {
    v20 = v13;
    sub_22134E0((char *)&unk_2CDA330 - 16, &unk_2CDA330, v16, 8);
    v14 = (unsigned int)qword_2CDA328;
    v13 = v20;
    v15 = _mm_load_si128(&v19);
  }
  *(_QWORD *)(qword_2CDA320 + 8 * v14) = v13;
  xmmword_2CDA388 = (__int128)v15;
  LODWORD(qword_2CDA328) = qword_2CDA328 + 1;
  qword_2CDA360 = (__int64)off_2C472D0;
  dword_2CDA358 = 0;
  byte_2CDA36C = 0;
  qword_2CDA2E0 = (__int64)off_2C4B710;
  dword_2CDA368 = 0;
  qword_2CDA370 = (__int64)off_2BC0BF8;
  sub_21F3510(&qword_2CDA2E0, "loop-distribute-scev-check-threshold-with-pragma", 48);
  qword_2CDA308 = v12;
  dword_2CDA358 = 128;
  byte_2CDA36C = 1;
  dword_2CDA368 = 128;
  BYTE2(qword_2CDA2E8) = BYTE2(qword_2CDA2E8) & 0x9F | 0x20;
  qword_2CDA300 = (__int64)"The maximum number of SCEV checks allowed for Loop Distribution for loop marked with #pragma "
                           "clang loop distribute(enable)";
  sub_21F4400(&qword_2CDA2E0);
  __cxa_atexit(sub_1FC9520, &qword_2CDA2E0, &off_2AFC540);
  v23 = &v21;
  v21 = 0;
  v17 = j__strlen("Enable the new, experimental LoopDistribution Pass");
  v24 = "Enable the new, experimental LoopDistribution Pass";
  v25 = v17;
  v22 = 1;
  sub_21C6990(&unk_2CDA220, "enable-loop-distribute", &v22, &v24, &v23);
  return __cxa_atexit(sub_1FEA450, &unk_2CDA220, &off_2AFC540);
}

