int sub_34D060()
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
  qword_2D0A390 = 0;
  v1 = v0;
  qword_2D0A398 = 0;
  qword_2D0A3A0 = 0;
  qword_2D0A380 = (__int64)&off_2C758B0;
  qword_2D0A388 = (unsigned int)qword_2D0A388 & 0x80000000;
  qword_2D0A3C8 = 0x100000000LL;
  qword_2D0A3A8 = 0;
  qword_2D0A3B0 = 0;
  qword_2D0A3B8 = 0;
  qword_2D0A3C0 = (__int64)&unk_2D0A3D0;
  qword_2D0A3D8 = (__int64)&unk_2D0A3F0;
  qword_2D0A3E0 = 1;
  dword_2D0A3E8 = 0;
  byte_2D0A3EC = 1;
  v2 = sub_2210FF0(
         "Speculative execution is not applied to basic blocks where the cost of the instructions to speculatively execut"
         "e exceeds this limit.");
  v3 = (unsigned int)qword_2D0A3C8;
  v4 = (unsigned int)qword_2D0A3C8 + 1LL;
  if ( v4 > HIDWORD(qword_2D0A3C8) )
  {
    *(_QWORD *)&v17 = v2;
    sub_2237220((char *)&unk_2D0A3D0 - 16, &unk_2D0A3D0, v4, 8);
    v3 = (unsigned int)qword_2D0A3C8;
    v2 = v17;
  }
  *(_QWORD *)(qword_2D0A3C0 + 8 * v3) = v2;
  qword_2D0A400 = (__int64)off_2C712D0;
  qword_2D0A380 = (__int64)off_2C75710;
  xmmword_2D0A428 = (__int128)_mm_loadh_ps((const double *)off_2C784F8);
  v17 = xmmword_2D0A428;
  LODWORD(qword_2D0A3C8) = qword_2D0A3C8 + 1;
  qword_2D0A410 = (__int64)off_2BEAB98;
  dword_2D0A3F8 = 0;
  dword_2D0A408 = 0;
  byte_2D0A40C = 0;
  sub_2217250(&qword_2D0A380, "spec-exec-max-speculation-cost", 30);
  qword_2D0A3A8 = v1;
  dword_2D0A3F8 = 7;
  byte_2D0A40C = 1;
  dword_2D0A408 = 7;
  BYTE2(qword_2D0A388) = BYTE2(qword_2D0A388) & 0x9F | 0x20;
  qword_2D0A3A0 = (__int64)"Speculative execution is not applied to basic blocks where the cost of the instructions to sp"
                           "eculatively execute exceeds this limit.";
  sub_2218140(&qword_2D0A380);
  __cxa_atexit(sub_1FED260, &qword_2D0A380, &off_2B25620);
  v5 = j__strlen(
         "Speculative execution is not applied to basic blocks where the number of instructions that would not be specula"
         "tively executed exceeds this limit.");
  qword_2D0A300 = (__int64)&unk_2D0A310;
  v6 = v5;
  qword_2D0A2D0 = 0;
  qword_2D0A2C0 = (__int64)&off_2C758B0;
  qword_2D0A2C8 = (unsigned int)qword_2D0A2C8 & 0x80000000;
  qword_2D0A308 = 0x100000000LL;
  qword_2D0A2D8 = 0;
  qword_2D0A2E0 = 0;
  qword_2D0A2E8 = 0;
  qword_2D0A2F0 = 0;
  qword_2D0A2F8 = 0;
  qword_2D0A318 = (__int64)&unk_2D0A330;
  qword_2D0A320 = 1;
  dword_2D0A328 = 0;
  byte_2D0A32C = 1;
  v7 = sub_2210FF0(
         "Speculative execution is not applied to basic blocks where the number of instructions that would not be specula"
         "tively executed exceeds this limit.");
  v8 = (unsigned int)qword_2D0A308;
  si128 = _mm_load_si128((const __m128i *)&v17);
  v10 = (unsigned int)qword_2D0A308 + 1LL;
  if ( v10 > HIDWORD(qword_2D0A308) )
  {
    *(_QWORD *)&v17 = v7;
    v18[0] = si128;
    sub_2237220((char *)&unk_2D0A310 - 16, &unk_2D0A310, v10, 8);
    v8 = (unsigned int)qword_2D0A308;
    si128 = _mm_load_si128(v18);
    v7 = v17;
  }
  *(_QWORD *)(qword_2D0A300 + 8 * v8) = v7;
  qword_2D0A340 = (__int64)off_2C712D0;
  qword_2D0A2C0 = (__int64)off_2C75710;
  xmmword_2D0A368 = (__int128)si128;
  qword_2D0A350 = (__int64)off_2BEAB98;
  LODWORD(qword_2D0A308) = qword_2D0A308 + 1;
  dword_2D0A338 = 0;
  dword_2D0A348 = 0;
  byte_2D0A34C = 0;
  sub_2217250(&qword_2D0A2C0, "spec-exec-max-not-hoisted", 25);
  dword_2D0A338 = 5;
  byte_2D0A34C = 1;
  qword_2D0A2E8 = v6;
  dword_2D0A348 = 5;
  BYTE2(qword_2D0A2C8) = BYTE2(qword_2D0A2C8) & 0x9F | 0x20;
  qword_2D0A2E0 = (__int64)"Speculative execution is not applied to basic blocks where the number of instructions that wo"
                           "uld not be speculatively executed exceeds this limit.";
  sub_2218140(&qword_2D0A2C0);
  __cxa_atexit(sub_1FED260, &qword_2D0A2C0, &off_2B25620);
  v11 = j__strlen(
          "Speculative execution is applied only to targets with divergent branches, even if the pass was configured to a"
          "pply only to all targets.");
  byte_2D0A26C = 1;
  qword_2D0A210 = 0;
  v12 = v11;
  qword_2D0A200 = (__int64)&off_2C758B0;
  qword_2D0A208 = (unsigned int)qword_2D0A208 & 0x80000000;
  qword_2D0A248 = 0x100000000LL;
  qword_2D0A218 = 0;
  qword_2D0A220 = 0;
  qword_2D0A228 = 0;
  qword_2D0A230 = 0;
  qword_2D0A238 = 0;
  qword_2D0A240 = (__int64)&unk_2D0A250;
  qword_2D0A258 = (__int64)&unk_2D0A270;
  qword_2D0A260 = 1;
  dword_2D0A268 = 0;
  v13 = sub_2210FF0(
          "Speculative execution is applied only to targets with divergent branches, even if the pass was configured to a"
          "pply only to all targets.");
  v14 = (unsigned int)qword_2D0A248;
  v15 = (unsigned int)qword_2D0A248 + 1LL;
  if ( v15 > HIDWORD(qword_2D0A248) )
  {
    *(_QWORD *)&v17 = v13;
    sub_2237220((char *)&unk_2D0A250 - 16, &unk_2D0A250, v15, 8);
    v14 = (unsigned int)qword_2D0A248;
    v13 = v17;
  }
  *(_QWORD *)(qword_2D0A240 + 8 * v14) = v13;
  word_2D0A288 = 0;
  xmmword_2D0A2A8 = (__int128)_mm_loadh_ps((const double *)off_2C78368);
  LODWORD(qword_2D0A248) = qword_2D0A248 + 1;
  qword_2D0A280 = (__int64)off_2C714E8;
  byte_2D0A278 = 0;
  qword_2D0A200 = (__int64)off_2C75848;
  qword_2D0A290 = (__int64)off_2BEAB08;
  sub_2217250(&qword_2D0A200, "spec-exec-only-if-divergent-target", 34);
  word_2D0A288 = 256;
  qword_2D0A228 = v12;
  byte_2D0A278 = 0;
  BYTE2(qword_2D0A208) = BYTE2(qword_2D0A208) & 0x9F | 0x20;
  qword_2D0A220 = (__int64)"Speculative execution is applied only to targets with divergent branches, even if the pass wa"
                           "s configured to apply only to all targets.";
  sub_2218140(&qword_2D0A200);
  return __cxa_atexit(sub_200E190, &qword_2D0A200, &off_2B25620);
}
