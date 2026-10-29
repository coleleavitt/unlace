__int64 __fastcall sub_48B760(const __m128i *a1, __int64 *a2, _DWORD *a3)
{
  char **v3; // r15
  void *exception; // rax
  void *v5; // rax
  void *v6; // rax
  char **v7; // r15
  char **v8; // r15
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rax
  _QWORD *v12; // r12
  __int64 v13; // rbx
  char v14; // al
  int v15; // edx
  _QWORD *v16; // r15
  char *v17; // rsi
  __int64 v18; // rax
  __int16 v19; // dx
  char *v20; // r13
  unsigned int v21; // r15d
  unsigned int v22; // edx
  __int64 v23; // rax
  __int64 v24; // r14
  char v25; // al
  int v26; // edx
  _QWORD *v27; // r9
  __int16 v28; // ax
  __int64 v29; // rdx
  _DWORD *v30; // rdx
  int v31; // edx
  __int64 v32; // rdx
  _DWORD *v33; // rdx
  __int64 v34; // rdx
  _DWORD *v35; // rdx
  unsigned int v36; // ebx
  unsigned __int64 v37; // r12
  __int64 *v38; // r14
  __int64 v39; // rsi
  bool v40; // zf
  _QWORD *v41; // rdi
  unsigned __int64 v42; // r12
  __int64 *v43; // r15
  __int64 v44; // rsi
  void *v46; // rdi
  char *v47; // rcx
  bool v48; // si
  char *v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rbx
  __int64 v52; // r12
  void *v53; // rax
  unsigned int v54; // ebx
  __int64 v55; // rsi
  std::ios_base *v56; // rax
  std::ios_base *v57; // rbx
  void *v58; // rsi
  __int64 v59; // rdi
  unsigned __int64 v60; // rdi
  unsigned __int64 v61; // r13
  __int64 *v62; // r15
  __int64 v63; // rsi
  void *v64; // rdi
  __int64 v65; // rsi
  void *v66; // rdi
  void *v67; // r15
  unsigned int v68; // edx
  unsigned int v69; // eax
  unsigned int v70; // edi
  __int64 v71; // r15
  char v72; // dl
  __int64 v73; // r8
  __int64 v74; // rdx
  unsigned int v75; // ebx
  char *v76; // rax
  char *v77; // rdx
  __int64 v78; // rdx
  int v79; // eax
  int v80; // edx
  _QWORD *v81; // r14
  __int64 v82; // rbx
  unsigned __int64 v83; // rax
  char *v84; // rdi
  __int64 v85; // rcx
  _DWORD *v86; // rax
  int v87; // eax
  __int64 v88; // rdx
  char *v89; // rax
  char *v90; // rdx
  char *v91; // rax
  _QWORD *v92; // rdi
  unsigned __int64 v93; // rax
  __int64 v94; // r10
  __int64 v95; // rbx
  char *v96; // rax
  _QWORD *v97; // rdi
  unsigned __int64 v98; // rax
  __int64 v99; // rcx
  __int64 v100; // rbx
  unsigned __int64 v101; // rax
  char *v102; // rdi
  __int64 v103; // rcx
  __int64 v104; // rax
  _DWORD *v105; // rax
  unsigned __int64 v106; // rax
  __int64 v107; // r11
  __int64 v108; // r14
  char *v109; // rax
  _QWORD *v110; // rdi
  unsigned __int64 v111; // rax
  __int64 v112; // rcx
  unsigned __int64 v113; // rax
  __int64 v114; // r8
  __int64 v115; // rax
  unsigned int v116; // eax
  __int64 v117; // rdx
  char *v118; // rax
  char *v119; // rax
  __int64 v120; // rdx
  _DWORD *v121; // rdx
  __int64 v122; // rbx
  unsigned __int64 v123; // rax
  char *v124; // rdi
  __int64 v125; // rcx
  unsigned __int64 v126; // rax
  __int64 v127; // rsi
  unsigned int v128; // eax
  __int64 v129; // r15
  void *v130; // rdi
  int v131; // ecx
  int v132; // r8d
  int v133; // r9d
  __int64 v134; // rdi
  void *v135; // rdi
  int v136; // ecx
  int v137; // r8d
  int v138; // r9d
  __int64 v139; // rdi
  __int64 v140; // rax
  __int64 v141; // r15
  unsigned int v142; // eax
  void *v143; // r15
  void *v144; // rbx
  __int64 v145; // rax
  __int64 v146; // r15
  unsigned int v147; // eax
  unsigned int v148; // edi
  unsigned int v149; // edx
  unsigned int *v150; // rax
  _DWORD *v151; // rcx
  unsigned int v152; // edx
  unsigned int v153; // ecx
  unsigned int *v154; // rax
  unsigned int v155; // r12d
  unsigned int v156; // edx
  unsigned int *v157; // rax
  _DWORD *v158; // rcx
  __int64 v159; // [rsp+20h] [rbp-2B0h]
  __int64 v160; // [rsp+28h] [rbp-2A8h]
  _QWORD *v163; // [rsp+40h] [rbp-290h]
  void *v164; // [rsp+40h] [rbp-290h]
  void *v165; // [rsp+40h] [rbp-290h]
  _QWORD *v167; // [rsp+50h] [rbp-280h]
  __int8 *v168; // [rsp+50h] [rbp-280h]
  unsigned int v169; // [rsp+50h] [rbp-280h]
  __int64 v170; // [rsp+58h] [rbp-278h]
  _QWORD *v171; // [rsp+60h] [rbp-270h]
  void *v172; // [rsp+70h] [rbp-260h]
  char *v173; // [rsp+78h] [rbp-258h]
  int v174; // [rsp+78h] [rbp-258h]
  int v175; // [rsp+78h] [rbp-258h]
  int v176; // [rsp+78h] [rbp-258h]
  unsigned int v177; // [rsp+88h] [rbp-248h] BYREF
  unsigned int v178; // [rsp+8Ch] [rbp-244h] BYREF
  __int64 v179; // [rsp+90h] [rbp-240h] BYREF
  __int64 v180; // [rsp+98h] [rbp-238h] BYREF
  __int64 v181; // [rsp+A0h] [rbp-230h] BYREF
  _QWORD *v182; // [rsp+A8h] [rbp-228h]
  __int64 v183; // [rsp+B0h] [rbp-220h] BYREF
  _QWORD *v184; // [rsp+B8h] [rbp-218h]
  _QWORD v185[2]; // [rsp+C0h] [rbp-210h] BYREF
  _QWORD v186[2]; // [rsp+D0h] [rbp-200h] BYREF
  __int64 v187; // [rsp+E0h] [rbp-1F0h] BYREF
  void *v188; // [rsp+E8h] [rbp-1E8h] BYREF
  _QWORD v189[2]; // [rsp+F0h] [rbp-1E0h] BYREF
  void *v190; // [rsp+100h] [rbp-1D0h] BYREF
  unsigned __int64 v191; // [rsp+108h] [rbp-1C8h]
  _QWORD v192[16]; // [rsp+110h] [rbp-1C0h] BYREF
  void *ptr; // [rsp+190h] [rbp-140h] BYREF
  __int64 v194; // [rsp+198h] [rbp-138h]
  __int64 v195; // [rsp+1A0h] [rbp-130h] BYREF
  int v196; // [rsp+1A8h] [rbp-128h]

  v9 = a1[1].m128i_i64[0];
  v179 = 0;
  v180 = 0;
  v177 = 1;
  v160 = v9;
  v181 = v9;
  v182 = nullptr;
  v10 = sub_15D1F10(a3);
  v11 = sub_15DB5C0(v9, a1[5].m128i_u32[3], v10);
  v170 = v11;
  if ( v11 )
    ++*(_DWORD *)(v11 + 8);
  v183 = v9;
  v184 = nullptr;
  sub_4892D0(a1, (__int64)a2, (__int64)a3, v11, (__int64)&v181, (__int64)&v183, &v179, &v180, &v177);
  v171 = v184;
  if ( !v184 )
  {
    if ( v170 && (v176 = *(_DWORD *)(v170 + 8), *(_DWORD *)(v170 + 8) = v176 - 1, v176 == 1) )
    {
      v36 = 0;
      sub_15D7BC0(v9, v170);
    }
    else
    {
      v36 = 0;
    }
    goto LABEL_54;
  }
  v159 = v183;
  if ( !*((_DWORD *)v184 - 1) )
  {
    v36 = 0;
    if ( !v170 )
      goto LABEL_53;
    goto LABEL_45;
  }
  v187 = v183;
  sub_16669D0(&v188, v183);
  v190 = v192;
  v191 = 0x1000000000LL;
  v167 = &v171[*((unsigned int *)v171 - 1)];
  if ( v167 == v171 )
    goto LABEL_75;
  v12 = v171;
  do
  {
    v13 = *v12;
    if ( *(_DWORD *)(*v12 + 8LL) > 1u )
    {
      v14 = *(_BYTE *)(v13 + 6);
      if ( (v14 & 1) != 0 )
        goto LABEL_69;
      *(_BYTE *)(v13 + 6) = v14 | 1;
      v15 = v191;
      if ( (unsigned int)v191 >= HIDWORD(v191) )
      {
        v108 = (unsigned int)(2 * HIDWORD(v191));
        v109 = (char *)sub_186B270(8 * v108);
        v15 = v191;
        v110 = v190;
        v16 = v109;
        if ( (_DWORD)v191 )
        {
          if ( (unsigned int)(v191 - 1) <= 2 || v109 == (char *)v190 + 8 )
          {
            v126 = 0;
            v127 = 8LL * (unsigned int)v191;
            do
            {
              v16[v126 / 8] = v110[v126 / 8];
              v126 += 8LL;
            }
            while ( v126 != v127 );
          }
          else
          {
            v111 = 0;
            v112 = 16LL * ((unsigned int)v191 >> 1);
            do
            {
              *(__m128i *)&v16[v111 / 8] = _mm_loadu_si128((const __m128i *)&v110[v111 / 8]);
              v111 += 16LL;
            }
            while ( v112 != v111 );
            if ( (v15 & 1) != 0 )
              v16[v15 & 0xFFFFFFFE] = v110[v15 & 0xFFFFFFFE];
          }
        }
        if ( v110 != v192 && v110 )
        {
          sub_186B220(v110);
          v15 = v191;
        }
        v190 = v16;
        HIDWORD(v191) = v108;
      }
      else
      {
        v16 = v190;
      }
      v16[v15] = v13;
      LODWORD(v191) = v15 + 1;
    }
    v195 = v13;
    v196 = 0;
    v194 = 0x1000000001LL;
    v173 = (char *)&v195;
    v17 = (char *)&v195;
    ptr = &v195;
    LODWORD(v18) = 0;
    while ( 2 )
    {
      v19 = *(_WORD *)(v13 + 4);
      v20 = &v17[16 * (unsigned int)v18];
      if ( v19 != 1 )
      {
        if ( v19 != 2 )
        {
          if ( v19 )
          {
            sub_1872CE0("");
            sub_1873130(114, 100);
          }
          v21 = *(_DWORD *)(v13 + 24);
          v22 = *((_DWORD *)v20 + 2);
          if ( v22 < v21 )
          {
            while ( 1 )
            {
              v23 = v22++;
              v24 = *(_QWORD *)(v13 + 8 * v23 + 32);
              *((_DWORD *)v20 + 2) = v22;
              if ( *(_DWORD *)(v24 + 8) <= 1u )
                goto LABEL_22;
              v25 = *(_BYTE *)(v24 + 6);
              if ( (v25 & 1) == 0 )
                break;
LABEL_27:
              if ( v22 >= v21 )
              {
                LODWORD(v18) = v194 - 1;
                goto LABEL_29;
              }
            }
            *(_BYTE *)(v24 + 6) = v25 | 1;
            v26 = v191;
            if ( (unsigned int)v191 >= HIDWORD(v191) )
            {
              v175 = 2 * HIDWORD(v191);
              v91 = (char *)sub_186B270(8LL * (unsigned int)(2 * HIDWORD(v191)));
              v26 = v191;
              v92 = v190;
              v27 = v91;
              if ( (_DWORD)v191 )
              {
                if ( (unsigned int)(v191 - 1) <= 2 || v91 == (char *)v190 + 8 )
                {
                  v106 = 0;
                  v107 = 8LL * (unsigned int)v191;
                  do
                  {
                    v27[v106 / 8] = v92[v106 / 8];
                    v106 += 8LL;
                  }
                  while ( v106 != v107 );
                }
                else
                {
                  v93 = 0;
                  v94 = 16LL * ((unsigned int)v191 >> 1);
                  do
                  {
                    *(__m128i *)&v27[v93 / 8] = _mm_loadu_si128((const __m128i *)&v92[v93 / 8]);
                    v93 += 16LL;
                  }
                  while ( v94 != v93 );
                  if ( (v26 & 1) != 0 )
                    v27[v26 & 0xFFFFFFFE] = v92[v26 & 0xFFFFFFFE];
                }
              }
              if ( v92 != v192 && v92 )
              {
                v163 = v27;
                sub_186B220(v92);
                v26 = v191;
                v27 = v163;
              }
              v190 = v27;
              HIDWORD(v191) = v175;
            }
            else
            {
              v27 = v190;
            }
            v27[v26] = v24;
            LODWORD(v191) = v26 + 1;
LABEL_22:
            v28 = *(_WORD *)(v24 + 4);
            if ( v28 != 1 )
            {
              if ( v28 == 2 )
              {
                v88 = (unsigned int)v194;
                if ( (unsigned int)v194 >= HIDWORD(v194) )
                {
                  v100 = (unsigned int)(2 * HIDWORD(v194));
                  v173 = (char *)sub_186B270(16 * v100);
                  v101 = 0;
                  v102 = (char *)ptr;
                  v88 = (unsigned int)v194;
                  v103 = 16LL * (unsigned int)v194;
                  if ( (_DWORD)v194 )
                  {
                    do
                    {
                      *(__m128i *)&v173[v101] = _mm_loadu_si128((const __m128i *)&v102[v101]);
                      v101 += 16LL;
                    }
                    while ( v101 != v103 );
                  }
                  if ( v102 != (char *)&v195 && v102 )
                  {
                    sub_186B220(v102);
                    v88 = (unsigned int)v194;
                  }
                  v89 = v173;
                  HIDWORD(v194) = v100;
                  ptr = v173;
                }
                else
                {
                  v89 = (char *)ptr;
                  v173 = (char *)ptr;
                }
                v90 = &v89[16 * v88];
                *(_QWORD *)v90 = v24;
                *((_DWORD *)v90 + 2) = 0;
                v78 = (unsigned int)v194;
                v79 = v194 + 1;
LABEL_125:
                LODWORD(v194) = v79;
                LODWORD(v18) = v79 - 1;
                v13 = *(_QWORD *)&v173[16 * v78];
                v17 = v173;
                continue;
              }
              if ( v28 )
              {
                sub_1872CE0("");
                sub_1873130(114, 73);
              }
              if ( *(_DWORD *)(v24 + 24) )
              {
                v117 = (unsigned int)v194;
                if ( (unsigned int)v194 >= HIDWORD(v194) )
                {
                  v122 = (unsigned int)(2 * HIDWORD(v194));
                  v173 = (char *)sub_186B270(16 * v122);
                  v123 = 0;
                  v124 = (char *)ptr;
                  v117 = (unsigned int)v194;
                  v125 = 16LL * (unsigned int)v194;
                  if ( (_DWORD)v194 )
                  {
                    do
                    {
                      *(__m128i *)&v173[v123] = _mm_loadu_si128((const __m128i *)&v124[v123]);
                      v123 += 16LL;
                    }
                    while ( v123 != v125 );
                  }
                  if ( v124 != (char *)&v195 && v124 )
                  {
                    sub_186B220(v124);
                    v117 = (unsigned int)v194;
                  }
                  v118 = v173;
                  HIDWORD(v194) = v122;
                  ptr = v173;
                }
                else
                {
                  v118 = (char *)ptr;
                  v173 = (char *)ptr;
                }
                v119 = &v118[16 * v117];
                *((_DWORD *)v119 + 2) = 0;
                v78 = (unsigned int)v194;
                *(_QWORD *)v119 = v24;
                v79 = v78 + 1;
                goto LABEL_125;
              }
              v86 = *(_DWORD **)(*(_QWORD *)(v24 + 16) + 24LL);
              if ( v86 )
              {
                if ( *v86 == 5 )
                {
                  v87 = v86[1];
                  if ( v87 <= 11 )
                  {
                    if ( v87 <= 9 )
                    {
                      if ( v87 == 9 )
                        sub_DC8FC();
                      goto LABEL_26;
                    }
LABEL_174:
                    v104 = *(_QWORD *)(v24 + 40);
                    if ( *(_WORD *)(v104 + 4)
                      || (v105 = *(_DWORD **)(*(_QWORD *)(v104 + 16) + 24LL)) == nullptr
                      || *v105 != 5
                      || v105[1] )
                    {
                      exception = __cxa_allocate_exception(1u);
                      __cxa_throw(
                        exception,
                        (struct type_info *)&`typeinfo for'`anonymous namespace'::has_nlira_functor::found,
                        nullptr);
                    }
                    goto LABEL_26;
                  }
                  if ( (unsigned int)(v87 - 15) <= 1 )
                    goto LABEL_174;
                }
              }
            }
LABEL_26:
            v22 = *((_DWORD *)v20 + 2);
            goto LABEL_27;
          }
LABEL_29:
          v29 = *(_QWORD *)(v13 + 16);
          LODWORD(v194) = v18;
          v30 = *(_DWORD **)(v29 + 24);
          if ( v30 && *v30 == 5 )
          {
            v31 = v30[1];
            if ( v31 > 11 )
            {
              if ( (unsigned int)(v31 - 15) > 1 )
                goto LABEL_42;
            }
            else if ( v31 <= 9 )
            {
              if ( v31 == 9 )
              {
                if ( *(_DWORD *)(v13 + 24) != 2 )
                  sub_DC8FC();
                v32 = *(_QWORD *)(v13 + 32);
                if ( *(_WORD *)(v32 + 4)
                  || (v33 = *(_DWORD **)(*(_QWORD *)(v32 + 16) + 24LL)) == nullptr
                  || *v33 != 5
                  || v33[1] )
                {
                  v34 = *(_QWORD *)(v13 + 40);
                  if ( *(_WORD *)(v34 + 4)
                    || (v35 = *(_DWORD **)(*(_QWORD *)(v34 + 16) + 24LL)) == nullptr
                    || *v35 != 5
                    || v35[1] )
                  {
                    v6 = __cxa_allocate_exception(1u);
                    __cxa_throw(
                      v6,
                      (struct type_info *)&`typeinfo for'`anonymous namespace'::has_nlira_functor::found,
                      nullptr);
                  }
                }
              }
              goto LABEL_42;
            }
            v120 = *(_QWORD *)(v13 + 40);
            if ( *(_WORD *)(v120 + 4)
              || (v121 = *(_DWORD **)(*(_QWORD *)(v120 + 16) + 24LL)) == nullptr
              || *v121 != 5
              || v121[1] )
            {
              v5 = __cxa_allocate_exception(1u);
              __cxa_throw(
                v5,
                (struct type_info *)&`typeinfo for'`anonymous namespace'::has_nlira_functor::found,
                nullptr);
            }
          }
LABEL_42:
          v173 = (char *)ptr;
          if ( !(_DWORD)v18 )
            goto LABEL_66;
LABEL_43:
          v18 = (unsigned int)(v18 - 1);
          v13 = *(_QWORD *)&v173[16 * v18];
          v17 = v173;
          continue;
        }
        v68 = *(_DWORD *)(v13 + 72);
        v69 = *((_DWORD *)v20 + 2);
        v70 = v68 + *(_DWORD *)(v13 + 76) + 1;
        if ( v69 < v70 )
        {
          if ( v69 )
          {
            while ( 1 )
            {
              v73 = v69 - 1;
              if ( v68 < v69 )
                v73 = (unsigned int)v73 - v68;
              ++v69;
              v71 = *(_QWORD *)(16LL * *(unsigned int *)(v13 + 20) + v13 + 8 * v73 + 80);
              *((_DWORD *)v20 + 2) = v69;
              if ( *(_DWORD *)(v71 + 8) <= 1u )
                goto LABEL_122;
LABEL_116:
              v72 = *(_BYTE *)(v71 + 6);
              if ( (v72 & 1) == 0 )
                break;
              if ( v69 >= v70 )
                goto LABEL_64;
              v68 = *(_DWORD *)(v13 + 72);
            }
            *(_BYTE *)(v71 + 6) = v72 | 1;
            v80 = v191;
            if ( (unsigned int)v191 >= HIDWORD(v191) )
            {
              v95 = (unsigned int)(2 * HIDWORD(v191));
              v96 = (char *)sub_186B270(8 * v95);
              v80 = v191;
              v97 = v190;
              v81 = v96;
              if ( (_DWORD)v191 )
              {
                if ( (unsigned int)(v191 - 1) <= 2 || v96 == (char *)v190 + 8 )
                {
                  v113 = 0;
                  v114 = 8LL * (unsigned int)v191;
                  do
                  {
                    v81[v113 / 8] = v97[v113 / 8];
                    v113 += 8LL;
                  }
                  while ( v114 != v113 );
                }
                else
                {
                  v98 = 0;
                  v99 = 16LL * ((unsigned int)v191 >> 1);
                  do
                  {
                    *(__m128i *)&v81[v98 / 8] = _mm_loadu_si128((const __m128i *)&v97[v98 / 8]);
                    v98 += 16LL;
                  }
                  while ( v99 != v98 );
                  if ( (v80 & 1) != 0 )
                    v81[v80 & 0xFFFFFFFE] = v97[v80 & 0xFFFFFFFE];
                }
              }
              if ( v97 && v97 != v192 )
              {
                sub_186B220(v97);
                v80 = v191;
              }
              v190 = v81;
              HIDWORD(v191) = v95;
            }
            else
            {
              v81 = v190;
            }
            v75 = HIDWORD(v194);
            v81[v80] = v71;
            LODWORD(v191) = v80 + 1;
            v74 = (unsigned int)v194;
            if ( (unsigned int)v194 >= v75 )
              goto LABEL_129;
LABEL_123:
            v76 = (char *)ptr;
            v173 = (char *)ptr;
          }
          else
          {
            v71 = *(_QWORD *)(v13 + 24);
            v69 = 1;
            *((_DWORD *)v20 + 2) = 1;
            if ( *(_DWORD *)(v71 + 8) > 1u )
              goto LABEL_116;
LABEL_122:
            v74 = (unsigned int)v194;
            v75 = HIDWORD(v194);
            if ( (unsigned int)v194 < HIDWORD(v194) )
              goto LABEL_123;
LABEL_129:
            v82 = 2 * v75;
            v173 = (char *)sub_186B270(16 * v82);
            v83 = 0;
            v84 = (char *)ptr;
            v74 = (unsigned int)v194;
            v85 = 16LL * (unsigned int)v194;
            if ( (_DWORD)v194 )
            {
              do
              {
                *(__m128i *)&v173[v83] = _mm_loadu_si128((const __m128i *)&v84[v83]);
                v83 += 16LL;
              }
              while ( v83 != v85 );
            }
            if ( v84 && v84 != (char *)&v195 )
            {
              sub_186B220(v84);
              v74 = (unsigned int)v194;
            }
            v76 = v173;
            HIDWORD(v194) = v82;
            ptr = v173;
          }
          v77 = &v76[16 * v74];
          *(_QWORD *)v77 = v71;
          *((_DWORD *)v77 + 2) = 0;
          v78 = (unsigned int)v194;
          v79 = v194 + 1;
          goto LABEL_125;
        }
LABEL_64:
        LODWORD(v18) = v194 - 1;
      }
      break;
    }
    LODWORD(v194) = v18;
    if ( (_DWORD)v18 )
      goto LABEL_43;
LABEL_66:
    if ( v173 != (char *)&v195 && v173 )
      sub_186B220(v173);
LABEL_69:
    ++v12;
  }
  while ( v167 != v12 );
  v46 = v190;
  v47 = (char *)v190 + 8 * (unsigned int)v191;
  v48 = v190 == v192 || v190 == nullptr;
  if ( v190 != v47 )
  {
    v49 = (char *)v190;
    do
    {
      v50 = *(_QWORD *)v49;
      v49 += 8;
      *(_BYTE *)(v50 + 6) &= ~1u;
    }
    while ( v47 != v49 );
  }
  LODWORD(v191) = 0;
  if ( !v48 )
    sub_186B220(v46);
LABEL_75:
  v51 = v179;
  if ( v179 )
  {
    if ( !v180 )
    {
      v145 = sub_15E1B70(a1[1].m128i_i64[1]);
      v146 = v145;
      if ( v145 )
        ++*(_DWORD *)(v145 + 8);
      v147 = *((_DWORD *)v171 - 1);
      if ( v147 == *((_DWORD *)v171 - 2) )
      {
        v155 = (3 * v147 + 1) >> 1;
        v156 = 8 * v155 + 8;
        if ( 8 * v147 + 8 >= v156 || v147 >= v155 )
        {
          v3 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0((__int64 *)&ptr, "Overflow encountered when expanding vector");
          *v3 = (char *)off_1C63128;
          sub_2333C0(v3 + 1, &ptr);
          sub_233E40((__int64)&ptr);
          __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v157 = (unsigned int *)sub_186B300(v171 - 1, v156);
        v158 = v157 + 2;
        *v157 = v155;
        v147 = v157[1];
        v171 = v158;
      }
      v180 = v146;
      v171[v147] = v146;
      *((_DWORD *)v171 - 1) = v147 + 1;
    }
LABEL_77:
    v52 = *(_QWORD *)(v51 + 32);
    v185[0] = 0;
    v186[0] = 1;
    v53 = (void *)a1[1].m128i_i64[0];
    v40 = *(_WORD *)(v52 + 4) == 1;
    v185[1] = 0;
    v186[1] = 0;
    v172 = v53;
    if ( !v40 || (v52 = *(_QWORD *)(v51 + 40)) != 0 )
      ++*(_DWORD *)(v52 + 8);
    v54 = v177;
    if ( v177 > 1 )
    {
      v168 = &a1[1].m128i_i8[8];
      if ( (unsigned __int8)sub_1666AE0(&a1[1].m128i_u64[1], v52, v185, &ptr) )
      {
        v128 = sub_182D020(qword_1C7F2C0, v185);
        v190 = nullptr;
        v191 = 0;
        v192[0] = 1;
        v192[1] = 0;
        v129 = a1[1].m128i_i64[0];
        v130 = qword_1C7F2C0;
        if ( ((v128 % v54) & 0x80000000) != 0 )
        {
          v165 = qword_1C7F2C0;
          sub_1830C40(qword_1C7F2C0, &v190, v128 % v54);
          v130 = v165;
        }
        else
        {
          LODWORD(v190) = v128 % v54;
        }
        sub_182CBA0(v130, v192);
        BYTE4(v192[0]) &= ~1u;
        LODWORD(v192[0]) = 1;
        v134 = a1[2].m128i_i64[0];
        if ( !v134 )
        {
          sub_16669E0(v168);
          v134 = a1[2].m128i_i64[0];
        }
        sub_166A700(v134, (unsigned int)&v190, 1, v131, v132, v133);
        v187 = 0;
        v188 = nullptr;
        v135 = qword_1C7F2C0;
        v189[0] = 1;
        v189[1] = 0;
        if ( (v54 & 0x80000000) != 0 )
        {
          v164 = qword_1C7F2C0;
          sub_1830C40(qword_1C7F2C0, &v187, v54);
          v135 = v164;
        }
        else
        {
          LODWORD(v187) = v54;
        }
        sub_182CBA0(v135, v189);
        BYTE4(v189[0]) &= ~1u;
        LODWORD(v189[0]) = 1;
        v139 = a1[2].m128i_i64[0];
        if ( !v139 )
        {
          sub_16669E0(v168);
          v139 = a1[2].m128i_i64[0];
        }
        sub_166A700(v139, (unsigned int)&v187, 1, v136, v137, v138);
        sub_15E1B70(a1[1].m128i_i64[1]);
        v140 = sub_15E1B70(v129);
        v141 = v140;
        if ( v140 )
          ++*(_DWORD *)(v140 + 8);
        v142 = *((_DWORD *)v171 - 1);
        if ( v142 == *((_DWORD *)v171 - 2) )
        {
          v152 = (3 * v142 + 1) >> 1;
          v153 = 8 * v152 + 8;
          if ( 8 * v142 + 8 >= v153 || v142 >= v152 )
          {
            v8 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0((__int64 *)&ptr, "Overflow encountered when expanding vector");
            *v8 = (char *)off_1C63128;
            sub_2333C0(v8 + 1, &ptr);
            sub_233E40((__int64)&ptr);
            __cxa_throw(v8, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v169 = (3 * v142 + 1) >> 1;
          v154 = (unsigned int *)sub_186B300(v171 - 1, v153);
          v171 = v154 + 2;
          *v154 = v169;
          v142 = v154[1];
        }
        v171[v142] = v141;
        *((_DWORD *)v171 - 1) = v142 + 1;
        v143 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v187);
        sub_182CBA0(v143, v189);
        v144 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v190);
        sub_182CBA0(v144, v192);
        v53 = (void *)a1[1].m128i_i64[0];
      }
      else
      {
        v53 = (void *)a1[1].m128i_i64[0];
      }
    }
    v187 = 0;
    v188 = v53;
    v55 = *((unsigned int *)v171 - 1);
    v190 = v53;
    v191 = 0;
    v56 = (std::ios_base *)sub_15EC1C0(v159, v55);
    v57 = v56;
    if ( v56 )
    {
      ++*((_DWORD *)v56 + 2);
      sub_3D5800(v56, &v187, (__int64 *)&v190);
      v40 = (*((_DWORD *)v57 + 2))-- == 1;
      if ( v40 )
        sub_15D7BC0(v159, v57);
    }
    else
    {
      sub_3D5800(nullptr, &v187, (__int64 *)&v190);
    }
    sub_15EEF60(v187);
    v178 = 0;
    v36 = sub_40A830(
            *(_QWORD **)(*(_QWORD *)(*a2 + 80) + 16LL),
            *(_DWORD *)(*a2 + 96),
            (__int64)&v181,
            &v178,
            *(unsigned __int16 *)(*a2 + 106));
    if ( (_BYTE)v36 )
    {
      v194 = a1[1].m128i_i64[0];
      if ( a3 )
        ++a3[2];
      ptr = a3;
      sub_48A970(a1, (__int64)&v181, (__int64)&v190, (__int64 *)&ptr);
      if ( sub_437A10(a1->m128i_i64[1] + 176, ptr, 0) )
        sub_43D1D0((unsigned __int64 *)(a1->m128i_i64[1] + 176), (__int64)ptr, 0, 1, (__int64 *)&ptr, 1);
      sub_40ABA0(*a2, *a2 + 80, (__int64)&v181);
      sub_3FE9B0(*a2, v178);
      sub_4063F0(*a2, *(_QWORD *)(v191 + 8LL * *(unsigned int *)(v170 + 16)), (__int64)ptr);
      v58 = ptr;
      if ( ptr )
      {
        v59 = v194;
        v40 = (*((_DWORD *)ptr + 2))-- == 1;
        if ( v40 )
          sub_15D7BC0(v59, v58);
      }
    }
    v60 = v191;
    if ( v191 )
    {
      v61 = v191 + 8LL * *(unsigned int *)(v191 - 4);
      if ( v191 >= v61 )
        goto LABEL_102;
      v62 = (__int64 *)v191;
      do
      {
        while ( 1 )
        {
          v63 = *v62;
          if ( *v62 )
          {
            v64 = v190;
            v40 = (*(_DWORD *)(v63 + 8))-- == 1;
            if ( v40 )
              break;
          }
          if ( (unsigned __int64)++v62 >= v61 )
            goto LABEL_101;
        }
        sub_15D7BC0(v64, v63);
        ++v62;
      }
      while ( (unsigned __int64)v62 < v61 );
LABEL_101:
      v60 = v191;
      if ( v191 )
LABEL_102:
        sub_186B220((void *)(v60 - 8));
    }
    v65 = v187;
    if ( v187 )
    {
      v66 = v188;
      v40 = (*(_DWORD *)(v187 + 8))-- == 1;
      if ( v40 )
        sub_15D7BC0(v66, v65);
    }
    if ( v52 )
    {
      v40 = (*(_DWORD *)(v52 + 8))-- == 1;
      if ( v40 )
        sub_15D7BC0(v172, v52);
    }
    v67 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v185);
    sub_182CBA0(v67, v186);
  }
  else
  {
    if ( v180 )
    {
      v115 = sub_15E1B70(a1[1].m128i_i64[1]);
      v51 = v115;
      if ( v115 )
        ++*(_DWORD *)(v115 + 8);
      v116 = *((_DWORD *)v171 - 1);
      if ( v116 == *((_DWORD *)v171 - 2) )
      {
        v148 = (3 * v116 + 1) >> 1;
        v149 = 8 * v148 + 8;
        if ( 8 * v116 + 8 >= v149 || v116 >= v148 )
        {
          v7 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0((__int64 *)&ptr, "Overflow encountered when expanding vector");
          *v7 = (char *)off_1C63128;
          sub_2333C0(v7 + 1, &ptr);
          sub_233E40((__int64)&ptr);
          __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v150 = (unsigned int *)sub_186B300(v171 - 1, v149);
        v151 = v150 + 2;
        *v150 = v148;
        v116 = v150[1];
        v171 = v151;
      }
      v179 = v51;
      v171[v116] = v51;
      *((_DWORD *)v171 - 1) = v116 + 1;
      goto LABEL_77;
    }
    v36 = 0;
  }
  if ( v170 )
  {
LABEL_45:
    v174 = *(_DWORD *)(v170 + 8);
    *(_DWORD *)(v170 + 8) = v174 - 1;
    if ( v174 == 1 )
      sub_15D7BC0(v160, v170);
  }
  v37 = (unsigned __int64)&v171[*((unsigned int *)v171 - 1)];
  if ( (unsigned __int64)v171 < v37 )
  {
    v38 = v171;
    do
    {
      while ( 1 )
      {
        v39 = *v38;
        if ( *v38 )
        {
          v40 = (*(_DWORD *)(v39 + 8))-- == 1;
          if ( v40 )
            break;
        }
        if ( (unsigned __int64)++v38 >= v37 )
          goto LABEL_53;
      }
      sub_15D7BC0(v159, v39);
      ++v38;
    }
    while ( (unsigned __int64)v38 < v37 );
  }
LABEL_53:
  sub_186B220(v171 - 1);
LABEL_54:
  v41 = v182;
  if ( v182 )
  {
    v42 = (unsigned __int64)&v182[*((unsigned int *)v182 - 1)];
    if ( (unsigned __int64)v182 >= v42 )
      goto LABEL_62;
    v43 = v182;
    do
    {
      while ( 1 )
      {
        v44 = *v43;
        if ( *v43 )
        {
          v40 = (*(_DWORD *)(v44 + 8))-- == 1;
          if ( v40 )
            break;
        }
        if ( (unsigned __int64)++v43 >= v42 )
          goto LABEL_61;
      }
      sub_15D7BC0(v181, v44);
      ++v43;
    }
    while ( (unsigned __int64)v43 < v42 );
LABEL_61:
    v41 = v182;
    if ( v182 )
LABEL_62:
      sub_186B220(v41 - 1);
  }
  return v36;
}

