void __fastcall sub_12A8D90(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *v6; // rbx
  __int64 v7; // r13
  __int64 v8; // r15
  unsigned __int8 **v9; // rbp
  __m128i si128; // xmm1
  __int64 v11; // rax
  char *v12; // rdx
  __int64 v13; // rax
  __int64 (__fastcall *v14)(__int64 *, _QWORD, _QWORD); // rax
  __int64 v15; // rax
  __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  __int64 v18; // rax
  unsigned __int64 v19; // rdx
  __int64 v20; // rax
  unsigned __int64 v21; // rdx
  __int64 v22; // rax
  unsigned __int64 v23; // rdx
  __int64 v24; // rax
  __int64 (__fastcall *v25)(__int64 *, _QWORD, _QWORD); // r15
  __int64 v26; // r15
  __int64 v27; // rcx
  unsigned __int64 v28; // rdx
  __int64 v29; // rax
  const char *v30; // rax
  char v31; // dl
  char **v32; // rax
  __int64 v33; // rax
  __int64 (__fastcall *v34)(__int64 *, _QWORD, _QWORD); // r15
  __int64 v35; // r15
  __int64 v36; // rcx
  unsigned __int64 v37; // rdx
  const char *v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // rax
  unsigned __int64 v43; // rdx
  unsigned __int64 v44; // rax
  __int64 v45; // rsi
  __int64 *v46; // r15
  __int64 *v47; // r14
  __m128 v48; // xmm0
  __int64 v49; // rbx
  unsigned __int8 *v50; // r14
  __int64 v51; // rdx
  __int64 v52; // rax
  void **v53; // r14
  __int64 v54; // rax
  void **v55; // rdx
  void **v56; // r15
  __int64 *v57; // rbp
  void **v58; // rbx
  void **v59; // rdi
  void **v60; // rdi
  void **v61; // r15
  void (__fastcall *v62)(void **, __int64, const char *, size_t); // r14
  const char *v63; // rax
  size_t v64; // rcx
  const char *v65; // r15
  __int64 v66; // rbx
  const __m128i *v67; // r13
  __int64 v68; // r14
  __int64 v69; // r15
  __int64 v70; // rdx
  __int64 v71; // rsi
  int v72; // eax
  __int64 v73; // rcx
  unsigned __int8 *v74; // rsi
  _QWORD *v75; // rbx
  void (__fastcall *v76)(_QWORD *); // rax
  __int64 v77; // r13
  __int64 v78; // rbp
  void *v79; // rdi
  _QWORD *v80; // rdi
  _QWORD *v81; // rdi
  void **v82; // r13
  void **v83; // rbp
  void *v84; // rdi
  _QWORD *v85; // rdi
  __int64 v86; // rax
  __int64 **v87; // r15
  unsigned __int8 **v88; // rax
  __int64 *v89; // rbp
  __int64 *v90; // rbx
  unsigned __int8 **v91; // r14
  char v92; // r14
  unsigned __int8 **v93; // rax
  const char *v94; // r14
  __int64 v95; // rax
  unsigned __int64 v96; // rdx
  __int64 v97; // rax
  unsigned __int64 v98; // rdx
  __int64 v99; // rax
  unsigned __int64 v100; // rdx
  __int64 v101; // r14
  __int64 v102; // rax
  __int64 v103; // rax
  unsigned __int64 v104; // rdx
  __int64 v105; // rax
  unsigned __int64 v106; // rdx
  __int64 v107; // rax
  __int64 v108; // rax
  __int64 v109; // rax
  __int64 v110; // rax
  __int64 v111; // rax
  __int64 v112; // rax
  __int64 v113; // rax
  __int64 v114; // rax
  __int64 v115; // rax
  __int64 v116; // rax
  __int64 v117; // rax
  __int64 v118; // rax
  __int64 v119; // rax
  __int64 v120; // rax
  __int64 v121; // rax
  __int64 v122; // rax
  __int64 v123; // rax
  __int64 v124; // rax
  unsigned __int64 v125; // rax
  __int64 v126; // rcx
  unsigned __int64 v127; // rdx
  __int64 v128; // rax
  unsigned __int64 v129; // rbx
  __int64 v130; // r14
  __int64 v131; // rdi
  const char *v132; // rsi
  __int64 v133; // rax
  __int64 *v134; // rax
  __int64 v135; // rax
  __int64 v136; // rcx
  unsigned __int64 v137; // rdx
  __int64 v138; // rax
  __int64 (__fastcall *v139)(__int64 *, _QWORD, _QWORD); // r15
  __int64 v140; // r15
  __int64 v141; // rcx
  unsigned __int64 v142; // rdx
  __int64 v143; // rax
  __int64 (__fastcall *v144)(__int64 *, _QWORD, _QWORD); // r15
  __int64 v145; // r15
  __int64 v146; // rcx
  unsigned __int64 v147; // rdx
  __int64 v148; // rdx
  int v149; // eax
  __int64 v150; // rax
  __int64 v151; // r15
  __int64 v152; // rdx
  __int64 v153; // r15
  __int64 *v154; // rbp
  __int64 v155; // rbx
  void *v156; // rdi
  __int64 v157; // rax
  __int64 (__fastcall *v158)(__int64 *, _QWORD, _QWORD); // rax
  __int64 v159; // rax
  __int64 v160; // rcx
  unsigned __int64 v161; // rdx
  const char *v162; // rdx
  size_t v163; // rax
  __int64 v164; // rax
  __int64 (__fastcall *v165)(__int64 *, _QWORD, _QWORD); // rax
  __int64 v166; // rax
  __int64 v167; // rcx
  unsigned __int64 v168; // rdx
  const char *v169; // r15
  size_t v170; // rax
  __int64 v171; // rax
  __int64 (__fastcall *v172)(__int64 *, _QWORD, _QWORD); // rax
  __int64 v173; // rax
  __int64 v174; // rcx
  unsigned __int64 v175; // rdx
  __m128i v176; // xmm5
  __int64 v177; // rax
  __int64 (__fastcall *v178)(__int64 *, _QWORD, _QWORD); // r15
  __int64 v179; // r15
  __int64 v180; // rcx
  unsigned __int64 v181; // rdx
  unsigned __int64 v182; // r14
  unsigned __int64 v183; // rbx
  __int64 v184; // rdi
  __int64 v185; // rax
  __int64 v186; // rcx
  unsigned __int64 v187; // rdx
  __int64 v188; // rdx
  __int64 v189; // [rsp+10h] [rbp-2E8h]
  unsigned __int8 **v190; // [rsp+10h] [rbp-2E8h]
  void **v191; // [rsp+10h] [rbp-2E8h]
  unsigned __int8 **v192; // [rsp+10h] [rbp-2E8h]
  __int64 (__fastcall *v193)(__int64 *, _QWORD, _QWORD); // [rsp+10h] [rbp-2E8h]
  __int64 v194; // [rsp+10h] [rbp-2E8h]
  char *v195; // [rsp+10h] [rbp-2E8h]
  __int64 (__fastcall *v196)(__int64 *, _QWORD, _QWORD); // [rsp+10h] [rbp-2E8h]
  __int64 v197; // [rsp+10h] [rbp-2E8h]
  __int64 (__fastcall *v198)(__int64 *, _QWORD, _QWORD); // [rsp+10h] [rbp-2E8h]
  __int64 v199; // [rsp+10h] [rbp-2E8h]
  __int64 v200; // [rsp+10h] [rbp-2E8h]
  __int64 v201; // [rsp+10h] [rbp-2E8h]
  __int64 v202; // [rsp+10h] [rbp-2E8h]
  __int64 v203; // [rsp+10h] [rbp-2E8h]
  __int64 v206; // [rsp+30h] [rbp-2C8h]
  __int64 (__fastcall *v209)(__int64 *, _QWORD, _QWORD); // [rsp+48h] [rbp-2B0h]
  __int64 v210; // [rsp+48h] [rbp-2B0h]
  __int64 v211; // [rsp+48h] [rbp-2B0h]
  __int64 v212; // [rsp+48h] [rbp-2B0h]
  __int64 v213; // [rsp+50h] [rbp-2A8h]
  __int64 *v214; // [rsp+58h] [rbp-2A0h] BYREF
  __int64 *v215; // [rsp+60h] [rbp-298h]
  __int64 v216; // [rsp+68h] [rbp-290h]
  __int64 v217; // [rsp+70h] [rbp-288h]
  __int64 v218; // [rsp+78h] [rbp-280h]
  const char *v219; // [rsp+90h] [rbp-268h]
  char *v220; // [rsp+B0h] [rbp-248h] BYREF
  __int64 v221; // [rsp+B8h] [rbp-240h]
  const char *v222; // [rsp+C0h] [rbp-238h]
  __int64 v223; // [rsp+C8h] [rbp-230h]
  __int16 v224; // [rsp+D0h] [rbp-228h]
  void *v225[2]; // [rsp+E0h] [rbp-218h] BYREF
  char *v226; // [rsp+F0h] [rbp-208h] BYREF
  __int64 v227; // [rsp+F8h] [rbp-200h]
  __int16 v228; // [rsp+100h] [rbp-1F8h]
  void *v229; // [rsp+110h] [rbp-1E8h] BYREF
  __int64 v230; // [rsp+118h] [rbp-1E0h]
  _QWORD v231[16]; // [rsp+120h] [rbp-1D8h] BYREF
  _BYTE ptr[24]; // [rsp+1A0h] [rbp-158h] BYREF
  __int64 v233; // [rsp+1B8h] [rbp-140h] BYREF
  void *v234; // [rsp+1C0h] [rbp-138h]
  __int16 v235; // [rsp+1E0h] [rbp-118h]

  v6 = (__int64 *)a6;
  v7 = *(_QWORD *)(a1 + 24);
  v216 = a1;
  v213 = *(_QWORD *)(v7 + 8);
  v229 = v231;
  v230 = 0x1000000001LL;
  v189 = sub_10DCD30(a6, 0xCA4u);
  v8 = sub_10DCD30((__int64)v6, 0xCC0u);
  v206 = sub_10DCD30((__int64)v6, 0xCE3u);
  sub_21B7CF0(v6, 36);
  sub_21B7CF0(v6, 345);
  sub_21B7CF0(v6, 3480);
  v231[0] = "-m";
  v9 = (unsigned __int8 **)ptr;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
  v231[1] = "elf_x86_64_fbsd";
  v11 = *(_QWORD *)(v7 + 5024);
  v12 = *(char **)(v7 + 5016);
  *(_QWORD *)ptr = &v233;
  v227 = v11;
  v13 = *v6;
  v225[0] = (void *)"--sysroot=";
  v14 = *(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD))(v13 + 16);
  v228 = 1283;
  v226 = v12;
  v209 = v14;
  *(__m128i *)&ptr[8] = si128;
  LODWORD(v230) = 2;
  sub_22538C0(v225, ptr);
  v15 = v209(v6, *(_QWORD *)ptr, *(_QWORD *)&ptr[8]);
  if ( *(__int64 **)ptr != &v233 )
  {
    v210 = v15;
    free(*(void **)ptr);
    v15 = v210;
  }
  v16 = (unsigned int)v230;
  v17 = (unsigned int)v230 + 1LL;
  if ( v17 > HIDWORD(v230) )
  {
    v212 = v15;
    sub_2237220(&v229, v231, v17, 8);
    v16 = (unsigned int)v230;
    v15 = v212;
  }
  *((_QWORD *)v229 + v16) = v15;
  LODWORD(v230) = v230 + 1;
  v211 = v8 | v189;
  LOBYTE(v214) = sub_21B7850(v6, 3132, 3020, (v8 | v189 | v206) == 0);
  if ( (_BYTE)v214 )
  {
    v103 = (unsigned int)v230;
    v104 = (unsigned int)v230 + 1LL;
    if ( v104 > HIDWORD(v230) )
    {
      sub_2237220(&v229, v231, v104, 8);
      v103 = (unsigned int)v230;
    }
    *((_QWORD *)v229 + v103) = "-pie";
    LODWORD(v230) = v230 + 1;
    if ( v189 )
      goto LABEL_7;
  }
  else if ( v189 )
  {
    goto LABEL_7;
  }
  v105 = (unsigned int)v230;
  v106 = (unsigned int)v230 + 1LL;
  if ( v106 > HIDWORD(v230) )
  {
    sub_2237220(&v229, v231, v106, 8);
    v105 = (unsigned int)v230;
  }
  *((_QWORD *)v229 + v105) = "--eh-frame-hdr";
  LODWORD(v230) = v230 + 1;
  v107 = (unsigned int)v230;
  if ( (unsigned __int64)(unsigned int)v230 + 1 > HIDWORD(v230) )
  {
    sub_2237220(&v229, v231, (unsigned int)v230 + 1LL, 8);
    v107 = (unsigned int)v230;
  }
  *((_QWORD *)v229 + v107) = "--hash-style=sysv";
  v108 = (unsigned int)(v230 + 1);
  LODWORD(v230) = v230 + 1;
  if ( !v206 )
  {
    sub_10DC5D0((__int64)&v229, (__int64)"--build-id=uuid");
    v108 = (unsigned int)v230;
  }
  if ( v108 + 1 > (unsigned __int64)HIDWORD(v230) )
  {
    sub_2237220(&v229, v231, v108 + 1, 8);
    v108 = (unsigned int)v230;
  }
  *((_QWORD *)v229 + v108) = "--unresolved-symbols=report-all";
  LODWORD(v230) = v230 + 1;
  v109 = (unsigned int)v230;
  if ( (unsigned __int64)(unsigned int)v230 + 1 > HIDWORD(v230) )
  {
    sub_2237220(&v229, v231, (unsigned int)v230 + 1LL, 8);
    v109 = (unsigned int)v230;
  }
  *((_QWORD *)v229 + v109) = "-z";
  LODWORD(v230) = v230 + 1;
  v110 = (unsigned int)v230;
  if ( (unsigned __int64)(unsigned int)v230 + 1 > HIDWORD(v230) )
  {
    sub_2237220(&v229, v231, (unsigned int)v230 + 1LL, 8);
    v110 = (unsigned int)v230;
  }
  *((_QWORD *)v229 + v110) = "now";
  LODWORD(v230) = v230 + 1;
  v111 = (unsigned int)v230;
  if ( (unsigned __int64)(unsigned int)v230 + 1 > HIDWORD(v230) )
  {
    sub_2237220(&v229, v231, (unsigned int)v230 + 1LL, 8);
    v111 = (unsigned int)v230;
  }
  *((_QWORD *)v229 + v111) = "-z";
  LODWORD(v230) = v230 + 1;
  v112 = (unsigned int)v230;
  if ( (unsigned __int64)(unsigned int)v230 + 1 > HIDWORD(v230) )
  {
    sub_2237220(&v229, v231, (unsigned int)v230 + 1LL, 8);
    v112 = (unsigned int)v230;
  }
  *((_QWORD *)v229 + v112) = "start-stop-visibility=hidden";
  LODWORD(v230) = v230 + 1;
  v113 = (unsigned int)v230;
  if ( (unsigned __int64)(unsigned int)v230 + 1 > HIDWORD(v230) )
  {
    sub_2237220(&v229, v231, (unsigned int)v230 + 1LL, 8);
    v113 = (unsigned int)v230;
  }
  *((_QWORD *)v229 + v113) = "-z";
  LODWORD(v230) = v230 + 1;
  v114 = (unsigned int)v230;
  if ( (unsigned __int64)(unsigned int)v230 + 1 > HIDWORD(v230) )
  {
    sub_2237220(&v229, v231, (unsigned int)v230 + 1LL, 8);
    v114 = (unsigned int)v230;
  }
  *((_QWORD *)v229 + v114) = "rodynamic";
  LODWORD(v230) = v230 + 1;
  v115 = (unsigned int)v230;
  if ( (unsigned __int64)(unsigned int)v230 + 1 > HIDWORD(v230) )
  {
    sub_2237220(&v229, v231, (unsigned int)v230 + 1LL, 8);
    v115 = (unsigned int)v230;
  }
  *((_QWORD *)v229 + v115) = "-z";
  LODWORD(v230) = v230 + 1;
  v116 = (unsigned int)v230;
  if ( (unsigned __int64)(unsigned int)v230 + 1 > HIDWORD(v230) )
  {
    sub_2237220(&v229, v231, (unsigned int)v230 + 1LL, 8);
    v116 = (unsigned int)v230;
  }
  *((_QWORD *)v229 + v116) = "common-page-size=0x4000";
  LODWORD(v230) = v230 + 1;
  v117 = (unsigned int)v230;
  if ( (unsigned __int64)(unsigned int)v230 + 1 > HIDWORD(v230) )
  {
    sub_2237220(&v229, v231, (unsigned int)v230 + 1LL, 8);
    v117 = (unsigned int)v230;
  }
  *((_QWORD *)v229 + v117) = "-z";
  LODWORD(v230) = v230 + 1;
  v118 = (unsigned int)v230;
  if ( (unsigned __int64)(unsigned int)v230 + 1 > HIDWORD(v230) )
  {
    sub_2237220(&v229, v231, (unsigned int)v230 + 1LL, 8);
    v118 = (unsigned int)v230;
  }
  *((_QWORD *)v229 + v118) = "max-page-size=0x4000";
  LODWORD(v230) = v230 + 1;
  v119 = (unsigned int)v230;
  if ( (unsigned __int64)(unsigned int)v230 + 1 > HIDWORD(v230) )
  {
    sub_2237220(&v229, v231, (unsigned int)v230 + 1LL, 8);
    v119 = (unsigned int)v230;
  }
  *((_QWORD *)v229 + v119) = "-z";
  LODWORD(v230) = v230 + 1;
  v120 = (unsigned int)v230;
  if ( (unsigned __int64)(unsigned int)v230 + 1 > HIDWORD(v230) )
  {
    sub_2237220(&v229, v231, (unsigned int)v230 + 1LL, 8);
    v120 = (unsigned int)v230;
  }
  *((_QWORD *)v229 + v120) = "dead-reloc-in-nonalloc=.debug_*=0xffffffffffffffff";
  LODWORD(v230) = v230 + 1;
  v121 = (unsigned int)v230;
  if ( (unsigned __int64)(unsigned int)v230 + 1 > HIDWORD(v230) )
  {
    sub_2237220(&v229, v231, (unsigned int)v230 + 1LL, 8);
    v121 = (unsigned int)v230;
  }
  *((_QWORD *)v229 + v121) = "-z";
  LODWORD(v230) = v230 + 1;
  v122 = (unsigned int)v230;
  if ( (unsigned __int64)(unsigned int)v230 + 1 > HIDWORD(v230) )
  {
    sub_2237220(&v229, v231, (unsigned int)v230 + 1LL, 8);
    v122 = (unsigned int)v230;
  }
  *((_QWORD *)v229 + v122) = "dead-reloc-in-nonalloc=.debug_ranges=0xfffffffffffffffe";
  LODWORD(v230) = v230 + 1;
  v123 = (unsigned int)v230;
  if ( (unsigned __int64)(unsigned int)v230 + 1 > HIDWORD(v230) )
  {
    sub_2237220(&v229, v231, (unsigned int)v230 + 1LL, 8);
    v123 = (unsigned int)v230;
  }
  *((_QWORD *)v229 + v123) = "-z";
  LODWORD(v230) = v230 + 1;
  v124 = (unsigned int)v230;
  if ( (unsigned __int64)(unsigned int)v230 + 1 > HIDWORD(v230) )
  {
    sub_2237220(&v229, v231, (unsigned int)v230 + 1LL, 8);
    v124 = (unsigned int)v230;
  }
  *((_QWORD *)v229 + v124) = "dead-reloc-in-nonalloc=.debug_loc=0xfffffffffffffffe";
  LODWORD(v230) = v230 + 1;
  *(_DWORD *)ptr = 3349;
  v125 = sub_21B6DA0(v6, ptr, 1);
  v126 = v6[1];
  v127 = HIDWORD(v125);
  v128 = v126 + 8LL * (unsigned int)v125;
  v218 = v128;
  if ( v126 + 8 * v127 == v128 )
    goto LABEL_204;
  v215 = v6;
  v129 = v126 + 8 * v127;
  v130 = v128;
  while ( 1 )
  {
    v131 = *(_QWORD *)(v129 - 8);
    if ( v131 )
    {
      if ( (unsigned __int8)sub_21B9810(v131, 3349) )
        break;
    }
    v129 -= 8LL;
    if ( v130 == v129 )
    {
      v6 = v215;
      goto LABEL_204;
    }
  }
  v182 = v129;
  v6 = v215;
  if ( v218 == v182 || !*(_QWORD *)(v182 - 8) )
  {
LABEL_204:
    sub_10DC5D0((__int64)&v229, (__int64)"--default-script");
    v132 = "static.script";
    if ( !v206 )
    {
      v132 = "prx.script";
      if ( !v211 )
        v132 = "main.script";
    }
    sub_10DC5D0((__int64)&v229, (__int64)v132);
  }
