__int64 __fastcall sub_4FD980(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 *v4; // rdi
  __int64 v6; // rbp
  __int64 v7; // rax
  __int64 v8; // rdx
  _QWORD *v9; // r12
  void *v10; // rdi
  void *v11; // rdi
  unsigned __int64 v12; // r12
  unsigned __int64 v13; // r13
  __int64 v14; // rdi
  __int64 v15; // rax
  unsigned __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // r12
  unsigned __int64 v19; // rbp
  __int64 v20; // rdx
  __int64 v21; // r13
  __int64 v22; // rdx
  __int64 v23; // r14
  __int64 v24; // rax
  unsigned __int64 v25; // rcx
  __m128i *v26; // r9
  __int64 v27; // r8
  __int64 v28; // r15
  __int64 v29; // r14
  __int64 *v30; // rdi
  __int64 v31; // rax
  __m128i *v32; // rsi
  __int64 v33; // rax
  __int64 v34; // rdx
  unsigned __int8 v35; // al
  void *v36; // r13
  __m128i v37; // xmm0
  __int64 v38; // rbp
  void *v39; // rdi
  __int64 v40; // r14
  __m128i *v41; // rdi
  const __m128i *v42; // rbp
  __int64 *v43; // r15
  const __m128i *v44; // r13
  __m128i v45; // xmm0
  __int64 v46; // rdi
  __int64 v47; // rax
  __int64 v48; // rcx
  _QWORD *v49; // rbp
  void *v50; // rdi
  void *v51; // rdi
  __int64 v52; // rax
  __int64 *v53; // rax
  void *v54; // rdi
  unsigned int v55; // ebx
  unsigned __int64 v57; // rax
  unsigned int v58; // eax
  unsigned __int8 v59; // r11
  __int64 v60; // rax
  __int64 (*v61)(); // rdx
  __int64 (__fastcall *v62)(__int64); // rax
  __int64 v63; // r14
  __int64 v64; // r15
  void *v65; // rax
  char v66; // al
  unsigned __int64 v67; // r15
  __int64 v68; // r14
  unsigned __int64 v69; // rdx
  __int64 v70; // r14
  void *v71; // rdi
  __int64 v72; // r14
  void *v73; // rax
  __int64 v74; // rax
  unsigned __int64 v75; // r14
  __int64 v76; // r15
  __int64 v77; // rax
  _QWORD *v78; // r15
  __int64 v79; // rax
  __int64 v80; // rsi
  unsigned int v81; // edx
  unsigned __int64 v82; // rdx
  __m128i *v83; // r14
  __int64 v84; // rcx
  __int64 v85; // rax
  __int64 v86; // rdx
  __int64 v87; // rdi
  __int64 v88; // rax
  __int64 v89; // rcx
  __m128i *v90; // rdi
  __int32 v91; // r8d
  __int64 v92; // rax
  __int64 v93; // rdx
  __m128i v94; // xmm0
  bool v95; // cf
  __int64 v96; // rcx
  __int64 v97; // rdx
  char *v98; // r15
  __int64 v99; // r13
  unsigned int v100; // r14d
  char *v101; // rbp
  __int64 v102; // rax
  __int64 v103; // r14
  __int64 v104; // rax
  __int64 v105; // rax
  int v106; // eax
  __int64 v107; // rax
  __int64 v108; // rax
  void *v109; // rdi
  void *v110; // rdx
  __m128i v111; // xmm0
  __m128i v112; // xmm0
  unsigned __int64 v113; // rax
  unsigned __int64 v114; // rsi
  unsigned __int32 v115; // eax
  unsigned __int32 v116; // esi
  _QWORD *v117; // rax
  __int64 v118; // rax
  __int64 v119; // r15
  __m128i *v120; // rdi
  __int64 v121; // rax
  unsigned __int64 v122; // rdx
  __m128i v123; // xmm0
  __int64 v124; // rbp
  __int64 v125; // rax
  __int64 *v126; // rax
  __int64 v127; // rax
  __int64 v128; // r15
  __m128i *v129; // rdi
  __int64 v130; // rax
  unsigned __int64 v131; // rdx
  __m128i v132; // xmm0
  __int64 v133; // r14
  unsigned __int64 v134; // rdx
  __m128i *v135; // rdi
  const __m128i *v136; // r14
  __m128i v137; // xmm1
  __m128i *v138; // rax
  __m128i v139; // xmm0
  __m128i *v140; // rcx
  unsigned __int64 v141; // r14
  __int64 *v142; // rdx
  __int64 v143; // r15
  const __m128i *v144; // r14
  __int64 v145; // rax
  const __m128i *v146; // r15
  __m128i *v147; // rax
  __int64 *v148; // rcx
  __m128i v149; // xmm0
  unsigned int v150; // r9d
  unsigned __int64 v151; // rsi
  unsigned __int64 v152; // r8
  __m128i *v153; // rax
  __int64 v154; // rax
  __int64 v155; // rdx
  const __m128i *v156; // r14
  __m128i v157; // xmm0
  __int64 v158; // rdi
  __int64 v159; // rax
  __int64 v160; // rax
  __int64 v161; // rax
  __int64 v162; // rcx
  __int64 v163; // rdx
  void *v164; // rsi
  __m128i *v165; // rdi
  __int64 v166; // rcx
  __m128i v167; // xmm0
  __int64 v168; // rcx
  __int64 v169; // rax
  __int64 v170; // rbx
  __int64 *v171; // rax
  __int64 v172; // rax
  __int64 v173; // rdx
  __int64 v174; // rcx
  __m128i *v175; // rdi
  __int64 v176; // rsi
  int v177; // r9d
  __m128i v178; // xmm0
  __m128i v179; // xmm1
  __int64 v180; // rcx
  __int64 v181; // rax
  __m128i *v182; // rdx
  __int64 v183; // rax
  __int64 v184; // r15
  __m128i *v185; // rdi
  __int64 v186; // rax
  __m128i *v187; // rcx
  __m128i v188; // xmm0
  __m128i v189; // [rsp+0h] [rbp-1A8h] BYREF
  __int64 *v190; // [rsp+10h] [rbp-198h]
  __int64 v191; // [rsp+18h] [rbp-190h]
  __int64 v192; // [rsp+20h] [rbp-188h]
  void *src; // [rsp+28h] [rbp-180h]
  __m128i v194; // [rsp+30h] [rbp-178h] BYREF
  __m128i v195; // [rsp+40h] [rbp-168h] BYREF
  __int64 *v196; // [rsp+50h] [rbp-158h]
  __int64 *v197; // [rsp+58h] [rbp-150h]
  unsigned int v198; // [rsp+6Ch] [rbp-13Ch] BYREF
  __m128i v199; // [rsp+70h] [rbp-138h] BYREF
  void *v200; // [rsp+80h] [rbp-128h] BYREF
  __int128 v201; // [rsp+88h] [rbp-120h]
  __m128i v202; // [rsp+A0h] [rbp-108h] BYREF
  __int64 v203; // [rsp+B0h] [rbp-F8h]
  __m128i v204; // [rsp+C0h] [rbp-E8h] BYREF
  __int64 v205; // [rsp+D0h] [rbp-D8h]
  __m128i v206; // [rsp+E0h] [rbp-C8h] BYREF
  __int64 v207; // [rsp+F0h] [rbp-B8h]
  __m128i v208; // [rsp+100h] [rbp-A8h] BYREF
  __int64 v209; // [rsp+110h] [rbp-98h]
  void *v210; // [rsp+120h] [rbp-88h] BYREF
  __m128i v211; // [rsp+128h] [rbp-80h] BYREF
  unsigned __int8 v212; // [rsp+138h] [rbp-70h]
  _BYTE ptr[24]; // [rsp+140h] [rbp-68h] BYREF
  unsigned int v214; // [rsp+158h] [rbp-50h]
  char v215; // [rsp+15Ch] [rbp-4Ch]
  unsigned __int64 v216; // [rsp+168h] [rbp-40h]

  v4 = *(__int64 **)(a1 + 192);
  v196 = a2;
  v216 = __readfsqword(0x28u);
  v192 = sub_4F6D80(v4);
  v194.m128i_i64[0] = 48 * v192;
  v6 = **(_QWORD **)(a1 + 192) + 48 * v192;
  v7 = operator new(0x58u);
  v8 = *(_QWORD *)(a1 + 216);
  *(_QWORD *)(v7 + 8) = -1;
  *(_QWORD *)v7 = v8;
  *(_QWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 24) = 0;
  *(_QWORD *)(v7 + 48) = 0;
  *(_QWORD *)(v7 + 72) = 0;
  *(_QWORD *)(v7 + 80) = -1;
  *(_OWORD *)(v7 + 32) = 0;
  *(_OWORD *)(v7 + 56) = 0;
  v9 = *(_QWORD **)(v6 + 32);
  *(_QWORD *)(v6 + 32) = v7;
  if ( v9 )
  {
    if ( v9[4] )
    {
      if ( !under_debugger )
        interr(2871);
      goto LABEL_262;
    }
    v9[9] = 0;
    v10 = (void *)v9[6];
    if ( v10 )
    {
      v9[7] = 0;
      qfree(v10);
    }
    v11 = (void *)v9[3];
    if ( v11 )
    {
      v9[4] = 0;
      qfree(v11);
    }
    operator delete(v9, 0x58u);
  }
  v12 = *(_QWORD *)(a1 + 208);
  *(_QWORD *)&ptr[8] = 0;
  v190 = (__int64 *)ptr;
  v13 = *(_QWORD *)(a1 + 224);
  v14 = a1 + 208;
  *(_QWORD *)ptr = v192;
  v15 = *(_QWORD *)(a1 + 216);
  v16 = v15 + 1;
  if ( (unsigned __int64)ptr >= v12 && (unsigned __int64)ptr < v12 + 16 * v13 )
  {
    if ( v13 < v16 )
    {
      v127 = qvector_reserve(v14, 0, v16, 16);
      v128 = *(_QWORD *)(a1 + 224);
      v129 = *(__m128i **)(a1 + 208);
      *(_QWORD *)(a1 + 224) = v13;
      v12 = v127;
      v130 = *(_QWORD *)(a1 + 216) - 1LL;
      if ( v130 >= 0 )
      {
        v131 = v12;
        do
        {
          v132 = _mm_loadu_si128(v129);
          v131 += 16LL;
          ++v129;
          *(__m128i *)(v131 - 16) = v132;
          v95 = v130-- == 0;
        }
        while ( !v95 );
        v129 = *(__m128i **)(a1 + 208);
      }
      qfree(v129);
      *(_QWORD *)(a1 + 208) = v12;
      v15 = *(_QWORD *)(a1 + 216);
      *(_QWORD *)(a1 + 224) = v128;
    }
    v117 = (_QWORD *)(v12 + 16 * v15);
    *v117 = v192;
    v117[1] = 0;
  }
  else
  {
    if ( v13 < v16 )
    {
      v118 = qvector_reserve(v14, 0, v16, 16);
      v119 = *(_QWORD *)(a1 + 224);
      v120 = *(__m128i **)(a1 + 208);
      *(_QWORD *)(a1 + 224) = v13;
      v12 = v118;
      v121 = *(_QWORD *)(a1 + 216) - 1LL;
      if ( v121 >= 0 )
      {
        v122 = v12;
        do
        {
          v123 = _mm_loadu_si128(v120);
          v122 += 16LL;
          ++v120;
          *(__m128i *)(v122 - 16) = v123;
          v95 = v121-- == 0;
        }
        while ( !v95 );
        v120 = *(__m128i **)(a1 + 208);
      }
      qfree(v120);
      *(_QWORD *)(a1 + 208) = v12;
      v15 = *(_QWORD *)(a1 + 216);
      *(_QWORD *)(a1 + 224) = v119;
    }
    *(__m128i *)(v12 + 16 * v15) = _mm_load_si128((const __m128i *)ptr);
  }
  ++*(_QWORD *)(a1 + 216);
  v17 = *(_QWORD *)(a3 + 16);
  v18 = *(_QWORD *)(v6 + 32);
  v210 = nullptr;
  v19 = *(_QWORD *)a3;
  v212 = 0;
  v191 = v17;
  LODWORD(v17) = *(_DWORD *)(a3 + 24);
  v20 = *(_QWORD *)(qword_2CCB598 + 1672);
  v21 = *(_QWORD *)(a3 + 8);
  v200 = nullptr;
  v198 = v17;
  LOBYTE(v17) = *(_BYTE *)(a3 + 28);
  v22 = *(int *)(v20 + 652);
  v211 = 0;
  v201 = 0;
  *(_QWORD *)(a1 + 64) = v22;
  if ( !(_BYTE)v17 )
    goto LABEL_98;
  while ( 1 )
  {
    v199.m128i_i64[0] = v19;
    v23 = *(_QWORD *)(a1 + 200);
    v199.m128i_i32[2] = v198;
    v189.m128i_i32[0] = v198;
    v24 = sub_4F90B0(v23, v199.m128i_i64);
    v27 = v189.m128i_u32[0];
    v28 = v24;
    if ( v24 != v23 + 8 )
      break;
LABEL_103:
    v74 = *(_QWORD *)(v18 + 32);
    v75 = *(_QWORD *)(v18 + 40);
    if ( v75 < v74 + 1 )
    {
      v189.m128i_i32[0] = v27;
      v76 = qvector_reserve(v18 + 24, 0, v74 + 1, 16);
      v88 = *(_QWORD *)(v18 + 32);
      v89 = *(_QWORD *)(v18 + 40);
      *(_QWORD *)(v18 + 40) = v75;
      v90 = *(__m128i **)(v18 + 24);
      v91 = v189.m128i_i32[0];
      v92 = v88 - 1;
      if ( v92 >= 0 )
      {
        v93 = v76;
        do
        {
          v94 = _mm_loadu_si128(v90);
          v93 += 16;
          ++v90;
          *(__m128i *)(v93 - 16) = v94;
          v95 = v92-- == 0;
        }
        while ( !v95 );
        v90 = *(__m128i **)(v18 + 24);
      }
      LODWORD(src) = v91;
      v189.m128i_i64[0] = v89;
      qfree(v90);
      v96 = v189.m128i_i64[0];
      v74 = *(_QWORD *)(v18 + 32);
      *(_QWORD *)(v18 + 24) = v76;
      LODWORD(v27) = (_DWORD)src;
      *(_QWORD *)(v18 + 40) = v96;
    }
    else
    {
      v76 = *(_QWORD *)(v18 + 24);
    }
    v77 = v76 + 16 * v74;
    *(_QWORD *)v77 = v19;
    *(_DWORD *)(v77 + 8) = v27;
    ++*(_QWORD *)(v18 + 32);
    v78 = *(_QWORD **)(a1 + 200);
    v79 = v78[2];
    if ( !v79 )
    {
      v80 = (__int64)(v78 + 1);
      goto LABEL_118;
    }
    v80 = (__int64)(v78 + 1);
    do
    {
      v82 = *(_QWORD *)(v79 + 32);
      if ( v82 < v19 )
        goto LABEL_114;
      if ( v19 < v82 )
        goto LABEL_111;
      v81 = *(_DWORD *)(v79 + 40);
      if ( v81 != (_DWORD)&stru_10000 )
      {
        if ( v81 >= (unsigned int)v27 || (_DWORD)v27 == (_DWORD)&stru_10000 )
        {
LABEL_111:
          v80 = v79;
          v79 = *(_QWORD *)(v79 + 16);
          continue;
        }
LABEL_114:
        v79 = *(_QWORD *)(v79 + 24);
        continue;
      }
      if ( (_DWORD)v27 == (_DWORD)&stru_10000 )
        goto LABEL_111;
      v79 = *(_QWORD *)(v79 + 24);
    }
    while ( v79 );
    if ( v78 + 1 == (_QWORD *)v80 )
      goto LABEL_118;
    v57 = *(_QWORD *)(v80 + 32);
    if ( v19 < v57 )
      goto LABEL_118;
    if ( v57 >= v19 )
    {
      v58 = *(_DWORD *)(v80 + 40);
      if ( (_DWORD)v27 == (_DWORD)&stru_10000 )
      {
        if ( v58 != (_DWORD)&stru_10000 )
          goto LABEL_118;
      }
      else
      {
        if ( v58 == (_DWORD)&stru_10000 || (unsigned int)v27 >= v58 )
          goto LABEL_58;
LABEL_118:
        v189.m128i_i64[0] = v80;
        src = v78 + 1;
        v83 = (__m128i *)operator new(0x40u);
        v83[2] = _mm_load_si128(&v199);
        v83[3].m128i_i64[0] = v192;
        v83[3].m128i_i64[1] = -v191;
        v85 = sub_4FAC40(v78, v80, (__int64)v83[2].m128i_i64, v84);
        if ( v86 )
        {
          if ( v85 || src == (void *)v86 )
          {
            v87 = 1;
          }
          else
          {
            v113 = v83[2].m128i_u64[0];
            v114 = *(_QWORD *)(v86 + 32);
            v87 = 1;
            if ( v113 >= v114 )
            {
              v87 = 0;
              if ( v114 >= v113 )
              {
                v115 = *(_DWORD *)(v86 + 40);
                v116 = v83[2].m128i_u32[2];
                LOBYTE(v87) = v115 != (_DWORD)&stru_10000;
                if ( v116 == (_DWORD)&stru_10000 )
                  v87 = (unsigned __int8)v87;
                else
                  v87 = (v116 < v115) & (unsigned __int8)(v115 != (_DWORD)&stru_10000);
              }
            }
          }
          std::_Rb_tree_insert_and_rebalance(v87, v83, v86, src);
          ++v78[5];
        }
        else if ( v83 )
        {
          operator delete(v83, 0x40u);
        }
      }
    }
LABEL_58:
    v32 = (__m128i *)&v200;
    v59 = sub_4F5AC0((_QWORD *)a1, (unsigned __int64 *)&v200, v19, v21);
    v60 = *(_QWORD *)a1;
    v212 = 0;
    v211.m128i_i64[0] = 0;
    if ( v59 )
    {
      v61 = *(__int64 (**)())(v60 + 48);
      v26 = (__m128i *)v21;
      v25 = (unsigned __int64)sub_4F3CB0;
      if ( v21 == -1 )
        v26 = (__m128i *)v19;
      if ( v61 != sub_4F3CB0 )
      {
        v189.m128i_i8[0] = v59;
        v32 = v26;
        src = v26;
        v106 = ((__int64 (__fastcall *)(__int64, __m128i *, __int64 (*)(), __int64 (*)()))v61)(a1, v26, v61, sub_4F3CB0);
        v27 = v198;
        v59 = v189.m128i_i8[0];
        if ( (v198 & 0x80000000) == 0 && (v26 = (__m128i *)src, (unsigned __int16)v198 == v106) )
        {
          v32 = nullptr;
          memset(ptr, 0, sizeof(ptr));
          LOBYTE(v214) = 13;
          v107 = qvector_reserve(v190, 0, 1, 24);
          v26 = (__m128i *)src;
          *(_QWORD *)ptr = v107;
          v59 = v189.m128i_i8[0];
          v108 = v107 + 24LL * *(_QWORD *)&ptr[8];
          *(_QWORD *)v108 = 0;
          v109 = v210;
          *(_QWORD *)(v108 + 8) = v26;
          *(_DWORD *)(v108 + 16) = 0;
          v110 = *(void **)ptr;
          memset(ptr, 0, sizeof(ptr));
          v111 = (__m128i)_mm_loadh_ps((const double *)&ptr[16]);
          if ( v109 )
          {
            src = v110;
            v189.m128i_i8[0] = v59;
            v195 = v111;
            v211.m128i_i64[0] = 0;
            qfree(v109);
            v112 = _mm_load_si128(&v195);
            v66 = v214;
            v210 = src;
            v59 = v189.m128i_i8[0];
            v212 = v214;
            v211 = v112;
            if ( *(_QWORD *)ptr )
            {
              *(_QWORD *)&ptr[8] = 0;
              qfree(*(void **)ptr);
              v66 = v212;
              v59 = v189.m128i_i8[0];
            }
          }
          else
          {
            v66 = v214;
            v210 = v110;
            v211 = v111;
            v212 = v214;
          }
          if ( v66 )
            goto LABEL_129;
        }
        else
        {
          v66 = v212;
          if ( v212 )
            goto LABEL_130;
        }
        v60 = *(_QWORD *)a1;
      }
    }
    v62 = *(__int64 (__fastcall **)(__int64))(v60 + 32);
    if ( v62 == sub_4F3C80 )
    {
      LOBYTE(v214) = 0;
      v63 = 0;
      v64 = 0;
      v65 = nullptr;
    }
    else
    {
      v189.m128i_i8[0] = v59;
      v32 = (__m128i *)a1;
      ((void (__fastcall *)(__int64 *, __int64, unsigned __int64, __int64, _QWORD, _QWORD))v62)(
        v190,
        a1,
        v19,
        v21,
        v198,
        v59);
      v65 = *(void **)ptr;
      v64 = *(_QWORD *)&ptr[8];
      v63 = *(_QWORD *)&ptr[16];
      v59 = v189.m128i_i8[0];
    }
    memset(ptr, 0, sizeof(ptr));
    if ( v210 )
    {
      src = v65;
      v189.m128i_i8[0] = v59;
      v211.m128i_i64[0] = 0;
      qfree(v210);
      v211.m128i_i64[0] = v64;
      v211.m128i_i64[1] = v63;
      v59 = v189.m128i_i8[0];
      v210 = src;
      v66 = v214;
      v212 = v214;
      if ( *(_QWORD *)ptr )
      {
        *(_QWORD *)&ptr[8] = 0;
        qfree(*(void **)ptr);
        v66 = v212;
        v59 = v189.m128i_i8[0];
      }
    }
    else
    {
      v210 = v65;
      v66 = v214;
      v211.m128i_i64[0] = v64;
      v211.m128i_i64[1] = v63;
      v212 = v214;
    }
    if ( v66 )
      goto LABEL_129;
    if ( v59 )
    {
      v103 = v21;
      v32 = (__m128i *)v210;
      if ( v21 == -1 )
        v103 = v19;
      v212 = 5;
      v211.m128i_i64[0] = 0;
      v206.m128i_i64[0] = -1;
      v206.m128i_i64[1] = v103;
      LODWORD(v207) = 0;
      if ( &v206 < v210 || (v25 = (unsigned __int64)v210 + 24 * v211.m128i_i64[1], (unsigned __int64)&v206 >= v25) )
      {
        if ( !v211.m128i_i64[1] )
        {
          v210 = (void *)qvector_reserve(&v210, v210, 1, 24);
          v32 = (__m128i *)((char *)v210 + 24 * v211.m128i_i64[0]);
        }
        v105 = v207;
        *v32 = _mm_load_si128(&v206);
        v32[1].m128i_i64[0] = v105;
      }
      else
      {
        if ( !v211.m128i_i64[1] )
        {
          v210 = (void *)qvector_reserve(&v210, v210, 1, 24);
          v32 = (__m128i *)((char *)v210 + 24 * v211.m128i_i64[0]);
        }
        v32->m128i_i64[0] = -1;
        v32->m128i_i64[1] = v103;
        v32[1].m128i_i32[0] = 0;
      }
      ++v211.m128i_i64[0];
      v66 = v212;
    }
    if ( v66 )
      goto LABEL_129;
    v67 = v201;
    if ( !(_QWORD)v201 )
    {
      v68 = v21;
      v32 = (__m128i *)v210;
      if ( v21 == -1 )
        v68 = v19;
      v212 = 1;
      v211.m128i_i64[0] = 0;
      v208.m128i_i64[0] = -1;
      v208.m128i_i64[1] = v68;
      LODWORD(v209) = 0;
      if ( &v208 < v210 || (v25 = (unsigned __int64)v210 + 24 * v211.m128i_i64[1], (unsigned __int64)&v208 >= v25) )
      {
        if ( !v211.m128i_i64[1] )
        {
          v210 = (void *)qvector_reserve(&v210, v210, 1, 24);
          v32 = (__m128i *)((char *)v210 + 24 * v211.m128i_i64[0]);
        }
        v104 = v209;
        *v32 = _mm_load_si128(&v208);
        v32[1].m128i_i64[0] = v104;
      }
      else
      {
        if ( !v211.m128i_i64[1] )
        {
          v210 = (void *)qvector_reserve(&v210, v210, 1, 24);
          v32 = (__m128i *)((char *)v210 + 24 * v211.m128i_i64[0]);
        }
        v32->m128i_i64[0] = -1;
        v32->m128i_i64[1] = v68;
        v32[1].m128i_i32[0] = 0;
      }
      ++v211.m128i_i64[0];
      v69 = *(int *)(*(_QWORD *)(qword_2CCB598 + 1672) + 644LL);
      v66 = v212;
      if ( !v212 )
      {
        if ( (_DWORD)v69 )
        {
          v67 = v201;
          goto LABEL_81;
        }
LABEL_90:
        if ( !v66 )
        {
          v67 = v201;
          goto LABEL_92;
        }
      }
LABEL_129:
      v27 = v198;
LABEL_130:
      v34 = v211.m128i_i64[0];
      if ( (unsigned __int8)(v66 - 10) <= 3u )
      {
LABEL_131:
        v97 = 3 * v34;
        v98 = (char *)v210 + 8 * v97;
        if ( v98 != v210 )
        {
          v99 = *(_QWORD *)(a1 + 8);
          v189.m128i_i32[0] = (v27 & 0x10000000) != 0;
          v100 = 1 << (((unsigned int)v27 >> 29) & 3);
          v101 = (char *)v210;
          do
          {
            while ( 1 )
            {
              v102 = extend_sign(*(_QWORD *)v101, v100, v189.m128i_u32[0]);
              *(_QWORD *)v101 = v102;
              v25 = v212;
              v32 = *(__m128i **)(v99 + 32);
              v97 = (unsigned int)v212 - 12;
              if ( (unsigned __int8)(v212 - 12) <= 1u )
                break;
              v102 &= v32[1].m128i_u64[0];
LABEL_134:
              *(_QWORD *)v101 = v102;
              v101 += 24;
              if ( v98 == v101 )
                goto LABEL_138;
            }
            if ( v32[1].m128i_i32[2] == 8 )
              goto LABEL_134;
            v101 += 24;
            *((_QWORD *)v101 - 3) = (int)v102;
          }
          while ( v98 != v101 );
        }
LABEL_138:
        sub_4FB280((__int64)&v210, (__int64)v32, v97, v25, v27, (__int64)v26);
      }
LABEL_27:
      v36 = v210;
      v37 = (__m128i)_mm_loadh_ps((const double *)&v211.m128i_i64[1]);
      v38 = **(_QWORD **)(a1 + 192) + v194.m128i_i64[0];
      v211 = 0;
      v210 = nullptr;
      v39 = *(void **)v38;
      if ( *(_QWORD *)v38 )
      {
        *(_QWORD *)(v38 + 8) = 0;
        v189 = v37;
        qfree(v39);
        v37 = _mm_load_si128(&v189);
      }
      *(_QWORD *)v38 = v36;
      v40 = v191;
      *(__m128i *)(v38 + 8) = v37;
      *(_BYTE *)(v38 + 24) = v212;
      v41 = *(__m128i **)(v18 + 24);
      if ( v40 )
      {
        v42 = &v41[*(_QWORD *)(v18 + 32)];
        if ( v42 != v41 )
        {
          v43 = v190;
          v44 = *(const __m128i **)(v18 + 24);
          do
          {
            v45 = _mm_loadu_si128(v44);
            v46 = *(_QWORD *)(a1 + 200);
            ++v44;
            *(__m128i *)ptr = v45;
            v47 = sub_4F90B0(v46, v43);
            *(_QWORD *)(v47 + 56) += v40;
          }
          while ( v42 != v44 );
          v41 = *(__m128i **)(v18 + 24);
        }
      }
      if ( v41 )
      {
        *(_QWORD *)(v18 + 32) = 0;
        qfree(v41);
        *(_QWORD *)(v18 + 24) = 0;
        *(_QWORD *)(v18 + 40) = 0;
      }
      v48 = **(_QWORD **)(a1 + 192) + v194.m128i_i64[0];
      v49 = *(_QWORD **)(v48 + 32);
      *(_QWORD *)(v48 + 32) = 0;
      if ( !v49 )
        goto LABEL_43;
      if ( !v49[4] )
      {
        v50 = (void *)v49[6];
        v49[9] = 0;
        if ( v50 )
        {
          v49[7] = 0;
          qfree(v50);
        }
        v51 = (void *)v49[3];
        if ( v51 )
        {
          v49[4] = 0;
          qfree(v51);
        }
        operator delete(v49, 0x58u);
LABEL_43:
        v52 = *(_QWORD *)(a1 + 216);
        if ( v52 )
          *(_QWORD *)(a1 + 216) = v52 - 1;
        v53 = v196;
        *v196 = v192;
        v53[1] = v191;
        goto LABEL_46;
      }
      if ( !under_debugger )
        interr(2871);
LABEL_262:
      BUG();
    }
    v69 = *(int *)(*(_QWORD *)(qword_2CCB598 + 1672) + 644LL);
    if ( (_DWORD)v69 )
    {
LABEL_81:
      if ( v69 < v67 )
      {
        v70 = v21;
        v32 = (__m128i *)v210;
        v25 = (unsigned __int64)v190;
        if ( v21 == -1 )
          v70 = v19;
        v212 = 8;
        v211.m128i_i64[0] = 0;
        *(_QWORD *)ptr = -1;
        *(_QWORD *)&ptr[8] = v70;
        *(_DWORD *)&ptr[16] = 0;
        if ( v190 >= v210 && v190 < (__int64 *)((char *)v210 + 24 * v211.m128i_i64[1]) )
        {
          if ( !v211.m128i_i64[1] )
          {
            v210 = (void *)qvector_reserve(&v210, v210, 1, 24);
            v32 = (__m128i *)((char *)v210 + 24 * v211.m128i_i64[0]);
          }
          v32->m128i_i64[0] = -1;
          v32->m128i_i64[1] = v70;
          v32[1].m128i_i32[0] = 0;
        }
        else
        {
          if ( !v211.m128i_i64[1] )
          {
            v210 = (void *)qvector_reserve(&v210, v210, 1, 24);
            v32 = (__m128i *)((char *)v210 + 24 * v211.m128i_i64[0]);
          }
          *v32 = _mm_load_si128((const __m128i *)ptr);
          v32[1].m128i_i64[0] = *(_QWORD *)&ptr[16];
        }
        ++v211.m128i_i64[0];
        v66 = v212;
        goto LABEL_90;
      }
    }
LABEL_92:
    memset(ptr, 0, sizeof(ptr));
    if ( v67 <= 1 )
    {
      v19 = *(_QWORD *)v200;
      v21 = *((_QWORD *)v200 + 1);
      *(_QWORD *)&v201 = 0;
      goto LABEL_98;
    }
    if ( !*(_QWORD *)(a1 + 56)
      && (unsigned __int64)(*(_DWORD *)(a1 + 44) + *(_DWORD *)(a1 + 48)) >= *(_QWORD *)(a1 + 216) )
    {
      if ( v191 )
      {
        v156 = *(const __m128i **)(v18 + 24);
        for ( v189.m128i_i64[0] = (__int64)v156[*(_QWORD *)(v18 + 32)].m128i_i64;
              (const __m128i *)v189.m128i_i64[0] != v156;
              *(_QWORD *)(v159 + 56) += v191 )
        {
          v157 = _mm_loadu_si128(v156);
          v158 = *(_QWORD *)(a1 + 200);
          ++v156;
          *(__m128i *)ptr = v157;
          v159 = sub_4F90B0(v158, v190);
        }
      }
      v54 = v200;
      v133 = 16 * v67;
      v189.m128i_i64[0] = (__int64)v200 + 16 * v67;
      if ( v200 != (void *)v189.m128i_i64[0] )
      {
        if ( v133 >> 4 )
        {
          _BitScanReverse64(&v134, v133 >> 4);
          src = v200;
          sub_4F47C0((__m128i *)v200, (unsigned __int64 *)v189.m128i_i64[0], 2LL * (int)v134);
          v135 = (__m128i *)src;
          if ( v133 > 256 )
          {
            v136 = (const __m128i *)((char *)src + 256);
            sub_4F4340((__m128i *)src, (__m128i *)src + 16);
            do
            {
              v137 = _mm_loadu_si128(v136);
              v138 = (__m128i *)&v136[-1];
              if ( v137.m128i_i64[0] >= (unsigned __int64)v136[-1].m128i_i64[0] )
              {
                v140 = (__m128i *)v136;
              }
              else
              {
                do
                {
                  v139 = _mm_loadu_si128(v138);
                  v140 = v138--;
                  v138[2] = v139;
                }
                while ( v137.m128i_i64[0] < (unsigned __int64)v138->m128i_i64[0] );
              }
              *v140 = v137;
              ++v136;
            }
            while ( (const __m128i *)v189.m128i_i64[0] != v136 );
LABEL_205:
            v67 = v201;
            v141 = *(_QWORD *)(v18 + 64);
            v189.m128i_i64[0] = v18 + 48;
            if ( v141 >= (unsigned __int64)v201 )
            {
              v142 = *(__int64 **)(v18 + 48);
              goto LABEL_207;
            }
LABEL_251:
            v182 = (__m128i *)qvector_reserve(v189.m128i_i64[0], 0, v67, 32);
            v183 = *(_QWORD *)(v18 + 56);
            v184 = *(_QWORD *)(v18 + 64);
            *(_QWORD *)(v18 + 64) = v141;
            v185 = *(__m128i **)(v18 + 48);
            v186 = v183 - 1;
            if ( v186 >= 0 )
            {
              v187 = v182;
              do
              {
                v188 = _mm_loadu_si128(v185);
                v187 += 2;
                v185 += 2;
                v187[-2] = v188;
                v187[-1] = _mm_loadu_si128(v185 - 1);
                v95 = v186-- == 0;
              }
              while ( !v95 );
              v185 = *(__m128i **)(v18 + 48);
            }
            src = v182;
            qfree(v185);
            v142 = (__int64 *)src;
            *(_QWORD *)(v18 + 64) = v184;
            v67 = v201;
            *(_QWORD *)(v18 + 48) = v142;
LABEL_207:
            v54 = v200;
            v143 = 16 * v67;
            v144 = (const __m128i *)((char *)v200 + v143);
            if ( (char *)v200 + v143 != v200 )
            {
              v145 = *(_QWORD *)(v18 + 56);
              v146 = (const __m128i *)v200;
              do
              {
                v149 = _mm_loadu_si128(v146);
                v150 = v198;
                v151 = v145 + 1;
                *(_QWORD *)&ptr[16] = 0;
                v215 = 0;
                v214 = v198;
                *(__m128i *)ptr = v149;
                v152 = *(_QWORD *)(v18 + 64);
                if ( v190 < v142 || v190 >= &v142[4 * v152] )
                {
                  if ( v152 < v151 )
                  {
                    src = *(void **)(v18 + 64);
                    v161 = qvector_reserve(v189.m128i_i64[0], 0, v145 + 1, 32);
                    v162 = *(_QWORD *)(v18 + 56);
                    v163 = v161;
                    v164 = *(void **)(v18 + 64);
                    v165 = *(__m128i **)(v18 + 48);
                    *(_QWORD *)(v18 + 64) = src;
                    v166 = v162 - 1;
                    if ( v166 >= 0 )
                    {
                      do
                      {
                        v167 = _mm_loadu_si128(v165);
                        v161 += 32;
                        v165 += 2;
                        *(__m128i *)(v161 - 32) = v167;
                        *(__m128i *)(v161 - 16) = _mm_loadu_si128(v165 - 1);
                        v95 = v166-- == 0;
                      }
                      while ( !v95 );
                      v165 = *(__m128i **)(v18 + 48);
                    }
                    v194.m128i_i64[0] = v163;
                    src = v164;
                    qfree(v165);
                    v142 = (__int64 *)v194.m128i_i64[0];
                    v145 = *(_QWORD *)(v18 + 56);
                    *(_QWORD *)(v18 + 48) = v194.m128i_i64[0];
                    *(_QWORD *)(v18 + 64) = v164;
                  }
                  v153 = (__m128i *)&v142[4 * v145];
                  *v153 = _mm_load_si128((const __m128i *)ptr);
                  v153[1] = _mm_load_si128((const __m128i *)&ptr[16]);
                }
                else
                {
                  if ( v152 < v151 )
                  {
                    v195.m128i_i64[0] = *(_QWORD *)(v18 + 64);
                    LODWORD(src) = v198;
                    v194 = v149;
                    v172 = qvector_reserve(v189.m128i_i64[0], 0, v145 + 1, 32);
                    v173 = v172;
                    v174 = *(_QWORD *)(v18 + 64);
                    v175 = *(__m128i **)(v18 + 48);
                    v176 = *(_QWORD *)(v18 + 56) - 1LL;
                    *(_QWORD *)(v18 + 64) = v195.m128i_i64[0];
                    v177 = (int)src;
                    v178 = _mm_load_si128(&v194);
                    if ( v176 >= 0 )
                    {
                      do
                      {
                        v179 = _mm_loadu_si128(v175);
                        v172 += 32;
                        v175 += 2;
                        *(__m128i *)(v172 - 32) = v179;
                        *(__m128i *)(v172 - 16) = _mm_loadu_si128(v175 - 1);
                        v95 = v176-- == 0;
                      }
                      while ( !v95 );
                      v175 = *(__m128i **)(v18 + 48);
                    }
                    v197 = (__int64 *)v173;
                    v195.m128i_i64[0] = v174;
                    LODWORD(src) = v177;
                    v194 = v178;
                    qfree(v175);
                    v142 = v197;
                    v180 = v195.m128i_i64[0];
                    v145 = *(_QWORD *)(v18 + 56);
                    v149 = _mm_load_si128(&v194);
                    *(_QWORD *)(v18 + 48) = v197;
                    v150 = (unsigned int)src;
                    *(_QWORD *)(v18 + 64) = v180;
                  }
                  v147 = (__m128i *)&v142[4 * v145];
                  v147[1].m128i_i64[0] = 0;
                  v147[1].m128i_i32[2] = v150;
                  v147[1].m128i_i8[12] = 0;
                  *v147 = v149;
                }
                v148 = *(__int64 **)(v18 + 48);
                ++v146;
                v145 = *(_QWORD *)(v18 + 56) + 1LL;
                v142 = v148;
                *(_QWORD *)(v18 + 56) = v145;
              }
              while ( v144 != v146 );
              v54 = v200;
              goto LABEL_237;
            }
LABEL_257:
            v148 = *(__int64 **)(v18 + 48);
LABEL_237:
            *(_QWORD *)(v18 + 72) = v148;
            v168 = v192;
            if ( v21 == -1 )
              v21 = v19;
            *(_QWORD *)(v18 + 80) = v21;
            v169 = *(_QWORD *)(a1 + 208) + 16LL * *(_QWORD *)(a1 + 216);
            v170 = v191;
            *(_QWORD *)(v169 - 8) = v191;
            v171 = v196;
            v196[1] = v170;
            v55 = 1;
            *v171 = v168;
            goto LABEL_47;
          }
        }
        else
        {
          src = v200;
          sub_4F47C0((__m128i *)v200, (unsigned __int64 *)v200 + 2 * v67, -2);
          v135 = (__m128i *)src;
        }
        sub_4F4340(v135, (__m128i *)v189.m128i_i64[0]);
        goto LABEL_205;
      }
      v141 = *(_QWORD *)(v18 + 64);
      if ( v141 < v67 )
      {
        v189.m128i_i64[0] = v18 + 48;
        goto LABEL_251;
      }
      goto LABEL_257;
    }
    sub_35A790((char **)v190);
    v71 = *(void **)ptr;
    if ( *(_QWORD *)&ptr[8] > 1u )
    {
      *(_QWORD *)(a1 + 72) = v19;
      if ( v71 )
      {
        *(_QWORD *)&ptr[8] = 0;
        qfree(v71);
      }
      goto LABEL_46;
    }
    v19 = *(_QWORD *)v200;
    v21 = *((_QWORD *)v200 + 1);
    *(_QWORD *)&v201 = 0;
    if ( *(_QWORD *)ptr )
    {
      *(_QWORD *)&ptr[8] = 0;
      qfree(*(void **)ptr);
    }
LABEL_98:
    v32 = (__m128i *)&v210;
    if ( (unsigned __int8)sub_4FD140((_QWORD *)a1, (__int64)&v210, (int *)&v198, v190, v19, v21) )
    {
      v35 = v212;
      v34 = v211.m128i_i64[0];
      v27 = v198;
      if ( v212 == 2 )
      {
        v154 = -1;
        if ( v211.m128i_i64[0] == 1 )
          v154 = *((_QWORD *)v210 + 1);
        *(_QWORD *)(a1 + 72) = v154;
        goto LABEL_46;
      }
      goto LABEL_26;
    }
    v191 += *(_QWORD *)ptr;
  }
  v29 = *(_QWORD *)(v24 + 48);
  v30 = *(__int64 **)(a1 + 192);
  v31 = *v30 + 48 * v29;
  if ( *(_BYTE *)(v31 + 24) == 2 )
  {
    if ( *(_QWORD *)(v31 + 8) == 1 )
    {
      if ( *(_DWORD *)(a1 + 48) + *(_DWORD *)(a1 + 44) - *(_DWORD *)(a1 + 32) - 1 <= **(_DWORD **)v31 )
      {
        v155 = *(_QWORD *)(*(_QWORD *)v31 + 8LL);
LABEL_221:
        *(_QWORD *)(a1 + 72) = v155;
        goto LABEL_46;
      }
    }
    else
    {
      v155 = -1;
      if ( *(_DWORD *)(a1 + 44) + *(_DWORD *)(a1 + 48) - *(_DWORD *)(a1 + 32) - 1 < 0 )
        goto LABEL_221;
    }
    sub_4F74D0(v30, v29);
    v72 = *(_QWORD *)(a1 + 200);
    v73 = (void *)std::_Rb_tree_rebalance_for_erase(v28, v72 + 8);
    operator delete(v73, 0x40u);
    --*(_QWORD *)(v72 + 40);
    LODWORD(v27) = v189.m128i_i32[0];
    goto LABEL_103;
  }
  if ( v29 == v192 )
  {
    if ( *(_QWORD *)(a1 + 56) )
    {
      *(_QWORD *)(a1 + 72) = v19;
LABEL_46:
      v54 = v200;
      v55 = 0;
      goto LABEL_47;
    }
    if ( v21 == -1 )
      v21 = v19;
    if ( v191 )
    {
      v32 = (__m128i *)v210;
      v212 = 6;
      v202.m128i_i64[1] = v21;
      v33 = v211.m128i_i64[1];
      v211.m128i_i64[0] = 0;
      v202.m128i_i64[0] = -1;
      LODWORD(v203) = 0;
      if ( &v202 < v210 || (v25 = (unsigned __int64)v210 + 24 * v211.m128i_i64[1], (unsigned __int64)&v202 >= v25) )
      {
        if ( !v211.m128i_i64[1] )
        {
          v210 = (void *)qvector_reserve(&v210, v210, 1, 24);
          v27 = v198;
          v32 = (__m128i *)((char *)v210 + 24 * v211.m128i_i64[0]);
        }
        v160 = v203;
        *v32 = _mm_load_si128(&v202);
        v32[1].m128i_i64[0] = v160;
        goto LABEL_25;
      }
    }
    else
    {
      v32 = (__m128i *)v210;
      v212 = 1;
      v204.m128i_i64[1] = v21;
      v33 = v211.m128i_i64[1];
      v211.m128i_i64[0] = 0;
      v204.m128i_i64[0] = -1;
      LODWORD(v205) = 0;
      if ( &v204 < v210 || (v25 = (unsigned __int64)v210 + 24 * v211.m128i_i64[1], (unsigned __int64)&v204 >= v25) )
      {
        if ( !v211.m128i_i64[1] )
        {
          v210 = (void *)qvector_reserve(&v210, v210, 1, 24);
          v27 = v198;
          v32 = (__m128i *)((char *)v210 + 24 * v211.m128i_i64[0]);
        }
        v181 = v205;
        *v32 = _mm_load_si128(&v204);
        v32[1].m128i_i64[0] = v181;
        goto LABEL_25;
      }
    }
    if ( !v33 )
    {
      v210 = (void *)qvector_reserve(&v210, v32, 1, 24);
      v27 = v198;
      v32 = (__m128i *)((char *)v210 + 24 * v211.m128i_i64[0]);
    }
    v32->m128i_i64[0] = -1;
    v32->m128i_i64[1] = v21;
    v32[1].m128i_i32[0] = 0;
LABEL_25:
    v34 = v211.m128i_i64[0] + 1;
    v35 = v212;
    ++v211.m128i_i64[0];
LABEL_26:
    if ( (unsigned __int8)(v35 - 10) <= 3u )
      goto LABEL_131;
    goto LABEL_27;
  }
  v124 = *(_QWORD *)(v28 + 56) + v191;
  sub_4F9180(a1, v192, v29, v124);
  sub_4F74D0(*(__int64 **)(a1 + 192), v192);
  v125 = *(_QWORD *)(a1 + 216);
  if ( v125 )
    *(_QWORD *)(a1 + 216) = v125 - 1;
  v126 = v196;
  v54 = v200;
  v55 = 0;
  *v196 = v29;
  v126[1] = v124;
LABEL_47:
  if ( v54 )
  {
    *(_QWORD *)&v201 = 0;
    qfree(v54);
  }
  if ( v210 )
  {
    v211.m128i_i64[0] = 0;
    qfree(v210);
  }
  return v55;
}
