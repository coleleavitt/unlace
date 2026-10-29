int __fastcall sub_568570(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // rdx
  __m128i v4; // xmm3
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rdx
  __m128i v9; // xmm5
  __int64 v10; // r12
  __int64 v11; // rax
  unsigned __int64 v12; // rdx
  __m128i v13; // xmm6
  __m128i v15; // [rsp+0h] [rbp-58h] BYREF
  __int64 v16; // [rsp+18h] [rbp-40h]

  qword_4ADE3C0 = (__int64)&qword_4ADE3D0;
  qword_4ADE390 = 0;
  qword_4ADE398 = 0;
  qword_4ADE380 = (__int64)&off_4A6E058;
  qword_4ADE388 = (unsigned int)qword_4ADE388 & 0x80000000;
  qword_4ADE3D8 = (__int64)&qword_4ADE3F0;
  v15 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_49CA350), (__m128i)(unsigned __int64)nullsub_266);
  qword_4ADE3A0 = 0;
  qword_4ADE3A8 = 0;
  qword_4ADE3B0 = 0;
  qword_4ADE3B8 = 0;
  qword_4ADE3C8 = 0x100000000LL;
  qword_4ADE3E0 = 1;
  dword_4ADE3E8 = 0;
  byte_4ADE3EC = 1;
  v1 = sub_259AC30(a1, &qword_4ADE3D0);
  v2 = (unsigned int)qword_4ADE3C8;
  v3 = (unsigned int)qword_4ADE3C8 + 1LL;
  if ( HIDWORD(qword_4ADE3C8) < v3 )
  {
    sub_25D6060(&qword_4ADE3D0 - 2, &qword_4ADE3D0, v3, 8);
    v2 = (unsigned int)qword_4ADE3C8;
  }
  v4 = _mm_load_si128(&v15);
  *(_QWORD *)(qword_4ADE3C0 + 8 * v2) = v1;
  word_4ADE408 = 0;
  xmmword_4ADE418 = 0;
  qword_4ADE380 = (__int64)off_4A6DFF0;
  xmmword_4ADE428 = (__int128)v4;
  LODWORD(qword_4ADE3C8) = qword_4ADE3C8 + 1;
  qword_4ADE410 = (__int64)off_49D9168;
  byte_4ADE3F8 = 0;
  qword_4ADE400 = (__int64)&off_4A64730;
  sub_259F400(&qword_4ADE380, "x86-cmov-converter", 18);
  qword_4ADE3A0 = (__int64)"Enable the X86 cmov-to-branch optimization.";
  qword_4ADE3A8 = 43;
  byte_4ADE3F8 = 1;
  word_4ADE408 = 257;
  BYTE2(qword_4ADE388) = BYTE2(qword_4ADE388) & 0x9F | 0x20;
  sub_259EC40(&qword_4ADE380);
  __cxa_atexit(sub_1F6C9D0, &qword_4ADE380, &off_47CFE00);
  qword_4ADE2D0 = 0;
  qword_4ADE300 = (__int64)&qword_4ADE310;
  qword_4ADE2D8 = 0;
  qword_4ADE2C0 = (__int64)&off_4A6E058;
  qword_4ADE2C8 = (unsigned int)qword_4ADE2C8 & 0x80000000;
  qword_4ADE2E0 = 0;
  qword_4ADE2E8 = 0;
  qword_4ADE2F0 = 0;
  qword_4ADE2F8 = 0;
  qword_4ADE308 = 0x100000000LL;
  qword_4ADE318 = (__int64)&qword_4ADE330;
  qword_4ADE320 = 1;
  dword_4ADE328 = 0;
  byte_4ADE32C = 1;
  v5 = sub_259AC30(sub_1F6C9D0, &qword_4ADE310);
  v6 = (unsigned int)qword_4ADE308;
  if ( HIDWORD(qword_4ADE308) < (unsigned __int64)(unsigned int)qword_4ADE308 + 1 )
  {
    v16 = v5;
    sub_25D6060(&qword_4ADE310 - 2, &qword_4ADE310, (unsigned int)qword_4ADE308 + 1LL, 8);
    v6 = (unsigned int)qword_4ADE308;
    v5 = v16;
  }
  *(_QWORD *)(qword_4ADE300 + 8 * v6) = v5;
  qword_4ADE340 = (__int64)&off_4A64710;
  xmmword_4ADE358 = 0;
  LODWORD(qword_4ADE308) = qword_4ADE308 + 1;
  qword_4ADE2C0 = (__int64)off_4A6DEB8;
  dword_4ADE338 = 0;
  byte_4ADE34C = 0;
  qword_4ADE350 = (__int64)off_49D9228;
  dword_4ADE348 = 0;
  xmmword_4ADE368 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49CA358),
                                (__m128i)(unsigned __int64)nullsub_267);
  sub_259F400(&qword_4ADE2C0, "x86-cmov-converter-threshold", 28);
  qword_4ADE2E8 = 44;
  qword_4ADE2E0 = (__int64)"Minimum gain per loop (in cycles) threshold.";
  dword_4ADE338 = 4;
  byte_4ADE34C = 1;
  dword_4ADE348 = 4;
  BYTE2(qword_4ADE2C8) = BYTE2(qword_4ADE2C8) & 0x9F | 0x20;
  sub_259EC40(&qword_4ADE2C0);
  __cxa_atexit(sub_1F6C940, &qword_4ADE2C0, &off_47CFE00);
  qword_4ADE210 = 0;
  qword_4ADE240 = (__int64)&qword_4ADE250;
  qword_4ADE218 = 0;
  qword_4ADE200 = (__int64)&off_4A6E058;
  qword_4ADE208 = (unsigned int)qword_4ADE208 & 0x80000000;
  qword_4ADE220 = 0;
  qword_4ADE228 = 0;
  qword_4ADE230 = 0;
  qword_4ADE238 = 0;
  qword_4ADE248 = 0x100000000LL;
  qword_4ADE258 = (__int64)&qword_4ADE270;
  qword_4ADE260 = 1;
  dword_4ADE268 = 0;
  byte_4ADE26C = 1;
  v7 = sub_259AC30(sub_1F6C940, &qword_4ADE250);
  v8 = (unsigned int)qword_4ADE248;
  if ( HIDWORD(qword_4ADE248) < (unsigned __int64)(unsigned int)qword_4ADE248 + 1 )
  {
    v16 = v7;
    sub_25D6060(&qword_4ADE250 - 2, &qword_4ADE250, (unsigned int)qword_4ADE248 + 1LL, 8);
    v8 = (unsigned int)qword_4ADE248;
    v7 = v16;
  }
  v9 = _mm_load_si128(&v15);
  *(_QWORD *)(qword_4ADE240 + 8 * v8) = v7;
  word_4ADE288 = 0;
  xmmword_4ADE298 = 0;
  qword_4ADE200 = (__int64)off_4A6DFF0;
  xmmword_4ADE2A8 = (__int128)v9;
  LODWORD(qword_4ADE248) = qword_4ADE248 + 1;
  qword_4ADE290 = (__int64)off_49D9168;
  byte_4ADE278 = 0;
  qword_4ADE280 = (__int64)&off_4A64730;
  sub_259F400(&qword_4ADE200, "x86-cmov-converter-force-mem-operand", 36);
  qword_4ADE228 = 61;
  qword_4ADE220 = (__int64)"Convert cmovs to branches whenever they have memory operands.";
  byte_4ADE278 = 1;
  word_4ADE288 = 257;
  BYTE2(qword_4ADE208) = BYTE2(qword_4ADE208) & 0x9F | 0x20;
  sub_259EC40(&qword_4ADE200);
  __cxa_atexit(sub_1F6C9D0, &qword_4ADE200, &off_47CFE00);
  qword_4ADE188 = 0x100000000LL;
  qword_4ADE180 = (__int64)&qword_4ADE190;
  qword_4ADE150 = 0;
  qword_4ADE140 = (__int64)&off_4A6E058;
  qword_4ADE148 = (unsigned int)qword_4ADE148 & 0x80000000;
  qword_4ADE158 = 0;
  qword_4ADE160 = 0;
  qword_4ADE168 = 0;
  qword_4ADE170 = 0;
  qword_4ADE178 = 0;
  qword_4ADE198 = (__int64)&qword_4ADE1B0;
  qword_4ADE1A0 = 1;
  dword_4ADE1A8 = 0;
  byte_4ADE1AC = 1;
  v10 = sub_259AC30(sub_1F6C9D0, &qword_4ADE190);
  v11 = (unsigned int)qword_4ADE188;
  v12 = (unsigned int)qword_4ADE188 + 1LL;
  if ( HIDWORD(qword_4ADE188) < v12 )
  {
    sub_25D6060(&qword_4ADE190 - 2, &qword_4ADE190, v12, 8);
    v11 = (unsigned int)qword_4ADE188;
  }
  v13 = _mm_load_si128(&v15);
  *(_QWORD *)(qword_4ADE180 + 8 * v11) = v10;
  word_4ADE1C8 = 0;
  qword_4ADE1C0 = (__int64)&off_4A64730;
  xmmword_4ADE1D8 = 0;
  qword_4ADE140 = (__int64)off_4A6DFF0;
  xmmword_4ADE1E8 = (__int128)v13;
  LODWORD(qword_4ADE188) = qword_4ADE188 + 1;
  qword_4ADE1D0 = (__int64)off_49D9168;
  byte_4ADE1B8 = 0;
  sub_259F400(&qword_4ADE140, "x86-cmov-converter-force-all", 28);
  qword_4ADE160 = (__int64)"Convert all cmovs to branches.";
  word_4ADE1C8 = 256;
  byte_4ADE1B8 = 0;
  qword_4ADE168 = 30;
  BYTE2(qword_4ADE148) = BYTE2(qword_4ADE148) & 0x9F | 0x20;
  sub_259EC40(&qword_4ADE140);
  return __cxa_atexit(sub_1F6C9D0, &qword_4ADE140, &off_47CFE00);
}

