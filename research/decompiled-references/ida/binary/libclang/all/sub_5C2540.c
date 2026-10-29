int __fastcall sub_5C2540(__int64 a1)
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

  qword_4B0F520 = (__int64)&qword_4B0F530;
  qword_4B0F4F0 = 0;
  qword_4B0F4F8 = 0;
  qword_4B0F4E0 = (__int64)&off_4A6E058;
  qword_4B0F4E8 = (unsigned int)qword_4B0F4E8 & 0x80000000;
  qword_4B0F538 = (__int64)&qword_4B0F550;
  v13[0] = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_49EC4B8), (__m128i)(unsigned __int64)nullsub_266);
  qword_4B0F500 = 0;
  qword_4B0F508 = 0;
  qword_4B0F510 = 0;
  qword_4B0F518 = 0;
  qword_4B0F528 = 0x100000000LL;
  qword_4B0F540 = 1;
  dword_4B0F548 = 0;
  byte_4B0F54C = 1;
  v1 = sub_259AC30(a1, &qword_4B0F530);
  v2 = (unsigned int)qword_4B0F528;
  v3 = (unsigned int)qword_4B0F528 + 1LL;
  if ( HIDWORD(qword_4B0F528) < v3 )
  {
    sub_25D6060(&qword_4B0F530 - 2, &qword_4B0F530, v3, 8);
    v2 = (unsigned int)qword_4B0F528;
  }
  *(_QWORD *)(qword_4B0F520 + 8 * v2) = v1;
  xmmword_4B0F578 = 0;
  LODWORD(qword_4B0F528) = qword_4B0F528 + 1;
  qword_4B0F560 = (__int64)&off_4A692B8;
  dword_4B0F558 = 0;
  byte_4B0F56C = 0;
  qword_4B0F4E0 = (__int64)off_4A6DF20;
  dword_4B0F568 = 0;
  qword_4B0F570 = (__int64)off_49D91C8;
  xmmword_4B0F588 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49EC4C0),
                                (__m128i)(unsigned __int64)nullsub_291);
  sub_259F400(&qword_4B0F4E0, "stack-safety-max-iterations", 27);
  dword_4B0F558 = 20;
  byte_4B0F56C = 1;
  dword_4B0F568 = 20;
  BYTE2(qword_4B0F4E8) = BYTE2(qword_4B0F4E8) & 0x9F | 0x20;
  sub_259EC40(&qword_4B0F4E0);
  __cxa_atexit(sub_20B86E0, &qword_4B0F4E0, &off_47CFE00);
  qword_4B0F430 = 0;
  qword_4B0F420 = (__int64)&off_4A6E058;
  qword_4B0F428 = (unsigned int)qword_4B0F428 & 0x80000000;
  qword_4B0F460 = (__int64)&qword_4B0F470;
  qword_4B0F438 = 0;
  qword_4B0F440 = 0;
  qword_4B0F448 = 0;
  qword_4B0F450 = 0;
  qword_4B0F458 = 0;
  qword_4B0F468 = 0x100000000LL;
  qword_4B0F478 = (__int64)&qword_4B0F490;
  qword_4B0F480 = 1;
  dword_4B0F488 = 0;
  byte_4B0F48C = 1;
  v4 = sub_259AC30(sub_20B86E0, &qword_4B0F470);
  v5 = (unsigned int)qword_4B0F468;
  v6 = (unsigned int)qword_4B0F468 + 1LL;
  if ( HIDWORD(qword_4B0F468) < v6 )
  {
    sub_25D6060(&qword_4B0F470 - 2, &qword_4B0F470, v6, 8);
    v5 = (unsigned int)qword_4B0F468;
  }
  si128 = _mm_load_si128(v13);
  *(_QWORD *)(qword_4B0F460 + 8 * v5) = v4;
  word_4B0F4A8 = 0;
  xmmword_4B0F4B8 = 0;
  qword_4B0F4A0 = (__int64)&off_4A64730;
  xmmword_4B0F4C8 = (__int128)si128;
  LODWORD(qword_4B0F468) = qword_4B0F468 + 1;
  qword_4B0F420 = (__int64)off_4A6DFF0;
  byte_4B0F498 = 0;
  qword_4B0F4B0 = (__int64)off_49D9168;
  sub_259F400(&qword_4B0F420, "stack-safety-print", 18);
  byte_4B0F498 = 0;
  word_4B0F4A8 = 256;
  BYTE2(qword_4B0F428) = BYTE2(qword_4B0F428) & 0x9F | 0x20;
  sub_259EC40(&qword_4B0F420);
  __cxa_atexit(sub_1F6C9D0, &qword_4B0F420, &off_47CFE00);
  qword_4B0F3A8 = 0x100000000LL;
  qword_4B0F360 = (__int64)&off_4A6E058;
  qword_4B0F368 = (unsigned int)qword_4B0F368 & 0x80000000;
  qword_4B0F3A0 = (__int64)&qword_4B0F3B0;
  qword_4B0F370 = 0;
  qword_4B0F378 = 0;
  qword_4B0F380 = 0;
  qword_4B0F388 = 0;
  qword_4B0F390 = 0;
  qword_4B0F398 = 0;
  qword_4B0F3B8 = (__int64)&qword_4B0F3D0;
  qword_4B0F3C0 = 1;
  dword_4B0F3C8 = 0;
  byte_4B0F3CC = 1;
  v8 = sub_259AC30(sub_1F6C9D0, &qword_4B0F3B0);
  v9 = (unsigned int)qword_4B0F3A8;
  v10 = (unsigned int)qword_4B0F3A8 + 1LL;
  if ( HIDWORD(qword_4B0F3A8) < v10 )
  {
    sub_25D6060(&qword_4B0F3B0 - 2, &qword_4B0F3B0, v10, 8);
    v9 = (unsigned int)qword_4B0F3A8;
  }
  v11 = _mm_load_si128(v13);
  *(_QWORD *)(qword_4B0F3A0 + 8 * v9) = v8;
  word_4B0F3E8 = 0;
  xmmword_4B0F3F8 = 0;
  xmmword_4B0F408 = (__int128)v11;
  qword_4B0F3E0 = (__int64)&off_4A64730;
  LODWORD(qword_4B0F3A8) = qword_4B0F3A8 + 1;
  byte_4B0F3D8 = 0;
  qword_4B0F360 = (__int64)off_4A6DFF0;
  qword_4B0F3F0 = (__int64)off_49D9168;
  sub_259F400(&qword_4B0F360, "stack-safety-run", 16);
  word_4B0F3E8 = 256;
  byte_4B0F3D8 = 0;
  BYTE2(qword_4B0F368) = BYTE2(qword_4B0F368) & 0x9F | 0x20;
  sub_259EC40(&qword_4B0F360);
  return __cxa_atexit(sub_1F6C9D0, &qword_4B0F360, &off_47CFE00);
}

