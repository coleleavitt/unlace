__int64 __fastcall sub_641180(__int64 *a1, __int64 a2)
{
  char **exception; // rbp
  __int64 *v3; // r12
  __int64 v4; // rbp
  __int64 v5; // r14
  int v6; // ecx
  __m128i *v7; // r13
  unsigned int v8; // edi
  int v9; // r9d
  size_t v10; // r14
  __m128i *v11; // rbx
  __int64 v12; // rdi
  __m128i *v13; // rsi
  __int64 result; // rax
  __int64 v15; // rdx
  __int32 v16; // r15d
  unsigned int v17; // edx
  __m128i *v18; // rax
  __m128i *v19; // rdi
  __int64 v20; // rdx
  unsigned int v21; // r9d
  __int64 v22; // rax
  __int64 *v23; // rsi
  unsigned int v24; // edx
  char *v25; // rdi
  __int64 v26; // rdx
  __int64 *v27; // r8
  __int64 v28; // rdx
  __int64 v29; // r10
  int v30; // r11d
  __int64 v31; // r8
  __int64 v32; // rax
  int v33; // esi
  unsigned int v34; // edx
  char *v35; // rcx
  __int64 v36; // rdx
  __m128i *v37; // rdi
  __int64 v38; // rdx
  __int64 v39; // rdx
  __int64 v40; // rax
  _QWORD *v41; // rdx
  unsigned int v42; // eax
  __int64 v43; // rcx
  int v44; // eax
  __int64 *v45; // rcx
  _QWORD *v46; // r8
  unsigned int v47; // eax
  __int64 v48; // rdx
  int v49; // eax
  __int64 *v50; // rdx
  __int64 v51; // r10
  int v52; // edi
  __int64 v53; // rax
  __int64 *v54; // rcx
  unsigned int v55; // edx
  __int64 *v56; // rsi
  __int64 v57; // rdx
  __int64 *v58; // r9
  __int64 *i; // rax
  __int64 v60; // r10
  __int64 *v61; // rbx
  __int64 v62; // r13
  __int64 v63; // rsi
  __int64 *v64; // rax
  __int64 v65; // rax
  __int64 v66; // r14
  _OWORD *v67; // rax
  _QWORD *v68; // rdx
  unsigned int v69; // eax
  __int64 v70; // rcx
  int v71; // eax
  __int64 *v72; // rcx
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r15
  __int64 v76; // r8
  __int64 *v77; // r13
  size_t v78; // rbp
  unsigned int v79; // r11d
  __int64 v80; // rbx
  int v81; // esi
  __int64 v82; // r11
  __int64 *v83; // r9
  __int64 *v84; // rax
  __int64 *v85; // rdi
  __int64 v86; // rdx
  __int64 v87; // rax
  unsigned int v88; // ebx
  unsigned int v89; // edx
  unsigned int *v90; // rax
  __int64 v91; // rdx
  unsigned int v92; // ebx
  unsigned int v93; // ecx
  unsigned int *v94; // rax
  __int64 v95; // rcx
  __m128i *v96; // rax
  int v97; // r8d
  __m128i *v98; // r10
  __m128i *v99; // rcx
  int v100; // r9d
  __m128i *v101; // r11
  const __m128i *v102; // rdi
  __m128i *v103; // rcx
  __int64 *v104; // r10
  const __m128i *v105; // r12
  __int64 v106; // r11
  __m128i *v107; // rbp
  const __m128i *v108; // rbx
  __int64 v109; // rax
  __m128i *v110; // rdx
  __m128i *v111; // rax
  __int64 v112; // rdx
  __int64 v113; // rax
  unsigned int v114; // ebx
  unsigned int v115; // ecx
  unsigned int *v116; // rax
  __int64 v117; // rcx
  __int64 v118; // r9
  unsigned int v119; // ebp
  __m128i *v120; // r13
  unsigned int v121; // ecx
  __int64 v122; // r9
  __m128i *v123; // rbx
  int v124; // edi
  __int64 v125; // rdx
  __m128i *v126; // r8
  __m128i *v127; // rax
  __m128i *v128; // rsi
  __int64 v129; // rdx
  __int64 v130; // rax
  __m128i *v131; // rax
  __m128i *v132; // r10
  __int64 v133; // r8
  __int64 v134; // rdi
  __m128i *v135; // r11
  const __m128i *v136; // rbx
  __int64 v137; // rax
  __m128i *v138; // rdx
  __m128i *v139; // rax
  __m128i v140; // xmm0
  __int64 *v141; // rax
  int v142; // r9d
  __int64 *v143; // r10
  __int64 v144; // rax
  void *v145; // rcx
  __int64 *v146; // r8
  __int64 v147; // r12
  void **v148; // rcx
  size_t v149; // r14
  __int64 *v150; // rbp
  __int64 *v151; // rbx
  __int64 v152; // rax
  __int64 *v153; // rdx
  __int64 *v154; // rax
  __int64 v155; // rdx
  _QWORD *v156; // r8
  _QWORD *v157; // rdx
  _QWORD *v158; // rdx
  __int64 v159; // [rsp+0h] [rbp-98h]
  int v160; // [rsp+0h] [rbp-98h]
  int v161; // [rsp+8h] [rbp-90h]
  unsigned int v162; // [rsp+8h] [rbp-90h]
  int v163; // [rsp+10h] [rbp-88h]
  __int32 v164; // [rsp+28h] [rbp-70h]
  __int64 v165[11]; // [rsp+40h] [rbp-58h] BYREF

  v3 = a1;
  v4 = a2;
  v5 = *((unsigned int *)a1 + 6);
  v6 = *(_DWORD *)(a2 + 12);
  v7 = (__m128i *)a1[2];
  v8 = v5 - 1;
  v9 = v5;
  v10 = 16 * v5;
  v11 = &v7[v10 / 0x10];
  v12 = 16LL * (v6 & v8);
  v13 = &v7[(unsigned __int64)v12 / 0x10];
  if ( v12 != v10 )
  {
    for ( result = (__int64)v7[(unsigned __int64)v12 / 0x10].m128i_i64; v11 != (__m128i *)result; result += 16 )
    {
      v15 = *(_QWORD *)result;
      if ( *(_QWORD *)result > 1u )
      {
        if ( *(_DWORD *)(v15 + 12) == v6 && v15 == v4 )
        {
LABEL_17:
          v21 = *(_DWORD *)(result + 8);
          if ( v21 < *((_DWORD *)v3 + 29) )
            return result;
          v22 = *((unsigned int *)v3 + 16);
          v23 = (__int64 *)v3[7];
          v24 = v22 - 1;
          result = 16 * v22;
          v25 = (char *)v23 + result;
          v26 = 16LL * (v6 & v24);
          v27 = &v23[(unsigned __int64)v26 / 8];
          if ( v26 != result )
          {
            for ( result = (__int64)&v23[(unsigned __int64)v26 / 8]; v25 != (char *)result; result += 16 )
            {
              v28 = *(_QWORD *)result;
              if ( *(_QWORD *)result > 1u )
              {
                if ( *(_DWORD *)(v28 + 12) == v6 && v28 == v4 )
                  return result;
              }
              else if ( !v28 )
              {
                goto LABEL_25;
              }
            }
          }
          for ( ; v27 != v23; v23 += 2 )
          {
            result = *v23;
            if ( (unsigned __int64)*v23 > 1 )
            {
              if ( *(_DWORD *)(result + 12) == v6 && result == v4 )
                return result;
            }
            else if ( !result )
            {
              break;
            }
          }
LABEL_25:
          v29 = v3[6];
          if ( !v29 )
            return result;
          v30 = *(_DWORD *)(v29 - 4);
LABEL_27:
          if ( !v30 )
            return result;
          v31 = *(_QWORD *)(v29 + 8LL * (unsigned int)--v30);
          v32 = *((unsigned int *)v3 + 6);
          v33 = *(_DWORD *)(v31 + 12);
          v34 = v32 - 1;
          v32 *= 16;
          v35 = &v7->m128i_i8[v32];
          v36 = 16LL * (v33 & v34);
          v37 = &v7[(unsigned __int64)v36 / 0x10];
          if ( v36 == v32 )
          {
LABEL_149:
            if ( v7 != v37 )
            {
              for ( result = (__int64)v7; v37 != (__m128i *)result; result += 16 )
              {
                v112 = *(_QWORD *)result;
                if ( *(_QWORD *)result > 1u )
                {
                  if ( *(_DWORD *)(v112 + 12) == v33 && v31 == v112 )
                    goto LABEL_147;
                }
                else if ( !v112 )
                {
                  break;
                }
              }
            }
LABEL_35:
            sub_1872CE0("");
            sub_1873130(114, 566);
          }
          result = (__int64)v7[(unsigned __int64)v36 / 0x10].m128i_i64;
          while ( 1 )
          {
            v38 = *(_QWORD *)result;
            if ( *(_QWORD *)result > 1u )
            {
              if ( *(_DWORD *)(v38 + 12) == v33 && v31 == v38 )
              {
LABEL_147:
                if ( v21 >= *(_DWORD *)(result + 8) )
                  return result;
                *(_DWORD *)(v29 - 4) = v30;
                goto LABEL_27;
              }
            }
            else if ( !v38 )
            {
              goto LABEL_35;
            }
            result += 16;
            if ( v35 == (char *)result )
              goto LABEL_149;
          }
        }
      }
      else if ( !v15 )
      {
        goto LABEL_8;
      }
    }
  }
  if ( v7 != v13 )
  {
    for ( result = (__int64)v7; v13 != (__m128i *)result; result += 16 )
    {
      v39 = *(_QWORD *)result;
      if ( *(_QWORD *)result > 1u )
      {
        if ( *(_DWORD *)(v39 + 12) == v6 && v39 == v4 )
          goto LABEL_17;
      }
      else if ( !v39 )
      {
        break;
      }
    }
  }
LABEL_8:
  v16 = *((_DWORD *)v3 + 28);
  v17 = 4 * (*((_DWORD *)v3 + 7) + *((_DWORD *)v3 + 8));
  *((_DWORD *)v3 + 28) = v16 + 1;
  if ( 3 * v9 < v17 )
  {
    v160 = 2 * v9;
    v10 = 16LL * (unsigned int)(2 * v9);
    v96 = (__m128i *)sub_186B270(v10);
    v97 = v160;
    v7 = v96;
    v98 = &v96[v10 / 0x10];
    if ( v160 )
    {
      do
      {
        v96->m128i_i64[0] = 0;
        ++v96;
        v96[-1].m128i_i32[2] = 0;
      }
      while ( v96 != v98 );
    }
    v99 = (__m128i *)v3[2];
    v100 = v160 - 1;
    v11 = v98;
    v101 = &v99[*((unsigned int *)v3 + 6)];
    if ( v99 != v101 )
    {
      v102 = (const __m128i *)v3[2];
      v103 = v98;
      v104 = v3;
      v105 = v101;
      v106 = v4;
      v107 = v11;
      v108 = v102;
      do
      {
        if ( v108->m128i_i64[0] > 1uLL )
        {
          v109 = 16LL * (*(_DWORD *)(v108->m128i_i64[0] + 12) & (unsigned int)v100);
          v110 = &v7[(unsigned __int64)v109 / 0x10];
          if ( v10 == v109 )
          {
LABEL_135:
            if ( v7 == v110 )
            {
LABEL_157:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v111 = v7;
            while ( v111->m128i_i64[0] )
            {
              if ( v110 == ++v111 )
                goto LABEL_157;
            }
          }
          else
          {
            v111 = &v7[(unsigned __int64)v109 / 0x10];
            while ( v111->m128i_i64[0] )
            {
              if ( v107 == ++v111 )
                goto LABEL_135;
            }
          }
          *v111 = _mm_loadu_si128(v108);
        }
        ++v108;
      }
      while ( v105 != v108 );
      v4 = v106;
      v101 = (__m128i *)v104[2];
      v11 = v103;
      v3 = v104;
    }
    if ( v101 )
    {
      sub_186B220(v101);
      v97 = v160;
      v100 = v160 - 1;
    }
    v6 = *(_DWORD *)(v4 + 12);
    v3[2] = (__int64)v7;
    *((_DWORD *)v3 + 6) = v97;
    *((_DWORD *)v3 + 8) = 0;
    v12 = 16LL * (v6 & (unsigned int)v100);
    v13 = &v7[(unsigned __int64)v12 / 0x10];
  }
  if ( v12 != v10 )
  {
    v18 = v13;
    v19 = nullptr;
    while ( 1 )
    {
      v20 = v18->m128i_i64[0];
      if ( v18->m128i_i64[0] > 1uLL )
      {
        if ( *(_DWORD *)(v20 + 12) == v6 && v20 == v4 )
        {
          v18->m128i_i64[0] = v4;
          v18->m128i_i32[2] = v16;
          goto LABEL_64;
        }
      }
      else
      {
        if ( !v20 )
        {
          if ( v19 )
            goto LABEL_145;
          v19 = v18;
          goto LABEL_146;
        }
        v19 = v18;
      }
      if ( ++v18 == v11 )
        goto LABEL_51;
    }
  }
  v19 = nullptr;
  while ( 1 )
  {
LABEL_51:
    if ( v7 == v13 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v40 = v7->m128i_i64[0];
    if ( v7->m128i_i64[0] <= 1uLL )
      break;
    if ( *(_DWORD *)(v40 + 12) == v6 && v40 == v4 )
    {
      v7->m128i_i64[0] = v4;
      v7->m128i_i32[2] = v16;
      goto LABEL_64;
    }
LABEL_50:
    ++v7;
  }
  if ( v40 )
  {
    v19 = v7;
    goto LABEL_50;
  }
  if ( v19 )
LABEL_145:
    --*((_DWORD *)v3 + 8);
  else
    v19 = v7;
LABEL_146:
  v19->m128i_i64[0] = v4;
  v19->m128i_i32[2] = v16;
  ++*((_DWORD *)v3 + 7);
LABEL_64:
  v41 = (_QWORD *)v3[5];
  if ( v41 )
  {
    v42 = *((_DWORD *)v41 - 1);
    if ( v42 != *((_DWORD *)v41 - 2) )
    {
      v43 = v42;
      v44 = v42 + 1;
      v45 = &v41[v43];
      goto LABEL_67;
    }
    v92 = (3 * v42 + 1) >> 1;
    v93 = 8 * v92 + 8;
    if ( 8 * v42 + 8 < v93 && v42 < v92 )
    {
      v94 = (unsigned int *)sub_186B300(v41 - 1, v93);
      v95 = v94[1];
      v41 = v94 + 2;
      *v94 = v92;
      v3[5] = (__int64)(v94 + 2);
      LODWORD(v94) = v95;
      v45 = &v41[v95];
      v44 = (_DWORD)v94 + 1;
      goto LABEL_67;
    }
LABEL_256:
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_24ABB0(v165, "Overflow encountered when expanding vector");
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, v165);
    sub_233E40((__int64)v165);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  v157 = (_QWORD *)sub_186B270(0x18u);
  *v157 = 2;
  v44 = 1;
  v41 = v157 + 1;
  v3[5] = (__int64)v41;
  v45 = v41;
LABEL_67:
  v46 = (_QWORD *)v3[6];
  *v45 = v4;
  *((_DWORD *)v41 - 1) = v44;
  if ( v46 )
  {
    v47 = *((_DWORD *)v46 - 1);
    if ( v47 == *((_DWORD *)v46 - 2) )
    {
      v88 = (3 * v47 + 1) >> 1;
      v89 = 8 * v88 + 8;
      if ( 8 * v47 + 8 >= v89 || v47 >= v88 )
        goto LABEL_256;
      v90 = (unsigned int *)sub_186B300(v46 - 1, v89);
      v91 = v90[1];
      v46 = v90 + 2;
      *v90 = v88;
      v3[6] = (__int64)(v90 + 2);
      LODWORD(v90) = v91;
      v50 = &v46[v91];
      v49 = (_DWORD)v90 + 1;
    }
    else
    {
      v48 = v47;
      v49 = v47 + 1;
      v50 = &v46[v48];
    }
  }
  else
  {
    v156 = (_QWORD *)sub_186B270(0x18u);
    *v156 = 2;
    v49 = 1;
    v46 = v156 + 1;
    v3[6] = (__int64)v46;
    v50 = v46;
  }
  v51 = *v3;
  *v50 = v4;
  *((_DWORD *)v46 - 1) = v49;
  v52 = *(_DWORD *)(v4 + 12);
  v53 = *(unsigned int *)(v51 + 8);
  v54 = *(__int64 **)v51;
  v55 = v53 - 1;
  v53 *= 16;
  v56 = (__int64 *)(*(_QWORD *)v51 + v53);
  v57 = 16LL * (v52 & v55);
  v58 = (__int64 *)(*(_QWORD *)v51 + v57);
  if ( v57 != v53 )
  {
    for ( i = (__int64 *)(*(_QWORD *)v51 + v57); v56 != i; i += 2 )
    {
      v57 = *i;
      if ( (unsigned __int64)*i > 1 )
      {
        if ( *(_DWORD *)(v57 + 12) == v52 && v57 == v4 )
        {
LABEL_109:
          v60 = i[1];
          goto LABEL_78;
        }
      }
      else if ( !v57 )
      {
        goto LABEL_77;
      }
    }
  }
  for ( ; v58 != v54; v54 += 2 )
  {
    v87 = *v54;
    if ( (unsigned __int64)*v54 > 1 )
    {
      if ( *(_DWORD *)(v87 + 12) == v52 && v87 == v4 )
      {
        i = v54;
        goto LABEL_109;
      }
    }
    else if ( !v87 )
    {
      break;
    }
  }
LABEL_77:
  v60 = v51 + 64;
LABEL_78:
  v61 = *(__int64 **)v60;
  v62 = *(_QWORD *)v60 + 8LL * *(unsigned int *)(v60 + 8);
  if ( *(_QWORD *)v60 == v62 )
    goto LABEL_90;
  while ( (unsigned __int64)*v61 <= 1 )
  {
    if ( (__int64 *)v62 == ++v61 )
      goto LABEL_90;
  }
  if ( (__int64 *)v62 == v61 )
    goto LABEL_90;
  v63 = *v61;
  do
  {
    sub_641180(v3, v63, v57, v54, v46, v58);
    v64 = v61 + 1;
    if ( (__int64 *)v62 == v61 + 1 )
      break;
    while ( 1 )
    {
      v63 = *v64;
      v61 = v64;
      if ( (unsigned __int64)*v64 > 1 )
        break;
      if ( (__int64 *)v62 == ++v64 )
        goto LABEL_89;
    }
  }
  while ( (__int64 *)v62 != v64 );
LABEL_89:
  result = 0x7FFFFFFF8LL;
  v46 = (_QWORD *)v3[6];
  if ( v46 )
LABEL_90:
    result = 8LL * (unsigned int)(*((_DWORD *)v46 - 1) - 1);
  if ( *(_QWORD *)((char *)v46 + result) == v4 )
  {
    v65 = v3[10];
    if ( v65 )
      v164 = *(_DWORD *)(v65 - 4);
    else
      v164 = 0;
    v66 = sub_186B270(0x18u);
    v67 = (_OWORD *)sub_186B270(0x40u);
    v68 = (_QWORD *)v3[10];
    *(_QWORD *)(v66 + 8) = 8;
    *(_QWORD *)v66 = v67;
    *(_DWORD *)(v66 + 16) = 0;
    *v67 = 0;
    v67[1] = 0;
    v67[2] = 0;
    v67[3] = 0;
    if ( v68 )
    {
      v69 = *((_DWORD *)v68 - 1);
      if ( v69 == *((_DWORD *)v68 - 2) )
      {
        v114 = (3 * v69 + 1) >> 1;
        v115 = 8 * v114 + 8;
        if ( 8 * v69 + 8 >= v115 || v69 >= v114 )
          goto LABEL_256;
        v116 = (unsigned int *)sub_186B300(v68 - 1, v115);
        v117 = v116[1];
        v68 = v116 + 2;
        *v116 = v114;
        v3[10] = (__int64)(v116 + 2);
        LODWORD(v116) = v117;
        v72 = &v68[v117];
        v71 = (_DWORD)v116 + 1;
      }
      else
      {
        v70 = v69;
        v71 = v69 + 1;
        v72 = &v68[v70];
      }
    }
    else
    {
      v158 = (_QWORD *)sub_186B270(0x18u);
      *v158 = 2;
      v71 = 1;
      v68 = v158 + 1;
      v3[10] = (__int64)v68;
      v72 = v68;
    }
    *v72 = v66;
    v159 = v4;
    *((_DWORD *)v68 - 1) = v71;
LABEL_98:
    v73 = v3[5];
    v74 = (unsigned int)(*(_DWORD *)(v73 - 4) - 1);
    v75 = *(_QWORD *)(v73 + 8 * v74);
    *(_DWORD *)(v73 - 4) = v74;
    v76 = *(unsigned int *)(v66 + 8);
    if ( 3 * (int)v76 < (unsigned int)(4 * (*(_DWORD *)(v66 + 12) + *(_DWORD *)(v66 + 16))) )
    {
      v161 = 2 * v76;
      v78 = 8LL * (unsigned int)(2 * v76);
      v141 = (__int64 *)sub_186B270(v78);
      v142 = v161;
      v77 = v141;
      if ( v161 )
      {
        memset(v141, 0, v78);
        v142 = v161;
      }
      v143 = *(__int64 **)v66;
      v144 = *(unsigned int *)(v66 + 8);
      v79 = v142 - 1;
      v80 = (__int64)v77 + v78;
      v145 = (void *)(*(_QWORD *)v66 + 8 * v144);
      if ( *(void **)v66 != v145 )
      {
        v146 = v3;
        v147 = *(_QWORD *)v66 + 8 * v144;
        v148 = (void **)v66;
        v149 = v78;
        v150 = (__int64 *)((char *)v77 + v78);
        v151 = v143;
        do
        {
          while ( (unsigned __int64)*v151 <= 1 )
          {
            if ( (__int64 *)v147 == ++v151 )
              goto LABEL_219;
          }
          v152 = 8LL * (*(_DWORD *)(*v151 + 12) & v79);
          v153 = &v77[(unsigned __int64)v152 / 8];
          if ( v149 == v152 )
          {
LABEL_223:
            if ( v77 == v153 )
            {
LABEL_234:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v154 = v77;
            while ( *v154 )
            {
              if ( v153 == ++v154 )
                goto LABEL_234;
            }
          }
          else
          {
            v154 = &v77[(unsigned __int64)v152 / 8];
            while ( *v154 )
            {
              if ( v150 == ++v154 )
                goto LABEL_223;
            }
          }
          v155 = *v151++;
          *v154 = v155;
        }
        while ( (__int64 *)v147 != v151 );
LABEL_219:
        v80 = (__int64)v150;
        v78 = v149;
        v66 = (__int64)v148;
        v145 = *v148;
        v3 = v146;
      }
      if ( v145 )
      {
        v163 = v142;
        v162 = v142 - 1;
        sub_186B220(v145);
        v142 = v163;
        v79 = v162;
      }
      *(_QWORD *)v66 = v77;
      *(_DWORD *)(v66 + 8) = v142;
      *(_DWORD *)(v66 + 16) = 0;
    }
    else
    {
      v77 = *(__int64 **)v66;
      v78 = 8 * v76;
      v79 = v76 - 1;
      v80 = *(_QWORD *)v66 + 8 * v76;
    }
    v81 = *(_DWORD *)(v75 + 12);
    v82 = v81 & v79;
    v83 = &v77[v82];
    if ( 8 * v82 != v78 )
    {
      v84 = &v77[v82];
      v85 = nullptr;
      while ( 1 )
      {
        v86 = *v84;
        if ( (unsigned __int64)*v84 > 1 )
        {
          if ( *(_DWORD *)(v86 + 12) == v81 && v75 == v86 )
          {
            *v84 = v75;
            goto LABEL_171;
          }
        }
        else
        {
          if ( !v86 )
          {
            if ( v85 )
              goto LABEL_232;
            v85 = v84;
            goto LABEL_233;
          }
          v85 = v84;
        }
        if ( ++v84 == (__int64 *)v80 )
          goto LABEL_163;
      }
    }
    v85 = nullptr;
    while ( 1 )
    {
LABEL_163:
      if ( v83 == v77 )
      {
        sub_1872CE0("");
        sub_1873130(114, 405);
      }
      v113 = *v77;
      if ( (unsigned __int64)*v77 > 1 )
      {
        if ( *(_DWORD *)(v113 + 12) == v81 && v75 == v113 )
        {
          *v77 = v75;
LABEL_171:
          v118 = *((unsigned int *)v3 + 16);
          v119 = 2 * v118;
          if ( 3 * (int)v118 < (unsigned int)(4 * (*((_DWORD *)v3 + 17) + *((_DWORD *)v3 + 18))) )
          {
            v131 = (__m128i *)sub_186B270(16LL * v119);
            v122 = 16LL * v119;
            v120 = v131;
            v132 = &v131[(unsigned __int64)v122 / 0x10];
            if ( v119 )
            {
              do
              {
                v131->m128i_i64[0] = 0;
                ++v131;
                v131[-1].m128i_i32[2] = 0;
              }
              while ( v131 != v132 );
            }
            v133 = v3[7];
            v121 = v119 - 1;
            v123 = v132;
            v134 = 16LL * *((unsigned int *)v3 + 16);
            v135 = (__m128i *)(v133 + v134);
            if ( v133 != v133 + v134 )
            {
              v136 = (const __m128i *)v3[7];
              do
              {
                while ( v136->m128i_i64[0] <= 1uLL )
                {
                  if ( v135 == ++v136 )
                    goto LABEL_199;
                }
                v137 = 16LL * (*(_DWORD *)(v136->m128i_i64[0] + 12) & v121);
                v138 = &v120[(unsigned __int64)v137 / 0x10];
                if ( v122 == v137 )
                {
LABEL_203:
                  if ( v120 == v138 )
                  {
LABEL_235:
                    sub_1872CE0("");
                    sub_1873130(114, 213);
                  }
                  v139 = v120;
                  while ( v139->m128i_i64[0] )
                  {
                    if ( v138 == ++v139 )
                      goto LABEL_235;
                  }
                }
                else
                {
                  v139 = &v120[(unsigned __int64)v137 / 0x10];
                  while ( v139->m128i_i64[0] )
                  {
                    if ( v132 == ++v139 )
                      goto LABEL_203;
                  }
                }
                v140 = _mm_loadu_si128(v136++);
                *v139 = v140;
              }
              while ( v135 != v136 );
LABEL_199:
              v135 = (__m128i *)v3[7];
              v123 = v132;
            }
            if ( v135 )
            {
              sub_186B220(v135);
              v122 = 16LL * v119;
              v121 = v119 - 1;
            }
            v3[7] = (__int64)v120;
            *((_DWORD *)v3 + 16) = v119;
            *((_DWORD *)v3 + 18) = 0;
          }
          else
          {
            v120 = (__m128i *)v3[7];
            v121 = v118 - 1;
            v122 = 16 * v118;
            v123 = &v120[(unsigned __int64)v122 / 0x10];
          }
          v124 = *(_DWORD *)(v75 + 12);
          v125 = 16LL * (v124 & v121);
          v126 = &v120[(unsigned __int64)v125 / 0x10];
          if ( v125 != v122 )
          {
            v127 = &v120[(unsigned __int64)v125 / 0x10];
            v128 = nullptr;
            while ( 1 )
            {
              v129 = v127->m128i_i64[0];
              if ( v127->m128i_i64[0] > 1uLL )
              {
                if ( *(_DWORD *)(v129 + 12) == v124 && v75 == v129 )
                {
                  v127->m128i_i64[0] = v75;
                  v127->m128i_i32[2] = v164;
                  goto LABEL_37;
                }
              }
              else
              {
                if ( !v129 )
                {
                  if ( v128 )
                    goto LABEL_229;
                  v128 = v127;
                  goto LABEL_230;
                }
                v128 = v127;
              }
              if ( ++v127 == v123 )
                goto LABEL_184;
            }
          }
          v128 = nullptr;
LABEL_184:
          while ( 2 )
          {
            if ( v126 == v120 )
            {
              sub_1872CE0("");
              sub_1873130(114, 405);
            }
            v130 = v120->m128i_i64[0];
            if ( v120->m128i_i64[0] > 1uLL )
            {
              if ( *(_DWORD *)(v130 + 12) == v124 && v75 == v130 )
              {
                v120->m128i_i64[0] = v75;
                v120->m128i_i32[2] = v164;
                goto LABEL_37;
              }
              goto LABEL_183;
            }
            if ( v130 )
            {
              v128 = v120;
LABEL_183:
              ++v120;
              continue;
            }
            break;
          }
          if ( v128 )
LABEL_229:
            --*((_DWORD *)v3 + 18);
          else
            v128 = v120;
LABEL_230:
          v128->m128i_i64[0] = v75;
          v128->m128i_i32[2] = v164;
          ++*((_DWORD *)v3 + 17);
LABEL_37:
          if ( v75 == v159 )
          {
            result = v3[6];
            --*(_DWORD *)(result - 4);
            return result;
          }
          goto LABEL_98;
        }
      }
      else
      {
        if ( !v113 )
        {
          if ( v85 )
LABEL_232:
            --*(_DWORD *)(v66 + 16);
          else
            v85 = v77;
LABEL_233:
          *v85 = v75;
          ++*(_DWORD *)(v66 + 12);
          goto LABEL_171;
        }
        v85 = v77;
      }
      ++v77;
    }
  }
  return result;
}

