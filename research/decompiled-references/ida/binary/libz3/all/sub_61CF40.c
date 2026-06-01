__int64 __fastcall sub_61CF40(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rbp
  __int64 v6; // rcx
  __m128i *v7; // r13
  unsigned int v8; // edi
  unsigned int v9; // r9d
  __int64 v10; // rcx
  __m128i *v11; // r12
  __int64 v12; // r10
  __m128i *v13; // r8
  __m128i *i; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  unsigned int v17; // ebx
  __m128i *v18; // rax
  __m128i *v19; // rcx
  __int64 v20; // rdx
  int v21; // edi
  __int64 v22; // r9
  __m128i *v23; // r8
  __int64 result; // rax
  __int64 v25; // rdx
  __int64 v26; // rax
  unsigned int v27; // ebp
  __m128i *v28; // rax
  __m128i *v29; // rcx
  __int64 v30; // rdx
  unsigned int *v31; // rdx
  unsigned int v32; // esi
  unsigned int v33; // r13d
  unsigned int v34; // r12d
  _QWORD *v35; // rdx
  __int64 v36; // rax
  _DWORD *v37; // rax
  _QWORD *v38; // rdx
  __int64 v39; // rax
  unsigned int *v40; // rax
  unsigned int v41; // r14d
  unsigned int *v42; // rax
  unsigned int v43; // r8d
  size_t v44; // rsi
  unsigned int *v45; // rax
  _DWORD *v46; // rdx
  __int64 v47; // rax
  _QWORD *v48; // rax
  unsigned int v49; // ecx
  unsigned int v50; // ecx
  unsigned int v51; // ecx
  __int64 v52; // rdx
  __int64 v53; // rdx
  unsigned int v54; // ecx
  unsigned int v55; // ecx
  size_t v56; // rsi
  unsigned int *v57; // rax
  unsigned int *v58; // rdx
  __int64 v59; // rax
  unsigned int *v60; // rax
  _QWORD *v61; // rdx
  __int64 v62; // rax
  _DWORD *v63; // rax
  _QWORD *v64; // rdx
  __int64 v65; // rax
  unsigned int *v66; // rax
  unsigned int v67; // r14d
  _QWORD *v68; // rax
  __int64 v69; // rax
  __int64 v70; // rax
  unsigned int v71; // ecx
  size_t v72; // rsi
  unsigned int v73; // r13d
  unsigned int *v74; // rax
  __int64 v75; // rax
  unsigned int v76; // ecx
  size_t v77; // rsi
  unsigned int v78; // r13d
  unsigned int *v79; // rax
  __int64 v80; // rax
  unsigned int v81; // r8d
  size_t v82; // rsi
  unsigned int *v83; // rax
  __int64 v84; // rax
  unsigned int v85; // r8d
  size_t v86; // rsi
  unsigned int *v87; // rax
  __int64 v88; // rax
  _QWORD *v89; // rax
  _QWORD *v90; // rax
  __int64 v91; // rsi
  __int64 v92; // rax
  __int64 v93; // rcx
  _DWORD *v94; // rdi
  _DWORD *v95; // rsi
  _DWORD *v96; // r8
  __int64 v97; // rdx
  int *v98; // rdx
  int v99; // ecx
  _QWORD *v100; // rax
  _QWORD *v101; // rax
  _QWORD *v102; // rdx
  unsigned int v103; // eax
  __int64 v104; // rcx
  __int64 *v105; // rcx
  unsigned int v106; // r12d
  unsigned int v107; // ecx
  unsigned int *v108; // rax
  __int64 v109; // rcx
  _QWORD *v110; // rdx
  unsigned int v111; // eax
  __int64 v112; // rcx
  int v113; // eax
  __int64 *v114; // rcx
  unsigned int v115; // r12d
  unsigned int v116; // ecx
  unsigned int *v117; // rax
  __int64 v118; // rcx
  __m128i *v119; // rax
  int v120; // r10d
  __m128i *v121; // r8
  const __m128i *v122; // r9
  unsigned int v123; // eax
  __m128i *v124; // r11
  __int64 v125; // rdx
  __m128i *v126; // rsi
  __m128i *v127; // rdx
  __m128i *v128; // rax
  int v129; // r9d
  __m128i *v130; // r8
  const __m128i *v131; // rax
  unsigned int v132; // r10d
  __m128i *v133; // r11
  __int64 v134; // rdx
  __m128i *v135; // rsi
  __m128i *v136; // rdx
  _QWORD *v137; // rdx
  _QWORD *v138; // rdx
  char **exception; // rbp
  unsigned int v140; // [rsp+0h] [rbp-98h]
  unsigned int v141; // [rsp+0h] [rbp-98h]
  size_t v142; // [rsp+0h] [rbp-98h]
  size_t v143; // [rsp+0h] [rbp-98h]
  int v144; // [rsp+8h] [rbp-90h]
  int v145; // [rsp+8h] [rbp-90h]
  __int64 v146[11]; // [rsp+40h] [rbp-58h] BYREF

  v5 = a2;
  v6 = *(unsigned int *)(a1 + 32);
  v7 = *(__m128i **)(a1 + 24);
  v8 = *(_DWORD *)(a2 + 12);
  v9 = v6 - 1;
  LODWORD(a2) = v6;
  v10 = 16 * v6;
  v11 = (__m128i *)((char *)v7 + v10);
  v12 = 16LL * (v9 & v8);
  v13 = &v7[(unsigned __int64)v12 / 0x10];
  if ( v12 != v10 )
  {
    for ( i = &v7[(unsigned __int64)v12 / 0x10]; v11 != i; ++i )
    {
      v15 = i->m128i_i64[0];
      if ( i->m128i_i64[0] > 1uLL )
      {
        if ( *(_DWORD *)(v15 + 12) == v8 && v5 == v15 )
        {
LABEL_19:
          v17 = i->m128i_u32[2];
          goto LABEL_20;
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
    for ( i = v7; v13 != i; ++i )
    {
      v53 = i->m128i_i64[0];
      if ( i->m128i_i64[0] > 1uLL )
      {
        if ( *(_DWORD *)(v53 + 12) == v8 && v5 == v53 )
          goto LABEL_19;
      }
      else if ( !v53 )
      {
        break;
      }
    }
  }
LABEL_8:
  v16 = *(_QWORD *)(a1 + 56);
  if ( v16 )
    v17 = *(_DWORD *)(v16 - 4);
  else
    v17 = 0;
  if ( 3 * (int)a2 < (unsigned int)(4 * (*(_DWORD *)(a1 + 36) + *(_DWORD *)(a1 + 40))) )
  {
    v145 = 2 * a2;
    v143 = 16LL * (unsigned int)(2 * a2);
    v128 = (__m128i *)sub_186B270(v143);
    v10 = v143;
    v129 = 2 * a2;
    v7 = v128;
    v130 = &v128[v143 / 0x10];
    if ( 2 * (_DWORD)a2 )
    {
      do
      {
        v128->m128i_i64[0] = 0;
        ++v128;
        v128[-1].m128i_i32[2] = 0;
      }
      while ( v128 != v130 );
    }
    v131 = *(const __m128i **)(a1 + 24);
    v132 = v145 - 1;
    v11 = v130;
    v133 = (__m128i *)&v131[*(unsigned int *)(a1 + 32)];
    if ( v131 != v133 )
    {
      do
      {
        if ( v131->m128i_i64[0] > 1uLL )
        {
          v134 = 16LL * (*(_DWORD *)(v131->m128i_i64[0] + 12) & v132);
          v135 = &v7[(unsigned __int64)v134 / 0x10];
          if ( v143 == v134 )
          {
LABEL_182:
            if ( v7 == v135 )
            {
LABEL_197:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v136 = v7;
            while ( v136->m128i_i64[0] )
            {
              if ( v135 == ++v136 )
                goto LABEL_197;
            }
          }
          else
          {
            v136 = &v7[(unsigned __int64)v134 / 0x10];
            while ( v136->m128i_i64[0] )
            {
              if ( v130 == ++v136 )
                goto LABEL_182;
            }
          }
          *v136 = _mm_loadu_si128(v131);
        }
        ++v131;
      }
      while ( v133 != v131 );
      v133 = *(__m128i **)(a1 + 24);
    }
    if ( v133 )
    {
      sub_186B220(v133);
      v129 = v145;
      v132 = v145 - 1;
      v10 = v143;
    }
    v8 = *(_DWORD *)(v5 + 12);
    *(_QWORD *)(a1 + 24) = v7;
    *(_DWORD *)(a1 + 32) = v129;
    *(_DWORD *)(a1 + 40) = 0;
    v12 = 16LL * (v8 & v132);
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
        if ( *(_DWORD *)(v20 + 12) == v8 && v5 == v20 )
        {
          v18->m128i_i64[0] = v5;
          v18->m128i_i32[2] = v17;
          goto LABEL_144;
        }
      }
      else
      {
        if ( !v20 )
        {
          if ( v19 )
            goto LABEL_195;
          v19 = v18;
          goto LABEL_196;
        }
        v19 = v18;
      }
      if ( ++v18 == v11 )
        goto LABEL_112;
    }
  }
  v19 = nullptr;
  while ( 1 )
  {
LABEL_112:
    if ( v7 == v13 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v70 = v7->m128i_i64[0];
    if ( v7->m128i_i64[0] <= 1uLL )
      break;
    if ( *(_DWORD *)(v70 + 12) == v8 && v5 == v70 )
    {
      v7->m128i_i64[0] = v5;
      v7->m128i_i32[2] = v17;
      goto LABEL_144;
    }
LABEL_111:
    ++v7;
  }
  if ( v70 )
  {
    v19 = v7;
    goto LABEL_111;
  }
  if ( v19 )
LABEL_195:
    --*(_DWORD *)(a1 + 40);
  else
    v19 = v7;
LABEL_196:
  v19->m128i_i64[0] = v5;
  v19->m128i_i32[2] = v17;
  ++*(_DWORD *)(a1 + 36);
LABEL_144:
  v110 = *(_QWORD **)(a1 + 56);
  ++*(_DWORD *)(v5 + 8);
  if ( v110 )
  {
    v111 = *((_DWORD *)v110 - 1);
    if ( v111 == *((_DWORD *)v110 - 2) )
    {
      v115 = (3 * v111 + 1) >> 1;
      v116 = 8 * v115 + 8;
      if ( 8 * v111 + 8 >= v116 || v111 >= v115 )
        goto LABEL_215;
      v117 = (unsigned int *)sub_186B300(v110 - 1, v116);
      v118 = v117[1];
      v110 = v117 + 2;
      *v117 = v115;
      *(_QWORD *)(a1 + 56) = v117 + 2;
      LODWORD(v117) = v118;
      v114 = &v110[v118];
      v113 = (_DWORD)v117 + 1;
    }
    else
    {
      v112 = v111;
      v113 = v111 + 1;
      v114 = &v110[v112];
    }
  }
  else
  {
    v138 = (_QWORD *)sub_186B270(0x18u);
    *v138 = 2;
    v113 = 1;
    v110 = v138 + 1;
    *(_QWORD *)(a1 + 56) = v110;
    v114 = v110;
  }
  *v114 = v5;
  v7 = *(__m128i **)(a1 + 24);
  *((_DWORD *)v110 - 1) = v113;
  a2 = *(unsigned int *)(a1 + 32);
  v9 = a2 - 1;
  v10 = 16 * a2;
  v11 = &v7[a2];
LABEL_20:
  v21 = *(_DWORD *)(a3 + 12);
  v22 = 16LL * (v21 & v9);
  v23 = &v7[(unsigned __int64)v22 / 0x10];
  if ( v22 != v10 )
  {
    for ( result = (__int64)v7[(unsigned __int64)v22 / 0x10].m128i_i64; (__m128i *)result != v11; result += 16 )
    {
      v25 = *(_QWORD *)result;
      if ( *(_QWORD *)result > 1u )
      {
        if ( *(_DWORD *)(v25 + 12) == v21 && a3 == v25 )
        {
LABEL_38:
          v27 = *(_DWORD *)(result + 8);
          goto LABEL_39;
        }
      }
      else if ( !v25 )
      {
        goto LABEL_27;
      }
    }
  }
  if ( v23 != v7 )
  {
    for ( result = (__int64)v7; v23 != (__m128i *)result; result += 16 )
    {
      v52 = *(_QWORD *)result;
      if ( *(_QWORD *)result > 1u )
      {
        if ( *(_DWORD *)(v52 + 12) == v21 && a3 == v52 )
          goto LABEL_38;
      }
      else if ( !v52 )
      {
        break;
      }
    }
  }
LABEL_27:
  v26 = *(_QWORD *)(a1 + 56);
  if ( v26 )
    v27 = *(_DWORD *)(v26 - 4);
  else
    v27 = 0;
  if ( 3 * (int)a2 < (unsigned int)(4 * (*(_DWORD *)(a1 + 36) + *(_DWORD *)(a1 + 40))) )
  {
    v144 = 2 * a2;
    v142 = 16LL * (unsigned int)(2 * a2);
    v119 = (__m128i *)sub_186B270(v142);
    v10 = v142;
    v120 = 2 * a2;
    v7 = v119;
    v121 = &v119[v142 / 0x10];
    if ( 2 * (_DWORD)a2 )
    {
      do
      {
        v119->m128i_i64[0] = 0;
        ++v119;
        v119[-1].m128i_i32[2] = 0;
      }
      while ( v119 != v121 );
    }
    v122 = *(const __m128i **)(a1 + 24);
    v123 = v144 - 1;
    v11 = v121;
    v124 = (__m128i *)&v122[*(unsigned int *)(a1 + 32)];
    if ( v122 != v124 )
    {
      do
      {
        if ( v122->m128i_i64[0] > 1uLL )
        {
          v125 = 16LL * (*(_DWORD *)(v122->m128i_i64[0] + 12) & v123);
          v126 = &v7[(unsigned __int64)v125 / 0x10];
          if ( v142 == v125 )
          {
LABEL_162:
            if ( v7 == v126 )
            {
LABEL_198:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v127 = v7;
            while ( v127->m128i_i64[0] )
            {
              if ( v126 == ++v127 )
                goto LABEL_198;
            }
          }
          else
          {
            v127 = &v7[(unsigned __int64)v125 / 0x10];
            while ( v127->m128i_i64[0] )
            {
              if ( v121 == ++v127 )
                goto LABEL_162;
            }
          }
          *v127 = _mm_loadu_si128(v122);
        }
        ++v122;
      }
      while ( v124 != v122 );
      v124 = *(__m128i **)(a1 + 24);
    }
    if ( v124 )
    {
      sub_186B220(v124);
      v120 = v144;
      v123 = v144 - 1;
      v10 = v142;
    }
    v21 = *(_DWORD *)(a3 + 12);
    *(_QWORD *)(a1 + 24) = v7;
    *(_DWORD *)(a1 + 32) = v120;
    *(_DWORD *)(a1 + 40) = 0;
    v22 = 16LL * (v21 & v123);
    v23 = &v7[(unsigned __int64)v22 / 0x10];
  }
  if ( v22 != v10 )
  {
    v28 = v23;
    v29 = nullptr;
    while ( 1 )
    {
      v30 = v28->m128i_i64[0];
      if ( v28->m128i_i64[0] > 1uLL )
      {
        if ( *(_DWORD *)(v30 + 12) == v21 && a3 == v30 )
        {
          v28->m128i_i64[0] = a3;
          v28->m128i_i32[2] = v27;
          goto LABEL_136;
        }
      }
      else
      {
        if ( !v30 )
        {
          if ( v29 )
            goto LABEL_192;
          v29 = v28;
          goto LABEL_193;
        }
        v29 = v28;
      }
      if ( ++v28 == v11 )
        goto LABEL_105;
    }
  }
  v29 = nullptr;
LABEL_105:
  while ( 2 )
  {
    if ( v7 == v23 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v69 = v7->m128i_i64[0];
    if ( v7->m128i_i64[0] > 1uLL )
    {
      if ( *(_DWORD *)(v69 + 12) == v21 && a3 == v69 )
      {
        v7->m128i_i64[0] = a3;
        v7->m128i_i32[2] = v27;
        goto LABEL_136;
      }
      goto LABEL_104;
    }
    if ( v69 )
    {
      v29 = v7;
LABEL_104:
      ++v7;
      continue;
    }
    break;
  }
  if ( v29 )
LABEL_192:
    --*(_DWORD *)(a1 + 40);
  else
    v29 = v7;
LABEL_193:
  v29->m128i_i64[0] = a3;
  v29->m128i_i32[2] = v27;
  ++*(_DWORD *)(a1 + 36);
LABEL_136:
  v102 = *(_QWORD **)(a1 + 56);
  ++*(_DWORD *)(a3 + 8);
  if ( v102 )
  {
    v103 = *((_DWORD *)v102 - 1);
    if ( v103 != *((_DWORD *)v102 - 2) )
    {
      v104 = v103;
      result = v103 + 1;
      v105 = &v102[v104];
      goto LABEL_139;
    }
    v106 = (3 * v103 + 1) >> 1;
    v107 = 8 * v106 + 8;
    if ( 8 * v103 + 8 < v107 && v103 < v106 )
    {
      v108 = (unsigned int *)sub_186B300(v102 - 1, v107);
      v109 = v108[1];
      v102 = v108 + 2;
      *v108 = v106;
      *(_QWORD *)(a1 + 56) = v108 + 2;
      LODWORD(v108) = v109;
      v105 = &v102[v109];
      result = (unsigned int)((_DWORD)v108 + 1);
      goto LABEL_139;
    }
LABEL_215:
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_24ABB0(v146, "Overflow encountered when expanding vector");
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, v146);
    sub_233E40((__int64)v146);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  v137 = (_QWORD *)sub_186B270(0x18u);
  *v137 = 2;
  result = 1;
  v102 = v137 + 1;
  *(_QWORD *)(a1 + 56) = v102;
  v105 = v102;
LABEL_139:
  *v105 = a3;
  *((_DWORD *)v102 - 1) = result;
LABEL_39:
  v31 = *(unsigned int **)a1;
  if ( !*(_QWORD *)a1 )
    goto LABEL_42;
  v32 = *(v31 - 1);
  if ( v17 < v32 )
  {
    do
    {
      v49 = v17;
      v17 = v31[v17];
    }
    while ( v49 != v17 );
    if ( v27 < v32 )
      goto LABEL_84;
    if ( v17 < v32 )
    {
      v33 = v17;
      v34 = v27;
      do
      {
LABEL_63:
        v50 = v17;
        v17 = v31[v17];
      }
      while ( v50 != v17 );
      goto LABEL_64;
    }
LABEL_42:
    v33 = v17;
    v34 = v27;
    goto LABEL_43;
  }
  if ( v27 >= v32 )
    goto LABEL_42;
  do
  {
LABEL_84:
    v54 = v27;
    v27 = v31[v27];
  }
  while ( v54 != v27 );
  v33 = v17;
  v34 = v27;
  if ( v17 < v32 )
    goto LABEL_63;
LABEL_64:
  if ( v27 >= v32 )
  {
LABEL_43:
    if ( v27 == v17 )
      return result;
    goto LABEL_52;
  }
  do
  {
    v51 = v27;
    v27 = v31[v27];
  }
  while ( v51 != v27 );
  if ( v27 == v17 )
    return result;
  while ( 1 )
  {
LABEL_52:
    if ( !v31 )
    {
      v41 = 0;
      v90 = (_QWORD *)sub_186B270(0x10u);
      v31 = (unsigned int *)(v90 + 1);
      *v90 = 2;
      v42 = v31;
      *(_QWORD *)a1 = v31;
LABEL_45:
      *v42 = v41;
      ++*(v31 - 1);
      v35 = *(_QWORD **)(a1 + 8);
      if ( !v35 )
        goto LABEL_58;
      goto LABEL_46;
    }
    v41 = *(v31 - 1);
    if ( v33 < v41 )
      break;
    v42 = &v31[v41];
    if ( v41 != *(v31 - 2) )
      goto LABEL_45;
    v43 = (3 * v41 + 1) >> 1;
    v44 = 4 * v43 + 8;
    if ( 4 * v41 + 8 >= (unsigned int)v44 || v41 >= v43 )
      goto LABEL_215;
    v45 = (unsigned int *)sub_186B300(v31 - 2, v44);
    v46 = v45 + 2;
    *v45 = (3 * v41 + 1) >> 1;
    v47 = v45[1];
    *(_QWORD *)a1 = v46;
    v46[v47] = v41;
    ++*(v46 - 1);
    v35 = *(_QWORD **)(a1 + 8);
    if ( !v35 )
    {
LABEL_58:
      v48 = (_QWORD *)sub_186B270(0x10u);
      v35 = v48 + 1;
      *v48 = 2;
      *(_QWORD *)(a1 + 8) = v48 + 1;
      v37 = v48 + 1;
      goto LABEL_48;
    }
LABEL_46:
    v36 = *((unsigned int *)v35 - 1);
    if ( (_DWORD)v36 == *((_DWORD *)v35 - 2) )
    {
      v85 = (unsigned int)(3 * v36 + 1) >> 1;
      v86 = 4 * v85 + 8;
      if ( 4 * (int)v36 + 8 >= (unsigned int)v86 || (unsigned int)v36 >= v85 )
        goto LABEL_215;
      v141 = (unsigned int)(3 * v36 + 1) >> 1;
      v87 = (unsigned int *)sub_186B300(v35 - 1, v86);
      v35 = v87 + 2;
      *v87 = v141;
      v88 = v87[1];
      *(_QWORD *)(a1 + 8) = v35;
      v37 = (_DWORD *)v35 + v88;
    }
    else
    {
      v37 = (_DWORD *)v35 + v36;
    }
LABEL_48:
    *v37 = 1;
    ++*((_DWORD *)v35 - 1);
    v38 = *(_QWORD **)(a1 + 16);
    if ( v38 )
    {
      v39 = *((unsigned int *)v38 - 1);
      if ( (_DWORD)v39 == *((_DWORD *)v38 - 2) )
      {
        v81 = (unsigned int)(3 * v39 + 1) >> 1;
        v82 = 4 * v81 + 8;
        if ( 4 * (int)v39 + 8 >= (unsigned int)v82 || (unsigned int)v39 >= v81 )
          goto LABEL_215;
        v140 = (unsigned int)(3 * v39 + 1) >> 1;
        v83 = (unsigned int *)sub_186B300(v38 - 1, v82);
        v38 = v83 + 2;
        *v83 = v140;
        v84 = v83[1];
        *(_QWORD *)(a1 + 16) = v38;
        v40 = (unsigned int *)v38 + v84;
      }
      else
      {
        v40 = (unsigned int *)v38 + v39;
      }
    }
    else
    {
      v100 = (_QWORD *)sub_186B270(0x10u);
      v38 = v100 + 1;
      *v100 = 2;
      *(_QWORD *)(a1 + 16) = v100 + 1;
      v40 = (unsigned int *)(v100 + 1);
    }
    *v40 = v41;
    ++*((_DWORD *)v38 - 1);
    v31 = *(unsigned int **)a1;
  }
  while ( 1 )
  {
    if ( !v31 )
    {
      v67 = 0;
      v89 = (_QWORD *)sub_186B270(0x10u);
      v58 = (unsigned int *)(v89 + 1);
      *v89 = 2;
      v60 = v58;
      *(_QWORD *)a1 = v58;
      goto LABEL_90;
    }
    v67 = *(v31 - 1);
    if ( v34 < v67 )
      break;
    if ( v67 == *(v31 - 2) )
    {
      v55 = (3 * v67 + 1) >> 1;
      v56 = 4 * v55 + 8;
      if ( 4 * v67 + 8 >= (unsigned int)v56 || v67 >= v55 )
        goto LABEL_215;
      v57 = (unsigned int *)sub_186B300(v31 - 2, v56);
      v58 = v57 + 2;
      *v57 = (3 * v67 + 1) >> 1;
      v59 = v57[1];
      *(_QWORD *)a1 = v58;
      v60 = &v58[v59];
LABEL_90:
      *v60 = v67;
      ++*(v58 - 1);
      v61 = *(_QWORD **)(a1 + 8);
      if ( !v61 )
        goto LABEL_101;
      goto LABEL_91;
    }
    v31[v67] = v67;
    ++*(v31 - 1);
    v61 = *(_QWORD **)(a1 + 8);
    if ( !v61 )
    {
LABEL_101:
      v68 = (_QWORD *)sub_186B270(0x10u);
      v61 = v68 + 1;
      *v68 = 2;
      *(_QWORD *)(a1 + 8) = v68 + 1;
      v63 = v68 + 1;
      goto LABEL_93;
    }
LABEL_91:
    v62 = *((unsigned int *)v61 - 1);
    if ( (_DWORD)v62 == *((_DWORD *)v61 - 2) )
    {
      v76 = (unsigned int)(3 * v62 + 1) >> 1;
      v77 = 4 * v76 + 8;
      v78 = v76;
      if ( 4 * (int)v62 + 8 >= (unsigned int)v77 || (unsigned int)v62 >= v76 )
        goto LABEL_215;
      v79 = (unsigned int *)sub_186B300(v61 - 1, v77);
      v61 = v79 + 2;
      *v79 = v78;
      v80 = v79[1];
      *(_QWORD *)(a1 + 8) = v61;
      v63 = (_DWORD *)v61 + v80;
    }
    else
    {
      v63 = (_DWORD *)v61 + v62;
    }
LABEL_93:
    *v63 = 1;
    ++*((_DWORD *)v61 - 1);
    v64 = *(_QWORD **)(a1 + 16);
    if ( v64 )
    {
      v65 = *((unsigned int *)v64 - 1);
      if ( (_DWORD)v65 == *((_DWORD *)v64 - 2) )
      {
        v71 = (unsigned int)(3 * v65 + 1) >> 1;
        v72 = 4 * v71 + 8;
        v73 = v71;
        if ( 4 * (int)v65 + 8 >= (unsigned int)v72 || (unsigned int)v65 >= v71 )
          goto LABEL_215;
        v74 = (unsigned int *)sub_186B300(v64 - 1, v72);
        v64 = v74 + 2;
        *v74 = v73;
        v75 = v74[1];
        *(_QWORD *)(a1 + 16) = v64;
        v66 = (unsigned int *)v64 + v75;
      }
      else
      {
        v66 = (unsigned int *)v64 + v65;
      }
    }
    else
    {
      v101 = (_QWORD *)sub_186B270(0x10u);
      v64 = v101 + 1;
      *v101 = 2;
      *(_QWORD *)(a1 + 16) = v101 + 1;
      v66 = (unsigned int *)(v101 + 1);
    }
    *v66 = v67;
    ++*((_DWORD *)v64 - 1);
    v31 = *(unsigned int **)a1;
  }
  v91 = *(_QWORD *)(a1 + 8);
  v92 = 4LL * v17;
  v93 = 4LL * v27;
  v94 = (_DWORD *)(v91 + v92);
  v95 = (_DWORD *)(v93 + v91);
  if ( *v95 >= *v94 )
  {
    v96 = v95;
    v95 = v94;
    v17 = v27;
    v94 = v96;
    v93 = v92;
    v92 = 4LL * v27;
  }
  *(unsigned int *)((char *)v31 + v93) = v17;
  *v94 += *v95;
  v97 = *(_QWORD *)(a1 + 16);
  result = v97 + v92;
  v98 = (int *)(v93 + v97);
  v99 = *v98;
  *v98 = *(_DWORD *)result;
  *(_DWORD *)result = v99;
  return result;
}

