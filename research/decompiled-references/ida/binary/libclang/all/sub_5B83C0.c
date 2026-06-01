int __fastcall sub_5B83C0(__int64 a1)
{
  __m128i v1; // xmm0
  __m128i v2; // xmm0
  __m128i v3; // xmm0
  __m128i v4; // xmm0
  __m128i v5; // xmm0
  __m128i v6; // xmm0
  __m128i v7; // xmm0
  __m128i v8; // xmm0
  __m128i v9; // xmm0
  __m128i v10; // xmm0
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  unsigned __int64 v14; // rdx
  __m128i v15; // xmm6
  __int64 v16; // rax
  __int64 *v17; // rsi
  __int64 *v18; // r8
  __int64 v19; // rax
  __m128i v20; // xmm2
  __m128i v21; // xmm1
  char v22; // al
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rsi
  __m128i v26; // xmm0
  char v27; // al
  __m128i v28; // xmm0
  __m128i v29; // xmm0
  __m128i v30; // xmm0
  __m128i v31; // xmm0
  __m128i v32; // xmm0
  __m128i v33; // xmm0
  __m128i v34; // xmm0
  __int64 v35; // rax
  __int64 v36; // rsi
  __int64 v37; // r8
  __int64 v38; // rax
  __m128i *v39; // rcx
  __m128i v40; // xmm4
  __int64 v41; // r8
  __m128i v42; // xmm0
  int *v43; // rdx
  __int64 v44; // r8
  __int64 v45; // rax
  unsigned __int64 v46; // rdx
  __int64 v47; // rbp
  __int64 v48; // rax
  __m128i v49; // xmm1
  __m128i v50; // xmm7
  char v51; // al
  __m128i v53; // [rsp+0h] [rbp-208h] BYREF
  __m128i v54; // [rsp+10h] [rbp-1F8h] BYREF
  __m128i v55; // [rsp+20h] [rbp-1E8h] BYREF
  __m128i v56; // [rsp+30h] [rbp-1D8h] BYREF
  __m128i v57; // [rsp+40h] [rbp-1C8h] BYREF
  int *v58; // [rsp+58h] [rbp-1B0h]
  __m128i *v59; // [rsp+60h] [rbp-1A8h]
  __int64 *v60; // [rsp+68h] [rbp-1A0h]
  int v61; // [rsp+7Ch] [rbp-18Ch] BYREF
  __m128i v62; // [rsp+80h] [rbp-188h] BYREF
  __m128i v63; // [rsp+90h] [rbp-178h] BYREF
  __m128i v64; // [rsp+A0h] [rbp-168h] BYREF
  __m128i v65; // [rsp+B0h] [rbp-158h] BYREF
  __m128i v66; // [rsp+C0h] [rbp-148h] BYREF
  __m128i v67; // [rsp+D0h] [rbp-138h] BYREF
  __m128i v68; // [rsp+E0h] [rbp-128h] BYREF
  __m128i v69; // [rsp+F0h] [rbp-118h] BYREF
  __m128i v70; // [rsp+100h] [rbp-108h] BYREF
  __m128i v71; // [rsp+110h] [rbp-F8h] BYREF
  void *ptr; // [rsp+120h] [rbp-E8h] BYREF
  __int64 v73; // [rsp+128h] [rbp-E0h]
  __m128i v74; // [rsp+130h] [rbp-D8h] BYREF
  __m128i v75; // [rsp+140h] [rbp-C8h]
  __m128i v76; // [rsp+150h] [rbp-B8h]
  __m128i v77; // [rsp+160h] [rbp-A8h]
  __m128i v78; // [rsp+170h] [rbp-98h]
  __m128i v79; // [rsp+180h] [rbp-88h]
  __m128i v80; // [rsp+190h] [rbp-78h]
  __m128i v81; // [rsp+1A0h] [rbp-68h]
  __m128i v82; // [rsp+1B0h] [rbp-58h]
  __m128i v83; // [rsp+1C0h] [rbp-48h]

  v62.m128i_i64[1] = 4;
  v63.m128i_i32[0] = 0;
  v64.m128i_i64[0] = 22;
  v53 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_49EBE18), (__m128i)(unsigned __int64)nullsub_294);
  v54 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&off_49D9118, (__m128i)(unsigned __int64)&qword_4B0A220[22]);
  v55 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&off_4A84140, (__m128i)(unsigned __int64)qword_4B0A3E0);
  v56 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&off_49D9118, (__m128i)(unsigned __int64)&qword_4B0A700[22]);
  v62.m128i_i64[0] = (__int64)"none";
  v63.m128i_i64[1] = (__int64)"do not display graphs.";
  v57 = (__m128i)_mm_loadh_ps((const double *)&off_49EBE20);
  v64.m128i_i64[1] = (__int64)"fraction";
  v1 = _mm_load_si128(&v62);
  v65.m128i_i64[0] = 8;
  v74 = v1;
  v2 = _mm_load_si128(&v63);
  v65.m128i_i32[2] = 1;
  v75 = v2;
  v3 = _mm_load_si128(&v64);
  v66.m128i_i64[0] = (__int64)"display a graph using the fractional block frequency representation.";
  v76 = v3;
  v4 = _mm_load_si128(&v65);
  v66.m128i_i64[1] = 68;
  v77 = v4;
  v5 = _mm_load_si128(&v66);
  v67.m128i_i64[0] = (__int64)"integer";
  v67.m128i_i64[1] = 7;
  v78 = v5;
  v6 = _mm_load_si128(&v67);
  v68.m128i_i64[1] = (__int64)"display a graph using the raw integer fractional block frequency representation.";
  v68.m128i_i32[0] = 2;
  v79 = v6;
  v7 = _mm_load_si128(&v68);
  v69.m128i_i64[1] = (__int64)"count";
  v69.m128i_i64[0] = 80;
  v80 = v7;
  v8 = _mm_load_si128(&v69);
  v70.m128i_i64[0] = 5;
  v70.m128i_i32[2] = 3;
  v81 = v8;
  v9 = _mm_load_si128(&v70);
  v71.m128i_i64[0] = (__int64)"display a graph using the real profile count if available.";
  v71.m128i_i64[1] = 58;
  ptr = &v74;
  v82 = v9;
  v10 = _mm_load_si128(&v71);
  v73 = 0x400000004LL;
  v62.m128i_i64[0] = (__int64)"Pop up a window to show a dag displaying how block frequencies propagation through the CFG.";
  v62.m128i_i64[1] = 91;
  v61 = 1;
  qword_4B0A800 = (__int64)&off_4A6E058;
  qword_4B0A808 = (unsigned int)qword_4B0A808 & 0x80000000;
  qword_4B0A810 = 0;
  qword_4B0A818 = 0;
  qword_4B0A820 = 0;
  qword_4B0A828 = 0;
  qword_4B0A830 = 0;
  qword_4B0A838 = 0;
  qword_4B0A840 = (__int64)&qword_4B0A850;
  qword_4B0A848 = 0x100000000LL;
  qword_4B0A858 = (__int64)&qword_4B0A870;
  qword_4B0A860 = 1;
  dword_4B0A868 = 0;
  byte_4B0A86C = 1;
  v83 = v10;
  v11 = sub_259AC30(a1, &qword_4B0A850);
  v13 = (unsigned int)qword_4B0A848;
  v14 = (unsigned int)qword_4B0A848 + 1LL;
  if ( HIDWORD(qword_4B0A848) < v14 )
  {
    v58 = (int *)v11;
    sub_25D6060(&qword_4B0A850 - 2, &qword_4B0A850, v14, 8);
    v13 = (unsigned int)qword_4B0A848;
    v11 = (__int64)v58;
  }
  v15 = _mm_load_si128(&v57);
  v59 = &v62;
  *(_QWORD *)(qword_4B0A840 + 8 * v13) = v11;
  xmmword_4B0AA30 = 0;
  v57.m128i_i64[0] = (__int64)&ptr;
  qword_4B0A880 = (__int64)off_4A7B128;
  xmmword_4B0A890 = (__int128)v15;
  LODWORD(qword_4B0A848) = qword_4B0A848 + 1;
  qword_4B0A800 = (__int64)&off_4A7B198;
  qword_4B0A8A0 = (__int64)qword_4B0A8B0;
  dword_4B0A878 = 0;
  qword_4B0A8A8 = 0x800000000LL;
  dword_4B0A888 = 0;
  v58 = &v61;
  xmmword_4B0AA40 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49EBE28),
                                (__m128i)(unsigned __int64)nullsub_529);
  byte_4B0A88C = 0;
  sub_370EB80(
    &qword_4B0A800,
    "view-block-freq-propagation-dags",
    &v61,
    &v62,
    &ptr,
    v12,
    v53.m128i_i64[0],
    v53.m128i_i64[1],
    v54.m128i_i64[0],
    v54.m128i_i64[1],
    v55.m128i_i64[0],
    v55.m128i_i64[1],
    v56.m128i_i64[0],
    v56.m128i_i64[1]);
  sub_259EC40(&qword_4B0A800);
  if ( ptr != &v74 )
    free(ptr);
  __cxa_atexit(sub_30C6300, &qword_4B0A800, &off_47CFE00);
  qword_4B0A700[2] = 0;
  qword_4B0A700[8] = (__int64)&qword_4B0A700[10];
  v60 = &qword_4B0A700[10];
  qword_4B0A700[0] = (__int64)&off_4A6E058;
  qword_4B0A700[1] &= 0x80000000uLL;
  qword_4B0A700[3] = 0;
  qword_4B0A700[4] = 0;
  qword_4B0A700[5] = 0;
  qword_4B0A700[6] = 0;
  qword_4B0A700[7] = 0;
  qword_4B0A700[9] = 0x100000000LL;
  qword_4B0A700[11] = (__int64)&qword_4B0A700[14];
  qword_4B0A700[12] = 1;
  LODWORD(qword_4B0A700[13]) = 0;
  BYTE4(qword_4B0A700[13]) = 1;
  v16 = sub_259AC30(sub_30C6300, &qword_4B0A700[10]);
  v17 = v60;
  v18 = (__int64 *)v16;
  v19 = LODWORD(qword_4B0A700[9]);
  if ( HIDWORD(qword_4B0A700[9]) < (unsigned __int64)(v19 + 1) )
  {
    v60 = v18;
    sub_25D6060(&qword_4B0A700[8], v17, v19 + 1, 8);
    v19 = LODWORD(qword_4B0A700[9]);
    v18 = v60;
  }
  v20 = _mm_load_si128(&v53);
  v21 = _mm_load_si128(&v56);
  *(_QWORD *)(qword_4B0A700[8] + 8 * v19) = v18;
  qword_4B0A700[15] = (__int64)&qword_4B0A700[17];
  *(__m128i *)&qword_4B0A700[19] = v21;
  *(_OWORD *)&qword_4B0A700[26] = 0;
  qword_4B0A700[0] = (__int64)&off_4A6DF88;
  *(__m128i *)&qword_4B0A700[28] = v20;
  ++LODWORD(qword_4B0A700[9]);
  qword_4B0A700[25] = (__int64)off_49D92E8;
  qword_4B0A700[16] = 0;
  LOBYTE(qword_4B0A700[17]) = 0;
  qword_4B0A700[21] = 0;
  LOBYTE(qword_4B0A700[22]) = 0;
  LOBYTE(qword_4B0A700[24]) = 0;
  sub_259F400(qword_4B0A700, "view-bfi-func-name", 18);
  v22 = BYTE2(qword_4B0A700[1]);
  qword_4B0A700[5] = 75;
  BYTE2(qword_4B0A700[1]) = v22 & 0x9F | 0x20;
  qword_4B0A700[4] = (__int64)"The option to specify the name of the function whose CFG will be displayed.";
  sub_259EC40(qword_4B0A700);
  __cxa_atexit(sub_2283FB0, qword_4B0A700, &off_47CFE00);
  qword_4B0A640[2] = 0;
  qword_4B0A640[0] = (__int64)&off_4A6E058;
  qword_4B0A640[1] &= 0x80000000uLL;
  qword_4B0A640[8] = (__int64)&qword_4B0A640[10];
  v56.m128i_i64[0] = (__int64)&qword_4B0A640[10];
  qword_4B0A640[3] = 0;
  qword_4B0A640[4] = 0;
  qword_4B0A640[5] = 0;
  qword_4B0A640[6] = 0;
  qword_4B0A640[7] = 0;
  qword_4B0A640[9] = 0x100000000LL;
  qword_4B0A640[11] = (__int64)&qword_4B0A640[14];
  qword_4B0A640[12] = 1;
  LODWORD(qword_4B0A640[13]) = 0;
  BYTE4(qword_4B0A640[13]) = 1;
  v23 = sub_259AC30(sub_2283FB0, &qword_4B0A640[10]);
  v24 = LODWORD(qword_4B0A640[9]);
  v25 = v56.m128i_i64[0];
  if ( HIDWORD(qword_4B0A640[9]) < (unsigned __int64)(v24 + 1) )
  {
    v56.m128i_i64[0] = v23;
    sub_25D6060(&qword_4B0A640[8], v25, v24 + 1, 8);
    v24 = LODWORD(qword_4B0A640[9]);
    v23 = v56.m128i_i64[0];
  }
  *(_QWORD *)(qword_4B0A640[8] + 8 * v24) = v23;
  *(_OWORD *)&qword_4B0A640[19] = 0;
  v26 = _mm_loadl_epi64((const __m128i *)&off_49EBE30);
  ++LODWORD(qword_4B0A640[9]);
  qword_4B0A640[16] = (__int64)&off_4A64710;
  LODWORD(qword_4B0A640[15]) = 0;
  BYTE4(qword_4B0A640[17]) = 0;
  qword_4B0A640[0] = (__int64)off_4A6DEB8;
  LODWORD(qword_4B0A640[17]) = 0;
  qword_4B0A640[18] = (__int64)off_49D9228;
  *(__m128i *)&qword_4B0A640[21] = _mm_unpacklo_epi64(v26, (__m128i)(unsigned __int64)nullsub_267);
  sub_259F400(qword_4B0A640, "view-hot-freq-percent", 21);
  v27 = BYTE2(qword_4B0A640[1]);
  LODWORD(qword_4B0A640[15]) = 10;
  BYTE4(qword_4B0A640[17]) = 1;
  qword_4B0A640[5] = 192;
  LODWORD(qword_4B0A640[17]) = 10;
  BYTE2(qword_4B0A640[1]) = v27 & 0x9F | 0x20;
  qword_4B0A640[4] = (__int64)"An integer in percent used to specify the hot blocks/edges to be displayed in red: a block"
                              " or edge whose frequency is no less than the max frequency of the function multiplied by this percent.";
  sub_259EC40(qword_4B0A640);
  __cxa_atexit(sub_1F6C940, qword_4B0A640, &off_47CFE00);
  v62.m128i_i64[1] = 4;
  v62.m128i_i64[0] = (__int64)"none";
  v28 = _mm_load_si128(&v62);
  v63.m128i_i64[1] = (__int64)"do not show.";
  v63.m128i_i32[0] = 0;
  v74 = v28;
  v29 = _mm_load_si128(&v63);
  v64.m128i_i64[1] = (__int64)"graph";
  v64.m128i_i64[0] = 12;
  v75 = v29;
  v30 = _mm_load_si128(&v64);
  v65.m128i_i64[0] = 5;
  v65.m128i_i32[2] = 1;
  v76 = v30;
  v31 = _mm_load_si128(&v65);
  v66.m128i_i64[0] = (__int64)"show a graph.";
  v66.m128i_i64[1] = 13;
  v77 = v31;
  v32 = _mm_load_si128(&v66);
  v67.m128i_i64[0] = (__int64)"text";
  v67.m128i_i64[1] = 4;
  v78 = v32;
  v33 = _mm_load_si128(&v67);
  v68.m128i_i64[1] = (__int64)"show in text.";
  v68.m128i_i32[0] = 2;
  v79 = v33;
  v34 = _mm_load_si128(&v68);
  v73 = 0x400000003LL;
  v80 = v34;
  v69.m128i_i64[0] = 13;
  ptr = &v74;
  v81.m128i_i64[0] = 13;
  v62.m128i_i64[0] = (__int64)"A boolean option to show CFG dag or text with block profile counts and branch probabilitie"
                              "s right after PGO profile annotation step. The profile counts are computed using branch pr"
                              "obabilities from the runtime profile data and block frequency propagation algorithm. To vi"
                              "ew the raw counts from the profile, use option -pgo-view-raw-counts instead. To limit grap"
                              "h display to only one function, use filtering option -view-bfi-func-name.";
  qword_4B0A3E0[8] = (__int64)&qword_4B0A3E0[10];
  v56.m128i_i64[0] = (__int64)&qword_4B0A3E0[10];
  qword_4B0A3E0[0] = (__int64)&off_4A6E058;
  qword_4B0A3E0[1] &= 0x80000000uLL;
  v62.m128i_i64[1] = 433;
  v61 = 1;
  qword_4B0A3E0[2] = 0;
  qword_4B0A3E0[3] = 0;
  qword_4B0A3E0[4] = 0;
  qword_4B0A3E0[5] = 0;
  qword_4B0A3E0[6] = 0;
  qword_4B0A3E0[7] = 0;
  qword_4B0A3E0[9] = 0x100000000LL;
  qword_4B0A3E0[11] = (__int64)&qword_4B0A3E0[14];
  qword_4B0A3E0[12] = 1;
  LODWORD(qword_4B0A3E0[13]) = 0;
  BYTE4(qword_4B0A3E0[13]) = 1;
  v35 = sub_259AC30(sub_1F6C940, &qword_4B0A3E0[10]);
  v36 = v56.m128i_i64[0];
  v37 = v35;
  v38 = LODWORD(qword_4B0A3E0[9]);
  if ( HIDWORD(qword_4B0A3E0[9]) < (unsigned __int64)(v38 + 1) )
  {
    v56.m128i_i64[0] = v37;
    sub_25D6060(&qword_4B0A3E0[8], v36, v38 + 1, 8);
    v38 = LODWORD(qword_4B0A3E0[9]);
    v37 = v56.m128i_i64[0];
  }
  v39 = v59;
  v40 = _mm_load_si128(&v55);
  *(_QWORD *)(qword_4B0A3E0[8] + 8 * v38) = v37;
  *(_OWORD *)&qword_4B0A3E0[70] = 0;
  v41 = v57.m128i_i64[0];
  v42 = _mm_loadl_epi64((const __m128i *)&off_49EBE38);
  v43 = v58;
  *(__m128i *)&qword_4B0A3E0[18] = v40;
  qword_4B0A3E0[16] = (__int64)off_4A84120;
  ++LODWORD(qword_4B0A3E0[9]);
  LODWORD(qword_4B0A3E0[15]) = 0;
  qword_4B0A3E0[0] = (__int64)&off_4A84190;
  qword_4B0A3E0[20] = (__int64)&qword_4B0A3E0[22];
  LODWORD(qword_4B0A3E0[17]) = 0;
  qword_4B0A3E0[21] = 0x800000000LL;
  BYTE4(qword_4B0A3E0[17]) = 0;
  *(__m128i *)&qword_4B0A3E0[72] = _mm_unpacklo_epi64(v42, (__m128i)(unsigned __int64)nullsub_608);
  sub_370EE80(qword_4B0A3E0, "pgo-view-counts", v43, v39, v41);
  sub_259EC40(qword_4B0A3E0);
  if ( ptr != &v74 )
    free(ptr);
  __cxa_atexit(sub_370D8F0, qword_4B0A3E0, &off_47CFE00);
  qword_4B0A330 = 0;
  qword_4B0A360 = (__int64)&qword_4B0A370;
  qword_4B0A338 = 0;
  qword_4B0A320 = (__int64)&off_4A6E058;
  qword_4B0A328 = (unsigned int)qword_4B0A328 & 0x80000000;
  qword_4B0A340 = 0;
  qword_4B0A348 = 0;
  qword_4B0A350 = 0;
  qword_4B0A358 = 0;
  qword_4B0A368 = 0x100000000LL;
  qword_4B0A378 = (__int64)&qword_4B0A390;
  qword_4B0A380 = 1;
  dword_4B0A388 = 0;
  byte_4B0A38C = 1;
  v44 = sub_259AC30(sub_370D8F0, &qword_4B0A370);
  v45 = (unsigned int)qword_4B0A368;
  v46 = (unsigned int)qword_4B0A368 + 1LL;
  if ( HIDWORD(qword_4B0A368) < v46 )
  {
    v55.m128i_i64[0] = v44;
    sub_25D6060(&qword_4B0A370 - 2, &qword_4B0A370, v46, 8);
    v45 = (unsigned int)qword_4B0A368;
    v44 = v55.m128i_i64[0];
  }
  *(_QWORD *)(qword_4B0A360 + 8 * v45) = v44;
  word_4B0A3A8 = 0;
  xmmword_4B0A3B8 = 0;
  LODWORD(qword_4B0A368) = qword_4B0A368 + 1;
  qword_4B0A3A0 = (__int64)&off_4A64730;
  byte_4B0A398 = 0;
  qword_4B0A320 = (__int64)off_4A6DFF0;
  qword_4B0A3B0 = (__int64)off_49D9168;
  xmmword_4B0A3C8 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49EBE40),
                                (__m128i)(unsigned __int64)nullsub_266);
  sub_259F400(&qword_4B0A320, "print-bfi", 9);
  word_4B0A3A8 = 256;
  byte_4B0A398 = 0;
  qword_4B0A348 = 31;
  BYTE2(qword_4B0A328) = BYTE2(qword_4B0A328) & 0x9F | 0x20;
  qword_4B0A340 = (__int64)"Print the block frequency info.";
  sub_259EC40(&qword_4B0A320);
  __cxa_atexit(sub_1F6C9D0, &qword_4B0A320, &off_47CFE00);
  qword_4B0A220[12] = 1;
  qword_4B0A220[2] = 0;
  qword_4B0A220[3] = 0;
  qword_4B0A220[0] = (__int64)&off_4A6E058;
  qword_4B0A220[1] &= 0x80000000uLL;
  qword_4B0A220[4] = 0;
  qword_4B0A220[5] = 0;
  qword_4B0A220[6] = 0;
  qword_4B0A220[7] = 0;
  qword_4B0A220[8] = (__int64)&qword_4B0A220[10];
  qword_4B0A220[9] = 0x100000000LL;
  qword_4B0A220[11] = (__int64)&qword_4B0A220[14];
  LODWORD(qword_4B0A220[13]) = 0;
  BYTE4(qword_4B0A220[13]) = 1;
  v47 = sub_259AC30(sub_1F6C9D0, &qword_4B0A320);
  v48 = LODWORD(qword_4B0A220[9]);
  if ( HIDWORD(qword_4B0A220[9]) < (unsigned __int64)(v48 + 1) )
  {
    sub_25D6060(&qword_4B0A220[8], &qword_4B0A220[10], v48 + 1, 8);
    v48 = LODWORD(qword_4B0A220[9]);
  }
  v49 = _mm_load_si128(&v53);
  v50 = _mm_load_si128(&v54);
  *(_QWORD *)(qword_4B0A220[8] + 8 * v48) = v47;
  qword_4B0A220[15] = (__int64)&qword_4B0A220[17];
  *(__m128i *)&qword_4B0A220[19] = v50;
  *(_OWORD *)&qword_4B0A220[26] = 0;
  qword_4B0A220[0] = (__int64)&off_4A6DF88;
  *(__m128i *)&qword_4B0A220[28] = v49;
  ++LODWORD(qword_4B0A220[9]);
  qword_4B0A220[25] = (__int64)off_49D92E8;
  qword_4B0A220[16] = 0;
  LOBYTE(qword_4B0A220[17]) = 0;
  qword_4B0A220[21] = 0;
  LOBYTE(qword_4B0A220[22]) = 0;
  LOBYTE(qword_4B0A220[24]) = 0;
  sub_259F400(qword_4B0A220, "print-bfi-func-name", 19);
  v51 = BYTE2(qword_4B0A220[1]);
  qword_4B0A220[5] = 85;
  BYTE2(qword_4B0A220[1]) = v51 & 0x9F | 0x20;
  qword_4B0A220[4] = (__int64)"The option to specify the name of the function whose block frequency info is printed.";
  sub_259EC40(qword_4B0A220);
  return __cxa_atexit(sub_2283FB0, qword_4B0A220, &off_47CFE00);
}

