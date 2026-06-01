__int64 *__fastcall sub_5988A0(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  unsigned __int64 v3; // rdx
  __int64 v4; // r12
  __int64 v5; // rax
  unsigned __int64 v6; // rdx

  qword_4AFC340 = (__int64)&off_4A6E058;
  qword_4AFC348 = (unsigned int)qword_4AFC348 & 0x80000000;
  qword_4AFC350 = 0;
  qword_4AFC358 = 0;
  qword_4AFC360 = 0;
  qword_4AFC368 = 0;
  qword_4AFC370 = 0;
  qword_4AFC378 = 0;
  qword_4AFC380 = (__int64)&qword_4AFC390;
  qword_4AFC388 = 0x100000000LL;
  qword_4AFC398 = (__int64)&qword_4AFC3B0;
  qword_4AFC3A0 = 1;
  dword_4AFC3A8 = 0;
  byte_4AFC3AC = 1;
  v1 = sub_259AC30(a1, &qword_4AFC390);
  v2 = (unsigned int)qword_4AFC388;
  v3 = (unsigned int)qword_4AFC388 + 1LL;
  if ( HIDWORD(qword_4AFC388) < v3 )
  {
    sub_25D6060(&qword_4AFC390 - 2, &qword_4AFC390, v3, 8);
    v2 = (unsigned int)qword_4AFC388;
  }
  *(_QWORD *)(qword_4AFC380 + 8 * v2) = v1;
  word_4AFC3C8 = 0;
  xmmword_4AFC3D8 = 0;
  LODWORD(qword_4AFC388) = qword_4AFC388 + 1;
  qword_4AFC3C0 = (__int64)&off_4A64730;
  byte_4AFC3B8 = 0;
  qword_4AFC340 = (__int64)off_4A6DFF0;
  qword_4AFC3D0 = (__int64)off_49D9168;
  xmmword_4AFC3E8 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49EB110),
                                (__m128i)(unsigned __int64)nullsub_266);
  sub_259F400(&qword_4AFC340, "emulate-old-livedebugvalues", 27);
  word_4AFC3C8 = 256;
  byte_4AFC3B8 = 0;
  qword_4AFC368 = 32;
  BYTE2(qword_4AFC348) = BYTE2(qword_4AFC348) & 0x9F | 0x20;
  qword_4AFC360 = (__int64)"Act like old LiveDebugValues did";
  sub_259EC40(&qword_4AFC340);
  __cxa_atexit(sub_1F6C9D0, &qword_4AFC340, &off_47CFE00);
  qword_4AFC2E0 = 1;
  qword_4AFC280 = (__int64)&off_4A6E058;
  qword_4AFC288 = (unsigned int)qword_4AFC288 & 0x80000000;
  qword_4AFC2C0 = (__int64)&qword_4AFC2D0;
  qword_4AFC290 = 0;
  qword_4AFC298 = 0;
  qword_4AFC2A0 = 0;
  qword_4AFC2A8 = 0;
  qword_4AFC2B0 = 0;
  qword_4AFC2B8 = 0;
  qword_4AFC2C8 = 0x100000000LL;
  qword_4AFC2D8 = (__int64)&qword_4AFC2F0;
  dword_4AFC2E8 = 0;
  byte_4AFC2EC = 1;
  v4 = sub_259AC30(sub_1F6C9D0, &qword_4AFC2D0);
  v5 = (unsigned int)qword_4AFC2C8;
  v6 = (unsigned int)qword_4AFC2C8 + 1LL;
  if ( HIDWORD(qword_4AFC2C8) < v6 )
  {
    sub_25D6060(&qword_4AFC2D0 - 2, &qword_4AFC2D0, v6, 8);
    v5 = (unsigned int)qword_4AFC2C8;
  }
  *(_QWORD *)(qword_4AFC2C0 + 8 * v5) = v4;
  xmmword_4AFC318 = 0;
  LODWORD(qword_4AFC2C8) = qword_4AFC2C8 + 1;
  qword_4AFC300 = (__int64)&off_4A64710;
  dword_4AFC2F8 = 0;
  byte_4AFC30C = 0;
  qword_4AFC280 = (__int64)off_4A6DEB8;
  dword_4AFC308 = 0;
  qword_4AFC310 = (__int64)off_49D9228;
  xmmword_4AFC328 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49EB118),
                                (__m128i)(unsigned __int64)nullsub_267);
  sub_259F400(&qword_4AFC280, "livedebugvalues-max-stack-slots", 31);
  qword_4AFC2A8 = 30;
  dword_4AFC2F8 = 250;
  byte_4AFC30C = 1;
  dword_4AFC308 = 250;
  BYTE2(qword_4AFC288) = BYTE2(qword_4AFC288) & 0x9F | 0x20;
  qword_4AFC2A0 = (__int64)"livedebugvalues-stack-ws-limit";
  sub_259EC40(&qword_4AFC280);
  __cxa_atexit(sub_1F6C940, &qword_4AFC280, &off_47CFE00);
  LODWORD(qword_4AFC268[0]) = -1;
  qword_4AFC260 = -1;
  qword_4AFC258 = 0xFFFFFEFFFFFFFFFFLL;
  return &qword_4AFC258;
}

