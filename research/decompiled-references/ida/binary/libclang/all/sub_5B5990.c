int __fastcall sub_5B5990(__int64 a1, __int64 a2)
{
  __m128i v2; // xmm1
  __m128i v3; // xmm2
  __int64 v4; // rbx
  __int64 v5; // rax
  __m128i v6; // xmm5
  char v7; // al
  __int64 v8; // rax
  __int64 *v9; // rsi
  __int64 *v10; // r9
  __int64 v11; // rax
  __m128i v12; // xmm6
  char v13; // al
  __int64 v14; // rax
  __int64 *v15; // rsi
  __int64 *v16; // r9
  __int64 v17; // rax
  __m128i v18; // xmm7
  char v19; // al
  __int64 v20; // rax
  __int64 *v21; // rsi
  __int64 *v22; // r9
  __int64 v23; // rax
  __m128i v24; // xmm3
  char v25; // al
  __int64 v26; // rax
  __int64 *v27; // rsi
  __int64 *v28; // r9
  __int64 v29; // rax
  __m128i v30; // xmm4
  char v31; // al
  __int64 v32; // rax
  __int64 *v33; // rsi
  __int64 *v34; // r9
  __int64 v35; // rax
  __m128i v36; // xmm5
  char v37; // al
  __int64 v38; // rax
  __int64 *v39; // rsi
  __int64 *v40; // r9
  __int64 v41; // rax
  __m128i v42; // xmm6
  char v43; // al
  __int64 v44; // r15
  __int64 v45; // rax
  __m128i v46; // xmm7
  char v47; // al
  __int64 v48; // rbp
  __int64 v49; // rax
  __m128i v50; // xmm3
  char v51; // al
  __m128i v53; // [rsp+0h] [rbp-68h] BYREF
  __m128i v54; // [rsp+10h] [rbp-58h] BYREF
  __int64 *v55; // [rsp+28h] [rbp-40h]

  v2 = _mm_loadl_epi64((const __m128i *)&off_49EBC08);
  v3 = _mm_loadl_epi64((const __m128i *)&off_49EBC10);
  qword_4B09E00[2] = 0;
  qword_4B09E00[0] = (__int64)&off_4A6E058;
  qword_4B09E00[1] &= 0x80000000uLL;
  v54 = _mm_unpacklo_epi64(v2, (__m128i)(unsigned __int64)nullsub_291);
  v53 = _mm_unpacklo_epi64(v3, (__m128i)(unsigned __int64)nullsub_266);
  qword_4B09E00[3] = 0;
  qword_4B09E00[4] = 0;
  qword_4B09E00[5] = 0;
  qword_4B09E00[6] = 0;
  qword_4B09E00[7] = 0;
  qword_4B09E00[8] = (__int64)&qword_4B09E00[10];
  qword_4B09E00[9] = 0x100000000LL;
  qword_4B09E00[11] = (__int64)&qword_4B09E00[14];
  LODWORD(qword_4B09E00[13]) = 0;
  qword_4B09E00[12] = 1;
  BYTE4(qword_4B09E00[13]) = 1;
  v4 = sub_259AC30(a1, a2);
  v5 = LODWORD(qword_4B09E00[9]);
  if ( HIDWORD(qword_4B09E00[9]) < (unsigned __int64)(v5 + 1) )
  {
    sub_25D6060(&qword_4B09E00[8], &qword_4B09E00[10], v5 + 1, 8);
    v5 = LODWORD(qword_4B09E00[9]);
  }
  v6 = _mm_load_si128(&v53);
  *(_QWORD *)(qword_4B09E00[8] + 8 * v5) = v4;
  LOWORD(qword_4B09E00[17]) = 0;
  qword_4B09E00[16] = (__int64)&off_4A64730;
  *(_OWORD *)&qword_4B09E00[19] = 0;
  *(__m128i *)&qword_4B09E00[21] = v6;
  qword_4B09E00[0] = (__int64)off_4A6DFF0;
  ++LODWORD(qword_4B09E00[9]);
  LOBYTE(qword_4B09E00[15]) = 0;
  qword_4B09E00[18] = (__int64)off_49D9168;
  sub_259F400(qword_4B09E00, "pgso", 4);
  v7 = BYTE2(qword_4B09E00[1]);
  LOBYTE(qword_4B09E00[15]) = 1;
  qword_4B09E00[5] = 46;
  BYTE2(qword_4B09E00[1]) = v7 & 0x9F | 0x20;
  LOWORD(qword_4B09E00[17]) = 257;
  qword_4B09E00[4] = (__int64)"Enable the profile guided size optimizations. ";
  sub_259EC40(qword_4B09E00);
  __cxa_atexit(sub_1F6C9D0, qword_4B09E00, &off_47CFE00);
  qword_4B09D40[0] = (__int64)&off_4A6E058;
  qword_4B09D40[1] &= 0x80000000uLL;
  qword_4B09D40[8] = (__int64)&qword_4B09D40[10];
  v55 = &qword_4B09D40[10];
  qword_4B09D40[2] = 0;
  qword_4B09D40[3] = 0;
  qword_4B09D40[4] = 0;
  qword_4B09D40[5] = 0;
  qword_4B09D40[6] = 0;
  qword_4B09D40[7] = 0;
  qword_4B09D40[9] = 0x100000000LL;
  qword_4B09D40[11] = (__int64)&qword_4B09D40[14];
  qword_4B09D40[12] = 1;
  LODWORD(qword_4B09D40[13]) = 0;
  BYTE4(qword_4B09D40[13]) = 1;
  v8 = sub_259AC30(sub_1F6C9D0, &qword_4B09D40[10]);
  v9 = v55;
  v10 = (__int64 *)v8;
  v11 = LODWORD(qword_4B09D40[9]);
  if ( HIDWORD(qword_4B09D40[9]) < (unsigned __int64)(v11 + 1) )
  {
    v55 = v10;
    sub_25D6060(&qword_4B09D40[8], v9, v11 + 1, 8);
    v11 = LODWORD(qword_4B09D40[9]);
    v10 = v55;
  }
  v12 = _mm_load_si128(&v53);
  *(_QWORD *)(qword_4B09D40[8] + 8 * v11) = v10;
  qword_4B09D40[16] = (__int64)&off_4A64730;
  LOWORD(qword_4B09D40[17]) = 0;
  *(_OWORD *)&qword_4B09D40[19] = 0;
  qword_4B09D40[0] = (__int64)off_4A6DFF0;
  *(__m128i *)&qword_4B09D40[21] = v12;
  ++LODWORD(qword_4B09D40[9]);
  qword_4B09D40[18] = (__int64)off_49D9168;
  LOBYTE(qword_4B09D40[15]) = 0;
  sub_259F400(qword_4B09D40, "pgso-lwss-only", 14);
  v13 = BYTE2(qword_4B09D40[1]);
  LOBYTE(qword_4B09D40[15]) = 1;
  qword_4B09D40[5] = 105;
  BYTE2(qword_4B09D40[1]) = v13 & 0x9F | 0x20;
  LOWORD(qword_4B09D40[17]) = 257;
  qword_4B09D40[4] = (__int64)"Apply the profile guided size optimizations only if the working set size is large (except for cold code.)";
  sub_259EC40(qword_4B09D40);
  __cxa_atexit(sub_1F6C9D0, qword_4B09D40, &off_47CFE00);
  qword_4B09C80[0] = (__int64)&off_4A6E058;
  qword_4B09C80[1] &= 0x80000000uLL;
  qword_4B09C80[8] = (__int64)&qword_4B09C80[10];
  v55 = &qword_4B09C80[10];
  qword_4B09C80[2] = 0;
  qword_4B09C80[3] = 0;
  qword_4B09C80[4] = 0;
  qword_4B09C80[5] = 0;
  qword_4B09C80[6] = 0;
  qword_4B09C80[7] = 0;
  qword_4B09C80[9] = 0x100000000LL;
  qword_4B09C80[11] = (__int64)&qword_4B09C80[14];
  qword_4B09C80[12] = 1;
  LODWORD(qword_4B09C80[13]) = 0;
  BYTE4(qword_4B09C80[13]) = 1;
  v14 = sub_259AC30(sub_1F6C9D0, &qword_4B09C80[10]);
  v15 = v55;
  v16 = (__int64 *)v14;
  v17 = LODWORD(qword_4B09C80[9]);
  if ( HIDWORD(qword_4B09C80[9]) < (unsigned __int64)(v17 + 1) )
  {
    v55 = v16;
    sub_25D6060(&qword_4B09C80[8], v15, v17 + 1, 8);
    v17 = LODWORD(qword_4B09C80[9]);
    v16 = v55;
  }
  v18 = _mm_load_si128(&v53);
  *(_QWORD *)(qword_4B09C80[8] + 8 * v17) = v16;
  qword_4B09C80[16] = (__int64)&off_4A64730;
  LOWORD(qword_4B09C80[17]) = 0;
  *(_OWORD *)&qword_4B09C80[19] = 0;
  qword_4B09C80[0] = (__int64)off_4A6DFF0;
  *(__m128i *)&qword_4B09C80[21] = v18;
  ++LODWORD(qword_4B09C80[9]);
  qword_4B09C80[18] = (__int64)off_49D9168;
  LOBYTE(qword_4B09C80[15]) = 0;
  sub_259F400(qword_4B09C80, "pgso-cold-code-only", 19);
  v19 = BYTE2(qword_4B09C80[1]);
  LOBYTE(qword_4B09C80[15]) = 0;
  qword_4B09C80[5] = 62;
  BYTE2(qword_4B09C80[1]) = v19 & 0x9F | 0x20;
  LOWORD(qword_4B09C80[17]) = 256;
  qword_4B09C80[4] = (__int64)"Apply the profile guided size optimizations only to cold code.";
  sub_259EC40(qword_4B09C80);
  __cxa_atexit(sub_1F6C9D0, qword_4B09C80, &off_47CFE00);
  qword_4B09BC0[0] = (__int64)&off_4A6E058;
  qword_4B09BC0[1] &= 0x80000000uLL;
  qword_4B09BC0[8] = (__int64)&qword_4B09BC0[10];
  v55 = &qword_4B09BC0[10];
  qword_4B09BC0[2] = 0;
  qword_4B09BC0[3] = 0;
  qword_4B09BC0[4] = 0;
  qword_4B09BC0[5] = 0;
  qword_4B09BC0[6] = 0;
  qword_4B09BC0[7] = 0;
  qword_4B09BC0[9] = 0x100000000LL;
  qword_4B09BC0[11] = (__int64)&qword_4B09BC0[14];
  qword_4B09BC0[12] = 1;
  LODWORD(qword_4B09BC0[13]) = 0;
  BYTE4(qword_4B09BC0[13]) = 1;
  v20 = sub_259AC30(sub_1F6C9D0, &qword_4B09BC0[10]);
  v21 = v55;
  v22 = (__int64 *)v20;
  v23 = LODWORD(qword_4B09BC0[9]);
  if ( HIDWORD(qword_4B09BC0[9]) < (unsigned __int64)(v23 + 1) )
  {
    v55 = v22;
    sub_25D6060(&qword_4B09BC0[8], v21, v23 + 1, 8);
    v23 = LODWORD(qword_4B09BC0[9]);
    v22 = v55;
  }
  v24 = _mm_load_si128(&v53);
  *(_QWORD *)(qword_4B09BC0[8] + 8 * v23) = v22;
  qword_4B09BC0[16] = (__int64)&off_4A64730;
  LOWORD(qword_4B09BC0[17]) = 0;
  *(_OWORD *)&qword_4B09BC0[19] = 0;
  qword_4B09BC0[0] = (__int64)off_4A6DFF0;
  *(__m128i *)&qword_4B09BC0[21] = v24;
  ++LODWORD(qword_4B09BC0[9]);
  qword_4B09BC0[18] = (__int64)off_49D9168;
  LOBYTE(qword_4B09BC0[15]) = 0;
  sub_259F400(qword_4B09BC0, "pgso-cold-code-only-for-instr-pgo", 33);
  v25 = BYTE2(qword_4B09BC0[1]);
  LOBYTE(qword_4B09BC0[15]) = 0;
  qword_4B09BC0[5] = 88;
  BYTE2(qword_4B09BC0[1]) = v25 & 0x9F | 0x20;
  LOWORD(qword_4B09BC0[17]) = 256;
  qword_4B09BC0[4] = (__int64)"Apply the profile guided size optimizations only to cold code under instrumentation PGO.";
  sub_259EC40(qword_4B09BC0);
  __cxa_atexit(sub_1F6C9D0, qword_4B09BC0, &off_47CFE00);
  qword_4B09B00[0] = (__int64)&off_4A6E058;
  qword_4B09B00[1] &= 0x80000000uLL;
  qword_4B09B00[8] = (__int64)&qword_4B09B00[10];
  v55 = &qword_4B09B00[10];
  qword_4B09B00[2] = 0;
  qword_4B09B00[3] = 0;
  qword_4B09B00[4] = 0;
  qword_4B09B00[5] = 0;
  qword_4B09B00[6] = 0;
  qword_4B09B00[7] = 0;
  qword_4B09B00[9] = 0x100000000LL;
  qword_4B09B00[11] = (__int64)&qword_4B09B00[14];
  qword_4B09B00[12] = 1;
  LODWORD(qword_4B09B00[13]) = 0;
  BYTE4(qword_4B09B00[13]) = 1;
  v26 = sub_259AC30(sub_1F6C9D0, &qword_4B09B00[10]);
  v27 = v55;
  v28 = (__int64 *)v26;
  v29 = LODWORD(qword_4B09B00[9]);
  if ( HIDWORD(qword_4B09B00[9]) < (unsigned __int64)(v29 + 1) )
  {
    v55 = v28;
    sub_25D6060(&qword_4B09B00[8], v27, v29 + 1, 8);
    v29 = LODWORD(qword_4B09B00[9]);
    v28 = v55;
  }
  v30 = _mm_load_si128(&v53);
  *(_QWORD *)(qword_4B09B00[8] + 8 * v29) = v28;
  qword_4B09B00[16] = (__int64)&off_4A64730;
  LOWORD(qword_4B09B00[17]) = 0;
  *(_OWORD *)&qword_4B09B00[19] = 0;
  qword_4B09B00[0] = (__int64)off_4A6DFF0;
  *(__m128i *)&qword_4B09B00[21] = v30;
  ++LODWORD(qword_4B09B00[9]);
  qword_4B09B00[18] = (__int64)off_49D9168;
  LOBYTE(qword_4B09B00[15]) = 0;
  sub_259F400(qword_4B09B00, "pgso-cold-code-only-for-sample-pgo", 34);
  v31 = BYTE2(qword_4B09B00[1]);
  LOBYTE(qword_4B09B00[15]) = 0;
  qword_4B09B00[5] = 79;
  BYTE2(qword_4B09B00[1]) = v31 & 0x9F | 0x20;
  LOWORD(qword_4B09B00[17]) = 256;
  qword_4B09B00[4] = (__int64)"Apply the profile guided size optimizations only to cold code under sample PGO.";
  sub_259EC40(qword_4B09B00);
  __cxa_atexit(sub_1F6C9D0, qword_4B09B00, &off_47CFE00);
  qword_4B09A40[0] = (__int64)&off_4A6E058;
  qword_4B09A40[1] &= 0x80000000uLL;
  qword_4B09A40[8] = (__int64)&qword_4B09A40[10];
  v55 = &qword_4B09A40[10];
  qword_4B09A40[2] = 0;
  qword_4B09A40[3] = 0;
  qword_4B09A40[4] = 0;
  qword_4B09A40[5] = 0;
  qword_4B09A40[6] = 0;
  qword_4B09A40[7] = 0;
  qword_4B09A40[9] = 0x100000000LL;
  qword_4B09A40[11] = (__int64)&qword_4B09A40[14];
  qword_4B09A40[12] = 1;
  LODWORD(qword_4B09A40[13]) = 0;
  BYTE4(qword_4B09A40[13]) = 1;
  v32 = sub_259AC30(sub_1F6C9D0, &qword_4B09A40[10]);
  v33 = v55;
  v34 = (__int64 *)v32;
  v35 = LODWORD(qword_4B09A40[9]);
  if ( HIDWORD(qword_4B09A40[9]) < (unsigned __int64)(v35 + 1) )
  {
    v55 = v34;
    sub_25D6060(&qword_4B09A40[8], v33, v35 + 1, 8);
    v35 = LODWORD(qword_4B09A40[9]);
    v34 = v55;
  }
  v36 = _mm_load_si128(&v53);
  *(_QWORD *)(qword_4B09A40[8] + 8 * v35) = v34;
  qword_4B09A40[16] = (__int64)&off_4A64730;
  LOWORD(qword_4B09A40[17]) = 0;
  *(_OWORD *)&qword_4B09A40[19] = 0;
  qword_4B09A40[0] = (__int64)off_4A6DFF0;
  *(__m128i *)&qword_4B09A40[21] = v36;
  ++LODWORD(qword_4B09A40[9]);
  qword_4B09A40[18] = (__int64)off_49D9168;
  LOBYTE(qword_4B09A40[15]) = 0;
  sub_259F400(qword_4B09A40, "pgso-cold-code-only-for-partial-sample-pgo", 42);
  v37 = BYTE2(qword_4B09A40[1]);
  LOBYTE(qword_4B09A40[15]) = 0;
  qword_4B09A40[5] = 95;
  BYTE2(qword_4B09A40[1]) = v37 & 0x9F | 0x20;
  LOWORD(qword_4B09A40[17]) = 256;
  qword_4B09A40[4] = (__int64)"Apply the profile guided size optimizations only to cold code under partial-profile sample PGO.";
  sub_259EC40(qword_4B09A40);
  __cxa_atexit(sub_1F6C9D0, qword_4B09A40, &off_47CFE00);
  qword_4B09980[0] = (__int64)&off_4A6E058;
  qword_4B09980[1] &= 0x80000000uLL;
  qword_4B09980[8] = (__int64)&qword_4B09980[10];
  v55 = &qword_4B09980[10];
  qword_4B09980[2] = 0;
  qword_4B09980[3] = 0;
  qword_4B09980[4] = 0;
  qword_4B09980[5] = 0;
  qword_4B09980[6] = 0;
  qword_4B09980[7] = 0;
  qword_4B09980[9] = 0x100000000LL;
  qword_4B09980[11] = (__int64)&qword_4B09980[14];
  qword_4B09980[12] = 1;
  LODWORD(qword_4B09980[13]) = 0;
  BYTE4(qword_4B09980[13]) = 1;
  v38 = sub_259AC30(sub_1F6C9D0, &qword_4B09980[10]);
  v39 = v55;
  v40 = (__int64 *)v38;
  v41 = LODWORD(qword_4B09980[9]);
  if ( HIDWORD(qword_4B09980[9]) < (unsigned __int64)(v41 + 1) )
  {
    v55 = v40;
    sub_25D6060(&qword_4B09980[8], v39, v41 + 1, 8);
    v41 = LODWORD(qword_4B09980[9]);
    v40 = v55;
  }
  v42 = _mm_load_si128(&v53);
  *(_QWORD *)(qword_4B09980[8] + 8 * v41) = v40;
  LOWORD(qword_4B09980[17]) = 0;
  qword_4B09980[16] = (__int64)&off_4A64730;
  *(_OWORD *)&qword_4B09980[19] = 0;
  *(__m128i *)&qword_4B09980[21] = v42;
  qword_4B09980[0] = (__int64)off_4A6DFF0;
  ++LODWORD(qword_4B09980[9]);
  LOBYTE(qword_4B09980[15]) = 0;
  qword_4B09980[18] = (__int64)off_49D9168;
  sub_259F400(qword_4B09980, "force-pgso", 10);
  v43 = BYTE2(qword_4B09980[1]);
  LOBYTE(qword_4B09980[15]) = 0;
  qword_4B09980[5] = 48;
  BYTE2(qword_4B09980[1]) = v43 & 0x9F | 0x20;
  LOWORD(qword_4B09980[17]) = 256;
  qword_4B09980[4] = (__int64)"Force the (profiled-guided) size optimizations. ";
  sub_259EC40(qword_4B09980);
  __cxa_atexit(sub_1F6C9D0, qword_4B09980, &off_47CFE00);
  qword_4B098C0[0] = (__int64)&off_4A6E058;
  qword_4B098C0[1] &= 0x80000000uLL;
  qword_4B098C0[8] = (__int64)&qword_4B098C0[10];
  v53.m128i_i64[0] = (__int64)&qword_4B098C0[10];
  qword_4B098C0[2] = 0;
  qword_4B098C0[3] = 0;
  qword_4B098C0[4] = 0;
  qword_4B098C0[5] = 0;
  qword_4B098C0[6] = 0;
  qword_4B098C0[7] = 0;
  qword_4B098C0[9] = 0x100000000LL;
  qword_4B098C0[11] = (__int64)&qword_4B098C0[14];
  qword_4B098C0[12] = 1;
  LODWORD(qword_4B098C0[13]) = 0;
  BYTE4(qword_4B098C0[13]) = 1;
  v44 = sub_259AC30(sub_1F6C9D0, &qword_4B098C0[10]);
  v45 = LODWORD(qword_4B098C0[9]);
  if ( HIDWORD(qword_4B098C0[9]) < (unsigned __int64)(v45 + 1) )
  {
    sub_25D6060(&qword_4B098C0[8], v53.m128i_i64[0], v45 + 1, 8);
    v45 = LODWORD(qword_4B098C0[9]);
  }
  v46 = _mm_load_si128(&v54);
  *(_QWORD *)(qword_4B098C0[8] + 8 * v45) = v44;
  *(_OWORD *)&qword_4B098C0[19] = 0;
  *(__m128i *)&qword_4B098C0[21] = v46;
  qword_4B098C0[16] = (__int64)&off_4A692B8;
  ++LODWORD(qword_4B098C0[9]);
  LODWORD(qword_4B098C0[15]) = 0;
  qword_4B098C0[0] = (__int64)off_4A6DF20;
  LODWORD(qword_4B098C0[17]) = 0;
  BYTE4(qword_4B098C0[17]) = 0;
  qword_4B098C0[18] = (__int64)off_49D91C8;
  sub_259F400(qword_4B098C0, "pgso-cutoff-instr-prof", 22);
  v47 = BYTE2(qword_4B098C0[1]);
  LODWORD(qword_4B098C0[15]) = (_DWORD)&stru_E7EF0;
  BYTE4(qword_4B098C0[17]) = 1;
  qword_4B098C0[5] = 88;
  LODWORD(qword_4B098C0[17]) = (_DWORD)&stru_E7EF0;
  BYTE2(qword_4B098C0[1]) = v47 & 0x9F | 0x20;
  qword_4B098C0[4] = (__int64)"The profile guided size optimization profile summary cutoff for instrumentation profile.";
  sub_259EC40(qword_4B098C0);
  __cxa_atexit(sub_20B86E0, qword_4B098C0, &off_47CFE00);
  qword_4B09800[0] = (__int64)&off_4A6E058;
  qword_4B09800[1] &= 0x80000000uLL;
  qword_4B09800[12] = 1;
  qword_4B09800[2] = 0;
  qword_4B09800[3] = 0;
  qword_4B09800[4] = 0;
  qword_4B09800[5] = 0;
  qword_4B09800[6] = 0;
  qword_4B09800[7] = 0;
  qword_4B09800[8] = (__int64)&qword_4B09800[10];
  qword_4B09800[9] = 0x100000000LL;
  qword_4B09800[11] = (__int64)&qword_4B09800[14];
  LODWORD(qword_4B09800[13]) = 0;
  BYTE4(qword_4B09800[13]) = 1;
  v48 = sub_259AC30(sub_20B86E0, qword_4B098C0);
  v49 = LODWORD(qword_4B09800[9]);
  if ( HIDWORD(qword_4B09800[9]) < (unsigned __int64)(v49 + 1) )
  {
    sub_25D6060(&qword_4B09800[8], &qword_4B09800[10], v49 + 1, 8);
    v49 = LODWORD(qword_4B09800[9]);
  }
  v50 = _mm_load_si128(&v54);
  *(_QWORD *)(qword_4B09800[8] + 8 * v49) = v48;
  *(_OWORD *)&qword_4B09800[19] = 0;
  *(__m128i *)&qword_4B09800[21] = v50;
  qword_4B09800[16] = (__int64)&off_4A692B8;
  ++LODWORD(qword_4B09800[9]);
  LODWORD(qword_4B09800[15]) = 0;
  qword_4B09800[0] = (__int64)off_4A6DF20;
  LODWORD(qword_4B09800[17]) = 0;
  BYTE4(qword_4B09800[17]) = 0;
  qword_4B09800[18] = (__int64)off_49D91C8;
  sub_259F400(qword_4B09800, "pgso-cutoff-sample-prof", 23);
  v51 = BYTE2(qword_4B09800[1]);
  LODWORD(qword_4B09800[15]) = 990000;
  BYTE4(qword_4B09800[17]) = 1;
  qword_4B09800[5] = 79;
  LODWORD(qword_4B09800[17]) = 990000;
  BYTE2(qword_4B09800[1]) = v51 & 0x9F | 0x20;
  qword_4B09800[4] = (__int64)"The profile guided size optimization profile summary cutoff for sample profile.";
  sub_259EC40(qword_4B09800);
  return __cxa_atexit(sub_20B86E0, qword_4B09800, &off_47CFE00);
}

