int __fastcall sub_59E810(__int64 a1)
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

  qword_4AFF320 = (__int64)&qword_4AFF330;
  qword_4AFF2F0 = 0;
  qword_4AFF2F8 = 0;
  qword_4AFF2E0 = (__int64)&off_4A6E058;
  qword_4AFF2E8 = (unsigned int)qword_4AFF2E8 & 0x80000000;
  qword_4AFF338 = (__int64)&qword_4AFF350;
  v12 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_49EB308), (__m128i)(unsigned __int64)nullsub_267);
  qword_4AFF300 = 0;
  qword_4AFF308 = 0;
  qword_4AFF310 = 0;
  qword_4AFF318 = 0;
  qword_4AFF328 = 0x100000000LL;
  qword_4AFF340 = 1;
  dword_4AFF348 = 0;
  byte_4AFF34C = 1;
  v1 = sub_259AC30(a1, &qword_4AFF330);
  v2 = (unsigned int)qword_4AFF328;
  v3 = (unsigned int)qword_4AFF328 + 1LL;
  if ( HIDWORD(qword_4AFF328) < v3 )
  {
    sub_25D6060(&qword_4AFF330 - 2, &qword_4AFF330, v3, 8);
    v2 = (unsigned int)qword_4AFF328;
  }
  v4 = _mm_load_si128(&v12);
  *(_QWORD *)(qword_4AFF320 + 8 * v2) = v1;
  xmmword_4AFF378 = 0;
  xmmword_4AFF388 = (__int128)v4;
  qword_4AFF360 = (__int64)&off_4A64710;
  LODWORD(qword_4AFF328) = qword_4AFF328 + 1;
  byte_4AFF36C = 0;
  qword_4AFF2E0 = (__int64)off_4A6DEB8;
  dword_4AFF358 = 0;
  dword_4AFF368 = 0;
  qword_4AFF370 = (__int64)off_49D9228;
  sub_259F400(&qword_4AFF2E0, "mfs-psi-cutoff", 14);
  qword_4AFF308 = 87;
  qword_4AFF300 = (__int64)"Percentile profile summary cutoff used to determine cold blocks. Unused if set to zero.";
  dword_4AFF358 = 999950;
  byte_4AFF36C = 1;
  dword_4AFF368 = 999950;
  BYTE2(qword_4AFF2E8) = BYTE2(qword_4AFF2E8) & 0x9F | 0x20;
  sub_259EC40(&qword_4AFF2E0);
  __cxa_atexit(sub_1F6C940, &qword_4AFF2E0, &off_47CFE00);
  qword_4AFF230 = 0;
  qword_4AFF220 = (__int64)&off_4A6E058;
  qword_4AFF228 = (unsigned int)qword_4AFF228 & 0x80000000;
  qword_4AFF260 = (__int64)&qword_4AFF270;
  qword_4AFF238 = 0;
  qword_4AFF240 = 0;
  qword_4AFF248 = 0;
  qword_4AFF250 = 0;
  qword_4AFF258 = 0;
  qword_4AFF268 = 0x100000000LL;
  qword_4AFF278 = (__int64)&qword_4AFF290;
  qword_4AFF280 = 1;
  dword_4AFF288 = 0;
  byte_4AFF28C = 1;
  v5 = sub_259AC30(sub_1F6C940, &qword_4AFF270);
  v6 = (unsigned int)qword_4AFF268;
  if ( HIDWORD(qword_4AFF268) < (unsigned __int64)(unsigned int)qword_4AFF268 + 1 )
  {
    v13 = v5;
    sub_25D6060(&qword_4AFF270 - 2, &qword_4AFF270, (unsigned int)qword_4AFF268 + 1LL, 8);
    v6 = (unsigned int)qword_4AFF268;
    v5 = v13;
  }
  v7 = _mm_load_si128(&v12);
  *(_QWORD *)(qword_4AFF260 + 8 * v6) = v5;
  xmmword_4AFF2B8 = 0;
  xmmword_4AFF2C8 = (__int128)v7;
  qword_4AFF2A0 = (__int64)&off_4A64710;
  LODWORD(qword_4AFF268) = qword_4AFF268 + 1;
  byte_4AFF2AC = 0;
  qword_4AFF220 = (__int64)off_4A6DEB8;
  dword_4AFF298 = 0;
  dword_4AFF2A8 = 0;
  qword_4AFF2B0 = (__int64)off_49D9228;
  sub_259F400(&qword_4AFF220, "mfs-count-threshold", 19);
  qword_4AFF248 = 64;
  qword_4AFF240 = (__int64)"Minimum number of times a block must be executed to be retained.";
  dword_4AFF298 = 1;
  byte_4AFF2AC = 1;
  dword_4AFF2A8 = 1;
  BYTE2(qword_4AFF228) = BYTE2(qword_4AFF228) & 0x9F | 0x20;
  sub_259EC40(&qword_4AFF220);
  __cxa_atexit(sub_1F6C940, &qword_4AFF220, &off_47CFE00);
  qword_4AFF1A8 = 0x100000000LL;
  qword_4AFF160 = (__int64)&off_4A6E058;
  qword_4AFF168 = (unsigned int)qword_4AFF168 & 0x80000000;
  qword_4AFF1A0 = (__int64)&qword_4AFF1B0;
  qword_4AFF170 = 0;
  qword_4AFF178 = 0;
  qword_4AFF180 = 0;
  qword_4AFF188 = 0;
  qword_4AFF190 = 0;
  qword_4AFF198 = 0;
  qword_4AFF1B8 = (__int64)&qword_4AFF1D0;
  qword_4AFF1C0 = 1;
  dword_4AFF1C8 = 0;
  byte_4AFF1CC = 1;
  v8 = sub_259AC30(sub_1F6C940, &qword_4AFF1B0);
  v9 = (unsigned int)qword_4AFF1A8;
  v10 = (unsigned int)qword_4AFF1A8 + 1LL;
  if ( HIDWORD(qword_4AFF1A8) < v10 )
  {
    sub_25D6060(&qword_4AFF1B0 - 2, &qword_4AFF1B0, v10, 8);
    v9 = (unsigned int)qword_4AFF1A8;
  }
  *(_QWORD *)(qword_4AFF1A0 + 8 * v9) = v8;
  word_4AFF1E8 = 0;
  xmmword_4AFF1F8 = 0;
  LODWORD(qword_4AFF1A8) = qword_4AFF1A8 + 1;
  qword_4AFF1E0 = (__int64)&off_4A64730;
  byte_4AFF1D8 = 0;
  qword_4AFF160 = (__int64)off_4A6DFF0;
  qword_4AFF1F0 = (__int64)off_49D9168;
  xmmword_4AFF208 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49EB310),
                                (__m128i)(unsigned __int64)nullsub_266);
  sub_259F400(&qword_4AFF160, "mfs-split-ehcode", 16);
  qword_4AFF180 = (__int64)"Splits all EH code and it's descendants by default.";
  word_4AFF1E8 = 256;
  byte_4AFF1D8 = 0;
  qword_4AFF188 = 51;
  BYTE2(qword_4AFF168) = BYTE2(qword_4AFF168) & 0x9F | 0x20;
  sub_259EC40(&qword_4AFF160);
  return __cxa_atexit(sub_1F6C9D0, &qword_4AFF160, &off_47CFE00);
}

