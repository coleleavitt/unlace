int sub_334C60()
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
  unk_2CD5ED0 = 0;
  qword_2CD5EC0 = &off_2C4B8B0;
  *(_QWORD *)&dword_2CD5EC8 = dword_2CD5EC8 & 0x80000000;
  qword_2CD5F00[1] = 0x100000000LL;
  unk_2CD5ED8 = 0;
  unk_2CD5EE0 = 0;
  unk_2CD5EE8 = 0;
  unk_2CD5EF0 = 0;
  unk_2CD5EF8 = 0;
  qword_2CD5F00[0] = &qword_2CD5F00[2];
  qword_2CD5F00[3] = &qword_2CD5F00[6];
  qword_2CD5F00[4] = 1;
  LODWORD(qword_2CD5F00[5]) = 0;
  BYTE4(qword_2CD5F00[5]) = 1;
  v1 = sub_21ED2B0("Merge context profiles before calculating thresholds.");
  v2 = LODWORD(qword_2CD5F00[1]);
  if ( (unsigned __int64)LODWORD(qword_2CD5F00[1]) + 1 > HIDWORD(qword_2CD5F00[1]) )
  {
    v25.m128i_i64[0] = v1;
    sub_22134E0(qword_2CD5F00, &qword_2CD5F00[2], LODWORD(qword_2CD5F00[1]) + 1LL, 8);
    v2 = LODWORD(qword_2CD5F00[1]);
    v1 = v25.m128i_i64[0];
  }
  *(_QWORD *)(qword_2CD5F00[0] + 8 * v2) = v1;
  LOWORD(qword_2CD5F00[9]) = 0;
  ++LODWORD(qword_2CD5F00[1]);
  LOBYTE(qword_2CD5F00[7]) = 0;
  qword_2CD5F00[8] = off_2C474E8;
  *(__m128 *)&qword_2CD5F00[13] = _mm_loadh_ps((const double *)off_2C4E368);
  qword_2CD5EC0 = off_2C4B848;
  qword_2CD5F00[10] = off_2BC0B68;
  sub_21F3510(&qword_2CD5EC0, "profile-summary-contextless", 27);
  unk_2CD5EE8 = v0;
  BYTE2(dword_2CD5EC8) = BYTE2(dword_2CD5EC8) & 0x9F | 0x20;
  unk_2CD5EE0 = "Merge context profiles before calculating thresholds.";
  sub_21F4400(&qword_2CD5EC0);
  __cxa_atexit(sub_1FEA450, &qword_2CD5EC0, &off_2AFC540);
  v3 = j__strlen("A count is hot if it exceeds the minimum count to reach this percentile of total counts.");
  qword_2CD5E00 = &off_2C4B8B0;
  *(_QWORD *)&dword_2CD5E08 = dword_2CD5E08 & 0x80000000;
  qword_2CD5E40[1] = 0x100000000LL;
  unk_2CD5E10 = 0;
  unk_2CD5E18 = 0;
  unk_2CD5E20 = 0;
  unk_2CD5E28 = 0;
  unk_2CD5E30 = 0;
  unk_2CD5E38 = 0;
  qword_2CD5E40[0] = &qword_2CD5E40[2];
  qword_2CD5E40[3] = &qword_2CD5E40[6];
  qword_2CD5E40[4] = 1;
  LODWORD(qword_2CD5E40[5]) = 0;
  BYTE4(qword_2CD5E40[5]) = 1;
  v4 = sub_21ED2B0("A count is hot if it exceeds the minimum count to reach this percentile of total counts.");
  v5 = LODWORD(qword_2CD5E40[1]);
  if ( (unsigned __int64)LODWORD(qword_2CD5E40[1]) + 1 > HIDWORD(qword_2CD5E40[1]) )
  {
    v25.m128i_i64[0] = v4;
    sub_22134E0(qword_2CD5E40, &qword_2CD5E40[2], LODWORD(qword_2CD5E40[1]) + 1LL, 8);
    v5 = LODWORD(qword_2CD5E40[1]);
    v4 = v25.m128i_i64[0];
  }
  *(_QWORD *)(qword_2CD5E40[0] + 8 * v5) = v4;
  qword_2CD5E40[8] = off_2C47BB0;
  qword_2CD5E00 = off_2C4B778;
  ++LODWORD(qword_2CD5E40[1]);
  LODWORD(qword_2CD5E40[7]) = 0;
  qword_2CD5E40[10] = off_2BC0BC8;
  LODWORD(qword_2CD5E40[9]) = 0;
  BYTE4(qword_2CD5E40[9]) = 0;
  *(__m128 *)&qword_2CD5E40[13] = _mm_loadh_ps((const double *)&off_2C4D900);
  v25 = *(__m128i *)&qword_2CD5E40[13];
  sub_21F3510(&qword_2CD5E00, "profile-summary-cutoff-hot", 26);
  unk_2CD5E28 = v3;
  LODWORD(qword_2CD5E40[7]) = 990000;
  BYTE4(qword_2CD5E40[9]) = 1;
  LODWORD(qword_2CD5E40[9]) = 990000;
  BYTE2(dword_2CD5E08) = BYTE2(dword_2CD5E08) & 0x9F | 0x20;
  unk_2CD5E20 = "A count is hot if it exceeds the minimum count to reach this percentile of total counts.";
  sub_21F4400(&qword_2CD5E00);
  __cxa_atexit(sub_1FF0490, &qword_2CD5E00, &off_2AFC540);
  v6 = j__strlen("A count is cold if it is below the minimum count to reach this percentile of total counts.");
  qword_2CD5D40 = &off_2C4B8B0;
  *(_QWORD *)&dword_2CD5D48 = dword_2CD5D48 & 0x80000000;
  qword_2CD5D80[1] = 0x100000000LL;
  unk_2CD5D50 = 0;
  unk_2CD5D58 = 0;
  unk_2CD5D60 = 0;
  unk_2CD5D68 = 0;
  unk_2CD5D70 = 0;
  unk_2CD5D78 = 0;
  qword_2CD5D80[0] = &qword_2CD5D80[2];
  qword_2CD5D80[3] = &qword_2CD5D80[6];
  qword_2CD5D80[4] = 1;
  LODWORD(qword_2CD5D80[5]) = 0;
  BYTE4(qword_2CD5D80[5]) = 1;
  v7 = sub_21ED2B0("A count is cold if it is below the minimum count to reach this percentile of total counts.");
  v8 = LODWORD(qword_2CD5D80[1]);
  si128 = _mm_load_si128(&v25);
  if ( (unsigned __int64)LODWORD(qword_2CD5D80[1]) + 1 > HIDWORD(qword_2CD5D80[1]) )
  {
    v25.m128i_i64[0] = v7;
    v26[0] = si128;
    sub_22134E0(qword_2CD5D80, &qword_2CD5D80[2], LODWORD(qword_2CD5D80[1]) + 1LL, 8);
    v8 = LODWORD(qword_2CD5D80[1]);
    si128 = _mm_load_si128(v26);
    v7 = v25.m128i_i64[0];
  }
  *(_QWORD *)(qword_2CD5D80[0] + 8 * v8) = v7;
  qword_2CD5D80[8] = off_2C47BB0;
  qword_2CD5D40 = off_2C4B778;
  ++LODWORD(qword_2CD5D80[1]);
  LODWORD(qword_2CD5D80[7]) = 0;
  qword_2CD5D80[10] = off_2BC0BC8;
  LODWORD(qword_2CD5D80[9]) = 0;
  BYTE4(qword_2CD5D80[9]) = 0;
  *(__m128i *)&qword_2CD5D80[13] = si128;
  sub_21F3510(&qword_2CD5D40, "profile-summary-cutoff-cold", 27);
  unk_2CD5D68 = v6;
  LODWORD(qword_2CD5D80[7]) = 999999;
  BYTE4(qword_2CD5D80[9]) = 1;
  LODWORD(qword_2CD5D80[9]) = 999999;
  BYTE2(dword_2CD5D48) = BYTE2(dword_2CD5D48) & 0x9F | 0x20;
  unk_2CD5D60 = "A count is cold if it is below the minimum count to reach this percentile of total counts.";
  sub_21F4400(&qword_2CD5D40);
  __cxa_atexit(sub_1FF0490, &qword_2CD5D40, &off_2AFC540);
  v10 = j__strlen(
          "The code working set size is considered huge if the number of blocks required to reach the -profile-summary-cu"
          "toff-hot percentile exceeds this count.");
  qword_2CD5C80 = &off_2C4B8B0;
  *(_QWORD *)&dword_2CD5C88 = dword_2CD5C88 & 0x80000000;
  qword_2CD5CC0[1] = 0x100000000LL;
  unk_2CD5C90 = 0;
  unk_2CD5C98 = 0;
  unk_2CD5CA0 = 0;
  unk_2CD5CA8 = 0;
  unk_2CD5CB0 = 0;
  unk_2CD5CB8 = 0;
  qword_2CD5CC0[0] = &qword_2CD5CC0[2];
  qword_2CD5CC0[3] = &qword_2CD5CC0[6];
  qword_2CD5CC0[4] = 1;
  LODWORD(qword_2CD5CC0[5]) = 0;
  BYTE4(qword_2CD5CC0[5]) = 1;
  v11 = sub_21ED2B0(
          "The code working set size is considered huge if the number of blocks required to reach the -profile-summary-cu"
          "toff-hot percentile exceeds this count.");
  v12 = LODWORD(qword_2CD5CC0[1]);
  if ( (unsigned __int64)LODWORD(qword_2CD5CC0[1]) + 1 > HIDWORD(qword_2CD5CC0[1]) )
  {
    v25.m128i_i64[0] = v11;
    sub_22134E0(qword_2CD5CC0, &qword_2CD5CC0[2], LODWORD(qword_2CD5CC0[1]) + 1LL, 8);
    v12 = LODWORD(qword_2CD5CC0[1]);
    v11 = v25.m128i_i64[0];
  }
  *(_QWORD *)(qword_2CD5CC0[0] + 8 * v12) = v11;
  qword_2CD5CC0[8] = off_2C472D0;
  qword_2CD5C80 = off_2C4B710;
  ++LODWORD(qword_2CD5CC0[1]);
  LODWORD(qword_2CD5CC0[7]) = 0;
  qword_2CD5CC0[10] = off_2BC0BF8;
  LODWORD(qword_2CD5CC0[9]) = 0;
  BYTE4(qword_2CD5CC0[9]) = 0;
  *(__m128 *)&qword_2CD5CC0[13] = _mm_loadh_ps((const double *)off_2C4E4F8);
  v25 = *(__m128i *)&qword_2CD5CC0[13];
  sub_21F3510(&qword_2CD5C80, "profile-summary-huge-working-set-size-threshold", 47);
  unk_2CD5CA8 = v10;
  LODWORD(qword_2CD5CC0[7]) = 15000;
  BYTE4(qword_2CD5CC0[9]) = 1;
  LODWORD(qword_2CD5CC0[9]) = 15000;
  BYTE2(dword_2CD5C88) = BYTE2(dword_2CD5C88) & 0x9F | 0x20;
  unk_2CD5CA0 = "The code working set size is considered huge if the number of blocks required to reach the -profile-summ"
                "ary-cutoff-hot percentile exceeds this count.";
  sub_21F4400(&qword_2CD5C80);
  __cxa_atexit(sub_1FC9520, &qword_2CD5C80, &off_2AFC540);
  v13 = j__strlen(
          "The code working set size is considered large if the number of blocks required to reach the -profile-summary-c"
          "utoff-hot percentile exceeds this count.");
  qword_2CD5BC0 = &off_2C4B8B0;
  *(_QWORD *)&dword_2CD5BC8 = dword_2CD5BC8 & 0x80000000;
  qword_2CD5C00[1] = 0x100000000LL;
  unk_2CD5BD0 = 0;
  unk_2CD5BD8 = 0;
  unk_2CD5BE0 = 0;
  unk_2CD5BE8 = 0;
  unk_2CD5BF0 = 0;
  unk_2CD5BF8 = 0;
  qword_2CD5C00[0] = &qword_2CD5C00[2];
  qword_2CD5C00[3] = &qword_2CD5C00[6];
  qword_2CD5C00[4] = 1;
  LODWORD(qword_2CD5C00[5]) = 0;
  BYTE4(qword_2CD5C00[5]) = 1;
  v14 = sub_21ED2B0(
          "The code working set size is considered large if the number of blocks required to reach the -profile-summary-c"
          "utoff-hot percentile exceeds this count.");
  v15 = LODWORD(qword_2CD5C00[1]);
  v16 = _mm_load_si128(&v25);
  if ( (unsigned __int64)LODWORD(qword_2CD5C00[1]) + 1 > HIDWORD(qword_2CD5C00[1]) )
  {
    v25.m128i_i64[0] = v14;
    v26[0] = v16;
    sub_22134E0(qword_2CD5C00, &qword_2CD5C00[2], LODWORD(qword_2CD5C00[1]) + 1LL, 8);
    v15 = LODWORD(qword_2CD5C00[1]);
    v16 = _mm_load_si128(v26);
    v14 = v25.m128i_i64[0];
  }
  *(_QWORD *)(qword_2CD5C00[0] + 8 * v15) = v14;
  qword_2CD5C00[8] = off_2C472D0;
  qword_2CD5BC0 = off_2C4B710;
  ++LODWORD(qword_2CD5C00[1]);
  LODWORD(qword_2CD5C00[7]) = 0;
  qword_2CD5C00[10] = off_2BC0BF8;
  LODWORD(qword_2CD5C00[9]) = 0;
  BYTE4(qword_2CD5C00[9]) = 0;
  *(__m128i *)&qword_2CD5C00[13] = v16;
  sub_21F3510(&qword_2CD5BC0, "profile-summary-large-working-set-size-threshold", 48);
  unk_2CD5BE8 = v13;
  LODWORD(qword_2CD5C00[7]) = 12500;
  BYTE4(qword_2CD5C00[9]) = 1;
  LODWORD(qword_2CD5C00[9]) = 12500;
  BYTE2(dword_2CD5BC8) = BYTE2(dword_2CD5BC8) & 0x9F | 0x20;
  unk_2CD5BE0 = "The code working set size is considered large if the number of blocks required to reach the -profile-sum"
                "mary-cutoff-hot percentile exceeds this count.";
  sub_21F4400(&qword_2CD5BC0);
  __cxa_atexit(sub_1FC9520, &qword_2CD5BC0, &off_2AFC540);
  v17 = j__strlen("A fixed hot count that overrides the count derived from profile-summary-cutoff-hot");
  qword_2CD5B00 = &off_2C4B8B0;
  *(_QWORD *)&dword_2CD5B08 = dword_2CD5B08 & 0x80000000;
  qword_2CD5B40[1] = 0x100000000LL;
  unk_2CD5B10 = 0;
  unk_2CD5B18 = 0;
  unk_2CD5B20 = 0;
  unk_2CD5B28 = 0;
  unk_2CD5B30 = 0;
  unk_2CD5B38 = 0;
  qword_2CD5B40[0] = &qword_2CD5B40[2];
  qword_2CD5B40[3] = &qword_2CD5B40[6];
  qword_2CD5B40[4] = 1;
  LODWORD(qword_2CD5B40[5]) = 0;
  BYTE4(qword_2CD5B40[5]) = 1;
  v18 = sub_21ED2B0("A fixed hot count that overrides the count derived from profile-summary-cutoff-hot");
  v19 = LODWORD(qword_2CD5B40[1]);
  if ( (unsigned __int64)LODWORD(qword_2CD5B40[1]) + 1 > HIDWORD(qword_2CD5B40[1]) )
  {
    v25.m128i_i64[0] = v18;
    sub_22134E0(qword_2CD5B40, &qword_2CD5B40[2], LODWORD(qword_2CD5B40[1]) + 1LL, 8);
    v19 = LODWORD(qword_2CD5B40[1]);
    v18 = v25.m128i_i64[0];
  }
  *(_QWORD *)(qword_2CD5B40[0] + 8 * v19) = v18;
  qword_2CD5B40[8] = off_2C47B28;
  ++LODWORD(qword_2CD5B40[1]);
  qword_2CD5B00 = off_2C47B48;
  qword_2CD5B40[11] = off_2BC0C28;
  qword_2CD5B40[7] = 0;
  qword_2CD5B40[9] = 0;
  LOBYTE(qword_2CD5B40[10]) = 0;
  *(__m128 *)&qword_2CD5B40[14] = _mm_loadh_ps((const double *)off_2C4EC90);
  v25 = *(__m128i *)&qword_2CD5B40[14];
  sub_21F3510(&qword_2CD5B00, "profile-summary-hot-count", 25);
  unk_2CD5B28 = v17;
  BYTE2(dword_2CD5B08) = BYTE2(dword_2CD5B08) & 0x9F | 0x40;
  unk_2CD5B20 = "A fixed hot count that overrides the count derived from profile-summary-cutoff-hot";
  sub_21F4400(&qword_2CD5B00);
  __cxa_atexit(sub_1FF02C0, &qword_2CD5B00, &off_2AFC540);
  v20 = j__strlen("A fixed cold count that overrides the count derived from profile-summary-cutoff-cold");
  qword_2CD5A40 = &off_2C4B8B0;
  *(_QWORD *)&dword_2CD5A48 = dword_2CD5A48 & 0x80000000;
  qword_2CD5A80[1] = 0x100000000LL;
  unk_2CD5A50 = 0;
  unk_2CD5A58 = 0;
  unk_2CD5A60 = 0;
  unk_2CD5A68 = 0;
  unk_2CD5A70 = 0;
  unk_2CD5A78 = 0;
  qword_2CD5A80[0] = &qword_2CD5A80[2];
  qword_2CD5A80[3] = &qword_2CD5A80[6];
  qword_2CD5A80[4] = 1;
  LODWORD(qword_2CD5A80[5]) = 0;
  BYTE4(qword_2CD5A80[5]) = 1;
  v21 = sub_21ED2B0("A fixed cold count that overrides the count derived from profile-summary-cutoff-cold");
  v22 = LODWORD(qword_2CD5A80[1]);
  v23 = _mm_load_si128(&v25);
  if ( (unsigned __int64)LODWORD(qword_2CD5A80[1]) + 1 > HIDWORD(qword_2CD5A80[1]) )
  {
    v26[0].m128i_i64[0] = v21;
    sub_22134E0(qword_2CD5A80, &qword_2CD5A80[2], LODWORD(qword_2CD5A80[1]) + 1LL, 8);
    v22 = LODWORD(qword_2CD5A80[1]);
    v21 = v26[0].m128i_i64[0];
    v23 = _mm_load_si128(&v25);
  }
  *(_QWORD *)(qword_2CD5A80[0] + 8 * v22) = v21;
  qword_2CD5A80[8] = off_2C47B28;
  qword_2CD5A40 = off_2C47B48;
  ++LODWORD(qword_2CD5A80[1]);
  qword_2CD5A80[11] = off_2BC0C28;
  qword_2CD5A80[7] = 0;
  qword_2CD5A80[9] = 0;
  LOBYTE(qword_2CD5A80[10]) = 0;
  *(__m128i *)&qword_2CD5A80[14] = v23;
  sub_21F3510(&qword_2CD5A40, "profile-summary-cold-count", 26);
  unk_2CD5A68 = v20;
  BYTE2(dword_2CD5A48) = BYTE2(dword_2CD5A48) & 0x9F | 0x40;
  unk_2CD5A60 = "A fixed cold count that overrides the count derived from profile-summary-cutoff-cold";
  sub_21F4400(&qword_2CD5A40);
  result = __cxa_atexit(sub_1FF02C0, &qword_2CD5A40, &off_2AFC540);
  dword_2CD5A20 = 0;
  xmmword_2CD5A28 = (__int128)_mm_load_si128((const __m128i *)&xmmword_23843A0);
  return result;
}

