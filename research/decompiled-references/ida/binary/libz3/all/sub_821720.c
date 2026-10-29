__int64 __fastcall sub_821720(__int64 a1, __int64 a2)
{
  char **exception; // rbx
  char *v3; // rax
  __int64 v4; // rbx
  unsigned int v5; // eax
  __int64 v6; // rdx
  unsigned int v7; // ecx
  __int64 v8; // rax
  __int64 v9; // rbp
  _QWORD *v10; // rdx
  unsigned int v11; // eax
  __int64 v12; // rcx
  int v13; // eax
  _QWORD *v14; // rcx
  _QWORD **v15; // rbp
  __int64 v16; // rax
  int v17; // eax
  _QWORD *v18; // r12
  __int64 v19; // rax
  __int64 v20; // r13
  int v21; // eax
  int *v22; // rdx
  int v23; // ecx
  __int64 v24; // rcx
  int **v25; // r9
  __m128i v26; // xmm1
  __m128 *v27; // r13
  __int32 v28; // r11d
  __int64 v29; // rcx
  __m128 *v30; // r14
  int v31; // esi
  __int64 v32; // r11
  __m128 *v33; // rdi
  __m128 *v34; // rax
  __m128 *v35; // r10
  int **v36; // rdx
  int **v38; // rax
  __m128 *v39; // rax
  __int32 v40; // edx
  __m128 *v41; // r10
  const __m128i *v42; // r15
  __int64 v43; // rdi
  __m128i *v44; // r8
  __int64 v45; // rax
  _QWORD **v46; // r14
  const __m128i *v47; // rbp
  __int64 v48; // r8
  __m128i *v49; // rbx
  __int32 v50; // r10d
  __int64 v51; // rdx
  __m128 *v52; // rsi
  __m128i *v53; // rdx
  __m128i v54; // xmm0
  __int64 v55; // rax
  __int64 v56; // rdx
  __int64 *v57; // rax
  __int64 v58; // r13
  int v59; // eax
  _DWORD *v60; // rdx
  _QWORD **v61; // rax
  _QWORD **v62; // r12
  __int64 v63; // rbp
  int v64; // eax
  _DWORD *v65; // rdx
  _QWORD *v66; // r14
  __int64 v67; // rax
  __int64 *v68; // rax
  __int64 v69; // r14
  int v70; // eax
  int v71; // ecx
  int v72; // r8d
  int v73; // r9d
  _DWORD *v74; // rdx
  _QWORD **v75; // r13
  __int64 v76; // r15
  __int64 v77; // rbx
  int v78; // eax
  _DWORD *v79; // rdx
  _QWORD *v80; // r14
  __int64 v81; // rax
  unsigned int v82; // r12d
  unsigned int v83; // ecx
  unsigned int *v84; // rax
  __int64 v85; // rcx
  unsigned int v86; // ecx
  int **v87; // rbx
  __m128i v88; // xmm1
  __m128 *v89; // rbp
  __int32 v90; // r11d
  __int64 v91; // r8
  __m128 *v92; // r12
  int v93; // ecx
  __int64 v94; // r11
  __m128 *v95; // rsi
  __m128 *v96; // rax
  __m128 *v97; // rdi
  int **v98; // rdx
  int **v99; // rax
  __m128 *v100; // rax
  __int32 v101; // edx
  __m128i *v102; // r9
  const __m128i *v103; // rcx
  __int64 v104; // rsi
  __m128i *v105; // r10
  const __m128i *v106; // r12
  __int64 v107; // r10
  __int64 v108; // r15
  int **v109; // r8
  const __m128i *v110; // rbx
  __int64 v111; // rcx
  __int32 v112; // r14d
  __int32 v113; // r11d
  __int64 v114; // rdx
  __m128 *v115; // rsi
  __m128i *v116; // rdx
  _QWORD *v117; // rdx
  __int64 v118; // rax
  __m128i *v119; // rbp
  unsigned int v120; // esi
  __m128i *v121; // r13
  __int32 v122; // r11d
  __int64 v123; // r9
  __m128i *v124; // r15
  int v125; // edi
  __int64 v126; // rax
  __m128i *v127; // r8
  __m128i *v128; // rax
  __m128i *v129; // r9
  __m128i *v130; // rdx
  __m128i *v131; // rax
  __int32 v132; // r15d
  __m128i *v133; // rax
  __m128i *v134; // r10
  __int64 v135; // r8
  __int64 v136; // rsi
  __m128i *v137; // rcx
  __int64 v138; // rdi
  const __m128i *v139; // rbx
  __int64 v140; // rax
  __m128i *v141; // rdx
  __m128i *v142; // rax
  __int32 v143; // eax
  _QWORD **v144; // [rsp+0h] [rbp-F0h]
  __int64 v145; // [rsp+8h] [rbp-E8h]
  __int64 v146; // [rsp+10h] [rbp-E0h] BYREF
  __m128i v147; // [rsp+18h] [rbp-D8h]
  __m128i v148; // [rsp+28h] [rbp-C8h] BYREF
  __m128i v149; // [rsp+38h] [rbp-B8h] BYREF
  __m128i v150; // [rsp+48h] [rbp-A8h] BYREF
  __m128i v151; // [rsp+58h] [rbp-98h] BYREF
  _QWORD **v152; // [rsp+68h] [rbp-88h]
  __m128i *v153; // [rsp+70h] [rbp-80h]
  __m128i *v154; // [rsp+78h] [rbp-78h]
  __int64 v155; // [rsp+80h] [rbp-70h]
  __int64 v156[11]; // [rsp+98h] [rbp-58h] BYREF

  v3 = (char *)(*(_QWORD *)(a2 + 64) + 88LL);
  if ( *(int *)v3 >> 8 == -1 )
    return 0;
  v4 = a1;
  while ( *(_DWORD *)(a1 + 12) != *v3 )
  {
    v3 = *((char **)v3 + 1);
    if ( !v3 )
      return 0;
  }
  v5 = *(int *)v3 >> 8;
  if ( v5 == -1 )
    return 0;
  do
  {
    v6 = v5;
    v7 = v5;
    v5 = *(_DWORD *)(*(_QWORD *)(a1 + 336) + 4LL * v5);
  }
  while ( v7 != v5 );
  v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 312) + 8 * v6) + 8LL);
  v146 = v8;
  if ( !v8 )
    return 0;
  v9 = *(_QWORD *)(v8 + 64);
  v10 = *(_QWORD **)(a1 + 392);
  *(_BYTE *)(v9 + 8) = 1;
  if ( v10 )
  {
    v11 = *((_DWORD *)v10 - 1);
    if ( v11 == *((_DWORD *)v10 - 2) )
    {
      v82 = (3 * v11 + 1) >> 1;
      v83 = 8 * v82 + 8;
      if ( 8 * v11 + 8 >= v83 || v11 >= v82 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v156, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v156);
        sub_233E40((__int64)v156);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v84 = (unsigned int *)sub_186B300(v10 - 1, v83);
      v85 = v84[1];
      v10 = v84 + 2;
      *v84 = v82;
      *(_QWORD *)(a1 + 392) = v84 + 2;
      LODWORD(v84) = v85;
      v14 = &v10[v85];
      v13 = (_DWORD)v84 + 1;
    }
    else
    {
      v12 = v11;
      v13 = v11 + 1;
      v14 = &v10[v12];
    }
  }
  else
  {
    v117 = (_QWORD *)sub_186B270(0x18u);
    *v117 = 2;
    v13 = 1;
    v10 = v117 + 1;
    *(_QWORD *)(a1 + 392) = v10;
    v14 = v10;
  }
  *v14 = v9;
  *((_DWORD *)v10 - 1) = v13;
  v15 = (_QWORD **)(v146 + 176);
  v16 = 8LL * *(unsigned int *)(v146 + 152);
  v144 = (_QWORD **)(v146 + 176 + v16);
  if ( !v16 )
    return 0;
  v145 = a1 + 112;
