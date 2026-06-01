int __fastcall sub_587AA0(__int64 a1, __int64 a2)
{
  __m128i v2; // xmm1
  __int64 v3; // rbp
  __int64 v4; // rax
  __m128i si128; // xmm3
  char v6; // al
  __int64 v7; // r13
  __int64 v8; // rax
  __m128i v9; // xmm4
  char v10; // al
  __m128i v12[4]; // [rsp+0h] [rbp-48h] BYREF

  v2 = _mm_loadl_epi64((const __m128i *)&off_49E9AC0);
  qword_4AF3180[2] = 0;
  qword_4AF3180[0] = (__int64)&off_4A6E058;
  qword_4AF3180[1] &= 0x80000000uLL;
  qword_4AF3180[11] = (__int64)&qword_4AF3180[14];
  v12[0] = _mm_unpacklo_epi64(v2, (__m128i)(unsigned __int64)nullsub_267);
  qword_4AF3180[3] = 0;
  qword_4AF3180[4] = 0;
  qword_4AF3180[5] = 0;
  qword_4AF3180[6] = 0;
  qword_4AF3180[7] = 0;
  qword_4AF3180[8] = (__int64)&qword_4AF3180[10];
  qword_4AF3180[9] = 0x100000000LL;
  qword_4AF3180[12] = 1;
  LODWORD(qword_4AF3180[13]) = 0;
  BYTE4(qword_4AF3180[13]) = 1;
  v3 = sub_259AC30(a1, a2);
  v4 = LODWORD(qword_4AF3180[9]);
  if ( HIDWORD(qword_4AF3180[9]) < (unsigned __int64)(v4 + 1) )
  {
    sub_25D6060(&qword_4AF3180[8], &qword_4AF3180[10], v4 + 1, 8);
    v4 = LODWORD(qword_4AF3180[9]);
  }
  si128 = _mm_load_si128(v12);
  *(_QWORD *)(qword_4AF3180[8] + 8 * v4) = v3;
  *(_OWORD *)&qword_4AF3180[19] = 0;
  *(__m128i *)&qword_4AF3180[21] = si128;
  qword_4AF3180[16] = (__int64)&off_4A64710;
  ++LODWORD(qword_4AF3180[9]);
  LODWORD(qword_4AF3180[15]) = 0;
  qword_4AF3180[0] = (__int64)off_4A6DEB8;
  LODWORD(qword_4AF3180[17]) = 0;
  BYTE4(qword_4AF3180[17]) = 0;
  qword_4AF3180[18] = (__int64)off_49D9228;
  sub_259F400(qword_4AF3180, "static-likely-prob", 18);
  qword_4AF3180[5] = 71;
  qword_4AF3180[4] = (__int64)"branch probability threshold in percentage to be considered very likely";
  v6 = BYTE2(qword_4AF3180[1]);
  LODWORD(qword_4AF3180[15]) = 80;
  BYTE4(qword_4AF3180[17]) = 1;
  LODWORD(qword_4AF3180[17]) = 80;
  BYTE2(qword_4AF3180[1]) = v6 & 0x9F | 0x20;
  sub_259EC40(qword_4AF3180);
  __cxa_atexit(sub_1F6C940, qword_4AF3180, &off_47CFE00);
  qword_4AF30C0[0] = (__int64)&off_4A6E058;
  qword_4AF30C0[1] &= 0x80000000uLL;
  qword_4AF30C0[12] = 1;
  qword_4AF30C0[2] = 0;
  qword_4AF30C0[3] = 0;
  qword_4AF30C0[4] = 0;
  qword_4AF30C0[5] = 0;
  qword_4AF30C0[6] = 0;
  qword_4AF30C0[7] = 0;
  qword_4AF30C0[8] = (__int64)&qword_4AF30C0[10];
  qword_4AF30C0[9] = 0x100000000LL;
  qword_4AF30C0[11] = (__int64)&qword_4AF30C0[14];
  LODWORD(qword_4AF30C0[13]) = 0;
  BYTE4(qword_4AF30C0[13]) = 1;
  v7 = sub_259AC30(sub_1F6C940, qword_4AF3180);
  v8 = LODWORD(qword_4AF30C0[9]);
  if ( HIDWORD(qword_4AF30C0[9]) < (unsigned __int64)(v8 + 1) )
  {
    sub_25D6060(&qword_4AF30C0[8], &qword_4AF30C0[10], v8 + 1, 8);
    v8 = LODWORD(qword_4AF30C0[9]);
  }
  v9 = _mm_load_si128(v12);
  *(_QWORD *)(qword_4AF30C0[8] + 8 * v8) = v7;
  *(_OWORD *)&qword_4AF30C0[19] = 0;
  ++LODWORD(qword_4AF30C0[9]);
  qword_4AF30C0[16] = (__int64)&off_4A64710;
  *(__m128i *)&qword_4AF30C0[21] = v9;
  LODWORD(qword_4AF30C0[15]) = 0;
  qword_4AF30C0[0] = (__int64)off_4A6DEB8;
  LODWORD(qword_4AF30C0[17]) = 0;
  BYTE4(qword_4AF30C0[17]) = 0;
  qword_4AF30C0[18] = (__int64)off_49D9228;
  sub_259F400(qword_4AF30C0, "profile-likely-prob", 19);
  qword_4AF30C0[5] = 97;
  qword_4AF30C0[4] = (__int64)"branch probability threshold in percentage to be considered very likely when profile is available";
  v10 = BYTE2(qword_4AF30C0[1]);
  LODWORD(qword_4AF30C0[15]) = 51;
  BYTE4(qword_4AF30C0[17]) = 1;
  LODWORD(qword_4AF30C0[17]) = 51;
  BYTE2(qword_4AF30C0[1]) = v10 & 0x9F | 0x20;
  sub_259EC40(qword_4AF30C0);
  return __cxa_atexit(sub_1F6C940, qword_4AF30C0, &off_47CFE00);
}

