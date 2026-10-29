int __fastcall sub_57B030(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // rax
  __m128i v4; // xmm0

  qword_4AEB380[0] = (__int64)&off_4A6E058;
  qword_4AEB380[1] &= 0x80000000uLL;
  qword_4AEB380[2] = 0;
  qword_4AEB380[9] = 0x100000000LL;
  qword_4AEB380[3] = 0;
  qword_4AEB380[4] = 0;
  qword_4AEB380[5] = 0;
  qword_4AEB380[6] = 0;
  qword_4AEB380[7] = 0;
  qword_4AEB380[8] = (__int64)&qword_4AEB380[10];
  qword_4AEB380[11] = (__int64)&qword_4AEB380[14];
  qword_4AEB380[12] = 1;
  LODWORD(qword_4AEB380[13]) = 0;
  BYTE4(qword_4AEB380[13]) = 1;
  v2 = sub_259AC30(a1, a2);
  v3 = LODWORD(qword_4AEB380[9]);
  if ( HIDWORD(qword_4AEB380[9]) < (unsigned __int64)(v3 + 1) )
  {
    sub_25D6060(&qword_4AEB380[8], &qword_4AEB380[10], v3 + 1, 8);
    v3 = LODWORD(qword_4AEB380[9]);
  }
  *(_QWORD *)(qword_4AEB380[8] + 8 * v3) = v2;
  LOWORD(qword_4AEB380[17]) = 0;
  *(_OWORD *)&qword_4AEB380[19] = 0;
  v4 = _mm_loadl_epi64((const __m128i *)&off_49E8A90);
  ++LODWORD(qword_4AEB380[9]);
  qword_4AEB380[16] = (__int64)&off_4A64730;
  LOBYTE(qword_4AEB380[15]) = 0;
  qword_4AEB380[0] = (__int64)off_4A6DFF0;
  qword_4AEB380[18] = (__int64)off_49D9168;
  *(__m128i *)&qword_4AEB380[21] = _mm_unpacklo_epi64(v4, (__m128i)(unsigned __int64)nullsub_266);
  sub_259F400(qword_4AEB380, "disable-gisel-legality-check", 28);
  qword_4AEB380[5] = 62;
  qword_4AEB380[4] = (__int64)"Don't verify that MIR is fully legal between GlobalISel passes";
  BYTE2(qword_4AEB380[1]) = BYTE2(qword_4AEB380[1]) & 0x9F | 0x20;
  sub_259EC40(qword_4AEB380);
  return __cxa_atexit(sub_1F6C9D0, qword_4AEB380, &off_47CFE00);
}

