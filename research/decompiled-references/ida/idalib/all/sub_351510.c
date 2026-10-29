int sub_351510()
{
  size_t v0; // rax
  __int64 v1; // r13
  __int64 v2; // rax
  __int64 v3; // rcx
  unsigned __int64 v4; // rdx
  size_t v5; // rax
  size_t v6; // rax
  __int64 v7; // r13
  __int64 v8; // rax
  __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  __m128i v11; // xmm2
  size_t v12; // rax
  size_t v13; // rax
  __int64 v14; // r13
  __int64 v15; // rax
  __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  __m128i v18; // xmm3
  size_t v19; // rax
  size_t v20; // rax
  __int64 v21; // rbp
  __int64 v22; // rax
  __int64 v23; // rcx
  unsigned __int64 v24; // rdx
  size_t v25; // rax
  __m128i v27; // [rsp+0h] [rbp-58h] BYREF
  __int64 v28; // [rsp+18h] [rbp-40h]

  v0 = j__strlen("Convert noalias attributes to metadata during inlining.");
  qword_2D0D570 = 0;
  v1 = v0;
  qword_2D0D578 = 0;
  qword_2D0D580 = 0;
  qword_2D0D560 = (__int64)&off_2C758B0;
  qword_2D0D568 = (unsigned int)qword_2D0D568 & 0x80000000;
  qword_2D0D5A8 = 0x100000000LL;
  qword_2D0D588 = 0;
  qword_2D0D590 = 0;
  qword_2D0D598 = 0;
  qword_2D0D5A0 = (__int64)&unk_2D0D5B0;
  qword_2D0D5B8 = (__int64)&unk_2D0D5D0;
  qword_2D0D5C0 = 1;
  dword_2D0D5C8 = 0;
  byte_2D0D5CC = 1;
  v2 = sub_2210FF0("Convert noalias attributes to metadata during inlining.");
  v3 = (unsigned int)qword_2D0D5A8;
  v4 = (unsigned int)qword_2D0D5A8 + 1LL;
  if ( v4 > HIDWORD(qword_2D0D5A8) )
  {
    v27.m128i_i64[0] = v2;
    sub_2237220((char *)&unk_2D0D5B0 - 16, &unk_2D0D5B0, v4, 8);
    v3 = (unsigned int)qword_2D0D5A8;
    v2 = v27.m128i_i64[0];
  }
  *(_QWORD *)(qword_2D0D5A0 + 8 * v3) = v2;
  qword_2D0D5E0 = (__int64)off_2C714E8;
  word_2D0D5E8 = 0;
  qword_2D0D560 = (__int64)off_2C75848;
  v27 = (__m128i)_mm_loadh_ps((const double *)off_2C78368);
  xmmword_2D0D608 = (__int128)v27;
  LODWORD(qword_2D0D5A8) = qword_2D0D5A8 + 1;
  byte_2D0D5D8 = 0;
  qword_2D0D5F0 = (__int64)off_2BEAB08;
  v5 = j__strlen("enable-noalias-to-md-conversion");
  sub_2217250(&qword_2D0D560, "enable-noalias-to-md-conversion", v5);
  word_2D0D5E8 = 257;
  qword_2D0D588 = v1;
  byte_2D0D5D8 = 1;
  BYTE2(qword_2D0D568) = BYTE2(qword_2D0D568) & 0x9F | 0x20;
  qword_2D0D580 = (__int64)"Convert noalias attributes to metadata during inlining.";
  sub_2218140(&qword_2D0D560);
  __cxa_atexit(sub_200E190, &qword_2D0D560, &off_2B25620);
  v6 = j__strlen("Use the llvm.experimental.noalias.scope.decl intrinsic during inlining.");
  qword_2D0D4E0 = (__int64)&unk_2D0D4F0;
  v7 = v6;
  qword_2D0D4B0 = 0;
  qword_2D0D4A0 = (__int64)&off_2C758B0;
  qword_2D0D4A8 = (unsigned int)qword_2D0D4A8 & 0x80000000;
  qword_2D0D4E8 = 0x100000000LL;
  qword_2D0D4B8 = 0;
  qword_2D0D4C0 = 0;
  qword_2D0D4C8 = 0;
  qword_2D0D4D0 = 0;
  qword_2D0D4D8 = 0;
  qword_2D0D4F8 = (__int64)&unk_2D0D510;
  qword_2D0D500 = 1;
  dword_2D0D508 = 0;
  byte_2D0D50C = 1;
  v8 = sub_2210FF0("Use the llvm.experimental.noalias.scope.decl intrinsic during inlining.");
  v9 = (unsigned int)qword_2D0D4E8;
  v10 = (unsigned int)qword_2D0D4E8 + 1LL;
  if ( v10 > HIDWORD(qword_2D0D4E8) )
  {
    v28 = v8;
    sub_2237220((char *)&unk_2D0D4F0 - 16, &unk_2D0D4F0, v10, 8);
    v9 = (unsigned int)qword_2D0D4E8;
    v8 = v28;
  }
  v11 = _mm_load_si128(&v27);
  *(_QWORD *)(qword_2D0D4E0 + 8 * v9) = v8;
  qword_2D0D520 = (__int64)off_2C714E8;
  qword_2D0D4A0 = (__int64)off_2C75848;
  word_2D0D528 = 0;
  xmmword_2D0D548 = (__int128)v11;
  LODWORD(qword_2D0D4E8) = qword_2D0D4E8 + 1;
  byte_2D0D518 = 0;
  qword_2D0D530 = (__int64)off_2BEAB08;
  v12 = j__strlen("use-noalias-intrinsic-during-inlining");
  sub_2217250(&qword_2D0D4A0, "use-noalias-intrinsic-during-inlining", v12);
  word_2D0D528 = 257;
  qword_2D0D4C8 = v7;
  byte_2D0D518 = 1;
  BYTE2(qword_2D0D4A8) = BYTE2(qword_2D0D4A8) & 0x9F | 0x20;
  qword_2D0D4C0 = (__int64)"Use the llvm.experimental.noalias.scope.decl intrinsic during inlining.";
  sub_2218140(&qword_2D0D4A0);
  __cxa_atexit(sub_200E190, &qword_2D0D4A0, &off_2B25620);
  v13 = j__strlen("Convert align attributes to assumptions during inlining.");
  qword_2D0D420 = (__int64)&unk_2D0D430;
  v14 = v13;
  qword_2D0D3F0 = 0;
  qword_2D0D3E0 = (__int64)&off_2C758B0;
  qword_2D0D3E8 = (unsigned int)qword_2D0D3E8 & 0x80000000;
  qword_2D0D428 = 0x100000000LL;
  qword_2D0D3F8 = 0;
  qword_2D0D400 = 0;
  qword_2D0D408 = 0;
  qword_2D0D410 = 0;
  qword_2D0D418 = 0;
  qword_2D0D438 = (__int64)&unk_2D0D450;
  qword_2D0D440 = 1;
  dword_2D0D448 = 0;
  byte_2D0D44C = 1;
  v15 = sub_2210FF0("Convert align attributes to assumptions during inlining.");
  v16 = (unsigned int)qword_2D0D428;
  v17 = (unsigned int)qword_2D0D428 + 1LL;
  if ( v17 > HIDWORD(qword_2D0D428) )
  {
    v28 = v15;
    sub_2237220((char *)&unk_2D0D430 - 16, &unk_2D0D430, v17, 8);
    v16 = (unsigned int)qword_2D0D428;
    v15 = v28;
  }
  v18 = _mm_load_si128(&v27);
  *(_QWORD *)(qword_2D0D420 + 8 * v16) = v15;
  word_2D0D468 = 0;
  qword_2D0D460 = (__int64)off_2C714E8;
  qword_2D0D3E0 = (__int64)off_2C75848;
  xmmword_2D0D488 = (__int128)v18;
  LODWORD(qword_2D0D428) = qword_2D0D428 + 1;
  byte_2D0D458 = 0;
  qword_2D0D470 = (__int64)off_2BEAB08;
  v19 = j__strlen("preserve-alignment-assumptions-during-inlining");
  sub_2217250(&qword_2D0D3E0, "preserve-alignment-assumptions-during-inlining", v19);
  word_2D0D468 = 256;
  byte_2D0D458 = 0;
  qword_2D0D408 = v14;
  BYTE2(qword_2D0D3E8) = BYTE2(qword_2D0D3E8) & 0x9F | 0x20;
  qword_2D0D400 = (__int64)"Convert align attributes to assumptions during inlining.";
  sub_2218140(&qword_2D0D3E0);
  __cxa_atexit(sub_200E190, &qword_2D0D3E0, &off_2B25620);
  v20 = j__strlen("the maximum number of instructions analyzed for may throw during attribute inference in inlined body");
  byte_2D0D38C = 1;
  qword_2D0D330 = 0;
  v21 = v20;
  qword_2D0D320 = (__int64)&off_2C758B0;
  qword_2D0D328 = (unsigned int)qword_2D0D328 & 0x80000000;
  qword_2D0D368 = 0x100000000LL;
  qword_2D0D338 = 0;
  qword_2D0D340 = 0;
  qword_2D0D348 = 0;
  qword_2D0D350 = 0;
  qword_2D0D358 = 0;
  qword_2D0D360 = (__int64)&unk_2D0D370;
  qword_2D0D378 = (__int64)&unk_2D0D390;
  qword_2D0D380 = 1;
  dword_2D0D388 = 0;
  v22 = sub_2210FF0("the maximum number of instructions analyzed for may throw during attribute inference in inlined body");
  v23 = (unsigned int)qword_2D0D368;
  v24 = (unsigned int)qword_2D0D368 + 1LL;
  if ( v24 > HIDWORD(qword_2D0D368) )
  {
    v27.m128i_i64[0] = v22;
    sub_2237220((char *)&unk_2D0D370 - 16, &unk_2D0D370, v24, 8);
    v23 = (unsigned int)qword_2D0D368;
    v22 = v27.m128i_i64[0];
  }
  *(_QWORD *)(qword_2D0D360 + 8 * v23) = v22;
  xmmword_2D0D3C8 = (__int128)_mm_loadh_ps((const double *)off_2C784F8);
  LODWORD(qword_2D0D368) = qword_2D0D368 + 1;
  qword_2D0D3A0 = (__int64)off_2C712D0;
  dword_2D0D398 = 0;
  byte_2D0D3AC = 0;
  qword_2D0D320 = (__int64)off_2C75710;
  dword_2D0D3A8 = 0;
  qword_2D0D3B0 = (__int64)off_2BEAB98;
  v25 = j__strlen("max-inst-checked-for-throw-during-inlining");
  sub_2217250(&qword_2D0D320, "max-inst-checked-for-throw-during-inlining", v25);
  qword_2D0D348 = v21;
  dword_2D0D398 = 4;
  byte_2D0D3AC = 1;
  dword_2D0D3A8 = 4;
  BYTE2(qword_2D0D328) = BYTE2(qword_2D0D328) & 0x9F | 0x20;
  qword_2D0D340 = (__int64)"the maximum number of instructions analyzed for may throw during attribute inference in inlined body";
  sub_2218140(&qword_2D0D320);
  return __cxa_atexit(sub_1FED260, &qword_2D0D320, &off_2B25620);
}
