int __fastcall sub_58FBC0(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // rdx
  __m128i v4; // xmm5
  __int64 v5; // rax
  __int64 v6; // rdx
  __m128i v7; // xmm6
  __int64 v8; // r15
  __int64 v9; // rax
  unsigned __int64 v10; // rdx
  __m128i v11; // xmm7
  __int64 v12; // r12
  __int64 v13; // rax
  unsigned __int64 v14; // rdx
  __m128i v15; // xmm3
  __m128i v17; // [rsp+0h] [rbp-68h] BYREF
  __m128i v18; // [rsp+10h] [rbp-58h] BYREF
  __int64 v19; // [rsp+28h] [rbp-40h]

  qword_4AF7460 = (__int64)&qword_4AF7470;
  qword_4AF7430 = 0;
  qword_4AF7438 = 0;
  qword_4AF7420 = (__int64)&off_4A6E058;
  qword_4AF7428 = (unsigned int)qword_4AF7428 & 0x80000000;
  qword_4AF7478 = (__int64)&qword_4AF7490;
  v17 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_49EA2D0), (__m128i)(unsigned __int64)nullsub_267);
  v18 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_49EA2D8), (__m128i)(unsigned __int64)nullsub_266);
  qword_4AF7440 = 0;
  qword_4AF7448 = 0;
  qword_4AF7450 = 0;
  qword_4AF7458 = 0;
  qword_4AF7468 = 0x100000000LL;
  dword_4AF7488 = 0;
  qword_4AF7480 = 1;
  byte_4AF748C = 1;
  v1 = sub_259AC30(a1, &qword_4AF7470);
  v2 = (unsigned int)qword_4AF7468;
  v3 = (unsigned int)qword_4AF7468 + 1LL;
  if ( HIDWORD(qword_4AF7468) < v3 )
  {
    sub_25D6060(&qword_4AF7470 - 2, &qword_4AF7470, v3, 8);
    v2 = (unsigned int)qword_4AF7468;
  }
  v4 = _mm_load_si128(&v18);
  *(_QWORD *)(qword_4AF7460 + 8 * v2) = v1;
  word_4AF74A8 = 0;
  xmmword_4AF74B8 = 0;
  qword_4AF74A0 = (__int64)&off_4A64730;
  xmmword_4AF74C8 = (__int128)v4;
  LODWORD(qword_4AF7468) = qword_4AF7468 + 1;
  qword_4AF7420 = (__int64)off_4A6DFF0;
  byte_4AF7498 = 0;
  qword_4AF74B0 = (__int64)off_49D9168;
  sub_259F400(&qword_4AF7420, "enable-aa-sched-mi", 18);
  qword_4AF7448 = 43;
  BYTE2(qword_4AF7428) = BYTE2(qword_4AF7428) & 0x9F | 0x20;
  qword_4AF7440 = (__int64)"Enable use of AA during MI DAG construction";
  sub_259EC40(&qword_4AF7420);
  __cxa_atexit(sub_1F6C9D0, &qword_4AF7420, &off_47CFE00);
  qword_4AF7370 = 0;
  qword_4AF7360 = (__int64)&off_4A6E058;
  qword_4AF7368 = (unsigned int)qword_4AF7368 & 0x80000000;
  qword_4AF73A0 = (__int64)&qword_4AF73B0;
  qword_4AF7378 = 0;
  qword_4AF7380 = 0;
  qword_4AF7388 = 0;
  qword_4AF7390 = 0;
  qword_4AF7398 = 0;
  qword_4AF73A8 = 0x100000000LL;
  qword_4AF73B8 = (__int64)&qword_4AF73D0;
  qword_4AF73C0 = 1;
  dword_4AF73C8 = 0;
  byte_4AF73CC = 1;
  v5 = sub_259AC30(sub_1F6C9D0, &qword_4AF73B0);
  v6 = (unsigned int)qword_4AF73A8;
  if ( HIDWORD(qword_4AF73A8) < (unsigned __int64)(unsigned int)qword_4AF73A8 + 1 )
  {
    v19 = v5;
    sub_25D6060(&qword_4AF73B0 - 2, &qword_4AF73B0, (unsigned int)qword_4AF73A8 + 1LL, 8);
    v6 = (unsigned int)qword_4AF73A8;
    v5 = v19;
  }
  v7 = _mm_load_si128(&v18);
  *(_QWORD *)(qword_4AF73A0 + 8 * v6) = v5;
  word_4AF73E8 = 0;
  xmmword_4AF73F8 = 0;
  xmmword_4AF7408 = (__int128)v7;
  qword_4AF73E0 = (__int64)&off_4A64730;
  LODWORD(qword_4AF73A8) = qword_4AF73A8 + 1;
  byte_4AF73D8 = 0;
  qword_4AF7360 = (__int64)off_4A6DFF0;
  qword_4AF73F0 = (__int64)off_49D9168;
  sub_259F400(&qword_4AF7360, "use-tbaa-in-sched-mi", 20);
  word_4AF73E8 = 257;
  byte_4AF73D8 = 1;
  qword_4AF7388 = 45;
  BYTE2(qword_4AF7368) = BYTE2(qword_4AF7368) & 0x9F | 0x20;
  qword_4AF7380 = (__int64)"Enable use of TBAA during MI DAG construction";
  sub_259EC40(&qword_4AF7360);
  __cxa_atexit(sub_1F6C9D0, &qword_4AF7360, &off_47CFE00);
  qword_4AF72B0 = 0;
  qword_4AF72A0 = (__int64)&off_4A6E058;
  qword_4AF72A8 = (unsigned int)qword_4AF72A8 & 0x80000000;
  qword_4AF72E0 = (__int64)&qword_4AF72F0;
  qword_4AF72B8 = 0;
  qword_4AF72C0 = 0;
  qword_4AF72C8 = 0;
  qword_4AF72D0 = 0;
  qword_4AF72D8 = 0;
  qword_4AF72E8 = 0x100000000LL;
  qword_4AF72F8 = (__int64)&qword_4AF7310;
  qword_4AF7300 = 1;
  dword_4AF7308 = 0;
  byte_4AF730C = 1;
  v8 = sub_259AC30(sub_1F6C9D0, &qword_4AF72F0);
  v9 = (unsigned int)qword_4AF72E8;
  v10 = (unsigned int)qword_4AF72E8 + 1LL;
  if ( HIDWORD(qword_4AF72E8) < v10 )
  {
    sub_25D6060(&qword_4AF72F0 - 2, &qword_4AF72F0, v10, 8);
    v9 = (unsigned int)qword_4AF72E8;
  }
  v11 = _mm_load_si128(&v17);
  *(_QWORD *)(qword_4AF72E0 + 8 * v9) = v8;
  xmmword_4AF7338 = 0;
  xmmword_4AF7348 = (__int128)v11;
  qword_4AF7320 = (__int64)&off_4A64710;
  LODWORD(qword_4AF72E8) = qword_4AF72E8 + 1;
  byte_4AF732C = 0;
  qword_4AF72A0 = (__int64)off_4A6DEB8;
  dword_4AF7318 = 0;
  dword_4AF7328 = 0;
  qword_4AF7330 = (__int64)off_49D9228;
  sub_259F400(&qword_4AF72A0, "dag-maps-huge-region", 20);
  dword_4AF7318 = 1000;
  byte_4AF732C = 1;
  dword_4AF7328 = 1000;
  qword_4AF72C8 = 132;
  BYTE2(qword_4AF72A8) = BYTE2(qword_4AF72A8) & 0x9F | 0x20;
  qword_4AF72C0 = (__int64)"The limit to use while constructing the DAG prior to scheduling, at which point a trade-off i"
                           "s made to avoid excessive compile time.";
  sub_259EC40(&qword_4AF72A0);
  __cxa_atexit(sub_1F6C940, &qword_4AF72A0, &off_47CFE00);
  qword_4AF7228 = 0x100000000LL;
  qword_4AF71E0 = (__int64)&off_4A6E058;
  qword_4AF71E8 = (unsigned int)qword_4AF71E8 & 0x80000000;
  qword_4AF7220 = (__int64)&qword_4AF7230;
  qword_4AF71F0 = 0;
  qword_4AF71F8 = 0;
  qword_4AF7200 = 0;
  qword_4AF7208 = 0;
  qword_4AF7210 = 0;
  qword_4AF7218 = 0;
  qword_4AF7238 = (__int64)&qword_4AF7250;
  qword_4AF7240 = 1;
  dword_4AF7248 = 0;
  byte_4AF724C = 1;
  v12 = sub_259AC30(sub_1F6C940, &qword_4AF7230);
  v13 = (unsigned int)qword_4AF7228;
  v14 = (unsigned int)qword_4AF7228 + 1LL;
  if ( HIDWORD(qword_4AF7228) < v14 )
  {
    sub_25D6060(&qword_4AF7230 - 2, &qword_4AF7230, v14, 8);
    v13 = (unsigned int)qword_4AF7228;
  }
  v15 = _mm_load_si128(&v17);
  *(_QWORD *)(qword_4AF7220 + 8 * v13) = v12;
  qword_4AF7260 = (__int64)&off_4A64710;
  xmmword_4AF7278 = 0;
  xmmword_4AF7288 = (__int128)v15;
  qword_4AF71E0 = (__int64)off_4A6DEB8;
  LODWORD(qword_4AF7228) = qword_4AF7228 + 1;
  byte_4AF726C = 0;
  qword_4AF7270 = (__int64)off_49D9228;
  dword_4AF7258 = 0;
  dword_4AF7268 = 0;
  sub_259F400(&qword_4AF71E0, "dag-maps-reduction-size", 23);
  qword_4AF7208 = 105;
  BYTE2(qword_4AF71E8) = BYTE2(qword_4AF71E8) & 0x9F | 0x20;
  qword_4AF7200 = (__int64)"A huge scheduling region will have maps reduced by this many nodes at a time. Defaults to HugeRegion / 2.";
  sub_259EC40(&qword_4AF71E0);
  return __cxa_atexit(sub_1F6C940, &qword_4AF71E0, &off_47CFE00);
}

