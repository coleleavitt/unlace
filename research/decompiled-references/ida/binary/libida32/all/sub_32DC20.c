int sub_32DC20()
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

  v0 = j__strlen("Print the global id for each value when reading the module summary");
  qword_2CD2510 = 0;
  v1 = v0;
  qword_2CD2518 = 0;
  qword_2CD2520 = 0;
  qword_2CD2500 = (__int64)&off_2C4B8B0;
  qword_2CD2508 = (unsigned int)qword_2CD2508 & 0x80000000;
  qword_2CD2548 = 0x100000000LL;
  qword_2CD2528 = 0;
  qword_2CD2530 = 0;
  qword_2CD2538 = 0;
  qword_2CD2540 = (__int64)&unk_2CD2550;
  qword_2CD2558 = (__int64)&unk_2CD2570;
  qword_2CD2560 = 1;
  dword_2CD2568 = 0;
  byte_2CD256C = 1;
  v2 = sub_21ED2B0("Print the global id for each value when reading the module summary");
  v3 = (unsigned int)qword_2CD2548;
  v4 = (unsigned int)qword_2CD2548 + 1LL;
  if ( v4 > HIDWORD(qword_2CD2548) )
  {
    *(_QWORD *)&v12 = v2;
    sub_22134E0((char *)&unk_2CD2550 - 16, &unk_2CD2550, v4, 8);
    v3 = (unsigned int)qword_2CD2548;
    v2 = v12;
  }
  *(_QWORD *)(qword_2CD2540 + 8 * v3) = v2;
  qword_2CD2580 = (__int64)off_2C474E8;
  word_2CD2588 = 0;
  qword_2CD2500 = (__int64)off_2C4B848;
  xmmword_2CD25A8 = (__int128)_mm_loadh_ps((const double *)off_2C4E368);
  v12 = xmmword_2CD25A8;
  LODWORD(qword_2CD2548) = qword_2CD2548 + 1;
  qword_2CD2590 = (__int64)off_2BC0B68;
  byte_2CD2578 = 0;
  sub_21F3510(&qword_2CD2500, "print-summary-global-ids", 24);
  word_2CD2588 = 256;
  qword_2CD2528 = v1;
  byte_2CD2578 = 0;
  BYTE2(qword_2CD2508) = BYTE2(qword_2CD2508) & 0x9F | 0x20;
  qword_2CD2520 = (__int64)"Print the global id for each value when reading the module summary";
  sub_21F4400(&qword_2CD2500);
  __cxa_atexit(sub_1FEA450, &qword_2CD2500, &off_2AFC540);
  v5 = j__strlen("Expand constant expressions to instructions for testing purposes");
  byte_2CD24AC = 1;
  qword_2CD2450 = 0;
  v6 = v5;
  qword_2CD2440 = (__int64)&off_2C4B8B0;
  qword_2CD2448 = (unsigned int)qword_2CD2448 & 0x80000000;
  qword_2CD2488 = 0x100000000LL;
  qword_2CD2458 = 0;
  qword_2CD2460 = 0;
  qword_2CD2468 = 0;
  qword_2CD2470 = 0;
  qword_2CD2478 = 0;
  qword_2CD2480 = (__int64)&unk_2CD2490;
  qword_2CD2498 = (__int64)&unk_2CD24B0;
  qword_2CD24A0 = 1;
  dword_2CD24A8 = 0;
  v7 = sub_21ED2B0("Expand constant expressions to instructions for testing purposes");
  v8 = (unsigned int)qword_2CD2488;
  si128 = _mm_load_si128((const __m128i *)&v12);
  v10 = (unsigned int)qword_2CD2488 + 1LL;
  if ( v10 > HIDWORD(qword_2CD2488) )
  {
    *(_QWORD *)&v12 = v7;
    v13[0] = si128;
    sub_22134E0((char *)&unk_2CD2490 - 16, &unk_2CD2490, v10, 8);
    v8 = (unsigned int)qword_2CD2488;
    si128 = _mm_load_si128(v13);
    v7 = v12;
  }
  *(_QWORD *)(qword_2CD2480 + 8 * v8) = v7;
  word_2CD24C8 = 0;
  qword_2CD24C0 = (__int64)off_2C474E8;
  qword_2CD2440 = (__int64)off_2C4B848;
  qword_2CD24D0 = (__int64)off_2BC0B68;
  xmmword_2CD24E8 = (__int128)si128;
  LODWORD(qword_2CD2488) = qword_2CD2488 + 1;
  byte_2CD24B8 = 0;
  sub_21F3510(&qword_2CD2440, "expand-constant-exprs", 21);
  qword_2CD2468 = v6;
  BYTE2(qword_2CD2448) = BYTE2(qword_2CD2448) & 0x9F | 0x20;
  qword_2CD2460 = (__int64)"Expand constant expressions to instructions for testing purposes";
  sub_21F4400(&qword_2CD2440);
  return __cxa_atexit(sub_1FEA450, &qword_2CD2440, &off_2AFC540);
}

