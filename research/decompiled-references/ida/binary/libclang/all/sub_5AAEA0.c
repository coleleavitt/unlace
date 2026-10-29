int __fastcall sub_5AAEA0(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // rdx
  __m128i v4; // xmm3
  __int64 v5; // rax
  __int64 v6; // rdx
  __m128i v7; // xmm4
  __int64 v8; // r12
  __int64 v9; // rax
  unsigned __int64 v10; // rdx
  __m128i v12; // [rsp+0h] [rbp-58h] BYREF
  __int64 v13; // [rsp+18h] [rbp-40h]

  qword_4B055A0 = (__int64)&qword_4B055B0;
  qword_4B05570 = 0;
  qword_4B05578 = 0;
  qword_4B05560 = (__int64)&off_4A6E058;
  qword_4B05568 = (unsigned int)qword_4B05568 & 0x80000000;
  qword_4B055B8 = (__int64)&qword_4B055D0;
  v12 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_49EB9A0), (__m128i)(unsigned __int64)nullsub_267);
  qword_4B05580 = 0;
  qword_4B05588 = 0;
  qword_4B05590 = 0;
  qword_4B05598 = 0;
  qword_4B055A8 = 0x100000000LL;
  qword_4B055C0 = 1;
  dword_4B055C8 = 0;
  byte_4B055CC = 1;
  v1 = sub_259AC30(a1, &qword_4B055B0);
  v2 = (unsigned int)qword_4B055A8;
  v3 = (unsigned int)qword_4B055A8 + 1LL;
  if ( HIDWORD(qword_4B055A8) < v3 )
  {
    sub_25D6060(&qword_4B055B0 - 2, &qword_4B055B0, v3, 8);
    v2 = (unsigned int)qword_4B055A8;
  }
  v4 = _mm_load_si128(&v12);
  *(_QWORD *)(qword_4B055A0 + 8 * v2) = v1;
  xmmword_4B055F8 = 0;
  xmmword_4B05608 = (__int128)v4;
  qword_4B055E0 = (__int64)&off_4A64710;
  LODWORD(qword_4B055A8) = qword_4B055A8 + 1;
  byte_4B055EC = 0;
  qword_4B05560 = (__int64)off_4A6DEB8;
  dword_4B055D8 = 0;
  dword_4B055E8 = 0;
  qword_4B055F0 = (__int64)off_49D9228;
  sub_259F400(&qword_4B05560, "bitcode-mdindex-threshold", 25);
  dword_4B055D8 = 25;
  byte_4B055EC = 1;
  dword_4B055E8 = 25;
  qword_4B05588 = 71;
  BYTE2(qword_4B05568) = BYTE2(qword_4B05568) & 0x9F | 0x20;
  qword_4B05580 = (__int64)"Number of metadatas above which we emit an index to enable lazy-loading";
  sub_259EC40(&qword_4B05560);
  __cxa_atexit(sub_1F6C940, &qword_4B05560, &off_47CFE00);
  qword_4B054B0 = 0;
  qword_4B054A0 = (__int64)&off_4A6E058;
  qword_4B054A8 = (unsigned int)qword_4B054A8 & 0x80000000;
  qword_4B054E0 = (__int64)&qword_4B054F0;
  qword_4B054B8 = 0;
  qword_4B054C0 = 0;
  qword_4B054C8 = 0;
  qword_4B054D0 = 0;
  qword_4B054D8 = 0;
  qword_4B054E8 = 0x100000000LL;
  qword_4B054F8 = (__int64)&qword_4B05510;
  qword_4B05500 = 1;
  dword_4B05508 = 0;
  byte_4B0550C = 1;
  v5 = sub_259AC30(sub_1F6C940, &qword_4B054F0);
  v6 = (unsigned int)qword_4B054E8;
  if ( HIDWORD(qword_4B054E8) < (unsigned __int64)(unsigned int)qword_4B054E8 + 1 )
  {
    v13 = v5;
    sub_25D6060(&qword_4B054F0 - 2, &qword_4B054F0, (unsigned int)qword_4B054E8 + 1LL, 8);
    v6 = (unsigned int)qword_4B054E8;
    v5 = v13;
  }
  v7 = _mm_load_si128(&v12);
  *(_QWORD *)(qword_4B054E0 + 8 * v6) = v5;
  xmmword_4B05538 = 0;
  xmmword_4B05548 = (__int128)v7;
  qword_4B05520 = (__int64)&off_4A64710;
  LODWORD(qword_4B054E8) = qword_4B054E8 + 1;
  byte_4B0552C = 0;
  qword_4B054A0 = (__int64)off_4A6DEB8;
  dword_4B05518 = 0;
  dword_4B05528 = 0;
  qword_4B05530 = (__int64)off_49D9228;
  sub_259F400(&qword_4B054A0, "bitcode-flush-threshold", 23);
  dword_4B05518 = 512;
  byte_4B0552C = 1;
  dword_4B05528 = 512;
  qword_4B054C8 = 49;
  BYTE2(qword_4B054A8) = BYTE2(qword_4B054A8) & 0x9F | 0x20;
  qword_4B054C0 = (__int64)"The threshold (unit M) for flushing LLVM bitcode.";
  sub_259EC40(&qword_4B054A0);
  __cxa_atexit(sub_1F6C940, &qword_4B054A0, &off_47CFE00);
  qword_4B05428 = 0x100000000LL;
  qword_4B053E0 = (__int64)&off_4A6E058;
  qword_4B053E8 = (unsigned int)qword_4B053E8 & 0x80000000;
  qword_4B05420 = (__int64)&qword_4B05430;
  qword_4B053F0 = 0;
  qword_4B053F8 = 0;
  qword_4B05400 = 0;
  qword_4B05408 = 0;
  qword_4B05410 = 0;
  qword_4B05418 = 0;
  qword_4B05438 = (__int64)&qword_4B05450;
  qword_4B05440 = 1;
  dword_4B05448 = 0;
  byte_4B0544C = 1;
  v8 = sub_259AC30(sub_1F6C940, &qword_4B05430);
  v9 = (unsigned int)qword_4B05428;
  v10 = (unsigned int)qword_4B05428 + 1LL;
  if ( HIDWORD(qword_4B05428) < v10 )
  {
    sub_25D6060(&qword_4B05430 - 2, &qword_4B05430, v10, 8);
    v9 = (unsigned int)qword_4B05428;
  }
  *(_QWORD *)(qword_4B05420 + 8 * v9) = v8;
  word_4B05468 = 0;
  xmmword_4B05478 = 0;
  LODWORD(qword_4B05428) = qword_4B05428 + 1;
  qword_4B05460 = (__int64)&off_4A64730;
  byte_4B05458 = 0;
  qword_4B053E0 = (__int64)off_4A6DFF0;
  qword_4B05470 = (__int64)off_49D9168;
  xmmword_4B05488 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49EB9A8),
                                (__m128i)(unsigned __int64)nullsub_266);
  sub_259F400(&qword_4B053E0, "write-relbf-to-summary", 22);
  word_4B05468 = 256;
  byte_4B05458 = 0;
  qword_4B05408 = 51;
  BYTE2(qword_4B053E8) = BYTE2(qword_4B053E8) & 0x9F | 0x20;
  qword_4B05400 = (__int64)"Write relative block frequency to function summary ";
  sub_259EC40(&qword_4B053E0);
  return __cxa_atexit(sub_1F6C9D0, &qword_4B053E0, &off_47CFE00);
}

