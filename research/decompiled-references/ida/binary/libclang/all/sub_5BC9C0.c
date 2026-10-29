int __fastcall sub_5BC9C0(__int64 a1)
{
  __int64 v1; // r14
  __int64 v2; // rax
  unsigned __int64 v3; // rdx
  __m128i v4; // xmm7
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // rdx
  __m128i v11; // xmm4
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 v17; // rdx
  __m128i v18; // xmm5
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // r9
  __int64 v23; // r14
  __int64 v24; // rax
  unsigned __int64 v25; // rdx
  __m128i v26; // xmm6
  __int64 v27; // r14
  __int64 v28; // rax
  unsigned __int64 v29; // rdx
  __m128i v30; // xmm7
  __int64 v31; // r14
  __int64 v32; // rax
  unsigned __int64 v33; // rdx
  __m128i v34; // xmm4
  __int64 v35; // rax
  __int64 v36; // rdx
  __m128i v37; // xmm5
  __int64 v38; // rax
  __int64 v39; // rdx
  __m128i v40; // xmm6
  __int64 v41; // r8
  __int64 v42; // rax
  unsigned __int64 v43; // rdx
  __m128i v44; // xmm7
  __int64 v45; // rbp
  __int64 v46; // rax
  unsigned __int64 v47; // rdx
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rax
  __int64 v51; // r9
  __m128i v53; // [rsp+0h] [rbp-A8h] BYREF
  __m128i v54; // [rsp+10h] [rbp-98h] BYREF
  __m128i v55; // [rsp+20h] [rbp-88h] BYREF
  __int64 v56; // [rsp+38h] [rbp-70h]
  _QWORD v57[4]; // [rsp+40h] [rbp-68h] BYREF
  __int16 v58; // [rsp+60h] [rbp-48h]

  qword_4B0D140 = (__int64)&qword_4B0D150;
  qword_4B0D110 = 0;
  qword_4B0D118 = 0;
  v54 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_49EC260), (__m128i)(unsigned __int64)nullsub_266);
  qword_4B0D100 = (__int64)&off_4A6E058;
  v55 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_49EC268), (__m128i)(unsigned __int64)nullsub_267);
  qword_4B0D108 = (unsigned int)qword_4B0D108 & 0x80000000;
  v53 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_49EC270), (__m128i)(unsigned __int64)nullsub_501);
  qword_4B0D120 = 0;
  qword_4B0D128 = 0;
  qword_4B0D130 = 0;
  qword_4B0D138 = 0;
  qword_4B0D148 = 0x100000000LL;
  qword_4B0D158 = (__int64)&qword_4B0D170;
  qword_4B0D160 = 1;
  dword_4B0D168 = 0;
  byte_4B0D16C = 1;
  v1 = sub_259AC30(a1, &qword_4B0D150);
  v2 = (unsigned int)qword_4B0D148;
  v3 = (unsigned int)qword_4B0D148 + 1LL;
  if ( HIDWORD(qword_4B0D148) < v3 )
  {
    sub_25D6060(&qword_4B0D150 - 2, &qword_4B0D150, v3, 8);
    v2 = (unsigned int)qword_4B0D148;
  }
  v4 = _mm_load_si128(&v53);
  *(_QWORD *)(qword_4B0D140 + 8 * v2) = v1;
  LODWORD(qword_4B0D148) = qword_4B0D148 + 1;
  byte_4B0D18C = 0;
  qword_4B0D180 = (__int64)&off_4A64710;
  qword_4B0D178 = 0;
  xmmword_4B0D198 = 0;
  qword_4B0D100 = (__int64)off_4A783B8;
  xmmword_4B0D1A8 = (__int128)v4;
  qword_4B0D190 = (__int64)off_49D9228;
  sub_259F400(&qword_4B0D100, "force-vector-width", 18);
  qword_4B0D128 = 40;
  BYTE2(qword_4B0D108) = BYTE2(qword_4B0D108) & 0x9F | 0x20;
  qword_4B0D120 = (__int64)"Sets the SIMD width. Zero is autoselect.";
  if ( qword_4B0D178 )
  {
    v7 = sub_26260E0(&qword_4B0D100, "force-vector-width", v5, v6);
    v58 = 259;
    v57[0] = "cl::location(x) specified more than once!";
    sub_2598800(&qword_4B0D100, v57, 0, 0, v7, v8);
  }
  else
  {
    byte_4B0D18C = 1;
    qword_4B0D178 = (__int64)&qword_4B0D0F8;
    dword_4B0D188 = qword_4B0D0F8;
  }
  sub_259EC40(&qword_4B0D100);
  __cxa_atexit(sub_2D3BD70, &qword_4B0D100, &off_47CFE00);
  qword_4B0D050 = 0;
  qword_4B0D040 = (__int64)&off_4A6E058;
  qword_4B0D048 = (unsigned int)qword_4B0D048 & 0x80000000;
  qword_4B0D080 = (__int64)&qword_4B0D090;
  qword_4B0D058 = 0;
  qword_4B0D060 = 0;
  qword_4B0D068 = 0;
  qword_4B0D070 = 0;
  qword_4B0D078 = 0;
  qword_4B0D088 = 0x100000000LL;
  qword_4B0D098 = (__int64)&qword_4B0D0B0;
  qword_4B0D0A0 = 1;
  dword_4B0D0A8 = 0;
  byte_4B0D0AC = 1;
  v9 = sub_259AC30(sub_2D3BD70, &qword_4B0D090);
  v10 = (unsigned int)qword_4B0D088;
  if ( HIDWORD(qword_4B0D088) < (unsigned __int64)(unsigned int)qword_4B0D088 + 1 )
  {
    v56 = v9;
    sub_25D6060(&qword_4B0D090 - 2, &qword_4B0D090, (unsigned int)qword_4B0D088 + 1LL, 8);
    v10 = (unsigned int)qword_4B0D088;
    v9 = v56;
  }
  v11 = _mm_load_si128(&v53);
  *(_QWORD *)(qword_4B0D080 + 8 * v10) = v9;
  LODWORD(qword_4B0D088) = qword_4B0D088 + 1;
  byte_4B0D0CC = 0;
  qword_4B0D0C0 = (__int64)&off_4A64710;
  qword_4B0D0B8 = 0;
  xmmword_4B0D0D8 = 0;
  qword_4B0D040 = (__int64)off_4A783B8;
  xmmword_4B0D0E8 = (__int128)v11;
  qword_4B0D0D0 = (__int64)off_49D9228;
  sub_259F400(&qword_4B0D040, "force-vector-interleave", 23);
  qword_4B0D068 = 60;
  BYTE2(qword_4B0D048) = BYTE2(qword_4B0D048) & 0x9F | 0x20;
  qword_4B0D060 = (__int64)"Sets the vectorization interleave count. Zero is autoselect.";
  if ( qword_4B0D0B8 )
  {
    v14 = sub_26260E0(&qword_4B0D040, "force-vector-interleave", v12, v13);
    v58 = 259;
    v57[0] = "cl::location(x) specified more than once!";
    sub_2598800(&qword_4B0D040, v57, 0, 0, v14, v15);
  }
  else
  {
    byte_4B0D0CC = 1;
    qword_4B0D0B8 = (__int64)&qword_4B0D038;
    dword_4B0D0C8 = qword_4B0D038;
  }
  sub_259EC40(&qword_4B0D040);
  __cxa_atexit(sub_2D3BD70, &qword_4B0D040, &off_47CFE00);
  qword_4B0CF90 = 0;
  qword_4B0CF80 = (__int64)&off_4A6E058;
  qword_4B0CF88 = (unsigned int)qword_4B0CF88 & 0x80000000;
  qword_4B0CFC0 = (__int64)&qword_4B0CFD0;
  qword_4B0CF98 = 0;
  qword_4B0CFA0 = 0;
  qword_4B0CFA8 = 0;
  qword_4B0CFB0 = 0;
  qword_4B0CFB8 = 0;
  qword_4B0CFC8 = 0x100000000LL;
  qword_4B0CFD8 = (__int64)&qword_4B0CFF0;
  qword_4B0CFE0 = 1;
  dword_4B0CFE8 = 0;
  byte_4B0CFEC = 1;
  v16 = sub_259AC30(sub_2D3BD70, &qword_4B0CFD0);
  v17 = (unsigned int)qword_4B0CFC8;
  if ( HIDWORD(qword_4B0CFC8) < (unsigned __int64)(unsigned int)qword_4B0CFC8 + 1 )
  {
    v56 = v16;
    sub_25D6060(&qword_4B0CFD0 - 2, &qword_4B0CFD0, (unsigned int)qword_4B0CFC8 + 1LL, 8);
    v17 = (unsigned int)qword_4B0CFC8;
    v16 = v56;
  }
  v18 = _mm_load_si128(&v53);
  *(_QWORD *)(qword_4B0CFC0 + 8 * v17) = v16;
  LODWORD(qword_4B0CFC8) = qword_4B0CFC8 + 1;
  byte_4B0D00C = 0;
  qword_4B0D000 = (__int64)&off_4A64710;
  qword_4B0CFF8 = 0;
  xmmword_4B0D018 = 0;
  qword_4B0CF80 = (__int64)off_4A783B8;
  xmmword_4B0D028 = (__int128)v18;
  qword_4B0D010 = (__int64)off_49D9228;
  sub_259F400(&qword_4B0CF80, "runtime-memory-check-threshold", 30);
  qword_4B0CFA8 = 123;
  BYTE2(qword_4B0CF88) = BYTE2(qword_4B0CF88) & 0x9F | 0x20;
  qword_4B0CFA0 = (__int64)"When performing memory disambiguation checks at runtime do not generate more than this number"
                           " of comparisons (default = 8).";
  if ( qword_4B0CFF8 )
  {
    v21 = sub_26260E0(&qword_4B0CF80, "runtime-memory-check-threshold", v19, v20);
    v58 = 259;
    v57[0] = "cl::location(x) specified more than once!";
    sub_2598800(&qword_4B0CF80, v57, 0, 0, v21, v22);
  }
  else
  {
    qword_4B0CFF8 = (__int64)&qword_4B0CF78;
  }
  *(_DWORD *)qword_4B0CFF8 = 8;
  byte_4B0D00C = 1;
  dword_4B0D008 = 8;
  sub_259EC40(&qword_4B0CF80);
  __cxa_atexit(sub_2D3BD70, &qword_4B0CF80, &off_47CFE00);
  qword_4B0CED0 = 0;
  qword_4B0CEC0 = (__int64)&off_4A6E058;
  qword_4B0CEC8 = (unsigned int)qword_4B0CEC8 & 0x80000000;
  qword_4B0CF00 = (__int64)&qword_4B0CF10;
  qword_4B0CED8 = 0;
  qword_4B0CEE0 = 0;
  qword_4B0CEE8 = 0;
  qword_4B0CEF0 = 0;
  qword_4B0CEF8 = 0;
  qword_4B0CF08 = 0x100000000LL;
  qword_4B0CF18 = (__int64)&qword_4B0CF30;
  qword_4B0CF20 = 1;
  dword_4B0CF28 = 0;
  byte_4B0CF2C = 1;
  v23 = sub_259AC30(sub_2D3BD70, &qword_4B0CF10);
  v24 = (unsigned int)qword_4B0CF08;
  v25 = (unsigned int)qword_4B0CF08 + 1LL;
  if ( HIDWORD(qword_4B0CF08) < v25 )
  {
    sub_25D6060(&qword_4B0CF10 - 2, &qword_4B0CF10, v25, 8);
    v24 = (unsigned int)qword_4B0CF08;
  }
  v26 = _mm_load_si128(&v55);
  *(_QWORD *)(qword_4B0CF00 + 8 * v24) = v23;
  xmmword_4B0CF58 = 0;
  xmmword_4B0CF68 = (__int128)v26;
  qword_4B0CF40 = (__int64)&off_4A64710;
  LODWORD(qword_4B0CF08) = qword_4B0CF08 + 1;
  byte_4B0CF4C = 0;
  qword_4B0CEC0 = (__int64)off_4A6DEB8;
  dword_4B0CF38 = 0;
  dword_4B0CF48 = 0;
  qword_4B0CF50 = (__int64)off_49D9228;
  sub_259F400(&qword_4B0CEC0, "memory-check-merge-threshold", 28);
  qword_4B0CEE8 = 94;
  dword_4B0CF38 = 100;
  byte_4B0CF4C = 1;
  dword_4B0CF48 = 100;
  BYTE2(qword_4B0CEC8) = BYTE2(qword_4B0CEC8) & 0x9F | 0x20;
  qword_4B0CEE0 = (__int64)"Maximum number of comparisons done when trying to merge runtime memory checks. (default = 100)";
  sub_259EC40(&qword_4B0CEC0);
  __cxa_atexit(sub_1F6C940, &qword_4B0CEC0, &off_47CFE00);
  qword_4B0CE10 = 0;
  qword_4B0CE00 = (__int64)&off_4A6E058;
  qword_4B0CE08 = (unsigned int)qword_4B0CE08 & 0x80000000;
  qword_4B0CE40 = (__int64)&qword_4B0CE50;
  qword_4B0CE18 = 0;
  qword_4B0CE20 = 0;
  qword_4B0CE28 = 0;
  qword_4B0CE30 = 0;
  qword_4B0CE38 = 0;
  qword_4B0CE48 = 0x100000000LL;
  qword_4B0CE58 = (__int64)&qword_4B0CE70;
  qword_4B0CE60 = 1;
  dword_4B0CE68 = 0;
  byte_4B0CE6C = 1;
  v27 = sub_259AC30(sub_1F6C940, &qword_4B0CE50);
  v28 = (unsigned int)qword_4B0CE48;
  v29 = (unsigned int)qword_4B0CE48 + 1LL;
  if ( HIDWORD(qword_4B0CE48) < v29 )
  {
    sub_25D6060(&qword_4B0CE50 - 2, &qword_4B0CE50, v29, 8);
    v28 = (unsigned int)qword_4B0CE48;
  }
  v30 = _mm_load_si128(&v55);
  *(_QWORD *)(qword_4B0CE40 + 8 * v28) = v27;
  xmmword_4B0CE98 = 0;
  xmmword_4B0CEA8 = (__int128)v30;
  qword_4B0CE80 = (__int64)&off_4A64710;
  LODWORD(qword_4B0CE48) = qword_4B0CE48 + 1;
  byte_4B0CE8C = 0;
  qword_4B0CE00 = (__int64)off_4A6DEB8;
  dword_4B0CE78 = 0;
  dword_4B0CE88 = 0;
  qword_4B0CE90 = (__int64)off_49D9228;
  sub_259F400(&qword_4B0CE00, "max-dependences", 15);
  qword_4B0CE28 = 79;
  dword_4B0CE78 = 100;
  byte_4B0CE8C = 1;
  dword_4B0CE88 = 100;
  BYTE2(qword_4B0CE08) = BYTE2(qword_4B0CE08) & 0x9F | 0x20;
  qword_4B0CE20 = (__int64)"Maximum number of dependences collected by loop-access analysis (default = 100)";
  sub_259EC40(&qword_4B0CE00);
  __cxa_atexit(sub_1F6C940, &qword_4B0CE00, &off_47CFE00);
  qword_4B0CD50 = 0;
  qword_4B0CD40 = (__int64)&off_4A6E058;
  qword_4B0CD48 = (unsigned int)qword_4B0CD48 & 0x80000000;
  qword_4B0CD80 = (__int64)&qword_4B0CD90;
  qword_4B0CD58 = 0;
  qword_4B0CD60 = 0;
  qword_4B0CD68 = 0;
  qword_4B0CD70 = 0;
  qword_4B0CD78 = 0;
  qword_4B0CD88 = 0x100000000LL;
  qword_4B0CD98 = (__int64)&qword_4B0CDB0;
  qword_4B0CDA0 = 1;
  dword_4B0CDA8 = 0;
  byte_4B0CDAC = 1;
  v31 = sub_259AC30(sub_1F6C940, &qword_4B0CD90);
  v32 = (unsigned int)qword_4B0CD88;
  v33 = (unsigned int)qword_4B0CD88 + 1LL;
  if ( HIDWORD(qword_4B0CD88) < v33 )
  {
    sub_25D6060(&qword_4B0CD90 - 2, &qword_4B0CD90, v33, 8);
    v32 = (unsigned int)qword_4B0CD88;
  }
  v34 = _mm_load_si128(&v54);
  *(_QWORD *)(qword_4B0CD80 + 8 * v32) = v31;
  word_4B0CDC8 = 0;
  xmmword_4B0CDD8 = 0;
  qword_4B0CDC0 = (__int64)&off_4A64730;
  xmmword_4B0CDE8 = (__int128)v34;
  LODWORD(qword_4B0CD88) = qword_4B0CD88 + 1;
  qword_4B0CD40 = (__int64)off_4A6DFF0;
  byte_4B0CDB8 = 0;
  qword_4B0CDD0 = (__int64)off_49D9168;
  sub_259F400(&qword_4B0CD40, "enable-mem-access-versioning", 28);
  byte_4B0CDB8 = 1;
  word_4B0CDC8 = 257;
  qword_4B0CD68 = 47;
  BYTE2(qword_4B0CD48) = BYTE2(qword_4B0CD48) & 0x9F | 0x20;
  qword_4B0CD60 = (__int64)"Enable symbolic stride memory access versioning";
  sub_259EC40(&qword_4B0CD40);
  __cxa_atexit(sub_1F6C9D0, &qword_4B0CD40, &off_47CFE00);
  qword_4B0CC90 = 0;
  qword_4B0CC80 = (__int64)&off_4A6E058;
  qword_4B0CC88 = (unsigned int)qword_4B0CC88 & 0x80000000;
  qword_4B0CCC0 = (__int64)&qword_4B0CCD0;
  qword_4B0CC98 = 0;
  qword_4B0CCA0 = 0;
  qword_4B0CCA8 = 0;
  qword_4B0CCB0 = 0;
  qword_4B0CCB8 = 0;
  qword_4B0CCC8 = 0x100000000LL;
  qword_4B0CCD8 = (__int64)&qword_4B0CCF0;
  qword_4B0CCE0 = 1;
  dword_4B0CCE8 = 0;
  byte_4B0CCEC = 1;
  v35 = sub_259AC30(sub_1F6C9D0, &qword_4B0CCD0);
  v36 = (unsigned int)qword_4B0CCC8;
  if ( HIDWORD(qword_4B0CCC8) < (unsigned __int64)(unsigned int)qword_4B0CCC8 + 1 )
  {
    v53.m128i_i64[0] = v35;
    sub_25D6060(&qword_4B0CCD0 - 2, &qword_4B0CCD0, (unsigned int)qword_4B0CCC8 + 1LL, 8);
    v36 = (unsigned int)qword_4B0CCC8;
    v35 = v53.m128i_i64[0];
  }
  v37 = _mm_load_si128(&v54);
  *(_QWORD *)(qword_4B0CCC0 + 8 * v36) = v35;
  word_4B0CD08 = 0;
  xmmword_4B0CD18 = 0;
  qword_4B0CD00 = (__int64)&off_4A64730;
  xmmword_4B0CD28 = (__int128)v37;
  LODWORD(qword_4B0CCC8) = qword_4B0CCC8 + 1;
  qword_4B0CC80 = (__int64)off_4A6DFF0;
  byte_4B0CCF8 = 0;
  qword_4B0CD10 = (__int64)off_49D9168;
  sub_259F400(&qword_4B0CC80, "store-to-load-forwarding-conflict-detection", 43);
  qword_4B0CCA8 = 49;
  byte_4B0CCF8 = 1;
  word_4B0CD08 = 257;
  BYTE2(qword_4B0CC88) = BYTE2(qword_4B0CC88) & 0x9F | 0x20;
  qword_4B0CCA0 = (__int64)"Enable conflict detection in loop-access analysis";
  sub_259EC40(&qword_4B0CC80);
  __cxa_atexit(sub_1F6C9D0, &qword_4B0CC80, &off_47CFE00);
  qword_4B0CBD0 = 0;
  qword_4B0CBC0 = (__int64)&off_4A6E058;
  qword_4B0CBC8 = (unsigned int)qword_4B0CBC8 & 0x80000000;
  qword_4B0CC00 = (__int64)&qword_4B0CC10;
  qword_4B0CBD8 = 0;
  qword_4B0CBE0 = 0;
  qword_4B0CBE8 = 0;
  qword_4B0CBF0 = 0;
  qword_4B0CBF8 = 0;
  qword_4B0CC08 = 0x100000000LL;
  qword_4B0CC18 = (__int64)&qword_4B0CC30;
  qword_4B0CC20 = 1;
  dword_4B0CC28 = 0;
  byte_4B0CC2C = 1;
  v38 = sub_259AC30(sub_1F6C9D0, &qword_4B0CC10);
  v39 = (unsigned int)qword_4B0CC08;
  if ( HIDWORD(qword_4B0CC08) < (unsigned __int64)(unsigned int)qword_4B0CC08 + 1 )
  {
    v53.m128i_i64[0] = v38;
    sub_25D6060(&qword_4B0CC10 - 2, &qword_4B0CC10, (unsigned int)qword_4B0CC08 + 1LL, 8);
    v39 = (unsigned int)qword_4B0CC08;
    v38 = v53.m128i_i64[0];
  }
  v40 = _mm_load_si128(&v55);
  *(_QWORD *)(qword_4B0CC00 + 8 * v39) = v38;
  xmmword_4B0CC58 = 0;
  xmmword_4B0CC68 = (__int128)v40;
  qword_4B0CC40 = (__int64)&off_4A64710;
  LODWORD(qword_4B0CC08) = qword_4B0CC08 + 1;
  byte_4B0CC4C = 0;
  qword_4B0CBC0 = (__int64)off_4A6DEB8;
  dword_4B0CC38 = 0;
  dword_4B0CC48 = 0;
  qword_4B0CC50 = (__int64)off_49D9228;
  sub_259F400(&qword_4B0CBC0, "max-forked-scev-depth", 21);
  qword_4B0CBE8 = 63;
  dword_4B0CC38 = 5;
  byte_4B0CC4C = 1;
  dword_4B0CC48 = 5;
  BYTE2(qword_4B0CBC8) = BYTE2(qword_4B0CBC8) & 0x9F | 0x20;
  qword_4B0CBE0 = (__int64)"Maximum recursion depth when finding forked SCEVs (default = 5)";
  sub_259EC40(&qword_4B0CBC0);
  __cxa_atexit(sub_1F6C940, &qword_4B0CBC0, &off_47CFE00);
  qword_4B0CB10 = 0;
  qword_4B0CB00 = (__int64)&off_4A6E058;
  qword_4B0CB08 = (unsigned int)qword_4B0CB08 & 0x80000000;
  qword_4B0CB40 = (__int64)&qword_4B0CB50;
  qword_4B0CB18 = 0;
  qword_4B0CB20 = 0;
  qword_4B0CB28 = 0;
  qword_4B0CB30 = 0;
  qword_4B0CB38 = 0;
  qword_4B0CB48 = 0x100000000LL;
  qword_4B0CB58 = (__int64)&qword_4B0CB70;
  qword_4B0CB60 = 1;
  dword_4B0CB68 = 0;
  byte_4B0CB6C = 1;
  v41 = sub_259AC30(sub_1F6C940, &qword_4B0CB50);
  v42 = (unsigned int)qword_4B0CB48;
  v43 = (unsigned int)qword_4B0CB48 + 1LL;
  if ( HIDWORD(qword_4B0CB48) < v43 )
  {
    v53.m128i_i64[0] = v41;
    sub_25D6060(&qword_4B0CB50 - 2, &qword_4B0CB50, v43, 8);
    v42 = (unsigned int)qword_4B0CB48;
    v41 = v53.m128i_i64[0];
  }
  v44 = _mm_load_si128(&v54);
  *(_QWORD *)(qword_4B0CB40 + 8 * v42) = v41;
  word_4B0CB88 = 0;
  xmmword_4B0CB98 = 0;
  xmmword_4B0CBA8 = (__int128)v44;
  qword_4B0CB80 = (__int64)&off_4A64730;
  LODWORD(qword_4B0CB48) = qword_4B0CB48 + 1;
  byte_4B0CB78 = 0;
  qword_4B0CB00 = (__int64)off_4A6DFF0;
  qword_4B0CB90 = (__int64)off_49D9168;
  sub_259F400(&qword_4B0CB00, "laa-speculate-unit-stride", 25);
  qword_4B0CB28 = 51;
  byte_4B0CB78 = 1;
  word_4B0CB88 = 257;
  BYTE2(qword_4B0CB08) = BYTE2(qword_4B0CB08) & 0x9F | 0x20;
  qword_4B0CB20 = (__int64)"Speculate that non-constant strides are unit in LAA";
  sub_259EC40(&qword_4B0CB00);
  __cxa_atexit(sub_1F6C9D0, &qword_4B0CB00, &off_47CFE00);
  qword_4B0CA88 = 0x100000000LL;
  qword_4B0CA40 = (__int64)&off_4A6E058;
  qword_4B0CA48 = (unsigned int)qword_4B0CA48 & 0x80000000;
  qword_4B0CA80 = (__int64)&qword_4B0CA90;
  qword_4B0CA50 = 0;
  qword_4B0CA58 = 0;
  qword_4B0CA60 = 0;
  qword_4B0CA68 = 0;
  qword_4B0CA70 = 0;
  qword_4B0CA78 = 0;
  qword_4B0CA98 = (__int64)&qword_4B0CAB0;
  qword_4B0CAA0 = 1;
  dword_4B0CAA8 = 0;
  byte_4B0CAAC = 1;
  v45 = sub_259AC30(sub_1F6C9D0, &qword_4B0CA90);
  v46 = (unsigned int)qword_4B0CA88;
  v47 = (unsigned int)qword_4B0CA88 + 1LL;
  if ( HIDWORD(qword_4B0CA88) < v47 )
  {
    sub_25D6060(&qword_4B0CA90 - 2, &qword_4B0CA90, v47, 8);
    v46 = (unsigned int)qword_4B0CA88;
  }
  *(_QWORD *)(qword_4B0CA80 + 8 * v46) = v45;
  xmmword_4B0CAD8 = 0;
  LODWORD(qword_4B0CA88) = qword_4B0CA88 + 1;
  qword_4B0CAC0 = (__int64)&off_4A64730;
  qword_4B0CAB8 = 0;
  byte_4B0CAC9 = 0;
  qword_4B0CA40 = (__int64)off_4A6D260;
  qword_4B0CAD0 = (__int64)off_49D9168;
  xmmword_4B0CAE8 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49EC278),
                                (__m128i)(unsigned __int64)nullsub_329);
  sub_259F400(&qword_4B0CA40, "hoist-runtime-checks", 20);
  qword_4B0CA68 = 64;
  BYTE2(qword_4B0CA48) = BYTE2(qword_4B0CA48) & 0x9F | 0x20;
  qword_4B0CA60 = (__int64)"Hoist inner loop runtime memory checks to outer loop if possible";
  if ( qword_4B0CAB8 )
  {
    v50 = sub_26260E0(&qword_4B0CA40, "hoist-runtime-checks", v48, v49);
    v58 = 259;
    v57[0] = "cl::location(x) specified more than once!";
    sub_2598800(&qword_4B0CA40, v57, 0, 0, v50, v51);
  }
  else
  {
    qword_4B0CAB8 = (__int64)qword_4B0CA20;
  }
  *(_BYTE *)qword_4B0CAB8 = 1;
  *(_WORD *)&byte_4B0CAC8 = 257;
  sub_259EC40(&qword_4B0CA40);
  return __cxa_atexit(sub_23D25A0, &qword_4B0CA40, &off_47CFE00);
}

