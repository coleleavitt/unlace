int __fastcall sub_56F230(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __m128i v4; // xmm0
  __int64 v5; // r9
  __int64 v6; // rax
  __m128i v7; // xmm0
  char v8; // al
  __int64 v9; // rbp
  __int64 v10; // rax
  __m128i v11; // xmm0
  __int64 v12; // rdx
  __int64 v13; // rcx
  bool v14; // zf
  __int64 v15; // rax
  __int64 v16; // r9
  __int64 v18; // [rsp+8h] [rbp-70h]
  const char *v19; // [rsp+10h] [rbp-68h] BYREF
  __int16 v20; // [rsp+30h] [rbp-48h]

  qword_4AE25E0[2] = 0;
  qword_4AE25E0[0] = (__int64)&off_4A6E058;
  qword_4AE25E0[1] &= 0x80000000uLL;
  qword_4AE25E0[11] = (__int64)&qword_4AE25E0[14];
  qword_4AE25E0[3] = 0;
  qword_4AE25E0[4] = 0;
  qword_4AE25E0[5] = 0;
  qword_4AE25E0[6] = 0;
  qword_4AE25E0[7] = 0;
  qword_4AE25E0[8] = (__int64)&qword_4AE25E0[10];
  qword_4AE25E0[9] = 0x100000000LL;
  qword_4AE25E0[12] = 1;
  LODWORD(qword_4AE25E0[13]) = 0;
  BYTE4(qword_4AE25E0[13]) = 1;
  v2 = sub_259AC30(a1, a2);
  v3 = LODWORD(qword_4AE25E0[9]);
  if ( HIDWORD(qword_4AE25E0[9]) < (unsigned __int64)(v3 + 1) )
  {
    sub_25D6060(&qword_4AE25E0[8], &qword_4AE25E0[10], v3 + 1, 8);
    v3 = LODWORD(qword_4AE25E0[9]);
  }
  *(_QWORD *)(qword_4AE25E0[8] + 8 * v3) = v2;
  LOWORD(qword_4AE25E0[17]) = 0;
  *(_OWORD *)&qword_4AE25E0[19] = 0;
  v4 = _mm_loadl_epi64((const __m128i *)&off_49D8418);
  ++LODWORD(qword_4AE25E0[9]);
  qword_4AE25E0[16] = (__int64)&off_4A64730;
  LOBYTE(qword_4AE25E0[15]) = 0;
  qword_4AE25E0[0] = (__int64)off_4A6DFF0;
  qword_4AE25E0[18] = (__int64)off_49D9168;
  *(__m128i *)&qword_4AE25E0[21] = _mm_unpacklo_epi64(v4, (__m128i)(unsigned __int64)nullsub_266);
  sub_259F400(qword_4AE25E0, "experimental-debuginfo-iterators", 32);
  qword_4AE25E0[4] = (__int64)"Enable communicating debuginfo positions through iterators, eliminating intrinsics. Has no"
                              " effect if --preserve-input-debuginfo-format=true.";
  qword_4AE25E0[5] = 140;
  LOBYTE(qword_4AE25E0[15]) = 1;
  LOWORD(qword_4AE25E0[17]) = 257;
  sub_259EC40(qword_4AE25E0);
  __cxa_atexit(sub_1F6C9D0, qword_4AE25E0, &off_47CFE00);
  qword_4AE2520[0] = (__int64)&off_4A6E058;
  qword_4AE2520[1] &= 0x80000000uLL;
  qword_4AE2520[8] = (__int64)&qword_4AE2520[10];
  qword_4AE2520[2] = 0;
  qword_4AE2520[3] = 0;
  qword_4AE2520[4] = 0;
  qword_4AE2520[5] = 0;
  qword_4AE2520[6] = 0;
  qword_4AE2520[7] = 0;
  qword_4AE2520[9] = 0x100000000LL;
  qword_4AE2520[11] = (__int64)&qword_4AE2520[14];
  qword_4AE2520[12] = 1;
  LODWORD(qword_4AE2520[13]) = 0;
  BYTE4(qword_4AE2520[13]) = 1;
  v5 = sub_259AC30(sub_1F6C9D0, &qword_4AE2520[10]);
  v6 = LODWORD(qword_4AE2520[9]);
  if ( HIDWORD(qword_4AE2520[9]) < (unsigned __int64)(v6 + 1) )
  {
    v18 = v5;
    sub_25D6060(&qword_4AE2520[8], &qword_4AE2520[10], v6 + 1, 8);
    v6 = LODWORD(qword_4AE2520[9]);
    v5 = v18;
  }
  *(_QWORD *)(qword_4AE2520[8] + 8 * v6) = v5;
  *(_OWORD *)&qword_4AE2520[19] = 0;
  v7 = _mm_loadl_epi64((const __m128i *)&off_49D8420);
  ++LODWORD(qword_4AE2520[9]);
  qword_4AE2520[16] = (__int64)off_49D90F8;
  LODWORD(qword_4AE2520[15]) = 0;
  BYTE4(qword_4AE2520[17]) = 0;
  qword_4AE2520[0] = (__int64)off_4A6D1F8;
  LODWORD(qword_4AE2520[17]) = 0;
  qword_4AE2520[18] = (__int64)off_49D9198;
  *(__m128i *)&qword_4AE2520[21] = _mm_unpacklo_epi64(v7, (__m128i)(unsigned __int64)nullsub_328);
  sub_259F400(qword_4AE2520, "preserve-input-debuginfo-format", 31);
  v8 = BYTE2(qword_4AE2520[1]);
  qword_4AE2520[5] = 266;
  BYTE2(qword_4AE2520[1]) = v8 & 0x9F | 0x20;
  qword_4AE2520[4] = (__int64)"When set to true, IR files will be processed and printed in their current debug info forma"
                              "t, regardless of default behaviour or other flags passed. Has no effect if input IR does n"
                              "ot contain debug records or intrinsics. Ignored in llvm-link, llvm-lto, and llvm-lto2.";
  sub_259EC40(qword_4AE2520);
  __cxa_atexit(sub_23D2630, qword_4AE2520, &off_47CFE00);
  qword_4AE2460[0] = (__int64)&off_4A6E058;
  qword_4AE2460[1] &= 0x80000000uLL;
  qword_4AE2460[12] = 1;
  qword_4AE2460[2] = 0;
  qword_4AE2460[3] = 0;
  qword_4AE2460[4] = 0;
  qword_4AE2460[5] = 0;
  qword_4AE2460[6] = 0;
  qword_4AE2460[7] = 0;
  qword_4AE2460[8] = (__int64)&qword_4AE2460[10];
  qword_4AE2460[9] = 0x100000000LL;
  qword_4AE2460[11] = (__int64)&qword_4AE2460[14];
  LODWORD(qword_4AE2460[13]) = 0;
  BYTE4(qword_4AE2460[13]) = 1;
  v9 = sub_259AC30(sub_23D2630, qword_4AE2520);
  v10 = LODWORD(qword_4AE2460[9]);
  if ( HIDWORD(qword_4AE2460[9]) < (unsigned __int64)(v10 + 1) )
  {
    sub_25D6060(&qword_4AE2460[8], &qword_4AE2460[10], v10 + 1, 8);
    v10 = LODWORD(qword_4AE2460[9]);
  }
  *(_QWORD *)(qword_4AE2460[8] + 8 * v10) = v9;
  *(_OWORD *)&qword_4AE2460[19] = 0;
  v11 = _mm_loadl_epi64((const __m128i *)&off_49D8428);
  ++LODWORD(qword_4AE2460[9]);
  qword_4AE2460[16] = (__int64)&off_4A64730;
  qword_4AE2460[15] = 0;
  BYTE1(qword_4AE2460[17]) = 0;
  qword_4AE2460[0] = (__int64)off_4A6D260;
  qword_4AE2460[18] = (__int64)off_49D9168;
  *(__m128i *)&qword_4AE2460[21] = _mm_unpacklo_epi64(v11, (__m128i)(unsigned __int64)nullsub_329);
  sub_259F400(qword_4AE2460, "write-experimental-debuginfo-iterators-to-bitcode", 49);
  v14 = qword_4AE2460[15] == 0;
  BYTE2(qword_4AE2460[1]) = BYTE2(qword_4AE2460[1]) & 0x9F | 0x20;
  if ( v14 )
  {
    qword_4AE2460[15] = (__int64)&qword_4AE2518;
  }
  else
  {
    v15 = sub_26260E0(qword_4AE2460, "write-experimental-debuginfo-iterators-to-bitcode", v12, v13);
    v20 = 259;
    v19 = "cl::location(x) specified more than once!";
    sub_2598800(qword_4AE2460, &v19, 0, 0, v15, v16);
  }
  *(_BYTE *)qword_4AE2460[15] = 1;
  LOWORD(qword_4AE2460[17]) = 257;
  sub_259EC40(qword_4AE2460);
  return __cxa_atexit(sub_23D25A0, qword_4AE2460, &off_47CFE00);
}

