int sub_33D380()
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
  qword_2CD94B0 = 0;
  v1 = v0;
  qword_2CD94B8 = 0;
  qword_2CD94C0 = 0;
  qword_2CD94A0 = (__int64)&off_2C4B8B0;
  qword_2CD94A8 = (unsigned int)qword_2CD94A8 & 0x80000000;
  qword_2CD94E8 = 0x100000000LL;
  qword_2CD94C8 = 0;
  qword_2CD94D0 = 0;
  qword_2CD94D8 = 0;
  qword_2CD94E0 = (__int64)&unk_2CD94F0;
  qword_2CD94F8 = (__int64)&unk_2CD9510;
  qword_2CD9500 = 1;
  dword_2CD9508 = 0;
  byte_2CD950C = 1;
  v2 = sub_21ED2B0("Max block size to duplicate for jump threading");
  v3 = (unsigned int)qword_2CD94E8;
  v4 = (unsigned int)qword_2CD94E8 + 1LL;
  if ( v4 > HIDWORD(qword_2CD94E8) )
  {
    v23.m128i_i64[0] = v2;
    sub_22134E0((char *)&unk_2CD94F0 - 16, &unk_2CD94F0, v4, 8);
    v3 = (unsigned int)qword_2CD94E8;
    v2 = v23.m128i_i64[0];
  }
  *(_QWORD *)(qword_2CD94E0 + 8 * v3) = v2;
  qword_2CD9520 = (__int64)off_2C472D0;
  qword_2CD94A0 = (__int64)off_2C4B710;
  v23 = (__m128i)_mm_loadh_ps((const double *)off_2C4E4F8);
  xmmword_2CD9548 = (__int128)v23;
  qword_2CD9530 = (__int64)off_2BC0BF8;
  LODWORD(qword_2CD94E8) = qword_2CD94E8 + 1;
  dword_2CD9518 = 0;
  dword_2CD9528 = 0;
  byte_2CD952C = 0;
  sub_21F3510(&qword_2CD94A0, "jump-threading-threshold", 24);
  qword_2CD94C8 = v1;
  qword_2CD94C0 = (__int64)"Max block size to duplicate for jump threading";
  dword_2CD9518 = 6;
  byte_2CD952C = 1;
  dword_2CD9528 = 6;
  BYTE2(qword_2CD94A8) = BYTE2(qword_2CD94A8) & 0x9F | 0x20;
  sub_21F4400(&qword_2CD94A0);
  __cxa_atexit(sub_1FC9520, &qword_2CD94A0, &off_2AFC540);
  v5 = j__strlen("The number of predecessors to search for a stronger condition to use to thread over a weaker condition");
  qword_2CD9420 = (__int64)&unk_2CD9430;
  v6 = v5;
  qword_2CD93F0 = 0;
  qword_2CD93E0 = (__int64)&off_2C4B8B0;
  qword_2CD93E8 = (unsigned int)qword_2CD93E8 & 0x80000000;
  qword_2CD9428 = 0x100000000LL;
  qword_2CD93F8 = 0;
  qword_2CD9400 = 0;
  qword_2CD9408 = 0;
  qword_2CD9410 = 0;
  qword_2CD9418 = 0;
  qword_2CD9438 = (__int64)&unk_2CD9450;
  qword_2CD9440 = 1;
  dword_2CD9448 = 0;
  byte_2CD944C = 1;
  v7 = sub_21ED2B0("The number of predecessors to search for a stronger condition to use to thread over a weaker condition");
  v8 = (unsigned int)qword_2CD9428;
  v9 = (unsigned int)qword_2CD9428 + 1LL;
  if ( v9 > HIDWORD(qword_2CD9428) )
  {
    v24 = v7;
    sub_22134E0((char *)&unk_2CD9430 - 16, &unk_2CD9430, v9, 8);
    v8 = (unsigned int)qword_2CD9428;
    v7 = v24;
  }
  v10 = _mm_load_si128(&v23);
  *(_QWORD *)(qword_2CD9420 + 8 * v8) = v7;
  qword_2CD9460 = (__int64)off_2C472D0;
  qword_2CD93E0 = (__int64)off_2C4B710;
  xmmword_2CD9488 = (__int128)v10;
  qword_2CD9470 = (__int64)off_2BC0BF8;
  LODWORD(qword_2CD9428) = qword_2CD9428 + 1;
  dword_2CD9458 = 0;
  dword_2CD9468 = 0;
  byte_2CD946C = 0;
  sub_21F3510(&qword_2CD93E0, "jump-threading-implication-search-threshold", 43);
  qword_2CD9408 = v6;
  qword_2CD9400 = (__int64)"The number of predecessors to search for a stronger condition to use to thread over a weaker condition";
  dword_2CD9458 = 3;
  byte_2CD946C = 1;
  dword_2CD9468 = 3;
  BYTE2(qword_2CD93E8) = BYTE2(qword_2CD93E8) & 0x9F | 0x20;
  sub_21F4400(&qword_2CD93E0);
  __cxa_atexit(sub_1FC9520, &qword_2CD93E0, &off_2AFC540);
  v11 = j__strlen("Max PHIs in BB to duplicate for jump threading");
  qword_2CD9360 = (__int64)&unk_2CD9370;
  v12 = v11;
  qword_2CD9330 = 0;
  qword_2CD9320 = (__int64)&off_2C4B8B0;
  qword_2CD9328 = (unsigned int)qword_2CD9328 & 0x80000000;
  qword_2CD9368 = 0x100000000LL;
  qword_2CD9338 = 0;
  qword_2CD9340 = 0;
  qword_2CD9348 = 0;
  qword_2CD9350 = 0;
  qword_2CD9358 = 0;
  qword_2CD9378 = (__int64)&unk_2CD9390;
  qword_2CD9380 = 1;
  dword_2CD9388 = 0;
  byte_2CD938C = 1;
  v13 = sub_21ED2B0("Max PHIs in BB to duplicate for jump threading");
  v14 = (unsigned int)qword_2CD9368;
  v15 = (unsigned int)qword_2CD9368 + 1LL;
  if ( v15 > HIDWORD(qword_2CD9368) )
  {
    v24 = v13;
    sub_22134E0((char *)&unk_2CD9370 - 16, &unk_2CD9370, v15, 8);
    v14 = (unsigned int)qword_2CD9368;
    v13 = v24;
  }
  v16 = _mm_load_si128(&v23);
  *(_QWORD *)(qword_2CD9360 + 8 * v14) = v13;
  qword_2CD93A0 = (__int64)off_2C472D0;
  qword_2CD9320 = (__int64)off_2C4B710;
  xmmword_2CD93C8 = (__int128)v16;
  qword_2CD93B0 = (__int64)off_2BC0BF8;
  LODWORD(qword_2CD9368) = qword_2CD9368 + 1;
  dword_2CD9398 = 0;
  dword_2CD93A8 = 0;
  byte_2CD93AC = 0;
  sub_21F3510(&qword_2CD9320, "jump-threading-phi-threshold", 28);
  qword_2CD9348 = v12;
  qword_2CD9340 = (__int64)"Max PHIs in BB to duplicate for jump threading";
  dword_2CD9398 = 76;
  byte_2CD93AC = 1;
  dword_2CD93A8 = 76;
  BYTE2(qword_2CD9328) = BYTE2(qword_2CD9328) & 0x9F | 0x20;
  sub_21F4400(&qword_2CD9320);
  __cxa_atexit(sub_1FC9520, &qword_2CD9320, &off_2AFC540);
  v17 = j__strlen("Allow JumpThreading to thread across loop headers, for testing");
  byte_2CD92CC = 1;
  qword_2CD9270 = 0;
  v18 = v17;
  qword_2CD9260 = (__int64)&off_2C4B8B0;
  qword_2CD9268 = (unsigned int)qword_2CD9268 & 0x80000000;
  qword_2CD92A8 = 0x100000000LL;
  qword_2CD9278 = 0;
  qword_2CD9280 = 0;
  qword_2CD9288 = 0;
  qword_2CD9290 = 0;
  qword_2CD9298 = 0;
  qword_2CD92A0 = (__int64)&unk_2CD92B0;
  qword_2CD92B8 = (__int64)&unk_2CD92D0;
  qword_2CD92C0 = 1;
  dword_2CD92C8 = 0;
  v19 = sub_21ED2B0("Allow JumpThreading to thread across loop headers, for testing");
  v20 = (unsigned int)qword_2CD92A8;
  v21 = (unsigned int)qword_2CD92A8 + 1LL;
  if ( v21 > HIDWORD(qword_2CD92A8) )
  {
    v23.m128i_i64[0] = v19;
    sub_22134E0((char *)&unk_2CD92B0 - 16, &unk_2CD92B0, v21, 8);
    v20 = (unsigned int)qword_2CD92A8;
    v19 = v23.m128i_i64[0];
  }
  *(_QWORD *)(qword_2CD92A0 + 8 * v20) = v19;
  word_2CD92E8 = 0;
  xmmword_2CD9308 = (__int128)_mm_loadh_ps((const double *)off_2C4E368);
  LODWORD(qword_2CD92A8) = qword_2CD92A8 + 1;
  qword_2CD92E0 = (__int64)off_2C474E8;
  byte_2CD92D8 = 0;
  qword_2CD9260 = (__int64)off_2C4B848;
  qword_2CD92F0 = (__int64)off_2BC0B68;
  sub_21F3510(&qword_2CD9260, "jump-threading-across-loop-headers", 34);
  qword_2CD9280 = (__int64)"Allow JumpThreading to thread across loop headers, for testing";
  qword_2CD9288 = v18;
  word_2CD92E8 = 256;
  byte_2CD92D8 = 0;
  BYTE2(qword_2CD9268) = BYTE2(qword_2CD9268) & 0x9F | 0x20;
  sub_21F4400(&qword_2CD9260);
  return __cxa_atexit(sub_1FEA450, &qword_2CD9260, &off_2AFC540);
}

