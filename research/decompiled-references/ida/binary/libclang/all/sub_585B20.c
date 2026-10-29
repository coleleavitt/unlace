int __fastcall sub_585B20(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  unsigned __int64 v3; // rdx
  __m128i v4; // xmm3
  __int64 v5; // rax
  __int64 v6; // rdx
  __m128i v7; // xmm4
  __int64 v8; // r13
  __int64 v9; // rax
  unsigned __int64 v10; // rdx
  __m128i v11; // xmm5
  __m128i v13; // [rsp+0h] [rbp-58h] BYREF
  __int64 v14; // [rsp+18h] [rbp-40h]

  qword_4AF2520 = (__int64)&qword_4AF2530;
  qword_4AF24F0 = 0;
  qword_4AF24F8 = 0;
  qword_4AF24E0 = (__int64)&off_4A6E058;
  qword_4AF24E8 = (unsigned int)qword_4AF24E8 & 0x80000000;
  qword_4AF2538 = (__int64)&qword_4AF2550;
  v13 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_49E93F8), (__m128i)(unsigned __int64)nullsub_267);
  qword_4AF2500 = 0;
  qword_4AF2508 = 0;
  qword_4AF2510 = 0;
  qword_4AF2518 = 0;
  qword_4AF2528 = 0x100000000LL;
  qword_4AF2540 = 1;
  dword_4AF2548 = 0;
  byte_4AF254C = 1;
  v1 = sub_259AC30(a1, &qword_4AF2530);
  v2 = (unsigned int)qword_4AF2528;
  v3 = (unsigned int)qword_4AF2528 + 1LL;
  if ( HIDWORD(qword_4AF2528) < v3 )
  {
    sub_25D6060(&qword_4AF2530 - 2, &qword_4AF2530, v3, 8);
    v2 = (unsigned int)qword_4AF2528;
  }
  v4 = _mm_load_si128(&v13);
  *(_QWORD *)(qword_4AF2520 + 8 * v2) = v1;
  xmmword_4AF2578 = 0;
  xmmword_4AF2588 = (__int128)v4;
  qword_4AF2560 = (__int64)&off_4A64710;
  LODWORD(qword_4AF2528) = qword_4AF2528 + 1;
  byte_4AF256C = 0;
  qword_4AF24E0 = (__int64)off_4A6DEB8;
  dword_4AF2558 = 0;
  dword_4AF2568 = 0;
  qword_4AF2570 = (__int64)off_49D9228;
  sub_259F400(&qword_4AF24E0, "memcmp-num-loads-per-block", 26);
  dword_4AF2558 = 1;
  byte_4AF256C = 1;
  dword_4AF2568 = 1;
  qword_4AF2508 = 108;
  BYTE2(qword_4AF24E8) = BYTE2(qword_4AF24E8) & 0x9F | 0x20;
  qword_4AF2500 = (__int64)"The number of loads per basic block for inline expansion of memcmp that is only being compared against zero.";
  sub_259EC40(&qword_4AF24E0);
  __cxa_atexit(sub_1F6C940, &qword_4AF24E0, &off_47CFE00);
  qword_4AF2430 = 0;
  qword_4AF2420 = (__int64)&off_4A6E058;
  qword_4AF2428 = (unsigned int)qword_4AF2428 & 0x80000000;
  qword_4AF2460 = (__int64)&qword_4AF2470;
  qword_4AF2438 = 0;
  qword_4AF2440 = 0;
  qword_4AF2448 = 0;
  qword_4AF2450 = 0;
  qword_4AF2458 = 0;
  qword_4AF2468 = 0x100000000LL;
  qword_4AF2478 = (__int64)&qword_4AF2490;
  qword_4AF2480 = 1;
  dword_4AF2488 = 0;
  byte_4AF248C = 1;
  v5 = sub_259AC30(sub_1F6C940, &qword_4AF2470);
  v6 = (unsigned int)qword_4AF2468;
  if ( HIDWORD(qword_4AF2468) < (unsigned __int64)(unsigned int)qword_4AF2468 + 1 )
  {
    v14 = v5;
    sub_25D6060(&qword_4AF2470 - 2, &qword_4AF2470, (unsigned int)qword_4AF2468 + 1LL, 8);
    v6 = (unsigned int)qword_4AF2468;
    v5 = v14;
  }
  v7 = _mm_load_si128(&v13);
  *(_QWORD *)(qword_4AF2460 + 8 * v6) = v5;
  xmmword_4AF24B8 = 0;
  xmmword_4AF24C8 = (__int128)v7;
  qword_4AF24A0 = (__int64)&off_4A64710;
  LODWORD(qword_4AF2468) = qword_4AF2468 + 1;
  byte_4AF24AC = 0;
  qword_4AF2420 = (__int64)off_4A6DEB8;
  dword_4AF2498 = 0;
  dword_4AF24A8 = 0;
  qword_4AF24B0 = (__int64)off_49D9228;
  sub_259F400(&qword_4AF2420, "max-loads-per-memcmp", 20);
  qword_4AF2448 = 51;
  BYTE2(qword_4AF2428) = BYTE2(qword_4AF2428) & 0x9F | 0x20;
  qword_4AF2440 = (__int64)"Set maximum number of loads used in expanded memcmp";
  sub_259EC40(&qword_4AF2420);
  __cxa_atexit(sub_1F6C940, &qword_4AF2420, &off_47CFE00);
  qword_4AF23A8 = 0x100000000LL;
  qword_4AF2360 = (__int64)&off_4A6E058;
  qword_4AF2368 = (unsigned int)qword_4AF2368 & 0x80000000;
  qword_4AF23A0 = (__int64)&qword_4AF23B0;
  qword_4AF2370 = 0;
  qword_4AF2378 = 0;
  qword_4AF2380 = 0;
  qword_4AF2388 = 0;
  qword_4AF2390 = 0;
  qword_4AF2398 = 0;
  qword_4AF23B8 = (__int64)&qword_4AF23D0;
  qword_4AF23C0 = 1;
  dword_4AF23C8 = 0;
  byte_4AF23CC = 1;
  v8 = sub_259AC30(sub_1F6C940, &qword_4AF23B0);
  v9 = (unsigned int)qword_4AF23A8;
  v10 = (unsigned int)qword_4AF23A8 + 1LL;
  if ( HIDWORD(qword_4AF23A8) < v10 )
  {
    sub_25D6060(&qword_4AF23B0 - 2, &qword_4AF23B0, v10, 8);
    v9 = (unsigned int)qword_4AF23A8;
  }
  v11 = _mm_load_si128(&v13);
  *(_QWORD *)(qword_4AF23A0 + 8 * v9) = v8;
  xmmword_4AF23F8 = 0;
  xmmword_4AF2408 = (__int128)v11;
  qword_4AF23E0 = (__int64)&off_4A64710;
  LODWORD(qword_4AF23A8) = qword_4AF23A8 + 1;
  byte_4AF23EC = 0;
  qword_4AF2360 = (__int64)off_4A6DEB8;
  dword_4AF23D8 = 0;
  dword_4AF23E8 = 0;
  qword_4AF23F0 = (__int64)off_49D9228;
  sub_259F400(&qword_4AF2360, "max-loads-per-memcmp-opt-size", 29);
  qword_4AF2388 = 62;
  BYTE2(qword_4AF2368) = BYTE2(qword_4AF2368) & 0x9F | 0x20;
  qword_4AF2380 = (__int64)"Set maximum number of loads used in expanded memcmp for -Os/Oz";
  sub_259EC40(&qword_4AF2360);
  return __cxa_atexit(sub_1F6C940, &qword_4AF2360, &off_47CFE00);
}

