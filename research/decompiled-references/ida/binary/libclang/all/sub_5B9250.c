int __fastcall sub_5B9250(__int64 a1, __int64 a2)
{
  __m128i v2; // xmm1
  __int64 v3; // rbx
  __int64 v4; // rax
  __m128i v5; // xmm3
  char v6; // al
  __int64 v7; // rax
  __int64 *v8; // rsi
  __int64 *v9; // r9
  __int64 v10; // rax
  __m128i v11; // xmm4
  char v12; // al
  __int64 v13; // r15
  __int64 v14; // rax
  __m128i v15; // xmm0
  char v16; // al
  __int64 v17; // rbp
  __int64 v18; // rax
  __m128i v19; // xmm0
  char v20; // al
  __m128i v22; // [rsp+0h] [rbp-58h] BYREF
  __int64 *v23; // [rsp+18h] [rbp-40h]

  v2 = _mm_loadl_epi64((const __m128i *)&off_49EBE78);
  qword_4B0ACA0[2] = 0;
  qword_4B0ACA0[0] = (__int64)&off_4A6E058;
  qword_4B0ACA0[1] &= 0x80000000uLL;
  qword_4B0ACA0[11] = (__int64)&qword_4B0ACA0[14];
  v22 = _mm_unpacklo_epi64(v2, (__m128i)(unsigned __int64)nullsub_266);
  qword_4B0ACA0[3] = 0;
  qword_4B0ACA0[4] = 0;
  qword_4B0ACA0[5] = 0;
  qword_4B0ACA0[6] = 0;
  qword_4B0ACA0[7] = 0;
  qword_4B0ACA0[8] = (__int64)&qword_4B0ACA0[10];
  qword_4B0ACA0[9] = 0x100000000LL;
  qword_4B0ACA0[12] = 1;
  LODWORD(qword_4B0ACA0[13]) = 0;
  BYTE4(qword_4B0ACA0[13]) = 1;
  v3 = sub_259AC30(a1, a2);
  v4 = LODWORD(qword_4B0ACA0[9]);
  if ( HIDWORD(qword_4B0ACA0[9]) < (unsigned __int64)(v4 + 1) )
  {
    sub_25D6060(&qword_4B0ACA0[8], &qword_4B0ACA0[10], v4 + 1, 8);
    v4 = LODWORD(qword_4B0ACA0[9]);
  }
  v5 = _mm_load_si128(&v22);
  *(_QWORD *)(qword_4B0ACA0[8] + 8 * v4) = v3;
  LOWORD(qword_4B0ACA0[17]) = 0;
  *(_OWORD *)&qword_4B0ACA0[19] = 0;
  qword_4B0ACA0[16] = (__int64)&off_4A64730;
  *(__m128i *)&qword_4B0ACA0[21] = v5;
  ++LODWORD(qword_4B0ACA0[9]);
  qword_4B0ACA0[0] = (__int64)off_4A6DFF0;
  LOBYTE(qword_4B0ACA0[15]) = 0;
  qword_4B0ACA0[18] = (__int64)off_49D9168;
  sub_259F400(qword_4B0ACA0, "check-bfi-unknown-block-queries", 31);
  v6 = BYTE2(qword_4B0ACA0[1]);
  LOWORD(qword_4B0ACA0[17]) = 256;
  LOBYTE(qword_4B0ACA0[15]) = 0;
  qword_4B0ACA0[5] = 89;
  BYTE2(qword_4B0ACA0[1]) = v6 & 0x9F | 0x20;
  qword_4B0ACA0[4] = (__int64)"Check if block frequency is queried for an unknown block for debugging missed BFI updates";
  sub_259EC40(qword_4B0ACA0);
  __cxa_atexit(sub_1F6C9D0, qword_4B0ACA0, &off_47CFE00);
  qword_4B0ABE0[0] = (__int64)&off_4A6E058;
  qword_4B0ABE0[1] &= 0x80000000uLL;
  qword_4B0ABE0[8] = (__int64)&qword_4B0ABE0[10];
  v23 = &qword_4B0ABE0[10];
  qword_4B0ABE0[2] = 0;
  qword_4B0ABE0[3] = 0;
  qword_4B0ABE0[4] = 0;
  qword_4B0ABE0[5] = 0;
  qword_4B0ABE0[6] = 0;
  qword_4B0ABE0[7] = 0;
  qword_4B0ABE0[9] = 0x100000000LL;
  qword_4B0ABE0[11] = (__int64)&qword_4B0ABE0[14];
  qword_4B0ABE0[12] = 1;
  LODWORD(qword_4B0ABE0[13]) = 0;
  BYTE4(qword_4B0ABE0[13]) = 1;
  v7 = sub_259AC30(sub_1F6C9D0, &qword_4B0ABE0[10]);
  v8 = v23;
  v9 = (__int64 *)v7;
  v10 = LODWORD(qword_4B0ABE0[9]);
  if ( HIDWORD(qword_4B0ABE0[9]) < (unsigned __int64)(v10 + 1) )
  {
    v23 = v9;
    sub_25D6060(&qword_4B0ABE0[8], v8, v10 + 1, 8);
    v10 = LODWORD(qword_4B0ABE0[9]);
    v9 = v23;
  }
  v11 = _mm_load_si128(&v22);
  *(_QWORD *)(qword_4B0ABE0[8] + 8 * v10) = v9;
  LOWORD(qword_4B0ABE0[17]) = 0;
  *(_OWORD *)&qword_4B0ABE0[19] = 0;
  *(__m128i *)&qword_4B0ABE0[21] = v11;
  qword_4B0ABE0[16] = (__int64)&off_4A64730;
  ++LODWORD(qword_4B0ABE0[9]);
  LOBYTE(qword_4B0ABE0[15]) = 0;
  qword_4B0ABE0[0] = (__int64)off_4A6DFF0;
  qword_4B0ABE0[18] = (__int64)off_49D9168;
  sub_259F400(qword_4B0ABE0, "use-iterative-bfi-inference", 27);
  v12 = BYTE2(qword_4B0ABE0[1]);
  qword_4B0ABE0[5] = 62;
  BYTE2(qword_4B0ABE0[1]) = v12 & 0x9F | 0x20;
  qword_4B0ABE0[4] = (__int64)"Apply an iterative post-processing to infer correct BFI counts";
  sub_259EC40(qword_4B0ABE0);
  __cxa_atexit(sub_1F6C9D0, qword_4B0ABE0, &off_47CFE00);
  qword_4B0AB20[0] = (__int64)&off_4A6E058;
  qword_4B0AB20[1] &= 0x80000000uLL;
  qword_4B0AB20[8] = (__int64)&qword_4B0AB20[10];
  v22.m128i_i64[0] = (__int64)&qword_4B0AB20[10];
  qword_4B0AB20[2] = 0;
  qword_4B0AB20[3] = 0;
  qword_4B0AB20[4] = 0;
  qword_4B0AB20[5] = 0;
  qword_4B0AB20[6] = 0;
  qword_4B0AB20[7] = 0;
  qword_4B0AB20[9] = 0x100000000LL;
  qword_4B0AB20[11] = (__int64)&qword_4B0AB20[14];
  qword_4B0AB20[12] = 1;
  LODWORD(qword_4B0AB20[13]) = 0;
  BYTE4(qword_4B0AB20[13]) = 1;
  v13 = sub_259AC30(sub_1F6C9D0, &qword_4B0AB20[10]);
  v14 = LODWORD(qword_4B0AB20[9]);
  if ( HIDWORD(qword_4B0AB20[9]) < (unsigned __int64)(v14 + 1) )
  {
    sub_25D6060(&qword_4B0AB20[8], v22.m128i_i64[0], v14 + 1, 8);
    v14 = LODWORD(qword_4B0AB20[9]);
  }
  *(_QWORD *)(qword_4B0AB20[8] + 8 * v14) = v13;
  *(_OWORD *)&qword_4B0AB20[19] = 0;
  v15 = _mm_loadl_epi64((const __m128i *)&off_49EBE80);
  ++LODWORD(qword_4B0AB20[9]);
  qword_4B0AB20[16] = (__int64)&off_4A64710;
  LODWORD(qword_4B0AB20[15]) = 0;
  BYTE4(qword_4B0AB20[17]) = 0;
  qword_4B0AB20[0] = (__int64)off_4A6DEB8;
  LODWORD(qword_4B0AB20[17]) = 0;
  qword_4B0AB20[18] = (__int64)off_49D9228;
  *(__m128i *)&qword_4B0AB20[21] = _mm_unpacklo_epi64(v15, (__m128i)(unsigned __int64)nullsub_267);
  sub_259F400(qword_4B0AB20, "iterative-bfi-max-iterations-per-block", 38);
  v16 = BYTE2(qword_4B0AB20[1]);
  LODWORD(qword_4B0AB20[15]) = 1000;
  BYTE4(qword_4B0AB20[17]) = 1;
  qword_4B0AB20[5] = 66;
  LODWORD(qword_4B0AB20[17]) = 1000;
  BYTE2(qword_4B0AB20[1]) = v16 & 0x9F | 0x20;
  qword_4B0AB20[4] = (__int64)"Iterative inference: maximum number of update iterations per block";
  sub_259EC40(qword_4B0AB20);
  __cxa_atexit(sub_1F6C940, qword_4B0AB20, &off_47CFE00);
  qword_4B0AA60[0] = (__int64)&off_4A6E058;
  qword_4B0AA60[1] &= 0x80000000uLL;
  qword_4B0AA60[12] = 1;
  qword_4B0AA60[2] = 0;
  qword_4B0AA60[3] = 0;
  qword_4B0AA60[4] = 0;
  qword_4B0AA60[5] = 0;
  qword_4B0AA60[6] = 0;
  qword_4B0AA60[7] = 0;
  qword_4B0AA60[8] = (__int64)&qword_4B0AA60[10];
  qword_4B0AA60[9] = 0x100000000LL;
  qword_4B0AA60[11] = (__int64)&qword_4B0AA60[14];
  LODWORD(qword_4B0AA60[13]) = 0;
  BYTE4(qword_4B0AA60[13]) = 1;
  v17 = sub_259AC30(sub_1F6C940, qword_4B0AB20);
  v18 = LODWORD(qword_4B0AA60[9]);
  if ( HIDWORD(qword_4B0AA60[9]) < (unsigned __int64)(v18 + 1) )
  {
    sub_25D6060(&qword_4B0AA60[8], &qword_4B0AA60[10], v18 + 1, 8);
    v18 = LODWORD(qword_4B0AA60[9]);
  }
  *(_QWORD *)(qword_4B0AA60[8] + 8 * v18) = v17;
  *(_OWORD *)&qword_4B0AA60[20] = 0;
  v19 = _mm_loadl_epi64((const __m128i *)&off_49EBE88);
  ++LODWORD(qword_4B0AA60[9]);
  qword_4B0AA60[16] = (__int64)off_4A76748;
  qword_4B0AA60[15] = 0;
  LOBYTE(qword_4B0AA60[18]) = 0;
  qword_4B0AA60[0] = (__int64)off_4A76768;
  qword_4B0AA60[17] = 0;
  qword_4B0AA60[19] = (__int64)off_49D9288;
  *(__m128i *)&qword_4B0AA60[22] = _mm_unpacklo_epi64(v19, (__m128i)(unsigned __int64)nullsub_444);
  sub_259F400(qword_4B0AA60, "iterative-bfi-precision", 23);
  v20 = BYTE2(qword_4B0AA60[1]);
  LOBYTE(qword_4B0AA60[18]) = 1;
  qword_4B0AA60[15] = 0x3D719799812DEA11LL;
  qword_4B0AA60[5] = 127;
  BYTE2(qword_4B0AA60[1]) = v20 & 0x9F | 0x20;
  qword_4B0AA60[4] = (__int64)"Iterative inference: delta convergence precision; smaller values typically lead to better "
                              "results at the cost of worsen runtime";
  qword_4B0AA60[17] = 0x3D719799812DEA11LL;
  sub_259EC40(qword_4B0AA60);
  return __cxa_atexit(sub_2A4E990, qword_4B0AA60, &off_47CFE00);
}

