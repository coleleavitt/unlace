int __fastcall sub_583430(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // rdx
  __int64 v4; // r15
  __int64 v5; // rax
  unsigned __int64 v6; // rdx
  __m128i v7; // xmm4
  __int64 v8; // rax
  __int64 v9; // rdx
  __m128i v10; // xmm5
  __int64 v11; // r12
  __int64 v12; // rax
  unsigned __int64 v13; // rdx
  __m128i v15; // [rsp+0h] [rbp-58h] BYREF
  __int64 v16; // [rsp+18h] [rbp-40h]

  qword_4AF05C0 = (__int64)&qword_4AF05D0;
  qword_4AF0590 = 0;
  qword_4AF0598 = 0;
  qword_4AF0580 = (__int64)&off_4A6E058;
  qword_4AF0588 = (unsigned int)qword_4AF0588 & 0x80000000;
  qword_4AF05D8 = (__int64)&qword_4AF05F0;
  v15 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_49E9100), (__m128i)(unsigned __int64)nullsub_266);
  qword_4AF05A0 = 0;
  qword_4AF05A8 = 0;
  qword_4AF05B0 = 0;
  qword_4AF05B8 = 0;
  qword_4AF05C8 = 0x100000000LL;
  qword_4AF05E0 = 1;
  dword_4AF05E8 = 0;
  byte_4AF05EC = 1;
  v1 = sub_259AC30(a1, &qword_4AF05D0);
  v2 = (unsigned int)qword_4AF05C8;
  v3 = (unsigned int)qword_4AF05C8 + 1LL;
  if ( HIDWORD(qword_4AF05C8) < v3 )
  {
    sub_25D6060(&qword_4AF05D0 - 2, &qword_4AF05D0, v3, 8);
    v2 = (unsigned int)qword_4AF05C8;
  }
  *(_QWORD *)(qword_4AF05C0 + 8 * v2) = v1;
  xmmword_4AF0618 = 0;
  LODWORD(qword_4AF05C8) = qword_4AF05C8 + 1;
  qword_4AF0600 = (__int64)&off_4A64710;
  dword_4AF05F8 = 0;
  byte_4AF060C = 0;
  qword_4AF0580 = (__int64)off_4A6DEB8;
  dword_4AF0608 = 0;
  qword_4AF0610 = (__int64)off_49D9228;
  xmmword_4AF0628 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49E9108),
                                (__m128i)(unsigned __int64)nullsub_267);
  sub_259F400(&qword_4AF0580, "debug-ata-max-blocks", 20);
  dword_4AF05F8 = 10000;
  qword_4AF05A0 = (__int64)"Maximum num basic blocks before debug info dropped";
  byte_4AF060C = 1;
  dword_4AF0608 = 10000;
  qword_4AF05A8 = 50;
  BYTE2(qword_4AF0588) = BYTE2(qword_4AF0588) & 0x9F | 0x20;
  sub_259EC40(&qword_4AF0580);
  __cxa_atexit(sub_1F6C940, &qword_4AF0580, &off_47CFE00);
  qword_4AF04D0 = 0;
  qword_4AF04C0 = (__int64)&off_4A6E058;
  qword_4AF04C8 = (unsigned int)qword_4AF04C8 & 0x80000000;
  qword_4AF0500 = (__int64)&qword_4AF0510;
  qword_4AF04D8 = 0;
  qword_4AF04E0 = 0;
  qword_4AF04E8 = 0;
  qword_4AF04F0 = 0;
  qword_4AF04F8 = 0;
  qword_4AF0508 = 0x100000000LL;
  qword_4AF0518 = (__int64)&qword_4AF0530;
  qword_4AF0520 = 1;
  dword_4AF0528 = 0;
  byte_4AF052C = 1;
  v4 = sub_259AC30(sub_1F6C940, &qword_4AF0510);
  v5 = (unsigned int)qword_4AF0508;
  v6 = (unsigned int)qword_4AF0508 + 1LL;
  if ( HIDWORD(qword_4AF0508) < v6 )
  {
    sub_25D6060(&qword_4AF0510 - 2, &qword_4AF0510, v6, 8);
    v5 = (unsigned int)qword_4AF0508;
  }
  v7 = _mm_load_si128(&v15);
  *(_QWORD *)(qword_4AF0500 + 8 * v5) = v4;
  word_4AF0548 = 0;
  xmmword_4AF0558 = 0;
  qword_4AF0540 = (__int64)&off_4A64730;
  xmmword_4AF0568 = (__int128)v7;
  LODWORD(qword_4AF0508) = qword_4AF0508 + 1;
  qword_4AF04C0 = (__int64)off_4A6DFF0;
  byte_4AF0538 = 0;
  qword_4AF0550 = (__int64)off_49D9168;
  sub_259F400(&qword_4AF04C0, "mem-loc-frag-fill", 17);
  word_4AF0548 = 257;
  byte_4AF0538 = 1;
  BYTE2(qword_4AF04C8) = BYTE2(qword_4AF04C8) & 0x9F | 0x20;
  sub_259EC40(&qword_4AF04C0);
  __cxa_atexit(sub_1F6C9D0, &qword_4AF04C0, &off_47CFE00);
  qword_4AF0410 = 0;
  qword_4AF0400 = (__int64)&off_4A6E058;
  qword_4AF0408 = (unsigned int)qword_4AF0408 & 0x80000000;
  qword_4AF0440 = (__int64)&qword_4AF0450;
  qword_4AF0418 = 0;
  qword_4AF0420 = 0;
  qword_4AF0428 = 0;
  qword_4AF0430 = 0;
  qword_4AF0438 = 0;
  qword_4AF0448 = 0x100000000LL;
  qword_4AF0458 = (__int64)&qword_4AF0470;
  qword_4AF0460 = 1;
  dword_4AF0468 = 0;
  byte_4AF046C = 1;
  v8 = sub_259AC30(sub_1F6C9D0, &qword_4AF0450);
  v9 = (unsigned int)qword_4AF0448;
  if ( HIDWORD(qword_4AF0448) < (unsigned __int64)(unsigned int)qword_4AF0448 + 1 )
  {
    v16 = v8;
    sub_25D6060(&qword_4AF0450 - 2, &qword_4AF0450, (unsigned int)qword_4AF0448 + 1LL, 8);
    v9 = (unsigned int)qword_4AF0448;
    v8 = v16;
  }
  v10 = _mm_load_si128(&v15);
  *(_QWORD *)(qword_4AF0440 + 8 * v9) = v8;
  word_4AF0488 = 0;
  xmmword_4AF0498 = 0;
  xmmword_4AF04A8 = (__int128)v10;
  qword_4AF0480 = (__int64)&off_4A64730;
  LODWORD(qword_4AF0448) = qword_4AF0448 + 1;
  byte_4AF0478 = 0;
  qword_4AF0400 = (__int64)off_4A6DFF0;
  qword_4AF0490 = (__int64)off_49D9168;
  sub_259F400(&qword_4AF0400, "print-debug-ata", 15);
  word_4AF0488 = 256;
  byte_4AF0478 = 0;
  BYTE2(qword_4AF0408) = BYTE2(qword_4AF0408) & 0x9F | 0x20;
  sub_259EC40(&qword_4AF0400);
  __cxa_atexit(sub_1F6C9D0, &qword_4AF0400, &off_47CFE00);
  qword_4AF0388 = 0x100000000LL;
  qword_4AF0340 = (__int64)&off_4A6E058;
  qword_4AF0348 = (unsigned int)qword_4AF0348 & 0x80000000;
  qword_4AF0380 = (__int64)&qword_4AF0390;
  qword_4AF0350 = 0;
  qword_4AF0358 = 0;
  qword_4AF0360 = 0;
  qword_4AF0368 = 0;
  qword_4AF0370 = 0;
  qword_4AF0378 = 0;
  qword_4AF0398 = (__int64)&qword_4AF03B0;
  qword_4AF03A0 = 1;
  dword_4AF03A8 = 0;
  byte_4AF03AC = 1;
  v11 = sub_259AC30(sub_1F6C9D0, &qword_4AF0390);
  v12 = (unsigned int)qword_4AF0388;
  v13 = (unsigned int)qword_4AF0388 + 1LL;
  if ( HIDWORD(qword_4AF0388) < v13 )
  {
    sub_25D6060(&qword_4AF0390 - 2, &qword_4AF0390, v13, 8);
    v12 = (unsigned int)qword_4AF0388;
  }
  *(_QWORD *)(qword_4AF0380 + 8 * v12) = v11;
  xmmword_4AF03D8 = 0;
  LODWORD(qword_4AF0388) = qword_4AF0388 + 1;
  qword_4AF03C0 = (__int64)off_49D90F8;
  dword_4AF03B8 = 0;
  byte_4AF03CC = 0;
  qword_4AF0340 = (__int64)off_4A6D1F8;
  dword_4AF03C8 = 0;
  qword_4AF03D0 = (__int64)off_49D9198;
  xmmword_4AF03E8 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49E9110),
                                (__m128i)(unsigned __int64)nullsub_328);
  sub_259F400(&qword_4AF0340, "debug-ata-coalesce-frags", 24);
  BYTE2(qword_4AF0348) = BYTE2(qword_4AF0348) & 0x9F | 0x20;
  sub_259EC40(&qword_4AF0340);
  return __cxa_atexit(sub_23D2630, &qword_4AF0340, &off_47CFE00);
}