LABEL_7:
  if ( v206 )
  {
    v18 = (unsigned int)v230;
    v19 = (unsigned int)v230 + 1LL;
    if ( v19 > HIDWORD(v230) )
    {
      sub_2237220(&v229, v231, v19, 8);
      v18 = (unsigned int)v230;
    }
    *((_QWORD *)v229 + v18) = "-static";
    LODWORD(v230) = v230 + 1;
  }
  if ( sub_10DCD30((__int64)v6, 0xC83u) )
  {
    v20 = (unsigned int)v230;
    v21 = (unsigned int)v230 + 1LL;
    if ( v21 > HIDWORD(v230) )
    {
      sub_2237220(&v229, v231, v21, 8);
      v20 = (unsigned int)v230;
    }
    *((_QWORD *)v229 + v20) = "-export-dynamic";
    LODWORD(v230) = v230 + 1;
  }
  if ( v8 )
  {
    v22 = (unsigned int)v230;
    v23 = (unsigned int)v230 + 1LL;
    if ( v23 > HIDWORD(v230) )
    {
      sub_2237220(&v229, v231, v23, 8);
      v22 = (unsigned int)v230;
    }
    *((_QWORD *)v229 + v22) = "--shared";
    LODWORD(v230) = v230 + 1;
  }
  else if ( !v211 && !(_BYTE)v214 )
  {
    v97 = (unsigned int)v230;
    v98 = (unsigned int)v230 + 1LL;
    if ( v98 > HIDWORD(v230) )
    {
      sub_2237220(&v229, v231, v98, 8);
      v97 = (unsigned int)v230;
    }
    *((_QWORD *)v229 + v97) = "--image-base=0x400000";
    LODWORD(v230) = v230 + 1;
    if ( *(_DWORD *)(a4 + 8) != 1 )
      goto LABEL_20;
    goto LABEL_150;
  }
  if ( *(_DWORD *)(a4 + 8) == 1 )
  {
LABEL_150:
    v99 = (unsigned int)v230;
    v100 = (unsigned int)v230 + 1LL;
    if ( v100 > HIDWORD(v230) )
    {
      sub_2237220(&v229, v231, v100, 8);
      v99 = (unsigned int)v230;
    }
    *((_QWORD *)v229 + v99) = "-o";
    v101 = *(_QWORD *)a4;
    LODWORD(v230) = v230 + 1;
    v102 = (unsigned int)v230;
    if ( (unsigned __int64)(unsigned int)v230 + 1 > HIDWORD(v230) )
    {
      sub_2237220(&v229, v231, (unsigned int)v230 + 1LL, 8);
      v102 = (unsigned int)v230;
    }
    *((_QWORD *)v229 + v102) = v101;
    LODWORD(v230) = v230 + 1;
  }
