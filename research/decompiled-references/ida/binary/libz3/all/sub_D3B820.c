struct _Unwind_Exception *__fastcall sub_D3B820(__m128i *a1, __int64 a2, struct _Unwind_Exception *a3)
{
  __int64 v3; // r13
  __m128i *v4; // rbp
  __int64 v5; // rdx
  unsigned int v6; // eax
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rcx
  _QWORD *v10; // r12
  _QWORD *v11; // rbx
  __int64 v12; // r8
  __m128i *v13; // r8
  __int64 v14; // r11
  __m128i *v15; // r14
  unsigned int v16; // r9d
  __m128i **v17; // rcx
  __int64 v18; // rax
  __m128i **v19; // r10
  __m128i **i; // rax
  __m128i *v21; // rdx
  __int8 v22; // r10
  __int64 v23; // rax
  __m128i *v24; // r15
  __int64 v25; // r9
  int v26; // r8d
  __int64 v27; // r10
  __int64 v28; // rax
  __int64 *v29; // rcx
  int v30; // edi
  unsigned int v31; // edx
  __int64 *v32; // rsi
  __int64 v33; // rdx
  __int64 *v34; // r11
  __int64 *v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rax
  int v38; // esi
  _Unwind_Exception_Class *v39; // rdx
  unsigned int v40; // r8d
  _Unwind_Exception_Class *v41; // rcx
  __int64 v42; // r8
  _Unwind_Exception_Class *v43; // rdi
  _Unwind_Exception_Class *m; // rax
  _Unwind_Exception_Class v45; // rbx
  _Unwind_Exception_Class exception_class; // rsi
  _Unwind_Exception_Cleanup_Fn exception_cleanup; // rdi
  bool v48; // zf
  struct _Unwind_Exception *result; // rax
  unsigned int v50; // ebx
  size_t v51; // rdi
  __int64 v52; // rax
  _DWORD *v53; // r12
  __int64 v54; // r14
  __int64 v55; // rdx
  unsigned __int64 v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rdx
  __m128i **j; // rax
  __m128i *v60; // rdx
  __m128i *v61; // r15
  unsigned __int32 v62; // r9d
  size_t v63; // rbx
  __m128i *v64; // rax
  __m128i v65; // xmm0
  __int64 v66; // r9
  __m128i *v67; // r8
  __m128i *v68; // rdx
  __m128i *v69; // rdi
  __m128i *v70; // rcx
  __m128i *v71; // rax
  __int32 v72; // eax
  char *v73; // r8
  __m128i *v74; // r15
  __int64 v75; // r11
  int v76; // edi
  __int64 v77; // rax
  __m128i **v78; // r9
  __m128i **v79; // rax
  __m128i *v80; // rdx
  __m128i *v81; // rdx
  unsigned int v82; // eax
  __int64 v83; // rdi
  int v84; // eax
  __int64 m128i_i64; // rdi
  __m128i *v86; // rax
  __int64 v87; // rbx
  __int64 v88; // rdx
  __int64 *v89; // rcx
  int v90; // r10d
  unsigned int v91; // esi
  __int64 *v92; // rdi
  __int64 v93; // rsi
  __int64 *v94; // r11
  __int64 *v95; // rax
  __int64 v96; // rdx
  unsigned int v97; // eax
  __int64 v98; // rdx
  int v99; // eax
  _QWORD *v100; // rdx
  _DWORD *v101; // rax
  __int64 v102; // rax
  __m128i *v103; // rbx
  unsigned __int32 v104; // edx
  __m128i *v105; // r15
  int v106; // r11d
  __int64 v107; // r8
  __m128i *v108; // rax
  __m128i v109; // xmm0
  __int64 v110; // rdx
  __m128i *v111; // rdi
  __m128i *v112; // rdx
  __m128i *v113; // r8
  __m128i *v114; // rcx
  __m128i *v115; // rax
  __int64 v116; // rax
  _QWORD *v117; // rax
  __int64 v118; // rax
  unsigned int v119; // edx
  size_t v120; // rsi
  __int64 v121; // rax
  __int64 v122; // rax
  __int64 v123; // rdx
  unsigned int v124; // ebx
  unsigned int v125; // edx
  __int64 v126; // rax
  __int64 v127; // r9
  _DWORD *v128; // rcx
  __int64 v129; // rdi
  unsigned __int64 v130; // rax
  __int64 v131; // rdi
  _QWORD *v132; // rdx
  unsigned int v133; // eax
  __int64 v134; // rcx
  int v135; // eax
  __m128i **v136; // rcx
  unsigned int v137; // r14d
  unsigned int v138; // ecx
  unsigned int *v139; // rax
  __int64 v140; // rcx
  __m128i *v141; // rax
  __m128i *v142; // r9
  const __m128i *v143; // rcx
  __m128i *v144; // r10
  __int64 v145; // rdx
  __m128i *v146; // rsi
  __m128i *v147; // rdx
  _DWORD *v148; // rax
  __int64 v149; // rax
  __int32 v150; // r8d
  __m128i **v151; // r15
  __m128i **v152; // rax
  __int32 v153; // edi
  __int64 v154; // rdx
  __m128i **v155; // r9
  __m128i **v156; // rdx
  __m128i **v157; // r10
  __m128i *v158; // rcx
  __m128i *v159; // rax
  __m128i *v160; // rax
  __int32 v161; // r10d
  __m128i *v162; // r8
  const __m128i *v163; // rcx
  __m128i *v164; // r11
  __int64 v165; // rdx
  __m128i *v166; // rsi
  __m128i *v167; // rdx
  __int64 v168; // rax
  __m128i **v169; // r15
  __m128i **v170; // r8
  __int32 v171; // esi
  __int64 v172; // rax
  __m128i **v173; // rdi
  __m128i **v174; // rax
  __m128i **v175; // r9
  __m128i *v176; // rdx
  __m128i *v177; // rax
  __m128i **v178; // rax
  char *v179; // r8
  char *v180; // r9
  __int64 v181; // rdx
  __m128i **v182; // rsi
  __m128i **v183; // rdx
  _QWORD *v184; // rdx
  _QWORD *v185; // rax
  _DWORD *v186; // rax
  __int32 v187; // esi
  _QWORD *v188; // r8
  __int64 v189; // r15
  __int64 v190; // rax
  unsigned int v191; // edx
  _QWORD *v192; // rcx
  __int64 v193; // rdx
  _QWORD *v194; // rdi
  _QWORD *k; // rax
  __m128i *v196; // rdx
  int v197; // eax
  __m128i *v198; // rdx
  __m128i **v199; // rax
  char *v200; // rdi
  char *v201; // r9
  __int64 v202; // rax
  __m128i **v203; // rdx
  __m128i **v204; // rax
  unsigned int v205; // edx
  __int32 v206; // eax
  unsigned int v207; // eax
  void *v208; // rax
  __int64 v209; // rdx
  char *v210; // rdi
  char *v211; // rax
  __int64 v212; // rdx
  _QWORD *v213; // rcx
  _QWORD *v214; // rdx
  char **v215; // r13
  char **exception; // r12
  char **v217; // r13
  char **v218; // r13
  char **v219; // r13
  int v220; // [rsp+0h] [rbp-C8h]
  struct _Unwind_Exception *v221; // [rsp+8h] [rbp-C0h]
  int v222[2]; // [rsp+10h] [rbp-B8h]
  unsigned __int8 v223; // [rsp+10h] [rbp-B8h]
  unsigned __int8 v224; // [rsp+10h] [rbp-B8h]
  int v225[2]; // [rsp+10h] [rbp-B8h]
  __int32 v226; // [rsp+10h] [rbp-B8h]
  int v227[2]; // [rsp+10h] [rbp-B8h]
  int v228[2]; // [rsp+18h] [rbp-B0h]
  size_t v229; // [rsp+18h] [rbp-B0h]
  int v230[2]; // [rsp+18h] [rbp-B0h]
  int v231[2]; // [rsp+18h] [rbp-B0h]
  __int64 s; // [rsp+20h] [rbp-A8h]
  char v233; // [rsp+28h] [rbp-A0h]
  unsigned int v234; // [rsp+28h] [rbp-A0h]
  unsigned __int32 v235; // [rsp+28h] [rbp-A0h]
  unsigned int v236; // [rsp+28h] [rbp-A0h]
  int v237; // [rsp+30h] [rbp-98h]
  int v238[2]; // [rsp+30h] [rbp-98h]
  unsigned __int32 v239; // [rsp+30h] [rbp-98h]
  unsigned __int32 v240; // [rsp+30h] [rbp-98h]
  int v241[2]; // [rsp+30h] [rbp-98h]
  char *v242; // [rsp+38h] [rbp-90h]
  _QWORD *v243; // [rsp+40h] [rbp-88h]
  void *v244; // [rsp+48h] [rbp-80h]
  __int64 v245; // [rsp+60h] [rbp-68h] BYREF
  __int64 v246; // [rsp+68h] [rbp-60h]
  __int64 v247[11]; // [rsp+70h] [rbp-58h] BYREF

  v3 = a2;
  v4 = a1;
  v221 = a3;
  v5 = a1[5].m128i_i64[0];
  if ( v5 )
  {
    v6 = *(_DWORD *)(v5 - 4);
    if ( v6 == *(_DWORD *)(v5 - 8) )
    {
      v50 = (3 * v6 + 1) >> 1;
      v51 = 16 * v50 + 8;
      if ( 16 * v6 + 8 >= (unsigned int)v51 || v6 >= v50 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v247, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v247);
        sub_233E40((__int64)v247);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v52 = sub_186B270(v51);
      a1 = (__m128i *)v4[5].m128i_i64[0];
      v53 = (_DWORD *)v52;
      v54 = v52 + 8;
      if ( a1 )
      {
        v55 = a1[-1].m128i_u32[3];
        *(_DWORD *)(v52 + 4) = v55;
        v56 = 0;
        v57 = 16 * v55;
        if ( v57 )
        {
          do
          {
            *(__m128i *)&v53[v56 / 4 + 2] = _mm_loadu_si128(&a1[v56 / 0x10]);
            v56 += 16LL;
          }
          while ( v57 != v56 );
        }
        a1 = (__m128i *)((char *)a1 - 8);
        sub_186B220(a1);
        v58 = v54 + 16LL * (unsigned int)v53[1];
        v8 = v53[1] + 1;
      }
      else
      {
        *(_DWORD *)(v52 + 4) = 0;
        v58 = v52 + 8;
        v8 = 1;
      }
      v4[5].m128i_i64[0] = v54;
      *v53 = v50;
      *(_QWORD *)v58 = a2;
      *(_BYTE *)(v58 + 8) = 1;
      v53[1] = v8;
    }
    else
    {
      v7 = v6;
      v8 = v6 + 1;
      v9 = v5 + 16 * v7;
      *(_QWORD *)v9 = a2;
      *(_BYTE *)(v9 + 8) = 1;
      *(_DWORD *)(v5 - 4) = v8;
    }
  }
  else
  {
    a1 = (__m128i *)&qword_28;
    v122 = sub_186B270(0x28u);
    v123 = v122 + 8;
    *(_QWORD *)(v122 + 8) = a2;
    a2 = 0x100000002LL;
    *(_BYTE *)(v122 + 16) = 1;
    *(_QWORD *)v122 = 0x100000002LL;
    v8 = 1;
    v4[5].m128i_i64[0] = v123;
  }
  v10 = nullptr;
  while ( 1 )
  {
    if ( !v8 )
      goto LABEL_33;
    v11 = (_QWORD *)v4->m128i_i64[1];
    if ( v11[2] < (unsigned __int64)Z3_get_estimated_alloc_size_0(a1, a2) )
    {
      v219 = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v247, off_1C7E178);
      *v219 = (char *)off_1C63670;
      sub_2333C0(v219 + 1, v247);
      sub_233E40((__int64)v247);
      __cxa_throw(v219, (struct type_info *)&`typeinfo for'tactic_exception, (void (*)(void *))sub_230EA0);
    }
    sub_EE4F40(*v11);
    v12 = 0xFFFFFFFFLL;
    a1 = (__m128i *)v4[5].m128i_i64[0];
    if ( a1 )
      v12 = (unsigned int)(a1[-1].m128i_i32[3] - 1);
    v13 = &a1[v12];
    v14 = v4[1].m128i_u32[2];
    v15 = (__m128i *)v13->m128i_i64[0];
    if ( !*(_WORD *)(v13->m128i_i64[0] + 4) )
      break;
    if ( 3 * (int)v14 < (unsigned int)(4 * (v4[1].m128i_i32[3] + v4[2].m128i_i32[0])) )
    {
      v226 = 2 * v14;
      v63 = 16LL * (unsigned int)(2 * v14);
      v160 = (__m128i *)sub_186B270(v63);
      v161 = v226;
      v61 = v160;
      v162 = &v160[v63 / 0x10];
      if ( v226 )
      {
        if ( (v63 & 0x10) == 0 || (*v160 = 0, ++v160, v160 != v162) )
        {
          do
          {
            *v160 = 0;
            v160 += 2;
            v160[-1] = 0;
          }
          while ( v160 != v162 );
        }
      }
      v163 = (const __m128i *)v4[1].m128i_i64[0];
      v62 = v226 - 1;
      v64 = v162;
      v164 = (__m128i *)&v163[v4[1].m128i_u32[2]];
      if ( v163 != v164 )
      {
        do
        {
          if ( v163->m128i_i64[0] > 1uLL )
          {
            v165 = 16LL * (*(_DWORD *)(v163->m128i_i64[0] + 12) & v62);
            v166 = &v61[(unsigned __int64)v165 / 0x10];
            if ( v63 == v165 )
            {
LABEL_259:
              if ( v61 == v166 )
              {
LABEL_276:
                sub_1872CE0("");
                sub_1873130(114, 213);
              }
              v167 = v61;
              while ( v167->m128i_i64[0] )
              {
                if ( v166 == ++v167 )
                  goto LABEL_276;
              }
            }
            else
            {
              v167 = &v61[(unsigned __int64)v165 / 0x10];
              while ( v167->m128i_i64[0] )
              {
                if ( v162 == ++v167 )
                  goto LABEL_259;
              }
            }
            *v167 = _mm_loadu_si128(v163);
          }
          ++v163;
        }
        while ( v164 != v163 );
        v164 = (__m128i *)v4[1].m128i_i64[0];
      }
      if ( v164 )
      {
        LODWORD(s) = v226;
        *(_QWORD *)v228 = v162;
        sub_186B220(v164);
        v161 = v226;
        v64 = *(__m128i **)v228;
        v62 = v226 - 1;
      }
      v4[1].m128i_i64[0] = (__int64)v61;
      v4[1].m128i_i32[2] = v161;
      v4[2].m128i_i32[0] = 0;
    }
    else
    {
      v61 = (__m128i *)v4[1].m128i_i64[0];
      v62 = v14 - 1;
      v63 = 16LL * (unsigned int)v14;
      v64 = &v61[v63 / 0x10];
    }
    a2 = v15->m128i_u32[3];
    v65 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v15, (__m128i)(unsigned __int64)v15);
    v66 = 16LL * ((unsigned int)a2 & v62);
    v67 = &v61[(unsigned __int64)v66 / 0x10];
    if ( v66 != v63 )
    {
      v68 = &v61[(unsigned __int64)v66 / 0x10];
      v69 = nullptr;
      while ( 1 )
      {
        v70 = (__m128i *)v68->m128i_i64[0];
        if ( v68->m128i_i64[0] > 1uLL )
        {
          if ( v70->m128i_i32[3] == (_DWORD)a2 && v15 == v70 )
          {
            *v68 = v65;
            goto LABEL_245;
          }
        }
        else
        {
          if ( !v70 )
          {
            if ( v69 )
              goto LABEL_269;
            v69 = v68;
            goto LABEL_270;
          }
          v69 = v68;
        }
        if ( ++v68 == v64 )
          goto LABEL_88;
      }
    }
    v69 = nullptr;
    while ( 1 )
    {
LABEL_88:
      if ( v67 == v61 )
      {
        sub_1872CE0("");
        sub_1873130(114, 405);
      }
      v71 = (__m128i *)v61->m128i_i64[0];
      if ( v61->m128i_i64[0] <= 1uLL )
        break;
      if ( v71->m128i_i32[3] == (_DWORD)a2 && v15 == v71 )
      {
        *v61 = v65;
        goto LABEL_245;
      }
LABEL_87:
      ++v61;
    }
    if ( v71 )
    {
      v69 = v61;
      goto LABEL_87;
    }
    if ( v69 )
LABEL_269:
      --v4[2].m128i_i32[0];
    else
      v69 = v61;
LABEL_270:
    *v69 = v65;
    ++v4[1].m128i_i32[3];
LABEL_245:
    a1 = (__m128i *)v4[5].m128i_i64[0];
    --a1[-1].m128i_i32[3];
LABEL_74:
    v8 = a1[-1].m128i_i32[3];
  }
  a2 = v15->m128i_u32[3];
  v16 = v14 - 1;
  v17 = (__m128i **)v4[1].m128i_i64[0];
  v18 = 2LL * ((unsigned int)a2 & ((_DWORD)v14 - 1));
  v19 = &v17[v18];
  if ( v18 != 2 * v14 )
  {
    for ( i = &v17[v18]; &v17[2 * v14] != i; i += 2 )
    {
      v21 = *i;
      if ( (unsigned __int64)*i > 1 )
      {
        if ( v21->m128i_i32[3] == (_DWORD)a2 && v15 == v21 )
        {
LABEL_73:
          --a1[-1].m128i_i32[3];
          goto LABEL_74;
        }
      }
      else if ( !v21 )
      {
        goto LABEL_17;
      }
    }
  }
  if ( v17 != v19 )
  {
    for ( j = (__m128i **)v4[1].m128i_i64[0]; v19 != j; j += 2 )
    {
      v60 = *j;
      if ( (unsigned __int64)*j > 1 )
      {
        if ( v60->m128i_i32[3] == (_DWORD)a2 && v15 == v60 )
          goto LABEL_73;
      }
      else if ( !v60 )
      {
        break;
      }
    }
  }
LABEL_17:
  v22 = v13->m128i_i8[8];
  if ( v22 )
  {
    v72 = v15[1].m128i_i32[2];
    v13->m128i_i8[8] = 0;
    if ( v72 )
    {
      v73 = &v15[1].m128i_i8[8];
      a2 = (__int64)&v15[2].m128i_i64[v72 - 1];
      while ( 1 )
      {
        v74 = *(__m128i **)a2;
        v75 = 16 * v14;
        v76 = *(_DWORD *)(*(_QWORD *)a2 + 12LL);
        v77 = 16LL * (v76 & v16);
        v78 = &v17[(unsigned __int64)v77 / 8];
        if ( v77 == v75 )
          goto LABEL_110;
        v79 = &v17[(unsigned __int64)v77 / 8];
        do
        {
          v80 = *v79;
          if ( (unsigned __int64)*v79 > 1 )
          {
            if ( v80->m128i_i32[3] == v76 && v74 == v80 )
              goto LABEL_105;
          }
          else if ( !v80 )
          {
            goto LABEL_101;
          }
          v79 += 2;
        }
        while ( &v17[(unsigned __int64)v75 / 8] != v79 );
LABEL_110:
        while ( v78 != v17 )
        {
          v86 = *v17;
          if ( (unsigned __int64)*v17 > 1 )
          {
            if ( v86->m128i_i32[3] == v76 && v74 == v86 )
              goto LABEL_105;
          }
          else if ( !v86 )
          {
            break;
          }
          v17 += 2;
        }
LABEL_101:
        v81 = (__m128i *)v4[5].m128i_i64[0];
        if ( v81 )
        {
          v82 = v81[-1].m128i_u32[3];
          if ( v82 == v81[-1].m128i_i32[2] )
          {
            v124 = (3 * v82 + 1) >> 1;
            v125 = 16 * v124 + 8;
            if ( 16 * v82 + 8 >= v125 || v82 >= v124 )
            {
              v218 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v247, "Overflow encountered when expanding vector");
              *v218 = (char *)off_1C63128;
              sub_2333C0(v218 + 1, v247);
              sub_233E40((__int64)v247);
              __cxa_throw(v218, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v228[0] = a2;
            *(_QWORD *)v225 = v73;
            v126 = sub_186B270(v125);
            v127 = v4[5].m128i_i64[0];
            v73 = *(char **)v225;
            v128 = (_DWORD *)v126;
            v81 = (__m128i *)(v126 + 8);
            if ( v127 )
            {
              v129 = *(unsigned int *)(v127 - 4);
              *(_DWORD *)(v126 + 4) = v129;
              v130 = 0;
              v131 = 16 * v129;
              if ( v131 )
              {
                do
                {
                  *(__m128i *)&v128[v130 / 4 + 2] = _mm_loadu_si128((const __m128i *)(v127 + v130));
                  v130 += 16LL;
                }
                while ( v131 != v130 );
              }
              s = (__int64)v128;
              *(_QWORD *)v228 = v81;
              sub_186B220((void *)(v127 - 8));
              v128 = (_DWORD *)s;
              v81 = *(__m128i **)v228;
              v73 = *(char **)v225;
              m128i_i64 = *(_QWORD *)v228 + 16LL * *(unsigned int *)(s + 4);
              v84 = *(_DWORD *)(s + 4) + 1;
            }
            else
            {
              *(_DWORD *)(v126 + 4) = 0;
              m128i_i64 = v126 + 8;
              v84 = 1;
            }
            v4[5].m128i_i64[0] = (__int64)v81;
            *v128 = v124;
          }
          else
          {
            v83 = v82;
            v84 = v82 + 1;
            m128i_i64 = (__int64)v81[v83].m128i_i64;
          }
        }
        else
        {
          v228[0] = a2;
          *(_QWORD *)v227 = v73;
          v185 = (_QWORD *)sub_186B270(0x28u);
          v73 = *(char **)v227;
          *v185 = 2;
          v81 = (__m128i *)(v185 + 1);
          v84 = 1;
          v4[5].m128i_i64[0] = (__int64)v81;
          m128i_i64 = (__int64)v81;
        }
        *(_QWORD *)m128i_i64 = v74;
        v22 = 0;
        *(_BYTE *)(m128i_i64 + 8) = 1;
        v81[-1].m128i_i32[3] = v84;
LABEL_105:
        a2 -= 8;
        if ( v73 == (char *)a2 )
          break;
        v14 = v4[1].m128i_u32[2];
        v17 = (__m128i **)v4[1].m128i_i64[0];
        v16 = v14 - 1;
      }
      if ( !v22 )
      {
        a1 = (__m128i *)v4[5].m128i_i64[0];
        goto LABEL_32;
      }
      goto LABEL_18;
    }
    if ( v10 )
    {
LABEL_19:
      *((_DWORD *)v10 - 1) = 0;
      goto LABEL_20;
    }
    *(_QWORD *)v222 = v4->m128i_i64[0];
LABEL_322:
    v186 = *(_DWORD **)(v15[1].m128i_i64[0] + 24);
    if ( v186 && !*v186 && v186[1] == 4 )
    {
      v233 = sub_15D2CB0(*(_QWORD *)v222, v15) ^ 1;
      *(_QWORD *)v222 = v4->m128i_i64[0];
      goto LABEL_176;
    }
LABEL_324:
    ++v15->m128i_i32[2];
    v103 = v15;
    goto LABEL_134;
  }
LABEL_18:
  if ( v10 )
    goto LABEL_19;
LABEL_20:
  v23 = v15[1].m128i_u32[2];
  v237 = v23;
  if ( !(_DWORD)v23 )
  {
    *(_QWORD *)v222 = v4->m128i_i64[0];
    if ( v15->m128i_i16[2] )
      goto LABEL_324;
    goto LABEL_322;
  }
  v233 = 0;
  v24 = v15;
  v25 = (__int64)&v15->m128i_i64[v23];
  v26 = 0;
  do
  {
    v27 = v24[2].m128i_i64[0];
    v28 = v4[1].m128i_u32[2];
    v29 = (__int64 *)v4[1].m128i_i64[0];
    v30 = *(_DWORD *)(v27 + 12);
    v31 = v28 - 1;
    v28 *= 16;
    v32 = (__int64 *)((char *)v29 + v28);
    v33 = 16LL * (v30 & v31);
    v34 = &v29[(unsigned __int64)v33 / 8];
    if ( v33 == v28 )
    {
LABEL_159:
      while ( v34 != v29 )
      {
        v118 = *v29;
        if ( (unsigned __int64)*v29 > 1 )
        {
          if ( *(_DWORD *)(v118 + 12) == v30 && v27 == v118 )
          {
            v35 = v29;
            goto LABEL_115;
          }
        }
        else if ( !v118 )
        {
          break;
        }
        v29 += 2;
      }
LABEL_29:
      BUG();
    }
    v35 = &v29[(unsigned __int64)v33 / 8];
    while ( 1 )
    {
      v36 = *v35;
      if ( (unsigned __int64)*v35 > 1 )
        break;
      if ( !v36 )
        goto LABEL_29;
LABEL_26:
      v35 += 2;
      if ( v32 == v35 )
        goto LABEL_159;
    }
    if ( *(_DWORD *)(v36 + 12) != v30 || v27 != v36 )
      goto LABEL_26;
LABEL_115:
    v87 = v35[1];
    v88 = v4[4].m128i_u32[0];
    v89 = (__int64 *)v4[3].m128i_i64[1];
    v48 = v87 == v27;
    v90 = *(_DWORD *)(v87 + 12);
    v91 = v88 - 1;
    LOBYTE(v35) = !v48;
    v88 *= 8;
    v26 |= (unsigned int)v35;
    v92 = (__int64 *)((char *)v89 + v88);
    v93 = 8LL * (v90 & v91);
    v94 = &v89[(unsigned __int64)v93 / 8];
    v95 = &v89[(unsigned __int64)v93 / 8];
    if ( v93 != v88 )
    {
      do
      {
        v96 = *v95;
        if ( (unsigned __int64)*v95 > 1 )
        {
          if ( v87 == v96 && *(_DWORD *)(v96 + 12) == v90 )
          {
            v233 = v87 == v96 && *(_DWORD *)(v96 + 12) == v90;
LABEL_121:
            if ( !v10 )
              goto LABEL_158;
LABEL_122:
            v97 = *((_DWORD *)v10 - 1);
            if ( v97 == *((_DWORD *)v10 - 2) )
            {
              v119 = (3 * v97 + 1) >> 1;
              v120 = 8 * v119 + 8;
              if ( 8 * v97 + 8 >= (unsigned int)v120 || v97 >= v119 )
              {
                v215 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v247, "Overflow encountered when expanding vector");
                *v215 = (char *)off_1C63128;
                sub_2333C0(v215 + 1, v247);
                sub_233E40((__int64)v247);
                __cxa_throw(v215, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              s = v25;
              v228[0] = (3 * v97 + 1) >> 1;
              v224 = v26;
              v121 = sub_186B300(v10 - 1, v120);
              v10 = (_QWORD *)(v121 + 8);
              v26 = v224;
              v25 = s;
              *(_DWORD *)v121 = v228[0];
              LODWORD(v121) = *(_DWORD *)(v121 + 4);
              v100 = &v10[(unsigned int)v121];
              v99 = v121 + 1;
            }
            else
            {
              v98 = v97;
              v99 = v97 + 1;
              v100 = &v10[v98];
            }
            goto LABEL_124;
          }
        }
        else if ( !v96 )
        {
          goto LABEL_121;
        }
        ++v95;
      }
      while ( v92 != v95 );
    }
    if ( v89 == v94 )
      goto LABEL_121;
    while ( 2 )
    {
      v116 = *v89;
      if ( (unsigned __int64)*v89 > 1 )
      {
        if ( v87 == v116 && *(_DWORD *)(v116 + 12) == v90 )
        {
          v233 = v87 == v116 && *(_DWORD *)(v116 + 12) == v90;
          goto LABEL_121;
        }
LABEL_154:
        if ( v94 == ++v89 )
          goto LABEL_121;
        continue;
      }
      break;
    }
    if ( v116 )
      goto LABEL_154;
    if ( v10 )
      goto LABEL_122;
LABEL_158:
    *(_QWORD *)v228 = v25;
    v223 = v26;
    v117 = (_QWORD *)sub_186B270(0x18u);
    v10 = v117 + 1;
    v26 = v223;
    v25 = *(_QWORD *)v228;
    *v117 = 2;
    v100 = v117 + 1;
    v99 = 1;
LABEL_124:
    v24 = (__m128i *)((char *)v24 + 8);
    *v100 = v87;
    *((_DWORD *)v10 - 1) = v99;
  }
  while ( v24 != (__m128i *)v25 );
  *(_QWORD *)v222 = v4->m128i_i64[0];
  if ( !v15->m128i_i16[2] )
  {
    v101 = *(_DWORD **)(v15[1].m128i_i64[0] + 24);
    if ( v101 )
    {
      if ( !*v101 && v101[1] == 4 )
      {
        LOBYTE(v228[0]) = v26;
        v233 |= sub_15D2CB0(*(_QWORD *)v222, v15) ^ 1;
        v26 = LOBYTE(v228[0]);
        *(_QWORD *)v222 = v4->m128i_i64[0];
      }
    }
  }
  if ( !(_BYTE)v26 )
  {
LABEL_176:
    ++v15->m128i_i32[2];
    v103 = v15;
    goto LABEL_133;
  }
  v102 = sub_15DC610(
           v222[0],
           v15[1].m128i_i64[0],
           v237,
           (int)v10,
           v26,
           v25,
           v220,
           (int)v221,
           v222[0],
           v228[0],
           s,
           v233,
           v237,
           (int)v242,
           (int)v243,
           v244);
  v103 = (__m128i *)v102;
  if ( v102 )
    ++*(_DWORD *)(v102 + 8);
LABEL_133:
  if ( !v233 )
    goto LABEL_134;
  if ( !(unsigned __int8)sub_15D2CB0(v4->m128i_i64[0], v103)
    || v103->m128i_i16[2]
    || (v148 = *(_DWORD **)(v103[1].m128i_i64[0] + 24)) != nullptr
    && !*v148
    && ((unsigned int)(v148[1] - 2) > 1 || (unsigned __int8)sub_15D2CB0(v4->m128i_i64[0], v103[2].m128i_i64[0])) )
  {
    v149 = v4[4].m128i_u32[0];
    v150 = v4[4].m128i_i32[2];
    LODWORD(s) = 2 * v149;
    if ( 3 * (int)v149 < (unsigned int)(4 * (v150 + v4[4].m128i_i32[1])) )
    {
      v229 = 8LL * (unsigned int)s;
      v178 = (__m128i **)sub_186B270(v229);
      v151 = v178;
      if ( (_DWORD)s )
        memset(v178, 0, 8LL * (unsigned int)s);
      v179 = (char *)v4[3].m128i_i64[1];
      v234 = s - 1;
      v180 = &v179[8 * v4[4].m128i_u32[0]];
      v152 = &v151[v229 / 8];
      if ( v179 != v180 )
      {
        do
        {
          if ( *(_QWORD *)v179 > 1u )
          {
            v181 = 8LL * (*(_DWORD *)(*(_QWORD *)v179 + 12LL) & v234);
            v182 = &v151[(unsigned __int64)v181 / 8];
            if ( v229 == v181 )
            {
LABEL_307:
              if ( v151 == v182 )
              {
LABEL_335:
                sub_1872CE0("");
                sub_1873130(114, 213);
              }
              v183 = v151;
              while ( *v183 )
              {
                if ( v182 == ++v183 )
                  goto LABEL_335;
              }
            }
            else
            {
              v183 = &v151[(unsigned __int64)v181 / 8];
              while ( *v183 )
              {
                if ( v152 == ++v183 )
                  goto LABEL_307;
              }
            }
            *v183 = *(__m128i **)v179;
          }
          v179 += 8;
        }
        while ( v180 != v179 );
        v180 = (char *)v4[3].m128i_i64[1];
      }
      if ( v180 )
      {
        sub_186B220(v180);
        v152 = &v151[v229 / 8];
      }
      v4[3].m128i_i64[1] = (__int64)v151;
      v150 = 0;
      v4[4].m128i_i32[2] = 0;
      v4[4].m128i_i32[0] = s;
    }
    else
    {
      v151 = (__m128i **)v4[3].m128i_i64[1];
      v234 = v149 - 1;
      v229 = 8 * v149;
      v152 = &v151[v149];
    }
    v153 = v103->m128i_i32[3];
    v154 = 8LL * (v153 & v234);
    v155 = &v151[(unsigned __int64)v154 / 8];
    if ( v154 != v229 )
    {
      v156 = &v151[(unsigned __int64)v154 / 8];
      v157 = nullptr;
      while ( 1 )
      {
        v158 = *v156;
        if ( (unsigned __int64)*v156 > 1 )
        {
          if ( v158->m128i_i32[3] == v153 && v158 == v103 )
          {
            *v156 = v103;
            goto LABEL_134;
          }
        }
        else
        {
          if ( !v158 )
          {
            if ( v157 )
              goto LABEL_326;
            v157 = v156;
            goto LABEL_327;
          }
          v157 = v156;
        }
        if ( ++v156 == v152 )
          goto LABEL_237;
      }
    }
    v157 = nullptr;
    while ( 1 )
    {
LABEL_237:
      if ( v155 == v151 )
      {
        sub_1872CE0("");
        sub_1873130(114, 405);
      }
      v159 = *v151;
      if ( (unsigned __int64)*v151 > 1 )
      {
        if ( v159->m128i_i32[3] == v153 && v159 == v103 )
        {
          *v151 = v103;
          goto LABEL_134;
        }
      }
      else
      {
        if ( !v159 )
        {
          if ( v157 )
LABEL_326:
            v4[4].m128i_i32[2] = v150 - 1;
          else
            v157 = v151;
LABEL_327:
          *v157 = v103;
          ++v4[4].m128i_i32[1];
          goto LABEL_134;
        }
        v157 = v151;
      }
      ++v151;
    }
  }
  *(_QWORD *)v230 = v4->m128i_i64[0];
  v168 = v4[4].m128i_u32[0];
  v235 = 2 * v168;
  if ( 3 * (int)v168 < (unsigned int)(4 * (v4[4].m128i_i32[1] + v4[4].m128i_i32[2])) )
  {
    s = 8LL * v235;
    v199 = (__m128i **)sub_186B270(s);
    v169 = v199;
    if ( v235 )
      memset(v199, 0, 8LL * v235);
    v200 = (char *)v4[3].m128i_i64[1];
    v201 = v200;
    v239 = v235 - 1;
    v170 = (__m128i **)((char *)v169 + s);
    v242 = &v200[8 * v4[4].m128i_u32[0]];
    if ( v200 != v242 )
    {
      do
      {
        if ( *(_QWORD *)v201 > 1u )
        {
          v202 = 8LL * (*(_DWORD *)(*(_QWORD *)v201 + 12LL) & v239);
          v203 = &v169[(unsigned __int64)v202 / 8];
          if ( s == v202 )
          {
LABEL_372:
            if ( v169 == v203 )
            {
LABEL_383:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v204 = v169;
            while ( *v204 )
            {
              if ( v203 == ++v204 )
                goto LABEL_383;
            }
          }
          else
          {
            v204 = &v169[(unsigned __int64)v202 / 8];
            while ( *v204 )
            {
              if ( v170 == ++v204 )
                goto LABEL_372;
            }
          }
          *v204 = *(__m128i **)v201;
        }
        v201 += 8;
      }
      while ( v242 != v201 );
      v200 = (char *)v4[3].m128i_i64[1];
    }
    if ( v200 )
    {
      LODWORD(v242) = (_DWORD)v169 + s;
      sub_186B220(v200);
      v170 = (__m128i **)((char *)v169 + s);
    }
    v4[3].m128i_i64[1] = (__int64)v169;
    v4[4].m128i_i32[2] = 0;
    v4[4].m128i_i32[0] = v235;
  }
  else
  {
    v169 = (__m128i **)v4[3].m128i_i64[1];
    v239 = v168 - 1;
    s = 8 * v168;
    v170 = &v169[v168];
  }
  v171 = v103->m128i_i32[3];
  v172 = 8LL * (v171 & v239);
  v173 = &v169[(unsigned __int64)v172 / 8];
  if ( v172 != s )
  {
    v174 = &v169[(unsigned __int64)v172 / 8];
    v175 = nullptr;
    while ( 1 )
    {
      v176 = *v174;
      if ( (unsigned __int64)*v174 > 1 )
      {
        if ( v176->m128i_i32[3] == v171 && v176 == v103 )
        {
          *v174 = v103;
          goto LABEL_337;
        }
      }
      else
      {
        if ( !v176 )
        {
          if ( v175 )
            --v4[4].m128i_i32[2];
          else
            v175 = v174;
          *v175 = v103;
          ++v4[4].m128i_i32[1];
          goto LABEL_337;
        }
        v175 = v174;
      }
      if ( ++v174 == v170 )
        goto LABEL_292;
    }
  }
  v175 = nullptr;
LABEL_292:
  while ( 2 )
  {
    if ( v173 == v169 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v177 = *v169;
    if ( (unsigned __int64)*v169 > 1 )
    {
      if ( v177->m128i_i32[3] == v171 && v177 == v103 )
      {
        *v169 = v103;
        goto LABEL_337;
      }
      goto LABEL_291;
    }
    if ( v177 )
    {
      v175 = v169;
LABEL_291:
      ++v169;
      continue;
    }
    break;
  }
  if ( v175 )
  {
    --v4[4].m128i_i32[2];
    v169 = v175;
  }
  *v169 = v103;
  ++v4[4].m128i_i32[1];
LABEL_337:
  v245 = 0;
  v246 = *(_QWORD *)v230;
  sub_D3B030(v4, v103, (__m128i **)&v245);
  v187 = v103->m128i_i32[3];
  v188 = (_QWORD *)v4[3].m128i_i64[1];
  v189 = v245;
  *(_QWORD *)v231 = v246;
  v190 = v4[4].m128i_u32[0];
  v191 = v190 - 1;
  v190 *= 8;
  v192 = (_QWORD *)((char *)v188 + v190);
  v193 = 8LL * (v187 & v191);
  v194 = &v188[(unsigned __int64)v193 / 8];
  if ( v193 != v190 )
  {
    for ( k = &v188[(unsigned __int64)v193 / 8]; v192 != k; ++k )
    {
      v196 = (__m128i *)*k;
      if ( *k > 1u )
      {
        if ( v196->m128i_i32[3] == v187 && v196 == v103 )
        {
LABEL_391:
          if ( v192 != k + 1 )
            v188 = k + 1;
          v205 = v4[4].m128i_i32[1] - 1;
          if ( *v188 )
          {
            *k = 1;
            v206 = v4[4].m128i_i32[2];
            v4[4].m128i_i32[1] = v205;
            v207 = v206 + 1;
            if ( v205 < 0x40 )
              v205 = 64;
            v4[4].m128i_i32[2] = v207;
            if ( v205 < v207 && !(unsigned __int8)sub_186AF10(v194) )
            {
              v240 = v4[4].m128i_u32[0];
              v208 = (void *)sub_186B270(8LL * v240);
              s = (__int64)v208;
              if ( v240 )
                memset(v208, 0, 8LL * v240);
              v209 = v4[4].m128i_u32[0];
              v210 = (char *)v4[3].m128i_i64[1];
              v211 = v210;
              v236 = v209 - 1;
              *(_QWORD *)v241 = 8 * v209;
              v242 = &v210[8 * v209];
              v243 = (_QWORD *)(s + 8 * v209);
              if ( v210 != v242 )
              {
                do
                {
                  if ( *(_QWORD *)v211 > 1u )
                  {
                    v212 = 8LL * (*(_DWORD *)(*(_QWORD *)v211 + 12LL) & v236);
                    v213 = (_QWORD *)(s + v212);
                    if ( *(_QWORD *)v241 == v212 )
                    {
LABEL_422:
                      if ( (_QWORD *)s == v213 )
                      {
LABEL_427:
                        sub_1872CE0("");
                        sub_1873130(114, 213);
                      }
                      v214 = (_QWORD *)s;
                      while ( *v214 )
                      {
                        if ( v213 == ++v214 )
                          goto LABEL_427;
                      }
                    }
                    else
                    {
                      v214 = (_QWORD *)(s + v212);
                      while ( *v214 )
                      {
                        if ( v243 == ++v214 )
                          goto LABEL_422;
                      }
                    }
                    *v214 = *(_QWORD *)v211;
                  }
                  v211 += 8;
                }
                while ( v242 != v211 );
                v210 = (char *)v4[3].m128i_i64[1];
              }
              if ( v210 )
                sub_186B220(v210);
              v4[4].m128i_i32[2] = 0;
              v4[3].m128i_i64[1] = s;
            }
          }
          else
          {
            *k = 0;
            v4[4].m128i_i32[1] = v205;
          }
          goto LABEL_344;
        }
      }
      else if ( !v196 )
      {
        goto LABEL_344;
      }
    }
  }
  if ( v188 != v194 )
  {
    for ( k = (_QWORD *)v4[3].m128i_i64[1]; v194 != k; ++k )
    {
      v198 = (__m128i *)*k;
      if ( *k > 1u )
      {
        if ( v198->m128i_i32[3] == v187 && v198 == v103 )
          goto LABEL_391;
      }
      else if ( !v198 )
      {
        break;
      }
    }
  }
LABEL_344:
  if ( (__m128i *)v189 == v103 )
  {
    v197 = *(_DWORD *)(v189 + 8) - 1;
    goto LABEL_349;
  }
  v48 = v103->m128i_i32[2]-- == 1;
  if ( v48 )
    sub_15D7BC0(*(_QWORD *)v222, v103);
  if ( v189 )
  {
    v197 = *(_DWORD *)(v189 + 8);
LABEL_349:
    *(_DWORD *)(v189 + 8) = v197;
    if ( !v197 )
      sub_15D7BC0(*(_QWORD *)v231, v189);
  }
  v103 = (__m128i *)v189;
LABEL_134:
  v104 = v4[1].m128i_u32[2];
  v228[0] = 2 * v104;
  if ( 3 * v104 < 4 * (v4[1].m128i_i32[3] + v4[2].m128i_i32[0]) )
  {
    s = 16LL * (unsigned int)v228[0];
    v141 = (__m128i *)sub_186B270(s);
    v107 = s;
    v105 = v141;
    v142 = (__m128i *)((char *)v141 + s);
    if ( v228[0] )
    {
      if ( (s & 0x10) == 0 || (*v141 = 0, ++v141, v142 != v141) )
      {
        do
        {
          *v141 = 0;
          v141 += 2;
          v141[-1] = 0;
        }
        while ( v142 != v141 );
      }
    }
    v143 = (const __m128i *)v4[1].m128i_i64[0];
    v144 = (__m128i *)&v143[v4[1].m128i_u32[2]];
    v106 = v228[0] - 1;
    v108 = v142;
    if ( v143 != v144 )
    {
      do
      {
        if ( v143->m128i_i64[0] > 1uLL )
        {
          v145 = 16LL * (*(_DWORD *)(v143->m128i_i64[0] + 12) & (unsigned int)v106);
          v146 = &v105[(unsigned __int64)v145 / 0x10];
          if ( s == v145 )
          {
LABEL_210:
            if ( v105 == v146 )
            {
LABEL_271:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v147 = v105;
            while ( v147->m128i_i64[0] )
            {
              if ( v146 == ++v147 )
                goto LABEL_271;
            }
          }
          else
          {
            v147 = &v105[(unsigned __int64)v145 / 0x10];
            while ( v147->m128i_i64[0] )
            {
              if ( v142 == ++v147 )
                goto LABEL_210;
            }
          }
          *v147 = _mm_loadu_si128(v143);
        }
        ++v143;
      }
      while ( v144 != v143 );
      v144 = (__m128i *)v4[1].m128i_i64[0];
    }
    if ( v144 )
    {
      *(_QWORD *)v238 = v142;
      LODWORD(s) = v228[0] - 1;
      sub_186B220(v144);
      v108 = *(__m128i **)v238;
      v107 = 16LL * (unsigned int)v228[0];
      v106 = v228[0] - 1;
    }
    v4[1].m128i_i64[0] = (__int64)v105;
    v4[2].m128i_i32[0] = 0;
    v4[1].m128i_i32[2] = v228[0];
  }
  else
  {
    v105 = (__m128i *)v4[1].m128i_i64[0];
    v106 = v104 - 1;
    v107 = 16LL * v104;
    v108 = (__m128i *)((char *)v105 + v107);
  }
  a2 = v15->m128i_u32[3];
  v109 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v15, (__m128i)(unsigned __int64)v103);
  v110 = 16LL * ((unsigned int)a2 & v106);
  v111 = &v105[(unsigned __int64)v110 / 0x10];
  if ( v110 != v107 )
  {
    v112 = &v105[(unsigned __int64)v110 / 0x10];
    v113 = nullptr;
    while ( 1 )
    {
      v114 = (__m128i *)v112->m128i_i64[0];
      if ( v112->m128i_i64[0] > 1uLL )
      {
        if ( v114->m128i_i32[3] == (_DWORD)a2 && v15 == v114 )
        {
          *v112 = v109;
          goto LABEL_185;
        }
      }
      else
      {
        if ( !v114 )
        {
          if ( v113 )
            goto LABEL_242;
          v113 = v112;
          goto LABEL_243;
        }
        v113 = v112;
      }
      if ( ++v112 == v108 )
        goto LABEL_147;
    }
  }
  v113 = nullptr;
LABEL_147:
  while ( 2 )
  {
    if ( v111 == v105 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v115 = (__m128i *)v105->m128i_i64[0];
    if ( v105->m128i_i64[0] > 1uLL )
    {
      if ( v115->m128i_i32[3] == (_DWORD)a2 && v15 == v115 )
      {
        *v105 = v109;
        goto LABEL_185;
      }
      goto LABEL_146;
    }
    if ( v115 )
    {
      v113 = v105;
LABEL_146:
      ++v105;
      continue;
    }
    break;
  }
  if ( v113 )
LABEL_242:
    --v4[2].m128i_i32[0];
  else
    v113 = v105;
LABEL_243:
  *v113 = v109;
  ++v4[1].m128i_i32[3];
LABEL_185:
  if ( v103 )
    ++v103->m128i_i32[2];
  v132 = (_QWORD *)v4[3].m128i_i64[0];
  if ( v132 )
  {
    v133 = *((_DWORD *)v132 - 1);
    if ( v133 == *((_DWORD *)v132 - 2) )
    {
      v137 = (3 * v133 + 1) >> 1;
      v138 = 8 * v137 + 8;
      if ( 8 * v133 + 8 >= v138 || v133 >= v137 )
      {
        v217 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v247, "Overflow encountered when expanding vector");
        *v217 = (char *)off_1C63128;
        sub_2333C0(v217 + 1, v247);
        sub_233E40((__int64)v247);
        __cxa_throw(v217, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      a2 = v138;
      v139 = (unsigned int *)sub_186B300(v132 - 1, v138);
      v140 = v139[1];
      v132 = v139 + 2;
      *v139 = v137;
      v4[3].m128i_i64[0] = (__int64)(v139 + 2);
      LODWORD(v139) = v140;
      v136 = (__m128i **)&v132[v140];
      v135 = (_DWORD)v139 + 1;
    }
    else
    {
      v134 = v133;
      v135 = v133 + 1;
      v136 = (__m128i **)&v132[v134];
    }
  }
  else
  {
    v184 = (_QWORD *)sub_186B270(0x18u);
    *v184 = 2;
    v135 = 1;
    v132 = v184 + 1;
    v4[3].m128i_i64[0] = (__int64)v132;
    v136 = (__m128i **)v132;
  }
  a1 = (__m128i *)v4[5].m128i_i64[0];
  *v136 = v103;
  *((_DWORD *)v132 - 1) = v135;
  --a1[-1].m128i_i32[3];
  if ( !v103 )
    goto LABEL_74;
  v48 = v103->m128i_i32[2]-- == 1;
  if ( !v48 )
    goto LABEL_74;
  a2 = (__int64)v103;
  sub_15D7BC0(*(_QWORD *)v222, v103);
  a1 = (__m128i *)v4[5].m128i_i64[0];
LABEL_32:
  if ( a1 )
    goto LABEL_74;
LABEL_33:
  v37 = v4[1].m128i_u32[2];
  v38 = *(_DWORD *)(v3 + 12);
  v39 = (_Unwind_Exception_Class *)v4[1].m128i_i64[0];
  v40 = v37 - 1;
  v37 *= 16;
  v41 = (_Unwind_Exception_Class *)((char *)v39 + v37);
  v42 = 16LL * (v38 & v40);
  v43 = &v39[(unsigned __int64)v42 / 8];
  if ( v42 != v37 )
  {
    for ( m = &v39[(unsigned __int64)v42 / 8]; v41 != m; m += 2 )
    {
      v45 = *m;
      if ( *m > 1 )
      {
        if ( *(_DWORD *)(v45 + 12) == v38 && v3 == v45 )
          goto LABEL_47;
      }
      else if ( !v45 )
      {
        goto LABEL_40;
      }
    }
  }
  if ( v39 == v43 )
  {
LABEL_57:
    v45 = 0;
  }
  else
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v45 = *v39;
        if ( *v39 > 1 )
          break;
        if ( !v45 )
          goto LABEL_40;
        v39 += 2;
        if ( v43 == v39 )
          goto LABEL_57;
      }
      if ( *(_DWORD *)(v45 + 12) == v38 && v3 == v45 )
        break;
      v39 += 2;
      if ( v43 == v39 )
        goto LABEL_57;
    }
    m = v39;
LABEL_47:
    v45 = m[1];
    if ( v45 )
      ++*(_DWORD *)(v45 + 8);
  }
LABEL_40:
  exception_class = v221->exception_class;
  if ( v221->exception_class )
  {
    exception_cleanup = v221->exception_cleanup;
    v48 = (*(_DWORD *)(exception_class + 8))-- == 1;
    if ( v48 )
      sub_15D7BC0(exception_cleanup, exception_class);
  }
  result = v221;
  v221->exception_class = v45;
  if ( v10 )
    return (struct _Unwind_Exception *)sub_186B220(v10 - 1);
  return result;
}

