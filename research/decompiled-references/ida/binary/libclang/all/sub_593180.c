int __fastcall sub_593180(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  unsigned __int64 v3; // rdx
  __m128i v4; // xmm3
  __int64 v5; // r12
  __int64 v6; // rax
  unsigned __int64 v7; // rdx
  __m128i v8; // xmm4
  __int64 v9; // r12
  __int64 v10; // rax
  unsigned __int64 v11; // rdx
  __m128i v12; // xmm5
  __int64 v13; // r12
  __int64 v14; // rax
  unsigned __int64 v15; // rdx
  __m128i v16; // xmm6
  __int64 v17; // r12
  __int64 v18; // rax
  unsigned __int64 v19; // rdx
  __m128i v20; // xmm7
  void *v21; // r13
  void **v22; // r12
  __int64 v23; // r13
  __int64 v24; // rax
  unsigned __int64 v25; // rdx
  __m128i v26; // xmm1
  void *v27; // r13
  void **v28; // r12
  __int64 v29; // r12
  __int64 v30; // rax
  unsigned __int64 v31; // rdx
  __m128i v32; // xmm2
  void **v33; // r12
  void *v34; // r13
  __int64 v35; // r12
  __int64 v36; // rax
  unsigned __int64 v37; // rdx
  __m128i v38; // xmm3
  __int64 v39; // r12
  __int64 v40; // rax
  unsigned __int64 v41; // rdx
  __m128i v42; // xmm4
  __int64 v43; // r12
  __int64 v44; // rax
  unsigned __int64 v45; // rdx
  __m128i v46; // xmm5
  __int64 v47; // r12
  __int64 v48; // rax
  unsigned __int64 v49; // rdx
  __m128i v50; // xmm6
  __int64 v51; // r12
  __int64 v52; // rax
  unsigned __int64 v53; // rdx
  __m128i v54; // xmm7
  __int64 v55; // r12
  __int64 v56; // rax
  unsigned __int64 v57; // rdx
  __m128i v58; // xmm1
  __int64 v59; // r12
  __int64 v60; // rax
  unsigned __int64 v61; // rdx
  __m128i v62; // xmm2
  void **v63; // rdi
  int v64; // edx
  int v65; // ecx
  int v66; // r8d
  int v67; // r9d
  __int64 v68; // rbx
  __int64 v69; // rax
  unsigned __int64 v70; // rdx
  __m128i si128; // xmm3
  _QWORD *v72; // rbx
  const __m128i *v73; // r13
  __int64 v74; // rax
  __int64 v75; // rdx
  char v76; // si
  const __m128i *v77; // rcx
  __int32 v78; // r10d
  __int64 v79; // r11
  __int64 v80; // rdi
  void *v81; // r9
  int v82; // edx
  __int64 v83; // rax
  __int64 v84; // rdi
  __m128i v85; // xmm0
  __int64 v86; // r12
  __int64 v87; // rax
  unsigned __int64 v88; // rdx
  __m128i v89; // xmm5
  __int64 v90; // r12
  __int64 v91; // rax
  unsigned __int64 v92; // rdx
  __m128i v93; // xmm6
  __int64 v94; // r12
  __int64 v95; // rax
  unsigned __int64 v96; // rdx
  __m128i v97; // xmm7
  __int64 v98; // r12
  __int64 v99; // rax
  unsigned __int64 v100; // rdx
  __m128i v101; // xmm1
  __int64 v102; // r12
  __int64 v103; // rax
  unsigned __int64 v104; // rdx
  __m128i v105; // xmm2
  void **v106; // rbx
  int v107; // edx
  int v108; // ecx
  int v109; // r8d
  int v110; // r9d
  __int64 v111; // r9
  __int64 v112; // r12
  __int64 v113; // rax
  unsigned __int64 v114; // rdx
  __m128i v115; // xmm3
  __int64 v116; // r12
  __int64 v117; // rax
  unsigned __int64 v118; // rdx
  __m128i v119; // xmm4
  __int64 v120; // r12
  __int64 v121; // rax
  unsigned __int64 v122; // rdx
  __m128i v123; // xmm5
  __m128i v124; // xmm6
  void *v125; // rax
  __int64 v126; // rdx
  __m128i v127; // xmm7
  __m128i v128; // xmm1
  __int64 v129; // r13
  __int64 v130; // rax
  unsigned __int64 v131; // rdx
  __m128i v132; // xmm2
  __int64 v133; // r13
  __int64 v134; // r13
  __int64 v135; // rax
  unsigned __int64 v136; // rdx
  __m128i v137; // xmm3
  __int64 v138; // r13
  __int64 v139; // rax
  unsigned __int64 v140; // rdx
  __m128i v141; // xmm4
  __int64 v142; // r13
  __int64 v143; // rax
  unsigned __int64 v144; // rdx
  __m128i v145; // xmm5
  __int64 v146; // r13
  __int64 v147; // rax
  unsigned __int64 v148; // rdx
  __m128i v149; // xmm6
  __int64 v150; // r13
  __int64 v151; // rax
  unsigned __int64 v152; // rdx
  __m128i v153; // xmm7
  __int64 v155; // rax
  __int64 v156; // r8
  __int64 *v157; // rdi
  const __m128i *v158; // rdx
  __int64 v159; // rcx
  __m128i v160; // xmm0
  __int32 v161; // edi
  __m128i v162; // xmm0
  __int32 v163; // eax
  __m128i v164; // [rsp+80h] [rbp-2D8h] BYREF
  void **p_ptr; // [rsp+98h] [rbp-2C0h]
  __m128 v166; // [rsp+A0h] [rbp-2B8h] BYREF
  __m128i v167; // [rsp+B0h] [rbp-2A8h] BYREF
  __m128i v168; // [rsp+C0h] [rbp-298h] BYREF
  __m128i v169; // [rsp+D0h] [rbp-288h] BYREF
  __m128i v170; // [rsp+E0h] [rbp-278h] BYREF
  void *v171; // [rsp+F0h] [rbp-268h]
  __int64 v172; // [rsp+F8h] [rbp-260h]
  __int32 v173; // [rsp+100h] [rbp-258h]
  char v174; // [rsp+107h] [rbp-251h]
  unsigned __int64 v175; // [rsp+108h] [rbp-250h]
  __int64 v176; // [rsp+110h] [rbp-248h]
  __int64 v177; // [rsp+118h] [rbp-240h]
  int v178; // [rsp+124h] [rbp-234h] BYREF
  const char *v179; // [rsp+128h] [rbp-230h] BYREF
  const char *v180; // [rsp+130h] [rbp-228h] BYREF
  __int64 v181; // [rsp+138h] [rbp-220h]
  const char *v182; // [rsp+140h] [rbp-218h] BYREF
  __int64 v183; // [rsp+148h] [rbp-210h]
  __m128i v184; // [rsp+150h] [rbp-208h] BYREF
  __m128i v185; // [rsp+160h] [rbp-1F8h] BYREF
  __int64 v186; // [rsp+170h] [rbp-1E8h]
  __m128i v187; // [rsp+180h] [rbp-1D8h] BYREF
  __m128i v188; // [rsp+190h] [rbp-1C8h] BYREF
  __int64 v189; // [rsp+1A0h] [rbp-1B8h]
  __m128i v190; // [rsp+1B0h] [rbp-1A8h] BYREF
  __m128i v191; // [rsp+1C0h] [rbp-198h] BYREF
  __int64 v192; // [rsp+1D0h] [rbp-188h]
  __m128i v193; // [rsp+1E0h] [rbp-178h] BYREF
  __m128i v194; // [rsp+1F0h] [rbp-168h] BYREF
  __m128i v195; // [rsp+210h] [rbp-148h] BYREF
  __m128i v196; // [rsp+220h] [rbp-138h] BYREF
  __int64 v197; // [rsp+230h] [rbp-128h]
  __m128i v198; // [rsp+240h] [rbp-118h] BYREF
  __m128i v199; // [rsp+250h] [rbp-108h] BYREF
  __int64 (__fastcall **v200)(); // [rsp+260h] [rbp-F8h]
  __int32 v201; // [rsp+268h] [rbp-F0h]
  char v202; // [rsp+26Ch] [rbp-ECh]
  void *ptr; // [rsp+270h] [rbp-E8h] BYREF
  __int64 v204; // [rsp+278h] [rbp-E0h]
  _QWORD v205[27]; // [rsp+280h] [rbp-D8h] BYREF

  qword_4AFB790 = 0;
  qword_4AFB798 = 0;
  v164 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_49EB010), (__m128i)(unsigned __int64)nullsub_266);
  v168 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_49EB020), (__m128i)(unsigned __int64)nullsub_294);
  v169 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&off_49D9118, (__m128i)(unsigned __int64)&byte_4AF97F0);
  v170 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&off_49D9118, (__m128i)(unsigned __int64)&byte_4AF98F0);
  v167 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_49EB030), (__m128i)(unsigned __int64)nullsub_328);
  v166 = _mm_loadh_ps((const double *)&off_49EB038);
  qword_4AFB780 = (__int64)&off_4A6E058;
  qword_4AFB788 = (unsigned int)qword_4AFB788 & 0x80000000;
  qword_4AFB7A0 = 0;
  qword_4AFB7A8 = 0;
  qword_4AFB7B0 = 0;
  qword_4AFB7B8 = 0;
  qword_4AFB7C0 = (__int64)&qword_4AFB7D0;
  qword_4AFB7C8 = 0x100000000LL;
  qword_4AFB7D8 = (__int64)&qword_4AFB7F0;
  qword_4AFB7E0 = 1;
  dword_4AFB7E8 = 0;
  byte_4AFB7EC = 1;
  v1 = sub_259AC30(a1, &qword_4AFB7D0);
  v2 = (unsigned int)qword_4AFB7C8;
  v3 = (unsigned int)qword_4AFB7C8 + 1LL;
  if ( HIDWORD(qword_4AFB7C8) < v3 )
  {
    sub_25D6060(&qword_4AFB7D0 - 2, &qword_4AFB7D0, v3, 8);
    v2 = (unsigned int)qword_4AFB7C8;
  }
  v4 = _mm_load_si128(&v164);
  *(_QWORD *)(qword_4AFB7C0 + 8 * v2) = v1;
  word_4AFB808 = 0;
  xmmword_4AFB818 = 0;
  qword_4AFB800 = (__int64)&off_4A64730;
  xmmword_4AFB828 = (__int128)v4;
  LODWORD(qword_4AFB7C8) = qword_4AFB7C8 + 1;
  qword_4AFB780 = (__int64)off_4A6DFF0;
  byte_4AFB7F8 = 0;
  qword_4AFB810 = (__int64)off_49D9168;
  sub_259F400(&qword_4AFB780, "enable-ipra", 11);
  byte_4AFB7F8 = 0;
  qword_4AFB7A8 = 83;
  word_4AFB808 = 256;
  BYTE2(qword_4AFB788) = BYTE2(qword_4AFB788) & 0x9F | 0x20;
  qword_4AFB7A0 = (__int64)"Enable interprocedural register allocation to reduce load/store at procedure calls.";
  sub_259EC40(&qword_4AFB780);
  __cxa_atexit(sub_1F6C9D0, &qword_4AFB780, &off_47CFE00);
  qword_4AFB6D0 = 0;
  qword_4AFB700 = (__int64)&qword_4AFB710;
  qword_4AFB6D8 = 0;
  qword_4AFB6C0 = (__int64)&off_4A6E058;
  qword_4AFB6C8 = (unsigned int)qword_4AFB6C8 & 0x80000000;
  qword_4AFB6E0 = 0;
  qword_4AFB6E8 = 0;
  qword_4AFB6F0 = 0;
  qword_4AFB6F8 = 0;
  qword_4AFB708 = 0x100000000LL;
  qword_4AFB718 = (__int64)&qword_4AFB730;
  qword_4AFB720 = 1;
  dword_4AFB728 = 0;
  byte_4AFB72C = 1;
  v5 = sub_259AC30(sub_1F6C9D0, &qword_4AFB710);
  v6 = (unsigned int)qword_4AFB708;
  v7 = (unsigned int)qword_4AFB708 + 1LL;
  if ( HIDWORD(qword_4AFB708) < v7 )
  {
    sub_25D6060(&qword_4AFB710 - 2, &qword_4AFB710, v7, 8);
    v6 = (unsigned int)qword_4AFB708;
  }
  v8 = _mm_load_si128(&v164);
  *(_QWORD *)(qword_4AFB700 + 8 * v6) = v5;
  word_4AFB748 = 0;
  xmmword_4AFB758 = 0;
  qword_4AFB740 = (__int64)&off_4A64730;
  xmmword_4AFB768 = (__int128)v8;
  LODWORD(qword_4AFB708) = qword_4AFB708 + 1;
  qword_4AFB6C0 = (__int64)off_4A6DFF0;
  byte_4AFB738 = 0;
  qword_4AFB750 = (__int64)off_49D9168;
  sub_259F400(&qword_4AFB6C0, "disable-post-ra", 15);
  qword_4AFB6E8 = 31;
  BYTE2(qword_4AFB6C8) = BYTE2(qword_4AFB6C8) & 0x9F | 0x20;
  qword_4AFB6E0 = (__int64)"Disable Post Regalloc Scheduler";
  sub_259EC40(&qword_4AFB6C0);
  __cxa_atexit(sub_1F6C9D0, &qword_4AFB6C0, &off_47CFE00);
  v204 = 22;
  ptr = "Disable branch folding";
  v171 = &v198;
  p_ptr = &ptr;
  v198.m128i_i32[0] = 1;
  sub_32D3630(qword_4AFB600, "disable-branch-fold", &v198);
  __cxa_atexit(sub_1F6C9D0, qword_4AFB600, &off_47CFE00);
  qword_4AFB550 = 0;
  qword_4AFB580 = (__int64)&qword_4AFB590;
  qword_4AFB558 = 0;
  qword_4AFB540 = (__int64)&off_4A6E058;
  qword_4AFB548 = (unsigned int)qword_4AFB548 & 0x80000000;
  qword_4AFB560 = 0;
  qword_4AFB568 = 0;
  qword_4AFB570 = 0;
  qword_4AFB578 = 0;
  qword_4AFB588 = 0x100000000LL;
  qword_4AFB598 = (__int64)&qword_4AFB5B0;
  qword_4AFB5A0 = 1;
  dword_4AFB5A8 = 0;
  byte_4AFB5AC = 1;
  v9 = sub_259AC30(sub_1F6C9D0, &qword_4AFB590);
  v10 = (unsigned int)qword_4AFB588;
  v11 = (unsigned int)qword_4AFB588 + 1LL;
  if ( HIDWORD(qword_4AFB588) < v11 )
  {
    sub_25D6060(&qword_4AFB590 - 2, &qword_4AFB590, v11, 8);
    v10 = (unsigned int)qword_4AFB588;
  }
  v12 = _mm_load_si128(&v164);
  *(_QWORD *)(qword_4AFB580 + 8 * v10) = v9;
  word_4AFB5C8 = 0;
  xmmword_4AFB5D8 = 0;
  qword_4AFB5C0 = (__int64)&off_4A64730;
  xmmword_4AFB5E8 = (__int128)v12;
  LODWORD(qword_4AFB588) = qword_4AFB588 + 1;
  qword_4AFB540 = (__int64)off_4A6DFF0;
  byte_4AFB5B8 = 0;
  qword_4AFB5D0 = (__int64)off_49D9168;
  sub_259F400(&qword_4AFB540, "disable-tail-duplicate", 22);
  qword_4AFB568 = 24;
  BYTE2(qword_4AFB548) = BYTE2(qword_4AFB548) & 0x9F | 0x20;
  qword_4AFB560 = (__int64)"Disable tail duplication";
  sub_259EC40(&qword_4AFB540);
  __cxa_atexit(sub_1F6C9D0, &qword_4AFB540, &off_47CFE00);
  qword_4AFB490 = 0;
  qword_4AFB4C0 = (__int64)&qword_4AFB4D0;
  qword_4AFB498 = 0;
  qword_4AFB480 = (__int64)&off_4A6E058;
  qword_4AFB488 = (unsigned int)qword_4AFB488 & 0x80000000;
  qword_4AFB4A0 = 0;
  qword_4AFB4A8 = 0;
  qword_4AFB4B0 = 0;
  qword_4AFB4B8 = 0;
  qword_4AFB4C8 = 0x100000000LL;
  qword_4AFB4D8 = (__int64)&qword_4AFB4F0;
  qword_4AFB4E0 = 1;
  dword_4AFB4E8 = 0;
  byte_4AFB4EC = 1;
  v13 = sub_259AC30(sub_1F6C9D0, &qword_4AFB4D0);
  v14 = (unsigned int)qword_4AFB4C8;
  v15 = (unsigned int)qword_4AFB4C8 + 1LL;
  if ( HIDWORD(qword_4AFB4C8) < v15 )
  {
    sub_25D6060(&qword_4AFB4D0 - 2, &qword_4AFB4D0, v15, 8);
    v14 = (unsigned int)qword_4AFB4C8;
  }
  v16 = _mm_load_si128(&v164);
  *(_QWORD *)(qword_4AFB4C0 + 8 * v14) = v13;
  word_4AFB508 = 0;
  xmmword_4AFB518 = 0;
  qword_4AFB500 = (__int64)&off_4A64730;
  xmmword_4AFB528 = (__int128)v16;
  LODWORD(qword_4AFB4C8) = qword_4AFB4C8 + 1;
  qword_4AFB480 = (__int64)off_4A6DFF0;
  byte_4AFB4F8 = 0;
  qword_4AFB510 = (__int64)off_49D9168;
  sub_259F400(&qword_4AFB480, "disable-early-taildup", 21);
  qword_4AFB4A8 = 48;
  BYTE2(qword_4AFB488) = BYTE2(qword_4AFB488) & 0x9F | 0x20;
  qword_4AFB4A0 = (__int64)"Disable pre-register allocation tail duplication";
  sub_259EC40(&qword_4AFB480);
  __cxa_atexit(sub_1F6C9D0, &qword_4AFB480, &off_47CFE00);
  qword_4AFB3D0 = 0;
  qword_4AFB400 = (__int64)&qword_4AFB410;
  qword_4AFB3D8 = 0;
  qword_4AFB3C0 = (__int64)&off_4A6E058;
  qword_4AFB3C8 = (unsigned int)qword_4AFB3C8 & 0x80000000;
  qword_4AFB3E0 = 0;
  qword_4AFB3E8 = 0;
  qword_4AFB3F0 = 0;
  qword_4AFB3F8 = 0;
  qword_4AFB408 = 0x100000000LL;
  qword_4AFB418 = (__int64)&qword_4AFB430;
  qword_4AFB420 = 1;
  dword_4AFB428 = 0;
  byte_4AFB42C = 1;
  v17 = sub_259AC30(sub_1F6C9D0, &qword_4AFB410);
  v18 = (unsigned int)qword_4AFB408;
  v19 = (unsigned int)qword_4AFB408 + 1LL;
  if ( HIDWORD(qword_4AFB408) < v19 )
  {
    sub_25D6060(&qword_4AFB410 - 2, &qword_4AFB410, v19, 8);
    v18 = (unsigned int)qword_4AFB408;
  }
  v20 = _mm_load_si128(&v164);
  *(_QWORD *)(qword_4AFB400 + 8 * v18) = v17;
  word_4AFB448 = 0;
  xmmword_4AFB458 = 0;
  qword_4AFB440 = (__int64)&off_4A64730;
  xmmword_4AFB468 = (__int128)v20;
  LODWORD(qword_4AFB408) = qword_4AFB408 + 1;
  qword_4AFB3C0 = (__int64)off_4A6DFF0;
  byte_4AFB438 = 0;
  qword_4AFB450 = (__int64)off_49D9168;
  sub_259F400(&qword_4AFB3C0, "disable-block-placement", 23);
  qword_4AFB3E8 = 42;
  BYTE2(qword_4AFB3C8) = BYTE2(qword_4AFB3C8) & 0x9F | 0x20;
  qword_4AFB3E0 = (__int64)"Disable probability-driven block placement";
  sub_259EC40(&qword_4AFB3C0);
  __cxa_atexit(sub_1F6C9D0, &qword_4AFB3C0, &off_47CFE00);
  v21 = v171;
  v22 = p_ptr;
  v204 = 48;
  ptr = "Collect probability-driven block placement stats";
  v198.m128i_i32[0] = 1;
  sub_32D37D0(qword_4AFB300, "enable-block-placement-stats", v171, p_ptr);
  __cxa_atexit(sub_1F6C9D0, qword_4AFB300, &off_47CFE00);
  v204 = 27;
  ptr = "Disable Stack Slot Coloring";
  v198.m128i_i32[0] = 1;
  sub_32D3970(qword_4AFB240, "disable-ssc", v21, v22);
  __cxa_atexit(sub_1F6C9D0, qword_4AFB240, &off_47CFE00);
  v204 = 37;
  ptr = "Disable Machine Dead Code Elimination";
  v198.m128i_i32[0] = 1;
  sub_32D3630(qword_4AFB180, "disable-machine-dce", v21);
  __cxa_atexit(sub_1F6C9D0, qword_4AFB180, &off_47CFE00);
  p_ptr = v22;
  ptr = "Disable Early If-conversion";
  v204 = 27;
  v198.m128i_i32[0] = 1;
  sub_32D3630(qword_4AFB0C0, "disable-early-ifcvt", v21);
  __cxa_atexit(sub_1F6C9D0, qword_4AFB0C0, &off_47CFE00);
  ptr = "Disable Machine LICM";
  v204 = 20;
  v198.m128i_i32[0] = 1;
  sub_32D3B10(qword_4AFB000, "disable-machine-licm", v21, p_ptr);
  __cxa_atexit(sub_1F6C9D0, qword_4AFB000, &off_47CFE00);
  v204 = 48;
  ptr = "Disable Machine Common Subexpression Elimination";
  v198.m128i_i32[0] = 1;
  sub_32D3630(qword_4AFAF40, "disable-machine-cse", v21);
  __cxa_atexit(sub_1F6C9D0, qword_4AFAF40, &off_47CFE00);
  qword_4AFAE90 = 0;
  qword_4AFAEC0 = (__int64)&qword_4AFAED0;
  qword_4AFAE98 = 0;
  qword_4AFAE80 = (__int64)&off_4A6E058;
  qword_4AFAE88 = (unsigned int)qword_4AFAE88 & 0x80000000;
  qword_4AFAEA0 = 0;
  qword_4AFAEA8 = 0;
  qword_4AFAEB0 = 0;
  qword_4AFAEB8 = 0;
  qword_4AFAEC8 = 0x100000000LL;
  qword_4AFAED8 = (__int64)&qword_4AFAEF0;
  qword_4AFAEE0 = 1;
  dword_4AFAEE8 = 0;
  byte_4AFAEEC = 1;
  v23 = sub_259AC30(sub_1F6C9D0, &qword_4AFAED0);
  v24 = (unsigned int)qword_4AFAEC8;
  v25 = (unsigned int)qword_4AFAEC8 + 1LL;
  if ( HIDWORD(qword_4AFAEC8) < v25 )
  {
    sub_25D6060(&qword_4AFAED0 - 2, &qword_4AFAED0, v25, 8);
    v24 = (unsigned int)qword_4AFAEC8;
  }
  v26 = _mm_load_si128(&v167);
  *(_QWORD *)(qword_4AFAEC0 + 8 * v24) = v23;
  xmmword_4AFAF18 = 0;
  xmmword_4AFAF28 = (__int128)v26;
  qword_4AFAF00 = (__int64)off_49D90F8;
  LODWORD(qword_4AFAEC8) = qword_4AFAEC8 + 1;
  byte_4AFAF0C = 0;
  qword_4AFAE80 = (__int64)off_4A6D1F8;
  dword_4AFAEF8 = 0;
  dword_4AFAF08 = 0;
  qword_4AFAF10 = (__int64)off_49D9198;
  sub_259F400(&qword_4AFAE80, "optimize-regalloc", 17);
  qword_4AFAEA8 = 54;
  BYTE2(qword_4AFAE88) = BYTE2(qword_4AFAE88) & 0x9F | 0x20;
  qword_4AFAEA0 = (__int64)"Enable optimized register allocation compilation path.";
  sub_259EC40(&qword_4AFAE80);
  __cxa_atexit(sub_23D2630, &qword_4AFAE80, &off_47CFE00);
  v27 = v171;
  ptr = "Disable Machine LICM";
  v28 = p_ptr;
  v204 = 20;
  v198.m128i_i32[0] = 1;
  sub_32D3CB0(qword_4AFADC0, "disable-postra-machine-licm", v171, p_ptr);
  __cxa_atexit(sub_1F6C9D0, qword_4AFADC0, &off_47CFE00);
  v204 = 23;
  ptr = "Disable Machine Sinking";
  v198.m128i_i32[0] = 1;
  sub_32D3B10(qword_4AFAD00, "disable-machine-sink", v27, v28);
  __cxa_atexit(sub_1F6C9D0, qword_4AFAD00, &off_47CFE00);
  v204 = 30;
  ptr = "Disable PostRA Machine Sinking";
  v198.m128i_i32[0] = 1;
  sub_32D3CB0(qword_4AFAC40, "disable-postra-machine-sink", v27, v28);
  __cxa_atexit(sub_1F6C9D0, qword_4AFAC40, &off_47CFE00);
  v204 = 36;
  ptr = "Disable Loop Strength Reduction Pass";
  v198.m128i_i32[0] = 1;
  sub_32D3970(qword_4AFAB80, "disable-lsr", v27, v28);
  __cxa_atexit(sub_1F6C9D0, qword_4AFAB80, &off_47CFE00);
  qword_4AFAAD0 = 0;
  qword_4AFAB00 = (__int64)&qword_4AFAB10;
  qword_4AFAAD8 = 0;
  qword_4AFAAC0 = (__int64)&off_4A6E058;
  qword_4AFAAC8 = (unsigned int)qword_4AFAAC8 & 0x80000000;
  qword_4AFAAE0 = 0;
  qword_4AFAAE8 = 0;
  qword_4AFAAF0 = 0;
  qword_4AFAAF8 = 0;
  qword_4AFAB08 = 0x100000000LL;
  qword_4AFAB18 = (__int64)&qword_4AFAB30;
  qword_4AFAB20 = 1;
  dword_4AFAB28 = 0;
  byte_4AFAB2C = 1;
  v29 = sub_259AC30(sub_1F6C9D0, &qword_4AFAB10);
  v30 = (unsigned int)qword_4AFAB08;
  v31 = (unsigned int)qword_4AFAB08 + 1LL;
  if ( HIDWORD(qword_4AFAB08) < v31 )
  {
    sub_25D6060(&qword_4AFAB10 - 2, &qword_4AFAB10, v31, 8);
    v30 = (unsigned int)qword_4AFAB08;
  }
  v32 = _mm_load_si128(&v164);
  *(_QWORD *)(qword_4AFAB00 + 8 * v30) = v29;
  xmmword_4AFAB58 = 0;
  xmmword_4AFAB68 = (__int128)v32;
  qword_4AFAB40 = (__int64)&off_4A64730;
  word_4AFAB48 = 0;
  LODWORD(qword_4AFAB08) = qword_4AFAB08 + 1;
  qword_4AFAAC0 = (__int64)off_4A6DFF0;
  byte_4AFAB38 = 0;
  qword_4AFAB50 = (__int64)off_49D9168;
  sub_259F400(&qword_4AFAAC0, "disable-constant-hoisting", 25);
  qword_4AFAAE8 = 24;
  BYTE2(qword_4AFAAC8) = BYTE2(qword_4AFAAC8) & 0x9F | 0x20;
  qword_4AFAAE0 = (__int64)"Disable ConstantHoisting";
  sub_259EC40(&qword_4AFAAC0);
  __cxa_atexit(sub_1F6C9D0, &qword_4AFAAC0, &off_47CFE00);
  v33 = p_ptr;
  v34 = v171;
  v204 = 23;
  ptr = "Disable Codegen Prepare";
  v198.m128i_i32[0] = 1;
  sub_32D3970(qword_4AFAA00, "disable-cgp", v171, p_ptr);
  __cxa_atexit(sub_1F6C9D0, qword_4AFAA00, &off_47CFE00);
  v204 = 29;
  ptr = "Disable Copy Propagation pass";
  v198.m128i_i32[0] = 1;
  sub_32D3E50(qword_4AFA940, "disable-copyprop", v34, v33);
  __cxa_atexit(sub_1F6C9D0, qword_4AFA940, &off_47CFE00);
  qword_4AFA890 = 0;
  qword_4AFA8C0 = (__int64)&qword_4AFA8D0;
  qword_4AFA898 = 0;
  qword_4AFA880 = (__int64)&off_4A6E058;
  qword_4AFA888 = (unsigned int)qword_4AFA888 & 0x80000000;
  qword_4AFA8A0 = 0;
  qword_4AFA8A8 = 0;
  qword_4AFA8B0 = 0;
  qword_4AFA8B8 = 0;
  qword_4AFA8C8 = 0x100000000LL;
  qword_4AFA8D8 = (__int64)&qword_4AFA8F0;
  qword_4AFA8E0 = 1;
  dword_4AFA8E8 = 0;
  byte_4AFA8EC = 1;
  v35 = sub_259AC30(sub_1F6C9D0, &qword_4AFA8D0);
  v36 = (unsigned int)qword_4AFA8C8;
  v37 = (unsigned int)qword_4AFA8C8 + 1LL;
  if ( HIDWORD(qword_4AFA8C8) < v37 )
  {
    sub_25D6060(&qword_4AFA8D0 - 2, &qword_4AFA8D0, v37, 8);
    v36 = (unsigned int)qword_4AFA8C8;
  }
  v38 = _mm_load_si128(&v164);
  *(_QWORD *)(qword_4AFA8C0 + 8 * v36) = v35;
  word_4AFA908 = 0;
  xmmword_4AFA918 = 0;
  qword_4AFA900 = (__int64)&off_4A64730;
  xmmword_4AFA928 = (__int128)v38;
  LODWORD(qword_4AFA8C8) = qword_4AFA8C8 + 1;
  qword_4AFA880 = (__int64)off_4A6DFF0;
  byte_4AFA8F8 = 0;
  qword_4AFA910 = (__int64)off_49D9168;
  sub_259F400(&qword_4AFA880, "disable-partial-libcall-inlining", 32);
  qword_4AFA8A8 = 32;
  BYTE2(qword_4AFA888) = BYTE2(qword_4AFA888) & 0x9F | 0x20;
  qword_4AFA8A0 = (__int64)"Disable Partial Libcall Inlining";
  sub_259EC40(&qword_4AFA880);
  __cxa_atexit(sub_1F6C9D0, &qword_4AFA880, &off_47CFE00);
  qword_4AFA7D0 = 0;
  qword_4AFA800 = (__int64)&qword_4AFA810;
  qword_4AFA7D8 = 0;
  qword_4AFA7C0 = (__int64)&off_4A6E058;
  qword_4AFA7C8 = (unsigned int)qword_4AFA7C8 & 0x80000000;
  qword_4AFA7E0 = 0;
  qword_4AFA7E8 = 0;
  qword_4AFA7F0 = 0;
  qword_4AFA7F8 = 0;
  qword_4AFA808 = 0x100000000LL;
  qword_4AFA818 = (__int64)&qword_4AFA830;
  qword_4AFA820 = 1;
  dword_4AFA828 = 0;
  byte_4AFA82C = 1;
  v39 = sub_259AC30(sub_1F6C9D0, &qword_4AFA810);
  v40 = (unsigned int)qword_4AFA808;
  v41 = (unsigned int)qword_4AFA808 + 1LL;
  if ( HIDWORD(qword_4AFA808) < v41 )
  {
    sub_25D6060(&qword_4AFA810 - 2, &qword_4AFA810, v41, 8);
    v40 = (unsigned int)qword_4AFA808;
  }
  v42 = _mm_load_si128(&v164);
  *(_QWORD *)(qword_4AFA800 + 8 * v40) = v39;
  word_4AFA848 = 0;
  xmmword_4AFA858 = 0;
  xmmword_4AFA868 = (__int128)v42;
  qword_4AFA840 = (__int64)&off_4A64730;
  LODWORD(qword_4AFA808) = qword_4AFA808 + 1;
  byte_4AFA838 = 0;
  qword_4AFA7C0 = (__int64)off_4A6DFF0;
  qword_4AFA850 = (__int64)off_49D9168;
  sub_259F400(&qword_4AFA7C0, "disable-atexit-based-global-dtor-lowering", 41);
  qword_4AFA7E8 = 60;
  BYTE2(qword_4AFA7C8) = BYTE2(qword_4AFA7C8) & 0x9F | 0x20;
  qword_4AFA7E0 = (__int64)"For MachO, disable atexit()-based global destructor lowering";
  sub_259EC40(&qword_4AFA7C0);
  __cxa_atexit(sub_1F6C9D0, &qword_4AFA7C0, &off_47CFE00);
  qword_4AFA710 = 0;
  qword_4AFA740 = (__int64)&qword_4AFA750;
  qword_4AFA718 = 0;
  qword_4AFA700 = (__int64)&off_4A6E058;
  qword_4AFA708 = (unsigned int)qword_4AFA708 & 0x80000000;
  qword_4AFA720 = 0;
  qword_4AFA728 = 0;
  qword_4AFA730 = 0;
  qword_4AFA738 = 0;
  qword_4AFA748 = 0x100000000LL;
  qword_4AFA758 = (__int64)&qword_4AFA770;
  qword_4AFA760 = 1;
  dword_4AFA768 = 0;
  byte_4AFA76C = 1;
  v43 = sub_259AC30(sub_1F6C9D0, &qword_4AFA750);
  v44 = (unsigned int)qword_4AFA748;
  v45 = (unsigned int)qword_4AFA748 + 1LL;
  if ( HIDWORD(qword_4AFA748) < v45 )
  {
    sub_25D6060(&qword_4AFA750 - 2, &qword_4AFA750, v45, 8);
    v44 = (unsigned int)qword_4AFA748;
  }
  v46 = _mm_load_si128(&v164);
  *(_QWORD *)(qword_4AFA740 + 8 * v44) = v43;
  word_4AFA788 = 0;
  xmmword_4AFA798 = 0;
  xmmword_4AFA7A8 = (__int128)v46;
  qword_4AFA780 = (__int64)&off_4A64730;
  LODWORD(qword_4AFA748) = qword_4AFA748 + 1;
  byte_4AFA778 = 0;
  qword_4AFA700 = (__int64)off_4A6DFF0;
  qword_4AFA790 = (__int64)off_49D9168;
  sub_259F400(&qword_4AFA700, "enable-implicit-null-checks", 27);
  qword_4AFA728 = 48;
  qword_4AFA720 = (__int64)"Fold null checks into faulting memory operations";
  byte_4AFA778 = 0;
  word_4AFA788 = 256;
  BYTE2(qword_4AFA708) = BYTE2(qword_4AFA708) & 0x9F | 0x20;
  sub_259EC40(&qword_4AFA700);
  __cxa_atexit(sub_1F6C9D0, &qword_4AFA700, &off_47CFE00);
  qword_4AFA650 = 0;
  qword_4AFA680 = (__int64)&qword_4AFA690;
  qword_4AFA658 = 0;
  qword_4AFA640 = (__int64)&off_4A6E058;
  qword_4AFA648 = (unsigned int)qword_4AFA648 & 0x80000000;
  qword_4AFA660 = 0;
  qword_4AFA668 = 0;
  qword_4AFA670 = 0;
  qword_4AFA678 = 0;
  qword_4AFA688 = 0x100000000LL;
  qword_4AFA698 = (__int64)&qword_4AFA6B0;
  qword_4AFA6A0 = 1;
  dword_4AFA6A8 = 0;
  byte_4AFA6AC = 1;
  v47 = sub_259AC30(sub_1F6C9D0, &qword_4AFA690);
  v48 = (unsigned int)qword_4AFA688;
  v49 = (unsigned int)qword_4AFA688 + 1LL;
  if ( HIDWORD(qword_4AFA688) < v49 )
  {
    sub_25D6060(&qword_4AFA690 - 2, &qword_4AFA690, v49, 8);
    v48 = (unsigned int)qword_4AFA688;
  }
  v50 = _mm_load_si128(&v164);
  *(_QWORD *)(qword_4AFA680 + 8 * v48) = v47;
  word_4AFA6C8 = 0;
  xmmword_4AFA6D8 = 0;
  xmmword_4AFA6E8 = (__int128)v50;
  qword_4AFA6C0 = (__int64)&off_4A64730;
  LODWORD(qword_4AFA688) = qword_4AFA688 + 1;
  byte_4AFA6B8 = 0;
  qword_4AFA640 = (__int64)off_4A6DFF0;
  qword_4AFA6D0 = (__int64)off_49D9168;
  sub_259F400(&qword_4AFA640, "disable-mergeicmps", 18);
  qword_4AFA668 = 23;
  qword_4AFA660 = (__int64)"Disable MergeICmps Pass";
  byte_4AFA6B8 = 0;
  word_4AFA6C8 = 256;
  BYTE2(qword_4AFA648) = BYTE2(qword_4AFA648) & 0x9F | 0x20;
  sub_259EC40(&qword_4AFA640);
  __cxa_atexit(sub_1F6C9D0, &qword_4AFA640, &off_47CFE00);
  v204 = 32;
  ptr = "Print LLVM IR input to isel pass";
  v198.m128i_i32[0] = 1;
  sub_32D3E50(qword_4AFA580, "print-isel-input", v171, p_ptr);
  __cxa_atexit(sub_1F6C9D0, qword_4AFA580, &off_47CFE00);
  qword_4AFA4D0 = 0;
  qword_4AFA500 = (__int64)&qword_4AFA510;
  qword_4AFA4D8 = 0;
  qword_4AFA4C0 = (__int64)&off_4A6E058;
  qword_4AFA4C8 = (unsigned int)qword_4AFA4C8 & 0x80000000;
  qword_4AFA4E0 = 0;
  qword_4AFA4E8 = 0;
  qword_4AFA4F0 = 0;
  qword_4AFA4F8 = 0;
  qword_4AFA508 = 0x100000000LL;
  qword_4AFA518 = (__int64)&qword_4AFA530;
  qword_4AFA520 = 1;
  dword_4AFA528 = 0;
  byte_4AFA52C = 1;
  v51 = sub_259AC30(sub_1F6C9D0, &qword_4AFA510);
  v52 = (unsigned int)qword_4AFA508;
  v53 = (unsigned int)qword_4AFA508 + 1LL;
  if ( HIDWORD(qword_4AFA508) < v53 )
  {
    sub_25D6060(&qword_4AFA510 - 2, &qword_4AFA510, v53, 8);
    v52 = (unsigned int)qword_4AFA508;
  }
  v54 = _mm_load_si128(&v167);
  *(_QWORD *)(qword_4AFA500 + 8 * v52) = v51;
  xmmword_4AFA558 = 0;
  xmmword_4AFA568 = (__int128)v54;
  qword_4AFA540 = (__int64)off_49D90F8;
  LODWORD(qword_4AFA508) = qword_4AFA508 + 1;
  byte_4AFA54C = 0;
  qword_4AFA4C0 = (__int64)off_4A6D1F8;
  dword_4AFA538 = 0;
  dword_4AFA548 = 0;
  qword_4AFA550 = (__int64)off_49D9198;
  sub_259F400(&qword_4AFA4C0, "verify-machineinstrs", 20);
  qword_4AFA4E8 = 29;
  BYTE2(qword_4AFA4C8) = BYTE2(qword_4AFA4C8) & 0x9F | 0x20;
  qword_4AFA4E0 = (__int64)"Verify generated machine code";
  sub_259EC40(&qword_4AFA4C0);
  __cxa_atexit(sub_23D2630, &qword_4AFA4C0, &off_47CFE00);
  qword_4AFA410 = 0;
  qword_4AFA440 = (__int64)&qword_4AFA450;
  qword_4AFA418 = 0;
  qword_4AFA400 = (__int64)&off_4A6E058;
  qword_4AFA408 = (unsigned int)qword_4AFA408 & 0x80000000;
  qword_4AFA420 = 0;
  qword_4AFA428 = 0;
  qword_4AFA430 = 0;
  qword_4AFA438 = 0;
  qword_4AFA448 = 0x100000000LL;
  qword_4AFA458 = (__int64)&qword_4AFA470;
  qword_4AFA460 = 1;
  dword_4AFA468 = 0;
  byte_4AFA46C = 1;
  v55 = sub_259AC30(sub_23D2630, &qword_4AFA450);
  v56 = (unsigned int)qword_4AFA448;
  v57 = (unsigned int)qword_4AFA448 + 1LL;
  if ( HIDWORD(qword_4AFA448) < v57 )
  {
    sub_25D6060(&qword_4AFA450 - 2, &qword_4AFA450, v57, 8);
    v56 = (unsigned int)qword_4AFA448;
  }
  v58 = _mm_load_si128(&v167);
  *(_QWORD *)(qword_4AFA440 + 8 * v56) = v55;
  xmmword_4AFA498 = 0;
  xmmword_4AFA4A8 = (__int128)v58;
  qword_4AFA480 = (__int64)off_49D90F8;
  LODWORD(qword_4AFA448) = qword_4AFA448 + 1;
  byte_4AFA48C = 0;
  qword_4AFA400 = (__int64)off_4A6D1F8;
  dword_4AFA478 = 0;
  dword_4AFA488 = 0;
  qword_4AFA490 = (__int64)off_49D9198;
  sub_259F400(&qword_4AFA400, "debugify-and-strip-all-safe", 27);
  qword_4AFA428 = 110;
  BYTE2(qword_4AFA408) = BYTE2(qword_4AFA408) & 0x9F | 0x20;
  qword_4AFA420 = (__int64)"Debugify MIR before and Strip debug after each pass except those known to be unsafe when debu"
                           "g info is present";
  sub_259EC40(&qword_4AFA400);
  __cxa_atexit(sub_23D2630, &qword_4AFA400, &off_47CFE00);
  qword_4AFA350 = 0;
  qword_4AFA380 = (__int64)&qword_4AFA390;
  qword_4AFA358 = 0;
  qword_4AFA340 = (__int64)&off_4A6E058;
  qword_4AFA348 = (unsigned int)qword_4AFA348 & 0x80000000;
  qword_4AFA360 = 0;
  qword_4AFA368 = 0;
  qword_4AFA370 = 0;
  qword_4AFA378 = 0;
  qword_4AFA388 = 0x100000000LL;
  qword_4AFA398 = (__int64)&qword_4AFA3B0;
  qword_4AFA3A0 = 1;
  dword_4AFA3A8 = 0;
  byte_4AFA3AC = 1;
  v59 = sub_259AC30(sub_23D2630, &qword_4AFA390);
  v60 = (unsigned int)qword_4AFA388;
  v61 = (unsigned int)qword_4AFA388 + 1LL;
  if ( HIDWORD(qword_4AFA388) < v61 )
  {
    sub_25D6060(&qword_4AFA390 - 2, &qword_4AFA390, v61, 8);
    v60 = (unsigned int)qword_4AFA388;
  }
  v62 = _mm_load_si128(&v167);
  *(_QWORD *)(qword_4AFA380 + 8 * v60) = v59;
  xmmword_4AFA3E8 = (__int128)v62;
  xmmword_4AFA3D8 = 0;
  qword_4AFA3C0 = (__int64)off_49D90F8;
  LODWORD(qword_4AFA388) = qword_4AFA388 + 1;
  byte_4AFA3CC = 0;
  qword_4AFA340 = (__int64)off_4A6D1F8;
  dword_4AFA3B8 = 0;
  dword_4AFA3C8 = 0;
  qword_4AFA3D0 = (__int64)off_49D9198;
  sub_259F400(&qword_4AFA340, "debugify-check-and-strip-all-safe", 33);
  qword_4AFA368 = 137;
  BYTE2(qword_4AFA348) = BYTE2(qword_4AFA348) & 0x9F | 0x20;
  qword_4AFA360 = (__int64)"Debugify MIR before, by checking and stripping the debug info after, each pass except those k"
                           "nown to be unsafe when debug info is present";
  sub_259EC40(&qword_4AFA340);
  __cxa_atexit(sub_23D2630, &qword_4AFA340, &off_47CFE00);
  v184.m128i_i64[1] = 0;
  v184.m128i_i64[0] = (__int64)&byte_3B9466E;
  v185.m128i_i64[1] = (__int64)&byte_3B9466E;
  v187.m128i_i64[0] = (__int64)"never";
  v188.m128i_i64[1] = (__int64)"Disable all outlining";
  v190.m128i_i64[0] = (__int64)"always";
  v191.m128i_i64[1] = (__int64)"Run on all functions guaranteed to be beneficial";
  v185.m128i_i32[0] = 1;
  v186 = 0;
  v187.m128i_i64[1] = 5;
  v188.m128i_i32[0] = 2;
  v189 = 21;
  v190.m128i_i64[1] = 6;
  v191.m128i_i32[0] = 1;
  v192 = 48;
  v63 = p_ptr;
  sub_2A860F0(
    (_DWORD)p_ptr,
    (unsigned int)&qword_4AFA340,
    v64,
    v65,
    v66,
    v67,
    (__int128)_mm_load_si128(&v190),
    (__int128)_mm_load_si128(&v191),
    48,
    (__int128)_mm_load_si128(&v187),
    (__int128)_mm_load_si128(&v188),
    21,
    (__int128)_mm_load_si128(&v184),
    (__int128)_mm_load_si128(&v185),
    0);
  qword_4AFA120 = (__int64)&qword_4AFA130;
  qword_4AFA0F0 = 0;
  qword_4AFA0E0 = (__int64)&off_4A6E058;
  qword_4AFA0E8 = (unsigned int)qword_4AFA0E8 & 0x80000000;
  qword_4AFA0F8 = 0;
  qword_4AFA100 = 0;
  qword_4AFA108 = 0;
  qword_4AFA110 = 0;
  qword_4AFA118 = 0;
  qword_4AFA128 = 0x100000000LL;
  qword_4AFA138 = (__int64)&qword_4AFA150;
  qword_4AFA140 = 1;
  dword_4AFA148 = 0;
  byte_4AFA14C = 1;
  v68 = sub_259AC30(v63, &qword_4AFA130);
  v69 = (unsigned int)qword_4AFA128;
  v70 = (unsigned int)qword_4AFA128 + 1LL;
  if ( HIDWORD(qword_4AFA128) < v70 )
  {
    sub_25D6060(&qword_4AFA130 - 2, &qword_4AFA130, v70, 8);
    v69 = (unsigned int)qword_4AFA128;
  }
  si128 = _mm_load_si128((const __m128i *)&v166);
  *(_QWORD *)(qword_4AFA120 + 8 * v69) = v68;
  xmmword_4AFA310 = 0;
  LODWORD(qword_4AFA128) = qword_4AFA128 + 1;
  qword_4AFA160 = (__int64)off_4A7E788;
  dword_4AFA158 = 0;
  byte_4AFA16C = 0;
  qword_4AFA0E0 = (__int64)&off_4A7E7F8;
  qword_4AFA180 = (__int64)qword_4AFA190;
  dword_4AFA168 = 0;
  qword_4AFA188 = 0x800000000LL;
  xmmword_4AFA170 = (__int128)si128;
  xmmword_4AFA320 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49EB040),
                                (__m128i)(unsigned __int64)nullsub_585);
  sub_259F400(&qword_4AFA0E0, "enable-machine-outliner", 23);
  v72 = ptr;
  qword_4AFA108 = 27;
  qword_4AFA100 = (__int64)"Enable the machine outliner";
  dword_4AFA158 = 0;
  byte_4AFA16C = 1;
  dword_4AFA168 = 0;
  BYTE2(qword_4AFA0E8) = BYTE2(qword_4AFA0E8) & 0x87 | 0x28;
  v166.m128_u64[0] = (unsigned __int64)ptr + 40 * (unsigned int)v204;
  if ( ptr != (void *)v166.m128_u64[0] )
  {
    v73 = (const __m128i *)v171;
    do
    {
      v74 = v72[4];
      v75 = v72[3];
      v76 = 1;
      v77 = v73;
      v78 = *((_DWORD *)v72 + 4);
      v79 = *v72;
      v200 = off_4A7E788;
      v80 = (unsigned int)qword_4AFA188;
      v81 = (void *)v72[1];
      v199.m128i_i64[1] = v74;
      v199.m128i_i64[0] = v75;
      v198.m128i_i64[0] = v79;
      v82 = qword_4AFA188;
      v198.m128i_i64[1] = (__int64)v81;
      v202 = 1;
      v201 = v78;
      if ( HIDWORD(qword_4AFA188) < (unsigned __int64)(unsigned int)qword_4AFA188 + 1 )
      {
        if ( (unsigned __int64)v73 < qword_4AFA180
          || (unsigned __int64)v73 >= qword_4AFA180 + 48 * (unsigned __int64)(unsigned int)qword_4AFA188 )
        {
          v175 = -1;
          v174 = 0;
        }
        else
        {
          v174 = 1;
          v175 = 0xAAAAAAAAAAAAAAABLL * (((__int64)v73->m128i_i64 - qword_4AFA180) >> 4);
        }
        v172 = v79;
        v171 = v81;
        v173 = v78;
        v155 = sub_25D5F70(&qword_4AFA190[-2], qword_4AFA190, (unsigned int)qword_4AFA188 + 1LL, 48, &v195);
        v81 = v171;
        v79 = v172;
        v156 = v155;
        v157 = (__int64 *)qword_4AFA180;
        v78 = v173;
        v158 = (const __m128i *)qword_4AFA180;
        v159 = qword_4AFA180 + 48LL * (unsigned int)qword_4AFA188;
        if ( qword_4AFA180 != v159 )
        {
          v171 = (void *)qword_4AFA180;
          do
          {
            v160 = _mm_loadu_si128(v158);
            v161 = v158[2].m128i_i32[2];
            v158 += 3;
            v155 += 48;
            *(__m128i *)(v155 - 48) = v160;
            v162 = _mm_loadu_si128(v158 - 2);
            *(_DWORD *)(v155 - 8) = v161;
            LOBYTE(v161) = v158[-1].m128i_i8[12];
            *(__m128i *)(v155 - 32) = v162;
            *(_BYTE *)(v155 - 4) = v161;
            *(_QWORD *)(v155 - 16) = off_4A7E788;
          }
          while ( (const __m128i *)v159 != v158 );
          v157 = (__int64 *)v171;
        }
        v163 = v195.m128i_i32[0];
        if ( v157 != qword_4AFA190 )
        {
          v177 = v195.m128i_i64[0];
          v176 = v156;
          v173 = v78;
          v172 = v79;
          v171 = v81;
          free(v157);
          v79 = v172;
          v81 = v171;
          v163 = v177;
          v156 = v176;
          v78 = v173;
        }
        v80 = (unsigned int)qword_4AFA188;
        qword_4AFA180 = v156;
        HIDWORD(qword_4AFA188) = v163;
        v82 = qword_4AFA188;
        if ( v174 )
        {
          v77 = (const __m128i *)(v156 + 48 * v175);
          v78 = v77[2].m128i_i32[2];
          v76 = v77[2].m128i_i8[12];
        }
        else
        {
          v76 = 1;
          v77 = v73;
        }
      }
      v72 += 5;
      v83 = qword_4AFA180 + 48 * v80;
      v84 = *((_QWORD *)&xmmword_4AFA170 + 1);
      *(__m128i *)v83 = _mm_loadu_si128(v77);
      v85 = _mm_loadu_si128(v77 + 1);
      *(_BYTE *)(v83 + 44) = v76;
      *(_DWORD *)(v83 + 40) = v78;
      *(_QWORD *)(v83 + 32) = off_4A7E788;
      *(__m128i *)(v83 + 16) = v85;
      LODWORD(qword_4AFA188) = v82 + 1;
      sub_259ED10(v84, v79, v81);
    }
    while ( (_QWORD *)v166.m128_u64[0] != v72 );
  }
  sub_259EC40(&qword_4AFA0E0);
  if ( ptr != v205 )
    free(ptr);
  __cxa_atexit(sub_32CEB80, &qword_4AFA0E0, &off_47CFE00);
  qword_4AFA030 = 0;
  qword_4AFA060 = (__int64)&qword_4AFA070;
  qword_4AFA038 = 0;
  qword_4AFA020 = (__int64)&off_4A6E058;
  qword_4AFA028 = (unsigned int)qword_4AFA028 & 0x80000000;
  qword_4AFA040 = 0;
  qword_4AFA048 = 0;
  qword_4AFA050 = 0;
  qword_4AFA058 = 0;
  qword_4AFA068 = 0x100000000LL;
  qword_4AFA078 = (__int64)&qword_4AFA090;
  qword_4AFA080 = 1;
  dword_4AFA088 = 0;
  byte_4AFA08C = 1;
  v86 = sub_259AC30(sub_32CEB80, &qword_4AFA070);
  v87 = (unsigned int)qword_4AFA068;
  v88 = (unsigned int)qword_4AFA068 + 1LL;
  if ( HIDWORD(qword_4AFA068) < v88 )
  {
    sub_25D6060(&qword_4AFA070 - 2, &qword_4AFA070, v88, 8);
    v87 = (unsigned int)qword_4AFA068;
  }
  v89 = _mm_load_si128(&v164);
  *(_QWORD *)(qword_4AFA060 + 8 * v87) = v86;
  word_4AFA0A8 = 0;
  xmmword_4AFA0B8 = 0;
  xmmword_4AFA0C8 = (__int128)v89;
  qword_4AFA0A0 = (__int64)&off_4A64730;
  LODWORD(qword_4AFA068) = qword_4AFA068 + 1;
  byte_4AFA098 = 0;
  qword_4AFA020 = (__int64)off_4A6DFF0;
  qword_4AFA0B0 = (__int64)off_49D9168;
  sub_259F400(&qword_4AFA020, "enable-global-merge-func", 24);
  qword_4AFA048 = 61;
  BYTE2(qword_4AFA028) = BYTE2(qword_4AFA028) & 0x9F | 0x20;
  qword_4AFA040 = (__int64)"Enable global merge functions that are based on hash function";
  sub_259EC40(&qword_4AFA020);
  __cxa_atexit(sub_1F6C9D0, &qword_4AFA020, &off_47CFE00);
  qword_4AF9F70 = 0;
  qword_4AF9FA0 = (__int64)&qword_4AF9FB0;
  qword_4AF9F78 = 0;
  qword_4AF9F60 = (__int64)&off_4A6E058;
  qword_4AF9F68 = (unsigned int)qword_4AF9F68 & 0x80000000;
  qword_4AF9F80 = 0;
  qword_4AF9F88 = 0;
  qword_4AF9F90 = 0;
  qword_4AF9F98 = 0;
  qword_4AF9FA8 = 0x100000000LL;
  qword_4AF9FB8 = (__int64)&qword_4AF9FD0;
  qword_4AF9FC0 = 1;
  dword_4AF9FC8 = 0;
  byte_4AF9FCC = 1;
  v90 = sub_259AC30(sub_1F6C9D0, &qword_4AF9FB0);
  v91 = (unsigned int)qword_4AF9FA8;
  v92 = (unsigned int)qword_4AF9FA8 + 1LL;
  if ( HIDWORD(qword_4AF9FA8) < v92 )
  {
    sub_25D6060(&qword_4AF9FB0 - 2, &qword_4AF9FB0, v92, 8);
    v91 = (unsigned int)qword_4AF9FA8;
  }
  v93 = _mm_load_si128(&v164);
  *(_QWORD *)(qword_4AF9FA0 + 8 * v91) = v90;
  word_4AF9FE8 = 0;
  xmmword_4AF9FF8 = 0;
  xmmword_4AFA008 = (__int128)v93;
  qword_4AF9FE0 = (__int64)&off_4A64730;
  LODWORD(qword_4AF9FA8) = qword_4AF9FA8 + 1;
  byte_4AF9FD8 = 0;
  qword_4AF9F60 = (__int64)off_4A6DFF0;
  qword_4AF9FF0 = (__int64)off_49D9168;
  sub_259F400(&qword_4AF9F60, "disable-cfi-fixup", 17);
  qword_4AF9F88 = 26;
  BYTE2(qword_4AF9F68) = BYTE2(qword_4AF9F68) & 0x9F | 0x20;
  qword_4AF9F80 = (__int64)"Disable the CFI fixup pass";
  sub_259EC40(&qword_4AF9F60);
  __cxa_atexit(sub_1F6C9D0, &qword_4AF9F60, &off_47CFE00);
  qword_4AF9EB0 = 0;
  qword_4AF9EE0 = (__int64)&qword_4AF9EF0;
  qword_4AF9EB8 = 0;
  qword_4AF9EA0 = (__int64)&off_4A6E058;
  qword_4AF9EA8 = (unsigned int)qword_4AF9EA8 & 0x80000000;
  qword_4AF9EC0 = 0;
  qword_4AF9EC8 = 0;
  qword_4AF9ED0 = 0;
  qword_4AF9ED8 = 0;
  qword_4AF9EE8 = 0x100000000LL;
  qword_4AF9EF8 = (__int64)&qword_4AF9F10;
  qword_4AF9F00 = 1;
  dword_4AF9F08 = 0;
  byte_4AF9F0C = 1;
  v94 = sub_259AC30(sub_1F6C9D0, &qword_4AF9EF0);
  v95 = (unsigned int)qword_4AF9EE8;
  v96 = (unsigned int)qword_4AF9EE8 + 1LL;
  if ( HIDWORD(qword_4AF9EE8) < v96 )
  {
    sub_25D6060(&qword_4AF9EF0 - 2, &qword_4AF9EF0, v96, 8);
    v95 = (unsigned int)qword_4AF9EE8;
  }
  v97 = _mm_load_si128(&v167);
  *(_QWORD *)(qword_4AF9EE0 + 8 * v95) = v94;
  xmmword_4AF9F38 = 0;
  xmmword_4AF9F48 = (__int128)v97;
  qword_4AF9F20 = (__int64)off_49D90F8;
  LODWORD(qword_4AF9EE8) = qword_4AF9EE8 + 1;
  byte_4AF9F2C = 0;
  qword_4AF9EA0 = (__int64)off_4A6D1F8;
  dword_4AF9F18 = 0;
  dword_4AF9F28 = 0;
  qword_4AF9F30 = (__int64)off_49D9198;
  sub_259F400(&qword_4AF9EA0, "fast-isel", 9);
  qword_4AF9EC8 = 38;
  BYTE2(qword_4AF9EA8) = BYTE2(qword_4AF9EA8) & 0x9F | 0x20;
  qword_4AF9EC0 = (__int64)"Enable the \"fast\" instruction selector";
  sub_259EC40(&qword_4AF9EA0);
  __cxa_atexit(sub_23D2630, &qword_4AF9EA0, &off_47CFE00);
  qword_4AF9DF0 = 0;
  qword_4AF9E20 = (__int64)&qword_4AF9E30;
  qword_4AF9DF8 = 0;
  qword_4AF9DE0 = (__int64)&off_4A6E058;
  qword_4AF9DE8 = (unsigned int)qword_4AF9DE8 & 0x80000000;
  qword_4AF9E00 = 0;
  qword_4AF9E08 = 0;
  qword_4AF9E10 = 0;
  qword_4AF9E18 = 0;
  qword_4AF9E28 = 0x100000000LL;
  qword_4AF9E38 = (__int64)&qword_4AF9E50;
  qword_4AF9E40 = 1;
  dword_4AF9E48 = 0;
  byte_4AF9E4C = 1;
  v98 = sub_259AC30(sub_23D2630, &qword_4AF9E30);
  v99 = (unsigned int)qword_4AF9E28;
  v100 = (unsigned int)qword_4AF9E28 + 1LL;
  if ( HIDWORD(qword_4AF9E28) < v100 )
  {
    sub_25D6060(&qword_4AF9E30 - 2, &qword_4AF9E30, v100, 8);
    v99 = (unsigned int)qword_4AF9E28;
  }
  v101 = _mm_load_si128(&v167);
  *(_QWORD *)(qword_4AF9E20 + 8 * v99) = v98;
  xmmword_4AF9E78 = 0;
  xmmword_4AF9E88 = (__int128)v101;
  qword_4AF9E60 = (__int64)off_49D90F8;
  LODWORD(qword_4AF9E28) = qword_4AF9E28 + 1;
  byte_4AF9E6C = 0;
  qword_4AF9DE0 = (__int64)off_4A6D1F8;
  dword_4AF9E58 = 0;
  dword_4AF9E68 = 0;
  qword_4AF9E70 = (__int64)off_49D9198;
  sub_259F400(&qword_4AF9DE0, "global-isel", 11);
  qword_4AF9E08 = 40;
  BYTE2(qword_4AF9DE8) = BYTE2(qword_4AF9DE8) & 0x9F | 0x20;
  qword_4AF9E00 = (__int64)"Enable the \"global\" instruction selector";
  sub_259EC40(&qword_4AF9DE0);
  __cxa_atexit(sub_23D2630, &qword_4AF9DE0, &off_47CFE00);
  qword_4AF9D30 = 0;
  qword_4AF9D60 = (__int64)&qword_4AF9D70;
  qword_4AF9D38 = 0;
  qword_4AF9D20 = (__int64)&off_4A6E058;
  qword_4AF9D28 = (unsigned int)qword_4AF9D28 & 0x80000000;
  qword_4AF9D40 = 0;
  qword_4AF9D48 = 0;
  qword_4AF9D50 = 0;
  qword_4AF9D58 = 0;
  qword_4AF9D68 = 0x100000000LL;
  qword_4AF9D78 = (__int64)&qword_4AF9D90;
  qword_4AF9D80 = 1;
  dword_4AF9D88 = 0;
  byte_4AF9D8C = 1;
  v102 = sub_259AC30(sub_23D2630, &qword_4AF9D70);
  v103 = (unsigned int)qword_4AF9D68;
  v104 = (unsigned int)qword_4AF9D68 + 1LL;
  if ( HIDWORD(qword_4AF9D68) < v104 )
  {
    sub_25D6060(&qword_4AF9D70 - 2, &qword_4AF9D70, v104, 8);
    v103 = (unsigned int)qword_4AF9D68;
  }
  v105 = _mm_load_si128(&v164);
  *(_QWORD *)(qword_4AF9D60 + 8 * v103) = v102;
  xmmword_4AF9DC8 = (__int128)v105;
  xmmword_4AF9DB8 = 0;
  qword_4AF9DA0 = (__int64)&off_4A64730;
  LODWORD(qword_4AF9D68) = qword_4AF9D68 + 1;
  byte_4AF9D98 = 0;
  qword_4AF9D20 = (__int64)off_4A6DFF0;
  word_4AF9DA8 = 0;
  qword_4AF9DB0 = (__int64)off_49D9168;
  sub_259F400(&qword_4AF9D20, "print-after-isel", 16);
  byte_4AF9D98 = 0;
  qword_4AF9D48 = 31;
  word_4AF9DA8 = 256;
  BYTE2(qword_4AF9D28) = BYTE2(qword_4AF9D28) & 0x9F | 0x20;
  qword_4AF9D40 = (__int64)"Print machine instrs after ISel";
  sub_259EC40(&qword_4AF9D20);
  __cxa_atexit(sub_1F6C9D0, &qword_4AF9D20, &off_47CFE00);
  v193.m128i_i64[1] = 1;
  v193.m128i_i64[0] = (__int64)"2";
  v194.m128i_i64[1] = (__int64)"Disable the abort but emit a diagnostic on failure";
  v195.m128i_i64[0] = (__int64)"1";
  v196.m128i_i64[1] = (__int64)"Enable the abort";
  v198.m128i_i64[0] = (__int64)"0";
  v199.m128i_i64[1] = (__int64)"Disable the abort";
  v194.m128i_i32[0] = 2;
  v195.m128i_i64[1] = 1;
  v196.m128i_i32[0] = 1;
  v197 = 16;
  v198.m128i_i64[1] = 1;
  v199.m128i_i32[0] = 0;
  v200 = (__int64 (__fastcall **)())(&word_10 + 1);
  v106 = p_ptr;
  sub_2A860F0(
    (_DWORD)p_ptr,
    (unsigned int)&qword_4AF9D20,
    v107,
    v108,
    v109,
    v110,
    (__int128)_mm_load_si128(&v198),
    (__int128)_mm_load_si128(&v199),
    17,
    (__int128)_mm_load_si128(&v195),
    (__int128)_mm_load_si128(&v196),
    16,
    (__int128)_mm_load_si128(&v193),
    (__int128)_mm_load_si128(&v194),
    50);
  v183 = 91;
  v182 = "Enable abort calls when \"global\" instruction selection fails to lower/select an instruction";
  LODWORD(v180) = 1;
  v166.m128_u64[0] = (unsigned __int64)&v182;
  v167.m128i_i64[0] = (__int64)&v180;
  sub_32D4000(&qword_4AF9AC0, "global-isel-abort", &v180, &v182, v106, v111, v164.m128i_i64[0], v164.m128i_i64[1]);
  if ( ptr != v205 )
    free(ptr);
  __cxa_atexit(sub_32CEC20, &qword_4AF9AC0, &off_47CFE00);
  qword_4AF9A10 = 0;
  qword_4AF9A40 = (__int64)&qword_4AF9A50;
  qword_4AF9A18 = 0;
  qword_4AF9A00 = (__int64)&off_4A6E058;
  qword_4AF9A08 = (unsigned int)qword_4AF9A08 & 0x80000000;
  qword_4AF9A20 = 0;
  qword_4AF9A28 = 0;
  qword_4AF9A30 = 0;
  qword_4AF9A38 = 0;
  qword_4AF9A48 = 0x100000000LL;
  qword_4AF9A58 = (__int64)&qword_4AF9A70;
  qword_4AF9A60 = 1;
  dword_4AF9A68 = 0;
  byte_4AF9A6C = 1;
  v112 = sub_259AC30(sub_32CEC20, &qword_4AF9A50);
  v113 = (unsigned int)qword_4AF9A48;
  v114 = (unsigned int)qword_4AF9A48 + 1LL;
  if ( HIDWORD(qword_4AF9A48) < v114 )
  {
    sub_25D6060(&qword_4AF9A50 - 2, &qword_4AF9A50, v114, 8);
    v113 = (unsigned int)qword_4AF9A48;
  }
  v115 = _mm_load_si128(&v164);
  *(_QWORD *)(qword_4AF9A40 + 8 * v113) = v112;
  word_4AF9A88 = 0;
  xmmword_4AF9A98 = 0;
  qword_4AF9A80 = (__int64)&off_4A64730;
  xmmword_4AF9AA8 = (__int128)v115;
  LODWORD(qword_4AF9A48) = qword_4AF9A48 + 1;
  qword_4AF9A00 = (__int64)off_4A6DFF0;
  byte_4AF9A78 = 0;
  qword_4AF9A90 = (__int64)off_49D9168;
  sub_259F400(&qword_4AF9A00, "disable-ra-fsprofile-loader", 27);
  byte_4AF9A78 = 0;
  qword_4AF9A28 = 40;
  word_4AF9A88 = 256;
  BYTE2(qword_4AF9A08) = BYTE2(qword_4AF9A08) & 0x9F | 0x20;
  qword_4AF9A20 = (__int64)"Disable MIRProfileLoader before RegAlloc";
  sub_259EC40(&qword_4AF9A00);
  __cxa_atexit(sub_1F6C9D0, &qword_4AF9A00, &off_47CFE00);
  qword_4AF9950 = 0;
  qword_4AF9980 = (__int64)&qword_4AF9990;
  qword_4AF9958 = 0;
  qword_4AF9940 = (__int64)&off_4A6E058;
  qword_4AF9948 = (unsigned int)qword_4AF9948 & 0x80000000;
  qword_4AF9960 = 0;
  qword_4AF9968 = 0;
  qword_4AF9970 = 0;
  qword_4AF9978 = 0;
  qword_4AF9988 = 0x100000000LL;
  qword_4AF9998 = (__int64)&qword_4AF99B0;
  qword_4AF99A0 = 1;
  dword_4AF99A8 = 0;
  byte_4AF99AC = 1;
  v116 = sub_259AC30(sub_1F6C9D0, &qword_4AF9990);
  v117 = (unsigned int)qword_4AF9988;
  v118 = (unsigned int)qword_4AF9988 + 1LL;
  if ( HIDWORD(qword_4AF9988) < v118 )
  {
    sub_25D6060(&qword_4AF9990 - 2, &qword_4AF9990, v118, 8);
    v117 = (unsigned int)qword_4AF9988;
  }
  v119 = _mm_load_si128(&v164);
  *(_QWORD *)(qword_4AF9980 + 8 * v117) = v116;
  word_4AF99C8 = 0;
  xmmword_4AF99D8 = 0;
  qword_4AF99C0 = (__int64)&off_4A64730;
  xmmword_4AF99E8 = (__int128)v119;
  LODWORD(qword_4AF9988) = qword_4AF9988 + 1;
  qword_4AF9940 = (__int64)off_4A6DFF0;
  byte_4AF99B8 = 0;
  qword_4AF99D0 = (__int64)off_49D9168;
  sub_259F400(&qword_4AF9940, "disable-layout-fsprofile-loader", 31);
  byte_4AF99B8 = 0;
  qword_4AF9968 = 46;
  word_4AF99C8 = 256;
  BYTE2(qword_4AF9948) = BYTE2(qword_4AF9948) & 0x9F | 0x20;
  qword_4AF9960 = (__int64)"Disable MIRProfileLoader before BlockPlacement";
  sub_259EC40(&qword_4AF9940);
  __cxa_atexit(sub_1F6C9D0, &qword_4AF9940, &off_47CFE00);
  qword_4AF9850 = 0;
  qword_4AF9880 = (__int64)&qword_4AF9890;
  qword_4AF9858 = 0;
  qword_4AF9840 = (__int64)&off_4A6E058;
  qword_4AF9848 = (unsigned int)qword_4AF9848 & 0x80000000;
  qword_4AF9860 = 0;
  qword_4AF9868 = 0;
  qword_4AF9870 = 0;
  qword_4AF9878 = 0;
  qword_4AF9888 = 0x100000000LL;
  qword_4AF9898 = (__int64)&qword_4AF98B0;
  qword_4AF98A0 = 1;
  dword_4AF98A8 = 0;
  byte_4AF98AC = 1;
  v120 = sub_259AC30(sub_1F6C9D0, &qword_4AF9890);
  v121 = (unsigned int)qword_4AF9888;
  v122 = (unsigned int)qword_4AF9888 + 1LL;
  if ( HIDWORD(qword_4AF9888) < v122 )
  {
    sub_25D6060(&qword_4AF9890 - 2, &qword_4AF9890, v122, 8);
    v121 = (unsigned int)qword_4AF9888;
  }
  v123 = _mm_load_si128(&v170);
  v124 = _mm_load_si128(&v168);
  *(_QWORD *)(qword_4AF9880 + 8 * v121) = v120;
  qword_4AF98B8 = &byte_4AF98C8;
  xmmword_4AF98D8 = (__int128)v123;
  xmmword_4AF9910 = 0;
  qword_4AF9840 = (__int64)&off_4A6DF88;
  xmmword_4AF9920 = (__int128)v124;
  LODWORD(qword_4AF9888) = qword_4AF9888 + 1;
  qword_4AF9908 = (__int64)off_49D92E8;
  qword_4AF98C0 = 0;
  byte_4AF98C8 = 0;
  qword_4AF98E8 = 0;
  byte_4AF98F0 = 0;
  byte_4AF9900 = 0;
  sub_259F400(&qword_4AF9840, "fs-profile-file", 15);
  ptr = v205;
  v204 = 0;
  LOBYTE(v205[0]) = 0;
  std::string::_M_assign();
  byte_4AF9900 = 1;
  std::string::_M_assign();
  if ( ptr != v205 )
    operator delete(ptr, v205[0] + 1LL);
  qword_4AF9878 = 8;
  qword_4AF9870 = (__int64)"filename";
  qword_4AF9860 = (__int64)"Flow Sensitive profile file name.";
  qword_4AF9868 = 33;
  BYTE2(qword_4AF9848) = BYTE2(qword_4AF9848) & 0x9F | 0x20;
  sub_259EC40(&qword_4AF9840);
  __cxa_atexit(sub_2283FB0, &qword_4AF9840, &off_47CFE00);
  qword_4AF9750 = 0;
  qword_4AF9780 = (__int64)&qword_4AF9790;
  qword_4AF9758 = 0;
  qword_4AF9740 = (__int64)&off_4A6E058;
  qword_4AF9748 = (unsigned int)qword_4AF9748 & 0x80000000;
  qword_4AF9760 = 0;
  qword_4AF9768 = 0;
  qword_4AF9770 = 0;
  qword_4AF9778 = 0;
  qword_4AF9788 = 0x100000000LL;
  qword_4AF9798 = (__int64)&qword_4AF97B0;
  qword_4AF97A0 = 1;
  dword_4AF97A8 = 0;
  byte_4AF97AC = 1;
  v125 = (void *)sub_259AC30(sub_2283FB0, &qword_4AF9790);
  v126 = (unsigned int)qword_4AF9788;
  if ( HIDWORD(qword_4AF9788) < (unsigned __int64)(unsigned int)qword_4AF9788 + 1 )
  {
    v171 = v125;
    sub_25D6060(&qword_4AF9790 - 2, &qword_4AF9790, (unsigned int)qword_4AF9788 + 1LL, 8);
    v126 = (unsigned int)qword_4AF9788;
    v125 = v171;
  }
  v127 = _mm_load_si128(&v169);
  v128 = _mm_load_si128(&v168);
  *(_QWORD *)(qword_4AF9780 + 8 * v126) = v125;
  qword_4AF97B8 = (__int64)&byte_4AF97C8;
  xmmword_4AF97D8 = (__int128)v127;
  xmmword_4AF9810 = 0;
  qword_4AF9740 = (__int64)&off_4A6DF88;
  xmmword_4AF9820 = (__int128)v128;
  LODWORD(qword_4AF9788) = qword_4AF9788 + 1;
  qword_4AF9808 = (__int64)off_49D92E8;
  qword_4AF97C0 = 0;
  byte_4AF97C8 = 0;
  qword_4AF97E8 = 0;
  byte_4AF97F0 = 0;
  byte_4AF9800 = 0;
  sub_259F400(&qword_4AF9740, "fs-remapping-file", 17);
  ptr = v205;
  v204 = 0;
  LOBYTE(v205[0]) = 0;
  std::string::_M_assign();
  byte_4AF9800 = 1;
  std::string::_M_assign();
  if ( ptr != v205 )
    operator delete(ptr, v205[0] + 1LL);
  qword_4AF9778 = 8;
  qword_4AF9770 = (__int64)"filename";
  qword_4AF9760 = (__int64)"Flow Sensitive profile remapping file name.";
  qword_4AF9768 = 43;
  BYTE2(qword_4AF9748) = BYTE2(qword_4AF9748) & 0x9F | 0x20;
  sub_259EC40(&qword_4AF9740);
  __cxa_atexit(sub_2283FB0, &qword_4AF9740, &off_47CFE00);
  qword_4AF9690 = 0;
  qword_4AF96C0 = (__int64)&qword_4AF96D0;
  qword_4AF9698 = 0;
  qword_4AF9680 = (__int64)&off_4A6E058;
  qword_4AF9688 = (unsigned int)qword_4AF9688 & 0x80000000;
  qword_4AF96A0 = 0;
  qword_4AF96A8 = 0;
  qword_4AF96B0 = 0;
  qword_4AF96B8 = 0;
  qword_4AF96C8 = 0x100000000LL;
  qword_4AF96D8 = (__int64)&qword_4AF96F0;
  qword_4AF96E0 = 1;
  dword_4AF96E8 = 0;
  byte_4AF96EC = 1;
  v129 = sub_259AC30(sub_2283FB0, &qword_4AF96D0);
  v130 = (unsigned int)qword_4AF96C8;
  v131 = (unsigned int)qword_4AF96C8 + 1LL;
  if ( HIDWORD(qword_4AF96C8) < v131 )
  {
    sub_25D6060(&qword_4AF96D0 - 2, &qword_4AF96D0, v131, 8);
    v130 = (unsigned int)qword_4AF96C8;
  }
  v132 = _mm_load_si128(&v164);
  *(_QWORD *)(qword_4AF96C0 + 8 * v130) = v129;
  xmmword_4AF9718 = 0;
  xmmword_4AF9728 = (__int128)v132;
  qword_4AF9700 = (__int64)&off_4A64730;
  word_4AF9708 = 0;
  LODWORD(qword_4AF96C8) = qword_4AF96C8 + 1;
  qword_4AF9680 = (__int64)off_4A6DFF0;
  byte_4AF96F8 = 0;
  qword_4AF9710 = (__int64)off_49D9168;
  sub_259F400(&qword_4AF9680, "misched-postra", 14);
  qword_4AF96A8 = 63;
  BYTE2(qword_4AF9688) = BYTE2(qword_4AF9688) & 0x9F | 0x20;
  qword_4AF96A0 = (__int64)"Run MachineScheduler post regalloc (independent of preRA sched)";
  sub_259EC40(&qword_4AF9680);
  __cxa_atexit(sub_1F6C9D0, &qword_4AF9680, &off_47CFE00);
  v133 = v166.m128_u64[0];
  v204 = 50;
  ptr = "Run live interval analysis earlier in the pipeline";
  LODWORD(v182) = 1;
  sub_32D3B10(qword_4AF95C0, "early-live-intervals", v166.m128_u64[0], p_ptr);
  __cxa_atexit(sub_1F6C9D0, qword_4AF95C0, &off_47CFE00);
  v166.m128_u64[0] = v133;
  ptr = "Disable replace with vector math call pass";
  v204 = 42;
  LODWORD(v182) = 1;
  sub_32D37D0(qword_4AF9500, "disable-replace-with-vec-lib", v133, p_ptr);
  __cxa_atexit(sub_1F6C9D0, qword_4AF9500, &off_47CFE00);
  v182 = "Resume compilation after a specific pass";
  v179 = &byte_3B9466E;
  v180 = "start-after";
  v171 = &v178;
  ptr = "pass-name";
  v178 = 1;
  v204 = 9;
  v183 = 40;
  v181 = 11;
  sub_32D4460(qword_4AF9400, v167.m128i_i64[0], v166.m128_u64[0], p_ptr, &v179, &v178);
  __cxa_atexit(sub_2283FB0, qword_4AF9400, &off_47CFE00);
  v179 = &byte_3B9466E;
  v182 = "Resume compilation before a specific pass";
  v180 = "start-before";
  ptr = "pass-name";
  v178 = 1;
  v204 = 9;
  v183 = 41;
  v181 = 12;
  sub_32D4460(qword_4AF9300, v167.m128i_i64[0], v166.m128_u64[0], p_ptr, &v179, v171);
  __cxa_atexit(sub_2283FB0, qword_4AF9300, &off_47CFE00);
  v179 = &byte_3B9466E;
  v180 = "stop-after";
  v182 = "Stop compilation after a specific pass";
  ptr = "pass-name";
  v178 = 1;
  v204 = 9;
  v183 = 38;
  v181 = 10;
  sub_32D4460(qword_4AF9200, v167.m128i_i64[0], v166.m128_u64[0], p_ptr, &v179, v171);
  __cxa_atexit(sub_2283FB0, qword_4AF9200, &off_47CFE00);
  v179 = &byte_3B9466E;
  ptr = "pass-name";
  v182 = "Stop compilation before a specific pass";
  v180 = "stop-before";
  v178 = 1;
  v204 = 9;
  v183 = 39;
  v181 = 11;
  sub_32D4460(qword_4AF9100, v167.m128i_i64[0], v166.m128_u64[0], p_ptr, &v179, v171);
  __cxa_atexit(sub_2283FB0, qword_4AF9100, &off_47CFE00);
  qword_4AF9050 = 0;
  qword_4AF9080 = (__int64)&qword_4AF9090;
  qword_4AF9058 = 0;
  qword_4AF9040 = (__int64)&off_4A6E058;
  qword_4AF9048 = (unsigned int)qword_4AF9048 & 0x80000000;
  qword_4AF9060 = 0;
  qword_4AF9068 = 0;
  qword_4AF9070 = 0;
  qword_4AF9078 = 0;
  qword_4AF9088 = 0x100000000LL;
  qword_4AF9098 = (__int64)&qword_4AF90B0;
  qword_4AF90A0 = 1;
  dword_4AF90A8 = 0;
  byte_4AF90AC = 1;
  v134 = sub_259AC30(sub_2283FB0, &qword_4AF9090);
  v135 = (unsigned int)qword_4AF9088;
  v136 = (unsigned int)qword_4AF9088 + 1LL;
  if ( HIDWORD(qword_4AF9088) < v136 )
  {
    sub_25D6060(&qword_4AF9090 - 2, &qword_4AF9090, v136, 8);
    v135 = (unsigned int)qword_4AF9088;
  }
  v137 = _mm_load_si128(&v164);
  *(_QWORD *)(qword_4AF9080 + 8 * v135) = v134;
  word_4AF90C8 = 0;
  xmmword_4AF90D8 = 0;
  qword_4AF90C0 = (__int64)&off_4A64730;
  xmmword_4AF90E8 = (__int128)v137;
  LODWORD(qword_4AF9088) = qword_4AF9088 + 1;
  qword_4AF9040 = (__int64)off_4A6DFF0;
  byte_4AF90B8 = 0;
  qword_4AF90D0 = (__int64)off_49D9168;
  sub_259F400(&qword_4AF9040, "enable-split-machine-functions", 30);
  qword_4AF9068 = 74;
  BYTE2(qword_4AF9048) = BYTE2(qword_4AF9048) & 0x9F | 0x20;
  qword_4AF9060 = (__int64)"Split out cold blocks from machine functions based on profile information.";
  sub_259EC40(&qword_4AF9040);
  __cxa_atexit(sub_1F6C9D0, &qword_4AF9040, &off_47CFE00);
  qword_4AF8F90 = 0;
  qword_4AF8FC0 = (__int64)&qword_4AF8FD0;
  qword_4AF8F98 = 0;
  qword_4AF8F80 = (__int64)&off_4A6E058;
  qword_4AF8F88 = (unsigned int)qword_4AF8F88 & 0x80000000;
  qword_4AF8FA0 = 0;
  qword_4AF8FA8 = 0;
  qword_4AF8FB0 = 0;
  qword_4AF8FB8 = 0;
  qword_4AF8FC8 = 0x100000000LL;
  qword_4AF8FD8 = (__int64)&qword_4AF8FF0;
  qword_4AF8FE0 = 1;
  dword_4AF8FE8 = 0;
  byte_4AF8FEC = 1;
  v138 = sub_259AC30(sub_1F6C9D0, &qword_4AF8FD0);
  v139 = (unsigned int)qword_4AF8FC8;
  v140 = (unsigned int)qword_4AF8FC8 + 1LL;
  if ( HIDWORD(qword_4AF8FC8) < v140 )
  {
    sub_25D6060(&qword_4AF8FD0 - 2, &qword_4AF8FD0, v140, 8);
    v139 = (unsigned int)qword_4AF8FC8;
  }
  v141 = _mm_load_si128(&v164);
  *(_QWORD *)(qword_4AF8FC0 + 8 * v139) = v138;
  word_4AF9008 = 0;
  xmmword_4AF9018 = 0;
  qword_4AF9000 = (__int64)&off_4A64730;
  xmmword_4AF9028 = (__int128)v141;
  LODWORD(qword_4AF8FC8) = qword_4AF8FC8 + 1;
  qword_4AF8F80 = (__int64)off_4A6DFF0;
  byte_4AF8FF8 = 0;
  qword_4AF9010 = (__int64)off_49D9168;
  sub_259F400(&qword_4AF8F80, "disable-expand-reductions", 25);
  byte_4AF8FF8 = 0;
  qword_4AF8FA8 = 57;
  word_4AF9008 = 256;
  BYTE2(qword_4AF8F88) = BYTE2(qword_4AF8F88) & 0x9F | 0x20;
  qword_4AF8FA0 = (__int64)"Disable the expand reduction intrinsics pass from running";
  sub_259EC40(&qword_4AF8F80);
  __cxa_atexit(sub_1F6C9D0, &qword_4AF8F80, &off_47CFE00);
  qword_4AF8ED0 = 0;
  qword_4AF8F00 = (__int64)&qword_4AF8F10;
  qword_4AF8ED8 = 0;
  qword_4AF8EC0 = (__int64)&off_4A6E058;
  qword_4AF8EC8 = (unsigned int)qword_4AF8EC8 & 0x80000000;
  qword_4AF8EE0 = 0;
  qword_4AF8EE8 = 0;
  qword_4AF8EF0 = 0;
  qword_4AF8EF8 = 0;
  qword_4AF8F08 = 0x100000000LL;
  qword_4AF8F18 = (__int64)&qword_4AF8F30;
  qword_4AF8F20 = 1;
  dword_4AF8F28 = 0;
  byte_4AF8F2C = 1;
  v142 = sub_259AC30(sub_1F6C9D0, &qword_4AF8F10);
  v143 = (unsigned int)qword_4AF8F08;
  v144 = (unsigned int)qword_4AF8F08 + 1LL;
  if ( HIDWORD(qword_4AF8F08) < v144 )
  {
    sub_25D6060(&qword_4AF8F10 - 2, &qword_4AF8F10, v144, 8);
    v143 = (unsigned int)qword_4AF8F08;
  }
  v145 = _mm_load_si128(&v164);
  *(_QWORD *)(qword_4AF8F00 + 8 * v143) = v142;
  word_4AF8F48 = 0;
  xmmword_4AF8F58 = 0;
  qword_4AF8F40 = (__int64)&off_4A64730;
  xmmword_4AF8F68 = (__int128)v145;
  LODWORD(qword_4AF8F08) = qword_4AF8F08 + 1;
  qword_4AF8EC0 = (__int64)off_4A6DFF0;
  byte_4AF8F38 = 0;
  qword_4AF8F50 = (__int64)off_49D9168;
  sub_259F400(&qword_4AF8EC0, "disable-select-optimize", 23);
  word_4AF8F48 = 257;
  byte_4AF8F38 = 1;
  qword_4AF8EE8 = 49;
  BYTE2(qword_4AF8EC8) = BYTE2(qword_4AF8EC8) & 0x9F | 0x20;
  qword_4AF8EE0 = (__int64)"Disable the select-optimization pass from running";
  sub_259EC40(&qword_4AF8EC0);
  __cxa_atexit(sub_1F6C9D0, &qword_4AF8EC0, &off_47CFE00);
  qword_4AF8E10 = 0;
  qword_4AF8E40 = (__int64)&qword_4AF8E50;
  qword_4AF8E18 = 0;
  qword_4AF8E00 = (__int64)&off_4A6E058;
  qword_4AF8E08 = (unsigned int)qword_4AF8E08 & 0x80000000;
  qword_4AF8E20 = 0;
  qword_4AF8E28 = 0;
  qword_4AF8E30 = 0;
  qword_4AF8E38 = 0;
  qword_4AF8E48 = 0x100000000LL;
  qword_4AF8E58 = (__int64)&qword_4AF8E70;
  qword_4AF8E60 = 1;
  dword_4AF8E68 = 0;
  byte_4AF8E6C = 1;
  v146 = sub_259AC30(sub_1F6C9D0, &qword_4AF8E50);
  v147 = (unsigned int)qword_4AF8E48;
  v148 = (unsigned int)qword_4AF8E48 + 1LL;
  if ( HIDWORD(qword_4AF8E48) < v148 )
  {
    sub_25D6060(&qword_4AF8E50 - 2, &qword_4AF8E50, v148, 8);
    v147 = (unsigned int)qword_4AF8E48;
  }
  v149 = _mm_load_si128(&v164);
  *(_QWORD *)(qword_4AF8E40 + 8 * v147) = v146;
  word_4AF8E88 = 0;
  xmmword_4AF8E98 = 0;
  qword_4AF8E80 = (__int64)&off_4A64730;
  xmmword_4AF8EA8 = (__int128)v149;
  LODWORD(qword_4AF8E48) = qword_4AF8E48 + 1;
  qword_4AF8E00 = (__int64)off_4A6DFF0;
  byte_4AF8E78 = 0;
  qword_4AF8E90 = (__int64)off_49D9168;
  sub_259F400(&qword_4AF8E00, "gc-empty-basic-blocks", 21);
  byte_4AF8E78 = 0;
  qword_4AF8E28 = 44;
  word_4AF8E88 = 256;
  BYTE2(qword_4AF8E08) = BYTE2(qword_4AF8E08) & 0x9F | 0x20;
  qword_4AF8E20 = (__int64)"Enable garbage-collecting empty basic blocks";
  sub_259EC40(&qword_4AF8E00);
  __cxa_atexit(sub_1F6C9D0, &qword_4AF8E00, &off_47CFE00);
  qword_4AF8D50 = 0;
  qword_4AF8D80 = (__int64)&qword_4AF8D90;
  qword_4AF8D58 = 0;
  qword_4AF8D40 = (__int64)&off_4A6E058;
  qword_4AF8D48 = (unsigned int)qword_4AF8D48 & 0x80000000;
  qword_4AF8D60 = 0;
  qword_4AF8D68 = 0;
  qword_4AF8D70 = 0;
  qword_4AF8D78 = 0;
  qword_4AF8D88 = 0x100000000LL;
  qword_4AF8D98 = (__int64)&qword_4AF8DB0;
  qword_4AF8DA0 = 1;
  dword_4AF8DA8 = 0;
  byte_4AF8DAC = 1;
  v150 = sub_259AC30(sub_1F6C9D0, &qword_4AF8D90);
  v151 = (unsigned int)qword_4AF8D88;
  v152 = (unsigned int)qword_4AF8D88 + 1LL;
  if ( HIDWORD(qword_4AF8D88) < v152 )
  {
    sub_25D6060(&qword_4AF8D90 - 2, &qword_4AF8D90, v152, 8);
    v151 = (unsigned int)qword_4AF8D88;
  }
  v153 = _mm_load_si128(&v164);
  *(_QWORD *)(qword_4AF8D80 + 8 * v151) = v150;
  word_4AF8DC8 = 0;
  xmmword_4AF8DD8 = 0;
  xmmword_4AF8DE8 = (__int128)v153;
  qword_4AF8DC0 = (__int64)&off_4A64730;
  LODWORD(qword_4AF8D88) = qword_4AF8D88 + 1;
  byte_4AF8DB8 = 0;
  qword_4AF8D40 = (__int64)off_4A6DFF0;
  qword_4AF8DD0 = (__int64)off_49D9168;
  sub_259F400(&qword_4AF8D40, "split-static-data", 17);
  byte_4AF8DB8 = 0;
  qword_4AF8D68 = 79;
  BYTE2(qword_4AF8D48) = BYTE2(qword_4AF8D48) & 0x9F | 0x20;
  word_4AF8DC8 = 256;
  qword_4AF8D60 = (__int64)"Split static data sections into hot and cold sections using profile information";
  sub_259EC40(&qword_4AF8D40);
  __cxa_atexit(sub_1F6C9D0, &qword_4AF8D40, &off_47CFE00);
  ptr = "Register allocator to use";
  v180 = (const char *)sub_32CD8A0;
  v204 = 25;
  v182 = (const char *)v167.m128i_i64[0];
  LODWORD(v179) = 1;
  sub_32D4740(qword_4AF8A80, "regalloc", &v179, v166.m128_u64[0], p_ptr);
  __cxa_atexit(sub_32CEE00, qword_4AF8A80, &off_47CFE00);
  qword_4AF8A48 = (__int64)"default";
  qword_4AF8A68 = (__int64)sub_32CD8A0;
  qword_4AF8A40 = 0;
  qword_4AF8A50 = 7;
  qword_4AF8A58 = (__int64)"pick register allocator based on -O option";
  qword_4AF8A60 = 42;
  sub_32D4C00(qword_4AF5B80, &qword_4AF8A40);
  return __cxa_atexit(sub_31E9AF0, &qword_4AF8A40, &off_47CFE00);
}

