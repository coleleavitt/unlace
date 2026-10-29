int __fastcall sub_591A30(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // rdx
  __m128i v4; // xmm3
  __int64 v5; // rax
  __int64 v6; // rdx
  __m128i v7; // xmm4
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r13
  __int64 v11; // rax
  unsigned __int64 v12; // rdx
  __m128i v13; // xmm6
  __m128i v15; // [rsp+0h] [rbp-88h] BYREF
  int **v16; // [rsp+18h] [rbp-70h]
  int *v17; // [rsp+20h] [rbp-68h]
  int *v18; // [rsp+28h] [rbp-60h]
  int v19; // [rsp+30h] [rbp-58h] BYREF
  int v20; // [rsp+34h] [rbp-54h] BYREF
  int *v21; // [rsp+38h] [rbp-50h] BYREF
  const char *v22; // [rsp+40h] [rbp-48h] BYREF
  __int64 v23; // [rsp+48h] [rbp-40h]

  qword_4AF83C0 = (__int64)&qword_4AF83D0;
  qword_4AF8390 = 0;
  qword_4AF8398 = 0;
  qword_4AF8380 = (__int64)&off_4A6E058;
  qword_4AF8388 = (unsigned int)qword_4AF8388 & 0x80000000;
  qword_4AF83D8 = (__int64)&qword_4AF83F0;
  v15 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_49EA338), (__m128i)(unsigned __int64)nullsub_267);
  qword_4AF83A0 = 0;
  qword_4AF83A8 = 0;
  qword_4AF83B0 = 0;
  qword_4AF83B8 = 0;
  qword_4AF83C8 = 0x100000000LL;
  qword_4AF83E0 = 1;
  dword_4AF83E8 = 0;
  byte_4AF83EC = 1;
  v1 = sub_259AC30(a1, &qword_4AF83D0);
  v2 = (unsigned int)qword_4AF83C8;
  v3 = (unsigned int)qword_4AF83C8 + 1LL;
  if ( HIDWORD(qword_4AF83C8) < v3 )
  {
    sub_25D6060(&qword_4AF83D0 - 2, &qword_4AF83D0, v3, 8);
    v2 = (unsigned int)qword_4AF83C8;
  }
  v4 = _mm_load_si128(&v15);
  *(_QWORD *)(qword_4AF83C0 + 8 * v2) = v1;
  xmmword_4AF8418 = 0;
  xmmword_4AF8428 = (__int128)v4;
  qword_4AF8400 = (__int64)&off_4A64710;
  LODWORD(qword_4AF83C8) = qword_4AF83C8 + 1;
  byte_4AF840C = 0;
  qword_4AF8380 = (__int64)off_4A6DEB8;
  dword_4AF83F8 = 0;
  dword_4AF8408 = 0;
  qword_4AF8410 = (__int64)off_49D9228;
  sub_259F400(&qword_4AF8380, "tail-dup-size", 13);
  qword_4AF83A8 = 49;
  qword_4AF83A0 = (__int64)"Maximum instructions to consider tail duplicating";
  dword_4AF83F8 = 2;
  byte_4AF840C = 1;
  dword_4AF8408 = 2;
  BYTE2(qword_4AF8388) = BYTE2(qword_4AF8388) & 0x9F | 0x20;
  sub_259EC40(&qword_4AF8380);
  __cxa_atexit(sub_1F6C940, &qword_4AF8380, &off_47CFE00);
  qword_4AF82D0 = 0;
  qword_4AF82C0 = (__int64)&off_4A6E058;
  qword_4AF82C8 = (unsigned int)qword_4AF82C8 & 0x80000000;
  qword_4AF8300 = (__int64)&qword_4AF8310;
  qword_4AF82D8 = 0;
  qword_4AF82E0 = 0;
  qword_4AF82E8 = 0;
  qword_4AF82F0 = 0;
  qword_4AF82F8 = 0;
  qword_4AF8308 = 0x100000000LL;
  qword_4AF8318 = (__int64)&qword_4AF8330;
  qword_4AF8320 = 1;
  dword_4AF8328 = 0;
  byte_4AF832C = 1;
  v5 = sub_259AC30(sub_1F6C940, &qword_4AF8310);
  v6 = (unsigned int)qword_4AF8308;
  if ( HIDWORD(qword_4AF8308) < (unsigned __int64)(unsigned int)qword_4AF8308 + 1 )
  {
    v16 = (int **)v5;
    sub_25D6060(&qword_4AF8310 - 2, &qword_4AF8310, (unsigned int)qword_4AF8308 + 1LL, 8);
    v6 = (unsigned int)qword_4AF8308;
    v5 = (__int64)v16;
  }
  v7 = _mm_load_si128(&v15);
  *(_QWORD *)(qword_4AF8300 + 8 * v6) = v5;
  xmmword_4AF8358 = 0;
  xmmword_4AF8368 = (__int128)v7;
  qword_4AF8340 = (__int64)&off_4A64710;
  LODWORD(qword_4AF8308) = qword_4AF8308 + 1;
  byte_4AF834C = 0;
  qword_4AF82C0 = (__int64)off_4A6DEB8;
  dword_4AF8338 = 0;
  dword_4AF8348 = 0;
  qword_4AF8350 = (__int64)off_49D9228;
  sub_259F400(&qword_4AF82C0, "tail-dup-indirect-size", 22);
  qword_4AF82E8 = 89;
  qword_4AF82E0 = (__int64)"Maximum instructions to consider tail duplicating blocks that end with indirect branches.";
  dword_4AF8338 = 20;
  byte_4AF834C = 1;
  dword_4AF8348 = 20;
  BYTE2(qword_4AF82C8) = BYTE2(qword_4AF82C8) & 0x9F | 0x20;
  sub_259EC40(&qword_4AF82C0);
  __cxa_atexit(sub_1F6C940, &qword_4AF82C0, &off_47CFE00);
  v20 = 1;
  v21 = &v19;
  v22 = "Maximum predecessors (maximum successors at the same time) to consider tail duplicating blocks.";
  v18 = &v19;
  v17 = &v20;
  v16 = &v21;
  v19 = 16;
  v23 = 95;
  sub_32AF860(qword_4AF8200, "tail-dup-pred-size", &v22);
  __cxa_atexit(sub_1F6C940, qword_4AF8200, &off_47CFE00);
  v20 = 1;
  v21 = v18;
  v22 = "Maximum successors (maximum predecessors at the same time) to consider tail duplicating blocks.";
  v19 = 16;
  v23 = 95;
  sub_32AF860(qword_4AF8140, "tail-dup-succ-size", &v22);
  __cxa_atexit(sub_1F6C940, qword_4AF8140, &off_47CFE00);
  qword_4AF8090 = 0;
  qword_4AF8080 = (__int64)&off_4A6E058;
  qword_4AF8088 = (unsigned int)qword_4AF8088 & 0x80000000;
  qword_4AF80C0 = (__int64)&qword_4AF80D0;
  qword_4AF8098 = 0;
  qword_4AF80A0 = 0;
  qword_4AF80A8 = 0;
  qword_4AF80B0 = 0;
  qword_4AF80B8 = 0;
  qword_4AF80C8 = 0x100000000LL;
  qword_4AF80D8 = (__int64)&qword_4AF80F0;
  qword_4AF80E0 = 1;
  dword_4AF80E8 = 0;
  byte_4AF80EC = 1;
  v8 = sub_259AC30(sub_1F6C940, &qword_4AF80D0);
  v9 = (unsigned int)qword_4AF80C8;
  if ( HIDWORD(qword_4AF80C8) < (unsigned __int64)(unsigned int)qword_4AF80C8 + 1 )
  {
    v16 = (int **)v8;
    sub_25D6060(&qword_4AF80D0 - 2, &qword_4AF80D0, (unsigned int)qword_4AF80C8 + 1LL, 8);
    v9 = (unsigned int)qword_4AF80C8;
    v8 = (__int64)v16;
  }
  *(_QWORD *)(qword_4AF80C0 + 8 * v9) = v8;
  word_4AF8108 = 0;
  xmmword_4AF8118 = 0;
  LODWORD(qword_4AF80C8) = qword_4AF80C8 + 1;
  qword_4AF8100 = (__int64)&off_4A64730;
  byte_4AF80F8 = 0;
  qword_4AF8080 = (__int64)off_4A6DFF0;
  qword_4AF8110 = (__int64)off_49D9168;
  xmmword_4AF8128 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49EA340),
                                (__m128i)(unsigned __int64)nullsub_266);
  sub_259F400(&qword_4AF8080, "tail-dup-verify", 15);
  qword_4AF80A0 = (__int64)"Verify sanity of PHI instructions during taildup";
  word_4AF8108 = 256;
  byte_4AF80F8 = 0;
  qword_4AF80A8 = 48;
  BYTE2(qword_4AF8088) = BYTE2(qword_4AF8088) & 0x9F | 0x20;
  sub_259EC40(&qword_4AF8080);
  __cxa_atexit(sub_1F6C9D0, &qword_4AF8080, &off_47CFE00);
  qword_4AF8008 = 0x100000000LL;
  qword_4AF7FC0 = (__int64)&off_4A6E058;
  qword_4AF7FC8 = (unsigned int)qword_4AF7FC8 & 0x80000000;
  qword_4AF8000 = (__int64)&qword_4AF8010;
  qword_4AF7FD0 = 0;
  qword_4AF7FD8 = 0;
  qword_4AF7FE0 = 0;
  qword_4AF7FE8 = 0;
  qword_4AF7FF0 = 0;
  qword_4AF7FF8 = 0;
  qword_4AF8018 = (__int64)&qword_4AF8030;
  qword_4AF8020 = 1;
  dword_4AF8028 = 0;
  byte_4AF802C = 1;
  v10 = sub_259AC30(sub_1F6C9D0, &qword_4AF8010);
  v11 = (unsigned int)qword_4AF8008;
  v12 = (unsigned int)qword_4AF8008 + 1LL;
  if ( HIDWORD(qword_4AF8008) < v12 )
  {
    sub_25D6060(&qword_4AF8010 - 2, &qword_4AF8010, v12, 8);
    v11 = (unsigned int)qword_4AF8008;
  }
  v13 = _mm_load_si128(&v15);
  *(_QWORD *)(qword_4AF8000 + 8 * v11) = v10;
  xmmword_4AF8058 = 0;
  xmmword_4AF8068 = (__int128)v13;
  qword_4AF8040 = (__int64)&off_4A64710;
  LODWORD(qword_4AF8008) = qword_4AF8008 + 1;
  byte_4AF804C = 0;
  qword_4AF7FC0 = (__int64)off_4A6DEB8;
  dword_4AF8038 = 0;
  dword_4AF8048 = 0;
  qword_4AF8050 = (__int64)off_49D9228;
  sub_259F400(&qword_4AF7FC0, "tail-dup-limit", 14);
  dword_4AF8038 = -1;
  byte_4AF804C = 1;
  dword_4AF8048 = -1;
  BYTE2(qword_4AF7FC8) = BYTE2(qword_4AF7FC8) & 0x9F | 0x20;
  sub_259EC40(&qword_4AF7FC0);
  return __cxa_atexit(sub_1F6C940, &qword_4AF7FC0, &off_47CFE00);
}