LABEL_20:
  LOBYTE(v215) = sub_21B7850(v6, 888, 1194, 0);
  if ( (unsigned __int8)sub_21B7850(v6, 1894, 1447, 1) )
  {
    v94 = "--lto=thin";
    if ( *(_DWORD *)(v213 + 40) != 2 )
      v94 = "--lto=full";
    v95 = (unsigned int)v230;
    v96 = (unsigned int)v230 + 1LL;
    if ( v96 > HIDWORD(v230) )
    {
      sub_2237220(&v229, v231, v96, 8);
      v95 = (unsigned int)v230;
    }
    *((_QWORD *)v229 + v95) = v94;
    LODWORD(v230) = v230 + 1;
  }
  v220 = "-emit-jump-table-sizes-section";
  v226 = "-emit-jump-table-sizes-section";
  *(_QWORD *)ptr = &v233;
  v227 = v221;
  v228 = 771;
  v24 = *v6;
  v214 = &v233;
  v25 = *(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD))(v24 + 16);
  v225[0] = "-plugin-opt=";
  *(_QWORD *)&ptr[8] = 0;
  *(_QWORD *)&ptr[16] = 256;
  sub_22538C0(v225, ptr);
  v26 = v25(v6, *(_QWORD *)ptr, *(_QWORD *)&ptr[8]);
  if ( *(__int64 **)ptr != &v233 )
    free(*(void **)ptr);
  v27 = (unsigned int)v230;
  v28 = (unsigned int)v230 + 1LL;
  if ( v28 > HIDWORD(v230) )
  {
    sub_2237220(&v229, v231, v28, 8);
    v27 = (unsigned int)v230;
  }
  *((_QWORD *)v229 + v27) = v26;
  LODWORD(v230) = v230 + 1;
  if ( (_BYTE)v215 )
  {
    v220 = "-enable-jmc-instrument";
    v226 = "-enable-jmc-instrument";
    *(_QWORD *)ptr = &v233;
    v227 = v221;
    v228 = 771;
    v133 = *v6;
    v225[0] = "-plugin-opt=";
    *(_QWORD *)&ptr[8] = 0;
    v134 = *(__int64 **)(v133 + 16);
    *(_QWORD *)&ptr[16] = 256;
    v214 = v134;
    sub_22538C0(v225, ptr);
    v135 = ((__int64 (__fastcall *)(__int64 *, _QWORD, _QWORD))v214)(v6, *(_QWORD *)ptr, *(_QWORD *)&ptr[8]);
    if ( *(__int64 **)ptr != &v233 )
    {
      v214 = (__int64 *)v135;
      free(*(void **)ptr);
      v135 = (__int64)v214;
    }
    v136 = (unsigned int)v230;
    v137 = (unsigned int)v230 + 1LL;
    if ( v137 > HIDWORD(v230) )
    {
      v214 = (__int64 *)v135;
      sub_2237220(&v229, v231, v137, 8);
      v136 = (unsigned int)v230;
      v135 = (__int64)v214;
    }
    *((_QWORD *)v229 + v136) = v135;
    LODWORD(v230) = v230 + 1;
  }
  if ( (unsigned __int8)sub_21B7850(v6, 1828, 1419, 0) )
  {
    v220 = "-stack-size-section";
    v226 = "-stack-size-section";
    *(_QWORD *)ptr = &v233;
    v227 = v221;
    v228 = 771;
    v138 = *v6;
    v214 = &v233;
    v139 = *(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD))(v138 + 16);
    v225[0] = "-plugin-opt=";
    *(_QWORD *)&ptr[8] = 0;
    *(_QWORD *)&ptr[16] = 256;
    sub_22538C0(v225, ptr);
    v140 = v139(v6, *(_QWORD *)ptr, *(_QWORD *)&ptr[8]);
    if ( *(__int64 **)ptr != &v233 )
      free(*(void **)ptr);
    v141 = (unsigned int)v230;
    v142 = (unsigned int)v230 + 1LL;
    if ( v142 > HIDWORD(v230) )
    {
      sub_2237220(&v229, v231, v142, 8);
      v141 = (unsigned int)v230;
    }
    *((_QWORD *)v229 + v141) = v140;
    LODWORD(v230) = v230 + 1;
  }
  v29 = sub_10DCD30((__int64)v6, 0x212u);
  if ( v29 )
  {
    v30 = **(const char ***)(v29 + 48);
    if ( *v30 )
    {
      v31 = 2;
      v222 = v30;
      v220 = "-crash-diagnostics-dir=";
      v32 = &v220;
      v224 = 771;
    }
    else
    {
      v32 = (char **)"-crash-diagnostics-dir=";
      v220 = "-crash-diagnostics-dir=";
      v222 = v219;
      v31 = 3;
      v224 = 259;
      v217 = v221;
    }
    v226 = (char *)v32;
    *(_QWORD *)ptr = &v233;
    v227 = v217;
    v33 = *v6;
    v214 = &v233;
    v34 = *(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD))(v33 + 16);
    HIBYTE(v228) = v31;
    v225[0] = "-plugin-opt=";
    LOBYTE(v228) = 3;
    *(_QWORD *)&ptr[8] = 0;
    *(_QWORD *)&ptr[16] = 256;
    sub_22538C0(v225, ptr);
    v35 = v34(v6, *(_QWORD *)ptr, *(_QWORD *)&ptr[8]);
    if ( *(__int64 **)ptr != &v233 )
      free(*(void **)ptr);
    v36 = (unsigned int)v230;
    v37 = (unsigned int)v230 + 1LL;
    if ( v37 > HIDWORD(v230) )
    {
      sub_2237220(&v229, v231, v37, 8);
      v36 = (unsigned int)v230;
    }
    *((_QWORD *)v229 + v36) = v35;
    LODWORD(v230) = v230 + 1;
  }
  v38 = sub_11BCAF0((__int64)v6, (__int64 *)v213);
  if ( v39 )
  {
    v222 = v38;
    v226 = (char *)&v220;
    v143 = *v6;
    v225[0] = "-plugin-opt=";
    v220 = "jobs=";
    v223 = v39;
    v224 = 1283;
    v228 = 515;
    *(_QWORD *)ptr = &v233;
    v144 = *(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD))(v143 + 16);
    *(__m128i *)&ptr[8] = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
    sub_22538C0(v225, ptr);
    v145 = v144(v6, *(_QWORD *)ptr, *(_QWORD *)&ptr[8]);
    if ( *(__int64 **)ptr != &v233 )
      free(*(void **)ptr);
    v146 = (unsigned int)v230;
    v147 = (unsigned int)v230 + 1LL;
    if ( v147 > HIDWORD(v230) )
    {
      sub_2237220(&v229, v231, v147, 8);
      v146 = (unsigned int)v230;
    }
    *((_QWORD *)v229 + v146) = v145;
    LODWORD(v230) = v230 + 1;
  }
  sub_21B7F70(v6, &v229, 2204);
  sub_112D940(v7, (__int64)v6, (__int64)&v229, v40, v41);
  *(_QWORD *)ptr = 0xCF90000000FLL;
  *(_DWORD *)&ptr[8] = 3351;
  sub_21B6650(v6, &v229, ptr, 3);
  if ( sub_10DCD30((__int64)v6, 0xDBFu) )
  {
    v42 = (unsigned int)v230;
    v43 = (unsigned int)v230 + 1LL;
    if ( v43 > HIDWORD(v230) )
    {
      sub_2237220(&v229, v231, v43, 8);
      v42 = (unsigned int)v230;
    }
    *((_QWORD *)v229 + v42) = "--no-demangle";
    LODWORD(v230) = v230 + 1;
  }
  *(_QWORD *)ptr = 0xBDD00000BF0LL;
  v44 = sub_21B6DA0(v6, ptr, 2);
  v45 = v6[1];
  *(_QWORD *)&ptr[16] = 0xBDD00000BF0LL;
  v46 = (__int64 *)(v45 + 8LL * (unsigned int)v44);
  v47 = (__int64 *)(v45 + 8 * HIDWORD(v44));
  v214 = v47;
  v48 = _mm_loadh_ps((const double *)&v214);
  *(__m128 *)ptr = v48;
  if ( v46 == v47 )
    goto LABEL_47;
  v214 = v6;
  while ( 1 )
  {
    v49 = *v46;
    if ( *v46 )
    {
      if ( (unsigned __int8)sub_21B9810(*v46, 3056) || (unsigned __int8)sub_21B9810(v49, 3037) )
        break;
    }
    *(_QWORD *)ptr = ++v46;
    if ( v47 == v46 )
    {
      v6 = v214;
      goto LABEL_47;
    }
  }
  v6 = v214;
  v214 = v47;
  *(_QWORD *)&ptr[16] = 0xBDD00000BF0LL;
  v48 = _mm_loadh_ps((const double *)&v214);
  *(__m128 *)ptr = v48;
  if ( v46 == v47 )
  {
LABEL_47:
    (*(void (__fastcall **)(__int64, __int64 *, void **, const char *, const char *))(*(_QWORD *)v7 + 824LL))(
      v7,
      v6,
      &v229,
      "-l",
      &byte_22F0C30);
  }
  else
  {
    while ( 2 )
    {
      v86 = *v46;
      if ( *(_QWORD *)(*v46 + 16) )
        v86 = *(_QWORD *)(*v46 + 16);
      v87 = (__int64 **)(v46 + 1);
      *(_BYTE *)(v86 + 44) |= 1u;
      *(_QWORD *)ptr = v87;
      if ( v87 != (__int64 **)v47 )
      {
        v88 = v9;
        v89 = v6;
        v90 = v47;
        v91 = v88;
        while ( 1 )
        {
          if ( *v87 )
          {
            v214 = *v87;
            if ( (unsigned __int8)sub_21B9810(v214, 3056) || (unsigned __int8)sub_21B9810(v214, 3037) )
              break;
          }
          *(_QWORD *)ptr = ++v87;
          if ( v90 == (__int64 *)v87 )
          {
            v6 = v89;
            v9 = v91;
            if ( v189 )
              goto LABEL_49;
            goto LABEL_123;
          }
        }
        v46 = *(__int64 **)ptr;
        v93 = v91;
        v47 = v90;
        v6 = v89;
        v9 = v93;
        if ( v47 != *(__int64 **)ptr )
          continue;
      }
      break;
    }
  }
  if ( v189 )
  {
LABEL_49:
    sub_11C3660(v7, a5, (__int64)v6, (__int64)&v229, a3);
    goto LABEL_50;
  }
