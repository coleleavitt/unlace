int __fastcall sub_5730C0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // rax
  __m128i v4; // xmm0
  char v5; // al

  qword_4AE3FA0[0] = (__int64)&off_4A6E058;
  qword_4AE3FA0[1] &= 0x80000000uLL;
  qword_4AE3FA0[2] = 0;
  qword_4AE3FA0[9] = 0x100000000LL;
  qword_4AE3FA0[3] = 0;
  qword_4AE3FA0[4] = 0;
  qword_4AE3FA0[5] = 0;
  qword_4AE3FA0[6] = 0;
  qword_4AE3FA0[7] = 0;
  qword_4AE3FA0[8] = (__int64)&qword_4AE3FA0[10];
  qword_4AE3FA0[11] = (__int64)&qword_4AE3FA0[14];
  qword_4AE3FA0[12] = 1;
  LODWORD(qword_4AE3FA0[13]) = 0;
  BYTE4(qword_4AE3FA0[13]) = 1;
  v2 = sub_259AC30(a1, a2);
  v3 = LODWORD(qword_4AE3FA0[9]);
  if ( HIDWORD(qword_4AE3FA0[9]) < (unsigned __int64)(v3 + 1) )
  {
    sub_25D6060(&qword_4AE3FA0[8], &qword_4AE3FA0[10], v3 + 1, 8);
    v3 = LODWORD(qword_4AE3FA0[9]);
  }
  *(_QWORD *)(qword_4AE3FA0[8] + 8 * v3) = v2;
  LOWORD(qword_4AE3FA0[17]) = 0;
  *(_OWORD *)&qword_4AE3FA0[19] = 0;
  v4 = _mm_loadl_epi64((const __m128i *)&off_49D8D70);
  ++LODWORD(qword_4AE3FA0[9]);
  qword_4AE3FA0[16] = (__int64)&off_4A64730;
  LOBYTE(qword_4AE3FA0[15]) = 0;
  qword_4AE3FA0[0] = (__int64)off_4A6DFF0;
  qword_4AE3FA0[18] = (__int64)off_49D9168;
  *(__m128i *)&qword_4AE3FA0[21] = _mm_unpacklo_epi64(v4, (__m128i)(unsigned __int64)nullsub_266);
  sub_259F400(qword_4AE3FA0, "use-dereferenceable-at-point-semantics", 38);
  v5 = BYTE2(qword_4AE3FA0[1]);
  LOBYTE(qword_4AE3FA0[15]) = 0;
  qword_4AE3FA0[5] = 60;
  LOWORD(qword_4AE3FA0[17]) = 256;
  BYTE2(qword_4AE3FA0[1]) = v5 & 0x9F | 0x20;
  qword_4AE3FA0[4] = (__int64)"Deref attributes and metadata infer facts at definition only";
  sub_259EC40(qword_4AE3FA0);
  return __cxa_atexit(sub_1F6C9D0, qword_4AE3FA0, &off_47CFE00);
}

