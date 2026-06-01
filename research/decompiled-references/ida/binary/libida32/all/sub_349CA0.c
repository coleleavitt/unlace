int sub_349CA0()
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
  __m128i si128; // xmm0
  unsigned __int64 v10; // rdx
  size_t v11; // rax
  __int64 v12; // rbp
  __int64 v13; // rax
  __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  __int128 v17; // [rsp+0h] [rbp-58h] BYREF
  __m128i v18[4]; // [rsp+10h] [rbp-48h] BYREF

  v0 = j__strlen(
         "Speculative execution is not applied to basic blocks where the cost of the instructions to speculatively execut"
         "e exceeds this limit.");
  qword_2CE0470 = 0;
  v1 = v0;
  qword_2CE0478 = 0;
  qword_2CE0480 = 0;
  qword_2CE0460 = (__int64)&off_2C4B8B0;
  qword_2CE0468 = (unsigned int)qword_2CE0468 & 0x80000000;
  qword_2CE04A8 = 0x100000000LL;
  qword_2CE0488 = 0;
  qword_2CE0490 = 0;
  qword_2CE0498 = 0;
  qword_2CE04A0 = (__int64)&unk_2CE04B0;
  qword_2CE04B8 = (__int64)&unk_2CE04D0;
  qword_2CE04C0 = 1;
  dword_2CE04C8 = 0;
  byte_2CE04CC = 1;
  v2 = sub_21ED2B0(
         "Speculative execution is not applied to basic blocks where the cost of the instructions to speculatively execut"
         "e exceeds this limit.");
  v3 = (unsigned int)qword_2CE04A8;
  v4 = (unsigned int)qword_2CE04A8 + 1LL;
  if ( v4 > HIDWORD(qword_2CE04A8) )
  {
    *(_QWORD *)&v17 = v2;
    sub_22134E0((char *)&unk_2CE04B0 - 16, &unk_2CE04B0, v4, 8);
    v3 = (unsigned int)qword_2CE04A8;
    v2 = v17;
  }
  *(_QWORD *)(qword_2CE04A0 + 8 * v3) = v2;
  qword_2CE04E0 = (__int64)off_2C472D0;
  qword_2CE0460 = (__int64)off_2C4B710;
  xmmword_2CE0508 = (__int128)_mm_loadh_ps((const double *)off_2C4E4F8);
  v17 = xmmword_2CE0508;
  LODWORD(qword_2CE04A8) = qword_2CE04A8 + 1;
  qword_2CE04F0 = (__int64)off_2BC0BF8;
  dword_2CE04D8 = 0;
  dword_2CE04E8 = 0;
  byte_2CE04EC = 0;
  sub_21F3510(&qword_2CE0460, "spec-exec-max-speculation-cost", 30);
  qword_2CE0488 = v1;
  dword_2CE04D8 = 7;
  byte_2CE04EC = 1;
  dword_2CE04E8 = 7;
  BYTE2(qword_2CE0468) = BYTE2(qword_2CE0468) & 0x9F | 0x20;
  qword_2CE0480 = (__int64)"Speculative execution is not applied to basic blocks where the cost of the instructions to sp"
                           "eculatively execute exceeds this limit.";
  sub_21F4400(&qword_2CE0460);
  __cxa_atexit(sub_1FC9520, &qword_2CE0460, &off_2AFC540);
  v5 = j__strlen(
         "Speculative execution is not applied to basic blocks where the number of instructions that would not be specula"
         "tively executed exceeds this limit.");
  qword_2CE03E0 = (__int64)&unk_2CE03F0;
  v6 = v5;
  qword_2CE03B0 = 0;
  qword_2CE03A0 = (__int64)&off_2C4B8B0;
  qword_2CE03A8 = (unsigned int)qword_2CE03A8 & 0x80000000;
  qword_2CE03E8 = 0x100000000LL;
  qword_2CE03B8 = 0;
  qword_2CE03C0 = 0;
  qword_2CE03C8 = 0;
  qword_2CE03D0 = 0;
  qword_2CE03D8 = 0;
  qword_2CE03F8 = (__int64)&unk_2CE0410;
  qword_2CE0400 = 1;
  dword_2CE0408 = 0;
  byte_2CE040C = 1;
  v7 = sub_21ED2B0(
         "Speculative execution is not applied to basic blocks where the number of instructions that would not be specula"
         "tively executed exceeds this limit.");
  v8 = (unsigned int)qword_2CE03E8;
  si128 = _mm_load_si128((const __m128i *)&v17);
  v10 = (unsigned int)qword_2CE03E8 + 1LL;
  if ( v10 > HIDWORD(qword_2CE03E8) )
  {
    *(_QWORD *)&v17 = v7;
    v18[0] = si128;
    sub_22134E0((char *)&unk_2CE03F0 - 16, &unk_2CE03F0, v10, 8);
    v8 = (unsigned int)qword_2CE03E8;
    si128 = _mm_load_si128(v18);
    v7 = v17;
  }
  *(_QWORD *)(qword_2CE03E0 + 8 * v8) = v7;
  qword_2CE0420 = (__int64)off_2C472D0;
  qword_2CE03A0 = (__int64)off_2C4B710;
  xmmword_2CE0448 = (__int128)si128;
  qword_2CE0430 = (__int64)off_2BC0BF8;
  LODWORD(qword_2CE03E8) = qword_2CE03E8 + 1;
  dword_2CE0418 = 0;
  dword_2CE0428 = 0;
  byte_2CE042C = 0;
  sub_21F3510(&qword_2CE03A0, "spec-exec-max-not-hoisted", 25);
  dword_2CE0418 = 5;
  byte_2CE042C = 1;
  qword_2CE03C8 = v6;
  dword_2CE0428 = 5;
  BYTE2(qword_2CE03A8) = BYTE2(qword_2CE03A8) & 0x9F | 0x20;
  qword_2CE03C0 = (__int64)"Speculative execution is not applied to basic blocks where the number of instructions that wo"
                           "uld not be speculatively executed exceeds this limit.";
  sub_21F4400(&qword_2CE03A0);
  __cxa_atexit(sub_1FC9520, &qword_2CE03A0, &off_2AFC540);
  v11 = j__strlen(
          "Speculative execution is applied only to targets with divergent branches, even if the pass was configured to a"
          "pply only to all targets.");
  byte_2CE034C = 1;
  qword_2CE02F0 = 0;
  v12 = v11;
  qword_2CE02E0 = (__int64)&off_2C4B8B0;
  qword_2CE02E8 = (unsigned int)qword_2CE02E8 & 0x80000000;
  qword_2CE0328 = 0x100000000LL;
  qword_2CE02F8 = 0;
  qword_2CE0300 = 0;
  qword_2CE0308 = 0;
  qword_2CE0310 = 0;
  qword_2CE0318 = 0;
  qword_2CE0320 = (__int64)&unk_2CE0330;
  qword_2CE0338 = (__int64)&unk_2CE0350;
  qword_2CE0340 = 1;
  dword_2CE0348 = 0;
  v13 = sub_21ED2B0(
          "Speculative execution is applied only to targets with divergent branches, even if the pass was configured to a"
          "pply only to all targets.");
  v14 = (unsigned int)qword_2CE0328;
  v15 = (unsigned int)qword_2CE0328 + 1LL;
  if ( v15 > HIDWORD(qword_2CE0328) )
  {
    *(_QWORD *)&v17 = v13;
    sub_22134E0((char *)&unk_2CE0330 - 16, &unk_2CE0330, v15, 8);
    v14 = (unsigned int)qword_2CE0328;
    v13 = v17;
  }
  *(_QWORD *)(qword_2CE0320 + 8 * v14) = v13;
  word_2CE0368 = 0;
  xmmword_2CE0388 = (__int128)_mm_loadh_ps((const double *)off_2C4E368);
  LODWORD(qword_2CE0328) = qword_2CE0328 + 1;
  qword_2CE0360 = (__int64)off_2C474E8;
  byte_2CE0358 = 0;
  qword_2CE02E0 = (__int64)off_2C4B848;
  qword_2CE0370 = (__int64)off_2BC0B68;
  sub_21F3510(&qword_2CE02E0, "spec-exec-only-if-divergent-target", 34);
  word_2CE0368 = 256;
  qword_2CE0308 = v12;
  byte_2CE0358 = 0;
  BYTE2(qword_2CE02E8) = BYTE2(qword_2CE02E8) & 0x9F | 0x20;
  qword_2CE0300 = (__int64)"Speculative execution is applied only to targets with divergent branches, even if the pass wa"
                           "s configured to apply only to all targets.";
  sub_21F4400(&qword_2CE02E0);
  return __cxa_atexit(sub_1FEA450, &qword_2CE02E0, &off_2AFC540);
}

