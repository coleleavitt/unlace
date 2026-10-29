int sub_3442C0()
{
  size_t v0; // rax
  __int64 v1; // r12
  __int64 v2; // rax
  __int64 v3; // rcx
  unsigned __int64 v4; // rdx
  size_t v5; // rax
  __int64 v6; // r13
  __int64 v7; // rax
  __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  size_t v10; // rax
  __int64 v11; // r13
  __int64 v12; // rax
  __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  __m128i v15; // xmm2
  size_t v16; // rax
  __int64 v17; // r13
  __int64 v18; // rax
  __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  __m128i v21; // xmm3
  __m128i v23; // [rsp+0h] [rbp-58h] BYREF
  __int64 v24; // [rsp+18h] [rbp-40h]

  v0 = j__strlen("Limit on the cost of instructions that can be repeated due to loop flattening");
  qword_2D05550 = 0;
  v1 = v0;
  qword_2D05558 = 0;
  qword_2D05560 = 0;
  qword_2D05540 = (__int64)&off_2C758B0;
  qword_2D05548 = (unsigned int)qword_2D05548 & 0x80000000;
  qword_2D05588 = 0x100000000LL;
  qword_2D05568 = 0;
  qword_2D05570 = 0;
  qword_2D05578 = 0;
  qword_2D05580 = (__int64)&unk_2D05590;
  qword_2D05598 = (__int64)&unk_2D055B0;
  qword_2D055A0 = 1;
  dword_2D055A8 = 0;
  byte_2D055AC = 1;
  v2 = sub_2210FF0("Limit on the cost of instructions that can be repeated due to loop flattening");
  v3 = (unsigned int)qword_2D05588;
  v4 = (unsigned int)qword_2D05588 + 1LL;
  if ( v4 > HIDWORD(qword_2D05588) )
  {
    v23.m128i_i64[0] = v2;
    sub_2237220((char *)&unk_2D05590 - 16, &unk_2D05590, v4, 8);
    v3 = (unsigned int)qword_2D05588;
    v2 = v23.m128i_i64[0];
  }
  *(_QWORD *)(qword_2D05580 + 8 * v3) = v2;
  xmmword_2D055E8 = (__int128)_mm_loadh_ps((const double *)off_2C784F8);
  LODWORD(qword_2D05588) = qword_2D05588 + 1;
  qword_2D055C0 = (__int64)off_2C712D0;
  dword_2D055B8 = 0;
  byte_2D055CC = 0;
  qword_2D05540 = (__int64)off_2C75710;
  dword_2D055C8 = 0;
  qword_2D055D0 = (__int64)off_2BEAB98;
  sub_2217250(&qword_2D05540, "loop-flatten-cost-threshold", 27);
  dword_2D055B8 = 2;
  byte_2D055CC = 1;
  qword_2D05568 = v1;
  dword_2D055C8 = 2;
  BYTE2(qword_2D05548) = BYTE2(qword_2D05548) & 0x9F | 0x20;
  qword_2D05560 = (__int64)"Limit on the cost of instructions that can be repeated due to loop flattening";
  sub_2218140(&qword_2D05540);
  __cxa_atexit(sub_1FED260, &qword_2D05540, &off_2B25620);
  v5 = j__strlen("Assume that the product of the two iteration trip counts will never overflow");
  qword_2D054C0 = (__int64)&unk_2D054D0;
  v6 = v5;
  qword_2D05490 = 0;
  qword_2D05480 = (__int64)&off_2C758B0;
  qword_2D05488 = (unsigned int)qword_2D05488 & 0x80000000;
  qword_2D054C8 = 0x100000000LL;
  qword_2D05498 = 0;
  qword_2D054A0 = 0;
  qword_2D054A8 = 0;
  qword_2D054B0 = 0;
  qword_2D054B8 = 0;
  qword_2D054D8 = (__int64)&unk_2D054F0;
  qword_2D054E0 = 1;
  dword_2D054E8 = 0;
  byte_2D054EC = 1;
  v7 = sub_2210FF0("Assume that the product of the two iteration trip counts will never overflow");
  v8 = (unsigned int)qword_2D054C8;
  v9 = (unsigned int)qword_2D054C8 + 1LL;
  if ( v9 > HIDWORD(qword_2D054C8) )
  {
    v23.m128i_i64[0] = v7;
    sub_2237220((char *)&unk_2D054D0 - 16, &unk_2D054D0, v9, 8);
    v8 = (unsigned int)qword_2D054C8;
    v7 = v23.m128i_i64[0];
  }
  *(_QWORD *)(qword_2D054C0 + 8 * v8) = v7;
  qword_2D05500 = (__int64)off_2C714E8;
  word_2D05508 = 0;
  qword_2D05480 = (__int64)off_2C75848;
  v23 = (__m128i)_mm_loadh_ps((const double *)off_2C78368);
  xmmword_2D05528 = (__int128)v23;
  qword_2D05510 = (__int64)off_2BEAB08;
  LODWORD(qword_2D054C8) = qword_2D054C8 + 1;
  byte_2D054F8 = 0;
  sub_2217250(&qword_2D05480, "loop-flatten-assume-no-overflow", 31);
  word_2D05508 = 256;
  qword_2D054A8 = v6;
  byte_2D054F8 = 0;
  BYTE2(qword_2D05488) = BYTE2(qword_2D05488) & 0x9F | 0x20;
  qword_2D054A0 = (__int64)"Assume that the product of the two iteration trip counts will never overflow";
  sub_2218140(&qword_2D05480);
  __cxa_atexit(sub_200E190, &qword_2D05480, &off_2B25620);
  v10 = j__strlen("Widen the loop induction variables, if possible, so overflow checks won't reject flattening");
  qword_2D05400 = (__int64)&unk_2D05410;
  v11 = v10;
  qword_2D053D0 = 0;
  qword_2D053C0 = (__int64)&off_2C758B0;
  qword_2D053C8 = (unsigned int)qword_2D053C8 & 0x80000000;
  qword_2D05408 = 0x100000000LL;
  qword_2D053D8 = 0;
  qword_2D053E0 = 0;
  qword_2D053E8 = 0;
  qword_2D053F0 = 0;
  qword_2D053F8 = 0;
  qword_2D05418 = (__int64)&unk_2D05430;
  qword_2D05420 = 1;
  dword_2D05428 = 0;
  byte_2D0542C = 1;
  v12 = sub_2210FF0("Widen the loop induction variables, if possible, so overflow checks won't reject flattening");
  v13 = (unsigned int)qword_2D05408;
  v14 = (unsigned int)qword_2D05408 + 1LL;
  if ( v14 > HIDWORD(qword_2D05408) )
  {
    v24 = v12;
    sub_2237220((char *)&unk_2D05410 - 16, &unk_2D05410, v14, 8);
    v13 = (unsigned int)qword_2D05408;
    v12 = v24;
  }
  v15 = _mm_load_si128(&v23);
  *(_QWORD *)(qword_2D05400 + 8 * v13) = v12;
  qword_2D05440 = (__int64)off_2C714E8;
  qword_2D053C0 = (__int64)off_2C75848;
  word_2D05448 = 0;
  xmmword_2D05468 = (__int128)v15;
  qword_2D05450 = (__int64)off_2BEAB08;
  LODWORD(qword_2D05408) = qword_2D05408 + 1;
  byte_2D05438 = 0;
  sub_2217250(&qword_2D053C0, "loop-flatten-widen-iv", 21);
  word_2D05448 = 257;
  qword_2D053E8 = v11;
  byte_2D05438 = 1;
  BYTE2(qword_2D053C8) = BYTE2(qword_2D053C8) & 0x9F | 0x20;
  qword_2D053E0 = (__int64)"Widen the loop induction variables, if possible, so overflow checks won't reject flattening";
  sub_2218140(&qword_2D053C0);
  __cxa_atexit(sub_200E190, &qword_2D053C0, &off_2B25620);
  v16 = j__strlen("Version loops if flattened loop could overflow");
  byte_2D0536C = 1;
  qword_2D05310 = 0;
  v17 = v16;
  qword_2D05300 = (__int64)&off_2C758B0;
  qword_2D05308 = (unsigned int)qword_2D05308 & 0x80000000;
  qword_2D05348 = 0x100000000LL;
  qword_2D05318 = 0;
  qword_2D05320 = 0;
  qword_2D05328 = 0;
  qword_2D05330 = 0;
  qword_2D05338 = 0;
  qword_2D05340 = (__int64)&unk_2D05350;
  qword_2D05358 = (__int64)&unk_2D05370;
  qword_2D05360 = 1;
  dword_2D05368 = 0;
  v18 = sub_2210FF0("Version loops if flattened loop could overflow");
  v19 = (unsigned int)qword_2D05348;
  v20 = (unsigned int)qword_2D05348 + 1LL;
  if ( v20 > HIDWORD(qword_2D05348) )
  {
    v24 = v18;
    sub_2237220((char *)&unk_2D05350 - 16, &unk_2D05350, v20, 8);
    v19 = (unsigned int)qword_2D05348;
    v18 = v24;
  }
  v21 = _mm_load_si128(&v23);
  *(_QWORD *)(qword_2D05340 + 8 * v19) = v18;
  word_2D05388 = 0;
  qword_2D05380 = (__int64)off_2C714E8;
  qword_2D05300 = (__int64)off_2C75848;
  qword_2D05390 = (__int64)off_2BEAB08;
  xmmword_2D053A8 = (__int128)v21;
  LODWORD(qword_2D05348) = qword_2D05348 + 1;
  byte_2D05378 = 0;
  sub_2217250(&qword_2D05300, "loop-flatten-version-loops", 26);
  word_2D05388 = 257;
  qword_2D05328 = v17;
  byte_2D05378 = 1;
  BYTE2(qword_2D05308) = BYTE2(qword_2D05308) & 0x9F | 0x20;
  qword_2D05320 = (__int64)"Version loops if flattened loop could overflow";
  sub_2218140(&qword_2D05300);
  return __cxa_atexit(sub_200E190, &qword_2D05300, &off_2B25620);
}
