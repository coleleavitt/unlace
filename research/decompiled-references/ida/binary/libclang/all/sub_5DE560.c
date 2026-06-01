int __fastcall sub_5DE560(__int64 a1, __int64 a2)
{
  __m128i v2; // xmm2
  __m128i v3; // xmm1
  __m128i v4; // xmm3
  __int64 v5; // rbx
  __int64 v6; // rax
  __m128i v7; // xmm0
  char v8; // al
  __int64 v9; // r15
  __int64 v10; // rax
  __m128i v11; // xmm4
  char v12; // al
  __int64 v13; // rax
  __int64 *v14; // rsi
  __int64 *v15; // r9
  __int64 v16; // rax
  __m128i v17; // xmm5
  char v18; // al
  __int64 v19; // r15
  __int64 v20; // rax
  __m128i v21; // xmm6
  char v22; // al
  __int64 v23; // rax
  __int64 v24; // rsi
  __int64 v25; // r9
  __int64 v26; // rax
  __m128i v27; // xmm7
  char v28; // al
  __int64 v29; // r15
  __int64 v30; // rax
  __m128i v31; // xmm4
  char v32; // al
  __int64 v33; // rbp
  __int64 v34; // rax
  __m128i v35; // xmm5
  char v36; // al
  __m128i v38; // [rsp+0h] [rbp-78h] BYREF
  __m128i v39; // [rsp+10h] [rbp-68h] BYREF
  __m128i v40; // [rsp+20h] [rbp-58h] BYREF
  __int64 *v41; // [rsp+38h] [rbp-40h]

  v2 = _mm_loadl_epi64((const __m128i *)&off_49F13E8);
  v3 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_49F13E0), (__m128i)(unsigned __int64)nullsub_374);
  v4 = _mm_loadl_epi64((const __m128i *)&off_49F13F0);
  qword_4B234A0[2] = 0;
  v38 = v3;
  qword_4B234A0[0] = (__int64)&off_4A6E058;
  v39 = _mm_unpacklo_epi64(v2, (__m128i)(unsigned __int64)nullsub_267);
  qword_4B234A0[1] &= 0x80000000uLL;
  v40 = _mm_unpacklo_epi64(v4, (__m128i)(unsigned __int64)nullsub_291);
  qword_4B234A0[3] = 0;
  qword_4B234A0[4] = 0;
  qword_4B234A0[5] = 0;
  qword_4B234A0[6] = 0;
  qword_4B234A0[7] = 0;
  qword_4B234A0[8] = (__int64)&qword_4B234A0[10];
  qword_4B234A0[11] = (__int64)&qword_4B234A0[14];
  qword_4B234A0[9] = 0x100000000LL;
  qword_4B234A0[12] = 1;
  LODWORD(qword_4B234A0[13]) = 0;
  BYTE4(qword_4B234A0[13]) = 1;
  v5 = sub_259AC30(a1, a2);
  v6 = LODWORD(qword_4B234A0[9]);
  if ( HIDWORD(qword_4B234A0[9]) < (unsigned __int64)(v6 + 1) )
  {
    sub_25D6060(&qword_4B234A0[8], &qword_4B234A0[10], v6 + 1, 8);
    v6 = LODWORD(qword_4B234A0[9]);
  }
  *(_QWORD *)(qword_4B234A0[8] + 8 * v6) = v5;
  LOWORD(qword_4B234A0[17]) = 0;
  *(_OWORD *)&qword_4B234A0[19] = 0;
  v7 = _mm_loadl_epi64((const __m128i *)&off_49F13F8);
  ++LODWORD(qword_4B234A0[9]);
  qword_4B234A0[16] = (__int64)&off_4A64730;
  LOBYTE(qword_4B234A0[15]) = 0;
  qword_4B234A0[0] = (__int64)off_4A6DFF0;
  qword_4B234A0[18] = (__int64)off_49D9168;
  *(__m128i *)&qword_4B234A0[21] = _mm_unpacklo_epi64(v7, (__m128i)(unsigned __int64)nullsub_266);
  sub_259F400(qword_4B234A0, "profile-summary-contextless", 27);
  v8 = BYTE2(qword_4B234A0[1]);
  qword_4B234A0[5] = 53;
  BYTE2(qword_4B234A0[1]) = v8 & 0x9F | 0x20;
  qword_4B234A0[4] = (__int64)"Merge context profiles before calculating thresholds.";
  sub_259EC40(qword_4B234A0);
  __cxa_atexit(sub_1F6C9D0, qword_4B234A0, &off_47CFE00);
  qword_4B233E0[0] = (__int64)&off_4A6E058;
  qword_4B233E0[1] &= 0x80000000uLL;
  qword_4B233E0[8] = (__int64)&qword_4B233E0[10];
  v41 = &qword_4B233E0[10];
  qword_4B233E0[2] = 0;
  qword_4B233E0[3] = 0;
  qword_4B233E0[4] = 0;
  qword_4B233E0[5] = 0;
  qword_4B233E0[6] = 0;
  qword_4B233E0[7] = 0;
  qword_4B233E0[9] = 0x100000000LL;
  qword_4B233E0[11] = (__int64)&qword_4B233E0[14];
  qword_4B233E0[12] = 1;
  LODWORD(qword_4B233E0[13]) = 0;
  BYTE4(qword_4B233E0[13]) = 1;
  v9 = sub_259AC30(sub_1F6C9D0, &qword_4B233E0[10]);
  v10 = LODWORD(qword_4B233E0[9]);
  if ( HIDWORD(qword_4B233E0[9]) < (unsigned __int64)(v10 + 1) )
  {
    sub_25D6060(&qword_4B233E0[8], v41, v10 + 1, 8);
    v10 = LODWORD(qword_4B233E0[9]);
  }
  v11 = _mm_load_si128(&v40);
  *(_QWORD *)(qword_4B233E0[8] + 8 * v10) = v9;
  *(_OWORD *)&qword_4B233E0[19] = 0;
  *(__m128i *)&qword_4B233E0[21] = v11;
  qword_4B233E0[16] = (__int64)&off_4A692B8;
  ++LODWORD(qword_4B233E0[9]);
  LODWORD(qword_4B233E0[15]) = 0;
  qword_4B233E0[0] = (__int64)off_4A6DF20;
  LODWORD(qword_4B233E0[17]) = 0;
  BYTE4(qword_4B233E0[17]) = 0;
  qword_4B233E0[18] = (__int64)off_49D91C8;
  sub_259F400(qword_4B233E0, "profile-summary-cutoff-hot", 26);
  v12 = BYTE2(qword_4B233E0[1]);
  LODWORD(qword_4B233E0[15]) = 990000;
  BYTE4(qword_4B233E0[17]) = 1;
  qword_4B233E0[5] = 88;
  LODWORD(qword_4B233E0[17]) = 990000;
  BYTE2(qword_4B233E0[1]) = v12 & 0x9F | 0x20;
  qword_4B233E0[4] = (__int64)"A count is hot if it exceeds the minimum count to reach this percentile of total counts.";
  sub_259EC40(qword_4B233E0);
  __cxa_atexit(sub_20B86E0, qword_4B233E0, &off_47CFE00);
  qword_4B23320[0] = (__int64)&off_4A6E058;
  qword_4B23320[1] &= 0x80000000uLL;
  qword_4B23320[8] = (__int64)&qword_4B23320[10];
  v41 = &qword_4B23320[10];
  qword_4B23320[2] = 0;
  qword_4B23320[3] = 0;
  qword_4B23320[4] = 0;
  qword_4B23320[5] = 0;
  qword_4B23320[6] = 0;
  qword_4B23320[7] = 0;
  qword_4B23320[9] = 0x100000000LL;
  qword_4B23320[11] = (__int64)&qword_4B23320[14];
  qword_4B23320[12] = 1;
  LODWORD(qword_4B23320[13]) = 0;
  BYTE4(qword_4B23320[13]) = 1;
  v13 = sub_259AC30(sub_20B86E0, &qword_4B23320[10]);
  v14 = v41;
  v15 = (__int64 *)v13;
  v16 = LODWORD(qword_4B23320[9]);
  if ( HIDWORD(qword_4B23320[9]) < (unsigned __int64)(v16 + 1) )
  {
    v41 = v15;
    sub_25D6060(&qword_4B23320[8], v14, v16 + 1, 8);
    v16 = LODWORD(qword_4B23320[9]);
    v15 = v41;
  }
  v17 = _mm_load_si128(&v40);
  *(_QWORD *)(qword_4B23320[8] + 8 * v16) = v15;
  *(_OWORD *)&qword_4B23320[19] = 0;
  *(__m128i *)&qword_4B23320[21] = v17;
  qword_4B23320[16] = (__int64)&off_4A692B8;
  ++LODWORD(qword_4B23320[9]);
  LODWORD(qword_4B23320[15]) = 0;
  qword_4B23320[0] = (__int64)off_4A6DF20;
  LODWORD(qword_4B23320[17]) = 0;
  BYTE4(qword_4B23320[17]) = 0;
  qword_4B23320[18] = (__int64)off_49D91C8;
  sub_259F400(qword_4B23320, "profile-summary-cutoff-cold", 27);
  v18 = BYTE2(qword_4B23320[1]);
  LODWORD(qword_4B23320[15]) = 999999;
  BYTE4(qword_4B23320[17]) = 1;
  qword_4B23320[5] = 90;
  LODWORD(qword_4B23320[17]) = 999999;
  BYTE2(qword_4B23320[1]) = v18 & 0x9F | 0x20;
  qword_4B23320[4] = (__int64)"A count is cold if it is below the minimum count to reach this percentile of total counts.";
  sub_259EC40(qword_4B23320);
  __cxa_atexit(sub_20B86E0, qword_4B23320, &off_47CFE00);
  qword_4B23260[0] = (__int64)&off_4A6E058;
  qword_4B23260[1] &= 0x80000000uLL;
  qword_4B23260[8] = (__int64)&qword_4B23260[10];
  v40.m128i_i64[0] = (__int64)&qword_4B23260[10];
  qword_4B23260[2] = 0;
  qword_4B23260[3] = 0;
  qword_4B23260[4] = 0;
  qword_4B23260[5] = 0;
  qword_4B23260[6] = 0;
  qword_4B23260[7] = 0;
  qword_4B23260[9] = 0x100000000LL;
  qword_4B23260[11] = (__int64)&qword_4B23260[14];
  qword_4B23260[12] = 1;
  LODWORD(qword_4B23260[13]) = 0;
  BYTE4(qword_4B23260[13]) = 1;
  v19 = sub_259AC30(sub_20B86E0, &qword_4B23260[10]);
  v20 = LODWORD(qword_4B23260[9]);
  if ( HIDWORD(qword_4B23260[9]) < (unsigned __int64)(v20 + 1) )
  {
    sub_25D6060(&qword_4B23260[8], v40.m128i_i64[0], v20 + 1, 8);
    v20 = LODWORD(qword_4B23260[9]);
  }
  v21 = _mm_load_si128(&v39);
  *(_QWORD *)(qword_4B23260[8] + 8 * v20) = v19;
  *(_OWORD *)&qword_4B23260[19] = 0;
  *(__m128i *)&qword_4B23260[21] = v21;
  qword_4B23260[16] = (__int64)&off_4A64710;
  ++LODWORD(qword_4B23260[9]);
  LODWORD(qword_4B23260[15]) = 0;
  qword_4B23260[0] = (__int64)off_4A6DEB8;
  LODWORD(qword_4B23260[17]) = 0;
  BYTE4(qword_4B23260[17]) = 0;
  qword_4B23260[18] = (__int64)off_49D9228;
  sub_259F400(qword_4B23260, "profile-summary-huge-working-set-size-threshold", 47);
  v22 = BYTE2(qword_4B23260[1]);
  LODWORD(qword_4B23260[15]) = 15000;
  BYTE4(qword_4B23260[17]) = 1;
  qword_4B23260[5] = 149;
  LODWORD(qword_4B23260[17]) = 15000;
  BYTE2(qword_4B23260[1]) = v22 & 0x9F | 0x20;
  qword_4B23260[4] = (__int64)"The code working set size is considered huge if the number of blocks required to reach the"
                              " -profile-summary-cutoff-hot percentile exceeds this count.";
  sub_259EC40(qword_4B23260);
  __cxa_atexit(sub_1F6C940, qword_4B23260, &off_47CFE00);
  qword_4B231A0[0] = (__int64)&off_4A6E058;
  qword_4B231A0[1] &= 0x80000000uLL;
  qword_4B231A0[8] = (__int64)&qword_4B231A0[10];
  v40.m128i_i64[0] = (__int64)&qword_4B231A0[10];
  qword_4B231A0[2] = 0;
  qword_4B231A0[3] = 0;
  qword_4B231A0[4] = 0;
  qword_4B231A0[5] = 0;
  qword_4B231A0[6] = 0;
  qword_4B231A0[7] = 0;
  qword_4B231A0[9] = 0x100000000LL;
  qword_4B231A0[11] = (__int64)&qword_4B231A0[14];
  qword_4B231A0[12] = 1;
  LODWORD(qword_4B231A0[13]) = 0;
  BYTE4(qword_4B231A0[13]) = 1;
  v23 = sub_259AC30(sub_1F6C940, &qword_4B231A0[10]);
  v24 = v40.m128i_i64[0];
  v25 = v23;
  v26 = LODWORD(qword_4B231A0[9]);
  if ( HIDWORD(qword_4B231A0[9]) < (unsigned __int64)(v26 + 1) )
  {
    v40.m128i_i64[0] = v25;
    sub_25D6060(&qword_4B231A0[8], v24, v26 + 1, 8);
    v26 = LODWORD(qword_4B231A0[9]);
    v25 = v40.m128i_i64[0];
  }
  v27 = _mm_load_si128(&v39);
  *(_QWORD *)(qword_4B231A0[8] + 8 * v26) = v25;
  *(_OWORD *)&qword_4B231A0[19] = 0;
  *(__m128i *)&qword_4B231A0[21] = v27;
  qword_4B231A0[16] = (__int64)&off_4A64710;
  ++LODWORD(qword_4B231A0[9]);
  LODWORD(qword_4B231A0[15]) = 0;
  qword_4B231A0[0] = (__int64)off_4A6DEB8;
  LODWORD(qword_4B231A0[17]) = 0;
  BYTE4(qword_4B231A0[17]) = 0;
  qword_4B231A0[18] = (__int64)off_49D9228;
  sub_259F400(qword_4B231A0, "profile-summary-large-working-set-size-threshold", 48);
  v28 = BYTE2(qword_4B231A0[1]);
  LODWORD(qword_4B231A0[15]) = 12500;
  BYTE4(qword_4B231A0[17]) = 1;
  qword_4B231A0[5] = 150;
  LODWORD(qword_4B231A0[17]) = 12500;
  BYTE2(qword_4B231A0[1]) = v28 & 0x9F | 0x20;
  qword_4B231A0[4] = (__int64)"The code working set size is considered large if the number of blocks required to reach th"
                              "e -profile-summary-cutoff-hot percentile exceeds this count.";
  sub_259EC40(qword_4B231A0);
  __cxa_atexit(sub_1F6C940, qword_4B231A0, &off_47CFE00);
  qword_4B230E0[0] = (__int64)&off_4A6E058;
  qword_4B230E0[1] &= 0x80000000uLL;
  qword_4B230E0[8] = (__int64)&qword_4B230E0[10];
  v39.m128i_i64[0] = (__int64)&qword_4B230E0[10];
  qword_4B230E0[2] = 0;
  qword_4B230E0[3] = 0;
  qword_4B230E0[4] = 0;
  qword_4B230E0[5] = 0;
  qword_4B230E0[6] = 0;
  qword_4B230E0[7] = 0;
  qword_4B230E0[9] = 0x100000000LL;
  qword_4B230E0[11] = (__int64)&qword_4B230E0[14];
  qword_4B230E0[12] = 1;
  LODWORD(qword_4B230E0[13]) = 0;
  BYTE4(qword_4B230E0[13]) = 1;
  v29 = sub_259AC30(sub_1F6C940, &qword_4B230E0[10]);
  v30 = LODWORD(qword_4B230E0[9]);
  if ( HIDWORD(qword_4B230E0[9]) < (unsigned __int64)(v30 + 1) )
  {
    sub_25D6060(&qword_4B230E0[8], v39.m128i_i64[0], v30 + 1, 8);
    v30 = LODWORD(qword_4B230E0[9]);
  }
  v31 = _mm_load_si128(&v38);
  *(_QWORD *)(qword_4B230E0[8] + 8 * v30) = v29;
  *(_OWORD *)&qword_4B230E0[20] = 0;
  *(__m128i *)&qword_4B230E0[22] = v31;
  qword_4B230E0[16] = (__int64)off_4A6E4B8;
  ++LODWORD(qword_4B230E0[9]);
  qword_4B230E0[15] = 0;
  qword_4B230E0[0] = (__int64)off_4A6E4D8;
  qword_4B230E0[17] = 0;
  LOBYTE(qword_4B230E0[18]) = 0;
  qword_4B230E0[19] = (__int64)off_49D9258;
  sub_259F400(qword_4B230E0, "profile-summary-hot-count", 25);
  v32 = BYTE2(qword_4B230E0[1]);
  qword_4B230E0[5] = 82;
  BYTE2(qword_4B230E0[1]) = v32 & 0x9F | 0x40;
  qword_4B230E0[4] = (__int64)"A fixed hot count that overrides the count derived from profile-summary-cutoff-hot";
  sub_259EC40(qword_4B230E0);
  __cxa_atexit(sub_25D0820, qword_4B230E0, &off_47CFE00);
  qword_4B23020[0] = (__int64)&off_4A6E058;
  qword_4B23020[1] &= 0x80000000uLL;
  qword_4B23020[12] = 1;
  qword_4B23020[2] = 0;
  qword_4B23020[3] = 0;
  qword_4B23020[4] = 0;
  qword_4B23020[5] = 0;
  qword_4B23020[6] = 0;
  qword_4B23020[7] = 0;
  qword_4B23020[8] = (__int64)&qword_4B23020[10];
  qword_4B23020[9] = 0x100000000LL;
  qword_4B23020[11] = (__int64)&qword_4B23020[14];
  LODWORD(qword_4B23020[13]) = 0;
  BYTE4(qword_4B23020[13]) = 1;
  v33 = sub_259AC30(sub_25D0820, qword_4B230E0);
  v34 = LODWORD(qword_4B23020[9]);
  if ( HIDWORD(qword_4B23020[9]) < (unsigned __int64)(v34 + 1) )
  {
    sub_25D6060(&qword_4B23020[8], &qword_4B23020[10], v34 + 1, 8);
    v34 = LODWORD(qword_4B23020[9]);
  }
  v35 = _mm_load_si128(&v38);
  *(_QWORD *)(qword_4B23020[8] + 8 * v34) = v33;
  *(_OWORD *)&qword_4B23020[20] = 0;
  *(__m128i *)&qword_4B23020[22] = v35;
  qword_4B23020[16] = (__int64)off_4A6E4B8;
  ++LODWORD(qword_4B23020[9]);
  qword_4B23020[15] = 0;
  qword_4B23020[0] = (__int64)off_4A6E4D8;
  qword_4B23020[17] = 0;
  LOBYTE(qword_4B23020[18]) = 0;
  qword_4B23020[19] = (__int64)off_49D9258;
  sub_259F400(qword_4B23020, "profile-summary-cold-count", 26);
  v36 = BYTE2(qword_4B23020[1]);
  qword_4B23020[5] = 84;
  BYTE2(qword_4B23020[1]) = v36 & 0x9F | 0x40;
  qword_4B23020[4] = (__int64)"A fixed cold count that overrides the count derived from profile-summary-cutoff-cold";
  sub_259EC40(qword_4B23020);
  return __cxa_atexit(sub_25D0820, qword_4B23020, &off_47CFE00);
}

