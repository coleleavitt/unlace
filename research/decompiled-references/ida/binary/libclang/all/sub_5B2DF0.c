int __fastcall sub_5B2DF0(__int64 a1, __int64 a2)
{
  __m128i v2; // xmm1
  __int64 v3; // rbx
  __int64 v4; // rax
  __m128i v5; // xmm0
  __int64 v6; // r14
  __int64 v7; // rax
  __m128i v8; // xmm4
  char v9; // al
  __int64 v10; // rbp
  __int64 v11; // rax
  __m128i v12; // xmm5
  char v13; // al
  __m128i v15; // [rsp+0h] [rbp-88h] BYREF
  const char **v16; // [rsp+10h] [rbp-78h]
  int *v17; // [rsp+18h] [rbp-70h]
  int v18; // [rsp+24h] [rbp-64h] BYREF
  int *v19; // [rsp+28h] [rbp-60h] BYREF
  char *v20; // [rsp+30h] [rbp-58h] BYREF
  __int64 v21; // [rsp+38h] [rbp-50h]
  const char *v22; // [rsp+40h] [rbp-48h] BYREF
  __int64 v23; // [rsp+48h] [rbp-40h]

  v2 = _mm_loadl_epi64((const __m128i *)&off_49EBBD8);
  qword_4B08540[2] = 0;
  qword_4B08540[0] = (__int64)&off_4A6E058;
  qword_4B08540[1] &= 0x80000000uLL;
  qword_4B08540[11] = (__int64)&qword_4B08540[14];
  v15 = _mm_unpacklo_epi64(v2, (__m128i)(unsigned __int64)nullsub_266);
  qword_4B08540[3] = 0;
  qword_4B08540[4] = 0;
  qword_4B08540[5] = 0;
  qword_4B08540[6] = 0;
  qword_4B08540[7] = 0;
  qword_4B08540[8] = (__int64)&qword_4B08540[10];
  qword_4B08540[9] = 0x100000000LL;
  qword_4B08540[12] = 1;
  LODWORD(qword_4B08540[13]) = 0;
  BYTE4(qword_4B08540[13]) = 1;
  v3 = sub_259AC30(a1, a2);
  v4 = LODWORD(qword_4B08540[9]);
  if ( HIDWORD(qword_4B08540[9]) < (unsigned __int64)(v4 + 1) )
  {
    sub_25D6060(&qword_4B08540[8], &qword_4B08540[10], v4 + 1, 8);
    v4 = LODWORD(qword_4B08540[9]);
  }
  *(_QWORD *)(qword_4B08540[8] + 8 * v4) = v3;
  *(_OWORD *)&qword_4B08540[19] = 0;
  v5 = _mm_loadl_epi64((const __m128i *)&off_49EBBD0);
  ++LODWORD(qword_4B08540[9]);
  qword_4B08540[16] = (__int64)&off_4A64710;
  LODWORD(qword_4B08540[15]) = 0;
  BYTE4(qword_4B08540[17]) = 0;
  qword_4B08540[0] = (__int64)off_4A6DEB8;
  LODWORD(qword_4B08540[17]) = 0;
  qword_4B08540[18] = (__int64)off_49D9228;
  *(__m128i *)&qword_4B08540[21] = _mm_unpacklo_epi64(v5, (__m128i)(unsigned __int64)nullsub_267);
  sub_259F400(qword_4B08540, "sample-profile-max-propagate-iterations", 39);
  LODWORD(qword_4B08540[15]) = 100;
  qword_4B08540[4] = (__int64)"Maximum number of iterations to go through when propagating sample block/edge weights through the CFG.";
  BYTE4(qword_4B08540[17]) = 1;
  LODWORD(qword_4B08540[17]) = 100;
  qword_4B08540[5] = 102;
  sub_259EC40(qword_4B08540);
  __cxa_atexit(sub_1F6C940, qword_4B08540, &off_47CFE00);
  v19 = &v18;
  v20 = "N";
  v17 = &v18;
  v16 = &v22;
  v22 = "Emit a warning if less than N% of records in the input profile are matched to the IR.";
  v23 = 85;
  v21 = 1;
  v18 = 0;
  sub_36AA040(qword_4B08480, "sample-profile-check-record-coverage", &v19, &v20);
  __cxa_atexit(sub_1F6C940, qword_4B08480, &off_47CFE00);
  v20 = "N";
  v19 = &v18;
  v22 = "Emit a warning if less than N% of samples in the input profile are matched to the IR.";
  v23 = 85;
  v21 = 1;
  v18 = 0;
  sub_36AA040(qword_4B083C0, "sample-profile-check-sample-coverage", &v19, &v20);
  __cxa_atexit(sub_1F6C940, qword_4B083C0, &off_47CFE00);
  qword_4B08300[2] = 0;
  qword_4B08300[0] = (__int64)&off_4A6E058;
  qword_4B08300[1] &= 0x80000000uLL;
  qword_4B08300[3] = 0;
  qword_4B08300[4] = 0;
  qword_4B08300[5] = 0;
  qword_4B08300[6] = 0;
  qword_4B08300[7] = 0;
  qword_4B08300[8] = (__int64)&qword_4B08300[10];
  qword_4B08300[9] = 0x100000000LL;
  qword_4B08300[11] = (__int64)&qword_4B08300[14];
  qword_4B08300[12] = 1;
  LODWORD(qword_4B08300[13]) = 0;
  BYTE4(qword_4B08300[13]) = 1;
  v6 = sub_259AC30(sub_1F6C940, qword_4B083C0);
  v7 = LODWORD(qword_4B08300[9]);
  if ( HIDWORD(qword_4B08300[9]) < (unsigned __int64)(v7 + 1) )
  {
    sub_25D6060(&qword_4B08300[8], &qword_4B08300[10], v7 + 1, 8);
    v7 = LODWORD(qword_4B08300[9]);
  }
  v8 = _mm_load_si128(&v15);
  *(_QWORD *)(qword_4B08300[8] + 8 * v7) = v6;
  LOWORD(qword_4B08300[17]) = 0;
  *(_OWORD *)&qword_4B08300[19] = 0;
  qword_4B08300[16] = (__int64)&off_4A64730;
  *(__m128i *)&qword_4B08300[21] = v8;
  ++LODWORD(qword_4B08300[9]);
  qword_4B08300[0] = (__int64)off_4A6DFF0;
  LOBYTE(qword_4B08300[15]) = 0;
  qword_4B08300[18] = (__int64)off_49D9168;
  sub_259F400(qword_4B08300, "no-warn-sample-unused", 21);
  v9 = BYTE2(qword_4B08300[1]);
  LOWORD(qword_4B08300[17]) = 256;
  LOBYTE(qword_4B08300[15]) = 0;
  qword_4B08300[5] = 120;
  BYTE2(qword_4B08300[1]) = v9 & 0x9F | 0x20;
  qword_4B08300[4] = (__int64)"Use this option to turn off/on warnings about function with samples but without debug info"
                              "rmation to use those samples. ";
  sub_259EC40(qword_4B08300);
  __cxa_atexit(sub_1F6C9D0, qword_4B08300, &off_47CFE00);
  qword_4B08240[12] = 1;
  qword_4B08240[0] = (__int64)&off_4A6E058;
  qword_4B08240[1] &= 0x80000000uLL;
  qword_4B08240[2] = 0;
  qword_4B08240[3] = 0;
  qword_4B08240[4] = 0;
  qword_4B08240[5] = 0;
  qword_4B08240[6] = 0;
  qword_4B08240[7] = 0;
  qword_4B08240[8] = (__int64)&qword_4B08240[10];
  qword_4B08240[9] = 0x100000000LL;
  qword_4B08240[11] = (__int64)&qword_4B08240[14];
  LODWORD(qword_4B08240[13]) = 0;
  BYTE4(qword_4B08240[13]) = 1;
  v10 = sub_259AC30(sub_1F6C9D0, qword_4B08300);
  v11 = LODWORD(qword_4B08240[9]);
  if ( HIDWORD(qword_4B08240[9]) < (unsigned __int64)(v11 + 1) )
  {
    sub_25D6060(&qword_4B08240[8], &qword_4B08240[10], v11 + 1, 8);
    v11 = LODWORD(qword_4B08240[9]);
  }
  v12 = _mm_load_si128(&v15);
  *(_QWORD *)(qword_4B08240[8] + 8 * v11) = v10;
  LOWORD(qword_4B08240[17]) = 0;
  *(_OWORD *)&qword_4B08240[19] = 0;
  *(__m128i *)&qword_4B08240[21] = v12;
  qword_4B08240[16] = (__int64)&off_4A64730;
  ++LODWORD(qword_4B08240[9]);
  LOBYTE(qword_4B08240[15]) = 0;
  qword_4B08240[0] = (__int64)off_4A6DFF0;
  qword_4B08240[18] = (__int64)off_49D9168;
  sub_259F400(qword_4B08240, "sample-profile-use-profi", 24);
  v13 = BYTE2(qword_4B08240[1]);
  qword_4B08240[5] = 41;
  BYTE2(qword_4B08240[1]) = v13 & 0x9F | 0x20;
  qword_4B08240[4] = (__int64)"Use profi to infer block and edge counts.";
  sub_259EC40(qword_4B08240);
  return __cxa_atexit(sub_1F6C9D0, qword_4B08240, &off_47CFE00);
}

