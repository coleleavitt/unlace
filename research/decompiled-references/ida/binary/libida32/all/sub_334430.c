int sub_334430()
{
  size_t v0; // r12
  __int64 v1; // rax
  __int64 v2; // rcx
  size_t v3; // r15
  __int64 v4; // rax
  __int64 v5; // rcx
  size_t v6; // r15
  __int64 v7; // rax
  __int64 v8; // rcx
  __m128i si128; // xmm0
  size_t v10; // r12
  __int64 v11; // rax
  __int64 v12; // rcx
  __m128i v14; // [rsp+0h] [rbp-58h] BYREF
  __m128i v15[4]; // [rsp+10h] [rbp-48h] BYREF

  v0 = j__strlen(
         "The threshold the lifetime access density (accesses per byte per lifetime sec) must be under to consider an allocation cold");
  unk_2CD58B0 = 0;
  qword_2CD58A0 = &off_2C4B8B0;
  *(_QWORD *)&dword_2CD58A8 = dword_2CD58A8 & 0x80000000;
  qword_2CD58E0[1] = 0x100000000LL;
  unk_2CD58B8 = 0;
  unk_2CD58C0 = 0;
  unk_2CD58C8 = 0;
  unk_2CD58D0 = 0;
  unk_2CD58D8 = 0;
  qword_2CD58E0[0] = &qword_2CD58E0[2];
  qword_2CD58E0[3] = &qword_2CD58E0[6];
  qword_2CD58E0[4] = 1;
  LODWORD(qword_2CD58E0[5]) = 0;
  BYTE4(qword_2CD58E0[5]) = 1;
  v1 = sub_21ED2B0(
         "The threshold the lifetime access density (accesses per byte per lifetime sec) must be under to consider an allocation cold");
  v2 = LODWORD(qword_2CD58E0[1]);
  if ( (unsigned __int64)LODWORD(qword_2CD58E0[1]) + 1 > HIDWORD(qword_2CD58E0[1]) )
  {
    v14.m128i_i64[0] = v1;
    sub_22134E0(qword_2CD58E0, &qword_2CD58E0[2], LODWORD(qword_2CD58E0[1]) + 1LL, 8);
    v2 = LODWORD(qword_2CD58E0[1]);
    v1 = v14.m128i_i64[0];
  }
  *(_QWORD *)(qword_2CD58E0[0] + 8 * v2) = v1;
  ++LODWORD(qword_2CD58E0[1]);
  LODWORD(qword_2CD58E0[7]) = 0;
  qword_2CD58E0[8] = off_2C479C8;
  LODWORD(qword_2CD58E0[9]) = 0;
  BYTE4(qword_2CD58E0[9]) = 0;
  qword_2CD58A0 = off_2C479E8;
  *(__m128 *)&qword_2CD58E0[13] = _mm_loadh_ps((const double *)off_2C4E0C0);
  qword_2CD58E0[10] = off_2BC0C88;
  sub_21F3510(&qword_2CD58A0, "memprof-lifetime-access-density-cold-threshold", 46);
  unk_2CD58C8 = v0;
  BYTE4(qword_2CD58E0[9]) = 1;
  LODWORD(qword_2CD58E0[7]) = 1028443341;
  BYTE2(dword_2CD58A8) = BYTE2(dword_2CD58A8) & 0x9F | 0x20;
  unk_2CD58C0 = "The threshold the lifetime access density (accesses per byte per lifetime sec) must be under to consider"
                " an allocation cold";
  LODWORD(qword_2CD58E0[9]) = 1028443341;
  sub_21F4400(&qword_2CD58A0);
  __cxa_atexit(sub_1FEEED0, &qword_2CD58A0, &off_2AFC540);
  v3 = j__strlen("The average lifetime (s) for an allocation to be considered cold");
  qword_2CD57E0 = &off_2C4B8B0;
  *(_QWORD *)&dword_2CD57E8 = dword_2CD57E8 & 0x80000000;
  qword_2CD5820[1] = 0x100000000LL;
  unk_2CD57F0 = 0;
  unk_2CD57F8 = 0;
  unk_2CD5800 = 0;
  unk_2CD5808 = 0;
  unk_2CD5810 = 0;
  unk_2CD5818 = 0;
  qword_2CD5820[0] = &qword_2CD5820[2];
  qword_2CD5820[3] = &qword_2CD5820[6];
  qword_2CD5820[4] = 1;
  LODWORD(qword_2CD5820[5]) = 0;
  BYTE4(qword_2CD5820[5]) = 1;
  v4 = sub_21ED2B0("The average lifetime (s) for an allocation to be considered cold");
  v5 = LODWORD(qword_2CD5820[1]);
  if ( (unsigned __int64)LODWORD(qword_2CD5820[1]) + 1 > HIDWORD(qword_2CD5820[1]) )
  {
    v14.m128i_i64[0] = v4;
    sub_22134E0(qword_2CD5820, &qword_2CD5820[2], LODWORD(qword_2CD5820[1]) + 1LL, 8);
    v5 = LODWORD(qword_2CD5820[1]);
    v4 = v14.m128i_i64[0];
  }
  *(_QWORD *)(qword_2CD5820[0] + 8 * v5) = v4;
  qword_2CD5820[8] = off_2C472D0;
  qword_2CD57E0 = off_2C4B710;
  ++LODWORD(qword_2CD5820[1]);
  LODWORD(qword_2CD5820[7]) = 0;
  qword_2CD5820[10] = off_2BC0BF8;
  LODWORD(qword_2CD5820[9]) = 0;
  BYTE4(qword_2CD5820[9]) = 0;
  *(__m128 *)&qword_2CD5820[13] = _mm_loadh_ps((const double *)off_2C4E4F8);
  v14 = *(__m128i *)&qword_2CD5820[13];
  sub_21F3510(&qword_2CD57E0, "memprof-ave-lifetime-cold-threshold", 35);
  unk_2CD5808 = v3;
  LODWORD(qword_2CD5820[7]) = 200;
  BYTE4(qword_2CD5820[9]) = 1;
  LODWORD(qword_2CD5820[9]) = 200;
  BYTE2(dword_2CD57E8) = BYTE2(dword_2CD57E8) & 0x9F | 0x20;
  unk_2CD5800 = "The average lifetime (s) for an allocation to be considered cold";
  sub_21F4400(&qword_2CD57E0);
  __cxa_atexit(sub_1FC9520, &qword_2CD57E0, &off_2AFC540);
  v6 = j__strlen("The minimum TotalLifetimeAccessDensity / AllocCount for an allocation to be considered hot");
  qword_2CD5720 = &off_2C4B8B0;
  *(_QWORD *)&dword_2CD5728 = dword_2CD5728 & 0x80000000;
  qword_2CD5760[1] = 0x100000000LL;
  unk_2CD5730 = 0;
  unk_2CD5738 = 0;
  unk_2CD5740 = 0;
  unk_2CD5748 = 0;
  unk_2CD5750 = 0;
  unk_2CD5758 = 0;
  qword_2CD5760[0] = &qword_2CD5760[2];
  qword_2CD5760[3] = &qword_2CD5760[6];
  qword_2CD5760[4] = 1;
  LODWORD(qword_2CD5760[5]) = 0;
  BYTE4(qword_2CD5760[5]) = 1;
  v7 = sub_21ED2B0("The minimum TotalLifetimeAccessDensity / AllocCount for an allocation to be considered hot");
  v8 = LODWORD(qword_2CD5760[1]);
  si128 = _mm_load_si128(&v14);
  if ( (unsigned __int64)LODWORD(qword_2CD5760[1]) + 1 > HIDWORD(qword_2CD5760[1]) )
  {
    v14.m128i_i64[0] = v7;
    v15[0] = si128;
    sub_22134E0(qword_2CD5760, &qword_2CD5760[2], LODWORD(qword_2CD5760[1]) + 1LL, 8);
    v8 = LODWORD(qword_2CD5760[1]);
    si128 = _mm_load_si128(v15);
    v7 = v14.m128i_i64[0];
  }
  *(_QWORD *)(qword_2CD5760[0] + 8 * v8) = v7;
  qword_2CD5760[8] = off_2C472D0;
  qword_2CD5720 = off_2C4B710;
  ++LODWORD(qword_2CD5760[1]);
  LODWORD(qword_2CD5760[7]) = 0;
  qword_2CD5760[10] = off_2BC0BF8;
  LODWORD(qword_2CD5760[9]) = 0;
  BYTE4(qword_2CD5760[9]) = 0;
  *(__m128i *)&qword_2CD5760[13] = si128;
  sub_21F3510(&qword_2CD5720, "memprof-min-ave-lifetime-access-density-hot-threshold", 53);
  unk_2CD5748 = v6;
  LODWORD(qword_2CD5760[7]) = 1000;
  BYTE4(qword_2CD5760[9]) = 1;
  LODWORD(qword_2CD5760[9]) = 1000;
  BYTE2(dword_2CD5728) = BYTE2(dword_2CD5728) & 0x9F | 0x20;
  unk_2CD5740 = "The minimum TotalLifetimeAccessDensity / AllocCount for an allocation to be considered hot";
  sub_21F4400(&qword_2CD5720);
  __cxa_atexit(sub_1FC9520, &qword_2CD5720, &off_2AFC540);
  v10 = j__strlen("Enable use of hot hints (only supported for unambigously hot allocations)");
  qword_2CD5660 = &off_2C4B8B0;
  *(_QWORD *)&dword_2CD5668 = dword_2CD5668 & 0x80000000;
  qword_2CD56A0[1] = 0x100000000LL;
  unk_2CD5670 = 0;
  unk_2CD5678 = 0;
  unk_2CD5680 = 0;
  unk_2CD5688 = 0;
  unk_2CD5690 = 0;
  unk_2CD5698 = 0;
  qword_2CD56A0[0] = &qword_2CD56A0[2];
  qword_2CD56A0[3] = &qword_2CD56A0[6];
  qword_2CD56A0[4] = 1;
  LODWORD(qword_2CD56A0[5]) = 0;
  BYTE4(qword_2CD56A0[5]) = 1;
  v11 = sub_21ED2B0("Enable use of hot hints (only supported for unambigously hot allocations)");
  v12 = LODWORD(qword_2CD56A0[1]);
  if ( (unsigned __int64)LODWORD(qword_2CD56A0[1]) + 1 > HIDWORD(qword_2CD56A0[1]) )
  {
    v14.m128i_i64[0] = v11;
    sub_22134E0(qword_2CD56A0, &qword_2CD56A0[2], LODWORD(qword_2CD56A0[1]) + 1LL, 8);
    v12 = LODWORD(qword_2CD56A0[1]);
    v11 = v14.m128i_i64[0];
  }
  *(_QWORD *)(qword_2CD56A0[0] + 8 * v12) = v11;
  LOWORD(qword_2CD56A0[9]) = 0;
  ++LODWORD(qword_2CD56A0[1]);
  LOBYTE(qword_2CD56A0[7]) = 0;
  qword_2CD56A0[8] = off_2C474E8;
  *(__m128 *)&qword_2CD56A0[13] = _mm_loadh_ps((const double *)off_2C4E368);
  qword_2CD5660 = off_2C4B848;
  qword_2CD56A0[10] = off_2BC0B68;
  sub_21F3510(&qword_2CD5660, "memprof-use-hot-hints", 21);
  unk_2CD5688 = v10;
  LOBYTE(qword_2CD56A0[7]) = 0;
  LOWORD(qword_2CD56A0[9]) = 256;
  BYTE2(dword_2CD5668) = BYTE2(dword_2CD5668) & 0x9F | 0x20;
  unk_2CD5680 = "Enable use of hot hints (only supported for unambigously hot allocations)";
  sub_21F4400(&qword_2CD5660);
  return __cxa_atexit(sub_1FEA450, &qword_2CD5660, &off_2AFC540);
}

