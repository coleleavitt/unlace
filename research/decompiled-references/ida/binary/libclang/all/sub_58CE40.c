int __fastcall sub_58CE40(__int64 a1)
{
  __m128i v1; // xmm0
  __m128i v2; // xmm0
  __m128i v3; // xmm0
  __m128i v4; // xmm0
  __m128i v5; // xmm0
  __m128i v6; // xmm0
  __m128i v7; // xmm0
  __int64 v8; // rbx
  __int64 v9; // rax
  unsigned __int64 v10; // rdx
  __m128i v11; // xmm7
  __int64 v12; // r15
  __int64 v13; // rax
  unsigned __int64 v14; // rdx
  __m128i v15; // xmm5
  __int64 v16; // r15
  __int64 v17; // rax
  unsigned __int64 v18; // rdx
  __m128i v19; // xmm6
  __int64 v20; // r15
  __int64 v21; // rax
  unsigned __int64 v22; // rdx
  __m128i v23; // xmm7
  __int64 v24; // rax
  __int64 v25; // rdx
  __m128i v26; // xmm4
  __int64 v27; // rax
  __int64 v28; // rdx
  __m128i v29; // xmm5
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rdx
  __m128i v34; // xmm7
  __int64 v35; // rax
  __int64 v36; // rdx
  __m128i v37; // xmm1
  __int64 v38; // r12
  __int64 v39; // rax
  unsigned __int64 v40; // rdx
  __m128i v41; // xmm2
  __int64 v42; // rdi
  __m128i v44; // [rsp+0h] [rbp-1A8h] BYREF
  __m128i v45; // [rsp+10h] [rbp-198h] BYREF
  __m128i v46; // [rsp+20h] [rbp-188h] BYREF
  int v47; // [rsp+30h] [rbp-178h] BYREF
  int v48; // [rsp+34h] [rbp-174h] BYREF
  int *v49; // [rsp+38h] [rbp-170h] BYREF
  __m128i v50; // [rsp+40h] [rbp-168h] BYREF
  __m128i v51; // [rsp+50h] [rbp-158h] BYREF
  __m128i v52; // [rsp+60h] [rbp-148h] BYREF
  __m128i v53; // [rsp+70h] [rbp-138h] BYREF
  __m128i v54; // [rsp+80h] [rbp-128h] BYREF
  __m128i v55; // [rsp+90h] [rbp-118h] BYREF
  __m128i v56; // [rsp+A0h] [rbp-108h] BYREF
  __int64 v57; // [rsp+B0h] [rbp-F8h]
  void *ptr[2]; // [rsp+C0h] [rbp-E8h] BYREF
  _OWORD v59[7]; // [rsp+D0h] [rbp-D8h] BYREF
  __int64 v60; // [rsp+140h] [rbp-68h]

  v47 = 2;
  v50.m128i_i64[1] = 7;
  v45 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_49EA170), (__m128i)(unsigned __int64)nullsub_267);
  v49 = &v47;
  v50.m128i_i64[0] = (__int64)"default";
  v51.m128i_i64[1] = (__int64)"Default";
  v52.m128i_i64[1] = (__int64)"size";
  v54.m128i_i64[0] = (__int64)"Optimize for size";
  v44 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_49EA178), (__m128i)(unsigned __int64)nullsub_266);
  v46 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&off_4A7CF70, (__m128i)(unsigned __int64)&qword_4AF62C0);
  v51.m128i_i32[0] = 0;
  v52.m128i_i64[0] = 7;
  v53.m128i_i64[0] = 4;
  v53.m128i_i32[2] = 1;
  v54.m128i_i64[1] = 17;
  v55.m128i_i64[0] = (__int64)"speed";
  v1 = _mm_load_si128(&v50);
  v56.m128i_i64[1] = (__int64)"Optimize for speed";
  v59[0] = v1;
  v2 = _mm_load_si128(&v51);
  v55.m128i_i64[1] = 5;
  v59[1] = v2;
  v3 = _mm_load_si128(&v52);
  v56.m128i_i32[0] = 2;
  v59[2] = v3;
  v4 = _mm_load_si128(&v53);
  ptr[1] = (void *)0x400000003LL;
  v59[3] = v4;
  v5 = _mm_load_si128(&v54);
  v50.m128i_i64[0] = (__int64)"Spill mode for splitting live ranges";
  v59[4] = v5;
  v6 = _mm_load_si128(&v55);
  qword_4AF62C0 = (__int64)&off_4A6E058;
  v59[5] = v6;
  v7 = _mm_load_si128(&v56);
  qword_4AF62C8 = (unsigned int)qword_4AF62C8 & 0x80000000;
  v59[6] = v7;
  v57 = 18;
  ptr[0] = v59;
  v60 = 18;
  v50.m128i_i64[1] = 36;
  v48 = 1;
  qword_4AF62D0 = 0;
  qword_4AF62D8 = 0;
  qword_4AF62E0 = 0;
  qword_4AF62E8 = 0;
  qword_4AF62F0 = 0;
  qword_4AF6300 = (__int64)&qword_4AF6310;
  qword_4AF62F8 = 0;
  qword_4AF6308 = 0x100000000LL;
  qword_4AF6318 = (__int64)&qword_4AF6330;
  qword_4AF6320 = 1;
  dword_4AF6328 = 0;
  byte_4AF632C = 1;
  v8 = sub_259AC30(a1, &qword_4AF6310);
  v9 = (unsigned int)qword_4AF6308;
  v10 = (unsigned int)qword_4AF6308 + 1LL;
  if ( HIDWORD(qword_4AF6308) < v10 )
  {
    sub_25D6060(&qword_4AF6300, &qword_4AF6310, v10, 8);
    v9 = (unsigned int)qword_4AF6308;
  }
  v11 = _mm_load_si128(&v46);
  *(_QWORD *)(qword_4AF6300 + 8 * v9) = v8;
  xmmword_4AF64F0 = 0;
  xmmword_4AF6350 = (__int128)v11;
  qword_4AF6340 = (__int64)off_4A7CF50;
  LODWORD(qword_4AF6308) = qword_4AF6308 + 1;
  byte_4AF634C = 0;
  qword_4AF62C0 = (__int64)&off_4A7CFC0;
  qword_4AF6360 = (__int64)qword_4AF6370;
  dword_4AF6338 = 0;
  qword_4AF6368 = 0x800000000LL;
  dword_4AF6348 = 0;
  xmmword_4AF6500 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49EA180),
                                (__m128i)(unsigned __int64)nullsub_559);
  sub_31F5E80(
    &qword_4AF62C0,
    "split-spill-mode",
    &v48,
    &v50,
    ptr,
    &v49,
    v44.m128i_i64[0],
    v44.m128i_i64[1],
    v45.m128i_i64[0],
    v45.m128i_i64[1],
    v46.m128i_i64[0],
    v46.m128i_i64[1]);
  sub_259EC40(&qword_4AF62C0);
  if ( ptr[0] != v59 )
    free(ptr[0]);
  __cxa_atexit(sub_31EAF80, &qword_4AF62C0, &off_47CFE00);
  qword_4AF6210 = 0;
  qword_4AF6200 = (__int64)&off_4A6E058;
  qword_4AF6208 = (unsigned int)qword_4AF6208 & 0x80000000;
  qword_4AF6240 = (__int64)&qword_4AF6250;
  qword_4AF6218 = 0;
  qword_4AF6220 = 0;
  qword_4AF6228 = 0;
  qword_4AF6230 = 0;
  qword_4AF6238 = 0;
  qword_4AF6248 = 0x100000000LL;
  qword_4AF6258 = (__int64)&qword_4AF6270;
  qword_4AF6260 = 1;
  dword_4AF6268 = 0;
  byte_4AF626C = 1;
  v12 = sub_259AC30(sub_31EAF80, &qword_4AF6250);
  v13 = (unsigned int)qword_4AF6248;
  v14 = (unsigned int)qword_4AF6248 + 1LL;
  if ( HIDWORD(qword_4AF6248) < v14 )
  {
    sub_25D6060(&qword_4AF6250 - 2, &qword_4AF6250, v14, 8);
    v13 = (unsigned int)qword_4AF6248;
  }
  v15 = _mm_load_si128(&v45);
  *(_QWORD *)(qword_4AF6240 + 8 * v13) = v12;
  xmmword_4AF6298 = 0;
  xmmword_4AF62A8 = (__int128)v15;
  qword_4AF6280 = (__int64)&off_4A64710;
  LODWORD(qword_4AF6248) = qword_4AF6248 + 1;
  byte_4AF628C = 0;
  qword_4AF6200 = (__int64)off_4A6DEB8;
  dword_4AF6278 = 0;
  dword_4AF6288 = 0;
  qword_4AF6290 = (__int64)off_49D9228;
  sub_259F400(&qword_4AF6200, "lcr-max-depth", 13);
  qword_4AF6228 = 32;
  dword_4AF6278 = 5;
  byte_4AF628C = 1;
  dword_4AF6288 = 5;
  BYTE2(qword_4AF6208) = BYTE2(qword_4AF6208) & 0x9F | 0x20;
  qword_4AF6220 = (__int64)"Last chance recoloring max depth";
  sub_259EC40(&qword_4AF6200);
  __cxa_atexit(sub_1F6C940, &qword_4AF6200, &off_47CFE00);
  qword_4AF6150 = 0;
  qword_4AF6140 = (__int64)&off_4A6E058;
  qword_4AF6148 = (unsigned int)qword_4AF6148 & 0x80000000;
  qword_4AF6180 = (__int64)&qword_4AF6190;
  qword_4AF6158 = 0;
  qword_4AF6160 = 0;
  qword_4AF6168 = 0;
  qword_4AF6170 = 0;
  qword_4AF6178 = 0;
  qword_4AF6188 = 0x100000000LL;
  qword_4AF6198 = (__int64)&qword_4AF61B0;
  qword_4AF61A0 = 1;
  dword_4AF61A8 = 0;
  byte_4AF61AC = 1;
  v16 = sub_259AC30(sub_1F6C940, &qword_4AF6190);
  v17 = (unsigned int)qword_4AF6188;
  v18 = (unsigned int)qword_4AF6188 + 1LL;
  if ( HIDWORD(qword_4AF6188) < v18 )
  {
    sub_25D6060(&qword_4AF6190 - 2, &qword_4AF6190, v18, 8);
    v17 = (unsigned int)qword_4AF6188;
  }
  v19 = _mm_load_si128(&v45);
  *(_QWORD *)(qword_4AF6180 + 8 * v17) = v16;
  xmmword_4AF61D8 = 0;
  xmmword_4AF61E8 = (__int128)v19;
  qword_4AF61C0 = (__int64)&off_4A64710;
  LODWORD(qword_4AF6188) = qword_4AF6188 + 1;
  byte_4AF61CC = 0;
  qword_4AF6140 = (__int64)off_4A6DEB8;
  dword_4AF61B8 = 0;
  dword_4AF61C8 = 0;
  qword_4AF61D0 = (__int64)off_49D9228;
  sub_259F400(&qword_4AF6140, "lcr-max-interf", 14);
  qword_4AF6168 = 74;
  dword_4AF61B8 = 8;
  byte_4AF61CC = 1;
  dword_4AF61C8 = 8;
  BYTE2(qword_4AF6148) = BYTE2(qword_4AF6148) & 0x9F | 0x20;
  qword_4AF6160 = (__int64)"Last chance recoloring maximum number of considered interference at a time";
  sub_259EC40(&qword_4AF6140);
  __cxa_atexit(sub_1F6C940, &qword_4AF6140, &off_47CFE00);
  qword_4AF6090 = 0;
  qword_4AF6080 = (__int64)&off_4A6E058;
  qword_4AF6088 = (unsigned int)qword_4AF6088 & 0x80000000;
  qword_4AF60C0 = (__int64)&qword_4AF60D0;
  qword_4AF6098 = 0;
  qword_4AF60A0 = 0;
  qword_4AF60A8 = 0;
  qword_4AF60B0 = 0;
  qword_4AF60B8 = 0;
  qword_4AF60C8 = 0x100000000LL;
  qword_4AF60D8 = (__int64)&qword_4AF60F0;
  qword_4AF60E0 = 1;
  dword_4AF60E8 = 0;
  byte_4AF60EC = 1;
  v20 = sub_259AC30(sub_1F6C940, &qword_4AF60D0);
  v21 = (unsigned int)qword_4AF60C8;
  v22 = (unsigned int)qword_4AF60C8 + 1LL;
  if ( HIDWORD(qword_4AF60C8) < v22 )
  {
    sub_25D6060(&qword_4AF60D0 - 2, &qword_4AF60D0, v22, 8);
    v21 = (unsigned int)qword_4AF60C8;
  }
  v23 = _mm_load_si128(&v44);
  *(_QWORD *)(qword_4AF60C0 + 8 * v21) = v20;
  word_4AF6108 = 0;
  xmmword_4AF6118 = 0;
  qword_4AF6100 = (__int64)&off_4A64730;
  xmmword_4AF6128 = (__int128)v23;
  LODWORD(qword_4AF60C8) = qword_4AF60C8 + 1;
  qword_4AF6080 = (__int64)off_4A6DFF0;
  byte_4AF60F8 = 0;
  qword_4AF6110 = (__int64)off_49D9168;
  sub_259F400(&qword_4AF6080, "exhaustive-register-search", 26);
  qword_4AF60A8 = 102;
  qword_4AF60A0 = (__int64)"Exhaustive Search for registers bypassing the depth and interference cutoffs of last chance recoloring";
  BYTE2(qword_4AF6088) = BYTE2(qword_4AF6088) & 0x9F | 0x20;
  sub_259EC40(&qword_4AF6080);
  __cxa_atexit(sub_1F6C9D0, &qword_4AF6080, &off_47CFE00);
  qword_4AF5FD0 = 0;
  qword_4AF5FC0 = (__int64)&off_4A6E058;
  qword_4AF5FC8 = (unsigned int)qword_4AF5FC8 & 0x80000000;
  qword_4AF6000 = (__int64)&qword_4AF6010;
  qword_4AF5FD8 = 0;
  qword_4AF5FE0 = 0;
  qword_4AF5FE8 = 0;
  qword_4AF5FF0 = 0;
  qword_4AF5FF8 = 0;
  qword_4AF6008 = 0x100000000LL;
  qword_4AF6018 = (__int64)&qword_4AF6030;
  qword_4AF6020 = 1;
  dword_4AF6028 = 0;
  byte_4AF602C = 1;
  v24 = sub_259AC30(sub_1F6C9D0, &qword_4AF6010);
  v25 = (unsigned int)qword_4AF6008;
  if ( HIDWORD(qword_4AF6008) < (unsigned __int64)(unsigned int)qword_4AF6008 + 1 )
  {
    v46.m128i_i64[0] = v24;
    sub_25D6060(&qword_4AF6010 - 2, &qword_4AF6010, (unsigned int)qword_4AF6008 + 1LL, 8);
    v25 = (unsigned int)qword_4AF6008;
    v24 = v46.m128i_i64[0];
  }
  v26 = _mm_load_si128(&v44);
  *(_QWORD *)(qword_4AF6000 + 8 * v25) = v24;
  word_4AF6048 = 0;
  xmmword_4AF6058 = 0;
  qword_4AF6040 = (__int64)&off_4A64730;
  xmmword_4AF6068 = (__int128)v26;
  LODWORD(qword_4AF6008) = qword_4AF6008 + 1;
  qword_4AF5FC0 = (__int64)off_4A6DFF0;
  byte_4AF6038 = 0;
  qword_4AF6050 = (__int64)off_49D9168;
  sub_259F400(&qword_4AF5FC0, "enable-deferred-spilling", 24);
  word_4AF6048 = 256;
  byte_4AF6038 = 0;
  qword_4AF5FE8 = 218;
  BYTE2(qword_4AF5FC8) = BYTE2(qword_4AF5FC8) & 0x9F | 0x20;
  qword_4AF5FE0 = (__int64)"Instead of spilling a variable right away, defer the actual code insertion to the end of the "
                           "allocation. That way the allocator might still find a suitable coloring for this variable bec"
                           "ause of other evicted variables.";
  sub_259EC40(&qword_4AF5FC0);
  __cxa_atexit(sub_1F6C9D0, &qword_4AF5FC0, &off_47CFE00);
  qword_4AF5F10 = 0;
  qword_4AF5F00 = (__int64)&off_4A6E058;
  qword_4AF5F08 = (unsigned int)qword_4AF5F08 & 0x80000000;
  qword_4AF5F40 = (__int64)&qword_4AF5F50;
  qword_4AF5F18 = 0;
  qword_4AF5F20 = 0;
  qword_4AF5F28 = 0;
  qword_4AF5F30 = 0;
  qword_4AF5F38 = 0;
  qword_4AF5F48 = 0x100000000LL;
  qword_4AF5F58 = (__int64)&qword_4AF5F70;
  qword_4AF5F60 = 1;
  dword_4AF5F68 = 0;
  byte_4AF5F6C = 1;
  v27 = sub_259AC30(sub_1F6C9D0, &qword_4AF5F50);
  v28 = (unsigned int)qword_4AF5F48;
  if ( HIDWORD(qword_4AF5F48) < (unsigned __int64)(unsigned int)qword_4AF5F48 + 1 )
  {
    v46.m128i_i64[0] = v27;
    sub_25D6060(&qword_4AF5F50 - 2, &qword_4AF5F50, (unsigned int)qword_4AF5F48 + 1LL, 8);
    v28 = (unsigned int)qword_4AF5F48;
    v27 = v46.m128i_i64[0];
  }
  v29 = _mm_load_si128(&v45);
  *(_QWORD *)(qword_4AF5F40 + 8 * v28) = v27;
  xmmword_4AF5F98 = 0;
  xmmword_4AF5FA8 = (__int128)v29;
  qword_4AF5F80 = (__int64)&off_4A64710;
  LODWORD(qword_4AF5F48) = qword_4AF5F48 + 1;
  byte_4AF5F8C = 0;
  qword_4AF5F00 = (__int64)off_4A6DEB8;
  dword_4AF5F78 = 0;
  dword_4AF5F88 = 0;
  qword_4AF5F90 = (__int64)off_49D9228;
  sub_259F400(&qword_4AF5F00, "regalloc-csr-first-time-cost", 28);
  qword_4AF5F28 = 49;
  qword_4AF5F20 = (__int64)"Cost for first time use of callee-saved register.";
  dword_4AF5F78 = 0;
  byte_4AF5F8C = 1;
  dword_4AF5F88 = 0;
  BYTE2(qword_4AF5F08) = BYTE2(qword_4AF5F08) & 0x9F | 0x20;
  sub_259EC40(&qword_4AF5F00);
  __cxa_atexit(sub_1F6C940, &qword_4AF5F00, &off_47CFE00);
  qword_4AF5E50 = 0;
  qword_4AF5E40 = (__int64)&off_4A6E058;
  qword_4AF5E48 = (unsigned int)qword_4AF5E48 & 0x80000000;
  qword_4AF5E80 = (__int64)&qword_4AF5E90;
  qword_4AF5E58 = 0;
  qword_4AF5E60 = 0;
  qword_4AF5E68 = 0;
  qword_4AF5E70 = 0;
  qword_4AF5E78 = 0;
  qword_4AF5E88 = 0x100000000LL;
  qword_4AF5E98 = (__int64)&qword_4AF5EB0;
  qword_4AF5EA0 = 1;
  dword_4AF5EA8 = 0;
  byte_4AF5EAC = 1;
  v30 = sub_259AC30(sub_1F6C940, &qword_4AF5E90);
  v31 = (unsigned int)qword_4AF5E88;
  if ( HIDWORD(qword_4AF5E88) < (unsigned __int64)(unsigned int)qword_4AF5E88 + 1 )
  {
    v46.m128i_i64[0] = v30;
    sub_25D6060(&qword_4AF5E90 - 2, &qword_4AF5E90, (unsigned int)qword_4AF5E88 + 1LL, 8);
    v31 = (unsigned int)qword_4AF5E88;
    v30 = v46.m128i_i64[0];
  }
  *(_QWORD *)(qword_4AF5E80 + 8 * v31) = v30;
  xmmword_4AF5EE0 = 0;
  LODWORD(qword_4AF5E88) = qword_4AF5E88 + 1;
  qword_4AF5EC0 = (__int64)off_4A6E4B8;
  qword_4AF5EB8 = 0;
  byte_4AF5ED0 = 0;
  qword_4AF5E40 = (__int64)off_4A6E4D8;
  qword_4AF5EC8 = 0;
  qword_4AF5ED8 = (__int64)off_49D9258;
  xmmword_4AF5EF0 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49EA188),
                                (__m128i)(unsigned __int64)nullsub_374);
  sub_259F400(&qword_4AF5E40, "grow-region-complexity-budget", 29);
  qword_4AF5E68 = 114;
  qword_4AF5E60 = (__int64)"growRegion() does not scale with the number of BB edges, so limit its budget and bail out onc"
                           "e we reach the limit.";
  qword_4AF5EB8 = 10000;
  byte_4AF5ED0 = 1;
  qword_4AF5EC8 = 10000;
  BYTE2(qword_4AF5E48) = BYTE2(qword_4AF5E48) & 0x9F | 0x20;
  sub_259EC40(&qword_4AF5E40);
  __cxa_atexit(sub_25D0820, &qword_4AF5E40, &off_47CFE00);
  qword_4AF5D90 = 0;
  qword_4AF5D80 = (__int64)&off_4A6E058;
  qword_4AF5D88 = (unsigned int)qword_4AF5D88 & 0x80000000;
  qword_4AF5DC0 = (__int64)&qword_4AF5DD0;
  qword_4AF5D98 = 0;
  qword_4AF5DA0 = 0;
  qword_4AF5DA8 = 0;
  qword_4AF5DB0 = 0;
  qword_4AF5DB8 = 0;
  qword_4AF5DC8 = 0x100000000LL;
  qword_4AF5DD8 = (__int64)&qword_4AF5DF0;
  qword_4AF5DE0 = 1;
  dword_4AF5DE8 = 0;
  byte_4AF5DEC = 1;
  v32 = sub_259AC30(sub_25D0820, &qword_4AF5DD0);
  v33 = (unsigned int)qword_4AF5DC8;
  if ( HIDWORD(qword_4AF5DC8) < (unsigned __int64)(unsigned int)qword_4AF5DC8 + 1 )
  {
    v46.m128i_i64[0] = v32;
    sub_25D6060(&qword_4AF5DD0 - 2, &qword_4AF5DD0, (unsigned int)qword_4AF5DC8 + 1LL, 8);
    v33 = (unsigned int)qword_4AF5DC8;
    v32 = v46.m128i_i64[0];
  }
  v34 = _mm_load_si128(&v44);
  *(_QWORD *)(qword_4AF5DC0 + 8 * v33) = v32;
  word_4AF5E08 = 0;
  xmmword_4AF5E18 = 0;
  qword_4AF5E00 = (__int64)&off_4A64730;
  xmmword_4AF5E28 = (__int128)v34;
  LODWORD(qword_4AF5DC8) = qword_4AF5DC8 + 1;
  qword_4AF5D80 = (__int64)off_4A6DFF0;
  byte_4AF5DF8 = 0;
  qword_4AF5E10 = (__int64)off_49D9168;
  sub_259F400(&qword_4AF5D80, "greedy-regclass-priority-trumps-globalness", 42);
  qword_4AF5DA8 = 171;
  qword_4AF5DA0 = (__int64)"Change the greedy register allocator's live range priority calculation to make the Allocation"
                           "Priority of the register class more important then whether the range is global";
  BYTE2(qword_4AF5D88) = BYTE2(qword_4AF5D88) & 0x9F | 0x20;
  sub_259EC40(&qword_4AF5D80);
  __cxa_atexit(sub_1F6C9D0, &qword_4AF5D80, &off_47CFE00);
  qword_4AF5CD0 = 0;
  qword_4AF5CC0 = (__int64)&off_4A6E058;
  qword_4AF5CC8 = (unsigned int)qword_4AF5CC8 & 0x80000000;
  qword_4AF5D00 = (__int64)&qword_4AF5D10;
  qword_4AF5CD8 = 0;
  qword_4AF5CE0 = 0;
  qword_4AF5CE8 = 0;
  qword_4AF5CF0 = 0;
  qword_4AF5CF8 = 0;
  qword_4AF5D08 = 0x100000000LL;
  qword_4AF5D18 = (__int64)&qword_4AF5D30;
  qword_4AF5D20 = 1;
  dword_4AF5D28 = 0;
  byte_4AF5D2C = 1;
  v35 = sub_259AC30(sub_1F6C9D0, &qword_4AF5D10);
  v36 = (unsigned int)qword_4AF5D08;
  if ( HIDWORD(qword_4AF5D08) < (unsigned __int64)(unsigned int)qword_4AF5D08 + 1 )
  {
    v46.m128i_i64[0] = v35;
    sub_25D6060(&qword_4AF5D10 - 2, &qword_4AF5D10, (unsigned int)qword_4AF5D08 + 1LL, 8);
    v36 = (unsigned int)qword_4AF5D08;
    v35 = v46.m128i_i64[0];
  }
  v37 = _mm_load_si128(&v44);
  *(_QWORD *)(qword_4AF5D00 + 8 * v36) = v35;
  word_4AF5D48 = 0;
  xmmword_4AF5D58 = 0;
  xmmword_4AF5D68 = (__int128)v37;
  qword_4AF5D40 = (__int64)&off_4A64730;
  LODWORD(qword_4AF5D08) = qword_4AF5D08 + 1;
  byte_4AF5D38 = 0;
  qword_4AF5CC0 = (__int64)off_4A6DFF0;
  qword_4AF5D50 = (__int64)off_49D9168;
  sub_259F400(&qword_4AF5CC0, "greedy-reverse-local-assignment", 31);
  qword_4AF5CE8 = 114;
  qword_4AF5CE0 = (__int64)"Reverse allocation order of local live ranges, such that shorter local live ranges will tend "
                           "to be allocated first";
  BYTE2(qword_4AF5CC8) = BYTE2(qword_4AF5CC8) & 0x9F | 0x20;
  sub_259EC40(&qword_4AF5CC0);
  __cxa_atexit(sub_1F6C9D0, &qword_4AF5CC0, &off_47CFE00);
  qword_4AF5C48 = 0x100000000LL;
  qword_4AF5C00 = (__int64)&off_4A6E058;
  qword_4AF5C08 = (unsigned int)qword_4AF5C08 & 0x80000000;
  qword_4AF5C40 = (__int64)&qword_4AF5C50;
  qword_4AF5C10 = 0;
  qword_4AF5C18 = 0;
  qword_4AF5C20 = 0;
  qword_4AF5C28 = 0;
  qword_4AF5C30 = 0;
  qword_4AF5C38 = 0;
  qword_4AF5C58 = (__int64)&qword_4AF5C70;
  qword_4AF5C60 = 1;
  dword_4AF5C68 = 0;
  byte_4AF5C6C = 1;
  v38 = sub_259AC30(sub_1F6C9D0, &qword_4AF5C50);
  v39 = (unsigned int)qword_4AF5C48;
  v40 = (unsigned int)qword_4AF5C48 + 1LL;
  if ( HIDWORD(qword_4AF5C48) < v40 )
  {
    sub_25D6060(&qword_4AF5C50 - 2, &qword_4AF5C50, v40, 8);
    v39 = (unsigned int)qword_4AF5C48;
  }
  v41 = _mm_load_si128(&v45);
  *(_QWORD *)(qword_4AF5C40 + 8 * v39) = v38;
  xmmword_4AF5C98 = 0;
  xmmword_4AF5CA8 = (__int128)v41;
  qword_4AF5C80 = (__int64)&off_4A64710;
  LODWORD(qword_4AF5C48) = qword_4AF5C48 + 1;
  byte_4AF5C8C = 0;
  qword_4AF5C00 = (__int64)off_4A6DEB8;
  dword_4AF5C78 = 0;
  dword_4AF5C88 = 0;
  qword_4AF5C90 = (__int64)off_49D9228;
  sub_259F400(&qword_4AF5C00, "split-threshold-for-reg-with-hint", 33);
  qword_4AF5C28 = 73;
  qword_4AF5C20 = (__int64)"The threshold for splitting a virtual register with a hint, in percentage";
  dword_4AF5C78 = 75;
  byte_4AF5C8C = 1;
  dword_4AF5C88 = 75;
  BYTE2(qword_4AF5C08) = BYTE2(qword_4AF5C08) & 0x9F | 0x20;
  sub_259EC40(&qword_4AF5C00);
  __cxa_atexit(sub_1F6C940, &qword_4AF5C00, &off_47CFE00);
  qword_4AF5BD8 = (__int64)"greedy register allocator";
  qword_4AF5BC8 = (__int64)"greedy";
  v42 = qword_4AF5B80[2];
  qword_4AF5BD0 = 6;
  qword_4AF5BE0 = 25;
  qword_4AF5BE8 = (__int64)sub_31ED9D0;
  qword_4AF5BC0 = qword_4AF5B80[0];
  qword_4AF5B80[0] = (__int64)&qword_4AF5BC0;
  if ( v42 )
    (*(void (__fastcall **)(__int64, char *, __int64, __int64 (__fastcall *)(), const char *, __int64))(*(_QWORD *)v42 + 24LL))(
      v42,
      "greedy",
      6,
      sub_31ED9D0,
      "greedy register allocator",
      25);
  return __cxa_atexit(sub_31E9AF0, &qword_4AF5BC0, &off_47CFE00);
}