LABEL_123:
  if ( sub_10DE660((__int64)v6, 0xBEBu, 0xBF0u) )
  {
    v92 = 0;
    sub_11C3660(v7, a5, (__int64)v6, (__int64)&v229, a3);
    if ( sub_10DE660((__int64)v6, 0xBDDu, 0xBF0u) )
      goto LABEL_50;
  }
  else
  {
    if ( !v211 )
    {
      *(_QWORD *)ptr = "-l:";
      *(_QWORD *)&ptr[16] = "crt1.o";
      v233 = 6;
      LOWORD(v234) = 1283;
      v185 = sub_10DA6C0((__int64)v6, (__int64)v9);
      v186 = (unsigned int)v230;
      v187 = (unsigned int)v230 + 1LL;
      if ( v187 > HIDWORD(v230) )
      {
        v203 = v185;
        sub_2237220(&v229, v231, v187, 8);
        v186 = (unsigned int)v230;
        v185 = v203;
      }
      *((_QWORD *)v229 + v186) = v185;
      LODWORD(v230) = v230 + 1;
    }
    v226 = "crti.o";
    v157 = *v6;
    *(_QWORD *)ptr = v9 + 3;
    v228 = 1283;
    v158 = *(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD))(v157 + 16);
    v214 = (__int64 *)(v9 + 3);
    *(__m128i *)&ptr[8] = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
    v193 = v158;
    v225[0] = "-l:";
    v227 = 6;
    sub_22538C0(v225, v9);
    v159 = v193(v6, *(_QWORD *)ptr, *(_QWORD *)&ptr[8]);
    if ( *(__int64 **)ptr != v214 )
    {
      v194 = v159;
      free(*(void **)ptr);
      v159 = v194;
    }
    v160 = (unsigned int)v230;
    v161 = (unsigned int)v230 + 1LL;
    if ( v161 > HIDWORD(v230) )
    {
      v201 = v159;
      sub_2237220(&v229, v231, v161, 8);
      v160 = (unsigned int)v230;
      v159 = v201;
    }
    *((_QWORD *)v229 + v160) = v159;
    v162 = "crtbeginS.o";
    LODWORD(v230) = v230 + 1;
    if ( !v211 )
    {
      v162 = "crtbeginT.o";
      if ( !v206 )
        v162 = "crtbegin.o";
    }
    v195 = (char *)v162;
    v163 = strlen(v162);
    v214 = (__int64 *)(v9 + 3);
    v227 = v163;
    v164 = *v6;
    *(_QWORD *)ptr = v9 + 3;
    v165 = *(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD))(v164 + 16);
    v228 = 1283;
    v226 = v195;
    *(__m128i *)&ptr[8] = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
    v196 = v165;
    v225[0] = "-l:";
    sub_22538C0(v225, v9);
    v166 = v196(v6, *(_QWORD *)ptr, *(_QWORD *)&ptr[8]);
    if ( *(__int64 **)ptr != v214 )
    {
      v197 = v166;
      free(*(void **)ptr);
      v166 = v197;
    }
    v167 = (unsigned int)v230;
    v168 = (unsigned int)v230 + 1LL;
    if ( v168 > HIDWORD(v230) )
    {
      v200 = v166;
      sub_2237220(&v229, v231, v168, 8);
      v167 = (unsigned int)v230;
      v166 = v200;
    }
    *((_QWORD *)v229 + v167) = v166;
    LODWORD(v230) = v230 + 1;
    sub_11C3660(v7, a5, (__int64)v6, (__int64)&v229, a3);
    if ( sub_10DE660((__int64)v6, 0xBDDu, 0xBF0u) )
      goto LABEL_243;
    v92 = 1;
  }
  if ( (_BYTE)v215 )
  {
    sub_10DC5D0((__int64)&v229, (__int64)"--push-state");
    sub_10DC5D0((__int64)&v229, (__int64)"--whole-archive");
    sub_10DC5D0((__int64)&v229, (__int64)"-lSceJmc_nosubmission");
    sub_10DC5D0((__int64)&v229, (__int64)"--pop-state");
  }
  if ( sub_10DCD30((__int64)v6, 0xC6Au) )
    sub_10DC5D0((__int64)&v229, (__int64)"-lpthread");
  if ( v206 )
  {
    if ( !sub_10DCD30((__int64)v6, 0xBEEu) )
      sub_10DC5D0((__int64)&v229, (__int64)"-lstdc++");
    if ( !sub_10DCD30((__int64)v6, 0xBE4u) )
    {
      sub_10DC5D0((__int64)&v229, (__int64)"-lm");
      sub_10DC5D0((__int64)&v229, (__int64)"-lc");
    }
    sub_10DC5D0((__int64)&v229, (__int64)"-lcompiler_rt");
    sub_10DC5D0((__int64)&v229, (__int64)"-lkernel");
  }
  else
  {
    if ( !sub_10DE660((__int64)v6, 0xBE4u, 0xBEEu) )
      sub_10DC5D0((__int64)&v229, (__int64)"-lc_stub_weak");
    sub_10DC5D0((__int64)&v229, (__int64)"-lkernel_stub_weak");
  }
  if ( v92 )
  {
LABEL_243:
    v169 = "crtendS.o";
    if ( !v211 )
      v169 = "crtend.o";
    v170 = strlen(v169);
    v226 = (char *)v169;
    v227 = v170;
    v171 = *v6;
    *(_QWORD *)ptr = v9 + 3;
    v172 = *(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD))(v171 + 16);
    v228 = 1283;
    *(__m128i *)&ptr[8] = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
    v198 = v172;
    v225[0] = "-l:";
    sub_22538C0(v225, v9);
    v173 = v198(v6, *(_QWORD *)ptr, *(_QWORD *)&ptr[8]);
    if ( *(unsigned __int8 ***)ptr != v9 + 3 )
    {
      v199 = v173;
      free(*(void **)ptr);
      v173 = v199;
    }
    v174 = (unsigned int)v230;
    v175 = (unsigned int)v230 + 1LL;
    if ( v175 > HIDWORD(v230) )
    {
      v202 = v173;
      sub_2237220(&v229, v231, v175, 8);
      v174 = (unsigned int)v230;
      v173 = v202;
    }
    v176 = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
    *((_QWORD *)v229 + v174) = v173;
    v226 = "crtn.o";
    v177 = *v6;
    v225[0] = "-l:";
    v228 = 1283;
    *(_QWORD *)ptr = v9 + 3;
    v178 = *(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD))(v177 + 16);
    *(__m128i *)&ptr[8] = v176;
    LODWORD(v230) = v230 + 1;
    v227 = 6;
    sub_22538C0(v225, v9);
    v179 = v178(v6, *(_QWORD *)ptr, *(_QWORD *)&ptr[8]);
    if ( *(unsigned __int8 ***)ptr != v9 + 3 )
      free(*(void **)ptr);
    v180 = (unsigned int)v230;
    v181 = (unsigned int)v230 + 1LL;
    if ( v181 > HIDWORD(v230) )
    {
      sub_2237220(&v229, v231, v181, 8);
      v180 = (unsigned int)v230;
    }
    *((_QWORD *)v229 + v180) = v179;
    LODWORD(v230) = v230 + 1;
  }
