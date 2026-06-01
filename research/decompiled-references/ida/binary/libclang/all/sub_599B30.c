int __fastcall sub_599B30(__int64 a1)
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

  qword_4AFCCA0 = (__int64)&qword_4AFCCB0;
  qword_4AFCC70 = 0;
  qword_4AFCC78 = 0;
  qword_4AFCC60 = (__int64)&off_4A6E058;
  qword_4AFCC68 = (unsigned int)qword_4AFCC68 & 0x80000000;
  qword_4AFCCB8 = (__int64)&qword_4AFCCD0;
  v16 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_49EB170), (__m128i)(unsigned __int64)nullsub_266);
  qword_4AFCC80 = 0;
  qword_4AFCC88 = 0;
  qword_4AFCC90 = 0;
  qword_4AFCC98 = 0;
  qword_4AFCCA8 = 0x100000000LL;
  qword_4AFCCC0 = 1;
  dword_4AFCCC8 = 0;
  byte_4AFCCCC = 1;
  v1 = sub_259AC30(a1, &qword_4AFCCB0);
  v2 = (unsigned int)qword_4AFCCA8;
  v3 = (unsigned int)qword_4AFCCA8 + 1LL;
  if ( HIDWORD(qword_4AFCCA8) < v3 )
  {
    sub_25D6060(&qword_4AFCCB0 - 2, &qword_4AFCCB0, v3, 8);
    v2 = (unsigned int)qword_4AFCCA8;
  }
  v4 = _mm_load_si128(&v16);
  *(_QWORD *)(qword_4AFCCA0 + 8 * v2) = v1;
  word_4AFCCE8 = 0;
  xmmword_4AFCCF8 = 0;
  qword_4AFCCE0 = (__int64)&off_4A64730;
  xmmword_4AFCD08 = (__int128)v4;
  LODWORD(qword_4AFCCA8) = qword_4AFCCA8 + 1;
  qword_4AFCC60 = (__int64)off_4A6DFF0;
  byte_4AFCCD8 = 0;
  qword_4AFCCF0 = (__int64)off_49D9168;
  sub_259F400(&qword_4AFCC60, "fixup-scs-extend-slot-size", 26);
  byte_4AFCCD8 = 0;
  word_4AFCCE8 = 256;
  qword_4AFCC88 = 60;
  BYTE2(qword_4AFCC68) = BYTE2(qword_4AFCC68) & 0x9F | 0x20;
  qword_4AFCC80 = (__int64)"Allow spill in spill slot of greater size than register size";
  sub_259EC40(&qword_4AFCC60);
  __cxa_atexit(sub_1F6C9D0, &qword_4AFCC60, &off_47CFE00);
  qword_4AFCBB0 = 0;
  qword_4AFCBE0 = (__int64)&qword_4AFCBF0;
  qword_4AFCBB8 = 0;
  qword_4AFCBA0 = (__int64)&off_4A6E058;
  qword_4AFCBA8 = (unsigned int)qword_4AFCBA8 & 0x80000000;
  qword_4AFCBC0 = 0;
  qword_4AFCBC8 = 0;
  qword_4AFCBD0 = 0;
  qword_4AFCBD8 = 0;
  qword_4AFCBE8 = 0x100000000LL;
  qword_4AFCBF8 = (__int64)&qword_4AFCC10;
  qword_4AFCC00 = 1;
  dword_4AFCC08 = 0;
  byte_4AFCC0C = 1;
  v5 = sub_259AC30(sub_1F6C9D0, &qword_4AFCBF0);
  v6 = (unsigned int)qword_4AFCBE8;
  if ( HIDWORD(qword_4AFCBE8) < (unsigned __int64)(unsigned int)qword_4AFCBE8 + 1 )
  {
    v17 = v5;
    sub_25D6060(&qword_4AFCBF0 - 2, &qword_4AFCBF0, (unsigned int)qword_4AFCBE8 + 1LL, 8);
    v6 = (unsigned int)qword_4AFCBE8;
    v5 = v17;
  }
  v7 = _mm_load_si128(&v16);
  *(_QWORD *)(qword_4AFCBE0 + 8 * v6) = v5;
  word_4AFCC28 = 0;
  xmmword_4AFCC38 = 0;
  qword_4AFCC20 = (__int64)&off_4A64730;
  xmmword_4AFCC48 = (__int128)v7;
  LODWORD(qword_4AFCBE8) = qword_4AFCBE8 + 1;
  qword_4AFCBA0 = (__int64)off_4A6DFF0;
  byte_4AFCC18 = 0;
  qword_4AFCC30 = (__int64)off_49D9168;
  sub_259F400(&qword_4AFCBA0, "fixup-allow-gcptr-in-csr", 24);
  word_4AFCC28 = 256;
  byte_4AFCC18 = 0;
  qword_4AFCBC8 = 60;
  BYTE2(qword_4AFCBA8) = BYTE2(qword_4AFCBA8) & 0x9F | 0x20;
  qword_4AFCBC0 = (__int64)"Allow passing GC Pointer arguments in callee saved registers";
  sub_259EC40(&qword_4AFCBA0);
  __cxa_atexit(sub_1F6C9D0, &qword_4AFCBA0, &off_47CFE00);
  qword_4AFCAF0 = 0;
  qword_4AFCB20 = (__int64)&qword_4AFCB30;
  qword_4AFCAF8 = 0;
  qword_4AFCAE0 = (__int64)&off_4A6E058;
  qword_4AFCAE8 = (unsigned int)qword_4AFCAE8 & 0x80000000;
  qword_4AFCB00 = 0;
  qword_4AFCB08 = 0;
  qword_4AFCB10 = 0;
  qword_4AFCB18 = 0;
  qword_4AFCB28 = 0x100000000LL;
  qword_4AFCB38 = (__int64)&qword_4AFCB50;
  qword_4AFCB40 = 1;
  dword_4AFCB48 = 0;
  byte_4AFCB4C = 1;
  v8 = sub_259AC30(sub_1F6C9D0, &qword_4AFCB30);
  v9 = (unsigned int)qword_4AFCB28;
  v10 = (unsigned int)qword_4AFCB28 + 1LL;
  if ( HIDWORD(qword_4AFCB28) < v10 )
  {
    sub_25D6060(&qword_4AFCB30 - 2, &qword_4AFCB30, v10, 8);
    v9 = (unsigned int)qword_4AFCB28;
  }
  v11 = _mm_load_si128(&v16);
  *(_QWORD *)(qword_4AFCB20 + 8 * v9) = v8;
  word_4AFCB68 = 0;
  xmmword_4AFCB78 = 0;
  xmmword_4AFCB88 = (__int128)v11;
  qword_4AFCB60 = (__int64)&off_4A64730;
  LODWORD(qword_4AFCB28) = qword_4AFCB28 + 1;
  byte_4AFCB58 = 0;
  qword_4AFCAE0 = (__int64)off_4A6DFF0;
  qword_4AFCB70 = (__int64)off_49D9168;
  sub_259F400(&qword_4AFCAE0, "fixup-scs-enable-copy-propagation", 33);
  word_4AFCB68 = 257;
  byte_4AFCB58 = 1;
  qword_4AFCB08 = 56;
  BYTE2(qword_4AFCAE8) = BYTE2(qword_4AFCAE8) & 0x9F | 0x20;
  qword_4AFCB00 = (__int64)"Enable simple copy propagation during register reloading";
  sub_259EC40(&qword_4AFCAE0);
  __cxa_atexit(sub_1F6C9D0, &qword_4AFCAE0, &off_47CFE00);
  qword_4AFCA68 = 0x100000000LL;
  qword_4AFCA60 = (__int64)&qword_4AFCA70;
  qword_4AFCA30 = 0;
  qword_4AFCA20 = (__int64)&off_4A6E058;
  qword_4AFCA28 = (unsigned int)qword_4AFCA28 & 0x80000000;
  qword_4AFCA38 = 0;
  qword_4AFCA40 = 0;
  qword_4AFCA48 = 0;
  qword_4AFCA50 = 0;
  qword_4AFCA58 = 0;
  qword_4AFCA78 = (__int64)&qword_4AFCA90;
  qword_4AFCA80 = 1;
  dword_4AFCA88 = 0;
  byte_4AFCA8C = 1;
  v12 = sub_259AC30(sub_1F6C9D0, &qword_4AFCA70);
  v13 = (unsigned int)qword_4AFCA68;
  v14 = (unsigned int)qword_4AFCA68 + 1LL;
  if ( HIDWORD(qword_4AFCA68) < v14 )
  {
    sub_25D6060(&qword_4AFCA70 - 2, &qword_4AFCA70, v14, 8);
    v13 = (unsigned int)qword_4AFCA68;
  }
  *(_QWORD *)(qword_4AFCA60 + 8 * v13) = v12;
  xmmword_4AFCAB8 = 0;
  LODWORD(qword_4AFCA68) = qword_4AFCA68 + 1;
  qword_4AFCAA0 = (__int64)&off_4A64710;
  dword_4AFCA98 = 0;
  byte_4AFCAAC = 0;
  qword_4AFCA20 = (__int64)off_4A6DEB8;
  dword_4AFCAA8 = 0;
  qword_4AFCAB0 = (__int64)off_49D9228;
  xmmword_4AFCAC8 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49EB178),
                                (__m128i)(unsigned __int64)nullsub_267);
  sub_259F400(&qword_4AFCA20, "fixup-max-csr-statepoints", 25);
  qword_4AFCA48 = 62;
  BYTE2(qword_4AFCA28) = BYTE2(qword_4AFCA28) & 0x9F | 0x20;
  qword_4AFCA40 = (__int64)"Max number of statepoints allowed to pass GC Ptrs in registers";
  sub_259EC40(&qword_4AFCA20);
  return __cxa_atexit(sub_1F6C940, &qword_4AFCA20, &off_47CFE00);
}

