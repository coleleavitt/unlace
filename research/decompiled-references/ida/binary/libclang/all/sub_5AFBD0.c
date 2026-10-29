int __fastcall sub_5AFBD0(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // rdx
  __m128i v4; // xmm3
  __int64 v5; // rax
  __int64 v6; // rdx
  __m128i v7; // xmm4
  __int64 v8; // r15
  __int64 v9; // rax
  unsigned __int64 v10; // rdx
  __m128i v11; // xmm5
  __int64 v12; // r12
  __int64 v13; // rax
  unsigned __int64 v14; // rdx
  __m128i v16; // [rsp+0h] [rbp-58h] BYREF
  __int64 v17; // [rsp+18h] [rbp-40h]

  qword_4B06E20 = (__int64)&qword_4B06E30;
  qword_4B06DF0 = 0;
  qword_4B06DF8 = 0;
  qword_4B06DE0 = (__int64)&off_4A6E058;
  qword_4B06DE8 = (unsigned int)qword_4B06DE8 & 0x80000000;
  qword_4B06E38 = (__int64)&qword_4B06E50;
  v16 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_49EBB18), (__m128i)(unsigned __int64)nullsub_266);
  qword_4B06E00 = 0;
  qword_4B06E08 = 0;
  qword_4B06E10 = 0;
  qword_4B06E18 = 0;
  qword_4B06E28 = 0x100000000LL;
  qword_4B06E40 = 1;
  dword_4B06E48 = 0;
  byte_4B06E4C = 1;
  v1 = sub_259AC30(a1, &qword_4B06E30);
  v2 = (unsigned int)qword_4B06E28;
  v3 = (unsigned int)qword_4B06E28 + 1LL;
  if ( HIDWORD(qword_4B06E28) < v3 )
  {
    sub_25D6060(&qword_4B06E30 - 2, &qword_4B06E30, v3, 8);
    v2 = (unsigned int)qword_4B06E28;
  }
  v4 = _mm_load_si128(&v16);
  *(_QWORD *)(qword_4B06E20 + 8 * v2) = v1;
  word_4B06E68 = 0;
  xmmword_4B06E78 = 0;
  qword_4B06E60 = (__int64)&off_4A64730;
  xmmword_4B06E88 = (__int128)v4;
  LODWORD(qword_4B06E28) = qword_4B06E28 + 1;
  qword_4B06DE0 = (__int64)off_4A6DFF0;
  byte_4B06E58 = 0;
  qword_4B06E70 = (__int64)off_49D9168;
  sub_259F400(&qword_4B06DE0, "enable-noalias-to-md-conversion", 31);
  byte_4B06E58 = 1;
  word_4B06E68 = 257;
  qword_4B06E08 = 55;
  BYTE2(qword_4B06DE8) = BYTE2(qword_4B06DE8) & 0x9F | 0x20;
  qword_4B06E00 = (__int64)"Convert noalias attributes to metadata during inlining.";
  sub_259EC40(&qword_4B06DE0);
  __cxa_atexit(sub_1F6C9D0, &qword_4B06DE0, &off_47CFE00);
  qword_4B06D30 = 0;
  qword_4B06D60 = (__int64)&qword_4B06D70;
  qword_4B06D38 = 0;
  qword_4B06D20 = (__int64)&off_4A6E058;
  qword_4B06D28 = (unsigned int)qword_4B06D28 & 0x80000000;
  qword_4B06D40 = 0;
  qword_4B06D48 = 0;
  qword_4B06D50 = 0;
  qword_4B06D58 = 0;
  qword_4B06D68 = 0x100000000LL;
  qword_4B06D78 = (__int64)&qword_4B06D90;
  qword_4B06D80 = 1;
  dword_4B06D88 = 0;
  byte_4B06D8C = 1;
  v5 = sub_259AC30(sub_1F6C9D0, &qword_4B06D70);
  v6 = (unsigned int)qword_4B06D68;
  if ( HIDWORD(qword_4B06D68) < (unsigned __int64)(unsigned int)qword_4B06D68 + 1 )
  {
    v17 = v5;
    sub_25D6060(&qword_4B06D70 - 2, &qword_4B06D70, (unsigned int)qword_4B06D68 + 1LL, 8);
    v6 = (unsigned int)qword_4B06D68;
    v5 = v17;
  }
  v7 = _mm_load_si128(&v16);
  *(_QWORD *)(qword_4B06D60 + 8 * v6) = v5;
  word_4B06DA8 = 0;
  xmmword_4B06DB8 = 0;
  qword_4B06DA0 = (__int64)&off_4A64730;
  xmmword_4B06DC8 = (__int128)v7;
  LODWORD(qword_4B06D68) = qword_4B06D68 + 1;
  qword_4B06D20 = (__int64)off_4A6DFF0;
  byte_4B06D98 = 0;
  qword_4B06DB0 = (__int64)off_49D9168;
  sub_259F400(&qword_4B06D20, "use-noalias-intrinsic-during-inlining", 37);
  word_4B06DA8 = 257;
  byte_4B06D98 = 1;
  qword_4B06D48 = 71;
  BYTE2(qword_4B06D28) = BYTE2(qword_4B06D28) & 0x9F | 0x20;
  qword_4B06D40 = (__int64)"Use the llvm.experimental.noalias.scope.decl intrinsic during inlining.";
  sub_259EC40(&qword_4B06D20);
  __cxa_atexit(sub_1F6C9D0, &qword_4B06D20, &off_47CFE00);
  qword_4B06C70 = 0;
  qword_4B06CA0 = (__int64)&qword_4B06CB0;
  qword_4B06C78 = 0;
  qword_4B06C60 = (__int64)&off_4A6E058;
  qword_4B06C68 = (unsigned int)qword_4B06C68 & 0x80000000;
  qword_4B06C80 = 0;
  qword_4B06C88 = 0;
  qword_4B06C90 = 0;
  qword_4B06C98 = 0;
  qword_4B06CA8 = 0x100000000LL;
  qword_4B06CB8 = (__int64)&qword_4B06CD0;
  qword_4B06CC0 = 1;
  dword_4B06CC8 = 0;
  byte_4B06CCC = 1;
  v8 = sub_259AC30(sub_1F6C9D0, &qword_4B06CB0);
  v9 = (unsigned int)qword_4B06CA8;
  v10 = (unsigned int)qword_4B06CA8 + 1LL;
  if ( HIDWORD(qword_4B06CA8) < v10 )
  {
    sub_25D6060(&qword_4B06CB0 - 2, &qword_4B06CB0, v10, 8);
    v9 = (unsigned int)qword_4B06CA8;
  }
  v11 = _mm_load_si128(&v16);
  *(_QWORD *)(qword_4B06CA0 + 8 * v9) = v8;
  word_4B06CE8 = 0;
  xmmword_4B06CF8 = 0;
  xmmword_4B06D08 = (__int128)v11;
  qword_4B06CE0 = (__int64)&off_4A64730;
  LODWORD(qword_4B06CA8) = qword_4B06CA8 + 1;
  byte_4B06CD8 = 0;
  qword_4B06C60 = (__int64)off_4A6DFF0;
  qword_4B06CF0 = (__int64)off_49D9168;
  sub_259F400(&qword_4B06C60, "preserve-alignment-assumptions-during-inlining", 46);
  word_4B06CE8 = 256;
  byte_4B06CD8 = 0;
  qword_4B06C88 = 56;
  BYTE2(qword_4B06C68) = BYTE2(qword_4B06C68) & 0x9F | 0x20;
  qword_4B06C80 = (__int64)"Convert align attributes to assumptions during inlining.";
  sub_259EC40(&qword_4B06C60);
  __cxa_atexit(sub_1F6C9D0, &qword_4B06C60, &off_47CFE00);
  qword_4B06BE8 = 0x100000000LL;
  qword_4B06BE0 = (__int64)&qword_4B06BF0;
  qword_4B06BB0 = 0;
  qword_4B06BA0 = (__int64)&off_4A6E058;
  qword_4B06BA8 = (unsigned int)qword_4B06BA8 & 0x80000000;
  qword_4B06BB8 = 0;
  qword_4B06BC0 = 0;
  qword_4B06BC8 = 0;
  qword_4B06BD0 = 0;
  qword_4B06BD8 = 0;
  qword_4B06BF8 = (__int64)&qword_4B06C10;
  qword_4B06C00 = 1;
  dword_4B06C08 = 0;
  byte_4B06C0C = 1;
  v12 = sub_259AC30(sub_1F6C9D0, &qword_4B06BF0);
  v13 = (unsigned int)qword_4B06BE8;
  v14 = (unsigned int)qword_4B06BE8 + 1LL;
  if ( HIDWORD(qword_4B06BE8) < v14 )
  {
    sub_25D6060(&qword_4B06BF0 - 2, &qword_4B06BF0, v14, 8);
    v13 = (unsigned int)qword_4B06BE8;
  }
  *(_QWORD *)(qword_4B06BE0 + 8 * v13) = v12;
  xmmword_4B06C38 = 0;
  LODWORD(qword_4B06BE8) = qword_4B06BE8 + 1;
  qword_4B06C20 = (__int64)&off_4A64710;
  dword_4B06C18 = 0;
  byte_4B06C2C = 0;
  qword_4B06BA0 = (__int64)off_4A6DEB8;
  dword_4B06C28 = 0;
  qword_4B06C30 = (__int64)off_49D9228;
  xmmword_4B06C48 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49EBB20),
                                (__m128i)(unsigned __int64)nullsub_267);
  sub_259F400(&qword_4B06BA0, "max-inst-checked-for-throw-during-inlining", 42);
  qword_4B06BC8 = 100;
  dword_4B06C18 = 4;
  byte_4B06C2C = 1;
  dword_4B06C28 = 4;
  BYTE2(qword_4B06BA8) = BYTE2(qword_4B06BA8) & 0x9F | 0x20;
  qword_4B06BC0 = (__int64)"the maximum number of instructions analyzed for may throw during attribute inference in inlined body";
  sub_259EC40(&qword_4B06BA0);
  return __cxa_atexit(sub_1F6C940, &qword_4B06BA0, &off_47CFE00);
}