LABEL_50:
  if ( sub_10DCD30((__int64)v6, 0x77Cu) )
  {
    sub_FC70B0((__int64)v9, *(_QWORD *)v213, 0, 495);
    v50 = *(unsigned __int8 **)ptr;
    if ( !*(_QWORD *)ptr )
    {
      v148 = *(_QWORD *)&ptr[8];
      v149 = *(_DWORD *)(*(_QWORD *)&ptr[8] + 14976LL);
      if ( v149 )
      {
        v150 = (unsigned int)(v149 - 1);
        *(_DWORD *)(*(_QWORD *)&ptr[8] + 14976LL) = v150;
        v50 = *(unsigned __int8 **)(v148 + 8 * v150 + 14848);
        v151 = *((unsigned int *)v50 + 134);
        *v50 = 0;
        v152 = *((_QWORD *)v50 + 66);
        *((_DWORD *)v50 + 106) = 0;
        v153 = v152 + (v151 << 6);
        if ( v152 != v153 )
        {
          v192 = v9;
          v154 = v6;
          v155 = v152;
          do
          {
            while ( 1 )
            {
              v153 -= 64;
              v156 = *(void **)(v153 + 24);
              if ( v156 == (void *)(v153 + 40) )
                break;
              operator delete(v156);
              if ( v155 == v153 )
                goto LABEL_226;
            }
          }
          while ( v155 != v153 );
LABEL_226:
          v6 = v154;
          v9 = v192;
        }
        *((_DWORD *)v50 + 134) = 0;
      }
      else
      {
        v50 = (unsigned __int8 *)operator new(0x3A0u);
        *v50 = 0;
        *((_QWORD *)v50 + 12) = v50 + 112;
        *((_QWORD *)v50 + 16) = v50 + 144;
        *((_QWORD *)v50 + 20) = v50 + 176;
        *((_QWORD *)v50 + 24) = v50 + 208;
        *((_QWORD *)v50 + 28) = v50 + 240;
        *((_QWORD *)v50 + 32) = v50 + 272;
        *((_QWORD *)v50 + 36) = v50 + 304;
        *((_QWORD *)v50 + 40) = v50 + 336;
        *((_QWORD *)v50 + 44) = v50 + 368;
        *((_QWORD *)v50 + 48) = v50 + 400;
        *((_QWORD *)v50 + 52) = v50 + 432;
        *((_QWORD *)v50 + 13) = 0;
        v50[112] = 0;
        *((_QWORD *)v50 + 17) = 0;
        v50[144] = 0;
        *((_QWORD *)v50 + 21) = 0;
        v50[176] = 0;
        *((_QWORD *)v50 + 25) = 0;
        v50[208] = 0;
        *((_QWORD *)v50 + 29) = 0;
        v50[240] = 0;
        *((_QWORD *)v50 + 33) = 0;
        v50[272] = 0;
        *((_QWORD *)v50 + 37) = 0;
        v50[304] = 0;
        *((_QWORD *)v50 + 41) = 0;
        v50[336] = 0;
        *((_QWORD *)v50 + 45) = 0;
        v50[368] = 0;
        *((_QWORD *)v50 + 49) = 0;
        v50[400] = 0;
        *((_QWORD *)v50 + 53) = 0x800000000LL;
        *((_QWORD *)v50 + 66) = v50 + 544;
        *((_QWORD *)v50 + 67) = 0x600000000LL;
      }
      *(_QWORD *)ptr = v50;
    }
    v50[*v50 + 1] = 1;
    v51 = *(_QWORD *)ptr;
    v52 = (unsigned __int8)**(_BYTE **)ptr;
    **(_BYTE **)ptr = v52 + 1;
    *(_QWORD *)(v51 + 8 * v52 + 16) = "-fuse-ld";
    sub_AEC220(v9, *(_BYTE **)(v7 + 16), *(_QWORD *)(v7 + 24));
    if ( (_BYTE)v235 )
    {
      sub_FC7790(*(__int64 *)&ptr[16], (__int64 *)v9, SHIBYTE(v235));
      *(_QWORD *)&ptr[16] = 0;
      v235 = 0;
    }
    if ( v234 != v9 + 6 )
      operator delete(v234);
    v53 = *(void ***)ptr;
    if ( *(_QWORD *)ptr )
    {
      v54 = *(_QWORD *)&ptr[8];
      if ( *(_QWORD *)&ptr[8] )
      {
        if ( *(_QWORD *)ptr >= *(_QWORD *)&ptr[8] && *(_QWORD *)ptr <= (unsigned __int64)(*(_QWORD *)&ptr[8] + 14848LL) )
        {
          v188 = *(unsigned int *)(*(_QWORD *)&ptr[8] + 14976LL);
          *(_DWORD *)(*(_QWORD *)&ptr[8] + 14976LL) = v188 + 1;
          *(_QWORD *)(v54 + 8 * v188 + 14848) = v53;
        }
        else
        {
          v55 = *(void ***)(*(_QWORD *)ptr + 528LL);
          v56 = &v55[8 * (unsigned __int64)*(unsigned int *)(*(_QWORD *)ptr + 536LL)];
          if ( v55 != v56 )
          {
            v190 = v9;
            v57 = v6;
            v58 = *(void ***)(*(_QWORD *)ptr + 528LL);
            do
            {
              while ( 1 )
              {
                v56 -= 8;
                v59 = (void **)v56[3];
                if ( v59 == v56 + 5 )
                  break;
                operator delete(v59);
                if ( v58 == v56 )
                  goto LABEL_64;
              }
            }
            while ( v58 != v56 );
LABEL_64:
            v6 = v57;
            v56 = (void **)v53[66];
            v9 = v190;
          }
          if ( v56 != v53 + 68 )
            free(v56);
          v60 = (void **)v53[52];
          v61 = v53 + 52;
          if ( v60 != v53 + 54 )
            free(v60);
          v191 = v53 + 12;
          do
          {
            while ( 1 )
            {
              v61 -= 4;
              if ( *v61 == v61 + 2 )
                break;
              operator delete(*v61);
              if ( v61 == v191 )
                goto LABEL_72;
            }
          }
          while ( v61 != v191 );
LABEL_72:
          operator delete(v53, 0x3A0u);
        }
      }
    }
  }
  v62 = *(void (__fastcall **)(void **, __int64, const char *, size_t))(*(_QWORD *)v7 + 816LL);
  v63 = (const char *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 808LL))(v7);
  v64 = 0;
  v65 = v63;
  if ( v63 )
    v64 = strlen(v63);
  v62(v225, v7, v65, v64);
  sub_112D530(v9, v7, (char *)v225[0]);
  v66 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD))(*v6 + 16))(v6, *(_QWORD *)ptr, *(_QWORD *)&ptr[8]);
  if ( *(unsigned __int8 ***)ptr != v9 + 2 )
    operator delete(*(void **)ptr);
  v67 = *(const __m128i **)a5;
  v68 = *(unsigned int *)(a5 + 8);
  v69 = operator new(0x208u);
  sub_1106AE0(v69, a3, v216, 0, (__int64)"@", v66, (__int64)&v229, v67, v68, a4, 1, 0);
  *(_QWORD *)ptr = v69;
  v70 = *(unsigned int *)(a2 + 160);
  v71 = v70 + 1;
  v72 = *(_DWORD *)(a2 + 160);
  if ( v70 + 1 > (unsigned __int64)*(unsigned int *)(a2 + 164) )
  {
    v183 = *(_QWORD *)(a2 + 152);
    v184 = a2 + 152;
    if ( v183 > (unsigned __int64)v9 || (unsigned __int64)v9 >= v183 + 8 * v70 )
    {
      sub_11673D0(v184, v71, v48, *(double *)si128.m128i_i64);
      v70 = *(unsigned int *)(a2 + 160);
      v73 = *(_QWORD *)(a2 + 152);
      v72 = *(_DWORD *)(a2 + 160);
    }
    else
    {
      sub_11673D0(v184, v71, v48, *(double *)si128.m128i_i64);
      v73 = *(_QWORD *)(a2 + 152);
      v70 = *(unsigned int *)(a2 + 160);
      v9 = (unsigned __int8 **)((char *)v9 + v73 - v183);
      v72 = *(_DWORD *)(a2 + 160);
    }
  }
  else
  {
    v73 = *(_QWORD *)(a2 + 152);
  }
  v74 = *v9;
  *v9 = nullptr;
  *(_QWORD *)(v73 + 8 * v70) = v74;
  v75 = *(_QWORD **)ptr;
  *(_DWORD *)(a2 + 160) = v72 + 1;
  if ( v75 )
  {
    v76 = *(void (__fastcall **)(_QWORD *))(*v75 + 8LL);
    if ( v76 == sub_10D4290 )
    {
      v77 = v75[58];
      v78 = v75[57];
      *v75 = &off_2BA8F30;
      if ( v77 != v78 )
      {
        do
        {
          if ( *(_BYTE *)(v78 + 32) && *(_QWORD *)v78 != v78 + 16 )
            operator delete(*(void **)v78);
          v78 += 40;
        }
        while ( v77 != v78 );
        v78 = v75[57];
      }
      if ( v78 )
        operator delete((void *)v78);
      v79 = (void *)v75[54];
      if ( v79 )
        operator delete(v79);
      v80 = (_QWORD *)v75[50];
      if ( v80 != v75 + 52 )
        operator delete(v80);
      v81 = (_QWORD *)v75[32];
      if ( v81 != v75 + 34 )
        free(v81);
      v82 = (void **)v75[29];
      v83 = (void **)v75[28];
      if ( v82 != v83 )
      {
        do
        {
          while ( *v83 != v83 + 2 )
          {
            operator delete(*v83);
            v83 += 4;
            if ( v82 == v83 )
            {
              v83 = (void **)v75[28];
              goto LABEL_99;
            }
          }
          v83 += 4;
        }
        while ( v82 != v83 );
        v83 = (void **)v75[28];
      }
LABEL_99:
      if ( v83 )
        operator delete(v83);
      v84 = (void *)v75[25];
      if ( v84 )
        operator delete(v84);
      v85 = (_QWORD *)v75[7];
      if ( v85 != v75 + 9 )
        free(v85);
      operator delete(v75, 0x208u);
    }
    else
    {
      v76(v75);
    }
  }
  if ( v225[0] != &v226 )
    operator delete(v225[0]);
  if ( v229 != v231 )
    free(v229);
}
