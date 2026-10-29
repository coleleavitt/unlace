int __fastcall sub_587E10(__int64 a1)
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

  qword_4AF3420 = (__int64)&qword_4AF3430;
  qword_4AF33F0 = 0;
  qword_4AF33F8 = 0;
  qword_4AF33E0 = (__int64)&off_4A6E058;
  qword_4AF33E8 = (unsigned int)qword_4AF33E8 & 0x80000000;
  qword_4AF3438 = (__int64)&qword_4AF3450;
  v13[0] = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_49E9AD0), (__m128i)(unsigned __int64)nullsub_266);
  qword_4AF3400 = 0;
  qword_4AF3408 = 0;
  qword_4AF3410 = 0;
  qword_4AF3418 = 0;
  qword_4AF3428 = 0x100000000LL;
  qword_4AF3440 = 1;
  dword_4AF3448 = 0;
  byte_4AF344C = 1;
  v1 = sub_259AC30(a1, &qword_4AF3430);
  v2 = (unsigned int)qword_4AF3428;
  v3 = (unsigned int)qword_4AF3428 + 1LL;
  if ( HIDWORD(qword_4AF3428) < v3 )
  {
    sub_25D6060(&qword_4AF3430 - 2, &qword_4AF3430, v3, 8);
    v2 = (unsigned int)qword_4AF3428;
  }
  *(_QWORD *)(qword_4AF3420 + 8 * v2) = v1;
  xmmword_4AF3478 = 0;
  LODWORD(qword_4AF3428) = qword_4AF3428 + 1;
  qword_4AF3460 = (__int64)&off_4A64710;
  dword_4AF3458 = 0;
  byte_4AF346C = 0;
  qword_4AF33E0 = (__int64)off_4A6DEB8;
  dword_4AF3468 = 0;
  qword_4AF3470 = (__int64)off_49D9228;
  xmmword_4AF3488 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49E9AD8),
                                (__m128i)(unsigned __int64)nullsub_267);
  sub_259F400(&qword_4AF33E0, "machine-combiner-inc-threshold", 30);
  qword_4AF3408 = 83;
  dword_4AF3458 = 500;
  byte_4AF346C = 1;
  dword_4AF3468 = 500;
  BYTE2(qword_4AF33E8) = BYTE2(qword_4AF33E8) & 0x9F | 0x20;
  qword_4AF3400 = (__int64)"Incremental depth computation will be used for basic blocks with more instructions.";
  sub_259EC40(&qword_4AF33E0);
  __cxa_atexit(sub_1F6C940, &qword_4AF33E0, &off_47CFE00);
  qword_4AF3330 = 0;
  qword_4AF3320 = (__int64)&off_4A6E058;
  qword_4AF3328 = (unsigned int)qword_4AF3328 & 0x80000000;
  qword_4AF3360 = (__int64)&qword_4AF3370;
  qword_4AF3338 = 0;
  qword_4AF3340 = 0;
  qword_4AF3348 = 0;
  qword_4AF3350 = 0;
  qword_4AF3358 = 0;
  qword_4AF3368 = 0x100000000LL;
  qword_4AF3378 = (__int64)&qword_4AF3390;
  qword_4AF3380 = 1;
  dword_4AF3388 = 0;
  byte_4AF338C = 1;
  v4 = sub_259AC30(sub_1F6C940, &qword_4AF3370);
  v5 = (unsigned int)qword_4AF3368;
  v6 = (unsigned int)qword_4AF3368 + 1LL;
  if ( HIDWORD(qword_4AF3368) < v6 )
  {
    sub_25D6060(&qword_4AF3370 - 2, &qword_4AF3370, v6, 8);
    v5 = (unsigned int)qword_4AF3368;
  }
  si128 = _mm_load_si128(v13);
  *(_QWORD *)(qword_4AF3360 + 8 * v5) = v4;
  word_4AF33A8 = 0;
  xmmword_4AF33B8 = 0;
  qword_4AF33A0 = (__int64)&off_4A64730;
  xmmword_4AF33C8 = (__int128)si128;
  LODWORD(qword_4AF3368) = qword_4AF3368 + 1;
  qword_4AF3320 = (__int64)off_4A6DFF0;
  byte_4AF3398 = 0;
  qword_4AF33B0 = (__int64)off_49D9168;
  sub_259F400(&qword_4AF3320, "machine-combiner-dump-subst-intrs", 33);
  qword_4AF3348 = 26;
  byte_4AF3398 = 0;
  word_4AF33A8 = 256;
  BYTE2(qword_4AF3328) = BYTE2(qword_4AF3328) & 0x9F | 0x20;
  qword_4AF3340 = (__int64)"Dump all substituted intrs";
  sub_259EC40(&qword_4AF3320);
  __cxa_atexit(sub_1F6C9D0, &qword_4AF3320, &off_47CFE00);
  qword_4AF32A8 = 0x100000000LL;
  qword_4AF3260 = (__int64)&off_4A6E058;
  qword_4AF3268 = (unsigned int)qword_4AF3268 & 0x80000000;
  qword_4AF32A0 = (__int64)&qword_4AF32B0;
  qword_4AF3270 = 0;
  qword_4AF3278 = 0;
  qword_4AF3280 = 0;
  qword_4AF3288 = 0;
  qword_4AF3290 = 0;
  qword_4AF3298 = 0;
  qword_4AF32B8 = (__int64)&qword_4AF32D0;
  qword_4AF32C0 = 1;
  dword_4AF32C8 = 0;
  byte_4AF32CC = 1;
  v8 = sub_259AC30(sub_1F6C9D0, &qword_4AF32B0);
  v9 = (unsigned int)qword_4AF32A8;
  v10 = (unsigned int)qword_4AF32A8 + 1LL;
  if ( HIDWORD(qword_4AF32A8) < v10 )
  {
    sub_25D6060(&qword_4AF32B0 - 2, &qword_4AF32B0, v10, 8);
    v9 = (unsigned int)qword_4AF32A8;
  }
  v11 = _mm_load_si128(v13);
  *(_QWORD *)(qword_4AF32A0 + 8 * v9) = v8;
  word_4AF32E8 = 0;
  xmmword_4AF32F8 = 0;
  xmmword_4AF3308 = (__int128)v11;
  qword_4AF32E0 = (__int64)&off_4A64730;
  LODWORD(qword_4AF32A8) = qword_4AF32A8 + 1;
  byte_4AF32D8 = 0;
  qword_4AF3260 = (__int64)off_4A6DFF0;
  qword_4AF32F0 = (__int64)off_49D9168;
  sub_259F400(&qword_4AF3260, "machine-combiner-verify-pattern-order", 37);
  word_4AF32E8 = 256;
  qword_4AF3288 = 68;
  byte_4AF32D8 = 0;
  BYTE2(qword_4AF3268) = BYTE2(qword_4AF3268) & 0x9F | 0x20;
  qword_4AF3280 = (__int64)"Verify that the generated patterns are ordered by increasing latency";
  sub_259EC40(&qword_4AF3260);
  return __cxa_atexit(sub_1F6C9D0, &qword_4AF3260, &off_47CFE00);
}

