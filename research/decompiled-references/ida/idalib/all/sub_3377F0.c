int sub_3377F0()
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
  unk_2CFF7D0 = 0;
  qword_2CFF7C0 = &off_2C758B0;
  *(_QWORD *)&dword_2CFF7C8 = dword_2CFF7C8 & 0x80000000;
  qword_2CFF800[1] = 0x100000000LL;
  unk_2CFF7D8 = 0;
  unk_2CFF7E0 = 0;
  unk_2CFF7E8 = 0;
  unk_2CFF7F0 = 0;
  unk_2CFF7F8 = 0;
  qword_2CFF800[0] = &qword_2CFF800[2];
  qword_2CFF800[3] = &qword_2CFF800[6];
  qword_2CFF800[4] = 1;
  LODWORD(qword_2CFF800[5]) = 0;
  BYTE4(qword_2CFF800[5]) = 1;
  v1 = sub_2210FF0(
         "The threshold the lifetime access density (accesses per byte per lifetime sec) must be under to consider an allocation cold");
  v2 = LODWORD(qword_2CFF800[1]);
  if ( (unsigned __int64)LODWORD(qword_2CFF800[1]) + 1 > HIDWORD(qword_2CFF800[1]) )
  {
    v14.m128i_i64[0] = v1;
    sub_2237220(qword_2CFF800, &qword_2CFF800[2], LODWORD(qword_2CFF800[1]) + 1LL, 8);
    v2 = LODWORD(qword_2CFF800[1]);
    v1 = v14.m128i_i64[0];
  }
  *(_QWORD *)(qword_2CFF800[0] + 8 * v2) = v1;
  ++LODWORD(qword_2CFF800[1]);
  LODWORD(qword_2CFF800[7]) = 0;
  qword_2CFF800[8] = off_2C719C8;
  LODWORD(qword_2CFF800[9]) = 0;
  BYTE4(qword_2CFF800[9]) = 0;
  qword_2CFF7C0 = off_2C719E8;
  *(__m128 *)&qword_2CFF800[13] = _mm_loadh_ps((const double *)off_2C780C0);
  qword_2CFF800[10] = off_2BEAC28;
  sub_2217250(&qword_2CFF7C0, "memprof-lifetime-access-density-cold-threshold", 46);
  unk_2CFF7E8 = v0;
  BYTE4(qword_2CFF800[9]) = 1;
  LODWORD(qword_2CFF800[7]) = 1028443341;
  BYTE2(dword_2CFF7C8) = BYTE2(dword_2CFF7C8) & 0x9F | 0x20;
  unk_2CFF7E0 = "The threshold the lifetime access density (accesses per byte per lifetime sec) must be under to consider"
                " an allocation cold";
  LODWORD(qword_2CFF800[9]) = 1028443341;
  sub_2218140(&qword_2CFF7C0);
  __cxa_atexit(sub_2012C10, &qword_2CFF7C0, &off_2B25620);
  v3 = j__strlen("The average lifetime (s) for an allocation to be considered cold");
  qword_2CFF700 = &off_2C758B0;
  *(_QWORD *)&dword_2CFF708 = dword_2CFF708 & 0x80000000;
  qword_2CFF740[1] = 0x100000000LL;
  unk_2CFF710 = 0;
  unk_2CFF718 = 0;
  unk_2CFF720 = 0;
  unk_2CFF728 = 0;
  unk_2CFF730 = 0;
  unk_2CFF738 = 0;
  qword_2CFF740[0] = &qword_2CFF740[2];
  qword_2CFF740[3] = &qword_2CFF740[6];
  qword_2CFF740[4] = 1;
  LODWORD(qword_2CFF740[5]) = 0;
  BYTE4(qword_2CFF740[5]) = 1;
  v4 = sub_2210FF0("The average lifetime (s) for an allocation to be considered cold");
  v5 = LODWORD(qword_2CFF740[1]);
  if ( (unsigned __int64)LODWORD(qword_2CFF740[1]) + 1 > HIDWORD(qword_2CFF740[1]) )
  {
    v14.m128i_i64[0] = v4;
    sub_2237220(qword_2CFF740, &qword_2CFF740[2], LODWORD(qword_2CFF740[1]) + 1LL, 8);
    v5 = LODWORD(qword_2CFF740[1]);
    v4 = v14.m128i_i64[0];
  }
  *(_QWORD *)(qword_2CFF740[0] + 8 * v5) = v4;
  qword_2CFF740[8] = off_2C712D0;
  qword_2CFF700 = off_2C75710;
  ++LODWORD(qword_2CFF740[1]);
  LODWORD(qword_2CFF740[7]) = 0;
  qword_2CFF740[10] = off_2BEAB98;
  LODWORD(qword_2CFF740[9]) = 0;
  BYTE4(qword_2CFF740[9]) = 0;
  *(__m128 *)&qword_2CFF740[13] = _mm_loadh_ps((const double *)off_2C784F8);
  v14 = *(__m128i *)&qword_2CFF740[13];
  sub_2217250(&qword_2CFF700, "memprof-ave-lifetime-cold-threshold", 35);
  unk_2CFF728 = v3;
  LODWORD(qword_2CFF740[7]) = 200;
  BYTE4(qword_2CFF740[9]) = 1;
  LODWORD(qword_2CFF740[9]) = 200;
  BYTE2(dword_2CFF708) = BYTE2(dword_2CFF708) & 0x9F | 0x20;
  unk_2CFF720 = "The average lifetime (s) for an allocation to be considered cold";
  sub_2218140(&qword_2CFF700);
  __cxa_atexit(sub_1FED260, &qword_2CFF700, &off_2B25620);
  v6 = j__strlen("The minimum TotalLifetimeAccessDensity / AllocCount for an allocation to be considered hot");
  qword_2CFF640 = &off_2C758B0;
  *(_QWORD *)&dword_2CFF648 = dword_2CFF648 & 0x80000000;
  qword_2CFF680[1] = 0x100000000LL;
  unk_2CFF650 = 0;
  unk_2CFF658 = 0;
  unk_2CFF660 = 0;
  unk_2CFF668 = 0;
  unk_2CFF670 = 0;
  unk_2CFF678 = 0;
  qword_2CFF680[0] = &qword_2CFF680[2];
  qword_2CFF680[3] = &qword_2CFF680[6];
  qword_2CFF680[4] = 1;
  LODWORD(qword_2CFF680[5]) = 0;
  BYTE4(qword_2CFF680[5]) = 1;
  v7 = sub_2210FF0("The minimum TotalLifetimeAccessDensity / AllocCount for an allocation to be considered hot");
  v8 = LODWORD(qword_2CFF680[1]);
  si128 = _mm_load_si128(&v14);
  if ( (unsigned __int64)LODWORD(qword_2CFF680[1]) + 1 > HIDWORD(qword_2CFF680[1]) )
  {
    v14.m128i_i64[0] = v7;
    v15[0] = si128;
    sub_2237220(qword_2CFF680, &qword_2CFF680[2], LODWORD(qword_2CFF680[1]) + 1LL, 8);
    v8 = LODWORD(qword_2CFF680[1]);
    si128 = _mm_load_si128(v15);
    v7 = v14.m128i_i64[0];
  }
  *(_QWORD *)(qword_2CFF680[0] + 8 * v8) = v7;
  qword_2CFF680[8] = off_2C712D0;
  qword_2CFF640 = off_2C75710;
  ++LODWORD(qword_2CFF680[1]);
  LODWORD(qword_2CFF680[7]) = 0;
  qword_2CFF680[10] = off_2BEAB98;
  LODWORD(qword_2CFF680[9]) = 0;
  BYTE4(qword_2CFF680[9]) = 0;
  *(__m128i *)&qword_2CFF680[13] = si128;
  sub_2217250(&qword_2CFF640, "memprof-min-ave-lifetime-access-density-hot-threshold", 53);
  unk_2CFF668 = v6;
  LODWORD(qword_2CFF680[7]) = 1000;
  BYTE4(qword_2CFF680[9]) = 1;
  LODWORD(qword_2CFF680[9]) = 1000;
  BYTE2(dword_2CFF648) = BYTE2(dword_2CFF648) & 0x9F | 0x20;
  unk_2CFF660 = "The minimum TotalLifetimeAccessDensity / AllocCount for an allocation to be considered hot";
  sub_2218140(&qword_2CFF640);
  __cxa_atexit(sub_1FED260, &qword_2CFF640, &off_2B25620);
  v10 = j__strlen("Enable use of hot hints (only supported for unambigously hot allocations)");
  qword_2CFF580 = &off_2C758B0;
  *(_QWORD *)&dword_2CFF588 = dword_2CFF588 & 0x80000000;
  qword_2CFF5C0[1] = 0x100000000LL;
  unk_2CFF590 = 0;
  unk_2CFF598 = 0;
  unk_2CFF5A0 = 0;
  unk_2CFF5A8 = 0;
  unk_2CFF5B0 = 0;
  unk_2CFF5B8 = 0;
  qword_2CFF5C0[0] = &qword_2CFF5C0[2];
  qword_2CFF5C0[3] = &qword_2CFF5C0[6];
  qword_2CFF5C0[4] = 1;
  LODWORD(qword_2CFF5C0[5]) = 0;
  BYTE4(qword_2CFF5C0[5]) = 1;
  v11 = sub_2210FF0("Enable use of hot hints (only supported for unambigously hot allocations)");
  v12 = LODWORD(qword_2CFF5C0[1]);
  if ( (unsigned __int64)LODWORD(qword_2CFF5C0[1]) + 1 > HIDWORD(qword_2CFF5C0[1]) )
  {
    v14.m128i_i64[0] = v11;
    sub_2237220(qword_2CFF5C0, &qword_2CFF5C0[2], LODWORD(qword_2CFF5C0[1]) + 1LL, 8);
    v12 = LODWORD(qword_2CFF5C0[1]);
    v11 = v14.m128i_i64[0];
  }
  *(_QWORD *)(qword_2CFF5C0[0] + 8 * v12) = v11;
  LOWORD(qword_2CFF5C0[9]) = 0;
  ++LODWORD(qword_2CFF5C0[1]);
  LOBYTE(qword_2CFF5C0[7]) = 0;
  qword_2CFF5C0[8] = off_2C714E8;
  *(__m128 *)&qword_2CFF5C0[13] = _mm_loadh_ps((const double *)off_2C78368);
  qword_2CFF580 = off_2C75848;
  qword_2CFF5C0[10] = off_2BEAB08;
  sub_2217250(&qword_2CFF580, "memprof-use-hot-hints", 21);
  unk_2CFF5A8 = v10;
  LOBYTE(qword_2CFF5C0[7]) = 0;
  LOWORD(qword_2CFF5C0[9]) = 256;
  BYTE2(dword_2CFF588) = BYTE2(dword_2CFF588) & 0x9F | 0x20;
  unk_2CFF5A0 = "Enable use of hot hints (only supported for unambigously hot allocations)";
  sub_2218140(&qword_2CFF580);
  return __cxa_atexit(sub_200E190, &qword_2CFF580, &off_2B25620);
}
