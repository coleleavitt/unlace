__int64 __fastcall sub_BAE160(__int64 a1, size_t a2, double *a3, double *a4)
{
  __int64 v8; // rax
  double *v9; // rcx
  int v10; // esi
  unsigned int v11; // edx
  double *v12; // r8
  __int64 v13; // rdx
  double *v14; // r9
  double *i; // rax
  double v16; // rdx
  __int64 v17; // rax
  __int64 v18; // r14
  __int64 v19; // r13
  int v20; // eax
  __int64 v21; // rax
  __int64 v22; // r14
  __int64 v23; // r13
  int v24; // eax
  __int64 v25; // rax
  __int64 v26; // rcx
  size_t v27; // r8
  __m128i v28; // xmm1
  __m128i *v29; // r13
  __int32 v30; // r9d
  __int64 v31; // rcx
  __m128 *v32; // r14
  int v33; // esi
  __int64 v34; // r9
  __m128i *v35; // rdi
  __m128 *v36; // rax
  __m128 *v37; // rcx
  unsigned __int64 v38; // rdx
  __int64 v39; // rdx
  __int64 *v40; // rcx
  unsigned int v41; // r10d
  __int64 *v42; // r8
  __int64 v43; // r10
  __int64 *v44; // r9
  __int64 *v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rax
  double v48; // rax
  __int64 v49; // rax
  __int64 result; // rax
  __int64 v51; // rax
  __int32 v52; // r10d
  __m128i *v53; // rdx
  __m128i *v54; // rax
  const __m128i *v55; // r15
  __m128i *v56; // r11
  __int64 v57; // rdx
  __m128i *v58; // rsi
  __m128i *v59; // rdx
  __m128i v60; // xmm0
  __int64 v61; // rcx
  size_t v62; // r8
  __m128i v63; // xmm1
  __m128i *v64; // r13
  __int32 v65; // r9d
  __int64 v66; // rcx
  __m128 *v67; // r14
  int v68; // esi
  __int64 v69; // r9
  __m128i *v70; // rdi
  __m128 *v71; // rax
  __m128 *v72; // rcx
  unsigned __int64 v73; // rdx
  __int64 v74; // rax
  double v75; // rbx
  _QWORD *v76; // rdx
  unsigned int v77; // eax
  __int64 v78; // rcx
  int v79; // eax
  double *v80; // rcx
  __int64 v81; // r14
  _QWORD *v82; // rax
  _QWORD *v83; // rdx
  _QWORD *v84; // r15
  unsigned int v85; // eax
  __int64 v86; // rcx
  int v87; // eax
  _QWORD *v88; // rcx
  double v89; // rbp
  _QWORD *v90; // rdx
  unsigned int v91; // eax
  __int64 v92; // rcx
  int v93; // eax
  double *v94; // rcx
  __int64 v95; // r14
  _QWORD *v96; // rax
  _QWORD *v97; // rdx
  _QWORD *v98; // rbp
  unsigned int v99; // eax
  __int64 v100; // rcx
  int v101; // eax
  _QWORD *v102; // rcx
  __int64 v103; // rbp
  size_t v104; // r14
  _QWORD *v105; // rax
  _QWORD *v106; // rdx
  _QWORD *v107; // rbx
  unsigned int v108; // eax
  __int64 v109; // rcx
  int v110; // eax
  _QWORD *v111; // rcx
  __int64 v112; // rbp
  size_t v113; // r14
  _QWORD *v114; // rax
  _QWORD *v115; // rdx
  _QWORD *v116; // rbx
  unsigned int v117; // eax
  __int64 v118; // rcx
  _QWORD *v119; // rcx
  unsigned int v120; // ecx
  size_t v121; // rsi
  __int64 v122; // rax
  int v123; // ecx
  unsigned int v124; // r12d
  unsigned int v125; // ecx
  unsigned int *v126; // rax
  __int64 v127; // rcx
  unsigned int v128; // r14d
  unsigned int v129; // ecx
  unsigned int *v130; // rax
  __int64 v131; // rcx
  unsigned int v132; // ebx
  unsigned int v133; // ecx
  unsigned int *v134; // rax
  __int64 v135; // rcx
  unsigned int v136; // r14d
  unsigned int v137; // ecx
  unsigned int *v138; // rax
  __int64 v139; // rcx
  unsigned int v140; // r13d
  unsigned int v141; // ecx
  unsigned int *v142; // rax
  __int64 v143; // rcx
  __int64 v144; // rax
  __int32 v145; // r10d
  __m128i *v146; // rdx
  __m128i *v147; // rax
  const __m128i *v148; // r15
  __m128i *v149; // r11
  __int64 v150; // rdx
  __m128i *v151; // rsi
  __m128i *v152; // rdx
  __m128i v153; // xmm0
  _QWORD *v154; // rdx
  _QWORD *v155; // rdx
  _QWORD *v156; // rdx
  _QWORD *v157; // rdx
  _QWORD *v158; // rdx
  _QWORD *v159; // rdx
  char **exception; // rbp
  __m128i v161; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v162; // [rsp+10h] [rbp-A8h]
  size_t v163; // [rsp+18h] [rbp-A0h]
  __m128i v164; // [rsp+20h] [rbp-98h] BYREF
  __int64 v165; // [rsp+30h] [rbp-88h]
  __int32 v166; // [rsp+3Ch] [rbp-7Ch]
  __m128i *v167; // [rsp+40h] [rbp-78h]
  size_t v168; // [rsp+48h] [rbp-70h] BYREF
  __int64 v169; // [rsp+58h] [rbp-60h] BYREF
  __int64 v170[11]; // [rsp+60h] [rbp-58h] BYREF

  v8 = *(unsigned int *)(a1 + 136);
  v9 = *(double **)(a1 + 128);
  v168 = a2;
  v10 = *(_DWORD *)(a2 + 12);
  v11 = v8 - 1;
  v8 *= 16;
  v12 = (double *)((char *)v9 + v8);
  v13 = 16LL * (v10 & v11);
  v14 = &v9[(unsigned __int64)v13 / 8];
  if ( v13 != v8 )
  {
    for ( i = &v9[(unsigned __int64)v13 / 8]; v12 != i; i += 2 )
    {
      v16 = *i;
      if ( *(_QWORD *)i > 1u )
      {
        if ( *(_DWORD *)(*(_QWORD *)&v16 + 12LL) == v10 && *(_QWORD *)&v16 == a2 )
        {
LABEL_19:
          v39 = *(unsigned int *)(a1 + 160);
          v40 = *(__int64 **)(a1 + 152);
          v41 = v39 - 1;
          v39 *= 16;
          *a3 = i[1];
          v42 = (__int64 *)((char *)v40 + v39);
          v43 = 16LL * (v10 & v41);
          v44 = &v40[(unsigned __int64)v43 / 8];
          v45 = &v40[(unsigned __int64)v43 / 8];
          if ( v43 != v39 )
          {
            do
            {
              while ( 1 )
              {
                v46 = *v45;
                if ( (unsigned __int64)*v45 <= 1 )
                  break;
                if ( *(_DWORD *)(v46 + 12) == v10 && v46 == a2 )
                  goto LABEL_51;
                v45 += 2;
                if ( v42 == v45 )
                  goto LABEL_27;
              }
              if ( !v46 )
                goto LABEL_8;
              v45 += 2;
            }
            while ( v42 != v45 );
          }
LABEL_27:
          if ( v40 != v44 )
          {
            while ( 1 )
            {
              v47 = *v40;
              if ( (unsigned __int64)*v40 > 1 )
              {
                if ( *(_DWORD *)(v47 + 12) == v10 && v47 == a2 )
                {
                  v45 = v40;
LABEL_51:
                  result = v45[1];
                  *(_QWORD *)a4 = result;
                  return result;
                }
              }
              else if ( !v47 )
              {
                goto LABEL_8;
              }
              v40 += 2;
              if ( v44 == v40 )
                goto LABEL_8;
            }
          }
          goto LABEL_8;
        }
      }
      else if ( v16 == 0.0 )
      {
        goto LABEL_8;
      }
    }
  }
  for ( ; v14 != v9; v9 += 2 )
  {
    v48 = *v9;
    if ( *(_QWORD *)v9 > 1u )
    {
      if ( *(_DWORD *)(*(_QWORD *)&v48 + 12LL) == v10 && *(_QWORD *)&v48 == a2 )
      {
        i = v9;
        goto LABEL_19;
      }
    }
    else if ( v48 == 0.0 )
    {
      break;
    }
  }
LABEL_8:
  v17 = sub_1674700(a1 + 88, 64);
  v18 = *(_QWORD *)(a1 + 24);
  v19 = v17;
  v169 = v17;
  v20 = sub_1625010(a1 + 56);
  v21 = sub_15D2D10(v18, v20, 15, 0, 0, 1, (__int64)&v168, v19);
  v22 = v168;
  v23 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)a3 = v21;
  v24 = sub_1625010(a1 + 56);
  v25 = sub_15D2D10(v23, v24, 16, 0, 0, 1, (__int64)&v169, v22);
  v26 = *(unsigned int *)(a1 + 136);
  v27 = v168;
  *(_QWORD *)a4 = v25;
  v28 = (__m128i)_mm_loadh_ps(a3);
  if ( 3 * (int)v26 < (unsigned int)(4 * (*(_DWORD *)(a1 + 140) + *(_DWORD *)(a1 + 144))) )
  {
    v163 = v27;
    v161.m128i_i32[0] = 2 * v26;
    v162 = 16LL * (unsigned int)(2 * v26);
    v164 = v28;
    v51 = sub_186B270(v162);
    v52 = v161.m128i_i32[0];
    v31 = v162;
    v29 = (__m128i *)v51;
    v53 = (__m128i *)v51;
    v27 = v163;
    v28 = _mm_load_si128(&v164);
    v54 = (__m128i *)(v162 + v51);
    if ( v161.m128i_i32[0] )
    {
      if ( (((_BYTE)v54 - (_BYTE)v29) & 0x10) == 0 || (v53 = v29 + 1, *v29 = 0, &v29[1] != v54) )
      {
        do
        {
          *v53 = 0;
          v53 += 2;
          v53[-1] = 0;
        }
        while ( v53 != v54 );
      }
    }
    v55 = *(const __m128i **)(a1 + 128);
    v30 = v52 - 1;
    v32 = (__m128 *)v54;
    v56 = (__m128i *)&v55[*(unsigned int *)(a1 + 136)];
    if ( v55 != v56 )
    {
      do
      {
        while ( v55->m128i_i64[0] <= 1uLL )
        {
          if ( v56 == ++v55 )
            goto LABEL_65;
        }
        v57 = 16LL * (*(_DWORD *)(v55->m128i_i64[0] + 12) & (unsigned int)v30);
        v58 = &v29[(unsigned __int64)v57 / 0x10];
        if ( v31 == v57 )
        {
LABEL_69:
          if ( v29 == v58 )
          {
LABEL_162:
            v167 = v54;
            v166 = v52;
            v165 = v31;
            v164.m128i_i32[0] = v52 - 1;
            v163 = (size_t)v56;
            v162 = v27;
            v161 = v28;
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v59 = v29;
          while ( v59->m128i_i64[0] )
          {
            if ( v58 == ++v59 )
              goto LABEL_162;
          }
        }
        else
        {
          v59 = &v29[(unsigned __int64)v57 / 0x10];
          while ( v59->m128i_i64[0] )
          {
            if ( v54 == ++v59 )
              goto LABEL_69;
          }
        }
        v60 = _mm_loadu_si128(v55++);
        *v59 = v60;
      }
      while ( v56 != v55 );
LABEL_65:
      v56 = *(__m128i **)(a1 + 128);
    }
    if ( v56 )
    {
      LODWORD(v165) = v52;
      v164.m128i_i64[0] = v31;
      LODWORD(v163) = v52 - 1;
      v162 = v27;
      v161 = v28;
      sub_186B220(v56);
      v52 = v165;
      v31 = v164.m128i_i64[0];
      v30 = v163;
      v28 = _mm_load_si128(&v161);
      v27 = v162;
    }
    *(_QWORD *)(a1 + 128) = v29;
    *(_DWORD *)(a1 + 136) = v52;
    *(_DWORD *)(a1 + 144) = 0;
  }
  else
  {
    v29 = *(__m128i **)(a1 + 128);
    v30 = v26 - 1;
    v31 = 16 * v26;
    v32 = (__m128 *)&v29->m128i_i8[v31];
  }
  v33 = *(_DWORD *)(v27 + 12);
  v34 = 16LL * (v33 & (unsigned int)v30);
  v35 = &v29[(unsigned __int64)v34 / 0x10];
  if ( v34 != v31 )
  {
    v36 = (__m128 *)&v29[(unsigned __int64)v34 / 0x10];
    v37 = nullptr;
    while ( 1 )
    {
      v38 = v36->m128_u64[0];
      if ( v36->m128_u64[0] > 1 )
      {
        if ( *(_DWORD *)(v38 + 12) == v33 && v27 == v38 )
        {
          *v36 = (__m128)v28;
          goto LABEL_75;
        }
      }
      else
      {
        if ( !v38 )
        {
          if ( v37 )
            goto LABEL_160;
          v37 = v36;
          goto LABEL_161;
        }
        v37 = v36;
      }
      if ( ++v36 == v32 )
        goto LABEL_46;
    }
  }
  v37 = nullptr;
  while ( 1 )
  {
LABEL_46:
    if ( v35 == v29 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v49 = v29->m128i_i64[0];
    if ( v29->m128i_i64[0] <= 1uLL )
      break;
    if ( *(_DWORD *)(v49 + 12) == v33 && v27 == v49 )
    {
      *v29 = v28;
      goto LABEL_75;
    }
LABEL_45:
    ++v29;
  }
  if ( v49 )
  {
    v37 = (__m128 *)v29;
    goto LABEL_45;
  }
  if ( v37 )
LABEL_160:
    --*(_DWORD *)(a1 + 144);
  else
    v37 = (__m128 *)v29;
LABEL_161:
  *v37 = (__m128)v28;
  ++*(_DWORD *)(a1 + 140);
LABEL_75:
  v61 = *(unsigned int *)(a1 + 160);
  v62 = v168;
  v63 = (__m128i)_mm_loadh_ps(a4);
  if ( 3 * (int)v61 < (unsigned int)(4 * (*(_DWORD *)(a1 + 164) + *(_DWORD *)(a1 + 168))) )
  {
    v163 = v168;
    v161.m128i_i32[0] = 2 * v61;
    v162 = 16LL * (unsigned int)(2 * v61);
    v164 = v63;
    v144 = sub_186B270(v162);
    v145 = v161.m128i_i32[0];
    v66 = v162;
    v64 = (__m128i *)v144;
    v146 = (__m128i *)v144;
    v62 = v163;
    v63 = _mm_load_si128(&v164);
    v147 = (__m128i *)(v162 + v144);
    if ( v161.m128i_i32[0] )
    {
      if ( (((_BYTE)v147 - (_BYTE)v64) & 0x10) == 0 || (v146 = v64 + 1, *v64 = 0, &v64[1] != v147) )
      {
        do
        {
          *v146 = 0;
          v146 += 2;
          v146[-1] = 0;
        }
        while ( v146 != v147 );
      }
    }
    v148 = *(const __m128i **)(a1 + 152);
    v65 = v145 - 1;
    v67 = (__m128 *)v147;
    v149 = (__m128i *)&v148[*(unsigned int *)(a1 + 160)];
    if ( v148 != v149 )
    {
      do
      {
        while ( v148->m128i_i64[0] <= 1uLL )
        {
          if ( v149 == ++v148 )
            goto LABEL_147;
        }
        v150 = 16LL * (*(_DWORD *)(v148->m128i_i64[0] + 12) & (unsigned int)v65);
        v151 = &v64[(unsigned __int64)v150 / 0x10];
        if ( v66 == v150 )
        {
LABEL_151:
          if ( v64 == v151 )
          {
LABEL_163:
            v167 = v147;
            v166 = v145;
            v165 = v66;
            v164.m128i_i32[0] = v145 - 1;
            v163 = (size_t)v149;
            v162 = v62;
            v161 = v63;
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v152 = v64;
          while ( v152->m128i_i64[0] )
          {
            if ( v151 == ++v152 )
              goto LABEL_163;
          }
        }
        else
        {
          v152 = &v64[(unsigned __int64)v150 / 0x10];
          while ( v152->m128i_i64[0] )
          {
            if ( v147 == ++v152 )
              goto LABEL_151;
          }
        }
        v153 = _mm_loadu_si128(v148++);
        *v152 = v153;
      }
      while ( v149 != v148 );
LABEL_147:
      v149 = *(__m128i **)(a1 + 152);
    }
    if ( v149 )
    {
      LODWORD(v165) = v145;
      v164.m128i_i64[0] = v66;
      LODWORD(v163) = v145 - 1;
      v162 = v62;
      v161 = v63;
      sub_186B220(v149);
      v145 = v165;
      v66 = v164.m128i_i64[0];
      v65 = v163;
      v63 = _mm_load_si128(&v161);
      v62 = v162;
    }
    *(_QWORD *)(a1 + 152) = v64;
    *(_DWORD *)(a1 + 160) = v145;
    *(_DWORD *)(a1 + 168) = 0;
  }
  else
  {
    v64 = *(__m128i **)(a1 + 152);
    v65 = v61 - 1;
    v66 = 16 * v61;
    v67 = (__m128 *)&v64->m128i_i8[v66];
  }
  v68 = *(_DWORD *)(v62 + 12);
  v69 = 16LL * (v68 & (unsigned int)v65);
  v70 = &v64[(unsigned __int64)v69 / 0x10];
  if ( v69 != v66 )
  {
    v71 = (__m128 *)&v64[(unsigned __int64)v69 / 0x10];
    v72 = nullptr;
    while ( 1 )
    {
      v73 = v71->m128_u64[0];
      if ( v71->m128_u64[0] > 1 )
      {
        if ( *(_DWORD *)(v73 + 12) == v68 && v62 == v73 )
        {
          *v71 = (__m128)v63;
          goto LABEL_93;
        }
      }
      else
      {
        if ( !v73 )
        {
          if ( v72 )
            goto LABEL_157;
          v72 = v71;
          goto LABEL_158;
        }
        v72 = v71;
      }
      if ( ++v71 == v67 )
        goto LABEL_88;
    }
  }
  v72 = nullptr;
LABEL_88:
  while ( 2 )
  {
    if ( v70 == v64 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v74 = v64->m128i_i64[0];
    if ( v64->m128i_i64[0] > 1uLL )
    {
      if ( *(_DWORD *)(v74 + 12) == v68 && v62 == v74 )
      {
        *v64 = v63;
        goto LABEL_93;
      }
      goto LABEL_87;
    }
    if ( v74 )
    {
      v72 = (__m128 *)v64;
LABEL_87:
      ++v64;
      continue;
    }
    break;
  }
  if ( v72 )
LABEL_157:
    --*(_DWORD *)(a1 + 168);
  else
    v72 = (__m128 *)v64;
LABEL_158:
  *v72 = (__m128)v63;
  ++*(_DWORD *)(a1 + 164);
LABEL_93:
  v75 = *a3;
  if ( v75 != 0.0 )
    ++*(_DWORD *)(*(_QWORD *)&v75 + 8LL);
  v76 = *(_QWORD **)(a1 + 120);
  if ( v76 )
  {
    v77 = *((_DWORD *)v76 - 1);
    if ( v77 != *((_DWORD *)v76 - 2) )
    {
      v78 = v77;
      v79 = v77 + 1;
      v80 = (double *)&v76[v78];
      goto LABEL_98;
    }
    v140 = (3 * v77 + 1) >> 1;
    v141 = 8 * v140 + 8;
    if ( 8 * v77 + 8 < v141 && v77 < v140 )
    {
      v142 = (unsigned int *)sub_186B300(v76 - 1, v141);
      v143 = v142[1];
      v76 = v142 + 2;
      *v142 = v140;
      *(_QWORD *)(a1 + 120) = v142 + 2;
      LODWORD(v142) = v143;
      v80 = (double *)&v76[v143];
      v79 = (_DWORD)v142 + 1;
      goto LABEL_98;
    }
LABEL_182:
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_24ABB0(v170, "Overflow encountered when expanding vector");
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, v170);
    sub_233E40((__int64)v170);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  v156 = (_QWORD *)sub_186B270(0x18u);
  *v156 = 2;
  v79 = 1;
  v76 = v156 + 1;
  *(_QWORD *)(a1 + 120) = v76;
  v80 = (double *)v76;
LABEL_98:
  *v80 = v75;
  v81 = *(_QWORD *)(a1 + 16);
  *((_DWORD *)v76 - 1) = v79;
  v82 = (_QWORD *)sub_180C100(v81 + 8400, 16);
  v83 = *(_QWORD **)(v81 + 9456);
  *v82 = off_1C4C490;
  v84 = v82;
  v82[1] = a1 + 112;
  if ( v83 )
  {
    v85 = *((_DWORD *)v83 - 1);
    if ( v85 == *((_DWORD *)v83 - 2) )
    {
      v120 = (3 * v85 + 1) >> 1;
      v121 = 8 * v120 + 8;
      if ( 8 * v85 + 8 >= (unsigned int)v121 || v85 >= v120 )
        goto LABEL_182;
      LODWORD(v162) = (3 * v85 + 1) >> 1;
      v122 = sub_186B300(v83 - 1, v121);
      v123 = v162;
      v83 = (_QWORD *)(v122 + 8);
      *(_QWORD *)(v81 + 9456) = v122 + 8;
      *(_DWORD *)v122 = v123;
      LODWORD(v122) = *(_DWORD *)(v122 + 4);
      v88 = &v83[(unsigned int)v122];
      v87 = v122 + 1;
    }
    else
    {
      v86 = v85;
      v87 = v85 + 1;
      v88 = &v83[v86];
    }
  }
  else
  {
    v155 = (_QWORD *)sub_186B270(0x18u);
    *v155 = 2;
    v87 = 1;
    v83 = v155 + 1;
    *(_QWORD *)(v81 + 9456) = v83;
    v88 = v83;
  }
  v89 = *a4;
  *v88 = v84;
  *((_DWORD *)v83 - 1) = v87;
  if ( v89 != 0.0 )
    ++*(_DWORD *)(*(_QWORD *)&v89 + 8LL);
  v90 = *(_QWORD **)(a1 + 120);
  if ( v90 )
  {
    v91 = *((_DWORD *)v90 - 1);
    if ( v91 == *((_DWORD *)v90 - 2) )
    {
      v136 = (3 * v91 + 1) >> 1;
      v137 = 8 * v136 + 8;
      if ( 8 * v91 + 8 >= v137 || v91 >= v136 )
        goto LABEL_182;
      v138 = (unsigned int *)sub_186B300(v90 - 1, v137);
      v139 = v138[1];
      v90 = v138 + 2;
      *v138 = v136;
      *(_QWORD *)(a1 + 120) = v138 + 2;
      LODWORD(v138) = v139;
      v94 = (double *)&v90[v139];
      v93 = (_DWORD)v138 + 1;
    }
    else
    {
      v92 = v91;
      v93 = v91 + 1;
      v94 = (double *)&v90[v92];
    }
  }
  else
  {
    v154 = (_QWORD *)sub_186B270(0x18u);
    *v154 = 2;
    v93 = 1;
    v90 = v154 + 1;
    *(_QWORD *)(a1 + 120) = v90;
    v94 = (double *)v90;
  }
  *v94 = v89;
  v95 = *(_QWORD *)(a1 + 16);
  *((_DWORD *)v90 - 1) = v93;
  v96 = (_QWORD *)sub_180C100(v95 + 8400, 16);
  v97 = *(_QWORD **)(v95 + 9456);
  *v96 = off_1C4C490;
  v98 = v96;
  v96[1] = a1 + 112;
  if ( v97 )
  {
    v99 = *((_DWORD *)v97 - 1);
    if ( v99 == *((_DWORD *)v97 - 2) )
    {
      v132 = (3 * v99 + 1) >> 1;
      v133 = 8 * v132 + 8;
      if ( 8 * v99 + 8 >= v133 || v99 >= v132 )
        goto LABEL_182;
      v134 = (unsigned int *)sub_186B300(v97 - 1, v133);
      v135 = v134[1];
      v97 = v134 + 2;
      *(_QWORD *)(v95 + 9456) = v134 + 2;
      *v134 = v132;
      LODWORD(v134) = v135;
      v102 = &v97[v135];
      v101 = (_DWORD)v134 + 1;
    }
    else
    {
      v100 = v99;
      v101 = v99 + 1;
      v102 = &v97[v100];
    }
  }
  else
  {
    v157 = (_QWORD *)sub_186B270(0x18u);
    *v157 = 2;
    v101 = 1;
    v97 = v157 + 1;
    *(_QWORD *)(v95 + 9456) = v97;
    v102 = v97;
  }
  *v102 = v98;
  v103 = *(_QWORD *)(a1 + 16);
  *((_DWORD *)v97 - 1) = v101;
  v104 = v168;
  v105 = (_QWORD *)sub_180C100(v103 + 8400, 24);
  v106 = *(_QWORD **)(v103 + 9456);
  *v105 = off_1C57D58;
  v107 = v105;
  v105[1] = a1 + 128;
  v105[2] = v104;
  if ( v106 )
  {
    v108 = *((_DWORD *)v106 - 1);
    if ( v108 == *((_DWORD *)v106 - 2) )
    {
      v128 = (3 * v108 + 1) >> 1;
      v129 = 8 * v128 + 8;
      if ( 8 * v108 + 8 >= v129 || v108 >= v128 )
        goto LABEL_182;
      v130 = (unsigned int *)sub_186B300(v106 - 1, v129);
      v131 = v130[1];
      v106 = v130 + 2;
      *(_QWORD *)(v103 + 9456) = v130 + 2;
      *v130 = v128;
      LODWORD(v130) = v131;
      v111 = &v106[v131];
      v110 = (_DWORD)v130 + 1;
    }
    else
    {
      v109 = v108;
      v110 = v108 + 1;
      v111 = &v106[v109];
    }
  }
  else
  {
    v158 = (_QWORD *)sub_186B270(0x18u);
    *v158 = 2;
    v110 = 1;
    v106 = v158 + 1;
    *(_QWORD *)(v103 + 9456) = v106;
    v111 = v106;
  }
  v112 = *(_QWORD *)(a1 + 16);
  *v111 = v107;
  *((_DWORD *)v106 - 1) = v110;
  v113 = v168;
  v114 = (_QWORD *)sub_180C100(v112 + 8400, 24);
  v115 = *(_QWORD **)(v112 + 9456);
  *v114 = off_1C57D58;
  v116 = v114;
  v114[1] = a1 + 152;
  v114[2] = v113;
  if ( v115 )
  {
    v117 = *((_DWORD *)v115 - 1);
    if ( v117 == *((_DWORD *)v115 - 2) )
    {
      v124 = (3 * v117 + 1) >> 1;
      v125 = 8 * v124 + 8;
      if ( 8 * v117 + 8 >= v125 || v117 >= v124 )
        goto LABEL_182;
      v126 = (unsigned int *)sub_186B300(v115 - 1, v125);
      v127 = v126[1];
      v115 = v126 + 2;
      *(_QWORD *)(v112 + 9456) = v126 + 2;
      *v126 = v124;
      LODWORD(v126) = v127;
      v119 = &v115[v127];
      result = (unsigned int)((_DWORD)v126 + 1);
    }
    else
    {
      v118 = v117;
      result = v117 + 1;
      v119 = &v115[v118];
    }
  }
  else
  {
    v159 = (_QWORD *)sub_186B270(0x18u);
    *v159 = 2;
    result = 1;
    v115 = v159 + 1;
    *(_QWORD *)(v112 + 9456) = v115;
    v119 = v115;
  }
  *v119 = v116;
  *((_DWORD *)v115 - 1) = result;
  return result;
}

