int __fastcall sub_5A55E0(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // rdx
  __m128i v4; // xmm3
  __int64 v5; // rax
  __int64 v6; // rdx
  __m128i v7; // xmm4
  __int64 v8; // r12
  __int64 v9; // rax
  unsigned __int64 v10; // rdx
  __m128i v12; // [rsp+0h] [rbp-58h] BYREF
  __int64 v13; // [rsp+18h] [rbp-40h]

  qword_4B03260 = (__int64)&qword_4B03270;
  qword_4B03230 = 0;
  qword_4B03238 = 0;
  qword_4B03220 = (__int64)&off_4A6E058;
  qword_4B03228 = (unsigned int)qword_4B03228 & 0x80000000;
  qword_4B03278 = (__int64)&qword_4B03290;
  v12 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_49EB7E0), (__m128i)(unsigned __int64)nullsub_266);
  qword_4B03240 = 0;
  qword_4B03248 = 0;
  qword_4B03250 = 0;
  qword_4B03258 = 0;
  qword_4B03268 = 0x100000000LL;
  qword_4B03280 = 1;
  dword_4B03288 = 0;
  byte_4B0328C = 1;
  v1 = sub_259AC30(a1, &qword_4B03270);
  v2 = (unsigned int)qword_4B03268;
  v3 = (unsigned int)qword_4B03268 + 1LL;
  if ( HIDWORD(qword_4B03268) < v3 )
  {
    sub_25D6060(&qword_4B03270 - 2, &qword_4B03270, v3, 8);
    v2 = (unsigned int)qword_4B03268;
  }
  v4 = _mm_load_si128(&v12);
  *(_QWORD *)(qword_4B03260 + 8 * v2) = v1;
  word_4B032A8 = 0;
  xmmword_4B032B8 = 0;
  qword_4B032A0 = (__int64)&off_4A64730;
  xmmword_4B032C8 = (__int128)v4;
  LODWORD(qword_4B03268) = qword_4B03268 + 1;
  qword_4B03220 = (__int64)off_4A6DFF0;
  byte_4B03298 = 0;
  qword_4B032B0 = (__int64)off_49D9168;
  sub_259F400(&qword_4B03220, "consthoist-with-block-frequency", 31);
  word_4B032A8 = 257;
  byte_4B03298 = 1;
  qword_4B03248 = 139;
  BYTE2(qword_4B03228) = BYTE2(qword_4B03228) & 0x9F | 0x20;
  qword_4B03240 = (__int64)"Enable the use of the block frequency analysis to reduce the chance to execute const material"
                           "ization more frequently than without hoisting.";
  sub_259EC40(&qword_4B03220);
  __cxa_atexit(sub_1F6C9D0, &qword_4B03220, &off_47CFE00);
  qword_4B03170 = 0;
  qword_4B03160 = (__int64)&off_4A6E058;
  qword_4B03168 = (unsigned int)qword_4B03168 & 0x80000000;
  qword_4B031A0 = (__int64)&qword_4B031B0;
  qword_4B03178 = 0;
  qword_4B03180 = 0;
  qword_4B03188 = 0;
  qword_4B03190 = 0;
  qword_4B03198 = 0;
  qword_4B031A8 = 0x100000000LL;
  qword_4B031B8 = (__int64)&qword_4B031D0;
  qword_4B031C0 = 1;
  dword_4B031C8 = 0;
  byte_4B031CC = 1;
  v5 = sub_259AC30(sub_1F6C9D0, &qword_4B031B0);
  v6 = (unsigned int)qword_4B031A8;
  if ( HIDWORD(qword_4B031A8) < (unsigned __int64)(unsigned int)qword_4B031A8 + 1 )
  {
    v13 = v5;
    sub_25D6060(&qword_4B031B0 - 2, &qword_4B031B0, (unsigned int)qword_4B031A8 + 1LL, 8);
    v6 = (unsigned int)qword_4B031A8;
    v5 = v13;
  }
  v7 = _mm_load_si128(&v12);
  *(_QWORD *)(qword_4B031A0 + 8 * v6) = v5;
  word_4B031E8 = 0;
  xmmword_4B031F8 = 0;
  xmmword_4B03208 = (__int128)v7;
  qword_4B031E0 = (__int64)&off_4A64730;
  LODWORD(qword_4B031A8) = qword_4B031A8 + 1;
  byte_4B031D8 = 0;
  qword_4B03160 = (__int64)off_4A6DFF0;
  qword_4B031F0 = (__int64)off_49D9168;
  sub_259F400(&qword_4B03160, "consthoist-gep", 14);
  word_4B031E8 = 256;
  byte_4B031D8 = 0;
  qword_4B03188 = 37;
  BYTE2(qword_4B03168) = BYTE2(qword_4B03168) & 0x9F | 0x20;
  qword_4B03180 = (__int64)"Try hoisting constant gep expressions";
  sub_259EC40(&qword_4B03160);
  __cxa_atexit(sub_1F6C9D0, &qword_4B03160, &off_47CFE00);
  qword_4B030E8 = 0x100000000LL;
  qword_4B030A0 = (__int64)&off_4A6E058;
  qword_4B030A8 = (unsigned int)qword_4B030A8 & 0x80000000;
  qword_4B030E0 = (__int64)&qword_4B030F0;
  qword_4B030B0 = 0;
  qword_4B030B8 = 0;
  qword_4B030C0 = 0;
  qword_4B030C8 = 0;
  qword_4B030D0 = 0;
  qword_4B030D8 = 0;
  qword_4B030F8 = (__int64)&qword_4B03110;
  qword_4B03100 = 1;
  dword_4B03108 = 0;
  byte_4B0310C = 1;
  v8 = sub_259AC30(sub_1F6C9D0, &qword_4B030F0);
  v9 = (unsigned int)qword_4B030E8;
  v10 = (unsigned int)qword_4B030E8 + 1LL;
  if ( HIDWORD(qword_4B030E8) < v10 )
  {
    sub_25D6060(&qword_4B030F0 - 2, &qword_4B030F0, v10, 8);
    v9 = (unsigned int)qword_4B030E8;
  }
  *(_QWORD *)(qword_4B030E0 + 8 * v9) = v8;
  xmmword_4B03138 = 0;
  LODWORD(qword_4B030E8) = qword_4B030E8 + 1;
  qword_4B03120 = (__int64)&off_4A64710;
  dword_4B03118 = 0;
  byte_4B0312C = 0;
  qword_4B030A0 = (__int64)off_4A6DEB8;
  dword_4B03128 = 0;
  qword_4B03130 = (__int64)off_49D9228;
  xmmword_4B03148 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49EB7E8),
                                (__m128i)(unsigned __int64)nullsub_267);
  sub_259F400(&qword_4B030A0, "consthoist-min-num-to-rebase", 28);
  qword_4B030C8 = 82;
  qword_4B030C0 = (__int64)"Do not rebase if number of dependent constants of a Base is less than this number.";
  dword_4B03118 = 0;
  byte_4B0312C = 1;
  dword_4B03128 = 0;
  BYTE2(qword_4B030A8) = BYTE2(qword_4B030A8) & 0x9F | 0x20;
  sub_259EC40(&qword_4B030A0);
  return __cxa_atexit(sub_1F6C940, &qword_4B030A0, &off_47CFE00);
}

