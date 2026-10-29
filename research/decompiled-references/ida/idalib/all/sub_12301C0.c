void __fastcall sub_12301C0(__int64 a1, __int64 a2, __int64 a3, char **a4, __int64 a5, void **a6, double a7, double a8)
{
  void **v8; // rbx
  __int64 v9; // r13
  void **p_ptr; // r12
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  char *v13; // rdx
  __int64 *v14; // rbp
  __int64 *v15; // r14
  __int64 v16; // r15
  __int64 v17; // rax
  unsigned __int64 v18; // rax
  char *v19; // rdx
  char *v20; // rbp
  char *v21; // r15
  __int64 v22; // r14
  __int64 v23; // rax
  void **v24; // rbp
  bool v25; // zf
  __int64 v26; // rdx
  unsigned __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rax
  unsigned __int64 v30; // rax
  char *v31; // rcx
  void **v32; // rdx
  void **v33; // rcx
  __m128i v34; // xmm0
  void **v35; // r15
  void **v36; // rbp
  void *v37; // r13
  void **v38; // rbx
  __int64 v39; // rsi
  __int64 v40; // rax
  __int64 v41; // rcx
  unsigned __int64 v42; // rdx
  __int64 v43; // rax
  __int64 v44; // rcx
  unsigned __int64 v45; // rdx
  __int64 v46; // rax
  __int64 v47; // rcx
  unsigned __int64 v48; // rdx
  __int64 v49; // rax
  void **v50; // rcx
  void ***v51; // rdx
  void **v52; // r8
  void **v53; // r9
  void ***v54; // rbx
  void **v55; // rax
  void ***v56; // r14
  void **v57; // rbp
  void **v58; // r15
  __int64 v59; // rsi
  char v60; // al
  __int64 v61; // rcx
  __int64 v62; // r8
  int v63; // eax
  unsigned __int64 v64; // rax
  char *v65; // rcx
  void **v66; // r15
  void **v67; // rcx
  char *v68; // rbp
  _QWORD *v69; // rbx
  void **v70; // r14
  __int64 v71; // rsi
  unsigned __int64 v72; // rax
  char *v73; // rcx
  char *v74; // r15
  char *v75; // r14
  __int64 v76; // rdx
  __int64 *v77; // rcx
  void **v78; // r8
  void **v79; // rax
  __int64 *v80; // rbx
  void **v81; // rcx
  _BYTE *v82; // rax
  __int64 *v83; // r15
  void **v84; // rbp
  void **v85; // r14
  __int64 v86; // rsi
  char v87; // al
  unsigned __int64 v88; // rax
  char *v89; // rdx
  __int64 *v90; // r15
  __int64 v91; // r14
  __m128 v92; // xmm0
  __int64 v93; // rbx
  __m128i v94; // xmm0
  __int64 v95; // rax
  __int64 *v96; // r15
  unsigned __int64 v97; // rax
  char *v98; // rdx
  __int64 *v99; // r15
  __int64 v100; // rdx
  __m128 v101; // xmm0
  __int64 v102; // rbp
  __int64 v103; // rbx
  void **v104; // r14
  __int64 v105; // rsi
  __int64 v106; // rax
  __int64 v107; // rcx
  unsigned __int64 v108; // rdx
  __int64 v109; // rax
  __int64 v110; // rcx
  unsigned __int64 v111; // rdx
  __int64 *v112; // rdx
  void **v113; // rcx
  void **v114; // r8
  __int64 *v115; // rbx
  __int64 v116; // rax
  __int64 *v117; // r15
  void **v118; // rbp
  void **v119; // r14
  __int64 v120; // rsi
  char v121; // al
  __int64 v122; // rbx
  const __m128i *v123; // r13
  __int64 v124; // r14
  void *v125; // r15
  __int64 v126; // rdx
  __int64 v127; // rsi
  int v128; // eax
  __int64 v129; // rcx
  void *v130; // rsi
  _QWORD *v131; // rbx
  void (__fastcall *v132)(_QWORD *); // rax
  __int64 v133; // r13
  __int64 v134; // rbp
  void *v135; // rdi
  _QWORD *v136; // rdi
  _QWORD *v137; // rdi
  void **v138; // r13
  void **v139; // rbp
  void *v140; // rdi
  _QWORD *v141; // rdi
  __int64 v142; // rax
  unsigned __int64 v143; // rcx
  unsigned __int64 v144; // rdx
  __int64 v145; // rax
  __int64 v146; // rcx
  unsigned __int64 v147; // rdx
  __int64 v148; // rax
  unsigned __int64 v149; // rdx
  __int64 v150; // rax
  __int64 v151; // r15
  unsigned __int64 v152; // rax
  char *v153; // rcx
  __int64 v154; // rdx
  void **v155; // rax
  void **v156; // rbx
  void **v157; // r15
  void **v158; // r15
  void **v159; // rbx
  _BYTE *v160; // rax
  __int64 v161; // rax
  unsigned __int64 v162; // rdx
  __int64 v163; // rbx
  __int64 v164; // rax
  __int64 v165; // rax
  unsigned __int64 v166; // rdx
  __int64 v167; // rax
  __int64 v168; // rcx
  __int64 v169; // rcx
  __int64 v170; // rcx
  __int64 v171; // rcx
  __int64 v172; // rcx
  __int64 v173; // rcx
  __int64 v174; // rcx
  __int64 v175; // rcx
  __int64 v176; // rax
  __int64 v177; // rax
  __int64 v178; // rax
  __int64 v179; // r14
  unsigned __int64 v180; // rbx
  __int64 v181; // rdi
  unsigned __int64 v182; // rax
  char *v183; // rsi
  __int64 v184; // rdx
  __int64 v185; // rax
  char *v186; // r15
  char *v187; // r14
  __int64 v188; // rbx
  char *v189; // r14
  _QWORD *v190; // r15
  __int64 v191; // rax
  _QWORD *v192; // r14
  __int64 v193; // rbx
  __int64 v194; // rax
  __int64 v195; // rcx
  unsigned __int64 v196; // rdx
  __m128i v197; // [rsp+0h] [rbp-148h] BYREF
  char **v198; // [rsp+10h] [rbp-138h]
  __int64 v199; // [rsp+18h] [rbp-130h]
  __int64 v200; // [rsp+20h] [rbp-128h]
  __int64 v201; // [rsp+28h] [rbp-120h]
  __int64 v202; // [rsp+30h] [rbp-118h]
  __int64 v203; // [rsp+38h] [rbp-110h]
  void **v204; // [rsp+40h] [rbp-108h] BYREF
  void **v205; // [rsp+48h] [rbp-100h]
  void **v206; // [rsp+50h] [rbp-F8h]
  void **v207; // [rsp+58h] [rbp-F0h]
  void *v208[2]; // [rsp+60h] [rbp-E8h] BYREF
  __int64 v209; // [rsp+70h] [rbp-D8h] BYREF
  int v210; // [rsp+78h] [rbp-D0h]
  void *ptr; // [rsp+80h] [rbp-C8h] BYREF
  __int64 v212; // [rsp+88h] [rbp-C0h]
  _BYTE v213[184]; // [rsp+90h] [rbp-B8h] BYREF

  v8 = a6;
  v9 = *(_QWORD *)(a1 + 24);
  p_ptr = &ptr;
  v201 = a1;
  v11 = *(_QWORD *)(v9 + 8);
  v199 = a2;
  v202 = a3;
  v198 = a4;
  v200 = a5;
  v197.m128i_i64[0] = v11;
  LODWORD(ptr) = 3299;
  v12 = sub_21B6DA0(a6, &ptr, 1);
  v13 = (char *)v8[1];
  v14 = (__int64 *)&v13[8 * (unsigned int)v12];
  v15 = (__int64 *)&v13[8 * HIDWORD(v12)];
  if ( v14 == v15 )
    goto LABEL_5;
  while ( !*v14 || !(unsigned __int8)sub_21B9810(*v14, 3299) )
  {
    if ( v15 == ++v14 )
      goto LABEL_5;
  }
  if ( v15 == v14 )
  {
LABEL_5:
    v203 = 0;
  }
  else
  {
    do
    {
      v16 = *v14;
      v17 = *(_QWORD *)(*v14 + 16);
      if ( !v17 )
        v17 = *v14;
      ++v14;
      *(_BYTE *)(v17 + 44) |= 1u;
      if ( v14 == v15 )
        break;
      while ( !*v14 || !(unsigned __int8)sub_21B9810(*v14, 3299) )
      {
        if ( v15 == ++v14 )
          goto LABEL_13;
      }
    }
    while ( v15 != v14 );
LABEL_13:
    v203 = v16;
  }
  LODWORD(ptr) = 3264;
  v18 = sub_21B6DA0(v8, &ptr, 1);
  v19 = (char *)v8[1];
  v20 = &v19[8 * (unsigned int)v18];
  v21 = &v19[8 * HIDWORD(v18)];
  if ( v20 == v21 )
    goto LABEL_18;
  while ( !*(_QWORD *)v20 || !(unsigned __int8)sub_21B9810(*(_QWORD *)v20, 3264) )
  {
    v20 += 8;
    if ( v21 == v20 )
      goto LABEL_18;
  }
  if ( v21 == v20 )
  {
LABEL_18:
    v22 = 0;
  }
  else
  {
    do
    {
      v22 = *(_QWORD *)v20;
      v49 = *(_QWORD *)(*(_QWORD *)v20 + 16LL);
      if ( !v49 )
        v49 = *(_QWORD *)v20;
      v20 += 8;
      *(_BYTE *)(v49 + 44) |= 1u;
      if ( v20 == v21 )
        break;
      while ( !*(_QWORD *)v20 || !(unsigned __int8)sub_21B9810(*(_QWORD *)v20, 3264) )
      {
        v20 += 8;
        if ( v21 == v20 )
          goto LABEL_19;
      }
    }
    while ( v21 != v20 );
  }
LABEL_19:
  v212 = 0x1000000000LL;
  ptr = v213;
  sub_21B7CF0(v8, 36);
  sub_21B7CF0(v8, 345);
  sub_21B7CF0(v8, 3480);
  sub_21B7CF0(v8, 3132);
  sub_21B7CF0(v8, 3203);
  if ( *(_QWORD *)(v197.m128i_i64[0] + 496) )
  {
    v24 = v208;
    sub_C05100((__int64)v208, "--sysroot=", v197.m128i_i64[0] + 488);
    v145 = (*((__int64 (__fastcall **)(void **, void *, void *))*v8 + 2))(v8, v208[0], v208[1]);
    v146 = (unsigned int)v212;
    v147 = (unsigned int)v212 + 1LL;
    if ( v147 > HIDWORD(v212) )
    {
      v204 = (void **)v145;
      sub_2237220(&ptr, v213, v147, 8);
      v146 = (unsigned int)v212;
      v145 = (__int64)v204;
    }
    *((_QWORD *)ptr + v146) = v145;
    v23 = (unsigned int)(v212 + 1);
    LODWORD(v212) = v212 + 1;
    if ( v208[0] != &v209 )
    {
      operator delete(v208[0]);
      v23 = (unsigned int)v212;
    }
  }
  else
  {
    v23 = (unsigned int)v212;
    v24 = v208;
  }
  if ( v23 + 1 > (unsigned __int64)HIDWORD(v212) )
  {
    sub_2237220(&ptr, v213, v23 + 1, 8);
    v23 = (unsigned int)v212;
  }
  v25 = v203 == 0;
  *((_QWORD *)ptr + v23) = "--eh-frame-hdr";
  v26 = (unsigned int)(v212 + 1);
  LODWORD(v212) = v212 + 1;
  if ( v25 )
  {
    v142 = (unsigned int)v26;
    v143 = HIDWORD(v212);
    v144 = (unsigned int)v26 + 1LL;
    if ( v22 )
    {
      if ( HIDWORD(v212) < v144 )
      {
        sub_2237220(&ptr, v213, v144, 8);
        v142 = (unsigned int)v212;
      }
      *((_QWORD *)ptr + v142) = "-shared";
      v143 = HIDWORD(v212);
      LODWORD(v212) = v212 + 1;
      v142 = (unsigned int)v212;
      v144 = (unsigned int)v212 + 1LL;
    }
    if ( v143 < v144 )
    {
      sub_2237220(&ptr, v213, v144, 8);
      v142 = (unsigned int)v212;
    }
    *((_QWORD *)ptr + v142) = "--enable-new-dtags";
    v28 = (unsigned int)(v212 + 1);
    LODWORD(v212) = v212 + 1;
  }
  else
  {
    v27 = v26 + 1;
    if ( v27 > HIDWORD(v212) )
      sub_2237220(&ptr, v213, v27, 8);
    *((_QWORD *)ptr + (unsigned int)v212) = "-Bstatic";
    v28 = (unsigned int)(v212 + 1);
    LODWORD(v212) = v212 + 1;
  }
  if ( v28 + 1 > (unsigned __int64)HIDWORD(v212) )
  {
    sub_2237220(&ptr, v213, v28 + 1, 8);
    v28 = (unsigned int)v212;
  }
  *((_QWORD *)ptr + v28) = "-shared";
  v29 = (unsigned int)(v212 + 1);
  LODWORD(v212) = v212 + 1;
  if ( !v22 )
  {
    if ( v29 + 1 > (unsigned __int64)HIDWORD(v212) )
    {
      sub_2237220(&ptr, v213, v29 + 1, 8);
      v29 = (unsigned int)v212;
    }
    *((_QWORD *)ptr + v29) = "--no-undefined";
    v29 = (unsigned int)(v212 + 1);
    LODWORD(v212) = v212 + 1;
  }
  if ( *(_DWORD *)(v9 + 48) == 28 )
  {
    if ( v29 + 1 > (unsigned __int64)HIDWORD(v212) )
    {
      sub_2237220(&ptr, v213, v29 + 1, 8);
      v29 = (unsigned int)v212;
    }
    *((_QWORD *)ptr + v29) = "-X";
    LODWORD(v212) = v212 + 1;
    LODWORD(v208[0]) = 2700;
    v152 = sub_21B6DA0(v8, v208, 1);
    v153 = (char *)v8[1];
    v154 = (unsigned int)v152;
    v155 = (void **)&v153[8 * HIDWORD(v152)];
    v205 = v155;
    if ( &v153[8 * v154] != (char *)v155 )
    {
      v204 = v8;
      v156 = (void **)&v153[8 * v154];
      v157 = v155;
      while ( !*v156 || !(unsigned __int8)sub_21B9810(*v156, 2700) )
      {
        if ( v157 == ++v156 )
        {
          v8 = v204;
          goto LABEL_31;
        }
      }
      v158 = v156;
      v8 = v204;
      if ( v205 != v158 )
      {
        v159 = v205;
        do
        {
          v160 = *((_BYTE **)*v158 + 2);
          if ( !v160 )
            v160 = *v158;
          ++v158;
          v160[44] |= 1u;
          if ( v158 == v159 )
            break;
          while ( !*v158 || !(unsigned __int8)sub_21B9810(*v158, 2700) )
          {
            if ( v159 == ++v158 )
              goto LABEL_227;
          }
        }
        while ( v159 != v158 );
LABEL_227:
        v161 = (unsigned int)v212;
        v8 = v204;
        v162 = (unsigned int)v212 + 1LL;
        if ( v162 > HIDWORD(v212) )
        {
          sub_2237220(&ptr, v213, v162, 8);
          v161 = (unsigned int)v212;
        }
        *((_QWORD *)ptr + v161) = "--no-relax";
        LODWORD(v212) = v212 + 1;
      }
    }
  }
LABEL_31:
  if ( *((_DWORD *)v198 + 2) == 1 )
  {
    v148 = (unsigned int)v212;
    v149 = (unsigned int)v212 + 1LL;
    if ( v149 > HIDWORD(v212) )
    {
      sub_2237220(&ptr, v213, v149, 8);
      v148 = (unsigned int)v212;
    }
    *((_QWORD *)ptr + v148) = "-o";
    LODWORD(v212) = v212 + 1;
    v150 = (unsigned int)v212;
    v151 = (__int64)*v198;
    if ( (unsigned __int64)(unsigned int)v212 + 1 > HIDWORD(v212) )
    {
      sub_2237220(&ptr, v213, (unsigned int)v212 + 1LL, 8);
      v150 = (unsigned int)v212;
    }
    *((_QWORD *)ptr + v150) = v151;
    LODWORD(v212) = v212 + 1;
  }
  v208[0] = (void *)0xBEB00000BF0LL;
  LODWORD(v208[1]) = 3236;
  v30 = sub_21B6DA0(v8, v208, 3);
  v31 = (char *)v8[1];
  v209 = 0xBEB00000BF0LL;
  v210 = 3236;
  v32 = (void **)&v31[8 * (unsigned int)v30];
  v33 = (void **)&v31[8 * HIDWORD(v30)];
  v204 = v33;
  v34 = (__m128i)_mm_loadh_ps((const double *)&v204);
  *(__m128i *)v208 = v34;
  if ( v32 != v33 )
  {
    v204 = (void **)v9;
    v35 = v32;
    v207 = (void **)((char *)&v208[1] + 4);
    v205 = v8;
    v206 = &ptr;
    v36 = v33;
    do
    {
      v37 = *v35;
      v38 = v208;
      if ( *v35 )
      {
        do
        {
          v39 = *((unsigned int *)v38 + 4);
          if ( !(_DWORD)v39 )
            break;
          if ( (unsigned __int8)sub_21B9810(v37, v39) )
          {
            v50 = v36;
            v9 = (__int64)v204;
            v24 = v208;
            v204 = v50;
            v51 = (void ***)v35;
            v8 = v205;
            p_ptr = v206;
            v209 = 0xBEB00000BF0LL;
            v210 = 3236;
            v34 = (__m128i)_mm_loadh_ps((const double *)&v204);
            *(__m128i *)v208 = v34;
            if ( v50 == v35 )
              goto LABEL_40;
            v52 = v205;
            v53 = v206;
            v54 = (void ***)v50;
            v206 = (void **)((char *)&v208[1] + 4);
            do
            {
              v55 = *v51;
              v56 = v51 + 1;
              if ( (*v51)[2] )
                v55 = (void **)(*v51)[2];
              *((_BYTE *)v55 + 44) |= 1u;
              v208[0] = v51 + 1;
              if ( v56 == v54 )
                break;
              while ( 1 )
              {
                v57 = v208;
                if ( *v56 )
                  break;
LABEL_76:
                v208[0] = ++v56;
                if ( v54 == v56 )
                  goto LABEL_77;
              }
              v204 = *v56;
              v58 = v52;
              while ( 1 )
              {
                v59 = *((unsigned int *)v57 + 4);
                if ( !(_DWORD)v59 )
                {
LABEL_75:
                  v52 = v58;
                  goto LABEL_76;
                }
                v205 = v53;
                v60 = sub_21B9810(v204, v59);
                v53 = v205;
                if ( v60 )
                  break;
                v57 = (void **)((char *)v57 + 4);
                if ( v206 == v57 )
                  goto LABEL_75;
              }
              v51 = (void ***)v208[0];
              v52 = v58;
            }
            while ( v54 != v208[0] );
LABEL_77:
            v24 = v208;
            v8 = v52;
            p_ptr = v53;
            goto LABEL_78;
          }
          v38 = (void **)((char *)v38 + 4);
        }
        while ( v207 != v38 );
      }
      v208[0] = ++v35;
    }
    while ( v36 != v35 );
    v24 = v208;
    v9 = (__int64)v204;
    v8 = v205;
    p_ptr = v206;
  }
LABEL_40:
  sub_112D4E0(v208, v9, "crti.o");
  v40 = (*((__int64 (__fastcall **)(void **, void *, void *))*v8 + 2))(v8, v208[0], v208[1]);
  v41 = (unsigned int)v212;
  v42 = (unsigned int)v212 + 1LL;
  if ( v42 > HIDWORD(v212) )
  {
    v204 = (void **)v40;
    sub_2237220(p_ptr, p_ptr + 2, v42, 8);
    v41 = (unsigned int)v212;
    v40 = (__int64)v204;
  }
  *((_QWORD *)ptr + v41) = v40;
  LODWORD(v212) = v212 + 1;
  if ( v208[0] != &v209 )
    operator delete(v208[0]);
  sub_112D4E0(v208, v9, "crtbeginS.o");
  v43 = (*((__int64 (__fastcall **)(void **, void *, void *))*v8 + 2))(v8, v208[0], v208[1]);
  v44 = (unsigned int)v212;
  v45 = (unsigned int)v212 + 1LL;
  if ( v45 > HIDWORD(v212) )
  {
    v204 = (void **)v43;
    sub_2237220(p_ptr, p_ptr + 2, v45, 8);
    v44 = (unsigned int)v212;
    v43 = (__int64)v204;
  }
  *((_QWORD *)ptr + v44) = v43;
  LODWORD(v212) = v212 + 1;
  if ( v208[0] != &v209 )
    operator delete(v208[0]);
  if ( !v22 )
  {
    sub_112D4E0(v208, v9, "start_dyn.o");
    v194 = (*((__int64 (__fastcall **)(void **, void *, void *))*v8 + 2))(v8, v208[0], v208[1]);
    v195 = (unsigned int)v212;
    v196 = (unsigned int)v212 + 1LL;
    if ( v196 > HIDWORD(v212) )
    {
      v204 = (void **)v194;
      sub_2237220(p_ptr, p_ptr + 2, v196, 8);
      v195 = (unsigned int)v212;
      v194 = (__int64)v204;
    }
    *((_QWORD *)ptr + v195) = v194;
    LODWORD(v212) = v212 + 1;
    if ( v208[0] != &v209 )
      operator delete(v208[0]);
  }
  sub_112D4E0(v208, v9, "init_term_dyn.o");
  v46 = (*((__int64 (__fastcall **)(void **, void *, void *))*v8 + 2))(v8, v208[0], v208[1]);
  v47 = (unsigned int)v212;
  v48 = (unsigned int)v212 + 1LL;
  if ( v48 > HIDWORD(v212) )
  {
    v204 = (void **)v46;
    sub_2237220(p_ptr, p_ptr + 2, v48, 8);
    v47 = (unsigned int)v212;
    v46 = (__int64)v204;
  }
  *((_QWORD *)ptr + v47) = v46;
  LODWORD(v212) = v212 + 1;
  if ( v208[0] != &v209 )
    operator delete(v208[0]);
LABEL_78:
  v208[0] = (void *)0xF0000089CLL;
  v208[1] = (void *)0xD1700000CF9LL;
  sub_21B6650(v8, p_ptr, v208, 4);
  sub_112D940(v9, (__int64)v8, (__int64)p_ptr, v61, v62);
  v63 = *(_DWORD *)(v197.m128i_i64[0] + 40);
  if ( v63 )
    sub_11C8A90((_DWORD *)v9, (__int64)v8, (__int64)p_ptr, v198, v200, v63 == 2, v34);
  LOBYTE(v207) = sub_11C3BD0((__int64 **)v9, (__int64)v8, (__int64)p_ptr);
  sub_11BD3E0(v9, (__int64)v8, (__int64)p_ptr);
  sub_11C3660(v9, v200, (__int64)v8, (__int64)p_ptr, v202);
  v208[0] = (void *)0xBDD00000BF0LL;
  LODWORD(v208[1]) = 3236;
  v64 = sub_21B6DA0(v8, v208, 3);
  v65 = (char *)v8[1];
  v209 = 0xBDD00000BF0LL;
  v210 = 3236;
  v66 = (void **)&v65[8 * (unsigned int)v64];
  v67 = (void **)&v65[8 * HIDWORD(v64)];
  v204 = v67;
  *(__m128 *)v208 = _mm_loadh_ps((const double *)&v204);
  if ( v66 != v67 )
  {
    v204 = v8;
    v206 = (void **)((char *)&v208[1] + 4);
    v205 = p_ptr;
    v68 = (char *)v67;
    do
    {
      v69 = *v66;
      v70 = v208;
      if ( *v66 )
      {
        do
        {
          v71 = *((unsigned int *)v70 + 4);
          if ( !(_DWORD)v71 )
            break;
          if ( (unsigned __int8)sub_21B9810(v69, v71) )
          {
            v77 = (__int64 *)v68;
            v8 = v204;
            v204 = (void **)v68;
            v24 = v208;
            v209 = 0xBDD00000BF0LL;
            p_ptr = v205;
            v210 = 3236;
            *(__m128 *)v208 = _mm_loadh_ps((const double *)&v204);
            if ( v66 == v204 )
              goto LABEL_88;
            v78 = v205;
            v204 = (void **)((char *)&v208[1] + 4);
            v79 = v8;
            v80 = v77;
            v81 = v79;
            do
            {
              v82 = *v66;
              if ( *((_QWORD *)*v66 + 2) )
                v82 = *((_BYTE **)*v66 + 2);
              v83 = (__int64 *)(v66 + 1);
              v82[44] |= 1u;
              v208[0] = v83;
              if ( v83 == v80 )
                break;
              while ( 1 )
              {
                v84 = v208;
                if ( *v83 )
                  break;
LABEL_106:
                v208[0] = ++v83;
                if ( v80 == v83 )
                  goto LABEL_107;
              }
              v197.m128i_i64[0] = *v83;
              v85 = v81;
              while ( 1 )
              {
                v86 = *((unsigned int *)v84 + 4);
                if ( !(_DWORD)v86 )
                {
LABEL_105:
                  v81 = v85;
                  goto LABEL_106;
                }
                v203 = (__int64)v78;
                v87 = sub_21B9810(v197.m128i_i64[0], v86);
                v78 = (void **)v203;
                if ( v87 )
                  break;
                v84 = (void **)((char *)v84 + 4);
                if ( v84 == v204 )
                  goto LABEL_105;
              }
              v66 = (void **)v208[0];
              v81 = v85;
            }
            while ( v80 != v208[0] );
LABEL_107:
            v24 = v208;
            v8 = v81;
            p_ptr = v78;
            goto LABEL_108;
          }
          v70 = (void **)((char *)v70 + 4);
        }
        while ( v70 != v206 );
      }
      v208[0] = ++v66;
    }
    while ( v68 != (char *)v66 );
    v24 = v208;
    v8 = v204;
    p_ptr = v205;
  }
LABEL_88:
  LODWORD(v208[0]) = 3297;
  v72 = sub_21B6DA0(v8, v208, 1);
  v73 = (char *)v8[1];
  v74 = &v73[8 * (unsigned int)v72];
  v75 = &v73[8 * HIDWORD(v72)];
  if ( v74 == v75 )
    goto LABEL_92;
  while ( !*(_QWORD *)v74 || !(unsigned __int8)sub_21B9810(*(_QWORD *)v74, 3297) )
  {
    v74 += 8;
    if ( v75 == v74 )
      goto LABEL_92;
  }
  if ( v75 == v74 )
  {
LABEL_92:
    v76 = 0;
  }
  else
  {
    v204 = v8;
    do
    {
      v163 = *(_QWORD *)v74;
      v164 = *(_QWORD *)(*(_QWORD *)v74 + 16LL);
      if ( !v164 )
        v164 = *(_QWORD *)v74;
      v74 += 8;
      *(_BYTE *)(v164 + 44) |= 1u;
      if ( v74 == v75 )
        break;
      while ( !*(_QWORD *)v74 || !(unsigned __int8)sub_21B9810(*(_QWORD *)v74, 3297) )
      {
        v74 += 8;
        if ( v75 == v74 )
          goto LABEL_243;
      }
    }
    while ( v75 != v74 );
LABEL_243:
    v76 = v163;
    v8 = v204;
  }
  sub_11C50B0(v199, (__int64)p_ptr, v9, (__int64)v8, v76 != 0 && v203 == 0, 0, 0);
  if ( *(_DWORD *)(v197.m128i_i64[0] + 16) == 1 && sub_112D7B0(v9, (__int64)v8) )
    (*(void (__fastcall **)(__int64, void **, void **))(*(_QWORD *)v9 + 640LL))(v9, v8, p_ptr);
  sub_21B7CF0(v8, 3306);
  if ( *(_DWORD *)(v197.m128i_i64[0] + 16) == 4 )
  {
    v208[0] = (void *)0xBDD00000BF0LL;
    v182 = sub_21B6DA0(v8, v208, 2);
    v183 = (char *)v8[1];
    v184 = (unsigned int)v182;
    v209 = 0xBDD00000BF0LL;
    v185 = (__int64)&v183[8 * HIDWORD(v182)];
    v186 = &v183[8 * v184];
    v197.m128i_i64[0] = v185;
    v203 = v185;
    *(__m128 *)v208 = _mm_loadh_ps((const double *)v197.m128i_i64);
    if ( v186 == (char *)v185 )
      goto LABEL_291;
    v197.m128i_i64[0] = (__int64)v8;
    v187 = (char *)v185;
    while ( 1 )
    {
      v188 = *(_QWORD *)v186;
      if ( *(_QWORD *)v186 )
      {
        if ( (unsigned __int8)sub_21B9810(*(_QWORD *)v186, 3056) || (unsigned __int8)sub_21B9810(v188, 3037) )
          break;
      }
      v186 += 8;
      v208[0] = v186;
      if ( v187 == v186 )
      {
        v8 = (void **)v197.m128i_i64[0];
        goto LABEL_291;
      }
    }
    v8 = (void **)v197.m128i_i64[0];
    v209 = 0xBDD00000BF0LL;
    v197.m128i_i64[0] = v203;
    *(__m128 *)v208 = _mm_loadh_ps((const double *)v197.m128i_i64);
    if ( (char *)v203 == v186 )
    {
LABEL_291:
      (*(void (__fastcall **)(__int64, void **, void **))(*(_QWORD *)v9 + 320LL))(v9, v8, p_ptr);
      (*(void (__fastcall **)(__int64, void **, void **))(*(_QWORD *)v9 + 312LL))(v9, v8, p_ptr);
    }
    else
    {
      v197.m128i_i64[0] = (__int64)v8;
      v189 = v186;
      v190 = (_QWORD *)v203;
      do
      {
        v191 = *(_QWORD *)(*(_QWORD *)v189 + 16LL);
        if ( !v191 )
          v191 = *(_QWORD *)v189;
        v192 = v189 + 8;
        *(_BYTE *)(v191 + 44) |= 1u;
        v208[0] = v192;
        if ( v192 == v190 )
          break;
        while ( 1 )
        {
          v193 = *v192;
          if ( *v192 )
          {
            if ( (unsigned __int8)sub_21B9810(*v192, 3056) || (unsigned __int8)sub_21B9810(v193, 3037) )
              break;
          }
          v208[0] = ++v192;
          if ( v190 == v192 )
            goto LABEL_303;
        }
        v189 = (char *)v208[0];
      }
      while ( v190 != v208[0] );
LABEL_303:
      v8 = (void **)v197.m128i_i64[0];
    }
  }
  if ( (_BYTE)v207 )
    sub_11BC1D0(v9, (__int64)v8, (__int64)p_ptr);
  v165 = (unsigned int)v212;
  v166 = (unsigned int)v212 + 1LL;
  if ( v166 > HIDWORD(v212) )
  {
    sub_2237220(p_ptr, p_ptr + 2, v166, 8);
    v165 = (unsigned int)v212;
  }
  *((_QWORD *)ptr + v165) = "-lgcc";
  LODWORD(v212) = v212 + 1;
  v167 = (unsigned int)v212;
  if ( (unsigned __int64)(unsigned int)v212 + 1 > HIDWORD(v212) )
  {
    sub_2237220(p_ptr, p_ptr + 2, (unsigned int)v212 + 1LL, 8);
    v167 = (unsigned int)v212;
  }
  *((_QWORD *)ptr + v167) = "--push-state";
  LODWORD(v212) = v212 + 1;
  v168 = (unsigned int)v212;
  if ( (unsigned __int64)(unsigned int)v212 + 1 > HIDWORD(v212) )
  {
    sub_2237220(p_ptr, p_ptr + 2, (unsigned int)v212 + 1LL, 8);
    v168 = (unsigned int)v212;
  }
  *((_QWORD *)ptr + v168) = "--as-needed";
  LODWORD(v212) = v212 + 1;
  v169 = (unsigned int)v212;
  if ( (unsigned __int64)(unsigned int)v212 + 1 > HIDWORD(v212) )
  {
    sub_2237220(p_ptr, p_ptr + 2, (unsigned int)v212 + 1LL, 8);
    v169 = (unsigned int)v212;
  }
  *((_QWORD *)ptr + v169) = "-lgcc_s";
  LODWORD(v212) = v212 + 1;
  v170 = (unsigned int)v212;
  if ( (unsigned __int64)(unsigned int)v212 + 1 > HIDWORD(v212) )
  {
    sub_2237220(p_ptr, p_ptr + 2, (unsigned int)v212 + 1LL, 8);
    v170 = (unsigned int)v212;
  }
  *((_QWORD *)ptr + v170) = "--no-as-needed";
  LODWORD(v212) = v212 + 1;
  v171 = (unsigned int)v212;
  if ( (unsigned __int64)(unsigned int)v212 + 1 > HIDWORD(v212) )
  {
    sub_2237220(p_ptr, p_ptr + 2, (unsigned int)v212 + 1LL, 8);
    v171 = (unsigned int)v212;
  }
  *((_QWORD *)ptr + v171) = "--pop-state";
  LODWORD(v212) = v212 + 1;
  v172 = (unsigned int)v212;
  if ( (unsigned __int64)(unsigned int)v212 + 1 > HIDWORD(v212) )
  {
    sub_2237220(p_ptr, p_ptr + 2, (unsigned int)v212 + 1LL, 8);
    v172 = (unsigned int)v212;
  }
  *((_QWORD *)ptr + v172) = "-lroot";
  LODWORD(v212) = v212 + 1;
  v173 = (unsigned int)v212;
  if ( (unsigned __int64)(unsigned int)v212 + 1 > HIDWORD(v212) )
  {
    sub_2237220(p_ptr, p_ptr + 2, (unsigned int)v212 + 1LL, 8);
    v173 = (unsigned int)v212;
  }
  *((_QWORD *)ptr + v173) = "-lgcc";
  LODWORD(v212) = v212 + 1;
  v174 = (unsigned int)v212;
  if ( (unsigned __int64)(unsigned int)v212 + 1 > HIDWORD(v212) )
  {
    sub_2237220(p_ptr, p_ptr + 2, (unsigned int)v212 + 1LL, 8);
    v174 = (unsigned int)v212;
  }
  *((_QWORD *)ptr + v174) = "--push-state";
  LODWORD(v212) = v212 + 1;
  v175 = (unsigned int)v212;
  if ( (unsigned __int64)(unsigned int)v212 + 1 > HIDWORD(v212) )
  {
    sub_2237220(p_ptr, p_ptr + 2, (unsigned int)v212 + 1LL, 8);
    v175 = (unsigned int)v212;
  }
  *((_QWORD *)ptr + v175) = "--as-needed";
  LODWORD(v212) = v212 + 1;
  v176 = (unsigned int)v212;
  if ( (unsigned __int64)(unsigned int)v212 + 1 > HIDWORD(v212) )
  {
    sub_2237220(p_ptr, p_ptr + 2, (unsigned int)v212 + 1LL, 8);
    v176 = (unsigned int)v212;
  }
  *((_QWORD *)ptr + v176) = "-lgcc_s";
  LODWORD(v212) = v212 + 1;
  v177 = (unsigned int)v212;
  if ( (unsigned __int64)(unsigned int)v212 + 1 > HIDWORD(v212) )
  {
    sub_2237220(p_ptr, p_ptr + 2, (unsigned int)v212 + 1LL, 8);
    v177 = (unsigned int)v212;
  }
  *((_QWORD *)ptr + v177) = "--no-as-needed";
  LODWORD(v212) = v212 + 1;
  v178 = (unsigned int)v212;
  if ( (unsigned __int64)(unsigned int)v212 + 1 > HIDWORD(v212) )
  {
    sub_2237220(p_ptr, p_ptr + 2, (unsigned int)v212 + 1LL, 8);
    v178 = (unsigned int)v212;
  }
  *((_QWORD *)ptr + v178) = "--pop-state";
  LODWORD(v212) = v212 + 1;
LABEL_108:
  v208[0] = (void *)0xC6900000C6ALL;
  v88 = sub_21B6DA0(v8, v208, 2);
  v89 = (char *)v8[1];
  v209 = 0xC6900000C6ALL;
  v90 = (__int64 *)&v89[8 * (unsigned int)v88];
  v91 = (__int64)&v89[8 * HIDWORD(v88)];
  v197.m128i_i64[0] = v91;
  v92 = _mm_loadh_ps((const double *)v197.m128i_i64);
  *(__m128 *)v208 = v92;
  if ( v90 != (__int64 *)v91 )
  {
    v197.m128i_i64[0] = (__int64)v8;
    while ( 1 )
    {
      v93 = *v90;
      if ( *v90 )
      {
        if ( (unsigned __int8)sub_21B9810(*v90, 3178) || (unsigned __int8)sub_21B9810(v93, 3177) )
          break;
      }
      v208[0] = ++v90;
      if ( (__int64 *)v91 == v90 )
      {
        v8 = (void **)v197.m128i_i64[0];
        v197.m128i_i64[0] = v91;
        v94 = _mm_loadl_epi64(&v197);
        v92 = (__m128)_mm_unpacklo_epi64(v94, v94);
        goto LABEL_115;
      }
    }
    v8 = (void **)v197.m128i_i64[0];
    v197.m128i_i64[0] = v91;
    v92 = _mm_loadh_ps((const double *)v197.m128i_i64);
  }
LABEL_115:
  *(__m128 *)v208 = v92;
  v209 = 0xC6900000C6ALL;
  while ( (__int64 *)v91 != v90 )
  {
    v95 = *v90;
    if ( *(_QWORD *)(*v90 + 16) )
      v95 = *(_QWORD *)(*v90 + 16);
    v96 = v90 + 1;
    *(_BYTE *)(v95 + 44) |= 1u;
    v208[0] = v96;
    if ( v96 == (__int64 *)v91 )
      break;
    while ( 1 )
    {
      if ( *v96 )
      {
        v197.m128i_i64[0] = *v96;
        if ( (unsigned __int8)sub_21B9810(v197.m128i_i64[0], 3178)
          || (unsigned __int8)sub_21B9810(v197.m128i_i64[0], 3177) )
        {
          break;
        }
      }
      v208[0] = ++v96;
      if ( (__int64 *)v91 == v96 )
        goto LABEL_124;
    }
    v90 = (__int64 *)v208[0];
  }
LABEL_124:
  v208[0] = (void *)0xBEB00000BF0LL;
  LODWORD(v208[1]) = 3236;
  v97 = sub_21B6DA0(v8, v208, 3);
  v98 = (char *)v8[1];
  v209 = 0xBEB00000BF0LL;
  v210 = 3236;
  v99 = (__int64 *)&v98[8 * (unsigned int)v97];
  v100 = (__int64)&v98[8 * HIDWORD(v97)];
  v197.m128i_i64[0] = v100;
  v101 = _mm_loadh_ps((const double *)v197.m128i_i64);
  *(__m128 *)v208 = v101;
  if ( v99 != (__int64 *)v100 )
  {
    v197.m128i_i64[0] = (__int64)v8;
    v204 = (void **)((char *)&v208[1] + 4);
    v203 = (__int64)p_ptr;
    v102 = v100;
    do
    {
      v103 = *v99;
      v104 = v208;
      if ( *v99 )
      {
        do
        {
          v105 = *((unsigned int *)v104 + 4);
          if ( !(_DWORD)v105 )
            break;
          if ( (unsigned __int8)sub_21B9810(v103, v105) )
          {
            v112 = (__int64 *)v102;
            v8 = (void **)v197.m128i_i64[0];
            v197.m128i_i64[0] = v102;
            v24 = v208;
            v209 = 0xBEB00000BF0LL;
            p_ptr = (void **)v203;
            v210 = 3236;
            v101 = _mm_loadh_ps((const double *)v197.m128i_i64);
            *(__m128 *)v208 = v101;
            if ( v99 == (__int64 *)v197.m128i_i64[0] )
              goto LABEL_132;
            v113 = v8;
            v114 = (void **)v203;
            v115 = v112;
            v204 = (void **)((char *)&v208[1] + 4);
            do
            {
              v116 = *v99;
              if ( *(_QWORD *)(*v99 + 16) )
                v116 = *(_QWORD *)(*v99 + 16);
              v117 = v99 + 1;
              *(_BYTE *)(v116 + 44) |= 1u;
              v208[0] = v117;
              if ( v117 == v115 )
                break;
              while ( 1 )
              {
                v118 = v208;
                if ( *v117 )
                  break;
LABEL_154:
                v208[0] = ++v117;
                if ( v115 == v117 )
                  goto LABEL_155;
              }
              v197.m128i_i64[0] = *v117;
              v119 = v113;
              while ( 1 )
              {
                v120 = *((unsigned int *)v118 + 4);
                if ( !(_DWORD)v120 )
                {
LABEL_153:
                  v113 = v119;
                  goto LABEL_154;
                }
                v203 = (__int64)v114;
                v121 = sub_21B9810(v197.m128i_i64[0], v120);
                v114 = (void **)v203;
                if ( v121 )
                  break;
                v118 = (void **)((char *)v118 + 4);
                if ( v118 == v204 )
                  goto LABEL_153;
              }
              v99 = (__int64 *)v208[0];
              v113 = v119;
            }
            while ( v115 != v208[0] );
LABEL_155:
            v24 = v208;
            v8 = v113;
            p_ptr = v114;
            goto LABEL_156;
          }
          v104 = (void **)((char *)v104 + 4);
        }
        while ( v104 != v204 );
      }
      v208[0] = ++v99;
    }
    while ( (__int64 *)v102 != v99 );
    v24 = v208;
    v8 = (void **)v197.m128i_i64[0];
    p_ptr = (void **)v203;
  }
LABEL_132:
  sub_112D4E0(v208, v9, "crtendS.o");
  v106 = (*((__int64 (__fastcall **)(void **, void *, void *))*v8 + 2))(v8, v208[0], v208[1]);
  v107 = (unsigned int)v212;
  v108 = (unsigned int)v212 + 1LL;
  if ( v108 > HIDWORD(v212) )
  {
    v197.m128i_i64[0] = v106;
    sub_2237220(p_ptr, p_ptr + 2, v108, 8);
    v107 = (unsigned int)v212;
    v106 = v197.m128i_i64[0];
  }
  *((_QWORD *)ptr + v107) = v106;
  LODWORD(v212) = v212 + 1;
  if ( v208[0] != &v209 )
    operator delete(v208[0]);
  sub_112D4E0(v208, v9, "crtn.o");
  v109 = (*((__int64 (__fastcall **)(void **, void *, void *))*v8 + 2))(v8, v208[0], v208[1]);
  v110 = (unsigned int)v212;
  v111 = (unsigned int)v212 + 1LL;
  if ( v111 > HIDWORD(v212) )
  {
    v197.m128i_i64[0] = v109;
    sub_2237220(p_ptr, p_ptr + 2, v111, 8);
    v110 = (unsigned int)v212;
    v109 = v197.m128i_i64[0];
  }
  *((_QWORD *)ptr + v110) = v109;
  LODWORD(v212) = v212 + 1;
  if ( v208[0] != &v209 )
    operator delete(v208[0]);
LABEL_156:
  (*(void (__fastcall **)(__int64, void **, void **))(*(_QWORD *)v9 + 672LL))(v9, v8, p_ptr);
  sub_1132E50((__m128i *)v208, *(_QWORD *)(v201 + 24), nullptr);
  v122 = (*((__int64 (__fastcall **)(void **, void *, void *))*v8 + 2))(v8, v208[0], v208[1]);
  if ( v208[0] != &v209 )
    operator delete(v208[0]);
  v197.m128i_i64[1] = 1;
  v123 = *(const __m128i **)v200;
  v124 = *(unsigned int *)(v200 + 8);
  v197.m128i_i64[0] = (__int64)v198;
  v125 = (void *)operator new(0x208u);
  sub_1106AE0(
    (__int64)v125,
    v202,
    v201,
    0x100000000LL,
    (__int64)"@",
    v122,
    (__int64)p_ptr,
    v123,
    v124,
    v197.m128i_i64[0],
    v197.m128i_i64[1],
    0);
  v208[0] = v125;
  v126 = *(unsigned int *)(v199 + 160);
  v127 = v126 + 1;
  v128 = *(_DWORD *)(v199 + 160);
  if ( v126 + 1 > (unsigned __int64)*(unsigned int *)(v199 + 164) )
  {
    v179 = v199;
    v180 = *(_QWORD *)(v199 + 152);
    v181 = v199 + 152;
    if ( v180 > (unsigned __int64)v208 )
    {
      sub_11673D0(v181, v127, v101, a8);
      v126 = *(unsigned int *)(v179 + 160);
      v129 = *(_QWORD *)(v179 + 152);
      v128 = *(_DWORD *)(v179 + 160);
    }
    else
    {
      if ( (unsigned __int64)v208 < v180 + 8 * v126 )
      {
        sub_11673D0(v181, v127, v101, a8);
        v129 = *(_QWORD *)(v199 + 152);
        v126 = *(unsigned int *)(v199 + 160);
        v24 = (void **)((char *)v208 + v129 - v180);
      }
      else
      {
        sub_11673D0(v181, v127, v101, a8);
        v126 = *(unsigned int *)(v199 + 160);
        v129 = *(_QWORD *)(v199 + 152);
      }
      v128 = *(_DWORD *)(v199 + 160);
    }
  }
  else
  {
    v129 = *(_QWORD *)(v199 + 152);
  }
  v130 = *v24;
  *v24 = nullptr;
  *(_QWORD *)(v129 + 8 * v126) = v130;
  v131 = v208[0];
  *(_DWORD *)(v199 + 160) = v128 + 1;
  if ( v131 )
  {
    v132 = *(void (__fastcall **)(_QWORD *))(*v131 + 8LL);
    if ( v132 == sub_10D4290 )
    {
      v133 = v131[58];
      v134 = v131[57];
      *v131 = &off_2BA8F30;
      if ( v133 != v134 )
      {
        do
        {
          if ( *(_BYTE *)(v134 + 32) && *(_QWORD *)v134 != v134 + 16 )
            operator delete(*(void **)v134);
          v134 += 40;
        }
        while ( v133 != v134 );
        v134 = v131[57];
      }
      if ( v134 )
        operator delete((void *)v134);
      v135 = (void *)v131[54];
      if ( v135 )
        operator delete(v135);
      v136 = (_QWORD *)v131[50];
      if ( v136 != v131 + 52 )
        operator delete(v136);
      v137 = (_QWORD *)v131[32];
      if ( v137 != v131 + 34 )
        free(v137);
      v138 = (void **)v131[29];
      v139 = (void **)v131[28];
      if ( v138 != v139 )
      {
        do
        {
          while ( *v139 != v139 + 2 )
          {
            operator delete(*v139);
            v139 += 4;
            if ( v138 == v139 )
            {
              v139 = (void **)v131[28];
              goto LABEL_180;
            }
          }
          v139 += 4;
        }
        while ( v138 != v139 );
        v139 = (void **)v131[28];
      }
LABEL_180:
      if ( v139 )
        operator delete(v139);
      v140 = (void *)v131[25];
      if ( v140 )
        operator delete(v140);
      v141 = (_QWORD *)v131[7];
      if ( v141 != v131 + 9 )
        free(v141);
      operator delete(v131, 0x208u);
    }
    else
    {
      v132(v131);
    }
  }
  if ( ptr != p_ptr + 2 )
    free(ptr);
}
