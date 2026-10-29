int sub_350380()
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
  __int128 v12; // [rsp+0h] [rbp-48h] BYREF
  __m128i v13[3]; // [rsp+10h] [rbp-38h] BYREF

  v0 = j__strlen("Allow runtime unrolling for loops with multiple exits, when epilog is generated");
  qword_2CE4310 = 0;
  v1 = v0;
  qword_2CE4318 = 0;
  qword_2CE4320 = 0;
  qword_2CE4300 = (__int64)&off_2C4B8B0;
  qword_2CE4308 = (unsigned int)qword_2CE4308 & 0x80000000;
  qword_2CE4348 = 0x100000000LL;
  qword_2CE4328 = 0;
  qword_2CE4330 = 0;
  qword_2CE4338 = 0;
  qword_2CE4340 = (__int64)&unk_2CE4350;
  qword_2CE4358 = (__int64)&unk_2CE4370;
  qword_2CE4360 = 1;
  dword_2CE4368 = 0;
  byte_2CE436C = 1;
  v2 = sub_21ED2B0("Allow runtime unrolling for loops with multiple exits, when epilog is generated");
  v3 = (unsigned int)qword_2CE4348;
  v4 = (unsigned int)qword_2CE4348 + 1LL;
  if ( v4 > HIDWORD(qword_2CE4348) )
  {
    *(_QWORD *)&v12 = v2;
    sub_22134E0((char *)&unk_2CE4350 - 16, &unk_2CE4350, v4, 8);
    v3 = (unsigned int)qword_2CE4348;
    v2 = v12;
  }
  *(_QWORD *)(qword_2CE4340 + 8 * v3) = v2;
  qword_2CE4380 = (__int64)off_2C474E8;
  qword_2CE4300 = (__int64)off_2C4B848;
  word_2CE4388 = 0;
  xmmword_2CE43A8 = (__int128)_mm_loadh_ps((const double *)off_2C4E368);
  v12 = xmmword_2CE43A8;
  LODWORD(qword_2CE4348) = qword_2CE4348 + 1;
  qword_2CE4390 = (__int64)off_2BC0B68;
  byte_2CE4378 = 0;
  sub_21F3510(&qword_2CE4300, "unroll-runtime-multi-exit", 25);
  word_2CE4388 = 256;
  qword_2CE4328 = v1;
  byte_2CE4378 = 0;
  BYTE2(qword_2CE4308) = BYTE2(qword_2CE4308) & 0x9F | 0x20;
  qword_2CE4320 = (__int64)"Allow runtime unrolling for loops with multiple exits, when epilog is generated";
  sub_21F4400(&qword_2CE4300);
  __cxa_atexit(sub_1FEA450, &qword_2CE4300, &off_2AFC540);
  v5 = j__strlen("Assume the non latch exit block to be predictable");
  byte_2CE42AC = 1;
  qword_2CE4250 = 0;
  v6 = v5;
  qword_2CE4240 = (__int64)&off_2C4B8B0;
  qword_2CE4248 = (unsigned int)qword_2CE4248 & 0x80000000;
  qword_2CE4288 = 0x100000000LL;
  qword_2CE4258 = 0;
  qword_2CE4260 = 0;
  qword_2CE4268 = 0;
  qword_2CE4270 = 0;
  qword_2CE4278 = 0;
  qword_2CE4280 = (__int64)&unk_2CE4290;
  qword_2CE4298 = (__int64)&unk_2CE42B0;
  qword_2CE42A0 = 1;
  dword_2CE42A8 = 0;
  v7 = sub_21ED2B0("Assume the non latch exit block to be predictable");
  v8 = (unsigned int)qword_2CE4288;
  si128 = _mm_load_si128((const __m128i *)&v12);
  v10 = (unsigned int)qword_2CE4288 + 1LL;
  if ( v10 > HIDWORD(qword_2CE4288) )
  {
    *(_QWORD *)&v12 = v7;
    v13[0] = si128;
    sub_22134E0((char *)&unk_2CE4290 - 16, &unk_2CE4290, v10, 8);
    v8 = (unsigned int)qword_2CE4288;
    si128 = _mm_load_si128(v13);
    v7 = v12;
  }
  *(_QWORD *)(qword_2CE4280 + 8 * v8) = v7;
  word_2CE42C8 = 0;
  qword_2CE42C0 = (__int64)off_2C474E8;
  qword_2CE4240 = (__int64)off_2C4B848;
  qword_2CE42D0 = (__int64)off_2BC0B68;
  xmmword_2CE42E8 = (__int128)si128;
  LODWORD(qword_2CE4288) = qword_2CE4288 + 1;
  byte_2CE42B8 = 0;
  sub_21F3510(&qword_2CE4240, "unroll-runtime-other-exit-predictable", 37);
  word_2CE42C8 = 256;
  qword_2CE4268 = v6;
  byte_2CE42B8 = 0;
  BYTE2(qword_2CE4248) = BYTE2(qword_2CE4248) & 0x9F | 0x20;
  qword_2CE4260 = (__int64)"Assume the non latch exit block to be predictable";
  sub_21F4400(&qword_2CE4240);
  return __cxa_atexit(sub_1FEA450, &qword_2CE4240, &off_2AFC540);
}

