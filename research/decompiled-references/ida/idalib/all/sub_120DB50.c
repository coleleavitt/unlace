void __fastcall sub_120DB50(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        char **a4,
        __int64 a5,
        _QWORD *a6,
        double a7,
        double a8)
{
  _QWORD *v8; // rbx
  __int64 v9; // rax
  void **p_ptr; // r13
  __int64 v11; // rax
  unsigned __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __m128i *v18; // r12
  size_t v19; // rax
  void *v20; // rax
  char *v21; // rdx
  char *v22; // r15
  void **v23; // rbp
  const char *v24; // rdi
  size_t v25; // rsi
  __m128i v26; // rax
  unsigned __int64 v27; // rax
  __int64 v28; // rdx
  _QWORD *v29; // r14
  _QWORD *v30; // r15
  unsigned __int64 v31; // rax
  __int64 v32; // rdx
  _QWORD *v33; // r14
  _QWORD *v34; // r15
  unsigned __int64 v35; // rax
  __int64 v36; // rdx
  _QWORD *v37; // r14
  _QWORD *v38; // r15
  unsigned __int64 v39; // rax
  __int64 v40; // rdx
  _QWORD *v41; // r14
  _QWORD *v42; // r15
  __int64 v43; // rax
  unsigned __int64 v44; // rdx
  __int64 v45; // rax
  __int64 v46; // rax
  unsigned __int64 v47; // rdx
  unsigned __int64 v48; // rcx
  unsigned __int64 v49; // rax
  __int64 v50; // rdx
  _QWORD *v51; // r14
  _QWORD *v52; // r15
  __int64 v53; // rax
  unsigned __int64 v54; // rdx
  unsigned __int64 v55; // rax
  __int64 v56; // rdx
  _QWORD *v57; // r14
  _QWORD *v58; // r15
  __int64 v59; // rax
  unsigned __int64 v60; // rdx
  unsigned __int64 v61; // rcx
  char *v62; // r14
  __int64 v63; // rax
  unsigned __int64 v64; // rax
  __int64 v65; // rdx
  _QWORD *v66; // r15
  size_t v67; // rdx
  __m128i v68; // xmm0
  size_t v69; // rbp
  __int64 v70; // rbx
  void **v71; // r14
  __int64 v72; // rsi
  __int64 v73; // rcx
  __int64 v74; // r8
  int v75; // eax
  unsigned __int64 v76; // rax
  __int64 v77; // rdx
  _QWORD *v78; // r14
  _QWORD *v79; // r15
  __int64 v80; // rax
  __int64 v81; // rax
  __int64 v82; // rax
  unsigned __int64 v83; // rdx
  __int64 v84; // rax
  _QWORD *v85; // rdx
  void **v86; // rcx
  __m128i *v87; // r8
  _QWORD *v88; // r13
  _QWORD *v89; // rbx
  __int64 v90; // rax
  _QWORD *v91; // r15
  void **v92; // rbp
  void **v93; // r14
  __int64 v94; // rsi
  char v95; // al
  __int64 v96; // rax
  unsigned __int64 v97; // rax
  __int64 v98; // rdx
  size_t *v99; // r15
  size_t *v100; // r14
  size_t v101; // rbx
  unsigned __int64 v102; // rax
  __int64 v103; // rdx
  _QWORD *v104; // r15
  _QWORD *v105; // r14
  size_t *v106; // rdx
  size_t v107; // rsi
  size_t *v108; // r15
  size_t v109; // rax
  __m128i *v110; // rax
  void **v111; // r12
  _QWORD *v112; // rbp
  size_t *v113; // rbx
  __m128i *v114; // r14
  __m128i *v115; // rax
  __m128i *v116; // rax
  void **v117; // r12
  _QWORD *v118; // rbp
  __m128i *v119; // rbx
  __int64 v120; // rcx
  __int64 v121; // rax
  __m128i *v122; // rax
  unsigned __int64 v123; // rax
  __int64 v124; // rcx
  __int64 *v125; // rdx
  size_t v126; // rcx
  __m128 v127; // xmm0
  __int64 *v128; // r14
  void **v129; // r12
  __int64 *v130; // rbp
  __int64 v131; // rbx
  __m128i *v132; // r15
  __int64 v133; // rsi
  __int64 v134; // rax
  unsigned __int64 v135; // rdx
  __int64 v136; // rax
  unsigned __int64 v137; // rdx
  __int64 v138; // rax
  unsigned __int64 v139; // rdx
  __int64 v140; // rax
  unsigned __int64 v141; // rdx
  size_t v142; // rcx
  __int64 *v143; // rdx
  __m128i *v144; // r8
  __int64 *v145; // r15
  void **v146; // r12
  __int64 v147; // rax
  __int64 *v148; // rbx
  void **v149; // rbp
  __m128i *v150; // r14
  __int64 v151; // rsi
  const __m128i *v152; // r14
  __int64 v153; // r15
  void *v154; // rbx
  __int64 v155; // rdx
  __int64 v156; // rsi
  int v157; // eax
  __int64 v158; // rcx
  void *v159; // rsi
  _QWORD *v160; // rbx
  void (__fastcall *v161)(_QWORD *); // rax
  __int64 v162; // r14
  __int64 v163; // rbp
  void *v164; // rdi
  _QWORD *v165; // rdi
  _QWORD *v166; // rdi
  void **v167; // r14
  void **v168; // rbp
  void *v169; // rdi
  _QWORD *v170; // rdi
  void **v171; // rbp
  void **v172; // rbx
  void **v173; // rbp
  void **v174; // rbx
  void **v175; // rbp
  void **v176; // rbx
  void **v177; // rbp
  void **v178; // rbx
  void **v179; // rbp
  void **v180; // rbx
  __int64 v181; // rax
  __int64 v182; // rax
  unsigned __int64 v183; // rdx
  __int64 v184; // rax
  __int64 v185; // rax
  unsigned __int64 v186; // rdx
  __int64 v187; // rax
  __int64 v188; // rax
  unsigned __int64 v189; // rdx
  void *v190; // rax
  char *v191; // rdx
  __int64 v192; // rax
  __int64 v193; // rcx
  unsigned __int64 v194; // rdx
  __int64 v195; // rax
  bool v196; // zf
  __int64 v197; // rax
  unsigned __int64 v198; // rdx
  __int64 v199; // rax
  unsigned __int64 v200; // rdx
  __int64 v201; // rax
  __int64 v202; // rax
  __int64 v203; // rax
  __int64 v204; // rax
  __int64 v205; // rax
  __int64 v206; // rax
  unsigned __int64 v207; // rbx
  __int64 v208; // rdi
  __int64 v209; // rax
  __int16 v210; // ax
  size_t v211; // rcx
  unsigned __int64 v212; // r8
  __int64 v213; // r15
  char *v214; // rax
  __m128i *v215; // r9
  __int64 v216; // rax
  unsigned __int64 v217; // rdx
  size_t v218; // rax
  __int64 v219; // rcx
  unsigned __int64 v220; // rdx
  __int64 v221; // r15
  unsigned __int64 v222; // rdi
  __m128i *v223; // rax
  _QWORD *v224; // r10
  size_t v225; // rdx
  __m128i *v226; // rax
  char *v227; // rax
  __int64 **v228; // [rsp+0h] [rbp-2F8h]
  __int64 v229; // [rsp+0h] [rbp-2F8h]
  char *s; // [rsp+10h] [rbp-2E8h]
  __int64 v231; // [rsp+18h] [rbp-2E0h]
  char *v232; // [rsp+18h] [rbp-2E0h]
  size_t n; // [rsp+40h] [rbp-2B8h] BYREF
  __m128i *v238; // [rsp+48h] [rbp-2B0h]
  __int64 v239; // [rsp+50h] [rbp-2A8h]
  __m128i *v240; // [rsp+58h] [rbp-2A0h]
  __int64 v241; // [rsp+60h] [rbp-298h]
  size_t v242; // [rsp+68h] [rbp-290h]
  __int64 v243; // [rsp+70h] [rbp-288h]
  bool v244; // [rsp+7Fh] [rbp-279h]
  void *src; // [rsp+80h] [rbp-278h] BYREF
  size_t v246; // [rsp+88h] [rbp-270h]
  _QWORD v247[2]; // [rsp+90h] [rbp-268h] BYREF
  void *v248[2]; // [rsp+A0h] [rbp-258h] BYREF
  __int64 v249; // [rsp+B0h] [rbp-248h]
  int v250; // [rsp+B8h] [rbp-240h]
  __int16 v251; // [rsp+C0h] [rbp-238h]
  void *ptr; // [rsp+D0h] [rbp-228h] BYREF
  __int64 v253; // [rsp+D8h] [rbp-220h]
  _BYTE v254[128]; // [rsp+E0h] [rbp-218h] BYREF
  __m128i v255; // [rsp+160h] [rbp-198h] BYREF
  _BYTE v256[48]; // [rsp+170h] [rbp-188h] BYREF
  void *v257; // [rsp+1A0h] [rbp-158h]
  void *v258; // [rsp+1C8h] [rbp-130h]
  void **v259; // [rsp+1D0h] [rbp-128h]
  void *v260; // [rsp+1E0h] [rbp-118h]
  void **v261; // [rsp+1E8h] [rbp-110h]
  void *v262; // [rsp+1F8h] [rbp-100h]
  void **v263; // [rsp+200h] [rbp-F8h]
  void *v264; // [rsp+210h] [rbp-E8h]
  void **v265; // [rsp+218h] [rbp-E0h]
  void *v266; // [rsp+228h] [rbp-D0h]
  void **v267; // [rsp+230h] [rbp-C8h]
  char v268; // [rsp+260h] [rbp-98h]
  void *v269; // [rsp+270h] [rbp-88h]
  void *v270; // [rsp+2A0h] [rbp-58h]

  v8 = a6;
  v9 = *(_QWORD *)(a1 + 24);
  p_ptr = &ptr;
  v239 = a1;
  v228 = (__int64 **)v9;
  v231 = *(_QWORD *)(v9 + 8);
  v253 = 0x1000000000LL;
  ptr = v254;
  sub_21B7CF0(a6, 36);
  sub_21B7CF0(v8, 345);
  sub_21B7CF0(v8, 3480);
  v11 = (unsigned int)v253;
  v12 = (unsigned int)v253 + 1LL;
  if ( v12 > HIDWORD(v253) )
  {
    sub_2237220(&ptr, v254, v12, 8);
    v11 = (unsigned int)v253;
  }
  *((_QWORD *)ptr + v11) = "-z";
  LODWORD(v253) = v253 + 1;
  v13 = (unsigned int)v253;
  if ( (unsigned __int64)(unsigned int)v253 + 1 > HIDWORD(v253) )
  {
    sub_2237220(&ptr, v254, (unsigned int)v253 + 1LL, 8);
    v13 = (unsigned int)v253;
  }
  *((_QWORD *)ptr + v13) = "max-page-size=4096";
  LODWORD(v253) = v253 + 1;
  v14 = (unsigned int)v253;
  if ( (unsigned __int64)(unsigned int)v253 + 1 > HIDWORD(v253) )
  {
    sub_2237220(&ptr, v254, (unsigned int)v253 + 1LL, 8);
    v14 = (unsigned int)v253;
  }
  *((_QWORD *)ptr + v14) = "-z";
  LODWORD(v253) = v253 + 1;
  v15 = (unsigned int)v253;
  if ( (unsigned __int64)(unsigned int)v253 + 1 > HIDWORD(v253) )
  {
    sub_2237220(&ptr, v254, (unsigned int)v253 + 1LL, 8);
    v15 = (unsigned int)v253;
  }
  *((_QWORD *)ptr + v15) = "now";
  LODWORD(v253) = v253 + 1;
  v16 = (unsigned int)v253;
  if ( (unsigned __int64)(unsigned int)v253 + 1 > HIDWORD(v253) )
  {
    sub_2237220(&ptr, v254, (unsigned int)v253 + 1LL, 8);
    v16 = (unsigned int)v253;
  }
  *((_QWORD *)ptr + v16) = "-z";
  LODWORD(v253) = v253 + 1;
  v17 = (unsigned int)v253;
  if ( (unsigned __int64)(unsigned int)v253 + 1 > HIDWORD(v253) )
  {
    sub_2237220(&ptr, v254, (unsigned int)v253 + 1LL, 8);
    v17 = (unsigned int)v253;
  }
  v18 = &v255;
  *((_QWORD *)ptr + v17) = "start-stop-visibility=hidden";
  LODWORD(v253) = v253 + 1;
  sub_1132E50(&v255, (__int64)v228, nullptr);
  s = (char *)(*(__int64 (__fastcall **)(_QWORD *, __int64, __int64))(*v8 + 16LL))(
                v8,
                v255.m128i_i64[0],
                v255.m128i_i64[1]);
  if ( (_BYTE *)v255.m128i_i64[0] != v256 )
    operator delete((void *)v255.m128i_i64[0]);
  if ( !s )
  {
    v190 = (void *)sub_228AA60(0, 0, 0);
    v248[1] = v191;
    v248[0] = v190;
    if ( v191 != &byte_6 )
    {
      v22 = nullptr;
      v25 = 0;
      v23 = v248;
      goto LABEL_19;
    }
    v23 = v248;
    if ( (unsigned int)sub_22462B0(v248, "ld.lld", 6) )
    {
      v22 = nullptr;
      v25 = 0;
      goto LABEL_19;
    }
    goto LABEL_358;
  }
  v19 = strlen(s);
  v20 = (void *)sub_228AA60(s, v19, 0);
  v248[1] = v21;
  v248[0] = v20;
  if ( v21 == &byte_6 )
  {
    v23 = v248;
    if ( (unsigned int)sub_22462B0(v248, "ld.lld", 6) )
    {
      v22 = s;
      v24 = s;
      goto LABEL_18;
    }
LABEL_358:
    v199 = (unsigned int)v253;
    v200 = (unsigned int)v253 + 1LL;
    if ( v200 > HIDWORD(v253) )
    {
      sub_2237220(&ptr, v254, v200, 8);
      v199 = (unsigned int)v253;
    }
    *((_QWORD *)ptr + v199) = "-z";
    LODWORD(v253) = v253 + 1;
    v201 = (unsigned int)v253;
    if ( (unsigned __int64)(unsigned int)v253 + 1 > HIDWORD(v253) )
    {
      sub_2237220(&ptr, v254, (unsigned int)v253 + 1LL, 8);
      v201 = (unsigned int)v253;
    }
    *((_QWORD *)ptr + v201) = "rodynamic";
    LODWORD(v253) = v253 + 1;
    v202 = (unsigned int)v253;
    if ( (unsigned __int64)(unsigned int)v253 + 1 > HIDWORD(v253) )
    {
      sub_2237220(&ptr, v254, (unsigned int)v253 + 1LL, 8);
      v202 = (unsigned int)v253;
    }
    *((_QWORD *)ptr + v202) = "-z";
    LODWORD(v253) = v253 + 1;
    v203 = (unsigned int)v253;
    if ( (unsigned __int64)(unsigned int)v253 + 1 > HIDWORD(v253) )
    {
      sub_2237220(&ptr, v254, (unsigned int)v253 + 1LL, 8);
      v203 = (unsigned int)v253;
    }
    *((_QWORD *)ptr + v203) = "separate-loadable-segments";
    LODWORD(v253) = v253 + 1;
    v204 = (unsigned int)v253;
    if ( (unsigned __int64)(unsigned int)v253 + 1 > HIDWORD(v253) )
    {
      sub_2237220(&ptr, v254, (unsigned int)v253 + 1LL, 8);
      v204 = (unsigned int)v253;
    }
    *((_QWORD *)ptr + v204) = "-z";
    LODWORD(v253) = v253 + 1;
    v205 = (unsigned int)v253;
    if ( (unsigned __int64)(unsigned int)v253 + 1 > HIDWORD(v253) )
    {
      sub_2237220(&ptr, v254, (unsigned int)v253 + 1LL, 8);
      v205 = (unsigned int)v253;
    }
    *((_QWORD *)ptr + v205) = "rel";
    LODWORD(v253) = v253 + 1;
    v206 = (unsigned int)v253;
    if ( (unsigned __int64)(unsigned int)v253 + 1 > HIDWORD(v253) )
    {
      sub_2237220(&ptr, v254, (unsigned int)v253 + 1LL, 8);
      v206 = (unsigned int)v253;
    }
    *((_QWORD *)ptr + v206) = "--pack-dyn-relocs=relr";
    LODWORD(v253) = v253 + 1;
    goto LABEL_20;
  }
  v22 = s;
  v23 = v248;
  v24 = s;
LABEL_18:
  v25 = strlen(v24);
LABEL_19:
  v26.m128i_i64[0] = sub_228AAA0(v22, v25, 0);
  v255 = v26;
  if ( v26.m128i_i64[1] == 6 && !(unsigned int)sub_22462B0(&v255, "ld.lld", 6) )
    goto LABEL_358;
LABEL_20:
  if ( *(_QWORD *)(v231 + 496) )
  {
    sub_C05100((__int64)&v255, "--sysroot=", v231 + 488);
    v192 = (*(__int64 (__fastcall **)(_QWORD *, __int64, __int64))(*v8 + 16LL))(
             v8,
             v255.m128i_i64[0],
             v255.m128i_i64[1]);
    v193 = (unsigned int)v253;
    v194 = (unsigned int)v253 + 1LL;
    if ( v194 > HIDWORD(v253) )
    {
      n = v192;
      sub_2237220(&ptr, v254, v194, 8);
      v193 = (unsigned int)v253;
      v192 = n;
    }
    *((_QWORD *)ptr + v193) = v192;
    LODWORD(v253) = v253 + 1;
    if ( (_BYTE *)v255.m128i_i64[0] != v256 )
      operator delete((void *)v255.m128i_i64[0]);
  }
  v255.m128i_i32[0] = 3264;
  v27 = sub_21B6DA0(v8, &v255, 1);
  v28 = v8[1];
  v29 = (_QWORD *)(v28 + 8LL * (unsigned int)v27);
  v30 = (_QWORD *)(v28 + 8 * HIDWORD(v27));
  if ( v29 == v30 )
    goto LABEL_25;
  while ( !*v29 || !(unsigned __int8)sub_21B9810(*v29, 3264) )
  {
    if ( v30 == ++v29 )
      goto LABEL_25;
  }
  if ( v30 == v29 )
  {
LABEL_25:
    if ( !sub_10DCD30((__int64)v8, 0xCA4u) )
      sub_10DC5D0((__int64)&ptr, (__int64)"-pie");
  }
  else
  {
    do
    {
      v80 = *v29;
      if ( *(_QWORD *)(*v29 + 16LL) )
        v80 = *(_QWORD *)(*v29 + 16LL);
      ++v29;
      *(_BYTE *)(v80 + 44) |= 1u;
      if ( v29 == v30 )
        break;
      while ( !*v29 || !(unsigned __int8)sub_21B9810(*v29, 3264) )
      {
        if ( v30 == ++v29 )
          goto LABEL_27;
      }
    }
    while ( v30 != v29 );
  }
LABEL_27:
  v255.m128i_i32[0] = 3203;
  v31 = sub_21B6DA0(v8, &v255, 1);
  v32 = v8[1];
  v33 = (_QWORD *)(v32 + 8LL * (unsigned int)v31);
  v34 = (_QWORD *)(v32 + 8 * HIDWORD(v31));
  if ( v33 != v34 )
  {
    while ( !*v33 || !(unsigned __int8)sub_21B9810(*v33, 3203) )
    {
      if ( v34 == ++v33 )
        goto LABEL_31;
    }
    if ( v34 != v33 )
    {
      do
      {
        v181 = *v33;
        if ( *(_QWORD *)(*v33 + 16LL) )
          v181 = *(_QWORD *)(*v33 + 16LL);
        ++v33;
        *(_BYTE *)(v181 + 44) |= 1u;
        if ( v33 == v34 )
          break;
        while ( !*v33 || !(unsigned __int8)sub_21B9810(*v33, 3203) )
        {
          if ( v34 == ++v33 )
            goto LABEL_303;
        }
      }
      while ( v33 != v34 );
LABEL_303:
      v182 = (unsigned int)v253;
      v183 = (unsigned int)v253 + 1LL;
      if ( v183 > HIDWORD(v253) )
      {
        sub_2237220(&ptr, v254, v183, 8);
        v182 = (unsigned int)v253;
      }
      *((_QWORD *)ptr + v182) = "-export-dynamic";
      LODWORD(v253) = v253 + 1;
    }
  }
LABEL_31:
  v255.m128i_i32[0] = 3321;
  v35 = sub_21B6DA0(v8, &v255, 1);
  v36 = v8[1];
  v37 = (_QWORD *)(v36 + 8LL * (unsigned int)v35);
  v38 = (_QWORD *)(v36 + 8 * HIDWORD(v35));
  if ( v37 != v38 )
  {
    while ( !*v37 || !(unsigned __int8)sub_21B9810(*v37, 3321) )
    {
      if ( v38 == ++v37 )
        goto LABEL_35;
    }
    if ( v38 != v37 )
    {
      do
      {
        v184 = *v37;
        if ( *(_QWORD *)(*v37 + 16LL) )
          v184 = *(_QWORD *)(*v37 + 16LL);
        ++v37;
        *(_BYTE *)(v184 + 44) |= 1u;
        if ( v37 == v38 )
          break;
        while ( !*v37 || !(unsigned __int8)sub_21B9810(*v37, 3321) )
        {
          if ( v38 == ++v37 )
            goto LABEL_315;
        }
      }
      while ( v38 != v37 );
LABEL_315:
      v185 = (unsigned int)v253;
      v186 = (unsigned int)v253 + 1LL;
      if ( v186 > HIDWORD(v253) )
      {
        sub_2237220(&ptr, v254, v186, 8);
        v185 = (unsigned int)v253;
      }
      *((_QWORD *)ptr + v185) = "-s";
      LODWORD(v253) = v253 + 1;
    }
  }
LABEL_35:
  v255.m128i_i32[0] = 3236;
  v39 = sub_21B6DA0(v8, &v255, 1);
  v40 = v8[1];
  v41 = (_QWORD *)(v40 + 8LL * (unsigned int)v39);
  v42 = (_QWORD *)(v40 + 8 * HIDWORD(v39));
  if ( v41 == v42 )
    goto LABEL_39;
  while ( !*v41 || !(unsigned __int8)sub_21B9810(*v41, 3236) )
  {
    if ( v42 == ++v41 )
      goto LABEL_39;
  }
  if ( v42 == v41 )
  {
LABEL_39:
    v43 = (unsigned int)v253;
    v44 = (unsigned int)v253 + 1LL;
    if ( HIDWORD(v253) < v44 )
    {
      sub_2237220(&ptr, v254, v44, 8);
      v43 = (unsigned int)v253;
    }
    *((_QWORD *)ptr + v43) = "--build-id";
    LODWORD(v253) = v253 + 1;
    v45 = (unsigned int)v253;
    if ( (unsigned __int64)(unsigned int)v253 + 1 > HIDWORD(v253) )
    {
      sub_2237220(&ptr, v254, (unsigned int)v253 + 1LL, 8);
      v45 = (unsigned int)v253;
    }
    *((_QWORD *)ptr + v45) = "--hash-style=gnu";
    v46 = (unsigned int)(v253 + 1);
    LODWORD(v253) = v253 + 1;
  }
  else
  {
    do
    {
      v187 = *v41;
      if ( *(_QWORD *)(*v41 + 16LL) )
        v187 = *(_QWORD *)(*v41 + 16LL);
      ++v41;
      *(_BYTE *)(v187 + 44) |= 1u;
      if ( v41 == v42 )
        break;
      while ( !*v41 || !(unsigned __int8)sub_21B9810(*v41, 3236) )
      {
        if ( v42 == ++v41 )
          goto LABEL_327;
      }
    }
    while ( v42 != v41 );
LABEL_327:
    v188 = (unsigned int)v253;
    v189 = (unsigned int)v253 + 1LL;
    if ( v189 > HIDWORD(v253) )
    {
      sub_2237220(&ptr, v254, v189, 8);
      v188 = (unsigned int)v253;
    }
    *((_QWORD *)ptr + v188) = "-r";
    v46 = (unsigned int)(v253 + 1);
    LODWORD(v253) = v253 + 1;
  }
  v47 = v46 + 1;
  v48 = HIDWORD(v253);
  if ( *((_DWORD *)v228 + 12) == 3 )
  {
    if ( HIDWORD(v253) < v47 )
    {
      sub_2237220(&ptr, v254, v47, 8);
      v46 = (unsigned int)v253;
    }
    *((_QWORD *)ptr + v46) = "--execute-only";
    LODWORD(v253) = v253 + 1;
    sub_11C8180(&v255, (__int64 *)v231, (__int64)v8, (_DWORD *)v228 + 440, 0);
    if ( (unsigned __int8)sub_21B7850(v8, 2365, 2593, 1)
      && (!v255.m128i_i64[1] || !sub_9B4AA0((__int64)&v255, "generic") || !sub_9B4AA0((__int64)&v255, "cortex-a53")) )
    {
      v197 = (unsigned int)v253;
      v198 = (unsigned int)v253 + 1LL;
      if ( v198 > HIDWORD(v253) )
      {
        sub_2237220(&ptr, v254, v198, 8);
        v197 = (unsigned int)v253;
      }
      *((_QWORD *)ptr + v197) = "--fix-cortex-a53-843419";
      LODWORD(v253) = v253 + 1;
    }
    if ( (_BYTE *)v255.m128i_i64[0] != v256 )
      operator delete((void *)v255.m128i_i64[0]);
    v46 = (unsigned int)v253;
    v48 = HIDWORD(v253);
    v47 = (unsigned int)v253 + 1LL;
  }
  if ( v47 > v48 )
  {
    sub_2237220(&ptr, v254, v47, 8);
    v46 = (unsigned int)v253;
  }
  *((_QWORD *)ptr + v46) = "--eh-frame-hdr";
  LODWORD(v253) = v253 + 1;
  v255.m128i_i32[0] = 3299;
  v49 = sub_21B6DA0(v8, &v255, 1);
  v50 = v8[1];
  v51 = (_QWORD *)(v50 + 8LL * (unsigned int)v49);
  v52 = (_QWORD *)(v50 + 8 * HIDWORD(v49));
  if ( v51 == v52 )
    goto LABEL_51;
  while ( !*v51 || !(unsigned __int8)sub_21B9810(*v51, 3299) )
  {
    if ( v52 == ++v51 )
      goto LABEL_51;
  }
  if ( v52 == v51 )
  {
LABEL_51:
    if ( sub_10DCD30((__int64)v8, 0xCC0u) )
    {
      v53 = (unsigned int)v253;
      v54 = (unsigned int)v253 + 1LL;
      if ( v54 > HIDWORD(v253) )
      {
        sub_2237220(&ptr, v254, v54, 8);
        v53 = (unsigned int)v253;
      }
      *((_QWORD *)ptr + v53) = "-shared";
      LODWORD(v253) = v253 + 1;
    }
  }
  else
  {
    do
    {
      v81 = *v51;
      if ( *(_QWORD *)(*v51 + 16LL) )
        v81 = *(_QWORD *)(*v51 + 16LL);
      ++v51;
      *(_BYTE *)(v81 + 44) |= 1u;
      if ( v51 == v52 )
        break;
      while ( !*v51 || !(unsigned __int8)sub_21B9810(*v51, 3299) )
      {
        if ( v52 == ++v51 )
          goto LABEL_99;
      }
    }
    while ( v52 != v51 );
LABEL_99:
    v82 = (unsigned int)v253;
    v83 = (unsigned int)v253 + 1LL;
    if ( v83 > HIDWORD(v253) )
    {
      sub_2237220(&ptr, v254, v83, 8);
      v82 = (unsigned int)v253;
    }
    *((_QWORD *)ptr + v82) = "-Bstatic";
    LODWORD(v253) = v253 + 1;
  }
  sub_112C5F0((__int64)&v255, (__int64)v228, (__int64)v8);
  LODWORD(v248[0]) = 3264;
  v55 = sub_21B6DA0(v8, v248, 1);
  v56 = v8[1];
  v57 = (_QWORD *)(v56 + 8LL * (unsigned int)v55);
  v58 = (_QWORD *)(v56 + 8 * HIDWORD(v55));
  if ( v57 != v58 )
  {
    while ( !*v57 || !(unsigned __int8)sub_21B9810(*v57, 3264) )
    {
      if ( v58 == ++v57 )
        goto LABEL_59;
    }
    if ( v57 != v58 )
    {
      do
      {
        v84 = *v57;
        if ( *(_QWORD *)(*v57 + 16LL) )
          v84 = *(_QWORD *)(*v57 + 16LL);
        ++v57;
        *(_BYTE *)(v84 + 44) |= 1u;
        if ( v57 == v58 )
          break;
        while ( !*v57 || !(unsigned __int8)sub_21B9810(*v57, 3264) )
        {
          if ( v58 == ++v57 )
            goto LABEL_60;
        }
      }
      while ( v58 != v57 );
      goto LABEL_60;
    }
  }
LABEL_59:
  if ( sub_10DCD30((__int64)v8, 0xCA4u) )
  {
LABEL_60:
    v59 = (unsigned int)v253;
    goto LABEL_61;
  }
  src = v247;
  sub_120B5E0(&src, *(_BYTE **)(v231 + 520), *(_QWORD *)(v231 + 520) + *(_QWORD *)(v231 + 528));
  v210 = v255.m128i_i16[0];
  if ( (v255.m128i_i8[0] & 1) != 0 )
  {
    if ( !v268 )
    {
      if ( (v255.m128i_i8[0] & 0x10) != 0 )
        goto LABEL_389;
      goto LABEL_386;
    }
    sub_9EE7C0(&src, "asan/");
    v210 = v255.m128i_i16[0];
  }
  if ( (v210 & 0x10) != 0 )
  {
    if ( !v268 )
      goto LABEL_389;
    sub_9EE7C0(&src, "hwasan/");
    HIBYTE(v210) = v255.m128i_i8[1];
  }
LABEL_386:
  if ( v210 < 0 && v268 )
    sub_9EE7C0(&src, "tsan/");
LABEL_389:
  v211 = v246;
  if ( 0x7FFFFFFFFFFFFFFFLL - v246 <= 6 )
    std::__throw_length_error("basic_string::append");
  v212 = v246 + 7;
  if ( src == v247 )
  {
    v213 = 15;
    if ( v212 <= 0xF )
      goto LABEL_392;
  }
  else
  {
    v213 = v247[0];
    if ( v212 <= v247[0] )
    {
LABEL_392:
      v214 = (char *)src + v246;
      *(_DWORD *)v214 = 1932420204;
      *((_WORD *)v214 + 2) = 11887;
      v214[6] = 49;
      v215 = (__m128i *)src;
      goto LABEL_393;
    }
  }
  if ( (v212 & 0x8000000000000000LL) != 0LL )
    std::__throw_length_error("basic_string::_M_create");
  v221 = 2 * v213;
  if ( v212 < v221 )
  {
    v222 = v221 + 1;
    if ( v221 < 0 )
    {
      v222 = 0x8000000000000000LL;
      v221 = 0x7FFFFFFFFFFFFFFFLL;
    }
  }
  else
  {
    v222 = v246 + 8;
    v221 = v246 + 7;
  }
  v238 = (__m128i *)(v246 + 7);
  n = v246;
  v223 = (__m128i *)operator new(v222);
  v211 = n;
  v212 = (unsigned __int64)v238;
  v215 = v223;
  v224 = src;
  if ( n )
  {
    if ( n == 1 )
    {
      v223->m128i_i8[0] = *(_BYTE *)src;
    }
    else
    {
      v225 = n;
      v240 = v238;
      v238 = (__m128i *)n;
      n = (size_t)src;
      v226 = (__m128i *)memcpy(v223, src, v225);
      v212 = (unsigned __int64)v240;
      v211 = (size_t)v238;
      v224 = (_QWORD *)n;
      v215 = v226;
    }
  }
  v227 = &v215->m128i_i8[v211];
  *(_DWORD *)v227 = 1932420204;
  *((_WORD *)v227 + 2) = 11887;
  v227[6] = 49;
  if ( v224 != v247 )
  {
    v240 = v215;
    v238 = (__m128i *)v212;
    n = v211;
    operator delete(v224);
    v215 = v240;
    v212 = (unsigned __int64)v238;
    v211 = n;
  }
  src = v215;
  v247[0] = v221;
LABEL_393:
  v246 = v212;
  v215->m128i_i8[v211 + 7] = 0;
  v216 = (unsigned int)v253;
  v217 = (unsigned int)v253 + 1LL;
  if ( v217 > HIDWORD(v253) )
  {
    sub_2237220(&ptr, v254, v217, 8);
    v216 = (unsigned int)v253;
  }
  *((_QWORD *)ptr + v216) = "-dynamic-linker";
  v251 = 260;
  LODWORD(v253) = v253 + 1;
  v248[0] = &src;
  v218 = sub_10DA6C0((__int64)v8, (__int64)v248);
  v219 = (unsigned int)v253;
  v220 = (unsigned int)v253 + 1LL;
  if ( v220 > HIDWORD(v253) )
  {
    n = v218;
    sub_2237220(&ptr, v254, v220, 8);
    v219 = (unsigned int)v253;
    v218 = n;
  }
  *((_QWORD *)ptr + v219) = v218;
  v59 = (unsigned int)(v253 + 1);
  LODWORD(v253) = v253 + 1;
  if ( src != v247 )
  {
    operator delete(src);
    goto LABEL_60;
  }
LABEL_61:
  v60 = v59 + 1;
  v61 = HIDWORD(v253);
  if ( *((_DWORD *)v228 + 448) == 28 )
  {
    if ( v60 > HIDWORD(v253) )
    {
      sub_2237220(&ptr, v254, v60, 8);
      v59 = (unsigned int)v253;
    }
    *((_QWORD *)ptr + v59) = "-X";
    LODWORD(v253) = v253 + 1;
    v195 = sub_10DCD30((__int64)v8, 0xA8Cu);
    v61 = HIDWORD(v253);
    v196 = v195 == 0;
    v59 = (unsigned int)v253;
    v60 = (unsigned int)v253 + 1LL;
    if ( !v196 )
    {
      if ( v60 > HIDWORD(v253) )
      {
        sub_2237220(&ptr, v254, v60, 8);
        v59 = (unsigned int)v253;
      }
      *((_QWORD *)ptr + v59) = "--no-relax";
      v61 = HIDWORD(v253);
      LODWORD(v253) = v253 + 1;
      v59 = (unsigned int)v253;
      v60 = (unsigned int)v253 + 1LL;
    }
  }
  if ( v61 < v60 )
  {
    sub_2237220(&ptr, v254, v60, 8);
    v59 = (unsigned int)v253;
  }
  *((_QWORD *)ptr + v59) = "-o";
  v62 = *a4;
  LODWORD(v253) = v253 + 1;
  v63 = (unsigned int)v253;
  if ( (unsigned __int64)(unsigned int)v253 + 1 > HIDWORD(v253) )
  {
    sub_2237220(&ptr, v254, (unsigned int)v253 + 1LL, 8);
    v63 = (unsigned int)v253;
  }
  *((_QWORD *)ptr + v63) = v62;
  LODWORD(v253) = v253 + 1;
  v248[0] = (void *)0xBEB00000BF0LL;
  LODWORD(v248[1]) = 3236;
  v64 = sub_21B6DA0(v8, v248, 3);
  v65 = v8[1];
  v249 = 0xBEB00000BF0LL;
  v250 = 3236;
  v66 = (_QWORD *)(v65 + 8LL * (unsigned int)v64);
  v67 = v65 + 8 * HIDWORD(v64);
  n = v67;
  v68 = (__m128i)_mm_loadh_ps((const double *)&n);
  *(__m128i *)v248 = v68;
  if ( v66 != (_QWORD *)v67 )
  {
    n = (size_t)v8;
    v240 = (__m128i *)((char *)&v248[1] + 4);
    v238 = &v255;
    v69 = v67;
    do
    {
      v70 = *v66;
      v71 = v248;
      if ( *v66 )
      {
        do
        {
          v72 = *((unsigned int *)v71 + 4);
          if ( !(_DWORD)v72 )
            break;
          if ( (unsigned __int8)sub_21B9810(v70, v72) )
          {
            v85 = (_QWORD *)v69;
            v8 = (_QWORD *)n;
            n = v69;
            v23 = v248;
            v249 = 0xBEB00000BF0LL;
            v18 = v238;
            v250 = 3236;
            v68 = (__m128i)_mm_loadh_ps((const double *)&n);
            *(__m128i *)v248 = v68;
            if ( (_QWORD *)n == v66 )
              goto LABEL_74;
            v86 = &ptr;
            v87 = v238;
            v88 = v8;
            v240 = (__m128i *)((char *)&v248[1] + 4);
            v89 = v85;
            do
            {
              v90 = *v66;
              if ( *(_QWORD *)(*v66 + 16LL) )
                v90 = *(_QWORD *)(*v66 + 16LL);
              v91 = v66 + 1;
              *(_BYTE *)(v90 + 44) |= 1u;
              v248[0] = v91;
              if ( v91 == v89 )
                break;
              while ( 1 )
              {
                v92 = v248;
                if ( *v91 )
                  break;
LABEL_125:
                v248[0] = ++v91;
                if ( v89 == v91 )
                  goto LABEL_126;
              }
              n = *v91;
              v93 = v86;
              while ( 1 )
              {
                v94 = *((unsigned int *)v92 + 4);
                if ( !(_DWORD)v94 )
                {
LABEL_124:
                  v86 = v93;
                  goto LABEL_125;
                }
                v238 = v87;
                v95 = sub_21B9810(n, v94);
                v87 = v238;
                if ( v95 )
                  break;
                v92 = (void **)((char *)v92 + 4);
                if ( v92 == (void **)v240 )
                  goto LABEL_124;
              }
              v66 = v248[0];
              v86 = v93;
            }
            while ( v89 != v248[0] );
LABEL_126:
            v8 = v88;
            v23 = v248;
            p_ptr = v86;
            v18 = v87;
            goto LABEL_75;
          }
          v71 = (void **)((char *)v71 + 4);
        }
        while ( v71 != (void **)v240 );
      }
      v248[0] = ++v66;
    }
    while ( (_QWORD *)v69 != v66 );
    v23 = v248;
    v8 = (_QWORD *)n;
    v18 = v238;
  }
LABEL_74:
  if ( !sub_10DCD30((__int64)v8, 0xCC0u) )
  {
    sub_112D4E0(&src, (__int64)v228, "Scrt1.o");
    v248[0] = &src;
    v251 = 260;
    v209 = sub_10DA6C0((__int64)v8, (__int64)v248);
    sub_10DC5D0((__int64)&ptr, v209);
    if ( src != v247 )
      operator delete(src);
  }
LABEL_75:
  v248[0] = (void *)0xD250000089CLL;
  sub_21B6650(v8, p_ptr, v248, 2);
  sub_112D940((__int64)v228, (__int64)v8, (__int64)p_ptr, v73, v74);
  v75 = *(_DWORD *)(v231 + 40);
  if ( v75 )
    sub_11C8A90(v228, (__int64)v8, (__int64)p_ptr, a4, a5, v75 == 2, v68);
  sub_11BD3E0((__int64)v228, (__int64)v8, (__int64)p_ptr);
  sub_11C3660((__int64)v228, a5, (__int64)v8, (__int64)p_ptr, a3);
  v243 = sub_10DCD30((__int64)v8, 0xBE4u);
  LODWORD(v248[0]) = 3296;
  v76 = sub_21B6DA0(v8, v248, 1);
  v77 = v8[1];
  v78 = (_QWORD *)(v77 + 8LL * (unsigned int)v76);
  v79 = (_QWORD *)(v77 + 8 * HIDWORD(v76));
  if ( v78 == v79 )
    goto LABEL_81;
  while ( !*v78 || !(unsigned __int8)sub_21B9810(*v78, 3296) )
  {
    if ( v79 == ++v78 )
      goto LABEL_81;
  }
  if ( v78 == v79 )
  {
LABEL_81:
    v244 = 0;
  }
  else
  {
    do
    {
      v96 = *v78;
      if ( *(_QWORD *)(*v78 + 16LL) )
        v96 = *(_QWORD *)(*v78 + 16LL);
      ++v78;
      *(_BYTE *)(v96 + 44) |= 1u;
      if ( v78 == v79 )
        break;
      while ( !*v78 || !(unsigned __int8)sub_21B9810(*v78, 3296) )
      {
        if ( v79 == ++v78 )
          goto LABEL_136;
      }
    }
    while ( v78 != v79 );
LABEL_136:
    v244 = sub_10DCD30((__int64)v8, 0xCE3u) == 0;
  }
  v248[0] = (void *)0xC6900000C6ALL;
  v97 = sub_21B6DA0(v8, v248, 2);
  v98 = v8[1];
  v249 = 0xC6900000C6ALL;
  v99 = (size_t *)(v98 + 8LL * (unsigned int)v97);
  v100 = (size_t *)(v98 + 8 * HIDWORD(v97));
  n = (size_t)v100;
  *(__m128 *)v248 = _mm_loadh_ps((const double *)&n);
  if ( v99 == v100 )
    goto LABEL_144;
  n = (size_t)v8;
  while ( 1 )
  {
    v101 = *v99;
    if ( *v99 )
    {
      if ( (unsigned __int8)sub_21B9810(*v99, 3178) || (unsigned __int8)sub_21B9810(v101, 3177) )
        break;
    }
    v248[0] = ++v99;
    if ( v100 == v99 )
    {
      v8 = (_QWORD *)n;
      goto LABEL_144;
    }
  }
  v8 = (_QWORD *)n;
  n = (size_t)v100;
  v249 = 0xC6900000C6ALL;
  *(__m128 *)v248 = _mm_loadh_ps((const double *)&n);
  if ( v100 == v99 )
  {
LABEL_144:
    v242 = 0;
  }
  else
  {
    v106 = v99;
    do
    {
      v107 = *v106;
      v108 = v106 + 1;
      v109 = *(_QWORD *)(*v106 + 16);
      v242 = *v106;
      if ( !v109 )
        v109 = v107;
      *(_BYTE *)(v109 + 44) |= 1u;
      v248[0] = v106 + 1;
      if ( v108 == v100 )
        break;
      v110 = v18;
      v111 = v23;
      v112 = v8;
      v113 = v100;
      v114 = v110;
      while ( 1 )
      {
        if ( *v108 )
        {
          n = *v108;
          if ( (unsigned __int8)sub_21B9810(n, 3178) || (unsigned __int8)sub_21B9810(n, 3177) )
            break;
        }
        v248[0] = ++v108;
        if ( v113 == v108 )
        {
          v8 = v112;
          v23 = v111;
          v18 = v114;
          goto LABEL_145;
        }
      }
      v106 = (size_t *)v248[0];
      v115 = v114;
      v100 = v113;
      v8 = v112;
      v23 = v111;
      v18 = v115;
    }
    while ( v100 != v248[0] );
  }
LABEL_145:
  LODWORD(v248[0]) = 1818;
  v102 = sub_21B6DA0(v8, v23, 1);
  v103 = v8[1];
  v104 = (_QWORD *)(v103 + 8LL * (unsigned int)v102);
  v105 = (_QWORD *)(v103 + 8 * HIDWORD(v102));
  if ( v104 == v105 )
    goto LABEL_149;
  while ( !*v104 || !(unsigned __int8)sub_21B9810(*v104, 1818) )
  {
    if ( v105 == ++v104 )
      goto LABEL_149;
  }
  if ( v104 == v105 )
  {
LABEL_149:
    v241 = 0;
  }
  else
  {
    v116 = v18;
    v117 = v23;
    v118 = v8;
    v119 = v116;
    do
    {
      v120 = *v104;
      v121 = *(_QWORD *)(*v104 + 16LL);
      v241 = *v104;
      if ( !v121 )
        v121 = v120;
      ++v104;
      *(_BYTE *)(v121 + 44) |= 1u;
      if ( v104 == v105 )
        break;
      while ( !*v104 || !(unsigned __int8)sub_21B9810(*v104, 1818) )
      {
        if ( v105 == ++v104 )
          goto LABEL_173;
      }
    }
    while ( v105 != v104 );
LABEL_173:
    v122 = v119;
    v8 = v118;
    v23 = v117;
    v18 = v122;
  }
  v248[0] = (void *)0xBDD00000BF0LL;
  LODWORD(v248[1]) = 3236;
  v123 = sub_21B6DA0(v8, v23, 3);
  v124 = v8[1];
  v249 = 0xBDD00000BF0LL;
  v250 = 3236;
  v125 = (__int64 *)(v124 + 8LL * (unsigned int)v123);
  v126 = v124 + 8 * HIDWORD(v123);
  n = v126;
  v127 = _mm_loadh_ps((const double *)&n);
  *(__m128 *)v248 = v127;
  if ( v125 != (__int64 *)v126 )
  {
    n = (size_t)v8;
    v128 = v125;
    v240 = (__m128i *)((char *)v23 + 12);
    v238 = v18;
    v129 = v23;
    v130 = (__int64 *)v126;
    do
    {
      v131 = *v128;
      v132 = (__m128i *)v129;
      if ( *v128 )
      {
        do
        {
          v133 = v132[1].m128i_u32[0];
          if ( !(_DWORD)v133 )
            break;
          if ( (unsigned __int8)sub_21B9810(v131, v133) )
          {
            v142 = (size_t)v130;
            v8 = (_QWORD *)n;
            v23 = v129;
            n = v142;
            v143 = v128;
            v18 = v238;
            v249 = 0xBDD00000BF0LL;
            v250 = 3236;
            v127 = _mm_loadh_ps((const double *)&n);
            *(__m128 *)v248 = v127;
            if ( v128 == (__int64 *)v142 )
              goto LABEL_182;
            v144 = v238;
            v145 = (__int64 *)v142;
            v146 = v23;
            v232 = (char *)v23 + 12;
            do
            {
              v147 = *v143;
              v148 = v143 + 1;
              if ( *(_QWORD *)(*v143 + 16) )
                v147 = *(_QWORD *)(*v143 + 16);
              *(_BYTE *)(v147 + 44) |= 1u;
              v248[0] = v143 + 1;
              if ( v148 == v145 )
                break;
              while ( 1 )
              {
                v149 = v146;
                if ( *v148 )
                  break;
LABEL_212:
                v248[0] = ++v148;
                if ( v145 == v148 )
                  goto LABEL_213;
              }
              v229 = *v148;
              v150 = v144;
              while ( 1 )
              {
                v151 = *((unsigned int *)v149 + 4);
                if ( !(_DWORD)v151 )
                {
LABEL_211:
                  v144 = v150;
                  goto LABEL_212;
                }
                if ( (unsigned __int8)sub_21B9810(v229, v151) )
                  break;
                v149 = (void **)((char *)v149 + 4);
                if ( v149 == (void **)v232 )
                  goto LABEL_211;
              }
              v143 = (__int64 *)v248[0];
              v144 = v150;
            }
            while ( v145 != v248[0] );
LABEL_213:
            v23 = v146;
            v18 = v144;
            goto LABEL_214;
          }
          v132 = (__m128i *)((char *)v132 + 4);
        }
        while ( v132 != v240 );
      }
      v248[0] = ++v128;
    }
    while ( v130 != v128 );
    v23 = v129;
    v8 = (_QWORD *)n;
    v18 = v238;
  }
LABEL_182:
  if ( sub_10DCD30((__int64)v8, 0xCE3u) )
  {
    v134 = (unsigned int)v253;
    v135 = (unsigned int)v253 + 1LL;
    if ( v135 > HIDWORD(v253) )
    {
      sub_2237220(p_ptr, p_ptr + 2, v135, 8);
      v134 = (unsigned int)v253;
    }
    *((_QWORD *)ptr + v134) = "-Bdynamic";
    LODWORD(v253) = v253 + 1;
  }
  if ( *(_DWORD *)(v231 + 16) == 1 && sub_112D7B0((__int64)v228, (__int64)v8) )
  {
    sub_10DC5D0((__int64)p_ptr, (__int64)"--push-state");
    sub_10DC5D0((__int64)p_ptr, (__int64)"--as-needed");
    if ( v244 )
    {
      sub_10DC5D0((__int64)p_ptr, (__int64)"-Bstatic");
      ((void (__fastcall *)(__int64 **, _QWORD *, void **))(*v228)[80])(v228, v8, p_ptr);
      sub_10DC5D0((__int64)p_ptr, (__int64)"-Bdynamic");
    }
    else
    {
      ((void (__fastcall *)(__int64 **, _QWORD *, void **))(*v228)[80])(v228, v8, p_ptr);
    }
    sub_10DC5D0((__int64)p_ptr, (__int64)"-lm");
    sub_10DC5D0((__int64)p_ptr, (__int64)"--pop-state");
  }
  sub_11C3BD0(v228, (__int64)v8, (__int64)p_ptr);
  sub_11BDB50((__int64)v228, (__int64)v8, (__int64)p_ptr);
  ((void (__fastcall *)(__int64 **, _QWORD *, void **))(*v228)[84])(v228, v8, p_ptr);
  sub_11BEF20((__int64)v228, v231, (__int64)p_ptr, (__int64)v8);
  if ( v242 )
  {
    v136 = (unsigned int)v253;
    v137 = (unsigned int)v253 + 1LL;
    if ( v137 > HIDWORD(v253) )
    {
      sub_2237220(p_ptr, p_ptr + 2, v137, 8);
      v136 = (unsigned int)v253;
    }
    *((_QWORD *)ptr + v136) = "-lpthread";
    LODWORD(v253) = v253 + 1;
  }
  if ( v241 )
  {
    v138 = (unsigned int)v253;
    v139 = (unsigned int)v253 + 1LL;
    if ( v139 > HIDWORD(v253) )
    {
      sub_2237220(p_ptr, p_ptr + 2, v139, 8);
      v138 = (unsigned int)v253;
    }
    *((_QWORD *)ptr + v138) = "--wrap=pthread_create";
    LODWORD(v253) = v253 + 1;
  }
  if ( !v243 )
  {
    v140 = (unsigned int)v253;
    v141 = (unsigned int)v253 + 1LL;
    if ( v141 > HIDWORD(v253) )
    {
      sub_2237220(p_ptr, p_ptr + 2, v141, 8);
      v140 = (unsigned int)v253;
    }
    *((_QWORD *)ptr + v140) = "-lc";
    LODWORD(v253) = v253 + 1;
  }
LABEL_214:
  v152 = *(const __m128i **)a5;
  v153 = *(unsigned int *)(a5 + 8);
  v154 = (void *)operator new(0x208u);
  sub_1106AE0(
    (__int64)v154,
    a3,
    v239,
    0x100000000LL,
    (__int64)"@",
    (__int64)s,
    (__int64)p_ptr,
    v152,
    v153,
    (__int64)a4,
    1,
    0);
  v248[0] = v154;
  v155 = *(unsigned int *)(a2 + 160);
  v156 = v155 + 1;
  v157 = *(_DWORD *)(a2 + 160);
  if ( v155 + 1 > (unsigned __int64)*(unsigned int *)(a2 + 164) )
  {
    v207 = *(_QWORD *)(a2 + 152);
    v208 = a2 + 152;
    if ( v207 > (unsigned __int64)v23 )
    {
      sub_11673D0(v208, v156, v127, a8);
      v155 = *(unsigned int *)(a2 + 160);
      v158 = *(_QWORD *)(a2 + 152);
      v157 = *(_DWORD *)(a2 + 160);
    }
    else
    {
      if ( (unsigned __int64)v23 < v207 + 8 * v155 )
      {
        sub_11673D0(v208, v156, v127, a8);
        v158 = *(_QWORD *)(a2 + 152);
        v155 = *(unsigned int *)(a2 + 160);
        v23 = (void **)((char *)v23 + v158 - v207);
      }
      else
      {
        sub_11673D0(v208, v156, v127, a8);
        v155 = *(unsigned int *)(a2 + 160);
        v158 = *(_QWORD *)(a2 + 152);
      }
      v157 = *(_DWORD *)(a2 + 160);
    }
  }
  else
  {
    v158 = *(_QWORD *)(a2 + 152);
  }
  v159 = *v23;
  *v23 = nullptr;
  *(_QWORD *)(v158 + 8 * v155) = v159;
  v160 = v248[0];
  *(_DWORD *)(a2 + 160) = v157 + 1;
  if ( v160 )
  {
    v161 = *(void (__fastcall **)(_QWORD *))(*v160 + 8LL);
    if ( v161 == sub_10D4290 )
    {
      v162 = v160[58];
      v163 = v160[57];
      *v160 = &off_2BA8F30;
      if ( v162 != v163 )
      {
        do
        {
          if ( *(_BYTE *)(v163 + 32) && *(_QWORD *)v163 != v163 + 16 )
            operator delete(*(void **)v163);
          v163 += 40;
        }
        while ( v162 != v163 );
        v163 = v160[57];
      }
      if ( v163 )
        operator delete((void *)v163);
      v164 = (void *)v160[54];
      if ( v164 )
        operator delete(v164);
      v165 = (_QWORD *)v160[50];
      if ( v165 != v160 + 52 )
        operator delete(v165);
      v166 = (_QWORD *)v160[32];
      if ( v166 != v160 + 34 )
        free(v166);
      v167 = (void **)v160[29];
      v168 = (void **)v160[28];
      if ( v167 != v168 )
      {
        do
        {
          while ( *v168 != v168 + 2 )
          {
            operator delete(*v168);
            v168 += 4;
            if ( v167 == v168 )
              goto LABEL_235;
          }
          v168 += 4;
        }
        while ( v167 != v168 );
LABEL_235:
        v168 = (void **)v160[28];
      }
      if ( v168 )
        operator delete(v168);
      v169 = (void *)v160[25];
      if ( v169 )
        operator delete(v169);
      v170 = (_QWORD *)v160[7];
      if ( v170 != v160 + 9 )
        free(v170);
      operator delete(v160, 0x208u);
    }
    else
    {
      v161(v160);
    }
  }
  if ( v270 != &v18[21] )
    operator delete(v270);
  if ( v269 != &v18[18] )
    operator delete(v269);
  v171 = v267;
  v172 = (void **)v266;
  if ( v267 != v266 )
  {
    do
    {
      while ( *v172 != v172 + 2 )
      {
        operator delete(*v172);
        v172 += 4;
        if ( v171 == v172 )
          goto LABEL_250;
      }
      v172 += 4;
    }
    while ( v171 != v172 );
LABEL_250:
    v172 = (void **)v266;
  }
  if ( v172 )
    operator delete(v172);
  v173 = v265;
  v174 = (void **)v264;
  if ( v265 != v264 )
  {
    do
    {
      while ( *v174 != v174 + 2 )
      {
        operator delete(*v174);
        v174 += 4;
        if ( v174 == v173 )
          goto LABEL_256;
      }
      v174 += 4;
    }
    while ( v173 != v174 );
LABEL_256:
    v174 = (void **)v264;
  }
  if ( v174 )
    operator delete(v174);
  v175 = v263;
  v176 = (void **)v262;
  if ( v263 != v262 )
  {
    do
    {
      while ( *v176 != v176 + 2 )
      {
        operator delete(*v176);
        v176 += 4;
        if ( v176 == v175 )
          goto LABEL_262;
      }
      v176 += 4;
    }
    while ( v175 != v176 );
LABEL_262:
    v176 = (void **)v262;
  }
  if ( v176 )
    operator delete(v176);
  v177 = v261;
  v178 = (void **)v260;
  if ( v261 != v260 )
  {
    do
    {
      while ( *v178 != v178 + 2 )
      {
        operator delete(*v178);
        v178 += 4;
        if ( v177 == v178 )
          goto LABEL_268;
      }
      v178 += 4;
    }
    while ( v177 != v178 );
LABEL_268:
    v178 = (void **)v260;
  }
  if ( v178 )
    operator delete(v178);
  v179 = v259;
  v180 = (void **)v258;
  if ( v259 != v258 )
  {
    do
    {
      while ( *v180 != v180 + 2 )
      {
        operator delete(*v180);
        v180 += 4;
        if ( v179 == v180 )
          goto LABEL_274;
      }
      v180 += 4;
    }
    while ( v179 != v180 );
LABEL_274:
    v180 = (void **)v258;
  }
  if ( v180 )
    operator delete(v180);
  if ( v257 )
    operator delete(v257);
  if ( ptr != p_ptr + 2 )
    free(ptr);
}
