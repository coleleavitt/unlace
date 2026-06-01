int __fastcall sub_5BE150(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  unsigned __int64 v3; // rdx
  __m128i si128; // xmm3
  __int64 v5; // r14
  __int64 v6; // rax
  unsigned __int64 v7; // rdx
  __m128i v8; // xmm4
  __m128i v10[4]; // [rsp+0h] [rbp-48h] BYREF

  qword_4B0D460 = (__int64)&qword_4B0D470;
  qword_4B0D430 = 0;
  qword_4B0D438 = 0;
  qword_4B0D420 = (__int64)&off_4A6E058;
  qword_4B0D428 = (unsigned int)qword_4B0D428 & 0x80000000;
  qword_4B0D478 = (__int64)&qword_4B0D490;
  v10[0] = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_49EC2A0), (__m128i)(unsigned __int64)nullsub_267);
  qword_4B0D440 = 0;
  qword_4B0D448 = 0;
  qword_4B0D450 = 0;
  qword_4B0D458 = 0;
  qword_4B0D468 = 0x100000000LL;
  qword_4B0D480 = 1;
  dword_4B0D488 = 0;
  byte_4B0D48C = 1;
  v1 = sub_259AC30(a1, &qword_4B0D470);
  v2 = (unsigned int)qword_4B0D468;
  v3 = (unsigned int)qword_4B0D468 + 1LL;
  if ( HIDWORD(qword_4B0D468) < v3 )
  {
    sub_25D6060(&qword_4B0D470 - 2, &qword_4B0D470, v3, 8);
    v2 = (unsigned int)qword_4B0D468;
  }
  si128 = _mm_load_si128(v10);
  *(_QWORD *)(qword_4B0D460 + 8 * v2) = v1;
  xmmword_4B0D4B8 = 0;
  qword_4B0D4A0 = (__int64)&off_4A64710;
  xmmword_4B0D4C8 = (__int128)si128;
  LODWORD(qword_4B0D468) = qword_4B0D468 + 1;
  qword_4B0D420 = (__int64)off_4A6DEB8;
  dword_4B0D498 = 0;
  byte_4B0D4AC = 0;
  qword_4B0D4B0 = (__int64)off_49D9228;
  dword_4B0D4A8 = 0;
  sub_259F400(&qword_4B0D420, "memdep-block-scan-limit", 23);
  dword_4B0D498 = 100;
  byte_4B0D4AC = 1;
  dword_4B0D4A8 = 100;
  qword_4B0D448 = 91;
  BYTE2(qword_4B0D428) = BYTE2(qword_4B0D428) & 0x9F | 0x20;
  qword_4B0D440 = (__int64)"The number of instructions to scan in a block in memory dependency analysis (default = 100)";
  sub_259EC40(&qword_4B0D420);
  __cxa_atexit(sub_1F6C940, &qword_4B0D420, &off_47CFE00);
  qword_4B0D3A8 = 0x100000000LL;
  qword_4B0D360 = (__int64)&off_4A6E058;
  qword_4B0D368 = (unsigned int)qword_4B0D368 & 0x80000000;
  qword_4B0D3A0 = (__int64)&qword_4B0D3B0;
  qword_4B0D370 = 0;
  qword_4B0D378 = 0;
  qword_4B0D380 = 0;
  qword_4B0D388 = 0;
  qword_4B0D390 = 0;
  qword_4B0D398 = 0;
  qword_4B0D3B8 = (__int64)&qword_4B0D3D0;
  qword_4B0D3C0 = 1;
  dword_4B0D3C8 = 0;
  byte_4B0D3CC = 1;
  v5 = sub_259AC30(sub_1F6C940, &qword_4B0D3B0);
  v6 = (unsigned int)qword_4B0D3A8;
  v7 = (unsigned int)qword_4B0D3A8 + 1LL;
  if ( HIDWORD(qword_4B0D3A8) < v7 )
  {
    sub_25D6060(&qword_4B0D3B0 - 2, &qword_4B0D3B0, v7, 8);
    v6 = (unsigned int)qword_4B0D3A8;
  }
  v8 = _mm_load_si128(v10);
  *(_QWORD *)(qword_4B0D3A0 + 8 * v6) = v5;
  qword_4B0D3E0 = (__int64)&off_4A64710;
  xmmword_4B0D3F8 = 0;
  xmmword_4B0D408 = (__int128)v8;
  qword_4B0D360 = (__int64)off_4A6DEB8;
  LODWORD(qword_4B0D3A8) = qword_4B0D3A8 + 1;
  byte_4B0D3EC = 0;
  qword_4B0D3F0 = (__int64)off_49D9228;
  dword_4B0D3D8 = 0;
  dword_4B0D3E8 = 0;
  sub_259F400(&qword_4B0D360, "memdep-block-number-limit", 25);
  dword_4B0D3D8 = 200;
  byte_4B0D3EC = 1;
  dword_4B0D3E8 = 200;
  qword_4B0D388 = 78;
  BYTE2(qword_4B0D368) = BYTE2(qword_4B0D368) & 0x9F | 0x20;
  qword_4B0D380 = (__int64)"The number of blocks to scan during memory dependency analysis (default = 200)";
  sub_259EC40(&qword_4B0D360);
  return __cxa_atexit(sub_1F6C940, &qword_4B0D360, &off_47CFE00);
}

