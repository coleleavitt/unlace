int __fastcall sub_59A280(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // rdx
  __m128i v4; // xmm5
  __int64 v5; // rax
  __int64 v6; // rdx
  __m128i v7; // xmm6
  __int64 v8; // rax
  __int64 v9; // rdx
  __m128i v10; // xmm7
  __int64 v11; // rax
  __int64 v12; // rdx
  __m128i v13; // xmm3
  __int64 v14; // rax
  __int64 v15; // rdx
  __m128i v16; // xmm4
  __int64 v17; // r12
  __int64 v18; // rax
  unsigned __int64 v19; // rdx
  __m128i v20; // xmm5
  __m128i v22; // [rsp+0h] [rbp-68h] BYREF
  __m128i v23; // [rsp+10h] [rbp-58h] BYREF
  __int64 v24; // [rsp+28h] [rbp-40h]

  qword_4AFD140 = (__int64)&qword_4AFD150;
  qword_4AFD110 = 0;
  qword_4AFD118 = 0;
  qword_4AFD100 = (__int64)&off_4A6E058;
  qword_4AFD108 = (unsigned int)qword_4AFD108 & 0x80000000;
  qword_4AFD158 = (__int64)&qword_4AFD170;
  v22 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_49EB188), (__m128i)(unsigned __int64)nullsub_266);
  v23 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_49EB190), (__m128i)(unsigned __int64)nullsub_267);
  qword_4AFD120 = 0;
  qword_4AFD128 = 0;
  qword_4AFD130 = 0;
  qword_4AFD138 = 0;
  qword_4AFD148 = 0x100000000LL;
  dword_4AFD168 = 0;
  qword_4AFD160 = 1;
  byte_4AFD16C = 1;
  v1 = sub_259AC30(a1, &qword_4AFD150);
  v2 = (unsigned int)qword_4AFD148;
  v3 = (unsigned int)qword_4AFD148 + 1LL;
  if ( HIDWORD(qword_4AFD148) < v3 )
  {
    sub_25D6060(&qword_4AFD150 - 2, &qword_4AFD150, v3, 8);
    v2 = (unsigned int)qword_4AFD148;
  }
  v4 = _mm_load_si128(&v22);
  *(_QWORD *)(qword_4AFD140 + 8 * v2) = v1;
  word_4AFD188 = 0;
  xmmword_4AFD198 = 0;
  qword_4AFD180 = (__int64)&off_4A64730;
  xmmword_4AFD1A8 = (__int128)v4;
  LODWORD(qword_4AFD148) = qword_4AFD148 + 1;
  qword_4AFD100 = (__int64)off_4A6DFF0;
  byte_4AFD178 = 0;
  qword_4AFD190 = (__int64)off_49D9168;
  sub_259F400(&qword_4AFD100, "force-hardware-loops", 20);
  byte_4AFD178 = 0;
  word_4AFD188 = 256;
  qword_4AFD128 = 46;
  BYTE2(qword_4AFD108) = BYTE2(qword_4AFD108) & 0x9F | 0x20;
  qword_4AFD120 = (__int64)"Force hardware loops intrinsics to be inserted";
  sub_259EC40(&qword_4AFD100);
  __cxa_atexit(sub_1F6C9D0, &qword_4AFD100, &off_47CFE00);
  qword_4AFD050 = 0;
  qword_4AFD040 = (__int64)&off_4A6E058;
  qword_4AFD048 = (unsigned int)qword_4AFD048 & 0x80000000;
  qword_4AFD080 = (__int64)&qword_4AFD090;
  qword_4AFD058 = 0;
  qword_4AFD060 = 0;
  qword_4AFD068 = 0;
  qword_4AFD070 = 0;
  qword_4AFD078 = 0;
  qword_4AFD088 = 0x100000000LL;
  qword_4AFD098 = (__int64)&qword_4AFD0B0;
  qword_4AFD0A0 = 1;
  dword_4AFD0A8 = 0;
  byte_4AFD0AC = 1;
  v5 = sub_259AC30(sub_1F6C9D0, &qword_4AFD090);
  v6 = (unsigned int)qword_4AFD088;
  if ( HIDWORD(qword_4AFD088) < (unsigned __int64)(unsigned int)qword_4AFD088 + 1 )
  {
    v24 = v5;
    sub_25D6060(&qword_4AFD090 - 2, &qword_4AFD090, (unsigned int)qword_4AFD088 + 1LL, 8);
    v6 = (unsigned int)qword_4AFD088;
    v5 = v24;
  }
  v7 = _mm_load_si128(&v22);
  *(_QWORD *)(qword_4AFD080 + 8 * v6) = v5;
  word_4AFD0C8 = 0;
  xmmword_4AFD0D8 = 0;
  qword_4AFD0C0 = (__int64)&off_4A64730;
  xmmword_4AFD0E8 = (__int128)v7;
  LODWORD(qword_4AFD088) = qword_4AFD088 + 1;
  qword_4AFD040 = (__int64)off_4A6DFF0;
  byte_4AFD0B8 = 0;
  qword_4AFD0D0 = (__int64)off_49D9168;
  sub_259F400(&qword_4AFD040, "force-hardware-loop-phi", 23);
  byte_4AFD0B8 = 0;
  word_4AFD0C8 = 256;
  qword_4AFD068 = 55;
  BYTE2(qword_4AFD048) = BYTE2(qword_4AFD048) & 0x9F | 0x20;
  qword_4AFD060 = (__int64)"Force hardware loop counter to be updated through a phi";
  sub_259EC40(&qword_4AFD040);
  __cxa_atexit(sub_1F6C9D0, &qword_4AFD040, &off_47CFE00);
  qword_4AFCF90 = 0;
  qword_4AFCF80 = (__int64)&off_4A6E058;
  qword_4AFCF88 = (unsigned int)qword_4AFCF88 & 0x80000000;
  qword_4AFCFC0 = (__int64)&qword_4AFCFD0;
  qword_4AFCF98 = 0;
  qword_4AFCFA0 = 0;
  qword_4AFCFA8 = 0;
  qword_4AFCFB0 = 0;
  qword_4AFCFB8 = 0;
  qword_4AFCFC8 = 0x100000000LL;
  qword_4AFCFD8 = (__int64)&qword_4AFCFF0;
  qword_4AFCFE0 = 1;
  dword_4AFCFE8 = 0;
  byte_4AFCFEC = 1;
  v8 = sub_259AC30(sub_1F6C9D0, &qword_4AFCFD0);
  v9 = (unsigned int)qword_4AFCFC8;
  if ( HIDWORD(qword_4AFCFC8) < (unsigned __int64)(unsigned int)qword_4AFCFC8 + 1 )
  {
    v24 = v8;
    sub_25D6060(&qword_4AFCFD0 - 2, &qword_4AFCFD0, (unsigned int)qword_4AFCFC8 + 1LL, 8);
    v9 = (unsigned int)qword_4AFCFC8;
    v8 = v24;
  }
  v10 = _mm_load_si128(&v22);
  *(_QWORD *)(qword_4AFCFC0 + 8 * v9) = v8;
  word_4AFD008 = 0;
  xmmword_4AFD018 = 0;
  qword_4AFD000 = (__int64)&off_4A64730;
  xmmword_4AFD028 = (__int128)v10;
  LODWORD(qword_4AFCFC8) = qword_4AFCFC8 + 1;
  qword_4AFCF80 = (__int64)off_4A6DFF0;
  byte_4AFCFF8 = 0;
  qword_4AFD010 = (__int64)off_49D9168;
  sub_259F400(&qword_4AFCF80, "force-nested-hardware-loop", 26);
  byte_4AFCFF8 = 0;
  word_4AFD008 = 256;
  qword_4AFCFA8 = 40;
  BYTE2(qword_4AFCF88) = BYTE2(qword_4AFCF88) & 0x9F | 0x20;
  qword_4AFCFA0 = (__int64)"Force allowance of nested hardware loops";
  sub_259EC40(&qword_4AFCF80);
  __cxa_atexit(sub_1F6C9D0, &qword_4AFCF80, &off_47CFE00);
  qword_4AFCED0 = 0;
  qword_4AFCEC0 = (__int64)&off_4A6E058;
  qword_4AFCEC8 = (unsigned int)qword_4AFCEC8 & 0x80000000;
  qword_4AFCF00 = (__int64)&qword_4AFCF10;
  qword_4AFCED8 = 0;
  qword_4AFCEE0 = 0;
  qword_4AFCEE8 = 0;
  qword_4AFCEF0 = 0;
  qword_4AFCEF8 = 0;
  qword_4AFCF08 = 0x100000000LL;
  qword_4AFCF18 = (__int64)&qword_4AFCF30;
  qword_4AFCF20 = 1;
  dword_4AFCF28 = 0;
  byte_4AFCF2C = 1;
  v11 = sub_259AC30(sub_1F6C9D0, &qword_4AFCF10);
  v12 = (unsigned int)qword_4AFCF08;
  if ( HIDWORD(qword_4AFCF08) < (unsigned __int64)(unsigned int)qword_4AFCF08 + 1 )
  {
    v24 = v11;
    sub_25D6060(&qword_4AFCF10 - 2, &qword_4AFCF10, (unsigned int)qword_4AFCF08 + 1LL, 8);
    v12 = (unsigned int)qword_4AFCF08;
    v11 = v24;
  }
  v13 = _mm_load_si128(&v23);
  *(_QWORD *)(qword_4AFCF00 + 8 * v12) = v11;
  xmmword_4AFCF58 = 0;
  xmmword_4AFCF68 = (__int128)v13;
  qword_4AFCF40 = (__int64)&off_4A64710;
  LODWORD(qword_4AFCF08) = qword_4AFCF08 + 1;
  byte_4AFCF4C = 0;
  qword_4AFCEC0 = (__int64)off_4A6DEB8;
  dword_4AFCF38 = 0;
  dword_4AFCF48 = 0;
  qword_4AFCF50 = (__int64)off_49D9228;
  sub_259F400(&qword_4AFCEC0, "hardware-loop-decrement", 23);
  dword_4AFCF38 = 1;
  byte_4AFCF4C = 1;
  dword_4AFCF48 = 1;
  qword_4AFCEE8 = 28;
  BYTE2(qword_4AFCEC8) = BYTE2(qword_4AFCEC8) & 0x9F | 0x20;
  qword_4AFCEE0 = (__int64)"Set the loop decrement value";
  sub_259EC40(&qword_4AFCEC0);
  __cxa_atexit(sub_1F6C940, &qword_4AFCEC0, &off_47CFE00);
  qword_4AFCE10 = 0;
  qword_4AFCE00 = (__int64)&off_4A6E058;
  qword_4AFCE08 = (unsigned int)qword_4AFCE08 & 0x80000000;
  qword_4AFCE40 = (__int64)&qword_4AFCE50;
  qword_4AFCE18 = 0;
  qword_4AFCE20 = 0;
  qword_4AFCE28 = 0;
  qword_4AFCE30 = 0;
  qword_4AFCE38 = 0;
  qword_4AFCE48 = 0x100000000LL;
  qword_4AFCE58 = (__int64)&qword_4AFCE70;
  qword_4AFCE60 = 1;
  dword_4AFCE68 = 0;
  byte_4AFCE6C = 1;
  v14 = sub_259AC30(sub_1F6C940, &qword_4AFCE50);
  v15 = (unsigned int)qword_4AFCE48;
  if ( HIDWORD(qword_4AFCE48) < (unsigned __int64)(unsigned int)qword_4AFCE48 + 1 )
  {
    v24 = v14;
    sub_25D6060(&qword_4AFCE50 - 2, &qword_4AFCE50, (unsigned int)qword_4AFCE48 + 1LL, 8);
    v15 = (unsigned int)qword_4AFCE48;
    v14 = v24;
  }
  v16 = _mm_load_si128(&v23);
  *(_QWORD *)(qword_4AFCE40 + 8 * v15) = v14;
  xmmword_4AFCE98 = 0;
  xmmword_4AFCEA8 = (__int128)v16;
  qword_4AFCE80 = (__int64)&off_4A64710;
  LODWORD(qword_4AFCE48) = qword_4AFCE48 + 1;
  byte_4AFCE8C = 0;
  qword_4AFCE00 = (__int64)off_4A6DEB8;
  dword_4AFCE78 = 0;
  dword_4AFCE88 = 0;
  qword_4AFCE90 = (__int64)off_49D9228;
  sub_259F400(&qword_4AFCE00, "hardware-loop-counter-bitwidth", 30);
  dword_4AFCE78 = 32;
  byte_4AFCE8C = 1;
  dword_4AFCE88 = 32;
  qword_4AFCE28 = 29;
  BYTE2(qword_4AFCE08) = BYTE2(qword_4AFCE08) & 0x9F | 0x20;
  qword_4AFCE20 = (__int64)"Set the loop counter bitwidth";
  sub_259EC40(&qword_4AFCE00);
  __cxa_atexit(sub_1F6C940, &qword_4AFCE00, &off_47CFE00);
  qword_4AFCD88 = 0x100000000LL;
  qword_4AFCD40 = (__int64)&off_4A6E058;
  qword_4AFCD48 = (unsigned int)qword_4AFCD48 & 0x80000000;
  qword_4AFCD80 = (__int64)&qword_4AFCD90;
  qword_4AFCD50 = 0;
  qword_4AFCD58 = 0;
  qword_4AFCD60 = 0;
  qword_4AFCD68 = 0;
  qword_4AFCD70 = 0;
  qword_4AFCD78 = 0;
  qword_4AFCD98 = (__int64)&qword_4AFCDB0;
  qword_4AFCDA0 = 1;
  dword_4AFCDA8 = 0;
  byte_4AFCDAC = 1;
  v17 = sub_259AC30(sub_1F6C940, &qword_4AFCD90);
  v18 = (unsigned int)qword_4AFCD88;
  v19 = (unsigned int)qword_4AFCD88 + 1LL;
  if ( HIDWORD(qword_4AFCD88) < v19 )
  {
    sub_25D6060(&qword_4AFCD90 - 2, &qword_4AFCD90, v19, 8);
    v18 = (unsigned int)qword_4AFCD88;
  }
  v20 = _mm_load_si128(&v22);
  *(_QWORD *)(qword_4AFCD80 + 8 * v18) = v17;
  word_4AFCDC8 = 0;
  xmmword_4AFCDD8 = 0;
  xmmword_4AFCDE8 = (__int128)v20;
  qword_4AFCDC0 = (__int64)&off_4A64730;
  LODWORD(qword_4AFCD88) = qword_4AFCD88 + 1;
  byte_4AFCDB8 = 0;
  qword_4AFCD40 = (__int64)off_4A6DFF0;
  qword_4AFCDD0 = (__int64)off_49D9168;
  sub_259F400(&qword_4AFCD40, "force-hardware-loop-guard", 25);
  word_4AFCDC8 = 256;
  byte_4AFCDB8 = 0;
  qword_4AFCD68 = 40;
  BYTE2(qword_4AFCD48) = BYTE2(qword_4AFCD48) & 0x9F | 0x20;
  qword_4AFCD60 = (__int64)"Force generation of loop guard intrinsic";
  sub_259EC40(&qword_4AFCD40);
  return __cxa_atexit(sub_1F6C9D0, &qword_4AFCD40, &off_47CFE00);
}

