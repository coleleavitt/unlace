int __fastcall sub_598140(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // rdx
  __int64 v4; // r15
  __int64 v5; // rax
  unsigned __int64 v6; // rdx
  __int64 v7; // r15
  __int64 v8; // rax
  unsigned __int64 v9; // rdx
  __m128i si128; // xmm5
  __int64 v11; // r12
  __int64 v12; // rax
  unsigned __int64 v13; // rdx
  __m128i v14; // xmm6
  __m128i v16[4]; // [rsp+0h] [rbp-48h] BYREF

  qword_4AFC1E0 = (__int64)&qword_4AFC1F0;
  qword_4AFC1B0 = 0;
  qword_4AFC1B8 = 0;
  qword_4AFC1A0 = (__int64)&off_4A6E058;
  qword_4AFC1A8 = (unsigned int)qword_4AFC1A8 & 0x80000000;
  qword_4AFC1F8 = (__int64)&qword_4AFC210;
  v16[0] = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_49EB0A8), (__m128i)(unsigned __int64)nullsub_267);
  qword_4AFC1C0 = 0;
  qword_4AFC1C8 = 0;
  qword_4AFC1D0 = 0;
  qword_4AFC1D8 = 0;
  qword_4AFC1E8 = 0x100000000LL;
  qword_4AFC200 = 1;
  dword_4AFC208 = 0;
  byte_4AFC20C = 1;
  v1 = sub_259AC30(a1, &qword_4AFC1F0);
  v2 = (unsigned int)qword_4AFC1E8;
  v3 = (unsigned int)qword_4AFC1E8 + 1LL;
  if ( HIDWORD(qword_4AFC1E8) < v3 )
  {
    sub_25D6060(&qword_4AFC1F0 - 2, &qword_4AFC1F0, v3, 8);
    v2 = (unsigned int)qword_4AFC1E8;
  }
  *(_QWORD *)(qword_4AFC1E0 + 8 * v2) = v1;
  word_4AFC228 = 0;
  xmmword_4AFC238 = 0;
  LODWORD(qword_4AFC1E8) = qword_4AFC1E8 + 1;
  qword_4AFC220 = (__int64)&off_4A64730;
  byte_4AFC218 = 0;
  qword_4AFC1A0 = (__int64)off_4A6DFF0;
  qword_4AFC230 = (__int64)off_49D9168;
  xmmword_4AFC248 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49EB0B0),
                                (__m128i)(unsigned __int64)nullsub_266);
  sub_259F400(&qword_4AFC1A0, "force-instr-ref-livedebugvalues", 31);
  word_4AFC228 = 256;
  byte_4AFC218 = 0;
  qword_4AFC1C8 = 70;
  BYTE2(qword_4AFC1A8) = BYTE2(qword_4AFC1A8) & 0x9F | 0x20;
  qword_4AFC1C0 = (__int64)"Use instruction-ref based LiveDebugValues with normal DBG_VALUE inputs";
  sub_259EC40(&qword_4AFC1A0);
  __cxa_atexit(sub_1F6C9D0, &qword_4AFC1A0, &off_47CFE00);
  qword_4AFC0F0 = 0;
  qword_4AFC0E0 = (__int64)&off_4A6E058;
  qword_4AFC0E8 = (unsigned int)qword_4AFC0E8 & 0x80000000;
  qword_4AFC120 = (__int64)&qword_4AFC130;
  qword_4AFC0F8 = 0;
  qword_4AFC100 = 0;
  qword_4AFC108 = 0;
  qword_4AFC110 = 0;
  qword_4AFC118 = 0;
  qword_4AFC128 = 0x100000000LL;
  qword_4AFC138 = (__int64)&qword_4AFC150;
  qword_4AFC140 = 1;
  dword_4AFC148 = 0;
  byte_4AFC14C = 1;
  v4 = sub_259AC30(sub_1F6C9D0, &qword_4AFC130);
  v5 = (unsigned int)qword_4AFC128;
  v6 = (unsigned int)qword_4AFC128 + 1LL;
  if ( HIDWORD(qword_4AFC128) < v6 )
  {
    sub_25D6060(&qword_4AFC130 - 2, &qword_4AFC130, v6, 8);
    v5 = (unsigned int)qword_4AFC128;
  }
  *(_QWORD *)(qword_4AFC120 + 8 * v5) = v4;
  xmmword_4AFC178 = 0;
  LODWORD(qword_4AFC128) = qword_4AFC128 + 1;
  qword_4AFC160 = (__int64)off_49D90F8;
  dword_4AFC158 = 0;
  byte_4AFC16C = 0;
  qword_4AFC0E0 = (__int64)off_4A6D1F8;
  dword_4AFC168 = 0;
  qword_4AFC170 = (__int64)off_49D9198;
  xmmword_4AFC188 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49EB0B8),
                                (__m128i)(unsigned __int64)nullsub_328);
  sub_259F400(&qword_4AFC0E0, "experimental-debug-variable-locations", 37);
  qword_4AFC108 = 54;
  qword_4AFC100 = (__int64)"Use experimental new value-tracking variable locations";
  sub_259EC40(&qword_4AFC0E0);
  __cxa_atexit(sub_23D2630, &qword_4AFC0E0, &off_47CFE00);
  qword_4AFC030 = 0;
  qword_4AFC020 = (__int64)&off_4A6E058;
  qword_4AFC028 = (unsigned int)qword_4AFC028 & 0x80000000;
  qword_4AFC060 = (__int64)&qword_4AFC070;
  qword_4AFC038 = 0;
  qword_4AFC040 = 0;
  qword_4AFC048 = 0;
  qword_4AFC050 = 0;
  qword_4AFC058 = 0;
  qword_4AFC068 = 0x100000000LL;
  qword_4AFC078 = (__int64)&qword_4AFC090;
  qword_4AFC080 = 1;
  dword_4AFC088 = 0;
  byte_4AFC08C = 1;
  v7 = sub_259AC30(sub_23D2630, &qword_4AFC070);
  v8 = (unsigned int)qword_4AFC068;
  v9 = (unsigned int)qword_4AFC068 + 1LL;
  if ( HIDWORD(qword_4AFC068) < v9 )
  {
    sub_25D6060(&qword_4AFC070 - 2, &qword_4AFC070, v9, 8);
    v8 = (unsigned int)qword_4AFC068;
  }
  si128 = _mm_load_si128(v16);
  *(_QWORD *)(qword_4AFC060 + 8 * v8) = v7;
  xmmword_4AFC0B8 = 0;
  xmmword_4AFC0C8 = (__int128)si128;
  qword_4AFC0A0 = (__int64)&off_4A64710;
  LODWORD(qword_4AFC068) = qword_4AFC068 + 1;
  byte_4AFC0AC = 0;
  qword_4AFC020 = (__int64)off_4A6DEB8;
  dword_4AFC098 = 0;
  dword_4AFC0A8 = 0;
  qword_4AFC0B0 = (__int64)off_49D9228;
  sub_259F400(&qword_4AFC020, "livedebugvalues-input-bb-limit", 30);
  qword_4AFC048 = 57;
  qword_4AFC040 = (__int64)"Maximum input basic blocks before DBG_VALUE limit applies";
  dword_4AFC098 = 10000;
  byte_4AFC0AC = 1;
  dword_4AFC0A8 = 10000;
  BYTE2(qword_4AFC028) = BYTE2(qword_4AFC028) & 0x9F | 0x20;
  sub_259EC40(&qword_4AFC020);
  __cxa_atexit(sub_1F6C940, &qword_4AFC020, &off_47CFE00);
  qword_4AFBFA8 = 0x100000000LL;
  qword_4AFBF60 = (__int64)&off_4A6E058;
  qword_4AFBF68 = (unsigned int)qword_4AFBF68 & 0x80000000;
  qword_4AFBFA0 = (__int64)&qword_4AFBFB0;
  qword_4AFBF70 = 0;
  qword_4AFBF78 = 0;
  qword_4AFBF80 = 0;
  qword_4AFBF88 = 0;
  qword_4AFBF90 = 0;
  qword_4AFBF98 = 0;
  qword_4AFBFB8 = (__int64)&qword_4AFBFD0;
  qword_4AFBFC0 = 1;
  dword_4AFBFC8 = 0;
  byte_4AFBFCC = 1;
  v11 = sub_259AC30(sub_1F6C940, &qword_4AFBFB0);
  v12 = (unsigned int)qword_4AFBFA8;
  v13 = (unsigned int)qword_4AFBFA8 + 1LL;
  if ( HIDWORD(qword_4AFBFA8) < v13 )
  {
    sub_25D6060(&qword_4AFBFB0 - 2, &qword_4AFBFB0, v13, 8);
    v12 = (unsigned int)qword_4AFBFA8;
  }
  v14 = _mm_load_si128(v16);
  *(_QWORD *)(qword_4AFBFA0 + 8 * v12) = v11;
  qword_4AFBFE0 = (__int64)&off_4A64710;
  xmmword_4AFBFF8 = 0;
  xmmword_4AFC008 = (__int128)v14;
  qword_4AFBF60 = (__int64)off_4A6DEB8;
  LODWORD(qword_4AFBFA8) = qword_4AFBFA8 + 1;
  byte_4AFBFEC = 0;
  qword_4AFBFF0 = (__int64)off_49D9228;
  dword_4AFBFD8 = 0;
  dword_4AFBFE8 = 0;
  sub_259F400(&qword_4AFBF60, "livedebugvalues-input-dbg-value-limit", 37);
  qword_4AFBF88 = 64;
  qword_4AFBF80 = (__int64)"Maximum input DBG_VALUE insts supported by debug range extension";
  dword_4AFBFD8 = 50000;
  byte_4AFBFEC = 1;
  dword_4AFBFE8 = 50000;
  BYTE2(qword_4AFBF68) = BYTE2(qword_4AFBF68) & 0x9F | 0x20;
  sub_259EC40(&qword_4AFBF60);
  return __cxa_atexit(sub_1F6C940, &qword_4AFBF60, &off_47CFE00);
}

