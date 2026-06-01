__int64 __fastcall sub_5DB580(__int64 a1, __int64 *a2, __int64 a3)
{
  char **v3; // r14
  char **exception; // r14
  char **v5; // r14
  char **v6; // r14
  _QWORD *v9; // rbx
  _QWORD *v10; // r14
  __int64 v11; // rsi
  __int64 v12; // rdi
  bool v13; // zf
  _QWORD *v14; // rbx
  _QWORD *v15; // r14
  __int64 v16; // rsi
  __int64 v17; // rdi
  void *v18; // rax
  __int64 v19; // rcx
  int v20; // ecx
  int v21; // r8d
  int v22; // r9d
  int v23; // ecx
  int v24; // r8d
  int v25; // r9d
  __int64 v26; // rdx
  __int64 v27; // rax
  int v28; // r8d
  int v29; // r9d
  int v30; // r9d
  __int64 v31; // r12
  _QWORD *v32; // rbx
  unsigned int v33; // r14d
  __int64 v34; // rdx
  __int64 *v35; // rdi
  int v36; // eax
  __int64 *v37; // rdx
  __int64 v38; // rax
  bool v39; // cl
  unsigned int v40; // eax
  __int64 v41; // rdx
  int v42; // eax
  bool *v43; // rdx
  __int64 v44; // rdx
  __int64 v45; // rax
  __int64 v46; // rcx
  unsigned __int64 v47; // rdx
  __int64 v48; // r8
  unsigned int v49; // eax
  unsigned int v50; // edx
  size_t v51; // rsi
  unsigned int *v52; // rax
  unsigned int v53; // edx
  size_t v54; // rsi
  unsigned int *v55; // rax
  int v56; // r8d
  int v57; // r9d
  __int64 v58; // r14
  unsigned int v59; // edx
  __int64 v60; // rax
  int v61; // edx
  __int64 *v62; // rax
  unsigned int v63; // eax
  __int64 v64; // rcx
  int v65; // eax
  _BYTE *v66; // rcx
  __int64 v67; // rdi
  __int64 v68; // rax
  __int64 v69; // r14
  __int64 v70; // rdi
  __int64 v71; // rax
  __int64 v72; // rsi
  __int64 *v73; // r13
  __int64 v74; // rax
  __int64 *v75; // rbx
  __int64 v76; // r13
  __int64 *v77; // r15
  __int64 v78; // rsi
  __int64 v79; // rdi
  __int64 v80; // rsi
  void *v81; // rdi
  char *v82; // rcx
  char *v83; // rax
  __int64 v84; // rdx
  __int64 *v85; // rbx
  unsigned __int64 v86; // r13
  __int64 v87; // rsi
  __int64 result; // rax
  __int64 v89; // rsi
  void *v90; // rdi
  __int64 v91; // rsi
  void *v92; // rdi
  __int64 v93; // rsi
  void *v94; // rdi
  _QWORD *v95; // rax
  _QWORD *v96; // rax
  __int64 v97; // rsi
  __int64 v98; // rax
  __int64 v99; // rsi
  void *v100; // rdi
  unsigned int v101; // r14d
  size_t v102; // rsi
  unsigned int *v103; // rax
  unsigned int v104; // ecx
  size_t v105; // rsi
  unsigned int *v106; // rax
  _DWORD *v107; // rdi
  __int64 v108; // rax
  int v109; // edx
  _QWORD *v110; // rax
  _QWORD *v111; // rax
  int v112; // [rsp+0h] [rbp-230h]
  int v113; // [rsp+0h] [rbp-230h]
  unsigned int v114; // [rsp+4h] [rbp-22Ch]
  __int64 v115; // [rsp+8h] [rbp-228h]
  __int64 v116; // [rsp+8h] [rbp-228h]
  void *v117; // [rsp+10h] [rbp-220h]
  void *v118; // [rsp+18h] [rbp-218h]
  int v119; // [rsp+20h] [rbp-210h]
  __int64 v120; // [rsp+20h] [rbp-210h]
  void *v121; // [rsp+28h] [rbp-208h]
  __int64 v122; // [rsp+28h] [rbp-208h]
  __int64 v123; // [rsp+30h] [rbp-200h]
  __m128 *v124; // [rsp+38h] [rbp-1F8h]
  unsigned int v125; // [rsp+40h] [rbp-1F0h]
  int *v126; // [rsp+40h] [rbp-1F0h]
  __int64 *v127; // [rsp+48h] [rbp-1E8h]
  _QWORD *v128; // [rsp+48h] [rbp-1E8h]
  __int64 *v129; // [rsp+50h] [rbp-1E0h]
  unsigned int v130; // [rsp+58h] [rbp-1D8h]
  bool v131; // [rsp+58h] [rbp-1D8h]
  __int64 *v132; // [rsp+58h] [rbp-1D8h]
  __int64 *v133; // [rsp+58h] [rbp-1D8h]
  bool v134; // [rsp+58h] [rbp-1D8h]
  void *v135; // [rsp+60h] [rbp-1D0h]
  __int64 *v136; // [rsp+68h] [rbp-1C8h]
  __int64 *v137; // [rsp+68h] [rbp-1C8h]
  int v138; // [rsp+68h] [rbp-1C8h]
  __int64 v139; // [rsp+70h] [rbp-1C0h] BYREF
  __int64 v140; // [rsp+78h] [rbp-1B8h] BYREF
  int v141[2]; // [rsp+80h] [rbp-1B0h] BYREF
  int v142[2]; // [rsp+88h] [rbp-1A8h] BYREF
  __int64 v143; // [rsp+90h] [rbp-1A0h] BYREF
  void *v144; // [rsp+98h] [rbp-198h]
  __int64 v145; // [rsp+A0h] [rbp-190h] BYREF
  __int64 v146; // [rsp+A8h] [rbp-188h]
  __int64 v147; // [rsp+B0h] [rbp-180h] BYREF
  void *v148; // [rsp+B8h] [rbp-178h]
  __int64 v149; // [rsp+C0h] [rbp-170h] BYREF
  void *v150; // [rsp+C8h] [rbp-168h]
  int v151[2]; // [rsp+D0h] [rbp-160h] BYREF
  void *v152; // [rsp+D8h] [rbp-158h]
  void *v153; // [rsp+E0h] [rbp-150h]
  __int64 v154; // [rsp+E8h] [rbp-148h]
  void *v155; // [rsp+F0h] [rbp-140h]
  __int64 v156; // [rsp+F8h] [rbp-138h]
  __m128 v157; // [rsp+100h] [rbp-130h] BYREF
  int v158; // [rsp+110h] [rbp-120h]
  int v159; // [rsp+118h] [rbp-118h]
  int v160[2]; // [rsp+120h] [rbp-110h] BYREF
  int v161; // [rsp+128h] [rbp-108h]
  __int16 v162; // [rsp+12Ch] [rbp-104h]
  int v163; // [rsp+130h] [rbp-100h]
  int v164; // [rsp+138h] [rbp-F8h]
  int v165; // [rsp+13Ch] [rbp-F4h]
  int v166; // [rsp+140h] [rbp-F0h]
  __int128 v167; // [rsp+148h] [rbp-E8h]
  __int128 v168; // [rsp+158h] [rbp-D8h]
  void *ptr; // [rsp+168h] [rbp-C8h]
  __int64 v170; // [rsp+170h] [rbp-C0h]
  _BYTE v171[184]; // [rsp+178h] [rbp-B8h] BYREF

  v9 = *(_QWORD **)(a1 + 56);
  v129 = a2;
  if ( v9 )
  {
    if ( v9 >= &v9[*((unsigned int *)v9 - 1)] )
      goto LABEL_9;
    v10 = &v9[*((unsigned int *)v9 - 1)];
    do
    {
      while ( 1 )
      {
        v11 = *v9;
        if ( *v9 )
        {
          v12 = *(_QWORD *)(a1 + 48);
          v13 = (*(_DWORD *)(v11 + 8))-- == 1;
          if ( v13 )
            break;
        }
        if ( ++v9 >= v10 )
          goto LABEL_8;
      }
      sub_15D7BC0(v12, v11);
      ++v9;
    }
    while ( v9 < v10 );
LABEL_8:
    v9 = *(_QWORD **)(a1 + 56);
    if ( v9 )
LABEL_9:
      *((_DWORD *)v9 - 1) = 0;
  }
  v14 = *(_QWORD **)(a1 + 72);
  if ( v14 )
  {
    if ( v14 >= &v14[*((unsigned int *)v14 - 1)] )
      goto LABEL_18;
    v15 = &v14[*((unsigned int *)v14 - 1)];
    do
    {
      while ( 1 )
      {
        v16 = *v14;
        if ( *v14 )
        {
          v17 = *(_QWORD *)(a1 + 64);
          v13 = (*(_DWORD *)(v16 + 8))-- == 1;
          if ( v13 )
            break;
        }
        if ( ++v14 >= v15 )
          goto LABEL_17;
      }
      sub_15D7BC0(v17, v16);
      ++v14;
    }
    while ( v14 < v15 );
LABEL_17:
    v14 = *(_QWORD **)(a1 + 72);
    if ( v14 )
LABEL_18:
      *((_DWORD *)v14 - 1) = 0;
  }
  v18 = *(void **)(a1 + 32);
  v19 = *(_QWORD *)(a1 + 40);
  *(_DWORD *)(a1 + 80) = 0;
  v121 = v18;
  v148 = v18;
  v150 = v18;
  v152 = v18;
  v153 = v18;
  v155 = v18;
  *(_QWORD *)v160 = v18;
  ptr = v171;
  v147 = 0;
  v170 = 0x1000000000LL;
  v149 = 0;
  *(_QWORD *)v151 = 0;
  v139 = 0;
  v140 = 0;
  v154 = 0;
  v156 = 0;
  v119 = v19;
  v157.m128_u64[0] = 0;
  v161 = 256;
  v162 = 0;
  v165 = 0;
  v124 = &v157;
  v167 = 0;
  v168 = 0;
  sub_14DC230(v160, &v157);
  sub_18572D0(&v157);
  sub_62B3F0(*v129, *(_QWORD *)(a1 + 32), (unsigned int)&v139, v20, v21, v22);
  sub_62B3F0(a3, *(_QWORD *)(a1 + 32), (unsigned int)&v140, v23, v24, v25);
  v26 = *(_QWORD *)(a3 + 40);
  v145 = 0;
  v27 = *v129;
  v146 = (__int64)v121;
  sub_5DA510(a1, (int)&v145, v26, *(_QWORD *)(v27 + 40), v28, v29);
  v123 = v145;
  v115 = v146;
  if ( *(_DWORD *)(a3 + 68) )
  {
    v135 = v121;
    v31 = 0;
    v32 = nullptr;
    v136 = nullptr;
    v33 = 0;
    while ( 1 )
    {
      v44 = *v129;
      v45 = v33 + 10LL;
      v143 = v31;
      v46 = *(_QWORD *)(v44 + 8 * v45);
      v47 = *(_QWORD *)(a3 + 8 * v45) & 0xFFFFFFFFFFFFFFF8LL;
      v144 = v135;
      sub_5DA510(a1, (int)&v143, v47, v46 & 0xFFFFFFFFFFFFFFF8LL, v33, v30);
      v31 = v143;
      v48 = v33;
      v135 = v144;
      if ( v143 )
        ++*(_DWORD *)(v143 + 8);
      if ( v136 )
      {
        v49 = *((_DWORD *)v136 - 1);
        if ( v49 == *((_DWORD *)v136 - 2) )
        {
          v50 = (3 * v49 + 1) >> 1;
          v51 = 8 * v50 + 8;
          if ( 8 * v49 + 8 >= (unsigned int)v51 || v49 >= v50 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0((__int64 *)&v157, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, &v157);
            sub_233E40((__int64)&v157);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v130 = (3 * v49 + 1) >> 1;
          v52 = (unsigned int *)sub_186B300(v136 - 1, v51);
          v35 = (__int64 *)(v52 + 2);
          v48 = v33;
          v136 = (__int64 *)(v52 + 2);
          *v52 = v130;
          LODWORD(v52) = v52[1];
          v37 = &v35[(unsigned int)v52];
          v36 = (_DWORD)v52 + 1;
        }
        else
        {
          v34 = v49;
          v35 = v136;
          v36 = v49 + 1;
          v37 = &v136[v34];
        }
      }
      else
      {
        v96 = (_QWORD *)sub_186B270(0x18u);
        *v96 = 2;
        v48 = v33;
        v136 = v96 + 1;
        v37 = v96 + 1;
        v35 = v96 + 1;
        v36 = 1;
      }
      *v37 = v31;
      *((_DWORD *)v35 - 1) = v36;
      v38 = *(_QWORD *)(a3 + 8 * v48 + 80) & 7LL;
      v39 = v38 == 1;
      if ( !v32 )
        break;
      v40 = *((_DWORD *)v32 - 1);
      if ( v40 == *((_DWORD *)v32 - 2) )
      {
        v53 = (3 * v40 + 1) >> 1;
        v54 = v53 + 8;
        if ( v40 + 8 >= (unsigned int)v54 || v40 >= v53 )
        {
          v5 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0((__int64 *)&v157, "Overflow encountered when expanding vector");
          *v5 = (char *)off_1C63128;
          sub_2333C0(v5 + 1, &v157);
          sub_233E40((__int64)&v157);
          __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v125 = (3 * v40 + 1) >> 1;
        v131 = v39;
        v55 = (unsigned int *)sub_186B300(v32 - 1, v54);
        v32 = v55 + 2;
        ++v33;
        *v55 = v125;
        LODWORD(v55) = v55[1];
        *((_BYTE *)v32 + (unsigned int)v55) = v131;
        *((_DWORD *)v32 - 1) = (_DWORD)v55 + 1;
        if ( v33 >= *(_DWORD *)(a3 + 68) )
          goto LABEL_36;
      }
      else
      {
        v41 = v40;
        v42 = v40 + 1;
        v43 = (bool *)v32 + v41;
LABEL_25:
        *v43 = v39;
        ++v33;
        *((_DWORD *)v32 - 1) = v42;
        if ( v33 >= *(_DWORD *)(a3 + 68) )
          goto LABEL_36;
      }
    }
    v134 = v38 == 1;
    v95 = (_QWORD *)sub_186B270(0xAu);
    v32 = v95 + 1;
    *v95 = 2;
    v39 = v134;
    v42 = 1;
    v43 = (bool *)v32;
    goto LABEL_25;
  }
  v32 = nullptr;
  v31 = 0;
  v136 = nullptr;
  v135 = v121;
LABEL_36:
  v132 = &v147;
  sub_5DA880(a1, a1 + 48, a3, &v147);
  v127 = &v149;
  sub_5DA880(a1, a1 + 64, *v129, &v149);
  v126 = v151;
  v157 = _mm_loadh_ps((const double *)&v149);
  if ( (_BYTE)v161 )
  {
    if ( (unsigned int)sub_14E0E20(
                         (int)v160,
                         2,
                         (int)&v157,
                         (int)v151,
                         v56,
                         v57,
                         v112,
                         v115,
                         (int)v171,
                         (int)v160,
                         v119,
                         v121) != 5 )
    {
LABEL_38:
      v58 = *(_QWORD *)v151;
      goto LABEL_39;
    }
  }
  else if ( (unsigned int)sub_14E03D0(
                            (int)v160,
                            v112,
                            v115,
                            (int)v171,
                            (int)v160,
                            v119,
                            (int)v121,
                            v123,
                            &v157,
                            (int)v151,
                            (int)&v149,
                            (int)v129,
                            (int)&v147,
                            (int)v135,
                            (int)v136,
                            v139,
                            v140,
                            v141[0],
                            v142[0],
                            v143,
                            (int)v144,
                            v145,
                            v146,
                            v147,
                            (int)v148,
                            v149,
                            (char)v150,
                            v151[0],
                            (int)v152,
                            (int)v153,
                            v154,
                            (int)v155,
                            v156,
                            v157.m128_i32[0],
                            v157.m128_i32[2],
                            v158,
                            v159,
                            v160[0],
                            v161,
                            v163,
                            v164,
                            v166,
                            v167,
                            SDWORD2(v167),
                            v168) != 5 )
  {
    goto LABEL_38;
  }
  v98 = sub_15E1AF0(v160[0]);
  v58 = v98;
  if ( v98 )
  {
    v99 = *(_QWORD *)v151;
    ++*(_DWORD *)(v98 + 8);
    if ( !v99 || (v100 = v152, v13 = *(_DWORD *)(v99 + 8) == 1, --*(_DWORD *)(v99 + 8), !v13) )
    {
      *(_QWORD *)v151 = v98;
      goto LABEL_40;
    }
  }
  else
  {
    v99 = *(_QWORD *)v151;
    if ( !*(_QWORD *)v151
      || (v100 = v152, v13 = *(_DWORD *)(*(_QWORD *)v151 + 8LL) == 1, --*(_DWORD *)(*(_QWORD *)v151 + 8LL), !v13) )
    {
      *(_QWORD *)v151 = 0;
      goto LABEL_135;
    }
  }
  sub_15D7BC0(v100, v99);
  *(_QWORD *)v151 = v58;
LABEL_39:
  if ( v58 )
  {
LABEL_40:
    ++*(_DWORD *)(v58 + 8);
    goto LABEL_41;
  }
LABEL_135:
  v58 = 0;
LABEL_41:
  if ( v136 )
  {
    v59 = *((_DWORD *)v136 - 1);
    if ( v59 == *((_DWORD *)v136 - 2) )
    {
      v104 = (3 * v59 + 1) >> 1;
      v105 = 8 * v104 + 8;
      if ( 8 * v59 + 8 >= (unsigned int)v105 || v59 >= v104 )
      {
        v6 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0((__int64 *)v124, "Overflow encountered when expanding vector");
        *v6 = (char *)off_1C63128;
        sub_2333C0(v6 + 1, v124);
        sub_233E40((__int64)v124);
        __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v114 = (3 * v59 + 1) >> 1;
      v106 = (unsigned int *)sub_186B300(v136 - 1, v105);
      v107 = v106 + 2;
      v136 = (__int64 *)(v106 + 2);
      *v106 = v114;
      v108 = v106[1];
      v109 = v108;
      v62 = (__int64 *)&v107[2 * v108];
      v61 = v109 + 1;
    }
    else
    {
      v60 = v59;
      v61 = v59 + 1;
      v62 = &v136[v60];
    }
  }
  else
  {
    v110 = (_QWORD *)sub_186B270(0x18u);
    *v110 = 2;
    v62 = v110 + 1;
    v61 = 1;
    v136 = v62;
  }
  *v62 = v58;
  *((_DWORD *)v136 - 1) = v61;
  if ( v32 )
  {
    v63 = *((_DWORD *)v32 - 1);
    if ( v63 == *((_DWORD *)v32 - 2) )
    {
      v101 = (3 * v63 + 1) >> 1;
      v102 = v101 + 8;
      if ( v63 + 8 >= (unsigned int)v102 || v63 >= v101 )
      {
        v3 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0((__int64 *)v124, "Overflow encountered when expanding vector");
        *v3 = (char *)off_1C63128;
        sub_2333C0(v3 + 1, v124);
        sub_233E40((__int64)v124);
        __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v103 = (unsigned int *)sub_186B300(v32 - 1, v102);
      v32 = v103 + 2;
      *v103 = v101;
      v61 = *((_DWORD *)v136 - 1);
      LODWORD(v103) = v103[1];
      v66 = (char *)v32 + (unsigned int)v103;
      v65 = (_DWORD)v103 + 1;
    }
    else
    {
      v64 = v63;
      v65 = v63 + 1;
      v66 = (char *)v32 + v64;
    }
  }
  else
  {
    v111 = (_QWORD *)sub_186B270(0xAu);
    v66 = v111 + 1;
    *v111 = 2;
    v32 = v111 + 1;
    v61 = *((_DWORD *)v136 - 1);
    v65 = 1;
  }
  *v66 = 0;
  v67 = *(_QWORD *)(a1 + 40);
  *((_DWORD *)v32 - 1) = v65;
  v68 = sub_62C680(v67, v123, v61, (_DWORD)v136, (_DWORD)v32, (unsigned int)*v129 + 72, 1);
  v69 = v68;
  if ( v68 )
    sub_62A000(v120, v68);
  if ( (unsigned __int8)sub_64AF30(*(_QWORD *)(a1 + 24)) )
  {
    sub_62E310(*(_QWORD *)(a1 + 40), a3, v132);
    sub_62E310(*(_QWORD *)(a1 + 40), *v129, v127);
    sub_62E310(*(_QWORD *)(a1 + 40), v69, v126);
    v70 = *(_QWORD *)(a1 + 32);
    v157.m128_u64[0] = *(_QWORD *)(a3 + 48);
    v71 = sub_15E9440(
            v70,
            1,
            (int)v124,
            v151[0],
            (int)v141,
            (int)v142,
            v113,
            v116,
            (int)v117,
            v118,
            v120,
            v122,
            v123,
            (int)v124,
            (int)v126,
            (__int64)v127,
            (int)v129,
            (int)v132,
            (int)v135,
            (int)v136,
            v139,
            v140,
            0,
            0,
            v143);
    v72 = *(_QWORD *)(a1 + 32);
    v157.m128_u64[0] = v71;
    sub_62A430(v69, v72, v71);
    v73 = *(__int64 **)v142;
    if ( *(_QWORD *)v142 )
    {
      v74 = *(unsigned int *)(*(_QWORD *)v142 - 4LL);
      if ( (_DWORD)v74 )
      {
        v128 = v32;
        v75 = *(__int64 **)v142;
        v133 = v136;
        v76 = *(_QWORD *)v142 + 16 * v74;
        do
        {
          v77 = (__int64 *)v75[1];
          if ( v77 )
          {
            if ( v77 >= &v77[*((unsigned int *)v77 - 1)] )
              goto LABEL_61;
            v137 = &v77[*((unsigned int *)v77 - 1)];
            do
            {
              while ( 1 )
              {
                v78 = *v77;
                if ( *v77 )
                {
                  v79 = *v75;
                  v13 = (*(_DWORD *)(v78 + 8))-- == 1;
                  if ( v13 )
                    break;
                }
                if ( ++v77 >= v137 )
                  goto LABEL_60;
              }
              sub_15D7BC0(v79, v78);
              ++v77;
            }
            while ( v77 < v137 );
LABEL_60:
            v77 = (__int64 *)v75[1];
            if ( v77 )
LABEL_61:
              sub_186B220(v77 - 1);
          }
          v75 += 2;
        }
        while ( (__int64 *)v76 != v75 );
        v32 = v128;
        v73 = *(__int64 **)v142;
        v136 = v133;
      }
      sub_186B220(v73 - 1);
    }
    if ( *(_QWORD *)v141 )
      sub_186B220((void *)(*(_QWORD *)v141 - 8LL));
    v80 = *v129;
    if ( v69 != *v129 )
    {
      if ( v80 )
        sub_62A410(v129[1], v80);
      *v129 = v69;
LABEL_71:
      sub_62A000(v129[1], v69);
    }
  }
  else
  {
    v97 = *v129;
    if ( v69 != *v129 )
    {
      if ( v97 )
        sub_62A410(v129[1], v97);
      *v129 = v69;
      if ( v69 )
        goto LABEL_71;
    }
  }
  sub_186B220(v32 - 1);
  v81 = ptr;
  v82 = (char *)ptr + 8 * (unsigned int)v170;
  v83 = (char *)ptr;
  if ( ptr != v82 )
  {
    do
    {
      v84 = *(_QWORD *)v83;
      v83 += 8;
      *(_BYTE *)(v84 + 6) &= ~1u;
    }
    while ( v82 != v83 );
  }
  LODWORD(v170) = 0;
  if ( v81 != v117 && v81 )
    sub_186B220(v81);
  if ( *((_QWORD *)&v168 + 1) )
    sub_186B220((void *)(*((_QWORD *)&v168 + 1) - 8LL));
  if ( (_QWORD)v168 )
    sub_186B220((void *)(v168 - 8));
  if ( *((_QWORD *)&v167 + 1) )
    sub_186B220((void *)(*((_QWORD *)&v167 + 1) - 8LL));
  if ( (_QWORD)v167 )
    sub_186B220((void *)(v167 - 8));
  if ( v69 )
    sub_62A410(v120, v69);
  if ( v140 )
    sub_186B220((void *)(v140 - 8));
  if ( v139 )
    sub_186B220((void *)(v139 - 8));
  v85 = v136;
  v86 = (unsigned __int64)&v136[*((unsigned int *)v136 - 1)];
  if ( (unsigned __int64)v136 < v86 )
  {
    do
    {
      while ( 1 )
      {
        v87 = *v85;
        if ( *v85 )
        {
          v13 = (*(_DWORD *)(v87 + 8))-- == 1;
          if ( v13 )
            break;
        }
        if ( (unsigned __int64)++v85 >= v86 )
          goto LABEL_97;
      }
      ++v85;
      sub_15D7BC0(v122, v87);
    }
    while ( (unsigned __int64)v85 < v86 );
  }
LABEL_97:
  result = sub_186B220(v136 - 1);
  v89 = *(_QWORD *)v151;
  if ( *(_QWORD *)v151 )
  {
    v90 = v152;
    v13 = (*(_DWORD *)(*(_QWORD *)v151 + 8LL))-- == 1;
    if ( v13 )
      result = sub_15D7BC0(v90, v89);
  }
  v91 = v149;
  if ( v149 )
  {
    v92 = v150;
    v13 = (*(_DWORD *)(v149 + 8))-- == 1;
    if ( v13 )
      result = sub_15D7BC0(v92, v91);
  }
  v93 = v147;
  if ( v147 )
  {
    v94 = v148;
    v13 = (*(_DWORD *)(v147 + 8))-- == 1;
    if ( v13 )
      result = sub_15D7BC0(v94, v93);
  }
  if ( v123 )
  {
    v138 = *(_DWORD *)(v123 + 8);
    result = (unsigned int)(v138 - 1);
    *(_DWORD *)(v123 + 8) = result;
    if ( v138 == 1 )
      result = sub_15D7BC0(v116, v123);
  }
  if ( v31 )
  {
    v13 = (*(_DWORD *)(v31 + 8))-- == 1;
    if ( v13 )
      return sub_15D7BC0(v135, v31);
  }
  return result;
}

