int sub_338020()
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
  size_t v10; // r15
  __int64 v11; // rax
  __int64 v12; // rcx
  size_t v13; // r15
  __int64 v14; // rax
  __int64 v15; // rcx
  __m128i v16; // xmm0
  size_t v17; // r15
  __int64 v18; // rax
  __int64 v19; // rcx
  size_t v20; // r15
  __int64 v21; // rax
  __int64 v22; // rcx
  __m128i v23; // xmm0
  int result; // eax
  __m128i v25; // [rsp+0h] [rbp-58h] BYREF
  __m128i v26[4]; // [rsp+10h] [rbp-48h] BYREF

  v0 = j__strlen("Merge context profiles before calculating thresholds.");
  unk_2CFFDF0 = 0;
  qword_2CFFDE0 = &off_2C758B0;
  *(_QWORD *)&dword_2CFFDE8 = dword_2CFFDE8 & 0x80000000;
  qword_2CFFE20[1] = 0x100000000LL;
  unk_2CFFDF8 = 0;
  unk_2CFFE00 = 0;
  unk_2CFFE08 = 0;
  unk_2CFFE10 = 0;
  unk_2CFFE18 = 0;
  qword_2CFFE20[0] = &qword_2CFFE20[2];
  qword_2CFFE20[3] = &qword_2CFFE20[6];
  qword_2CFFE20[4] = 1;
  LODWORD(qword_2CFFE20[5]) = 0;
  BYTE4(qword_2CFFE20[5]) = 1;
  v1 = sub_2210FF0("Merge context profiles before calculating thresholds.");
  v2 = LODWORD(qword_2CFFE20[1]);
  if ( (unsigned __int64)LODWORD(qword_2CFFE20[1]) + 1 > HIDWORD(qword_2CFFE20[1]) )
  {
    v25.m128i_i64[0] = v1;
    sub_2237220(qword_2CFFE20, &qword_2CFFE20[2], LODWORD(qword_2CFFE20[1]) + 1LL, 8);
    v2 = LODWORD(qword_2CFFE20[1]);
    v1 = v25.m128i_i64[0];
  }
  *(_QWORD *)(qword_2CFFE20[0] + 8 * v2) = v1;
  LOWORD(qword_2CFFE20[9]) = 0;
  ++LODWORD(qword_2CFFE20[1]);
  LOBYTE(qword_2CFFE20[7]) = 0;
  qword_2CFFE20[8] = off_2C714E8;
  *(__m128 *)&qword_2CFFE20[13] = _mm_loadh_ps((const double *)off_2C78368);
  qword_2CFFDE0 = off_2C75848;
  qword_2CFFE20[10] = off_2BEAB08;
  sub_2217250(&qword_2CFFDE0, "profile-summary-contextless", 27);
  unk_2CFFE08 = v0;
  BYTE2(dword_2CFFDE8) = BYTE2(dword_2CFFDE8) & 0x9F | 0x20;
  unk_2CFFE00 = "Merge context profiles before calculating thresholds.";
  sub_2218140(&qword_2CFFDE0);
  __cxa_atexit(sub_200E190, &qword_2CFFDE0, &off_2B25620);
  v3 = j__strlen("A count is hot if it exceeds the minimum count to reach this percentile of total counts.");
  qword_2CFFD20 = &off_2C758B0;
  *(_QWORD *)&dword_2CFFD28 = dword_2CFFD28 & 0x80000000;
  qword_2CFFD60[1] = 0x100000000LL;
  unk_2CFFD30 = 0;
  unk_2CFFD38 = 0;
  unk_2CFFD40 = 0;
  unk_2CFFD48 = 0;
  unk_2CFFD50 = 0;
  unk_2CFFD58 = 0;
  qword_2CFFD60[0] = &qword_2CFFD60[2];
  qword_2CFFD60[3] = &qword_2CFFD60[6];
  qword_2CFFD60[4] = 1;
  LODWORD(qword_2CFFD60[5]) = 0;
  BYTE4(qword_2CFFD60[5]) = 1;
  v4 = sub_2210FF0("A count is hot if it exceeds the minimum count to reach this percentile of total counts.");
  v5 = LODWORD(qword_2CFFD60[1]);
  if ( (unsigned __int64)LODWORD(qword_2CFFD60[1]) + 1 > HIDWORD(qword_2CFFD60[1]) )
  {
    v25.m128i_i64[0] = v4;
    sub_2237220(qword_2CFFD60, &qword_2CFFD60[2], LODWORD(qword_2CFFD60[1]) + 1LL, 8);
    v5 = LODWORD(qword_2CFFD60[1]);
    v4 = v25.m128i_i64[0];
  }
  *(_QWORD *)(qword_2CFFD60[0] + 8 * v5) = v4;
  qword_2CFFD60[8] = off_2C71BB0;
  qword_2CFFD20 = off_2C75778;
  ++LODWORD(qword_2CFFD60[1]);
  LODWORD(qword_2CFFD60[7]) = 0;
  qword_2CFFD60[10] = off_2BEAB68;
  LODWORD(qword_2CFFD60[9]) = 0;
  BYTE4(qword_2CFFD60[9]) = 0;
  *(__m128 *)&qword_2CFFD60[13] = _mm_loadh_ps((const double *)&off_2C77900);
  v25 = *(__m128i *)&qword_2CFFD60[13];
  sub_2217250(&qword_2CFFD20, "profile-summary-cutoff-hot", 26);
  unk_2CFFD48 = v3;
  LODWORD(qword_2CFFD60[7]) = 990000;
  BYTE4(qword_2CFFD60[9]) = 1;
  LODWORD(qword_2CFFD60[9]) = 990000;
  BYTE2(dword_2CFFD28) = BYTE2(dword_2CFFD28) & 0x9F | 0x20;
  unk_2CFFD40 = "A count is hot if it exceeds the minimum count to reach this percentile of total counts.";
  sub_2218140(&qword_2CFFD20);
  __cxa_atexit(sub_20141D0, &qword_2CFFD20, &off_2B25620);
  v6 = j__strlen("A count is cold if it is below the minimum count to reach this percentile of total counts.");
  qword_2CFFC60 = &off_2C758B0;
  *(_QWORD *)&dword_2CFFC68 = dword_2CFFC68 & 0x80000000;
  qword_2CFFCA0[1] = 0x100000000LL;
  unk_2CFFC70 = 0;
  unk_2CFFC78 = 0;
  unk_2CFFC80 = 0;
  unk_2CFFC88 = 0;
  unk_2CFFC90 = 0;
  unk_2CFFC98 = 0;
  qword_2CFFCA0[0] = &qword_2CFFCA0[2];
  qword_2CFFCA0[3] = &qword_2CFFCA0[6];
  qword_2CFFCA0[4] = 1;
  LODWORD(qword_2CFFCA0[5]) = 0;
  BYTE4(qword_2CFFCA0[5]) = 1;
  v7 = sub_2210FF0("A count is cold if it is below the minimum count to reach this percentile of total counts.");
  v8 = LODWORD(qword_2CFFCA0[1]);
  si128 = _mm_load_si128(&v25);
  if ( (unsigned __int64)LODWORD(qword_2CFFCA0[1]) + 1 > HIDWORD(qword_2CFFCA0[1]) )
  {
    v25.m128i_i64[0] = v7;
    v26[0] = si128;
    sub_2237220(qword_2CFFCA0, &qword_2CFFCA0[2], LODWORD(qword_2CFFCA0[1]) + 1LL, 8);
    v8 = LODWORD(qword_2CFFCA0[1]);
    si128 = _mm_load_si128(v26);
    v7 = v25.m128i_i64[0];
  }
  *(_QWORD *)(qword_2CFFCA0[0] + 8 * v8) = v7;
  qword_2CFFCA0[8] = off_2C71BB0;
  qword_2CFFC60 = off_2C75778;
  ++LODWORD(qword_2CFFCA0[1]);
  LODWORD(qword_2CFFCA0[7]) = 0;
  qword_2CFFCA0[10] = off_2BEAB68;
  LODWORD(qword_2CFFCA0[9]) = 0;
  BYTE4(qword_2CFFCA0[9]) = 0;
  *(__m128i *)&qword_2CFFCA0[13] = si128;
  sub_2217250(&qword_2CFFC60, "profile-summary-cutoff-cold", 27);
  unk_2CFFC88 = v6;
  LODWORD(qword_2CFFCA0[7]) = 999999;
  BYTE4(qword_2CFFCA0[9]) = 1;
  LODWORD(qword_2CFFCA0[9]) = 999999;
  BYTE2(dword_2CFFC68) = BYTE2(dword_2CFFC68) & 0x9F | 0x20;
  unk_2CFFC80 = "A count is cold if it is below the minimum count to reach this percentile of total counts.";
  sub_2218140(&qword_2CFFC60);
  __cxa_atexit(sub_20141D0, &qword_2CFFC60, &off_2B25620);
  v10 = j__strlen(
          "The code working set size is considered huge if the number of blocks required to reach the -profile-summary-cu"
          "toff-hot percentile exceeds this count.");
  qword_2CFFBA0 = &off_2C758B0;
  *(_QWORD *)&dword_2CFFBA8 = dword_2CFFBA8 & 0x80000000;
  qword_2CFFBE0[1] = 0x100000000LL;
  unk_2CFFBB0 = 0;
  unk_2CFFBB8 = 0;
  unk_2CFFBC0 = 0;
  unk_2CFFBC8 = 0;
  unk_2CFFBD0 = 0;
  unk_2CFFBD8 = 0;
  qword_2CFFBE0[0] = &qword_2CFFBE0[2];
  qword_2CFFBE0[3] = &qword_2CFFBE0[6];
  qword_2CFFBE0[4] = 1;
  LODWORD(qword_2CFFBE0[5]) = 0;
  BYTE4(qword_2CFFBE0[5]) = 1;
  v11 = sub_2210FF0(
          "The code working set size is considered huge if the number of blocks required to reach the -profile-summary-cu"
          "toff-hot percentile exceeds this count.");
  v12 = LODWORD(qword_2CFFBE0[1]);
  if ( (unsigned __int64)LODWORD(qword_2CFFBE0[1]) + 1 > HIDWORD(qword_2CFFBE0[1]) )
  {
    v25.m128i_i64[0] = v11;
    sub_2237220(qword_2CFFBE0, &qword_2CFFBE0[2], LODWORD(qword_2CFFBE0[1]) + 1LL, 8);
    v12 = LODWORD(qword_2CFFBE0[1]);
    v11 = v25.m128i_i64[0];
  }
  *(_QWORD *)(qword_2CFFBE0[0] + 8 * v12) = v11;
  qword_2CFFBE0[8] = off_2C712D0;
  qword_2CFFBA0 = off_2C75710;
  ++LODWORD(qword_2CFFBE0[1]);
  LODWORD(qword_2CFFBE0[7]) = 0;
  qword_2CFFBE0[10] = off_2BEAB98;
  LODWORD(qword_2CFFBE0[9]) = 0;
  BYTE4(qword_2CFFBE0[9]) = 0;
  *(__m128 *)&qword_2CFFBE0[13] = _mm_loadh_ps((const double *)off_2C784F8);
  v25 = *(__m128i *)&qword_2CFFBE0[13];
  sub_2217250(&qword_2CFFBA0, "profile-summary-huge-working-set-size-threshold", 47);
  unk_2CFFBC8 = v10;
  LODWORD(qword_2CFFBE0[7]) = 15000;
  BYTE4(qword_2CFFBE0[9]) = 1;
  LODWORD(qword_2CFFBE0[9]) = 15000;
  BYTE2(dword_2CFFBA8) = BYTE2(dword_2CFFBA8) & 0x9F | 0x20;
  unk_2CFFBC0 = "The code working set size is considered huge if the number of blocks required to reach the -profile-summ"
                "ary-cutoff-hot percentile exceeds this count.";
  sub_2218140(&qword_2CFFBA0);
  __cxa_atexit(sub_1FED260, &qword_2CFFBA0, &off_2B25620);
  v13 = j__strlen(
          "The code working set size is considered large if the number of blocks required to reach the -profile-summary-c"
          "utoff-hot percentile exceeds this count.");
  qword_2CFFAE0 = &off_2C758B0;
  *(_QWORD *)&dword_2CFFAE8 = dword_2CFFAE8 & 0x80000000;
  qword_2CFFB20[1] = 0x100000000LL;
  unk_2CFFAF0 = 0;
  unk_2CFFAF8 = 0;
  unk_2CFFB00 = 0;
  unk_2CFFB08 = 0;
  unk_2CFFB10 = 0;
  unk_2CFFB18 = 0;
  qword_2CFFB20[0] = &qword_2CFFB20[2];
  qword_2CFFB20[3] = &qword_2CFFB20[6];
  qword_2CFFB20[4] = 1;
  LODWORD(qword_2CFFB20[5]) = 0;
  BYTE4(qword_2CFFB20[5]) = 1;
  v14 = sub_2210FF0(
          "The code working set size is considered large if the number of blocks required to reach the -profile-summary-c"
          "utoff-hot percentile exceeds this count.");
  v15 = LODWORD(qword_2CFFB20[1]);
  v16 = _mm_load_si128(&v25);
  if ( (unsigned __int64)LODWORD(qword_2CFFB20[1]) + 1 > HIDWORD(qword_2CFFB20[1]) )
  {
    v25.m128i_i64[0] = v14;
    v26[0] = v16;
    sub_2237220(qword_2CFFB20, &qword_2CFFB20[2], LODWORD(qword_2CFFB20[1]) + 1LL, 8);
    v15 = LODWORD(qword_2CFFB20[1]);
    v16 = _mm_load_si128(v26);
    v14 = v25.m128i_i64[0];
  }
  *(_QWORD *)(qword_2CFFB20[0] + 8 * v15) = v14;
  qword_2CFFB20[8] = off_2C712D0;
  qword_2CFFAE0 = off_2C75710;
  ++LODWORD(qword_2CFFB20[1]);
  LODWORD(qword_2CFFB20[7]) = 0;
  qword_2CFFB20[10] = off_2BEAB98;
  LODWORD(qword_2CFFB20[9]) = 0;
  BYTE4(qword_2CFFB20[9]) = 0;
  *(__m128i *)&qword_2CFFB20[13] = v16;
  sub_2217250(&qword_2CFFAE0, "profile-summary-large-working-set-size-threshold", 48);
  unk_2CFFB08 = v13;
  LODWORD(qword_2CFFB20[7]) = 12500;
  BYTE4(qword_2CFFB20[9]) = 1;
  LODWORD(qword_2CFFB20[9]) = 12500;
  BYTE2(dword_2CFFAE8) = BYTE2(dword_2CFFAE8) & 0x9F | 0x20;
  unk_2CFFB00 = "The code working set size is considered large if the number of blocks required to reach the -profile-sum"
                "mary-cutoff-hot percentile exceeds this count.";
  sub_2218140(&qword_2CFFAE0);
  __cxa_atexit(sub_1FED260, &qword_2CFFAE0, &off_2B25620);
  v17 = j__strlen("A fixed hot count that overrides the count derived from profile-summary-cutoff-hot");
  qword_2CFFA20 = &off_2C758B0;
  *(_QWORD *)&dword_2CFFA28 = dword_2CFFA28 & 0x80000000;
  qword_2CFFA60[1] = 0x100000000LL;
  unk_2CFFA30 = 0;
  unk_2CFFA38 = 0;
  unk_2CFFA40 = 0;
  unk_2CFFA48 = 0;
  unk_2CFFA50 = 0;
  unk_2CFFA58 = 0;
  qword_2CFFA60[0] = &qword_2CFFA60[2];
  qword_2CFFA60[3] = &qword_2CFFA60[6];
  qword_2CFFA60[4] = 1;
  LODWORD(qword_2CFFA60[5]) = 0;
  BYTE4(qword_2CFFA60[5]) = 1;
  v18 = sub_2210FF0("A fixed hot count that overrides the count derived from profile-summary-cutoff-hot");
  v19 = LODWORD(qword_2CFFA60[1]);
  if ( (unsigned __int64)LODWORD(qword_2CFFA60[1]) + 1 > HIDWORD(qword_2CFFA60[1]) )
  {
    v25.m128i_i64[0] = v18;
    sub_2237220(qword_2CFFA60, &qword_2CFFA60[2], LODWORD(qword_2CFFA60[1]) + 1LL, 8);
    v19 = LODWORD(qword_2CFFA60[1]);
    v18 = v25.m128i_i64[0];
  }
  *(_QWORD *)(qword_2CFFA60[0] + 8 * v19) = v18;
  qword_2CFFA60[8] = off_2C71B28;
  ++LODWORD(qword_2CFFA60[1]);
  qword_2CFFA20 = off_2C71B48;
  qword_2CFFA60[11] = off_2BEABC8;
  qword_2CFFA60[7] = 0;
  qword_2CFFA60[9] = 0;
  LOBYTE(qword_2CFFA60[10]) = 0;
  *(__m128 *)&qword_2CFFA60[14] = _mm_loadh_ps((const double *)off_2C78C90);
  v25 = *(__m128i *)&qword_2CFFA60[14];
  sub_2217250(&qword_2CFFA20, "profile-summary-hot-count", 25);
  unk_2CFFA48 = v17;
  BYTE2(dword_2CFFA28) = BYTE2(dword_2CFFA28) & 0x9F | 0x40;
  unk_2CFFA40 = "A fixed hot count that overrides the count derived from profile-summary-cutoff-hot";
  sub_2218140(&qword_2CFFA20);
  __cxa_atexit(sub_2014000, &qword_2CFFA20, &off_2B25620);
  v20 = j__strlen("A fixed cold count that overrides the count derived from profile-summary-cutoff-cold");
  qword_2CFF960 = &off_2C758B0;
  *(_QWORD *)&dword_2CFF968 = dword_2CFF968 & 0x80000000;
  qword_2CFF9A0[1] = 0x100000000LL;
  unk_2CFF970 = 0;
  unk_2CFF978 = 0;
  unk_2CFF980 = 0;
  unk_2CFF988 = 0;
  unk_2CFF990 = 0;
  unk_2CFF998 = 0;
  qword_2CFF9A0[0] = &qword_2CFF9A0[2];
  qword_2CFF9A0[3] = &qword_2CFF9A0[6];
  qword_2CFF9A0[4] = 1;
  LODWORD(qword_2CFF9A0[5]) = 0;
  BYTE4(qword_2CFF9A0[5]) = 1;
  v21 = sub_2210FF0("A fixed cold count that overrides the count derived from profile-summary-cutoff-cold");
  v22 = LODWORD(qword_2CFF9A0[1]);
  v23 = _mm_load_si128(&v25);
  if ( (unsigned __int64)LODWORD(qword_2CFF9A0[1]) + 1 > HIDWORD(qword_2CFF9A0[1]) )
  {
    v26[0].m128i_i64[0] = v21;
    sub_2237220(qword_2CFF9A0, &qword_2CFF9A0[2], LODWORD(qword_2CFF9A0[1]) + 1LL, 8);
    v22 = LODWORD(qword_2CFF9A0[1]);
    v21 = v26[0].m128i_i64[0];
    v23 = _mm_load_si128(&v25);
  }
  *(_QWORD *)(qword_2CFF9A0[0] + 8 * v22) = v21;
  qword_2CFF9A0[8] = off_2C71B28;
  qword_2CFF960 = off_2C71B48;
  ++LODWORD(qword_2CFF9A0[1]);
  qword_2CFF9A0[11] = off_2BEABC8;
  qword_2CFF9A0[7] = 0;
  qword_2CFF9A0[9] = 0;
  LOBYTE(qword_2CFF9A0[10]) = 0;
  *(__m128i *)&qword_2CFF9A0[14] = v23;
  sub_2217250(&qword_2CFF960, "profile-summary-cold-count", 26);
  unk_2CFF988 = v20;
  BYTE2(dword_2CFF968) = BYTE2(dword_2CFF968) & 0x9F | 0x40;
  unk_2CFF980 = "A fixed cold count that overrides the count derived from profile-summary-cutoff-cold";
  sub_2218140(&qword_2CFF960);
  result = __cxa_atexit(sub_2014000, &qword_2CFF960, &off_2B25620);
  dword_2CFF940 = 0;
  xmmword_2CFF948 = (__int128)_mm_load_si128((const __m128i *)&xmmword_23A7890);
  return result;
}
