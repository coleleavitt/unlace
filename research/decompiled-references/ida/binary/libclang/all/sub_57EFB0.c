int sub_57EFB0()
{
  __int64 v0; // rbx
  __int64 v1; // rax
  unsigned __int64 v2; // rdx
  __m128i v3; // xmm5
  __int64 v4; // rax
  __int64 v5; // rdx
  __m128i v6; // xmm6
  __int64 v7; // rax
  __int64 v8; // rdx
  __m128i v9; // xmm7
  __int64 v10; // rax
  __int64 v11; // rdx
  __m128i v12; // xmm3
  __int64 v13; // rax
  __int64 v14; // rdx
  __m128i v15; // xmm4
  __int64 v16; // rax
  __int64 v17; // rdx
  __m128i v18; // xmm5
  __int64 v19; // rax
  __int64 v20; // rdx
  __m128i v21; // xmm6
  __int64 v22; // rax
  __int64 v23; // rdx
  __m128i v24; // xmm7
  __int64 v25; // rax
  __int64 v26; // rdx
  __m128i v27; // xmm3
  __int64 v28; // rax
  __int64 v29; // rdx
  __m128i v30; // xmm4
  __int64 v31; // r12
  __int64 v32; // rax
  unsigned __int64 v33; // rdx
  __m128i v34; // xmm5
  __m128i v36; // [rsp+0h] [rbp-68h] BYREF
  __m128i v37; // [rsp+10h] [rbp-58h] BYREF
  __int64 v38; // [rsp+28h] [rbp-40h]

  v36 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_49E8DC8), (__m128i)(unsigned __int64)nullsub_266);
  v37 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_49E8DD0), (__m128i)(unsigned __int64)nullsub_267);
  sub_2B606A0("dagcombine", 0xAu, "Controls whether a DAG combine is performed for a node", 0x36u);
  qword_4AEE870 = 0;
  qword_4AEE878 = 0;
  qword_4AEE860 = (__int64)&off_4A6E058;
  qword_4AEE868 = (unsigned int)qword_4AEE868 & 0x80000000;
  qword_4AEE880 = 0;
  qword_4AEE888 = 0;
  qword_4AEE890 = 0;
  qword_4AEE898 = 0;
  qword_4AEE8A0 = (__int64)&qword_4AEE8B0;
  qword_4AEE8A8 = 0x100000000LL;
  qword_4AEE8B8 = (__int64)&qword_4AEE8D0;
  qword_4AEE8C0 = 1;
  dword_4AEE8C8 = 0;
  byte_4AEE8CC = 1;
  v0 = sub_259AC30("dagcombine", &qword_4AEE8B0);
  v1 = (unsigned int)qword_4AEE8A8;
  v2 = (unsigned int)qword_4AEE8A8 + 1LL;
  if ( HIDWORD(qword_4AEE8A8) < v2 )
  {
    sub_25D6060(&qword_4AEE8B0 - 2, &qword_4AEE8B0, v2, 8);
    v1 = (unsigned int)qword_4AEE8A8;
  }
  v3 = _mm_load_si128(&v36);
  *(_QWORD *)(qword_4AEE8A0 + 8 * v1) = v0;
  word_4AEE8E8 = 0;
  qword_4AEE8E0 = (__int64)&off_4A64730;
  xmmword_4AEE8F8 = 0;
  xmmword_4AEE908 = (__int128)v3;
  qword_4AEE860 = (__int64)off_4A6DFF0;
  LODWORD(qword_4AEE8A8) = qword_4AEE8A8 + 1;
  byte_4AEE8D8 = 0;
  qword_4AEE8F0 = (__int64)off_49D9168;
  sub_259F400(&qword_4AEE860, "combiner-global-alias-analysis", 30);
  qword_4AEE888 = 46;
  BYTE2(qword_4AEE868) = BYTE2(qword_4AEE868) & 0x9F | 0x20;
  qword_4AEE880 = (__int64)"Enable DAG combiner's use of IR alias analysis";
  sub_259EC40(&qword_4AEE860);
  __cxa_atexit(sub_1F6C9D0, &qword_4AEE860, &off_47CFE00);
  qword_4AEE7B0 = 0;
  qword_4AEE7A0 = (__int64)&off_4A6E058;
  qword_4AEE7A8 = (unsigned int)qword_4AEE7A8 & 0x80000000;
  qword_4AEE7E0 = (__int64)&qword_4AEE7F0;
  qword_4AEE7B8 = 0;
  qword_4AEE7C0 = 0;
  qword_4AEE7C8 = 0;
  qword_4AEE7D0 = 0;
  qword_4AEE7D8 = 0;
  qword_4AEE7E8 = 0x100000000LL;
  qword_4AEE7F8 = (__int64)&qword_4AEE810;
  qword_4AEE800 = 1;
  dword_4AEE808 = 0;
  byte_4AEE80C = 1;
  v4 = sub_259AC30(sub_1F6C9D0, &qword_4AEE7F0);
  v5 = (unsigned int)qword_4AEE7E8;
  if ( HIDWORD(qword_4AEE7E8) < (unsigned __int64)(unsigned int)qword_4AEE7E8 + 1 )
  {
    v38 = v4;
    sub_25D6060(&qword_4AEE7F0 - 2, &qword_4AEE7F0, (unsigned int)qword_4AEE7E8 + 1LL, 8);
    v5 = (unsigned int)qword_4AEE7E8;
    v4 = v38;
  }
  v6 = _mm_load_si128(&v36);
  *(_QWORD *)(qword_4AEE7E0 + 8 * v5) = v4;
  qword_4AEE820 = (__int64)&off_4A64730;
  word_4AEE828 = 0;
  xmmword_4AEE838 = 0;
  qword_4AEE7A0 = (__int64)off_4A6DFF0;
  xmmword_4AEE848 = (__int128)v6;
  LODWORD(qword_4AEE7E8) = qword_4AEE7E8 + 1;
  qword_4AEE830 = (__int64)off_49D9168;
  byte_4AEE818 = 0;
  sub_259F400(&qword_4AEE7A0, "combiner-use-tbaa", 17);
  byte_4AEE818 = 1;
  qword_4AEE7C8 = 33;
  BYTE2(qword_4AEE7A8) = BYTE2(qword_4AEE7A8) & 0x9F | 0x20;
  word_4AEE828 = 257;
  qword_4AEE7C0 = (__int64)"Enable DAG combiner's use of TBAA";
  sub_259EC40(&qword_4AEE7A0);
  __cxa_atexit(sub_1F6C9D0, &qword_4AEE7A0, &off_47CFE00);
  qword_4AEE6F0 = 0;
  qword_4AEE6E0 = (__int64)&off_4A6E058;
  qword_4AEE6E8 = (unsigned int)qword_4AEE6E8 & 0x80000000;
  qword_4AEE720 = (__int64)&qword_4AEE730;
  qword_4AEE6F8 = 0;
  qword_4AEE700 = 0;
  qword_4AEE708 = 0;
  qword_4AEE710 = 0;
  qword_4AEE718 = 0;
  qword_4AEE728 = 0x100000000LL;
  qword_4AEE738 = (__int64)&qword_4AEE750;
  qword_4AEE740 = 1;
  dword_4AEE748 = 0;
  byte_4AEE74C = 1;
  v7 = sub_259AC30(sub_1F6C9D0, &qword_4AEE730);
  v8 = (unsigned int)qword_4AEE728;
  if ( HIDWORD(qword_4AEE728) < (unsigned __int64)(unsigned int)qword_4AEE728 + 1 )
  {
    v38 = v7;
    sub_25D6060(&qword_4AEE730 - 2, &qword_4AEE730, (unsigned int)qword_4AEE728 + 1LL, 8);
    v8 = (unsigned int)qword_4AEE728;
    v7 = v38;
  }
  v9 = _mm_load_si128(&v36);
  *(_QWORD *)(qword_4AEE720 + 8 * v8) = v7;
  qword_4AEE760 = (__int64)&off_4A64730;
  word_4AEE768 = 0;
  xmmword_4AEE778 = 0;
  qword_4AEE6E0 = (__int64)off_4A6DFF0;
  xmmword_4AEE788 = (__int128)v9;
  LODWORD(qword_4AEE728) = qword_4AEE728 + 1;
  qword_4AEE770 = (__int64)off_49D9168;
  byte_4AEE758 = 0;
  sub_259F400(&qword_4AEE6E0, "combiner-stress-load-slicing", 28);
  qword_4AEE708 = 46;
  byte_4AEE758 = 0;
  BYTE2(qword_4AEE6E8) = BYTE2(qword_4AEE6E8) & 0x9F | 0x20;
  qword_4AEE700 = (__int64)"Bypass the profitability model of load slicing";
  word_4AEE768 = 256;
  sub_259EC40(&qword_4AEE6E0);
  __cxa_atexit(sub_1F6C9D0, &qword_4AEE6E0, &off_47CFE00);
  qword_4AEE630 = 0;
  qword_4AEE620 = (__int64)&off_4A6E058;
  qword_4AEE628 = (unsigned int)qword_4AEE628 & 0x80000000;
  qword_4AEE660 = (__int64)&qword_4AEE670;
  qword_4AEE638 = 0;
  qword_4AEE640 = 0;
  qword_4AEE648 = 0;
  qword_4AEE650 = 0;
  qword_4AEE658 = 0;
  qword_4AEE668 = 0x100000000LL;
  qword_4AEE678 = (__int64)&qword_4AEE690;
  qword_4AEE680 = 1;
  dword_4AEE688 = 0;
  byte_4AEE68C = 1;
  v10 = sub_259AC30(sub_1F6C9D0, &qword_4AEE670);
  v11 = (unsigned int)qword_4AEE668;
  if ( HIDWORD(qword_4AEE668) < (unsigned __int64)(unsigned int)qword_4AEE668 + 1 )
  {
    v38 = v10;
    sub_25D6060(&qword_4AEE670 - 2, &qword_4AEE670, (unsigned int)qword_4AEE668 + 1LL, 8);
    v11 = (unsigned int)qword_4AEE668;
    v10 = v38;
  }
  v12 = _mm_load_si128(&v36);
  *(_QWORD *)(qword_4AEE660 + 8 * v11) = v10;
  qword_4AEE6A0 = (__int64)&off_4A64730;
  word_4AEE6A8 = 0;
  xmmword_4AEE6B8 = 0;
  qword_4AEE620 = (__int64)off_4A6DFF0;
  xmmword_4AEE6C8 = (__int128)v12;
  LODWORD(qword_4AEE668) = qword_4AEE668 + 1;
  qword_4AEE6B0 = (__int64)off_49D9168;
  byte_4AEE698 = 0;
  sub_259F400(&qword_4AEE620, "combiner-split-load-index", 25);
  byte_4AEE698 = 1;
  qword_4AEE648 = 42;
  BYTE2(qword_4AEE628) = BYTE2(qword_4AEE628) & 0x9F | 0x20;
  word_4AEE6A8 = 257;
  qword_4AEE640 = (__int64)"DAG combiner may split indexing from loads";
  sub_259EC40(&qword_4AEE620);
  __cxa_atexit(sub_1F6C9D0, &qword_4AEE620, &off_47CFE00);
  qword_4AEE570 = 0;
  qword_4AEE560 = (__int64)&off_4A6E058;
  qword_4AEE568 = (unsigned int)qword_4AEE568 & 0x80000000;
  qword_4AEE5A0 = (__int64)&qword_4AEE5B0;
  qword_4AEE578 = 0;
  qword_4AEE580 = 0;
  qword_4AEE588 = 0;
  qword_4AEE590 = 0;
  qword_4AEE598 = 0;
  qword_4AEE5A8 = 0x100000000LL;
  qword_4AEE5B8 = (__int64)&qword_4AEE5D0;
  qword_4AEE5C0 = 1;
  dword_4AEE5C8 = 0;
  byte_4AEE5CC = 1;
  v13 = sub_259AC30(sub_1F6C9D0, &qword_4AEE5B0);
  v14 = (unsigned int)qword_4AEE5A8;
  if ( HIDWORD(qword_4AEE5A8) < (unsigned __int64)(unsigned int)qword_4AEE5A8 + 1 )
  {
    v38 = v13;
    sub_25D6060(&qword_4AEE5B0 - 2, &qword_4AEE5B0, (unsigned int)qword_4AEE5A8 + 1LL, 8);
    v14 = (unsigned int)qword_4AEE5A8;
    v13 = v38;
  }
  v15 = _mm_load_si128(&v36);
  *(_QWORD *)(qword_4AEE5A0 + 8 * v14) = v13;
  qword_4AEE5E0 = (__int64)&off_4A64730;
  word_4AEE5E8 = 0;
  xmmword_4AEE5F8 = 0;
  qword_4AEE560 = (__int64)off_4A6DFF0;
  xmmword_4AEE608 = (__int128)v15;
  LODWORD(qword_4AEE5A8) = qword_4AEE5A8 + 1;
  qword_4AEE5F0 = (__int64)off_49D9168;
  byte_4AEE5D8 = 0;
  sub_259F400(&qword_4AEE560, "combiner-store-merging", 22);
  byte_4AEE5D8 = 1;
  qword_4AEE588 = 62;
  BYTE2(qword_4AEE568) = BYTE2(qword_4AEE568) & 0x9F | 0x20;
  word_4AEE5E8 = 257;
  qword_4AEE580 = (__int64)"DAG combiner enable merging multiple stores into a wider store";
  sub_259EC40(&qword_4AEE560);
  __cxa_atexit(sub_1F6C9D0, &qword_4AEE560, &off_47CFE00);
  qword_4AEE4B0 = 0;
  qword_4AEE4A0 = (__int64)&off_4A6E058;
  qword_4AEE4A8 = (unsigned int)qword_4AEE4A8 & 0x80000000;
  qword_4AEE4E0 = (__int64)&qword_4AEE4F0;
  qword_4AEE4B8 = 0;
  qword_4AEE4C0 = 0;
  qword_4AEE4C8 = 0;
  qword_4AEE4D0 = 0;
  qword_4AEE4D8 = 0;
  qword_4AEE4E8 = 0x100000000LL;
  qword_4AEE4F8 = (__int64)&qword_4AEE510;
  qword_4AEE500 = 1;
  dword_4AEE508 = 0;
  byte_4AEE50C = 1;
  v16 = sub_259AC30(sub_1F6C9D0, &qword_4AEE4F0);
  v17 = (unsigned int)qword_4AEE4E8;
  if ( HIDWORD(qword_4AEE4E8) < (unsigned __int64)(unsigned int)qword_4AEE4E8 + 1 )
  {
    v38 = v16;
    sub_25D6060(&qword_4AEE4F0 - 2, &qword_4AEE4F0, (unsigned int)qword_4AEE4E8 + 1LL, 8);
    v17 = (unsigned int)qword_4AEE4E8;
    v16 = v38;
  }
  v18 = _mm_load_si128(&v37);
  *(_QWORD *)(qword_4AEE4E0 + 8 * v17) = v16;
  xmmword_4AEE538 = 0;
  xmmword_4AEE548 = (__int128)v18;
  qword_4AEE520 = (__int64)&off_4A64710;
  LODWORD(qword_4AEE4E8) = qword_4AEE4E8 + 1;
  byte_4AEE52C = 0;
  qword_4AEE4A0 = (__int64)off_4A6DEB8;
  dword_4AEE518 = 0;
  dword_4AEE528 = 0;
  qword_4AEE530 = (__int64)off_49D9228;
  sub_259F400(&qword_4AEE4A0, "combiner-tokenfactor-inline-limit", 33);
  dword_4AEE518 = 2048;
  byte_4AEE52C = 1;
  dword_4AEE528 = 2048;
  qword_4AEE4C8 = 56;
  BYTE2(qword_4AEE4A8) = BYTE2(qword_4AEE4A8) & 0x9F | 0x20;
  qword_4AEE4C0 = (__int64)"Limit the number of operands to inline for Token Factors";
  sub_259EC40(&qword_4AEE4A0);
  __cxa_atexit(sub_1F6C940, &qword_4AEE4A0, &off_47CFE00);
  qword_4AEE3F0 = 0;
  qword_4AEE3E0 = (__int64)&off_4A6E058;
  qword_4AEE3E8 = (unsigned int)qword_4AEE3E8 & 0x80000000;
  qword_4AEE420 = (__int64)&qword_4AEE430;
  qword_4AEE3F8 = 0;
  qword_4AEE400 = 0;
  qword_4AEE408 = 0;
  qword_4AEE410 = 0;
  qword_4AEE418 = 0;
  qword_4AEE428 = 0x100000000LL;
  qword_4AEE438 = (__int64)&qword_4AEE450;
  qword_4AEE440 = 1;
  dword_4AEE448 = 0;
  byte_4AEE44C = 1;
  v19 = sub_259AC30(sub_1F6C940, &qword_4AEE430);
  v20 = (unsigned int)qword_4AEE428;
  if ( HIDWORD(qword_4AEE428) < (unsigned __int64)(unsigned int)qword_4AEE428 + 1 )
  {
    v38 = v19;
    sub_25D6060(&qword_4AEE430 - 2, &qword_4AEE430, (unsigned int)qword_4AEE428 + 1LL, 8);
    v20 = (unsigned int)qword_4AEE428;
    v19 = v38;
  }
  v21 = _mm_load_si128(&v37);
  *(_QWORD *)(qword_4AEE420 + 8 * v20) = v19;
  xmmword_4AEE478 = 0;
  xmmword_4AEE488 = (__int128)v21;
  qword_4AEE460 = (__int64)&off_4A64710;
  LODWORD(qword_4AEE428) = qword_4AEE428 + 1;
  byte_4AEE46C = 0;
  qword_4AEE3E0 = (__int64)off_4A6DEB8;
  dword_4AEE458 = 0;
  dword_4AEE468 = 0;
  qword_4AEE470 = (__int64)off_49D9228;
  sub_259F400(&qword_4AEE3E0, "combiner-store-merge-dependence-limit", 37);
  dword_4AEE458 = 10;
  byte_4AEE46C = 1;
  dword_4AEE468 = 10;
  qword_4AEE408 = 107;
  BYTE2(qword_4AEE3E8) = BYTE2(qword_4AEE3E8) & 0x9F | 0x20;
  qword_4AEE400 = (__int64)"Limit the number of times for the same StoreNode and RootNode to bail out in store merging dependence check";
  sub_259EC40(&qword_4AEE3E0);
  __cxa_atexit(sub_1F6C940, &qword_4AEE3E0, &off_47CFE00);
  qword_4AEE330 = 0;
  qword_4AEE320 = (__int64)&off_4A6E058;
  qword_4AEE328 = (unsigned int)qword_4AEE328 & 0x80000000;
  qword_4AEE360 = (__int64)&qword_4AEE370;
  qword_4AEE338 = 0;
  qword_4AEE340 = 0;
  qword_4AEE348 = 0;
  qword_4AEE350 = 0;
  qword_4AEE358 = 0;
  qword_4AEE368 = 0x100000000LL;
  qword_4AEE378 = (__int64)&qword_4AEE390;
  qword_4AEE380 = 1;
  dword_4AEE388 = 0;
  byte_4AEE38C = 1;
  v22 = sub_259AC30(sub_1F6C940, &qword_4AEE370);
  v23 = (unsigned int)qword_4AEE368;
  if ( HIDWORD(qword_4AEE368) < (unsigned __int64)(unsigned int)qword_4AEE368 + 1 )
  {
    v37.m128i_i64[0] = v22;
    sub_25D6060(&qword_4AEE370 - 2, &qword_4AEE370, (unsigned int)qword_4AEE368 + 1LL, 8);
    v23 = (unsigned int)qword_4AEE368;
    v22 = v37.m128i_i64[0];
  }
  v24 = _mm_load_si128(&v36);
  *(_QWORD *)(qword_4AEE360 + 8 * v23) = v22;
  qword_4AEE3A0 = (__int64)&off_4A64730;
  word_4AEE3A8 = 0;
  xmmword_4AEE3B8 = 0;
  qword_4AEE320 = (__int64)off_4A6DFF0;
  xmmword_4AEE3C8 = (__int128)v24;
  LODWORD(qword_4AEE368) = qword_4AEE368 + 1;
  qword_4AEE3B0 = (__int64)off_49D9168;
  byte_4AEE398 = 0;
  sub_259F400(&qword_4AEE320, "combiner-reduce-load-op-store-width", 35);
  byte_4AEE398 = 1;
  qword_4AEE348 = 64;
  BYTE2(qword_4AEE328) = BYTE2(qword_4AEE328) & 0x9F | 0x20;
  word_4AEE3A8 = 257;
  qword_4AEE340 = (__int64)"DAG combiner enable reducing the width of load/op/store sequence";
  sub_259EC40(&qword_4AEE320);
  __cxa_atexit(sub_1F6C9D0, &qword_4AEE320, &off_47CFE00);
  qword_4AEE270 = 0;
  qword_4AEE260 = (__int64)&off_4A6E058;
  qword_4AEE268 = (unsigned int)qword_4AEE268 & 0x80000000;
  qword_4AEE2A0 = (__int64)&qword_4AEE2B0;
  qword_4AEE278 = 0;
  qword_4AEE280 = 0;
  qword_4AEE288 = 0;
  qword_4AEE290 = 0;
  qword_4AEE298 = 0;
  qword_4AEE2A8 = 0x100000000LL;
  qword_4AEE2B8 = (__int64)&qword_4AEE2D0;
  qword_4AEE2C0 = 1;
  dword_4AEE2C8 = 0;
  byte_4AEE2CC = 1;
  v25 = sub_259AC30(sub_1F6C9D0, &qword_4AEE2B0);
  v26 = (unsigned int)qword_4AEE2A8;
  if ( HIDWORD(qword_4AEE2A8) < (unsigned __int64)(unsigned int)qword_4AEE2A8 + 1 )
  {
    v37.m128i_i64[0] = v25;
    sub_25D6060(&qword_4AEE2B0 - 2, &qword_4AEE2B0, (unsigned int)qword_4AEE2A8 + 1LL, 8);
    v26 = (unsigned int)qword_4AEE2A8;
    v25 = v37.m128i_i64[0];
  }
  v27 = _mm_load_si128(&v36);
  *(_QWORD *)(qword_4AEE2A0 + 8 * v26) = v25;
  qword_4AEE2E0 = (__int64)&off_4A64730;
  word_4AEE2E8 = 0;
  xmmword_4AEE2F8 = 0;
  qword_4AEE260 = (__int64)off_4A6DFF0;
  xmmword_4AEE308 = (__int128)v27;
  LODWORD(qword_4AEE2A8) = qword_4AEE2A8 + 1;
  qword_4AEE2F0 = (__int64)off_49D9168;
  byte_4AEE2D8 = 0;
  sub_259F400(&qword_4AEE260, "combiner-reduce-load-op-store-width-force-narrowing-profitable", 62);
  byte_4AEE2D8 = 0;
  qword_4AEE288 = 109;
  BYTE2(qword_4AEE268) = BYTE2(qword_4AEE268) & 0x9F | 0x20;
  word_4AEE2E8 = 256;
  qword_4AEE280 = (__int64)"DAG combiner force override the narrowing profitable check when reducing the width of load/op"
                           "/store sequences";
  sub_259EC40(&qword_4AEE260);
  __cxa_atexit(sub_1F6C9D0, &qword_4AEE260, &off_47CFE00);
  qword_4AEE1B0 = 0;
  qword_4AEE1A0 = (__int64)&off_4A6E058;
  qword_4AEE1A8 = (unsigned int)qword_4AEE1A8 & 0x80000000;
  qword_4AEE1E0 = (__int64)&qword_4AEE1F0;
  qword_4AEE1B8 = 0;
  qword_4AEE1C0 = 0;
  qword_4AEE1C8 = 0;
  qword_4AEE1D0 = 0;
  qword_4AEE1D8 = 0;
  qword_4AEE1E8 = 0x100000000LL;
  qword_4AEE1F8 = (__int64)&qword_4AEE210;
  qword_4AEE200 = 1;
  dword_4AEE208 = 0;
  byte_4AEE20C = 1;
  v28 = sub_259AC30(sub_1F6C9D0, &qword_4AEE1F0);
  v29 = (unsigned int)qword_4AEE1E8;
  if ( HIDWORD(qword_4AEE1E8) < (unsigned __int64)(unsigned int)qword_4AEE1E8 + 1 )
  {
    v37.m128i_i64[0] = v28;
    sub_25D6060(&qword_4AEE1F0 - 2, &qword_4AEE1F0, (unsigned int)qword_4AEE1E8 + 1LL, 8);
    v29 = (unsigned int)qword_4AEE1E8;
    v28 = v37.m128i_i64[0];
  }
  v30 = _mm_load_si128(&v36);
  *(_QWORD *)(qword_4AEE1E0 + 8 * v29) = v28;
  qword_4AEE220 = (__int64)&off_4A64730;
  word_4AEE228 = 0;
  xmmword_4AEE238 = 0;
  qword_4AEE1A0 = (__int64)off_4A6DFF0;
  xmmword_4AEE248 = (__int128)v30;
  LODWORD(qword_4AEE1E8) = qword_4AEE1E8 + 1;
  qword_4AEE230 = (__int64)off_49D9168;
  byte_4AEE218 = 0;
  sub_259F400(&qword_4AEE1A0, "combiner-shrink-load-replace-store-with-store", 45);
  byte_4AEE218 = 1;
  qword_4AEE1C8 = 68;
  BYTE2(qword_4AEE1A8) = BYTE2(qword_4AEE1A8) & 0x9F | 0x20;
  word_4AEE228 = 257;
  qword_4AEE1C0 = (__int64)"DAG combiner enable load/<replace bytes>/store with a narrower store";
  sub_259EC40(&qword_4AEE1A0);
  __cxa_atexit(sub_1F6C9D0, &qword_4AEE1A0, &off_47CFE00);
  qword_4AEE128 = 0x100000000LL;
  qword_4AEE0E0 = (__int64)&off_4A6E058;
  qword_4AEE0E8 = (unsigned int)qword_4AEE0E8 & 0x80000000;
  qword_4AEE120 = (__int64)&qword_4AEE130;
  qword_4AEE0F0 = 0;
  qword_4AEE0F8 = 0;
  qword_4AEE100 = 0;
  qword_4AEE108 = 0;
  qword_4AEE110 = 0;
  qword_4AEE118 = 0;
  qword_4AEE138 = (__int64)&qword_4AEE150;
  qword_4AEE140 = 1;
  dword_4AEE148 = 0;
  byte_4AEE14C = 1;
  v31 = sub_259AC30(sub_1F6C9D0, &qword_4AEE130);
  v32 = (unsigned int)qword_4AEE128;
  v33 = (unsigned int)qword_4AEE128 + 1LL;
  if ( HIDWORD(qword_4AEE128) < v33 )
  {
    sub_25D6060(&qword_4AEE130 - 2, &qword_4AEE130, v33, 8);
    v32 = (unsigned int)qword_4AEE128;
  }
  v34 = _mm_load_si128(&v36);
  *(_QWORD *)(qword_4AEE120 + 8 * v32) = v31;
  word_4AEE168 = 0;
  qword_4AEE160 = (__int64)&off_4A64730;
  xmmword_4AEE178 = 0;
  xmmword_4AEE188 = (__int128)v34;
  qword_4AEE0E0 = (__int64)off_4A6DFF0;
  LODWORD(qword_4AEE128) = qword_4AEE128 + 1;
  byte_4AEE158 = 0;
  qword_4AEE170 = (__int64)off_49D9168;
  sub_259F400(&qword_4AEE0E0, "combiner-vector-fcopysign-extend-round", 38);
  byte_4AEE158 = 0;
  qword_4AEE108 = 64;
  BYTE2(qword_4AEE0E8) = BYTE2(qword_4AEE0E8) & 0x9F | 0x20;
  word_4AEE168 = 256;
  qword_4AEE100 = (__int64)"Enable merging extends and rounds into FCOPYSIGN on vector types";
  sub_259EC40(&qword_4AEE0E0);
  return __cxa_atexit(sub_1F6C9D0, &qword_4AEE0E0, &off_47CFE00);
}

