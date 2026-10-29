int __fastcall sub_573850(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // rax
  __m128i v4; // xmm0

  qword_4AE43E0[0] = (__int64)&off_4A6E058;
  qword_4AE43E0[1] &= 0x80000000uLL;
  qword_4AE43E0[2] = 0;
  qword_4AE43E0[9] = 0x100000000LL;
  qword_4AE43E0[3] = 0;
  qword_4AE43E0[4] = 0;
  qword_4AE43E0[5] = 0;
  qword_4AE43E0[6] = 0;
  qword_4AE43E0[7] = 0;
  qword_4AE43E0[8] = (__int64)&qword_4AE43E0[10];
  qword_4AE43E0[11] = (__int64)&qword_4AE43E0[14];
  qword_4AE43E0[12] = 1;
  LODWORD(qword_4AE43E0[13]) = 0;
  BYTE4(qword_4AE43E0[13]) = 1;
  v2 = sub_259AC30(a1, a2);
  v3 = LODWORD(qword_4AE43E0[9]);
  if ( HIDWORD(qword_4AE43E0[9]) < (unsigned __int64)(v3 + 1) )
  {
    sub_25D6060(&qword_4AE43E0[8], &qword_4AE43E0[10], v3 + 1, 8);
    v3 = LODWORD(qword_4AE43E0[9]);
  }
  *(_QWORD *)(qword_4AE43E0[8] + 8 * v3) = v2;
  LOWORD(qword_4AE43E0[17]) = 0;
  *(_OWORD *)&qword_4AE43E0[19] = 0;
  v4 = _mm_loadl_epi64((const __m128i *)&off_49D8FB8);
  ++LODWORD(qword_4AE43E0[9]);
  qword_4AE43E0[16] = (__int64)&off_4A64730;
  LOBYTE(qword_4AE43E0[15]) = 0;
  qword_4AE43E0[0] = (__int64)off_4A6DFF0;
  qword_4AE43E0[18] = (__int64)off_49D9168;
  *(__m128i *)&qword_4AE43E0[21] = _mm_unpacklo_epi64(v4, (__m128i)(unsigned __int64)nullsub_266);
  sub_259F400(qword_4AE43E0, "write-experimental-debuginfo", 28);
  LOWORD(qword_4AE43E0[17]) = 257;
  qword_4AE43E0[4] = (__int64)"Write debug info in the new non-intrinsic format. Has no effect if --preserve-input-debugi"
                              "nfo-format=true.";
  qword_4AE43E0[5] = 106;
  LOBYTE(qword_4AE43E0[15]) = 1;
  sub_259EC40(qword_4AE43E0);
  return __cxa_atexit(sub_1F6C9D0, qword_4AE43E0, &off_47CFE00);
}

