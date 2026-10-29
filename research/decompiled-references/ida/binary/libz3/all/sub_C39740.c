__int64 __fastcall sub_C39740(__int64 *a1, __int64 a2)
{
  __int64 *v2; // rbx
  __int64 *v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rsi
  __int64 v6; // rax
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  int v10; // r9d
  __int64 v11; // rax
  __int64 v12; // r13
  int v13; // eax
  int v14; // r8d
  __int64 v15; // rax
  size_t v16; // r14
  size_t v17; // r15
  char *v18; // r12
  __int64 v19; // r13
  int v20; // eax
  int v21; // r8d
  int v22; // r9d
  size_t *v23; // rax
  __int64 v24; // r15
  __int64 v25; // r12
  __m128 *v26; // r14
  unsigned int v27; // eax
  __int64 v28; // rdx
  __m128 *v29; // rcx
  int v30; // eax
  __m128 *v31; // rdx
  __int64 v32; // rdi
  __m128 v33; // xmm0
  size_t v34; // r12
  unsigned int v35; // eax
  __int64 v36; // rdx
  int v37; // eax
  __m128 *v38; // rdx
  __int64 v39; // rdi
  __m128 v40; // xmm0
  __int64 v41; // rsi
  size_t *v42; // rdx
  __int64 v43; // rax
  __int64 v44; // r12
  _QWORD *v45; // rdx
  unsigned int v46; // eax
  __int64 v47; // rcx
  int v48; // eax
  __int64 *v49; // rcx
  __int64 v50; // rsi
  __int64 v51; // rcx
  _QWORD *v52; // rdx
  unsigned int v53; // eax
  __int64 v54; // rsi
  int v55; // eax
  __int64 *v56; // rsi
  __int64 v57; // r13
  _QWORD *v58; // rdx
  unsigned int v59; // eax
  __int64 v60; // rcx
  int v61; // eax
  _QWORD *v62; // rcx
  void *v63; // rdi
  __int64 v64; // rbx
  bool v65; // zf
  size_t *v66; // rbx
  __int64 v67; // rbx
  __int64 result; // rax
  __int64 v69; // rsi
  __int64 v70; // rdi
  unsigned int v71; // r14d
  size_t v72; // rsi
  unsigned int *v73; // rax
  __int64 v74; // rcx
  unsigned int v75; // r8d
  size_t v76; // rsi
  _DWORD *v77; // rax
  __int64 v78; // rsi
  int v79; // r8d
  unsigned int v80; // ecx
  size_t v81; // rsi
  __int64 v82; // rax
  int v83; // ecx
  unsigned int v84; // r9d
  size_t v85; // rdi
  __int64 v86; // rax
  _QWORD *v87; // r13
  int v88; // r9d
  _DWORD *v89; // r14
  __int64 v90; // rdi
  __int64 v91; // r11
  __int64 v92; // rdx
  _QWORD *v93; // rsi
  _QWORD *v94; // rax
  __int64 v95; // r10
  __int64 v96; // r10
  __int64 v97; // r10
  __int64 *v98; // rbx
  _QWORD *v99; // rax
  int v100; // r13d
  __int64 v101; // rsi
  __int64 v102; // rdi
  __int64 v103; // rsi
  __int64 v104; // rdi
  unsigned int v105; // r9d
  size_t v106; // rdi
  __int64 v107; // rax
  _QWORD *v108; // r13
  int v109; // r9d
  _DWORD *v110; // rsi
  __int64 v111; // rdi
  __int64 v112; // r11
  __int64 v113; // rdx
  _QWORD *v114; // rcx
  _QWORD *v115; // rax
  __int64 v116; // r10
  __int64 v117; // r10
  __int64 v118; // r10
  __int64 *v119; // rbx
  _QWORD *v120; // rdx
  __int64 v121; // rax
  _DWORD *v122; // r13
  __int64 v123; // rsi
  __int64 v124; // rdi
  __int64 v125; // rsi
  __int64 v126; // rdi
  size_t v127; // r13
  unsigned __int64 v128; // rdi
  char *v129; // rax
  size_t *v130; // r8
  __int64 v131; // rax
  _QWORD *v132; // rax
  _QWORD *v133; // rax
  _QWORD *v134; // rax
  _QWORD *v135; // rax
  _QWORD *v136; // rax
  char **v137; // rbx
  __int64 v138; // rdx
  char **v139; // rbx
  __int64 v140; // rdx
  char **v141; // rbx
  __int64 v142; // rdx
  char **v143; // rbx
  __int64 v144; // rdx
  char **exception; // rbx
  __int64 v146; // rdx
  int v147; // [rsp-10h] [rbp-100h]
  int v148; // [rsp-8h] [rbp-F8h]
  int v149; // [rsp-8h] [rbp-F8h]
  int v150; // [rsp+0h] [rbp-F0h]
  int v151; // [rsp+0h] [rbp-F0h]
  int v152; // [rsp+0h] [rbp-F0h]
  int v153; // [rsp+0h] [rbp-F0h]
  int v154; // [rsp+0h] [rbp-F0h]
  __int64 *v155; // [rsp+0h] [rbp-F0h]
  void *v156; // [rsp+8h] [rbp-E8h]
  int v157; // [rsp+8h] [rbp-E8h]
  int v158; // [rsp+8h] [rbp-E8h]
  int v159; // [rsp+8h] [rbp-E8h]
  int v160; // [rsp+8h] [rbp-E8h]
  int v161; // [rsp+8h] [rbp-E8h]
  __m128 *v162; // [rsp+8h] [rbp-E8h]
  int v163; // [rsp+8h] [rbp-E8h]
  int v164; // [rsp+10h] [rbp-E0h]
  int v165; // [rsp+10h] [rbp-E0h]
  int v166; // [rsp+10h] [rbp-E0h]
  int v167; // [rsp+10h] [rbp-E0h]
  int v168; // [rsp+10h] [rbp-E0h]
  __int64 v169; // [rsp+10h] [rbp-E0h]
  __int64 v170; // [rsp+10h] [rbp-E0h]
  int v171; // [rsp+18h] [rbp-D8h]
  int v172; // [rsp+18h] [rbp-D8h]
  int v173; // [rsp+18h] [rbp-D8h]
  int v174; // [rsp+18h] [rbp-D8h]
  __int64 v175; // [rsp+18h] [rbp-D8h]
  int v176; // [rsp+20h] [rbp-D0h]
  int v177; // [rsp+20h] [rbp-D0h]
  int v178; // [rsp+20h] [rbp-D0h]
  int v179; // [rsp+20h] [rbp-D0h]
  int v180; // [rsp+20h] [rbp-D0h]
  int v181; // [rsp+20h] [rbp-D0h]
  __int64 v182; // [rsp+20h] [rbp-D0h]
  int v183; // [rsp+28h] [rbp-C8h]
  int v184; // [rsp+28h] [rbp-C8h]
  char v185; // [rsp+28h] [rbp-C8h]
  char v186; // [rsp+28h] [rbp-C8h]
  __int64 *v187; // [rsp+28h] [rbp-C8h]
  __int64 *v188; // [rsp+28h] [rbp-C8h]
  int v189; // [rsp+30h] [rbp-C0h]
  char v190; // [rsp+30h] [rbp-C0h]
  int v191; // [rsp+30h] [rbp-C0h]
  int v192; // [rsp+30h] [rbp-C0h]
  __int64 v193; // [rsp+30h] [rbp-C0h]
  void *v194; // [rsp+30h] [rbp-C0h]
  __int64 v195; // [rsp+38h] [rbp-B8h] BYREF
  __int64 v196; // [rsp+40h] [rbp-B0h]
  size_t *v197; // [rsp+48h] [rbp-A8h]
  __int64 v198; // [rsp+50h] [rbp-A0h]
  int v199[2]; // [rsp+58h] [rbp-98h]
  int v200; // [rsp+60h] [rbp-90h]
  int v201; // [rsp+68h] [rbp-88h] BYREF
  __int64 v202; // [rsp+70h] [rbp-80h]
  __int64 v203; // [rsp+78h] [rbp-78h]
  void *src; // [rsp+80h] [rbp-70h] BYREF
  size_t n; // [rsp+88h] [rbp-68h]
  size_t v206; // [rsp+90h] [rbp-60h] BYREF
  int v207; // [rsp+98h] [rbp-58h]
  int v208; // [rsp+A0h] [rbp-50h] BYREF
  void *v209; // [rsp+A8h] [rbp-48h]
  int v210; // [rsp+B0h] [rbp-40h]
  __int64 v211; // [rsp+B8h] [rbp-38h]

  v2 = a1;
  v3 = a1 + 4;
  v196 = a2;
  v4 = *(v3 - 4);
  v5 = *((unsigned int *)v3 + 148);
  v202 = 0;
  v176 = v4;
  v203 = v4;
  v6 = sub_1674700(v3, v5);
  *(_QWORD *)v199 = v6;
  if ( v6 )
    ++*(_DWORD *)(v6 + 8);
  v11 = v196;
  *((_BYTE *)v2 + 8) = 0;
  sub_180CE20(
    (int)&src,
    *(_QWORD *)(v11 + 16) + 16,
    v7,
    v8,
    v9,
    v10,
    v150,
    v156,
    v164,
    (__int64)&src,
    v176,
    v183,
    v189,
    v195,
    v196,
    (int)v197,
    *(_QWORD *)(v11 + 16),
    v199[0],
    v200,
    v201,
    v202,
    v203,
    (int)src,
    n,
    v206,
    v207,
    v208,
    v209,
    v210,
    v211);
  v12 = *v2;
  sub_180C5A0(&v201, src);
  v13 = sub_15E3D10(
          v12,
          (int)&v201,
          (int)&qword_18D6CD0,
          0,
          0,
          v199[0],
          1,
          v148,
          v151,
          v157,
          v165,
          v171,
          v177,
          v184,
          v190,
          v195,
          v196,
          (int)v197,
          v198,
          v199[0],
          v200,
          v201,
          v202,
          v203,
          (int)src,
          n,
          v206,
          v207,
          v208,
          v209,
          v210,
          v211);
  v15 = sub_15DC610(v12, v13, 0, 0, v14, v147, v152, v158, v166, v172, v178, v185, v191, v195, v196, v197);
  v198 = v15;
  if ( v15 )
    ++*(_DWORD *)(v15 + 8);
  v16 = n;
  if ( n == 0x7FFFFFFFFFFFFFFFLL || n == 9223372036854775806LL )
    std::__throw_length_error("basic_string::append");
  v17 = n + 2;
  if ( src == &v206 )
  {
    if ( v17 <= 0xF )
      goto LABEL_8;
    v131 = operator new(0x1Fu);
    v130 = (size_t *)src;
    v18 = (char *)v131;
    v127 = 30;
    goto LABEL_110;
  }
  if ( v206 >= v17 )
  {
LABEL_8:
    *(_WORD *)((char *)src + n) = 29279;
    v18 = (char *)src;
    goto LABEL_9;
  }
  if ( (v17 & 0x8000000000000000LL) != 0LL )
    std::__throw_length_error("basic_string::_M_create");
  v127 = 2 * v206;
  if ( v17 >= 2 * v206 )
  {
    v127 = n + 2;
    v128 = n + 3;
    if ( (__int64)(n + 3) >= 0 )
      goto LABEL_100;
LABEL_107:
    std::__throw_bad_alloc();
  }
  v128 = v127 + 1;
  if ( (v206 & 0x4000000000000000LL) != 0 )
    goto LABEL_107;
LABEL_100:
  v129 = (char *)operator new(v128);
  v130 = (size_t *)src;
  v18 = v129;
  if ( v16 )
  {
    if ( v16 == 1 )
    {
      *v129 = *(_BYTE *)src;
      goto LABEL_101;
    }
LABEL_110:
    v197 = v130;
    memcpy(v18, v130, v16);
    v130 = v197;
  }
LABEL_101:
  *(_WORD *)&v18[v16] = 29279;
  if ( v130 != &v206 )
    operator delete(v130, v206 + 1);
  src = v18;
  v206 = v127;
LABEL_9:
  n = v16 + 2;
  v18[v16 + 2] = 0;
  v19 = *v2;
  sub_180C5A0(&v208, src);
  v20 = sub_15E3D10(
          v19,
          (int)&v208,
          (int)&qword_18D6CD0,
          0,
          0,
          v199[0],
          1,
          v149,
          v153,
          v159,
          v167,
          v173,
          v179,
          (int)&v208,
          (char)&v206,
          v195,
          v196,
          (int)v197,
          v198,
          v199[0],
          v200,
          v201,
          v202,
          v203,
          (int)src,
          n,
          v206,
          v207,
          v208,
          v209,
          v210,
          v211);
  v23 = (size_t *)sub_15DC610(v19, v20, 0, 0, v21, v22, v154, v160, v168, v174, v180, v186, v192, v195, v196, v197);
  v197 = v23;
  if ( v23 )
    ++*((_DWORD *)v23 + 2);
  v24 = v2[79];
  v25 = *(_QWORD *)(v198 + 16);
  v195 = *(_QWORD *)(v24 + 32);
  if ( v25 )
    ++*(_DWORD *)(v25 + 8);
  v26 = *(__m128 **)(v24 + 72);
  if ( v26 )
  {
    v27 = v26[-1].m128_u32[3];
    if ( v27 == v26[-1].m128_i32[2] )
    {
      v105 = (3 * v27 + 1) >> 1;
      v106 = 40 * v105 + 8;
      if ( 40 * v27 + 8 >= (unsigned int)v106 || v27 >= v105 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_15FB08(v187, "Overflow encountered when expanding vector", v146);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v187);
        sub_233E40((__int64)v187);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      LODWORD(v169) = (3 * v27 + 1) >> 1;
      v107 = sub_186B270(v106);
      v108 = *(_QWORD **)(v24 + 72);
      v109 = v169;
      v110 = (_DWORD *)v107;
      v26 = (__m128 *)(v107 + 8);
      if ( v108 )
      {
        v111 = *((unsigned int *)v108 - 1);
        v112 = *(_QWORD *)v199;
        v113 = v107 + 8;
        *(_DWORD *)(v107 + 4) = v111;
        v114 = &v108[5 * v111];
        v115 = v108;
        if ( v108 != v114 )
        {
          do
          {
            v116 = v115[1];
            v115 += 5;
            v113 += 40;
            *(_QWORD *)(v113 - 32) = v116;
            v117 = *(v115 - 5);
            *(v115 - 5) = 0;
            *(_QWORD *)(v113 - 40) = v117;
            *(_QWORD *)(v113 - 16) = *(v115 - 2);
            v118 = *(v115 - 3);
            *(v115 - 3) = 0;
            *(_QWORD *)(v113 - 24) = v118;
            *(_DWORD *)(v113 - 8) = *((_DWORD *)v115 - 2);
          }
          while ( v114 != v115 );
          *(_QWORD *)v199 = v112;
        }
        if ( (_DWORD)v111 )
        {
          v155 = v2;
          v119 = v108;
          v120 = &v108[5 * v111];
          v121 = *(_QWORD *)v199;
          v163 = v169;
          v122 = v110;
          *(_QWORD *)v199 = v120;
          v169 = v121;
          do
          {
            while ( 1 )
            {
              v125 = v119[2];
              if ( v125 )
              {
                v126 = v119[3];
                v65 = (*(_DWORD *)(v125 + 8))-- == 1;
                if ( v65 )
                  sub_15D7BC0(v126, v125);
              }
              v123 = *v119;
              if ( *v119 )
              {
                v124 = v119[1];
                v65 = (*(_DWORD *)(v123 + 8))-- == 1;
                if ( v65 )
                  break;
              }
              v119 += 5;
              if ( v119 == *(__int64 **)v199 )
                goto LABEL_94;
            }
            sub_15D7BC0(v124, v123);
            v119 += 5;
          }
          while ( v119 != *(__int64 **)v199 );
LABEL_94:
          v110 = v122;
          v109 = v163;
          v2 = v155;
          v108 = *(_QWORD **)(v24 + 72);
          *(_QWORD *)v199 = v169;
        }
        v161 = (int)v110;
        LODWORD(v169) = v109;
        sub_186B220(v108 - 1);
        v109 = v169;
        v31 = (__m128 *)((char *)v26 + 40 * (unsigned int)v110[1]);
        v30 = v110[1] + 1;
      }
      else
      {
        *(_DWORD *)(v107 + 4) = 0;
        v31 = (__m128 *)(v107 + 8);
        v30 = 1;
      }
      *(_QWORD *)(v24 + 72) = v26;
      v24 = v2[79];
      *v110 = v109;
      v29 = *(__m128 **)(v24 + 72);
    }
    else
    {
      v28 = v27;
      v29 = *(__m128 **)(v24 + 72);
      v30 = v27 + 1;
      v31 = (__m128 *)((char *)v26 + 40 * v28);
    }
  }
  else
  {
    v135 = (_QWORD *)sub_186B270(0x58u);
    v26 = (__m128 *)(v135 + 1);
    *v135 = 2;
    v30 = 1;
    *(_QWORD *)(v24 + 72) = v26;
    v24 = v2[79];
    v31 = v26;
    v29 = *(__m128 **)(v24 + 72);
  }
  v32 = v195;
  v31[1].m128_u64[0] = 0;
  v33 = _mm_loadh_ps((const double *)&v195);
  v31[2].m128_i32[0] = 0;
  *v31 = v33;
  v31[1].m128_u64[1] = v32;
  v26[-1].m128_i32[3] = v30;
  v34 = v197[2];
  v195 = *(_QWORD *)(v24 + 32);
  if ( v34 )
    ++*(_DWORD *)(v34 + 8);
  if ( v29 )
  {
    v35 = v29[-1].m128_u32[3];
    if ( v35 == v29[-1].m128_i32[2] )
    {
      v84 = (3 * v35 + 1) >> 1;
      v85 = 40 * v84 + 8;
      if ( 40 * v35 + 8 >= (unsigned int)v85 || v35 >= v84 )
      {
        v143 = (char **)__cxa_allocate_exception(0x28u);
        sub_15FB08(v187, "Overflow encountered when expanding vector", v144);
        *v143 = (char *)off_1C63128;
        sub_2333C0(v143 + 1, v187);
        sub_233E40((__int64)v187);
        __cxa_throw(v143, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      LODWORD(v169) = (3 * v35 + 1) >> 1;
      v86 = sub_186B270(v85);
      v87 = *(_QWORD **)(v24 + 72);
      v88 = v169;
      v89 = (_DWORD *)v86;
      v29 = (__m128 *)(v86 + 8);
      if ( v87 )
      {
        v90 = *((unsigned int *)v87 - 1);
        v91 = *(_QWORD *)v199;
        v92 = v86 + 8;
        *(_DWORD *)(v86 + 4) = v90;
        v93 = &v87[5 * v90];
        v94 = v87;
        if ( v93 != v87 )
        {
          do
          {
            v95 = v94[1];
            v94 += 5;
            v92 += 40;
            *(_QWORD *)(v92 - 32) = v95;
            v96 = *(v94 - 5);
            *(v94 - 5) = 0;
            *(_QWORD *)(v92 - 40) = v96;
            *(_QWORD *)(v92 - 16) = *(v94 - 2);
            v97 = *(v94 - 3);
            *(v94 - 3) = 0;
            *(_QWORD *)(v92 - 24) = v97;
            *(_DWORD *)(v92 - 8) = *((_DWORD *)v94 - 2);
          }
          while ( v93 != v94 );
          *(_QWORD *)v199 = v91;
        }
        if ( (_DWORD)v90 )
        {
          v155 = v2;
          v98 = v87;
          v99 = &v87[5 * v90];
          v162 = v29;
          v100 = v169;
          v170 = *(_QWORD *)v199;
          *(_QWORD *)v199 = v99;
          do
          {
            while ( 1 )
            {
              v103 = v98[2];
              if ( v103 )
              {
                v104 = v98[3];
                v65 = (*(_DWORD *)(v103 + 8))-- == 1;
                if ( v65 )
                  sub_15D7BC0(v104, v103);
              }
              v101 = *v98;
              if ( *v98 )
              {
                v102 = v98[1];
                v65 = (*(_DWORD *)(v101 + 8))-- == 1;
                if ( v65 )
                  break;
              }
              v98 += 5;
              if ( v98 == *(__int64 **)v199 )
                goto LABEL_90;
            }
            sub_15D7BC0(v102, v101);
            v98 += 5;
          }
          while ( v98 != *(__int64 **)v199 );
LABEL_90:
          v88 = v100;
          v29 = v162;
          v2 = v155;
          v87 = *(_QWORD **)(v24 + 72);
          *(_QWORD *)v199 = v170;
        }
        v161 = v88;
        v169 = (__int64)v29;
        sub_186B220(v87 - 1);
        v29 = (__m128 *)v169;
        v88 = v161;
        v38 = (__m128 *)(v169 + 40LL * (unsigned int)v89[1]);
        v37 = v89[1] + 1;
      }
      else
      {
        *(_DWORD *)(v86 + 4) = 0;
        v38 = (__m128 *)(v86 + 8);
        v37 = 1;
      }
      *(_QWORD *)(v24 + 72) = v29;
      *v89 = v88;
    }
    else
    {
      v36 = v35;
      v37 = v35 + 1;
      v38 = (__m128 *)((char *)v29 + 40 * v36);
    }
  }
  else
  {
    v132 = (_QWORD *)sub_186B270(0x58u);
    v29 = (__m128 *)(v132 + 1);
    *v132 = 2;
    v37 = 1;
    *(_QWORD *)(v24 + 72) = v29;
    v38 = v29;
  }
  v39 = v195;
  v38[1].m128_u64[0] = 0;
  v40 = _mm_loadh_ps((const double *)&v195);
  v38[2].m128_i32[0] = 0;
  v38[1].m128_u64[1] = v39;
  v41 = v198;
  *v38 = v40;
  v42 = v197;
  v29[-1].m128_i32[3] = v37;
  v43 = sub_C552F0(v2 + 7, v41, v42, v2 + 31, v2 + 27);
  v44 = v43;
  if ( v43 )
    *(_DWORD *)(v43 + 8) += 2;
  v45 = (_QWORD *)v2[77];
  if ( v45 )
  {
    v46 = *((_DWORD *)v45 - 1);
    if ( v46 == *((_DWORD *)v45 - 2) )
    {
      v80 = (3 * v46 + 1) >> 1;
      v81 = 8 * v80 + 8;
      if ( 8 * v46 + 8 >= (unsigned int)v81 || v46 >= v80 )
      {
        v141 = (char **)__cxa_allocate_exception(0x28u);
        sub_15FB08(v187, "Overflow encountered when expanding vector", v142);
        *v141 = (char *)off_1C63128;
        sub_2333C0(v141 + 1, v187);
        sub_233E40((__int64)v187);
        __cxa_throw(v141, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      LODWORD(v195) = (3 * v46 + 1) >> 1;
      v82 = sub_186B300(v45 - 1, v81);
      v83 = v195;
      v45 = (_QWORD *)(v82 + 8);
      v2[77] = v82 + 8;
      *(_DWORD *)v82 = v83;
      LODWORD(v82) = *(_DWORD *)(v82 + 4);
      v49 = &v45[(unsigned int)v82];
      v48 = v82 + 1;
    }
    else
    {
      v47 = v46;
      v48 = v46 + 1;
      v49 = &v45[v47];
    }
  }
  else
  {
    v133 = (_QWORD *)sub_186B270(0x18u);
    v45 = v133 + 1;
    *v133 = 2;
    v48 = 1;
    v2[77] = (__int64)v45;
    v49 = v45;
  }
  *v49 = v44;
  v50 = v196;
  *((_DWORD *)v45 - 1) = v48;
  sub_1692DB0(v2 + 65, v50, v44, 0, 0);
  v51 = *(_QWORD *)(v196 + 16);
  if ( v51 )
    ++*(_DWORD *)(v51 + 8);
  v52 = (_QWORD *)v2[73];
  if ( v52 )
  {
    v53 = *((_DWORD *)v52 - 1);
    if ( v53 == *((_DWORD *)v52 - 2) )
    {
      v75 = (3 * v53 + 1) >> 1;
      v76 = 8 * v75 + 8;
      if ( 8 * v53 + 8 >= (unsigned int)v76 || v53 >= v75 )
      {
        v139 = (char **)__cxa_allocate_exception(0x28u);
        sub_15FB08(v187, "Overflow encountered when expanding vector", v140);
        *v139 = (char *)off_1C63128;
        sub_2333C0(v139 + 1, v187);
        sub_233E40((__int64)v187);
        __cxa_throw(v139, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      LODWORD(v195) = (3 * v53 + 1) >> 1;
      v196 = v51;
      v77 = (_DWORD *)sub_186B300(v52 - 1, v76);
      v78 = (unsigned int)v77[1];
      v79 = v195;
      v52 = v77 + 2;
      v2[73] = (__int64)(v77 + 2);
      v51 = v196;
      *v77 = v79;
      LODWORD(v77) = v78;
      v56 = &v52[v78];
      v55 = (_DWORD)v77 + 1;
    }
    else
    {
      v54 = v53;
      v55 = v53 + 1;
      v56 = &v52[v54];
    }
  }
  else
  {
    v196 = v51;
    v136 = (_QWORD *)sub_186B270(0x18u);
    v52 = v136 + 1;
    *v136 = 2;
    v51 = v196;
    v55 = 1;
    v2[73] = (__int64)v52;
    v56 = v52;
  }
  *v56 = v51;
  *((_DWORD *)v52 - 1) = v55;
  sub_C4EDF0(
    (_DWORD)v2 + 56,
    (int)v155,
    v161,
    v169,
    v175,
    v181,
    (int)v187,
    v193,
    v195,
    v196,
    (__int64)v197,
    v198,
    v199[0],
    v200,
    v201);
  v57 = v202;
  if ( v202 )
    ++*(_DWORD *)(v202 + 8);
  v58 = (_QWORD *)v2[75];
  if ( v58 )
  {
    v59 = *((_DWORD *)v58 - 1);
    if ( v59 == *((_DWORD *)v58 - 2) )
    {
      v71 = (3 * v59 + 1) >> 1;
      v72 = 8 * v71 + 8;
      if ( 8 * v59 + 8 >= (unsigned int)v72 || v59 >= v71 )
      {
        v137 = (char **)__cxa_allocate_exception(0x28u);
        sub_15FB08(v188, "Overflow encountered when expanding vector", v138);
        *v137 = (char *)off_1C63128;
        sub_2333C0(v137 + 1, v188);
        sub_233E40((__int64)v188);
        __cxa_throw(v137, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v73 = (unsigned int *)sub_186B300(v58 - 1, v72);
      v74 = v73[1];
      v58 = v73 + 2;
      *v73 = v71;
      v2[75] = (__int64)(v73 + 2);
      LODWORD(v73) = v74;
      v62 = &v58[v74];
      v61 = (_DWORD)v73 + 1;
    }
    else
    {
      v60 = v59;
      v61 = v59 + 1;
      v62 = &v58[v60];
    }
  }
  else
  {
    v134 = (_QWORD *)sub_186B270(0x18u);
    v58 = v134 + 1;
    *v134 = 2;
    v61 = 1;
    v2[75] = (__int64)v58;
    v62 = v58;
  }
  *v62 = v57;
  v63 = src;
  *((_DWORD *)v58 - 1) = v61;
  if ( v63 != v194 )
    operator delete(v63, v206 + 1);
  v64 = *(_QWORD *)v199;
  if ( *(_QWORD *)v199 )
  {
    LODWORD(v196) = *(_DWORD *)(*(_QWORD *)v199 + 8LL);
    v65 = (_DWORD)v196 == 1;
    *(_DWORD *)(*(_QWORD *)v199 + 8LL) = v196 - 1;
    if ( v65 )
      sub_15D7BC0(v182, v64);
  }
  v66 = v197;
  v199[0] = *((_DWORD *)v197 + 2);
  v65 = v199[0] == 1;
  *((_DWORD *)v197 + 2) = v199[0] - 1;
  if ( v65 )
    sub_15D7BC0(v182, v66);
  v67 = v198;
  v199[0] = *(_DWORD *)(v198 + 8);
  v65 = v199[0] == 1;
  result = (unsigned int)(v199[0] - 1);
  *(_DWORD *)(v198 + 8) = result;
  if ( v65 )
    result = sub_15D7BC0(v182, v67);
  v69 = v202;
  if ( v202 )
  {
    v70 = v203;
    v65 = (*(_DWORD *)(v202 + 8))-- == 1;
    if ( v65 )
      result = sub_15D7BC0(v70, v69);
  }
  if ( v44 )
  {
    v65 = (*(_DWORD *)(v44 + 8))-- == 1;
    if ( v65 )
      return sub_15D7BC0(v182, v44);
  }
  return result;
}

