int __fastcall sub_5DC360(__int64 a1)
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
  __m128i v14; // xmm6
  __m128i v16; // [rsp+0h] [rbp-58h] BYREF
  __int64 v17; // [rsp+18h] [rbp-40h]

  qword_4B222E0 = (__int64)&qword_4B222F0;
  qword_4B222B0 = 0;
  qword_4B222B8 = 0;
  qword_4B222A0 = (__int64)&off_4A6E058;
  qword_4B222A8 = (unsigned int)qword_4B222A8 & 0x80000000;
  qword_4B222F8 = (__int64)&qword_4B22310;
  v16 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_49EEBE0), (__m128i)(unsigned __int64)nullsub_267);
  qword_4B222C0 = 0;
  qword_4B222C8 = 0;
  qword_4B222D0 = 0;
  qword_4B222D8 = 0;
  qword_4B222E8 = 0x100000000LL;
  qword_4B22300 = 1;
  dword_4B22308 = 0;
  byte_4B2230C = 1;
  v1 = sub_259AC30(a1, &qword_4B222F0);
  v2 = (unsigned int)qword_4B222E8;
  v3 = (unsigned int)qword_4B222E8 + 1LL;
  if ( HIDWORD(qword_4B222E8) < v3 )
  {
    sub_25D6060(&qword_4B222F0 - 2, &qword_4B222F0, v3, 8);
    v2 = (unsigned int)qword_4B222E8;
  }
  *(_QWORD *)(qword_4B222E0 + 8 * v2) = v1;
  word_4B22328 = 0;
  xmmword_4B22338 = 0;
  LODWORD(qword_4B222E8) = qword_4B222E8 + 1;
  qword_4B22320 = (__int64)&off_4A64730;
  byte_4B22318 = 0;
  qword_4B222A0 = (__int64)off_4A6DFF0;
  qword_4B22330 = (__int64)off_49D9168;
  xmmword_4B22348 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49EEBE8),
                                (__m128i)(unsigned __int64)nullsub_266);
  sub_259F400(&qword_4B222A0, "costmodel-reduxcost", 19);
  word_4B22328 = 256;
  byte_4B22318 = 0;
  qword_4B222C8 = 29;
  BYTE2(qword_4B222A8) = BYTE2(qword_4B222A8) & 0x9F | 0x20;
  qword_4B222C0 = (__int64)"Recognize reduction patterns.";
  sub_259EC40(&qword_4B222A0);
  __cxa_atexit(sub_1F6C9D0, &qword_4B222A0, &off_47CFE00);
  qword_4B221F0 = 0;
  qword_4B221E0 = (__int64)&off_4A6E058;
  qword_4B221E8 = (unsigned int)qword_4B221E8 & 0x80000000;
  qword_4B22220 = (__int64)&qword_4B22230;
  qword_4B221F8 = 0;
  qword_4B22200 = 0;
  qword_4B22208 = 0;
  qword_4B22210 = 0;
  qword_4B22218 = 0;
  qword_4B22228 = 0x100000000LL;
  qword_4B22238 = (__int64)&qword_4B22250;
  qword_4B22240 = 1;
  dword_4B22248 = 0;
  byte_4B2224C = 1;
  v4 = sub_259AC30(sub_1F6C9D0, &qword_4B22230);
  v5 = (unsigned int)qword_4B22228;
  v6 = (unsigned int)qword_4B22228 + 1LL;
  if ( HIDWORD(qword_4B22228) < v6 )
  {
    sub_25D6060(&qword_4B22230 - 2, &qword_4B22230, v6, 8);
    v5 = (unsigned int)qword_4B22228;
  }
  v7 = _mm_load_si128(&v16);
  *(_QWORD *)(qword_4B22220 + 8 * v5) = v4;
  xmmword_4B22278 = 0;
  xmmword_4B22288 = (__int128)v7;
  qword_4B22260 = (__int64)&off_4A64710;
  LODWORD(qword_4B22228) = qword_4B22228 + 1;
  byte_4B2226C = 0;
  qword_4B221E0 = (__int64)off_4A6DEB8;
  dword_4B22258 = 0;
  dword_4B22268 = 0;
  qword_4B22270 = (__int64)off_49D9228;
  sub_259F400(&qword_4B221E0, "cache-line-size", 15);
  dword_4B22258 = 0;
  byte_4B2226C = 1;
  dword_4B22268 = 0;
  qword_4B22208 = 75;
  BYTE2(qword_4B221E8) = BYTE2(qword_4B221E8) & 0x9F | 0x20;
  qword_4B22200 = (__int64)"Use this to override the target cache line size when specified by the user.";
  sub_259EC40(&qword_4B221E0);
  __cxa_atexit(sub_1F6C940, &qword_4B221E0, &off_47CFE00);
  qword_4B22130 = 0;
  qword_4B22120 = (__int64)&off_4A6E058;
  qword_4B22128 = (unsigned int)qword_4B22128 & 0x80000000;
  qword_4B22160 = (__int64)&qword_4B22170;
  qword_4B22138 = 0;
  qword_4B22140 = 0;
  qword_4B22148 = 0;
  qword_4B22150 = 0;
  qword_4B22158 = 0;
  qword_4B22168 = 0x100000000LL;
  qword_4B22178 = (__int64)&qword_4B22190;
  qword_4B22180 = 1;
  dword_4B22188 = 0;
  byte_4B2218C = 1;
  v8 = sub_259AC30(sub_1F6C940, &qword_4B22170);
  v9 = (unsigned int)qword_4B22168;
  if ( HIDWORD(qword_4B22168) < (unsigned __int64)(unsigned int)qword_4B22168 + 1 )
  {
    v17 = v8;
    sub_25D6060(&qword_4B22170 - 2, &qword_4B22170, (unsigned int)qword_4B22168 + 1LL, 8);
    v9 = (unsigned int)qword_4B22168;
    v8 = v17;
  }
  v10 = _mm_load_si128(&v16);
  *(_QWORD *)(qword_4B22160 + 8 * v9) = v8;
  xmmword_4B221B8 = 0;
  xmmword_4B221C8 = (__int128)v10;
  qword_4B221A0 = (__int64)&off_4A64710;
  LODWORD(qword_4B22168) = qword_4B22168 + 1;
  byte_4B221AC = 0;
  qword_4B22120 = (__int64)off_4A6DEB8;
  dword_4B22198 = 0;
  dword_4B221A8 = 0;
  qword_4B221B0 = (__int64)off_49D9228;
  sub_259F400(&qword_4B22120, "min-page-size", 13);
  dword_4B22198 = 0;
  byte_4B221AC = 1;
  dword_4B221A8 = 0;
  qword_4B22148 = 52;
  BYTE2(qword_4B22128) = BYTE2(qword_4B22128) & 0x9F | 0x20;
  qword_4B22140 = (__int64)"Use this to override the target's minimum page size.";
  sub_259EC40(&qword_4B22120);
  __cxa_atexit(sub_1F6C940, &qword_4B22120, &off_47CFE00);
  qword_4B220A8 = 0x100000000LL;
  qword_4B22060 = (__int64)&off_4A6E058;
  qword_4B22068 = (unsigned int)qword_4B22068 & 0x80000000;
  qword_4B220A0 = (__int64)&qword_4B220B0;
  qword_4B22070 = 0;
  qword_4B22078 = 0;
  qword_4B22080 = 0;
  qword_4B22088 = 0;
  qword_4B22090 = 0;
  qword_4B22098 = 0;
  qword_4B220B8 = (__int64)&qword_4B220D0;
  qword_4B220C0 = 1;
  dword_4B220C8 = 0;
  byte_4B220CC = 1;
  v11 = sub_259AC30(sub_1F6C940, &qword_4B220B0);
  v12 = (unsigned int)qword_4B220A8;
  v13 = (unsigned int)qword_4B220A8 + 1LL;
  if ( HIDWORD(qword_4B220A8) < v13 )
  {
    sub_25D6060(&qword_4B220B0 - 2, &qword_4B220B0, v13, 8);
    v12 = (unsigned int)qword_4B220A8;
  }
  v14 = _mm_load_si128(&v16);
  *(_QWORD *)(qword_4B220A0 + 8 * v12) = v11;
  xmmword_4B220F8 = 0;
  xmmword_4B22108 = (__int128)v14;
  qword_4B220E0 = (__int64)&off_4A64710;
  LODWORD(qword_4B220A8) = qword_4B220A8 + 1;
  byte_4B220EC = 0;
  qword_4B22060 = (__int64)off_4A6DEB8;
  dword_4B220D8 = 0;
  dword_4B220E8 = 0;
  qword_4B220F0 = (__int64)off_49D9228;
  sub_259F400(&qword_4B22060, "predictable-branch-threshold", 28);
  dword_4B220D8 = 99;
  byte_4B220EC = 1;
  dword_4B220E8 = 99;
  qword_4B22088 = 67;
  BYTE2(qword_4B22068) = BYTE2(qword_4B22068) & 0x9F | 0x20;
  qword_4B22080 = (__int64)"Use this to override the target's predictable branch threshold (%).";
  sub_259EC40(&qword_4B22060);
  return __cxa_atexit(sub_1F6C940, &qword_4B22060, &off_47CFE00);
}