LABEL_17:
  v18 = *v15;
  v19 = (*v15)[8];
  if ( *(_BYTE *)(v19 + 9) )
    goto LABEL_16;
  if ( *(_BYTE *)(v19 + 8) )
  {
    sub_8214F0(v4, v146, *v15);
    return 1;
  }
  v20 = sub_15D1F10(*v18);
  v21 = sub_15F0200(v145);
  v22 = *(int **)(v20 + 24);
  if ( !v22 )
    goto LABEL_16;
  v23 = *v22;
  if ( v21 == *v22 )
  {
    if ( v22[1] )
      goto LABEL_14;
    v24 = *(unsigned int *)(v4 + 424);
    v25 = (int **)v18[8];
    v26 = (__m128i)_mm_loadh_ps((const double *)&v146);
    if ( 3 * (int)v24 < (unsigned int)(4 * (*(_DWORD *)(v4 + 428) + *(_DWORD *)(v4 + 432))) )
    {
      v149.m128i_i64[0] = v18[8];
      v148.m128i_i32[0] = 2 * v24;
      v147.m128i_i64[0] = 16LL * (unsigned int)(2 * v24);
      v150 = v26;
      v39 = (__m128 *)sub_186B270(v147.m128i_u64[0]);
      v40 = v148.m128i_i32[0];
      v29 = v147.m128i_i64[0];
      v25 = (int **)v149.m128i_i64[0];
      v26 = _mm_load_si128(&v150);
      v27 = v39;
      v41 = (__m128 *)((char *)v39 + v147.m128i_i64[0]);
      if ( v148.m128i_i32[0] )
      {
        if ( (v147.m128i_i8[0] & 0x10) == 0 || (*v39 = 0, ++v39, v41 != v39) )
        {
          do
          {
            *v39 = 0;
            v39 += 2;
            v39[-1] = 0;
          }
          while ( v41 != v39 );
        }
      }
      v42 = *(const __m128i **)(v4 + 416);
      v28 = v40 - 1;
      v30 = v41;
      v43 = *(unsigned int *)(v4 + 424);
      v44 = (__m128i *)&v42[v43];
      if ( v42 != &v42[v43] )
      {
        v45 = (__int64)v41;
        v46 = v15;
        v47 = &v42[v43];
        v48 = v4;
        v49 = (__m128i *)v41;
        v50 = v40;
        do
        {
          while ( v42->m128i_i64[0] <= 1uLL )
          {
            if ( v47 == ++v42 )
              goto LABEL_55;
          }
          v51 = 16LL * (**(_DWORD **)v42->m128i_i64[0] & (unsigned int)v28);
          v52 = &v27[(unsigned __int64)v51 / 0x10];
          if ( v29 == v51 )
          {
LABEL_59:
            if ( v27 == v52 )
            {
LABEL_83:
              LODWORD(v153) = v50;
              v152 = (_QWORD **)v48;
              v151.m128i_i64[0] = v45;
              v150.m128i_i64[0] = v29;
              v149.m128i_i32[0] = v28;
              v148.m128i_i64[0] = (__int64)v25;
              v147 = v26;
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v53 = (__m128i *)v27;
            while ( v53->m128i_i64[0] )
            {
              if ( v52 == (__m128 *)++v53 )
                goto LABEL_83;
            }
          }
          else
          {
            v53 = (__m128i *)&v27[(unsigned __int64)v51 / 0x10];
            while ( v53->m128i_i64[0] )
            {
              if ( v49 == ++v53 )
                goto LABEL_59;
            }
          }
          v54 = _mm_loadu_si128(v42++);
          *v53 = v54;
        }
        while ( v47 != v42 );
LABEL_55:
        v4 = v48;
        v44 = *(__m128i **)(v48 + 416);
        v15 = v46;
        v40 = v50;
        v30 = (__m128 *)v45;
      }
      if ( v44 )
      {
        v151.m128i_i32[0] = v40;
        v150.m128i_i64[0] = v29;
        v149.m128i_i32[0] = v28;
        v147.m128i_i64[0] = (__int64)v25;
        v148 = v26;
        sub_186B220(v44);
        v40 = v151.m128i_i32[0];
        v29 = v150.m128i_i64[0];
        v28 = v149.m128i_i32[0];
        v26 = _mm_load_si128(&v148);
        v25 = (int **)v147.m128i_i64[0];
      }
      *(_QWORD *)(v4 + 416) = v27;
      *(_DWORD *)(v4 + 424) = v40;
      *(_DWORD *)(v4 + 432) = 0;
    }
    else
    {
      v27 = *(__m128 **)(v4 + 416);
      v28 = v24 - 1;
      v29 = 16 * v24;
      v30 = (__m128 *)((char *)v27 + v29);
    }
    v31 = **v25;
    v32 = 16LL * (v31 & (unsigned int)v28);
    v33 = &v27[(unsigned __int64)v32 / 0x10];
    if ( v32 != v29 )
    {
      v34 = &v27[(unsigned __int64)v32 / 0x10];
      v35 = nullptr;
      while ( 1 )
      {
        v36 = (int **)v34->m128_u64[0];
        if ( v34->m128_u64[0] > 1 )
        {
          if ( **v36 == v31 && v25 == v36 )
          {
            *v34 = (__m128)v26;
            goto LABEL_41;
          }
        }
        else
        {
          if ( !v36 )
          {
            if ( v35 )
              goto LABEL_81;
            v35 = v34;
            goto LABEL_82;
          }
          v35 = v34;
        }
        if ( ++v34 == v30 )
          goto LABEL_36;
      }
    }
    v35 = nullptr;
    while ( 1 )
    {
LABEL_36:
      if ( v33 == v27 )
      {
        sub_1872CE0("");
        sub_1873130(114, 405);
      }
      v38 = (int **)v27->m128_u64[0];
      if ( v27->m128_u64[0] > 1 )
      {
        if ( **v38 == v31 && v25 == v38 )
        {
          *v27 = (__m128)v26;
          goto LABEL_41;
        }
      }
      else
      {
        if ( !v38 )
        {
          if ( v35 )
LABEL_81:
            --*(_DWORD *)(v4 + 432);
          else
            v35 = v27;
LABEL_82:
          *v35 = (__m128)v26;
          ++*(_DWORD *)(v4 + 428);
LABEL_41:
          sub_81D350(v4, (__int64)v18);
LABEL_16:
          if ( v144 == ++v15 )
            return 0;
          goto LABEL_17;
        }
        v35 = v27;
      }
      ++v27;
    }
  }
  if ( v23 != *(_DWORD *)(v4 + 176) || v22[1] )
  {
LABEL_14:
    v17 = *(_DWORD *)(v4 + 136);
    goto LABEL_15;
  }
  v68 = *((__int64 **)v22 + 1);
  if ( *((_BYTE *)v68 + 8) != 1 )
    goto LABEL_221;
  v69 = *v68;
  v70 = sub_15F0200(v145);
  v74 = *(_DWORD **)(v69 + 24);
  if ( !v74 || v70 != *v74 || v74[1] )
  {
    v22 = *(int **)(v20 + 24);
    v17 = *(_DWORD *)(v4 + 136);
    if ( !v22 )
      goto LABEL_16;
    v23 = *v22;
LABEL_15:
    if ( v17 != v23 || v22[1] )
      goto LABEL_16;
    v55 = *((_QWORD *)v22 + 1);
    v56 = 0xFFFFFFFF0LL;
    if ( v55 )
      v56 = 16LL * (unsigned int)(*(_DWORD *)(v55 - 4) - 1);
    v57 = (__int64 *)(v56 + v55);
    if ( *((_BYTE *)v57 + 8) == 1 )
    {
      v58 = *v57;
      v59 = sub_15F0200(v145);
      v60 = *(_DWORD **)(v58 + 24);
      if ( !v60 )
        goto LABEL_16;
      if ( v59 != *v60 )
        goto LABEL_16;
      if ( v60[1] )
        goto LABEL_16;
      v61 = *(_QWORD ***)sub_81DFD0(v4, (__int64)v18);
      if ( !v61 )
        goto LABEL_16;
      v147.m128i_i64[0] = (__int64)&v61[*((unsigned int *)v61 - 1)];
      if ( (_QWORD **)v147.m128i_i64[0] == v61 )
        goto LABEL_16;
      v150.m128i_i64[0] = (__int64)v15;
      v62 = v61;
LABEL_77:
      v66 = *v62;
      v67 = (*v62)[8];
      if ( *(_BYTE *)(v67 + 9) )
        goto LABEL_76;
      if ( !*(_BYTE *)(v67 + 8) )
      {
        v63 = sub_15D1F10(*v66);
        v64 = sub_15F0200(v145);
        v65 = *(_DWORD **)(v63 + 24);
        if ( !v65 || v64 != *v65 || v65[1] )
          goto LABEL_76;
        v118 = *(unsigned int *)(v4 + 424);
        v119 = (__m128i *)v66[8];
        v120 = 4 * (*(_DWORD *)(v4 + 428) + *(_DWORD *)(v4 + 432));
        v149.m128i_i32[0] = 2 * v118;
        v148 = (__m128i)_mm_loadh_ps((const double *)&v146);
        if ( 3 * (int)v118 < v120 )
        {
          v132 = v149.m128i_i32[0];
          v151.m128i_i64[0] = 16LL * v149.m128i_u32[0];
          v133 = (__m128i *)sub_186B270(v151.m128i_u64[0]);
          v123 = v151.m128i_i64[0];
          v121 = v133;
          v134 = (__m128i *)((char *)v133 + v151.m128i_i64[0]);
          if ( v132 )
          {
            if ( (v151.m128i_i8[0] & 0x10) == 0 || (*v133 = 0, ++v133, v134 != v133) )
            {
              do
              {
                *v133 = 0;
                v133 += 2;
                v133[-1] = 0;
              }
              while ( v134 != v133 );
            }
          }
          v135 = *(_QWORD *)(v4 + 416);
          v124 = v134;
          v136 = 16LL * *(unsigned int *)(v4 + 424);
          v137 = (__m128i *)(v135 + v136);
          v122 = v149.m128i_i32[0] - 1;
          if ( v135 != v135 + v136 )
          {
            v138 = v4;
            v139 = *(const __m128i **)(v4 + 416);
            do
            {
              if ( v139->m128i_i64[0] > 1uLL )
              {
                v140 = 16LL * (**(_DWORD **)v139->m128i_i64[0] & (unsigned int)v122);
                v141 = &v121[(unsigned __int64)v140 / 0x10];
                if ( v123 == v140 )
                {
LABEL_199:
                  if ( v121 == v141 )
                  {
LABEL_210:
                    v155 = v138;
                    v154 = v134;
                    v153 = v119;
                    v152 = v62;
                    v151.m128i_i64[0] = (__int64)v66;
                    sub_1872CE0("");
                    sub_1873130(114, 213);
                  }
                  v142 = v121;
                  while ( v142->m128i_i64[0] )
                  {
                    if ( v141 == ++v142 )
                      goto LABEL_210;
                  }
                }
                else
                {
                  v142 = &v121[(unsigned __int64)v140 / 0x10];
                  while ( v142->m128i_i64[0] )
                  {
                    if ( v134 == ++v142 )
                      goto LABEL_199;
                  }
                }
                *v142 = _mm_loadu_si128(v139);
              }
              ++v139;
            }
            while ( v137 != v139 );
            v4 = v138;
            v137 = *(__m128i **)(v138 + 416);
            v124 = v134;
          }
          if ( v137 )
          {
            v152 = (_QWORD **)v123;
            v151.m128i_i32[0] = v122;
            sub_186B220(v137);
            v123 = (__int64)v152;
            v122 = v151.m128i_i32[0];
          }
          v143 = v149.m128i_i32[0];
          *(_QWORD *)(v4 + 416) = v121;
          *(_DWORD *)(v4 + 432) = 0;
          *(_DWORD *)(v4 + 424) = v143;
        }
        else
        {
          v121 = *(__m128i **)(v4 + 416);
          v122 = v118 - 1;
          v123 = 16 * v118;
          v124 = &v121[v118];
        }
        v125 = *(_DWORD *)v119->m128i_i64[0];
        v126 = 16LL * (v125 & (unsigned int)v122);
        v127 = &v121[(unsigned __int64)v126 / 0x10];
        if ( v126 == v123 )
        {
          v129 = nullptr;
          while ( 1 )
          {
LABEL_173:
            if ( v127 == v121 )
            {
              sub_1872CE0("");
              sub_1873130(114, 405);
            }
            v131 = (__m128i *)v121->m128i_i64[0];
            if ( v121->m128i_i64[0] > 1uLL )
            {
              if ( *(_DWORD *)v131->m128i_i64[0] == v125 && v119 == v131 )
              {
                *v121 = _mm_load_si128(&v148);
                goto LABEL_181;
              }
            }
            else
            {
              if ( !v131 )
              {
                if ( v129 )
                  --*(_DWORD *)(v4 + 432);
                else
                  v129 = v121;
                goto LABEL_185;
              }
              v129 = v121;
            }
            ++v121;
          }
        }
        v128 = &v121[(unsigned __int64)v126 / 0x10];
        v129 = nullptr;
        while ( 1 )
        {
          v130 = (__m128i *)v128->m128i_i64[0];
          if ( v128->m128i_i64[0] > 1uLL )
          {
            if ( *(_DWORD *)v130->m128i_i64[0] == v125 && v119 == v130 )
            {
              *v128 = _mm_load_si128(&v148);
              goto LABEL_181;
            }
          }
          else
          {
            if ( !v130 )
            {
              if ( v129 )
                --*(_DWORD *)(v4 + 432);
              else
                v129 = v128;
LABEL_185:
              *v129 = _mm_load_si128(&v148);
              ++*(_DWORD *)(v4 + 428);
LABEL_181:
              sub_81D350(v4, (__int64)v66);
LABEL_76:
              if ( (_QWORD **)v147.m128i_i64[0] == ++v62 )
              {
                v15 = (_QWORD **)v150.m128i_i64[0];
                goto LABEL_16;
              }
              goto LABEL_77;
            }
            v129 = v128;
          }
          if ( ++v128 == v124 )
            goto LABEL_173;
        }
      }
      sub_8214F0(v4, v146, *v62);
      return 1;
    }
LABEL_221:
    sub_DBF6E(0);
  }
  v75 = *(_QWORD ***)sub_8206D0(v4, v18, v156, v71, v72, v73);
  if ( !v75 )
    goto LABEL_16;
  v147.m128i_i64[0] = (__int64)&v75[*((unsigned int *)v75 - 1)];
  if ( (_QWORD **)v147.m128i_i64[0] == v75 )
    goto LABEL_16;
  v148.m128i_i64[0] = (__int64)v15;
  v76 = v4;
LABEL_99:
  v80 = *v75;
  v81 = (*v75)[8];
  if ( *(_BYTE *)(v81 + 9) )
    goto LABEL_98;
  if ( !*(_BYTE *)(v81 + 8) )
  {
    v77 = sub_15D1F10(*v80);
    v78 = sub_15F0200(v145);
    v79 = *(_DWORD **)(v77 + 24);
    if ( !v79 || v78 != *v79 || v79[1] )
      goto LABEL_98;
    v86 = *(_DWORD *)(v76 + 424);
    v87 = (int **)v80[8];
    v88 = (__m128i)_mm_loadh_ps((const double *)&v146);
    if ( 3 * v86 < 4 * (*(_DWORD *)(v76 + 428) + *(_DWORD *)(v76 + 432)) )
    {
      v150.m128i_i32[0] = 2 * v86;
      v151 = v88;
      v149.m128i_i64[0] = 32LL * v86;
      v100 = (__m128 *)sub_186B270(v149.m128i_u64[0]);
      v101 = v150.m128i_i32[0];
      v91 = v149.m128i_i64[0];
      v88 = _mm_load_si128(&v151);
      v89 = v100;
      v102 = (__m128i *)((char *)v100 + v149.m128i_i64[0]);
      if ( v150.m128i_i32[0] )
      {
        if ( (v149.m128i_i8[0] & 0x10) == 0 || (*v100 = 0, ++v100, v102 != (__m128i *)v100) )
        {
          do
          {
            *v100 = 0;
            v100 += 2;
            v100[-1] = 0;
          }
          while ( v102 != (__m128i *)v100 );
        }
      }
      v103 = *(const __m128i **)(v76 + 416);
      v90 = v101 - 1;
      v92 = (__m128 *)v102;
      v104 = *(unsigned int *)(v76 + 424);
      v105 = (__m128i *)&v103[v104];
      if ( v103 != &v103[v104] )
      {
        v106 = &v103[v104];
        v107 = v76;
        v108 = v91;
        v109 = v87;
        v110 = v103;
        v111 = (__int64)v80;
        v112 = v101 - 1;
        v113 = v101;
        do
        {
          if ( v110->m128i_i64[0] > 1uLL )
          {
            v114 = 16LL * (**(_DWORD **)v110->m128i_i64[0] & (unsigned int)v112);
            v115 = &v89[(unsigned __int64)v114 / 0x10];
            if ( v108 == v114 )
            {
LABEL_145:
              if ( v89 == v115 )
              {
LABEL_179:
                LODWORD(v155) = v113;
                v154 = (__m128i *)v107;
                v153 = v102;
                v152 = (_QWORD **)v109;
                v151.m128i_i64[0] = v111;
                v150.m128i_i64[0] = (__int64)v75;
                v149 = v88;
                sub_1872CE0("");
                sub_1873130(114, 213);
              }
              v116 = (__m128i *)v89;
              while ( v116->m128i_i64[0] )
              {
                if ( v115 == (__m128 *)++v116 )
                  goto LABEL_179;
              }
            }
            else
            {
              v116 = (__m128i *)&v89[(unsigned __int64)v114 / 0x10];
              while ( v116->m128i_i64[0] )
              {
                if ( v102 == ++v116 )
                  goto LABEL_145;
              }
            }
            *v116 = _mm_loadu_si128(v110);
          }
          ++v110;
        }
        while ( v106 != v110 );
        v87 = v109;
        v91 = v108;
        v76 = v107;
        v105 = *(__m128i **)(v107 + 416);
        v101 = v113;
        v90 = v112;
        v92 = (__m128 *)v102;
        v80 = (_QWORD *)v111;
      }
      if ( v105 )
      {
        LODWORD(v152) = v101;
        v151.m128i_i64[0] = v91;
        v150.m128i_i32[0] = v90;
        v149 = v88;
        sub_186B220(v105);
        v101 = (int)v152;
        v91 = v151.m128i_i64[0];
        v90 = v150.m128i_i32[0];
        v88 = _mm_load_si128(&v149);
      }
      *(_QWORD *)(v76 + 416) = v89;
      *(_DWORD *)(v76 + 424) = v101;
      *(_DWORD *)(v76 + 432) = 0;
    }
    else
    {
      v89 = *(__m128 **)(v76 + 416);
      v90 = v86 - 1;
      v91 = 16LL * v86;
      v92 = (__m128 *)((char *)v89 + v91);
    }
    v93 = **v87;
    v94 = 16LL * (v93 & (unsigned int)v90);
    v95 = &v89[(unsigned __int64)v94 / 0x10];
    if ( v94 != v91 )
    {
      v96 = &v89[(unsigned __int64)v94 / 0x10];
      v97 = nullptr;
      while ( 1 )
      {
        v98 = (int **)v96->m128_u64[0];
        if ( v96->m128_u64[0] > 1 )
        {
          if ( **v98 == v93 && v87 == v98 )
          {
            *v96 = (__m128)v88;
            goto LABEL_130;
          }
        }
        else
        {
          if ( !v98 )
          {
            if ( v97 )
              goto LABEL_155;
            v97 = v96;
            goto LABEL_156;
          }
          v97 = v96;
        }
        if ( ++v96 == v92 )
          goto LABEL_122;
      }
    }
    v97 = nullptr;
    while ( 1 )
    {
LABEL_122:
      if ( v95 == v89 )
      {
        sub_1872CE0("");
        sub_1873130(114, 405);
      }
      v99 = (int **)v89->m128_u64[0];
      if ( v89->m128_u64[0] > 1 )
      {
        if ( **v99 == v93 && v87 == v99 )
        {
          *v89 = (__m128)v88;
          goto LABEL_130;
        }
      }
      else
      {
        if ( !v99 )
        {
          if ( v97 )
LABEL_155:
            --*(_DWORD *)(v76 + 432);
          else
            v97 = v89;
LABEL_156:
          *v97 = (__m128)v88;
          ++*(_DWORD *)(v76 + 428);
LABEL_130:
          sub_81D350(v76, (__int64)v80);
LABEL_98:
          if ( (_QWORD **)v147.m128i_i64[0] == ++v75 )
          {
            v15 = (_QWORD **)v148.m128i_i64[0];
            v4 = v76;
            goto LABEL_16;
          }
          goto LABEL_99;
        }
        v97 = v89;
      }
      ++v89;
    }
  }
  sub_8214F0(v76, v146, *v75);
  return 1;
}

