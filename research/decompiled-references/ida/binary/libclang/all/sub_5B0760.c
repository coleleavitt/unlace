int __fastcall sub_5B0760(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // rdx
  __int64 v4; // r15
  __int64 v5; // rax
  unsigned __int64 v6; // rdx
  __m128i si128; // xmm4
  __int64 v8; // r12
  __int64 v9; // rax
  unsigned __int64 v10; // rdx
  __m128i v11; // xmm5
  __m128i v13[4]; // [rsp+0h] [rbp-48h] BYREF

  qword_4B071E0 = (__int64)&qword_4B071F0;
  qword_4B071B0 = 0;
  qword_4B071B8 = 0;
  qword_4B071A0 = (__int64)&off_4A6E058;
  qword_4B071A8 = (unsigned int)qword_4B071A8 & 0x80000000;
  qword_4B071F8 = (__int64)&qword_4B07210;
  v13[0] = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_49EBB40), (__m128i)(unsigned __int64)nullsub_267);
  qword_4B071C0 = 0;
  qword_4B071C8 = 0;
  qword_4B071D0 = 0;
  qword_4B071D8 = 0;
  qword_4B071E8 = 0x100000000LL;
  qword_4B07200 = 1;
  dword_4B07208 = 0;
  byte_4B0720C = 1;
  v1 = sub_259AC30(a1, &qword_4B071F0);
  v2 = (unsigned int)qword_4B071E8;
  v3 = (unsigned int)qword_4B071E8 + 1LL;
  if ( HIDWORD(qword_4B071E8) < v3 )
  {
    sub_25D6060(&qword_4B071F0 - 2, &qword_4B071F0, v3, 8);
    v2 = (unsigned int)qword_4B071E8;
  }
  *(_QWORD *)(qword_4B071E0 + 8 * v2) = v1;
  word_4B07228 = 0;
  xmmword_4B07238 = 0;
  LODWORD(qword_4B071E8) = qword_4B071E8 + 1;
  qword_4B07220 = (__int64)&off_4A64730;
  byte_4B07218 = 0;
  qword_4B071A0 = (__int64)off_4A6DFF0;
  qword_4B07230 = (__int64)off_49D9168;
  xmmword_4B07248 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49EBB48),
                                (__m128i)(unsigned __int64)nullsub_266);
  sub_259F400(&qword_4B071A0, "phicse-debug-hash", 17);
  word_4B07228 = 256;
  byte_4B07218 = 0;
  qword_4B071C8 = 117;
  BYTE2(qword_4B071A8) = BYTE2(qword_4B071A8) & 0x9F | 0x20;
  qword_4B071C0 = (__int64)"Perform extra assertion checking to verify that PHINodes's hash function is well-behaved w.r."
                           "t. its isEqual predicate";
  sub_259EC40(&qword_4B071A0);
  __cxa_atexit(sub_1F6C9D0, &qword_4B071A0, &off_47CFE00);
  qword_4B070F0 = 0;
  qword_4B070E0 = (__int64)&off_4A6E058;
  qword_4B070E8 = (unsigned int)qword_4B070E8 & 0x80000000;
  qword_4B07120 = (__int64)&qword_4B07130;
  qword_4B070F8 = 0;
  qword_4B07100 = 0;
  qword_4B07108 = 0;
  qword_4B07110 = 0;
  qword_4B07118 = 0;
  qword_4B07128 = 0x100000000LL;
  qword_4B07138 = (__int64)&qword_4B07150;
  qword_4B07140 = 1;
  dword_4B07148 = 0;
  byte_4B0714C = 1;
  v4 = sub_259AC30(sub_1F6C9D0, &qword_4B07130);
  v5 = (unsigned int)qword_4B07128;
  v6 = (unsigned int)qword_4B07128 + 1LL;
  if ( HIDWORD(qword_4B07128) < v6 )
  {
    sub_25D6060(&qword_4B07130 - 2, &qword_4B07130, v6, 8);
    v5 = (unsigned int)qword_4B07128;
  }
  si128 = _mm_load_si128(v13);
  *(_QWORD *)(qword_4B07120 + 8 * v5) = v4;
  xmmword_4B07178 = 0;
  xmmword_4B07188 = (__int128)si128;
  qword_4B07160 = (__int64)&off_4A64710;
  LODWORD(qword_4B07128) = qword_4B07128 + 1;
  byte_4B0716C = 0;
  qword_4B070E0 = (__int64)off_4A6DEB8;
  dword_4B07158 = 0;
  dword_4B07168 = 0;
  qword_4B07170 = (__int64)off_49D9228;
  sub_259F400(&qword_4B070E0, "phicse-num-phi-smallsize", 24);
  dword_4B07158 = 32;
  byte_4B0716C = 1;
  dword_4B07168 = 32;
  qword_4B07108 = 134;
  BYTE2(qword_4B070E8) = BYTE2(qword_4B070E8) & 0x9F | 0x20;
  qword_4B07100 = (__int64)"When the basic block contains not more than this number of PHI nodes, perform a (faster!) exh"
                           "austive search instead of set-driven one.";
  sub_259EC40(&qword_4B070E0);
  __cxa_atexit(sub_1F6C940, &qword_4B070E0, &off_47CFE00);
  qword_4B07068 = 0x100000000LL;
  qword_4B07020 = (__int64)&off_4A6E058;
  qword_4B07028 = (unsigned int)qword_4B07028 & 0x80000000;
  qword_4B07060 = (__int64)&qword_4B07070;
  qword_4B07030 = 0;
  qword_4B07038 = 0;
  qword_4B07040 = 0;
  qword_4B07048 = 0;
  qword_4B07050 = 0;
  qword_4B07058 = 0;
  qword_4B07078 = (__int64)&qword_4B07090;
  qword_4B07080 = 1;
  dword_4B07088 = 0;
  byte_4B0708C = 1;
  v8 = sub_259AC30(sub_1F6C940, &qword_4B07070);
  v9 = (unsigned int)qword_4B07068;
  v10 = (unsigned int)qword_4B07068 + 1LL;
  if ( HIDWORD(qword_4B07068) < v10 )
  {
    sub_25D6060(&qword_4B07070 - 2, &qword_4B07070, v10, 8);
    v9 = (unsigned int)qword_4B07068;
  }
  v11 = _mm_load_si128(v13);
  *(_QWORD *)(qword_4B07060 + 8 * v9) = v8;
  qword_4B070A0 = (__int64)&off_4A64710;
  xmmword_4B070B8 = 0;
  xmmword_4B070C8 = (__int128)v11;
  qword_4B07020 = (__int64)off_4A6DEB8;
  LODWORD(qword_4B07068) = qword_4B07068 + 1;
  byte_4B070AC = 0;
  qword_4B070B0 = (__int64)off_49D9228;
  dword_4B07098 = 0;
  dword_4B070A8 = 0;
  sub_259F400(&qword_4B07020, "max-phi-entries-increase-after-removing-empty-block", 51);
  dword_4B07098 = 1000;
  byte_4B070AC = 1;
  dword_4B070A8 = 1000;
  qword_4B07048 = 112;
  BYTE2(qword_4B07028) = BYTE2(qword_4B07028) & 0x9F | 0x20;
  qword_4B07040 = (__int64)"Stop removing an empty block if removing it will introduce more than this number of phi entri"
                           "es in its successor";
  sub_259EC40(&qword_4B07020);
  return __cxa_atexit(sub_1F6C940, &qword_4B07020, &off_47CFE00);
}

