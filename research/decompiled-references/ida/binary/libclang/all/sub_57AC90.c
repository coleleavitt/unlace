int __fastcall sub_57AC90(__int64 a1)
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

  qword_4AEB300 = (__int64)&qword_4AEB310;
  qword_4AEB2D0 = 0;
  qword_4AEB2D8 = 0;
  qword_4AEB2C0 = (__int64)&off_4A6E058;
  qword_4AEB2C8 = (unsigned int)qword_4AEB2C8 & 0x80000000;
  qword_4AEB318 = (__int64)&qword_4AEB330;
  v10[0] = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_49E8A48), (__m128i)(unsigned __int64)nullsub_266);
  qword_4AEB2E0 = 0;
  qword_4AEB2E8 = 0;
  qword_4AEB2F0 = 0;
  qword_4AEB2F8 = 0;
  qword_4AEB308 = 0x100000000LL;
  qword_4AEB320 = 1;
  dword_4AEB328 = 0;
  byte_4AEB32C = 1;
  v1 = sub_259AC30(a1, &qword_4AEB310);
  v2 = (unsigned int)qword_4AEB308;
  v3 = (unsigned int)qword_4AEB308 + 1LL;
  if ( HIDWORD(qword_4AEB308) < v3 )
  {
    sub_25D6060(&qword_4AEB310 - 2, &qword_4AEB310, v3, 8);
    v2 = (unsigned int)qword_4AEB308;
  }
  si128 = _mm_load_si128(v10);
  *(_QWORD *)(qword_4AEB300 + 8 * v2) = v1;
  qword_4AEB340 = (__int64)&off_4A64730;
  word_4AEB348 = 0;
  xmmword_4AEB358 = 0;
  qword_4AEB2C0 = (__int64)off_4A6DFF0;
  xmmword_4AEB368 = (__int128)si128;
  LODWORD(qword_4AEB308) = qword_4AEB308 + 1;
  qword_4AEB350 = (__int64)off_49D9168;
  byte_4AEB338 = 0;
  sub_259F400(&qword_4AEB2C0, "enable-cse-in-legalizer", 23);
  BYTE2(qword_4AEB2C8) &= 0xF8u;
  qword_4AEB2E0 = (__int64)"Should enable CSE in Legalizer";
  word_4AEB348 = 256;
  qword_4AEB2E8 = 30;
  byte_4AEB338 = 0;
  sub_259EC40(&qword_4AEB2C0);
  __cxa_atexit(sub_1F6C9D0, &qword_4AEB2C0, &off_47CFE00);
  qword_4AEB248 = 0x100000000LL;
  qword_4AEB200 = (__int64)&off_4A6E058;
  qword_4AEB208 = (unsigned int)qword_4AEB208 & 0x80000000;
  qword_4AEB240 = (__int64)&qword_4AEB250;
  qword_4AEB210 = 0;
  qword_4AEB218 = 0;
  qword_4AEB220 = 0;
  qword_4AEB228 = 0;
  qword_4AEB230 = 0;
  qword_4AEB238 = 0;
  qword_4AEB258 = (__int64)&qword_4AEB270;
  qword_4AEB260 = 1;
  dword_4AEB268 = 0;
  byte_4AEB26C = 1;
  v5 = sub_259AC30(sub_1F6C9D0, &qword_4AEB250);
  v6 = (unsigned int)qword_4AEB248;
  v7 = (unsigned int)qword_4AEB248 + 1LL;
  if ( HIDWORD(qword_4AEB248) < v7 )
  {
    sub_25D6060(&qword_4AEB250 - 2, &qword_4AEB250, v7, 8);
    v6 = (unsigned int)qword_4AEB248;
  }
  v8 = _mm_load_si128(v10);
  *(_QWORD *)(qword_4AEB240 + 8 * v6) = v5;
  word_4AEB288 = 0;
  qword_4AEB280 = (__int64)&off_4A64730;
  xmmword_4AEB298 = 0;
  xmmword_4AEB2A8 = (__int128)v8;
  qword_4AEB200 = (__int64)off_4A6DFF0;
  LODWORD(qword_4AEB248) = qword_4AEB248 + 1;
  byte_4AEB278 = 0;
  qword_4AEB290 = (__int64)off_49D9168;
  sub_259F400(&qword_4AEB200, "allow-ginsert-as-artifact", 25);
  BYTE2(qword_4AEB208) &= 0xF8u;
  word_4AEB288 = 257;
  qword_4AEB220 = (__int64)"Allow G_INSERT to be considered an artifact. Hack around AMDGPU test infinite loops.";
  qword_4AEB228 = 84;
  byte_4AEB278 = 1;
  sub_259EC40(&qword_4AEB200);
  return __cxa_atexit(sub_1F6C9D0, &qword_4AEB200, &off_47CFE00);
}

