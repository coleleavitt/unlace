int __fastcall sub_578040(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  unsigned __int64 v3; // rdx
  __int64 v4; // r12
  __int64 v5; // rax
  unsigned __int64 v6; // rdx

  qword_4AE9400 = (__int64)&off_4A6E058;
  qword_4AE9408 = (unsigned int)qword_4AE9408 & 0x80000000;
  qword_4AE9410 = 0;
  qword_4AE9418 = 0;
  qword_4AE9420 = 0;
  qword_4AE9428 = 0;
  qword_4AE9430 = 0;
  qword_4AE9438 = 0;
  qword_4AE9440 = (__int64)&qword_4AE9450;
  qword_4AE9448 = 0x100000000LL;
  qword_4AE9458 = (__int64)&qword_4AE9470;
  qword_4AE9460 = 1;
  dword_4AE9468 = 0;
  byte_4AE946C = 1;
  v1 = sub_259AC30(a1, &qword_4AE9450);
  v2 = (unsigned int)qword_4AE9448;
  v3 = (unsigned int)qword_4AE9448 + 1LL;
  if ( HIDWORD(qword_4AE9448) < v3 )
  {
    sub_25D6060(&qword_4AE9450 - 2, &qword_4AE9450, v3, 8);
    v2 = (unsigned int)qword_4AE9448;
  }
  *(_QWORD *)(qword_4AE9440 + 8 * v2) = v1;
  word_4AE9488 = 0;
  xmmword_4AE9498 = 0;
  LODWORD(qword_4AE9448) = qword_4AE9448 + 1;
  qword_4AE9480 = (__int64)&off_4A64730;
  byte_4AE9478 = 0;
  qword_4AE9400 = (__int64)off_4A6DFF0;
  qword_4AE9490 = (__int64)off_49D9168;
  xmmword_4AE94A8 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49E7EA0),
                                (__m128i)(unsigned __int64)nullsub_266);
  sub_259F400(&qword_4AE9400, "openmp-ir-builder-optimistic-attributes", 39);
  word_4AE9488 = 256;
  byte_4AE9478 = 0;
  qword_4AE9428 = 73;
  BYTE2(qword_4AE9408) = BYTE2(qword_4AE9408) & 0x9F | 0x20;
  qword_4AE9420 = (__int64)"Use optimistic attributes describing 'as-if' properties of runtime calls.";
  sub_259EC40(&qword_4AE9400);
  __cxa_atexit(sub_1F6C9D0, &qword_4AE9400, &off_47CFE00);
  qword_4AE93A0 = 1;
  qword_4AE9340 = (__int64)&off_4A6E058;
  qword_4AE9348 = (unsigned int)qword_4AE9348 & 0x80000000;
  qword_4AE9380 = (__int64)&qword_4AE9390;
  qword_4AE9350 = 0;
  qword_4AE9358 = 0;
  qword_4AE9360 = 0;
  qword_4AE9368 = 0;
  qword_4AE9370 = 0;
  qword_4AE9378 = 0;
  qword_4AE9388 = 0x100000000LL;
  qword_4AE9398 = (__int64)&qword_4AE93B0;
  dword_4AE93A8 = 0;
  byte_4AE93AC = 1;
  v4 = sub_259AC30(sub_1F6C9D0, &qword_4AE9390);
  v5 = (unsigned int)qword_4AE9388;
  v6 = (unsigned int)qword_4AE9388 + 1LL;
  if ( HIDWORD(qword_4AE9388) < v6 )
  {
    sub_25D6060(&qword_4AE9390 - 2, &qword_4AE9390, v6, 8);
    v5 = (unsigned int)qword_4AE9388;
  }
  *(_QWORD *)(qword_4AE9380 + 8 * v5) = v4;
  xmmword_4AE93E0 = 0;
  LODWORD(qword_4AE9388) = qword_4AE9388 + 1;
  qword_4AE93C0 = (__int64)off_4A76748;
  qword_4AE93B8 = 0;
  byte_4AE93D0 = 0;
  qword_4AE9340 = (__int64)off_4A76768;
  qword_4AE93C8 = 0;
  qword_4AE93D8 = (__int64)off_49D9288;
  xmmword_4AE93F0 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49E7EA8),
                                (__m128i)(unsigned __int64)nullsub_444);
  sub_259F400(&qword_4AE9340, "openmp-ir-builder-unroll-threshold-factor", 41);
  qword_4AE9368 = 86;
  byte_4AE93D0 = 1;
  qword_4AE93B8 = 0x3FF8000000000000LL;
  BYTE2(qword_4AE9348) = BYTE2(qword_4AE9348) & 0x9F | 0x20;
  qword_4AE9360 = (__int64)"Factor for the unroll threshold to account for code simplifications still taking place";
  qword_4AE93C8 = 0x3FF8000000000000LL;
  sub_259EC40(&qword_4AE9340);
  return __cxa_atexit(sub_2A4E990, &qword_4AE9340, &off_47CFE00);
}

