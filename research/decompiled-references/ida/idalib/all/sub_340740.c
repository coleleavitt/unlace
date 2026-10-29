int sub_340740()
{
  size_t v0; // rax
  __int64 v1; // r14
  __int64 v2; // rax
  __int64 v3; // rcx
  unsigned __int64 v4; // rdx
  size_t v5; // rax
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  __m128i v10; // xmm2
  size_t v11; // rax
  __int64 v12; // r14
  __int64 v13; // rax
  __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  __m128i v16; // xmm3
  size_t v17; // rax
  __int64 v18; // rbp
  __int64 v19; // rax
  __int64 v20; // rcx
  unsigned __int64 v21; // rdx
  __m128i v23; // [rsp+0h] [rbp-58h] BYREF
  __int64 v24; // [rsp+18h] [rbp-40h]

  v0 = j__strlen("Max block size to duplicate for jump threading");
  qword_2D033D0 = 0;
  v1 = v0;
  qword_2D033D8 = 0;
  qword_2D033E0 = 0;
  qword_2D033C0 = (__int64)&off_2C758B0;
  qword_2D033C8 = (unsigned int)qword_2D033C8 & 0x80000000;
  qword_2D03408 = 0x100000000LL;
  qword_2D033E8 = 0;
  qword_2D033F0 = 0;
  qword_2D033F8 = 0;
  qword_2D03400 = (__int64)&unk_2D03410;
  qword_2D03418 = (__int64)&unk_2D03430;
  qword_2D03420 = 1;
  dword_2D03428 = 0;
  byte_2D0342C = 1;
  v2 = sub_2210FF0("Max block size to duplicate for jump threading");
  v3 = (unsigned int)qword_2D03408;
  v4 = (unsigned int)qword_2D03408 + 1LL;
  if ( v4 > HIDWORD(qword_2D03408) )
  {
    v23.m128i_i64[0] = v2;
    sub_2237220((char *)&unk_2D03410 - 16, &unk_2D03410, v4, 8);
    v3 = (unsigned int)qword_2D03408;
    v2 = v23.m128i_i64[0];
  }
  *(_QWORD *)(qword_2D03400 + 8 * v3) = v2;
  qword_2D03440 = (__int64)off_2C712D0;
  qword_2D033C0 = (__int64)off_2C75710;
  v23 = (__m128i)_mm_loadh_ps((const double *)off_2C784F8);
  xmmword_2D03468 = (__int128)v23;
  qword_2D03450 = (__int64)off_2BEAB98;
  LODWORD(qword_2D03408) = qword_2D03408 + 1;
  dword_2D03438 = 0;
  dword_2D03448 = 0;
  byte_2D0344C = 0;
  sub_2217250(&qword_2D033C0, "jump-threading-threshold", 24);
  qword_2D033E8 = v1;
  qword_2D033E0 = (__int64)"Max block size to duplicate for jump threading";
  dword_2D03438 = 6;
  byte_2D0344C = 1;
  dword_2D03448 = 6;
  BYTE2(qword_2D033C8) = BYTE2(qword_2D033C8) & 0x9F | 0x20;
  sub_2218140(&qword_2D033C0);
  __cxa_atexit(sub_1FED260, &qword_2D033C0, &off_2B25620);
  v5 = j__strlen("The number of predecessors to search for a stronger condition to use to thread over a weaker condition");
  qword_2D03340 = (__int64)&unk_2D03350;
  v6 = v5;
  qword_2D03310 = 0;
  qword_2D03300 = (__int64)&off_2C758B0;
  qword_2D03308 = (unsigned int)qword_2D03308 & 0x80000000;
  qword_2D03348 = 0x100000000LL;
  qword_2D03318 = 0;
  qword_2D03320 = 0;
  qword_2D03328 = 0;
  qword_2D03330 = 0;
  qword_2D03338 = 0;
  qword_2D03358 = (__int64)&unk_2D03370;
  qword_2D03360 = 1;
  dword_2D03368 = 0;
  byte_2D0336C = 1;
  v7 = sub_2210FF0("The number of predecessors to search for a stronger condition to use to thread over a weaker condition");
  v8 = (unsigned int)qword_2D03348;
  v9 = (unsigned int)qword_2D03348 + 1LL;
  if ( v9 > HIDWORD(qword_2D03348) )
  {
    v24 = v7;
    sub_2237220((char *)&unk_2D03350 - 16, &unk_2D03350, v9, 8);
    v8 = (unsigned int)qword_2D03348;
    v7 = v24;
  }
  v10 = _mm_load_si128(&v23);
  *(_QWORD *)(qword_2D03340 + 8 * v8) = v7;
  qword_2D03380 = (__int64)off_2C712D0;
  qword_2D03300 = (__int64)off_2C75710;
  xmmword_2D033A8 = (__int128)v10;
  qword_2D03390 = (__int64)off_2BEAB98;
  LODWORD(qword_2D03348) = qword_2D03348 + 1;
  dword_2D03378 = 0;
  dword_2D03388 = 0;
  byte_2D0338C = 0;
  sub_2217250(&qword_2D03300, "jump-threading-implication-search-threshold", 43);
  qword_2D03328 = v6;
  qword_2D03320 = (__int64)"The number of predecessors to search for a stronger condition to use to thread over a weaker condition";
  dword_2D03378 = 3;
  byte_2D0338C = 1;
  dword_2D03388 = 3;
  BYTE2(qword_2D03308) = BYTE2(qword_2D03308) & 0x9F | 0x20;
  sub_2218140(&qword_2D03300);
  __cxa_atexit(sub_1FED260, &qword_2D03300, &off_2B25620);
  v11 = j__strlen("Max PHIs in BB to duplicate for jump threading");
  qword_2D03280 = (__int64)&unk_2D03290;
  v12 = v11;
  qword_2D03250 = 0;
  qword_2D03240 = (__int64)&off_2C758B0;
  qword_2D03248 = (unsigned int)qword_2D03248 & 0x80000000;
  qword_2D03288 = 0x100000000LL;
  qword_2D03258 = 0;
  qword_2D03260 = 0;
  qword_2D03268 = 0;
  qword_2D03270 = 0;
  qword_2D03278 = 0;
  qword_2D03298 = (__int64)&unk_2D032B0;
  qword_2D032A0 = 1;
  dword_2D032A8 = 0;
  byte_2D032AC = 1;
  v13 = sub_2210FF0("Max PHIs in BB to duplicate for jump threading");
  v14 = (unsigned int)qword_2D03288;
  v15 = (unsigned int)qword_2D03288 + 1LL;
  if ( v15 > HIDWORD(qword_2D03288) )
  {
    v24 = v13;
    sub_2237220((char *)&unk_2D03290 - 16, &unk_2D03290, v15, 8);
    v14 = (unsigned int)qword_2D03288;
    v13 = v24;
  }
  v16 = _mm_load_si128(&v23);
  *(_QWORD *)(qword_2D03280 + 8 * v14) = v13;
  qword_2D032C0 = (__int64)off_2C712D0;
  qword_2D03240 = (__int64)off_2C75710;
  xmmword_2D032E8 = (__int128)v16;
  qword_2D032D0 = (__int64)off_2BEAB98;
  LODWORD(qword_2D03288) = qword_2D03288 + 1;
  dword_2D032B8 = 0;
  dword_2D032C8 = 0;
  byte_2D032CC = 0;
  sub_2217250(&qword_2D03240, "jump-threading-phi-threshold", 28);
  qword_2D03268 = v12;
  qword_2D03260 = (__int64)"Max PHIs in BB to duplicate for jump threading";
  dword_2D032B8 = 76;
  byte_2D032CC = 1;
  dword_2D032C8 = 76;
  BYTE2(qword_2D03248) = BYTE2(qword_2D03248) & 0x9F | 0x20;
  sub_2218140(&qword_2D03240);
  __cxa_atexit(sub_1FED260, &qword_2D03240, &off_2B25620);
  v17 = j__strlen("Allow JumpThreading to thread across loop headers, for testing");
  byte_2D031EC = 1;
  qword_2D03190 = 0;
  v18 = v17;
  qword_2D03180 = (__int64)&off_2C758B0;
  qword_2D03188 = (unsigned int)qword_2D03188 & 0x80000000;
  qword_2D031C8 = 0x100000000LL;
  qword_2D03198 = 0;
  qword_2D031A0 = 0;
  qword_2D031A8 = 0;
  qword_2D031B0 = 0;
  qword_2D031B8 = 0;
  qword_2D031C0 = (__int64)&unk_2D031D0;
  qword_2D031D8 = (__int64)&unk_2D031F0;
  qword_2D031E0 = 1;
  dword_2D031E8 = 0;
  v19 = sub_2210FF0("Allow JumpThreading to thread across loop headers, for testing");
  v20 = (unsigned int)qword_2D031C8;
  v21 = (unsigned int)qword_2D031C8 + 1LL;
  if ( v21 > HIDWORD(qword_2D031C8) )
  {
    v23.m128i_i64[0] = v19;
    sub_2237220((char *)&unk_2D031D0 - 16, &unk_2D031D0, v21, 8);
    v20 = (unsigned int)qword_2D031C8;
    v19 = v23.m128i_i64[0];
  }
  *(_QWORD *)(qword_2D031C0 + 8 * v20) = v19;
  word_2D03208 = 0;
  xmmword_2D03228 = (__int128)_mm_loadh_ps((const double *)off_2C78368);
  LODWORD(qword_2D031C8) = qword_2D031C8 + 1;
  qword_2D03200 = (__int64)off_2C714E8;
  byte_2D031F8 = 0;
  qword_2D03180 = (__int64)off_2C75848;
  qword_2D03210 = (__int64)off_2BEAB08;
  sub_2217250(&qword_2D03180, "jump-threading-across-loop-headers", 34);
  qword_2D031A0 = (__int64)"Allow JumpThreading to thread across loop headers, for testing";
  qword_2D031A8 = v18;
  word_2D03208 = 256;
  byte_2D031F8 = 0;
  BYTE2(qword_2D03188) = BYTE2(qword_2D03188) & 0x9F | 0x20;
  sub_2218140(&qword_2D03180);
  return __cxa_atexit(sub_200E190, &qword_2D03180, &off_2B25620);
}
