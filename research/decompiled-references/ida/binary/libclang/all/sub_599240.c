int __fastcall sub_599240(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // rax
  __m128i v4; // xmm3
  __m128i v5; // xmm0
  __int64 v6; // r12
  __int64 v7; // rax
  unsigned __int64 v8; // rdx
  __m128i v10; // [rsp+0h] [rbp-68h] BYREF
  void *v11; // [rsp+10h] [rbp-58h]
  __int64 v12; // [rsp+18h] [rbp-50h]
  __int64 v13; // [rsp+20h] [rbp-48h] BYREF
  char v14[64]; // [rsp+28h] [rbp-40h] BYREF

  qword_4AFC700[2] = 0;
  qword_4AFC700[0] = (__int64)&off_4A6E058;
  qword_4AFC700[1] &= 0x80000000uLL;
  qword_4AFC700[11] = (__int64)&qword_4AFC700[14];
  v10 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&off_49D9118, (__m128i)(unsigned __int64)&qword_4AFC700[22]);
  qword_4AFC700[3] = 0;
  qword_4AFC700[4] = 0;
  qword_4AFC700[5] = 0;
  qword_4AFC700[6] = 0;
  qword_4AFC700[7] = 0;
  qword_4AFC700[8] = (__int64)&qword_4AFC700[10];
  qword_4AFC700[9] = 0x100000000LL;
  qword_4AFC700[12] = 1;
  LODWORD(qword_4AFC700[13]) = 0;
  BYTE4(qword_4AFC700[13]) = 1;
  v2 = sub_259AC30(a1, a2);
  v3 = LODWORD(qword_4AFC700[9]);
  if ( HIDWORD(qword_4AFC700[9]) < (unsigned __int64)(v3 + 1) )
  {
    sub_25D6060(&qword_4AFC700[8], &qword_4AFC700[10], v3 + 1, 8);
    v3 = LODWORD(qword_4AFC700[9]);
  }
  v4 = _mm_load_si128(&v10);
  *(_QWORD *)(qword_4AFC700[8] + 8 * v3) = v2;
  qword_4AFC700[15] = (__int64)&qword_4AFC700[17];
  *(_OWORD *)&qword_4AFC700[26] = 0;
  v5 = _mm_loadl_epi64((const __m128i *)&off_49EB138);
  ++LODWORD(qword_4AFC700[9]);
  qword_4AFC700[0] = (__int64)&off_4A6DF88;
  *(__m128i *)&qword_4AFC700[19] = v4;
  qword_4AFC700[16] = 0;
  qword_4AFC700[25] = (__int64)off_49D92E8;
  LOBYTE(qword_4AFC700[17]) = 0;
  LOBYTE(qword_4AFC700[22]) = 0;
  *(__m128i *)&qword_4AFC700[28] = _mm_unpacklo_epi64(v5, (__m128i)(unsigned __int64)nullsub_294);
  qword_4AFC700[21] = 0;
  LOBYTE(qword_4AFC700[24]) = 0;
  sub_259F400(qword_4AFC700, "bbsections-cold-text-prefix", 27);
  qword_4AFC700[4] = (__int64)"The text prefix to use for cold basic block clusters";
  v13 = 0x70732E747865742ELL;
  qword_4AFC700[5] = 52;
  v11 = &v13;
  strcpy(v14, "lit.");
  v12 = 12;
  std::string::_M_assign();
  LOBYTE(qword_4AFC700[24]) = 1;
  std::string::_M_assign();
  if ( v11 != &v13 )
    operator delete(v11, v13 + 1);
  BYTE2(qword_4AFC700[1]) = BYTE2(qword_4AFC700[1]) & 0x9F | 0x20;
  sub_259EC40(qword_4AFC700);
  __cxa_atexit(sub_2283FB0, qword_4AFC700, &off_47CFE00);
  qword_4AFC6A0 = 1;
  qword_4AFC640 = (__int64)&off_4A6E058;
  qword_4AFC648 = (unsigned int)qword_4AFC648 & 0x80000000;
  qword_4AFC680 = (__int64)&qword_4AFC690;
  qword_4AFC650 = 0;
  qword_4AFC658 = 0;
  qword_4AFC660 = 0;
  qword_4AFC668 = 0;
  qword_4AFC670 = 0;
  qword_4AFC678 = 0;
  qword_4AFC688 = 0x100000000LL;
  qword_4AFC698 = (__int64)&qword_4AFC6B0;
  dword_4AFC6A8 = 0;
  byte_4AFC6AC = 1;
  v6 = sub_259AC30(sub_2283FB0, &qword_4AFC690);
  v7 = (unsigned int)qword_4AFC688;
  v8 = (unsigned int)qword_4AFC688 + 1LL;
  if ( HIDWORD(qword_4AFC688) < v8 )
  {
    sub_25D6060(&qword_4AFC690 - 2, &qword_4AFC690, v8, 8);
    v7 = (unsigned int)qword_4AFC688;
  }
  *(_QWORD *)(qword_4AFC680 + 8 * v7) = v6;
  word_4AFC6C8 = 0;
  xmmword_4AFC6D8 = 0;
  LODWORD(qword_4AFC688) = qword_4AFC688 + 1;
  qword_4AFC6C0 = (__int64)&off_4A64730;
  byte_4AFC6B8 = 0;
  qword_4AFC640 = (__int64)off_4A6DFF0;
  qword_4AFC6D0 = (__int64)off_49D9168;
  xmmword_4AFC6E8 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49EB140),
                                (__m128i)(unsigned __int64)nullsub_266);
  sub_259F400(&qword_4AFC640, "bbsections-detect-source-drift", 30);
  qword_4AFC660 = (__int64)"This checks if there is a fdo instr. profile hash mismatch for this function";
  word_4AFC6C8 = 257;
  byte_4AFC6B8 = 1;
  qword_4AFC668 = 76;
  BYTE2(qword_4AFC648) = BYTE2(qword_4AFC648) & 0x9F | 0x20;
  sub_259EC40(&qword_4AFC640);
  return __cxa_atexit(sub_1F6C9D0, &qword_4AFC640, &off_47CFE00);
}

