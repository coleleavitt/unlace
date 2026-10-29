int __fastcall sub_5A5B90(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // rdx
  __m128i v4; // xmm6
  __int64 v5; // r9
  __int64 v6; // r9
  __int64 v7; // rax
  __int64 v8; // rdx
  __m128i v9; // xmm7
  __m128i v10; // xmm0
  __m128i v11; // xmm0
  __m128i v12; // xmm0
  __m128i v13; // xmm0
  __m128i v14; // xmm0
  __m128i v15; // xmm0
  __m128i v16; // xmm0
  __int64 v17; // rax
  __int64 v18; // rdx
  __m128i si128; // xmm4
  void **v20; // r9
  __m128i *v21; // r8
  __int64 v22; // r15
  __int64 v23; // rax
  unsigned __int64 v24; // rdx
  __m128i v25; // xmm6
  __int64 v26; // rax
  __int64 v27; // rdx
  __m128i v28; // xmm7
  __int64 v29; // r15
  __int64 v30; // rax
  unsigned __int64 v31; // rdx
  __int64 v32; // r15
  __int64 v33; // rax
  unsigned __int64 v34; // rdx
  __m128i v35; // xmm5
  __int64 v36; // r12
  __int64 v37; // rax
  unsigned __int64 v38; // rdx
  __m128i v39; // xmm6
  __m128i v41; // [rsp+0h] [rbp-1C8h] BYREF
  int **v42; // [rsp+10h] [rbp-1B8h]
  __m128i *v43; // [rsp+18h] [rbp-1B0h]
  __m128i v44; // [rsp+20h] [rbp-1A8h] BYREF
  __m128 v45; // [rsp+30h] [rbp-198h] BYREF
  void **p_ptr; // [rsp+40h] [rbp-188h]
  __int64 v47; // [rsp+48h] [rbp-180h]
  int v48; // [rsp+50h] [rbp-178h] BYREF
  int v49; // [rsp+54h] [rbp-174h] BYREF
  int *v50; // [rsp+58h] [rbp-170h] BYREF
  __m128i v51; // [rsp+60h] [rbp-168h] BYREF
  __m128i v52; // [rsp+70h] [rbp-158h] BYREF
  __m128i v53; // [rsp+80h] [rbp-148h] BYREF
  __m128i v54; // [rsp+90h] [rbp-138h] BYREF
  __m128i v55; // [rsp+A0h] [rbp-128h] BYREF
  __m128i v56; // [rsp+B0h] [rbp-118h] BYREF
  __m128i v57; // [rsp+C0h] [rbp-108h] BYREF
  __int64 v58; // [rsp+D0h] [rbp-F8h]
  void *ptr; // [rsp+E0h] [rbp-E8h] BYREF
  __int64 v60; // [rsp+E8h] [rbp-E0h]
  _OWORD v61[7]; // [rsp+F0h] [rbp-D8h] BYREF
  __int64 v62; // [rsp+160h] [rbp-68h]

  qword_4B03BA0 = (__int64)&qword_4B03BB0;
  qword_4B03B70 = 0;
  qword_4B03B78 = 0;
  v41 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_49EB820), (__m128i)(unsigned __int64)nullsub_266);
  v44 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_49EB828), (__m128i)(unsigned __int64)nullsub_267);
  qword_4B03B60 = (__int64)&off_4A6E058;
  v45 = _mm_loadh_ps((const double *)&off_49EB830);
  qword_4B03B68 = (unsigned int)qword_4B03B68 & 0x80000000;
  qword_4B03B80 = 0;
  qword_4B03B88 = 0;
  qword_4B03B90 = 0;
  qword_4B03B98 = 0;
  qword_4B03BB8 = (__int64)&qword_4B03BD0;
  qword_4B03BA8 = 0x100000000LL;
  qword_4B03BC0 = 1;
  dword_4B03BC8 = 0;
  byte_4B03BCC = 1;
  v1 = sub_259AC30(a1, &qword_4B03BB0);
  v2 = (unsigned int)qword_4B03BA8;
  v3 = (unsigned int)qword_4B03BA8 + 1LL;
  if ( HIDWORD(qword_4B03BA8) < v3 )
  {
    sub_25D6060(&qword_4B03BB0 - 2, &qword_4B03BB0, v3, 8);
    v2 = (unsigned int)qword_4B03BA8;
  }
  v4 = _mm_load_si128(&v41);
  *(_QWORD *)(qword_4B03BA0 + 8 * v2) = v1;
  word_4B03BE8 = 0;
  xmmword_4B03BF8 = 0;
  qword_4B03BE0 = (__int64)&off_4A64730;
  xmmword_4B03C08 = (__int128)v4;
  LODWORD(qword_4B03BA8) = qword_4B03BA8 + 1;
  qword_4B03B60 = (__int64)off_4A6DFF0;
  byte_4B03BD8 = 0;
  qword_4B03BF0 = (__int64)off_49D9168;
  sub_259F400(&qword_4B03B60, "enable-lsr-phielim", 18);
  byte_4B03BD8 = 1;
  qword_4B03B88 = 26;
  BYTE2(qword_4B03B68) = BYTE2(qword_4B03B68) & 0x9F | 0x20;
  word_4B03BE8 = 257;
  qword_4B03B80 = (__int64)"Enable LSR phi elimination";
  sub_259EC40(&qword_4B03B60);
  __cxa_atexit(sub_1F6C9D0, &qword_4B03B60, &off_47CFE00);
  v60 = 41;
  v42 = &v50;
  ptr = "Add instruction count to a LSR cost model";
  v43 = &v51;
  p_ptr = &ptr;
  LOBYTE(v49) = 1;
  v51.m128i_i64[0] = (__int64)&v49;
  LODWORD(v50) = 1;
  sub_35763D0(&qword_4B03AA0, "lsr-insns-cost", &v50, &v51, &ptr, v5, v41.m128i_i64[0], v41.m128i_i64[1]);
  __cxa_atexit(sub_1F6C9D0, &qword_4B03AA0, &off_47CFE00);
  ptr = "Narrow LSR complex solution using expectation of registers number";
  LOBYTE(v49) = 0;
  v60 = 65;
  v51.m128i_i64[0] = (__int64)&v49;
  LODWORD(v50) = 1;
  sub_35763D0(qword_4B039E0, "lsr-exp-narrow", v42, v43, p_ptr, v6, v41.m128i_i64[0], v41.m128i_i64[1]);
  __cxa_atexit(sub_1F6C9D0, qword_4B039E0, &off_47CFE00);
  qword_4B03930 = 0;
  qword_4B03920 = (__int64)&off_4A6E058;
  qword_4B03928 = (unsigned int)qword_4B03928 & 0x80000000;
  qword_4B03960 = (__int64)&qword_4B03970;
  qword_4B03938 = 0;
  qword_4B03940 = 0;
  qword_4B03948 = 0;
  qword_4B03950 = 0;
  qword_4B03958 = 0;
  qword_4B03968 = 0x100000000LL;
  qword_4B03978 = (__int64)&qword_4B03990;
  qword_4B03980 = 1;
  dword_4B03988 = 0;
  byte_4B0398C = 1;
  v7 = sub_259AC30(sub_1F6C9D0, &qword_4B03970);
  v8 = (unsigned int)qword_4B03968;
  if ( HIDWORD(qword_4B03968) < (unsigned __int64)(unsigned int)qword_4B03968 + 1 )
  {
    v47 = v7;
    sub_25D6060(&qword_4B03970 - 2, &qword_4B03970, (unsigned int)qword_4B03968 + 1LL, 8);
    v8 = (unsigned int)qword_4B03968;
    v7 = v47;
  }
  v9 = _mm_load_si128(&v41);
  *(_QWORD *)(qword_4B03960 + 8 * v8) = v7;
  word_4B039A8 = 0;
  xmmword_4B039B8 = 0;
  qword_4B039A0 = (__int64)&off_4A64730;
  xmmword_4B039C8 = (__int128)v9;
  LODWORD(qword_4B03968) = qword_4B03968 + 1;
  qword_4B03920 = (__int64)off_4A6DFF0;
  byte_4B03998 = 0;
  qword_4B039B0 = (__int64)off_49D9168;
  sub_259F400(&qword_4B03920, "lsr-filter-same-scaled-reg", 26);
  byte_4B03998 = 1;
  qword_4B03948 = 91;
  BYTE2(qword_4B03928) = BYTE2(qword_4B03928) & 0x9F | 0x20;
  word_4B039A8 = 257;
  qword_4B03940 = (__int64)"Narrow LSR search space by filtering non-optimal formulae with the same ScaledReg and Scale";
  sub_259EC40(&qword_4B03920);
  __cxa_atexit(sub_1F6C9D0, &qword_4B03920, &off_47CFE00);
  v51.m128i_i64[1] = 4;
  v51.m128i_i64[0] = (__int64)"none";
  v10 = _mm_load_si128(&v51);
  v52.m128i_i64[1] = (__int64)"Don't prefer any addressing mode";
  v52.m128i_i32[0] = 2;
  v61[0] = v10;
  v11 = _mm_load_si128(&v52);
  v53.m128i_i64[1] = (__int64)"preindexed";
  v53.m128i_i64[0] = 32;
  v61[1] = v11;
  v12 = _mm_load_si128(&v53);
  v54.m128i_i64[0] = 10;
  v54.m128i_i32[2] = 0;
  v61[2] = v12;
  v13 = _mm_load_si128(&v54);
  v55.m128i_i64[0] = (__int64)"Prefer pre-indexed addressing mode";
  v55.m128i_i64[1] = 34;
  v61[3] = v13;
  v14 = _mm_load_si128(&v55);
  v56.m128i_i64[0] = (__int64)"postindexed";
  v56.m128i_i64[1] = 11;
  v61[4] = v14;
  v15 = _mm_load_si128(&v56);
  v57.m128i_i64[1] = (__int64)"Prefer post-indexed addressing mode";
  v57.m128i_i32[0] = 1;
  v61[5] = v15;
  v16 = _mm_load_si128(&v57);
  v60 = 0x400000003LL;
  v61[6] = v16;
  v58 = 35;
  ptr = v61;
  v62 = 35;
  v51.m128i_i64[0] = (__int64)"A flag that overrides the target's preferred addressing mode.";
  v50 = &v48;
  qword_4B036C0 = (__int64)&off_4A6E058;
  qword_4B036C8 = (unsigned int)qword_4B036C8 & 0x80000000;
  qword_4B03700 = (__int64)&qword_4B03710;
  v51.m128i_i64[1] = 61;
  v48 = 2;
  v49 = 1;
  qword_4B036D0 = 0;
  qword_4B036D8 = 0;
  qword_4B036E0 = 0;
  qword_4B036E8 = 0;
  qword_4B036F0 = 0;
  qword_4B036F8 = 0;
  qword_4B03708 = 0x100000000LL;
  qword_4B03718 = (__int64)&qword_4B03730;
  qword_4B03720 = 1;
  dword_4B03728 = 0;
  byte_4B0372C = 1;
  v17 = sub_259AC30(sub_1F6C9D0, &qword_4B03710);
  v18 = (unsigned int)qword_4B03708;
  if ( HIDWORD(qword_4B03708) < (unsigned __int64)(unsigned int)qword_4B03708 + 1 )
  {
    v47 = v17;
    sub_25D6060(&qword_4B03710 - 2, &qword_4B03710, (unsigned int)qword_4B03708 + 1LL, 8);
    v18 = (unsigned int)qword_4B03708;
    v17 = v47;
  }
  si128 = _mm_load_si128((const __m128i *)&v45);
  v20 = p_ptr;
  v21 = v43;
  *(_QWORD *)(qword_4B03700 + 8 * v18) = v17;
  xmmword_4B038F0 = 0;
  xmmword_4B03750 = (__int128)si128;
  qword_4B03740 = (__int64)off_4A82FE0;
  LODWORD(qword_4B03708) = qword_4B03708 + 1;
  byte_4B0374C = 0;
  qword_4B036C0 = (__int64)&off_4A83050;
  qword_4B03760 = (__int64)qword_4B03770;
  dword_4B03738 = 0;
  qword_4B03768 = 0x800000000LL;
  dword_4B03748 = 0;
  xmmword_4B03900 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49EB838),
                                (__m128i)(unsigned __int64)nullsub_601);
  sub_357CE40(&qword_4B036C0, "lsr-preferred-addressing-mode", &v49, v42, v21, v20);
  sub_259EC40(&qword_4B036C0);
  if ( ptr != v61 )
    free(ptr);
  __cxa_atexit(sub_356C6A0, &qword_4B036C0, &off_47CFE00);
  qword_4B03610 = 0;
  qword_4B03600 = (__int64)&off_4A6E058;
  qword_4B03608 = (unsigned int)qword_4B03608 & 0x80000000;
  qword_4B03640 = (__int64)&qword_4B03650;
  qword_4B03618 = 0;
  qword_4B03620 = 0;
  qword_4B03628 = 0;
  qword_4B03630 = 0;
  qword_4B03638 = 0;
  qword_4B03648 = 0x100000000LL;
  qword_4B03658 = (__int64)&qword_4B03670;
  qword_4B03660 = 1;
  dword_4B03668 = 0;
  byte_4B0366C = 1;
  v22 = sub_259AC30(sub_356C6A0, &qword_4B03650);
  v23 = (unsigned int)qword_4B03648;
  v24 = (unsigned int)qword_4B03648 + 1LL;
  if ( HIDWORD(qword_4B03648) < v24 )
  {
    sub_25D6060(&qword_4B03650 - 2, &qword_4B03650, v24, 8);
    v23 = (unsigned int)qword_4B03648;
  }
  v25 = _mm_load_si128(&v44);
  *(_QWORD *)(qword_4B03640 + 8 * v23) = v22;
  xmmword_4B03698 = 0;
  xmmword_4B036A8 = (__int128)v25;
  qword_4B03680 = (__int64)&off_4A64710;
  LODWORD(qword_4B03648) = qword_4B03648 + 1;
  byte_4B0368C = 0;
  qword_4B03600 = (__int64)off_4A6DEB8;
  dword_4B03678 = 0;
  dword_4B03688 = 0;
  qword_4B03690 = (__int64)off_49D9228;
  sub_259F400(&qword_4B03600, "lsr-complexity-limit", 20);
  dword_4B03678 = 0xFFFF;
  byte_4B0368C = 1;
  dword_4B03688 = 0xFFFF;
  qword_4B03628 = 33;
  BYTE2(qword_4B03608) = BYTE2(qword_4B03608) & 0x9F | 0x20;
  qword_4B03620 = (__int64)"LSR search space complexity limit";
  sub_259EC40(&qword_4B03600);
  __cxa_atexit(sub_1F6C940, &qword_4B03600, &off_47CFE00);
  qword_4B03550 = 0;
  qword_4B03540 = (__int64)&off_4A6E058;
  qword_4B03548 = (unsigned int)qword_4B03548 & 0x80000000;
  qword_4B03580 = (__int64)&qword_4B03590;
  qword_4B03558 = 0;
  qword_4B03560 = 0;
  qword_4B03568 = 0;
  qword_4B03570 = 0;
  qword_4B03578 = 0;
  qword_4B03588 = 0x100000000LL;
  qword_4B03598 = (__int64)&qword_4B035B0;
  qword_4B035A0 = 1;
  dword_4B035A8 = 0;
  byte_4B035AC = 1;
  v26 = sub_259AC30(sub_1F6C940, &qword_4B03590);
  v27 = (unsigned int)qword_4B03588;
  if ( HIDWORD(qword_4B03588) < (unsigned __int64)(unsigned int)qword_4B03588 + 1 )
  {
    v42 = (int **)v26;
    sub_25D6060(&qword_4B03590 - 2, &qword_4B03590, (unsigned int)qword_4B03588 + 1LL, 8);
    v27 = (unsigned int)qword_4B03588;
    v26 = (__int64)v42;
  }
  v28 = _mm_load_si128(&v44);
  *(_QWORD *)(qword_4B03580 + 8 * v27) = v26;
  xmmword_4B035D8 = 0;
  xmmword_4B035E8 = (__int128)v28;
  qword_4B035C0 = (__int64)&off_4A64710;
  LODWORD(qword_4B03588) = qword_4B03588 + 1;
  byte_4B035CC = 0;
  qword_4B03540 = (__int64)off_4A6DEB8;
  dword_4B035B8 = 0;
  dword_4B035C8 = 0;
  qword_4B035D0 = (__int64)off_49D9228;
  sub_259F400(&qword_4B03540, "lsr-setupcost-depth-limit", 25);
  dword_4B035B8 = 7;
  byte_4B035CC = 1;
  dword_4B035C8 = 7;
  qword_4B03568 = 48;
  BYTE2(qword_4B03548) = BYTE2(qword_4B03548) & 0x9F | 0x20;
  qword_4B03560 = (__int64)"The limit on recursion depth for LSRs setup cost";
  sub_259EC40(&qword_4B03540);
  __cxa_atexit(sub_1F6C940, &qword_4B03540, &off_47CFE00);
  qword_4B03490 = 0;
  qword_4B03480 = (__int64)&off_4A6E058;
  qword_4B03488 = (unsigned int)qword_4B03488 & 0x80000000;
  qword_4B034C0 = (__int64)&qword_4B034D0;
  qword_4B03498 = 0;
  qword_4B034A0 = 0;
  qword_4B034A8 = 0;
  qword_4B034B0 = 0;
  qword_4B034B8 = 0;
  qword_4B034C8 = 0x100000000LL;
  qword_4B034D8 = (__int64)&qword_4B034F0;
  qword_4B034E0 = 1;
  dword_4B034E8 = 0;
  byte_4B034EC = 1;
  v29 = sub_259AC30(sub_1F6C940, &qword_4B034D0);
  v30 = (unsigned int)qword_4B034C8;
  v31 = (unsigned int)qword_4B034C8 + 1LL;
  if ( HIDWORD(qword_4B034C8) < v31 )
  {
    sub_25D6060(&qword_4B034D0 - 2, &qword_4B034D0, v31, 8);
    v30 = (unsigned int)qword_4B034C8;
  }
  *(_QWORD *)(qword_4B034C0 + 8 * v30) = v29;
  xmmword_4B03518 = 0;
  LODWORD(qword_4B034C8) = qword_4B034C8 + 1;
  qword_4B03500 = (__int64)off_49D90F8;
  dword_4B034F8 = 0;
  byte_4B0350C = 0;
  qword_4B03480 = (__int64)off_4A6D1F8;
  dword_4B03508 = 0;
  qword_4B03510 = (__int64)off_49D9198;
  xmmword_4B03528 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49EB840),
                                (__m128i)(unsigned __int64)nullsub_328);
  sub_259F400(&qword_4B03480, "lsr-drop-solution", 17);
  qword_4B034A8 = 49;
  BYTE2(qword_4B03488) = BYTE2(qword_4B03488) & 0x9F | 0x20;
  qword_4B034A0 = (__int64)"Attempt to drop solution if it is less profitable";
  sub_259EC40(&qword_4B03480);
  __cxa_atexit(sub_23D2630, &qword_4B03480, &off_47CFE00);
  qword_4B033D0 = 0;
  qword_4B033C0 = (__int64)&off_4A6E058;
  qword_4B033C8 = (unsigned int)qword_4B033C8 & 0x80000000;
  qword_4B03400 = (__int64)&qword_4B03410;
  qword_4B033D8 = 0;
  qword_4B033E0 = 0;
  qword_4B033E8 = 0;
  qword_4B033F0 = 0;
  qword_4B033F8 = 0;
  qword_4B03408 = 0x100000000LL;
  qword_4B03418 = (__int64)&qword_4B03430;
  qword_4B03420 = 1;
  dword_4B03428 = 0;
  byte_4B0342C = 1;
  v32 = sub_259AC30(sub_23D2630, &qword_4B03410);
  v33 = (unsigned int)qword_4B03408;
  v34 = (unsigned int)qword_4B03408 + 1LL;
  if ( HIDWORD(qword_4B03408) < v34 )
  {
    sub_25D6060(&qword_4B03410 - 2, &qword_4B03410, v34, 8);
    v33 = (unsigned int)qword_4B03408;
  }
  v35 = _mm_load_si128(&v41);
  *(_QWORD *)(qword_4B03400 + 8 * v33) = v32;
  word_4B03448 = 0;
  xmmword_4B03458 = 0;
  qword_4B03440 = (__int64)&off_4A64730;
  xmmword_4B03468 = (__int128)v35;
  LODWORD(qword_4B03408) = qword_4B03408 + 1;
  qword_4B033C0 = (__int64)off_4A6DFF0;
  byte_4B03438 = 0;
  qword_4B03450 = (__int64)off_49D9168;
  sub_259F400(&qword_4B033C0, "lsr-enable-vscale-immediates", 28);
  byte_4B03438 = 1;
  qword_4B033E8 = 52;
  BYTE2(qword_4B033C8) = BYTE2(qword_4B033C8) & 0x9F | 0x20;
  word_4B03448 = 257;
  qword_4B033E0 = (__int64)"Enable analysis of vscale-relative immediates in LSR";
  sub_259EC40(&qword_4B033C0);
  __cxa_atexit(sub_1F6C9D0, &qword_4B033C0, &off_47CFE00);
  qword_4B03348 = 0x100000000LL;
  qword_4B03300 = (__int64)&off_4A6E058;
  qword_4B03308 = (unsigned int)qword_4B03308 & 0x80000000;
  qword_4B03340 = (__int64)&qword_4B03350;
  qword_4B03310 = 0;
  qword_4B03318 = 0;
  qword_4B03320 = 0;
  qword_4B03328 = 0;
  qword_4B03330 = 0;
  qword_4B03338 = 0;
  qword_4B03358 = (__int64)&qword_4B03370;
  qword_4B03360 = 1;
  dword_4B03368 = 0;
  byte_4B0336C = 1;
  v36 = sub_259AC30(sub_1F6C9D0, &qword_4B03350);
  v37 = (unsigned int)qword_4B03348;
  v38 = (unsigned int)qword_4B03348 + 1LL;
  if ( HIDWORD(qword_4B03348) < v38 )
  {
    sub_25D6060(&qword_4B03350 - 2, &qword_4B03350, v38, 8);
    v37 = (unsigned int)qword_4B03348;
  }
  v39 = _mm_load_si128(&v41);
  *(_QWORD *)(qword_4B03340 + 8 * v37) = v36;
  word_4B03388 = 0;
  xmmword_4B03398 = 0;
  xmmword_4B033A8 = (__int128)v39;
  qword_4B03380 = (__int64)&off_4A64730;
  LODWORD(qword_4B03348) = qword_4B03348 + 1;
  byte_4B03378 = 0;
  qword_4B03300 = (__int64)off_4A6DFF0;
  qword_4B03390 = (__int64)off_49D9168;
  sub_259F400(&qword_4B03300, "lsr-drop-scaled-reg-for-vscale", 30);
  byte_4B03378 = 1;
  qword_4B03328 = 60;
  BYTE2(qword_4B03308) = BYTE2(qword_4B03308) & 0x9F | 0x20;
  word_4B03388 = 257;
  qword_4B03320 = (__int64)"Avoid using scaled registers with vscale-relative addressing";
  sub_259EC40(&qword_4B03300);
  return __cxa_atexit(sub_1F6C9D0, &qword_4B03300, &off_47CFE00);
}

