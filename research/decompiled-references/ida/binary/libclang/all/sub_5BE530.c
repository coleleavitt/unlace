int __fastcall sub_5BE530(__int64 a1, __int64 a2)
{
  __m128i v2; // xmm1
  __m128i v3; // xmm2
  __int64 v4; // rbx
  __int64 v5; // rax
  __m128i v6; // xmm0
  char v7; // al
  __int64 v8; // r15
  __int64 v9; // rax
  __m128i v10; // xmm6
  char v11; // al
  __int64 v12; // rax
  __int64 *v13; // rsi
  __int64 *v14; // r9
  __int64 v15; // rax
  __m128i v16; // xmm7
  char v17; // al
  __int64 v18; // r15
  __int64 v19; // rax
  __m128i v20; // xmm3
  char v21; // al
  __int64 v22; // rbp
  __int64 v23; // rax
  __m128i v24; // xmm4
  char v25; // al
  __m128i v27; // [rsp+0h] [rbp-68h] BYREF
  __m128i v28; // [rsp+10h] [rbp-58h] BYREF
  __int64 *v29; // [rsp+28h] [rbp-40h]

  v2 = _mm_loadl_epi64((const __m128i *)&off_49EC2A8);
  v3 = _mm_loadl_epi64((const __m128i *)&off_49EC2B0);
  qword_4B0D7E0[2] = 0;
  qword_4B0D7E0[0] = (__int64)&off_4A6E058;
  qword_4B0D7E0[1] &= 0x80000000uLL;
  v27 = _mm_unpacklo_epi64(v2, (__m128i)(unsigned __int64)nullsub_266);
  v28 = _mm_unpacklo_epi64(v3, (__m128i)(unsigned __int64)nullsub_267);
  qword_4B0D7E0[3] = 0;
  qword_4B0D7E0[4] = 0;
  qword_4B0D7E0[5] = 0;
  qword_4B0D7E0[6] = 0;
  qword_4B0D7E0[7] = 0;
  qword_4B0D7E0[8] = (__int64)&qword_4B0D7E0[10];
  qword_4B0D7E0[9] = 0x100000000LL;
  qword_4B0D7E0[11] = (__int64)&qword_4B0D7E0[14];
  LODWORD(qword_4B0D7E0[13]) = 0;
  qword_4B0D7E0[12] = 1;
  BYTE4(qword_4B0D7E0[13]) = 1;
  v4 = sub_259AC30(a1, a2);
  v5 = LODWORD(qword_4B0D7E0[9]);
  if ( HIDWORD(qword_4B0D7E0[9]) < (unsigned __int64)(v5 + 1) )
  {
    sub_25D6060(&qword_4B0D7E0[8], &qword_4B0D7E0[10], v5 + 1, 8);
    v5 = LODWORD(qword_4B0D7E0[9]);
  }
  *(_QWORD *)(qword_4B0D7E0[8] + 8 * v5) = v4;
  *(_OWORD *)&qword_4B0D7E0[19] = 0;
  v6 = _mm_loadl_epi64((const __m128i *)&off_49EC2B8);
  ++LODWORD(qword_4B0D7E0[9]);
  qword_4B0D7E0[16] = (__int64)off_4A84C78;
  LODWORD(qword_4B0D7E0[15]) = 0;
  BYTE4(qword_4B0D7E0[17]) = 0;
  qword_4B0D7E0[0] = (__int64)off_4A84C98;
  LODWORD(qword_4B0D7E0[17]) = 0;
  qword_4B0D7E0[18] = (__int64)off_49D92B8;
  *(__m128i *)&qword_4B0D7E0[21] = _mm_unpacklo_epi64(v6, (__m128i)(unsigned __int64)nullsub_617);
  sub_259F400(qword_4B0D7E0, "memprof-lifetime-access-density-cold-threshold", 46);
  v7 = BYTE2(qword_4B0D7E0[1]);
  BYTE4(qword_4B0D7E0[17]) = 1;
  LODWORD(qword_4B0D7E0[15]) = 1028443341;
  qword_4B0D7E0[5] = 123;
  BYTE2(qword_4B0D7E0[1]) = v7 & 0x9F | 0x20;
  LODWORD(qword_4B0D7E0[17]) = 1028443341;
  qword_4B0D7E0[4] = (__int64)"The threshold the lifetime access density (accesses per byte per lifetime sec) must be und"
                              "er to consider an allocation cold";
  sub_259EC40(qword_4B0D7E0);
  __cxa_atexit(sub_37BB5A0, qword_4B0D7E0, &off_47CFE00);
  qword_4B0D720[0] = (__int64)&off_4A6E058;
  qword_4B0D720[1] &= 0x80000000uLL;
  qword_4B0D720[8] = (__int64)&qword_4B0D720[10];
  v29 = &qword_4B0D720[10];
  qword_4B0D720[2] = 0;
  qword_4B0D720[3] = 0;
  qword_4B0D720[4] = 0;
  qword_4B0D720[5] = 0;
  qword_4B0D720[6] = 0;
  qword_4B0D720[7] = 0;
  qword_4B0D720[9] = 0x100000000LL;
  qword_4B0D720[11] = (__int64)&qword_4B0D720[14];
  qword_4B0D720[12] = 1;
  LODWORD(qword_4B0D720[13]) = 0;
  BYTE4(qword_4B0D720[13]) = 1;
  v8 = sub_259AC30(sub_37BB5A0, &qword_4B0D720[10]);
  v9 = LODWORD(qword_4B0D720[9]);
  if ( HIDWORD(qword_4B0D720[9]) < (unsigned __int64)(v9 + 1) )
  {
    sub_25D6060(&qword_4B0D720[8], v29, v9 + 1, 8);
    v9 = LODWORD(qword_4B0D720[9]);
  }
  v10 = _mm_load_si128(&v28);
  *(_QWORD *)(qword_4B0D720[8] + 8 * v9) = v8;
  *(_OWORD *)&qword_4B0D720[19] = 0;
  *(__m128i *)&qword_4B0D720[21] = v10;
  qword_4B0D720[16] = (__int64)&off_4A64710;
  ++LODWORD(qword_4B0D720[9]);
  LODWORD(qword_4B0D720[15]) = 0;
  qword_4B0D720[0] = (__int64)off_4A6DEB8;
  LODWORD(qword_4B0D720[17]) = 0;
  BYTE4(qword_4B0D720[17]) = 0;
  qword_4B0D720[18] = (__int64)off_49D9228;
  sub_259F400(qword_4B0D720, "memprof-ave-lifetime-cold-threshold", 35);
  v11 = BYTE2(qword_4B0D720[1]);
  LODWORD(qword_4B0D720[15]) = 200;
  BYTE4(qword_4B0D720[17]) = 1;
  qword_4B0D720[5] = 64;
  LODWORD(qword_4B0D720[17]) = 200;
  BYTE2(qword_4B0D720[1]) = v11 & 0x9F | 0x20;
  qword_4B0D720[4] = (__int64)"The average lifetime (s) for an allocation to be considered cold";
  sub_259EC40(qword_4B0D720);
  __cxa_atexit(sub_1F6C940, qword_4B0D720, &off_47CFE00);
  qword_4B0D660[0] = (__int64)&off_4A6E058;
  qword_4B0D660[1] &= 0x80000000uLL;
  qword_4B0D660[8] = (__int64)&qword_4B0D660[10];
  v29 = &qword_4B0D660[10];
  qword_4B0D660[2] = 0;
  qword_4B0D660[3] = 0;
  qword_4B0D660[4] = 0;
  qword_4B0D660[5] = 0;
  qword_4B0D660[6] = 0;
  qword_4B0D660[7] = 0;
  qword_4B0D660[9] = 0x100000000LL;
  qword_4B0D660[11] = (__int64)&qword_4B0D660[14];
  qword_4B0D660[12] = 1;
  LODWORD(qword_4B0D660[13]) = 0;
  BYTE4(qword_4B0D660[13]) = 1;
  v12 = sub_259AC30(sub_1F6C940, &qword_4B0D660[10]);
  v13 = v29;
  v14 = (__int64 *)v12;
  v15 = LODWORD(qword_4B0D660[9]);
  if ( HIDWORD(qword_4B0D660[9]) < (unsigned __int64)(v15 + 1) )
  {
    v29 = v14;
    sub_25D6060(&qword_4B0D660[8], v13, v15 + 1, 8);
    v15 = LODWORD(qword_4B0D660[9]);
    v14 = v29;
  }
  v16 = _mm_load_si128(&v28);
  *(_QWORD *)(qword_4B0D660[8] + 8 * v15) = v14;
  *(_OWORD *)&qword_4B0D660[19] = 0;
  *(__m128i *)&qword_4B0D660[21] = v16;
  qword_4B0D660[16] = (__int64)&off_4A64710;
  ++LODWORD(qword_4B0D660[9]);
  LODWORD(qword_4B0D660[15]) = 0;
  qword_4B0D660[0] = (__int64)off_4A6DEB8;
  LODWORD(qword_4B0D660[17]) = 0;
  BYTE4(qword_4B0D660[17]) = 0;
  qword_4B0D660[18] = (__int64)off_49D9228;
  sub_259F400(qword_4B0D660, "memprof-min-ave-lifetime-access-density-hot-threshold", 53);
  v17 = BYTE2(qword_4B0D660[1]);
  LODWORD(qword_4B0D660[15]) = 1000;
  BYTE4(qword_4B0D660[17]) = 1;
  qword_4B0D660[5] = 90;
  LODWORD(qword_4B0D660[17]) = 1000;
  BYTE2(qword_4B0D660[1]) = v17 & 0x9F | 0x20;
  qword_4B0D660[4] = (__int64)"The minimum TotalLifetimeAccessDensity / AllocCount for an allocation to be considered hot";
  sub_259EC40(qword_4B0D660);
  __cxa_atexit(sub_1F6C940, qword_4B0D660, &off_47CFE00);
  qword_4B0D5A0[0] = (__int64)&off_4A6E058;
  qword_4B0D5A0[1] &= 0x80000000uLL;
  qword_4B0D5A0[8] = (__int64)&qword_4B0D5A0[10];
  v28.m128i_i64[0] = (__int64)&qword_4B0D5A0[10];
  qword_4B0D5A0[2] = 0;
  qword_4B0D5A0[3] = 0;
  qword_4B0D5A0[4] = 0;
  qword_4B0D5A0[5] = 0;
  qword_4B0D5A0[6] = 0;
  qword_4B0D5A0[7] = 0;
  qword_4B0D5A0[9] = 0x100000000LL;
  qword_4B0D5A0[11] = (__int64)&qword_4B0D5A0[14];
  qword_4B0D5A0[12] = 1;
  LODWORD(qword_4B0D5A0[13]) = 0;
  BYTE4(qword_4B0D5A0[13]) = 1;
  v18 = sub_259AC30(sub_1F6C940, &qword_4B0D5A0[10]);
  v19 = LODWORD(qword_4B0D5A0[9]);
  if ( HIDWORD(qword_4B0D5A0[9]) < (unsigned __int64)(v19 + 1) )
  {
    sub_25D6060(&qword_4B0D5A0[8], v28.m128i_i64[0], v19 + 1, 8);
    v19 = LODWORD(qword_4B0D5A0[9]);
  }
  v20 = _mm_load_si128(&v27);
  *(_QWORD *)(qword_4B0D5A0[8] + 8 * v19) = v18;
  LOWORD(qword_4B0D5A0[17]) = 0;
  *(_OWORD *)&qword_4B0D5A0[19] = 0;
  qword_4B0D5A0[16] = (__int64)&off_4A64730;
  *(__m128i *)&qword_4B0D5A0[21] = v20;
  ++LODWORD(qword_4B0D5A0[9]);
  qword_4B0D5A0[0] = (__int64)off_4A6DFF0;
  LOBYTE(qword_4B0D5A0[15]) = 0;
  qword_4B0D5A0[18] = (__int64)off_49D9168;
  sub_259F400(qword_4B0D5A0, "memprof-use-hot-hints", 21);
  v21 = BYTE2(qword_4B0D5A0[1]);
  LOBYTE(qword_4B0D5A0[15]) = 0;
  LOWORD(qword_4B0D5A0[17]) = 256;
  qword_4B0D5A0[5] = 73;
  BYTE2(qword_4B0D5A0[1]) = v21 & 0x9F | 0x20;
  qword_4B0D5A0[4] = (__int64)"Enable use of hot hints (only supported for unambigously hot allocations)";
  sub_259EC40(qword_4B0D5A0);
  __cxa_atexit(sub_1F6C9D0, qword_4B0D5A0, &off_47CFE00);
  qword_4B0D4E0[0] = (__int64)&off_4A6E058;
  qword_4B0D4E0[1] &= 0x80000000uLL;
  qword_4B0D4E0[12] = 1;
  qword_4B0D4E0[2] = 0;
  qword_4B0D4E0[3] = 0;
  qword_4B0D4E0[4] = 0;
  qword_4B0D4E0[5] = 0;
  qword_4B0D4E0[6] = 0;
  qword_4B0D4E0[7] = 0;
  qword_4B0D4E0[8] = (__int64)&qword_4B0D4E0[10];
  qword_4B0D4E0[9] = 0x100000000LL;
  qword_4B0D4E0[11] = (__int64)&qword_4B0D4E0[14];
  LODWORD(qword_4B0D4E0[13]) = 0;
  BYTE4(qword_4B0D4E0[13]) = 1;
  v22 = sub_259AC30(sub_1F6C9D0, qword_4B0D5A0);
  v23 = LODWORD(qword_4B0D4E0[9]);
  if ( HIDWORD(qword_4B0D4E0[9]) < (unsigned __int64)(v23 + 1) )
  {
    sub_25D6060(&qword_4B0D4E0[8], &qword_4B0D4E0[10], v23 + 1, 8);
    v23 = LODWORD(qword_4B0D4E0[9]);
  }
  v24 = _mm_load_si128(&v27);
  *(_QWORD *)(qword_4B0D4E0[8] + 8 * v23) = v22;
  LOWORD(qword_4B0D4E0[17]) = 0;
  *(_OWORD *)&qword_4B0D4E0[19] = 0;
  *(__m128i *)&qword_4B0D4E0[21] = v24;
  qword_4B0D4E0[16] = (__int64)&off_4A64730;
  ++LODWORD(qword_4B0D4E0[9]);
  LOBYTE(qword_4B0D4E0[15]) = 0;
  qword_4B0D4E0[0] = (__int64)off_4A6DFF0;
  qword_4B0D4E0[18] = (__int64)off_49D9168;
  sub_259F400(qword_4B0D4E0, "memprof-report-hinted-sizes", 27);
  v25 = BYTE2(qword_4B0D4E0[1]);
  LOWORD(qword_4B0D4E0[17]) = 256;
  LOBYTE(qword_4B0D4E0[15]) = 0;
  qword_4B0D4E0[5] = 51;
  BYTE2(qword_4B0D4E0[1]) = v25 & 0x9F | 0x20;
  qword_4B0D4E0[4] = (__int64)"Report total allocation sizes of hinted allocations";
  sub_259EC40(qword_4B0D4E0);
  return __cxa_atexit(sub_1F6C9D0, qword_4B0D4E0, &off_47CFE00);
}

