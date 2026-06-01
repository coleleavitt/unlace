int __fastcall sub_5BAB60(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // rax
  __m128i v4; // xmm0
  char v5; // al

  qword_4B0B180[0] = (__int64)&off_4A6E058;
  qword_4B0B180[1] &= 0x80000000uLL;
  qword_4B0B180[2] = 0;
  qword_4B0B180[9] = 0x100000000LL;
  qword_4B0B180[3] = 0;
  qword_4B0B180[4] = 0;
  qword_4B0B180[5] = 0;
  qword_4B0B180[6] = 0;
  qword_4B0B180[7] = 0;
  qword_4B0B180[8] = (__int64)&qword_4B0B180[10];
  qword_4B0B180[11] = (__int64)&qword_4B0B180[14];
  qword_4B0B180[12] = 1;
  LODWORD(qword_4B0B180[13]) = 0;
  BYTE4(qword_4B0B180[13]) = 1;
  v2 = sub_259AC30(a1, a2);
  v3 = LODWORD(qword_4B0B180[9]);
  if ( HIDWORD(qword_4B0B180[9]) < (unsigned __int64)(v3 + 1) )
  {
    sub_25D6060(&qword_4B0B180[8], &qword_4B0B180[10], v3 + 1, 8);
    v3 = LODWORD(qword_4B0B180[9]);
  }
  *(_QWORD *)(qword_4B0B180[8] + 8 * v3) = v2;
  *(_OWORD *)&qword_4B0B180[19] = 0;
  v4 = _mm_loadl_epi64((const __m128i *)&off_49EBEA8);
  ++LODWORD(qword_4B0B180[9]);
  qword_4B0B180[16] = (__int64)&off_4A64710;
  LODWORD(qword_4B0B180[15]) = 0;
  BYTE4(qword_4B0B180[17]) = 0;
  qword_4B0B180[0] = (__int64)off_4A6DEB8;
  LODWORD(qword_4B0B180[17]) = 0;
  qword_4B0B180[18] = (__int64)off_49D9228;
  *(__m128i *)&qword_4B0B180[21] = _mm_unpacklo_epi64(v4, (__m128i)(unsigned __int64)nullsub_267);
  sub_259F400(qword_4B0B180, "max-devirt-iterations", 21);
  v5 = BYTE2(qword_4B0B180[1]);
  LODWORD(qword_4B0B180[15]) = 4;
  BYTE4(qword_4B0B180[17]) = 1;
  LODWORD(qword_4B0B180[17]) = 4;
  BYTE2(qword_4B0B180[1]) = v5 & 0x9F | 0x40;
  sub_259EC40(qword_4B0B180);
  return __cxa_atexit(sub_1F6C940, qword_4B0B180, &off_47CFE00);
}

