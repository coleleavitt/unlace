_QWORD *__fastcall sub_63BBF0(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v4; // rdi
  __int64 v5; // rcx
  unsigned int v6; // ebx
  _QWORD *v7; // rdx
  int v8; // eax
  __int64 v9; // rbx
  __int64 *v10; // rdi
  __int64 v11; // rcx
  __int64 *v12; // rdx
  int v13; // eax
  unsigned int v14; // ebx
  __int64 v15; // rbp
  void *v16; // rcx
  __int64 *v17; // r13
  __int64 v18; // rax
  __int64 *v19; // rsi
  unsigned int v20; // r14d
  __int64 v21; // rbx
  unsigned int v22; // edi
  __int64 *v23; // rbp
  int v24; // eax
  size_t v25; // r15
  __int64 *v26; // r9
  int v27; // edi
  __int64 v28; // rax
  __int64 *v29; // r10
  __int64 *v30; // rax
  __int64 *v31; // rsi
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 *v34; // rax
  __int64 *v35; // r11
  __int64 v36; // rcx
  __int64 *v37; // rbx
  __int64 v38; // rdx
  __int64 *v39; // rsi
  __int64 *v40; // rdx
  __int64 v41; // rsi
  __int64 *v42; // rax
  void **v43; // r15
  __int64 v44; // rbp
  _QWORD *result; // rax
  __int64 v46; // r13
  __int64 v47; // r12
  _QWORD *v48; // rbx
  int v49; // esi
  __int64 v50; // rdx
  char *v51; // rdi
  int v52; // eax
  unsigned int v53; // ecx
  char *v54; // r8
  __int64 v55; // rcx
  char *v56; // r9
  char *i; // rdx
  __int64 v58; // rcx
  __int64 v59; // rcx
  int v60; // edi
  __int64 v61; // rsi
  __int64 v62; // r13
  __int64 *v63; // r8
  __int64 v64; // r14
  __int64 v65; // rdx
  int v66; // r10d
  unsigned int v67; // ecx
  __int64 *v68; // r9
  __int64 v69; // rcx
  __int64 *v70; // r11
  __int64 *v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // rdx
  __int64 v74; // rsi
  __int64 *v75; // rcx
  size_t v76; // r14
  unsigned int v77; // r9d
  __int64 v78; // r8
  __int64 v79; // rdx
  __int64 *v80; // r9
  __int64 *v81; // rdx
  __int64 *v82; // rdi
  __int64 v83; // rsi
  __int64 v84; // rdx
  __int64 v85; // rdx
  __int64 v86; // rdx
  unsigned int v87; // ecx
  __int64 *v88; // rsi
  __int64 v89; // rcx
  __int64 *v90; // rdi
  __int64 *j; // rdx
  __int64 v92; // rcx
  __int64 v93; // rcx
  __int64 *v94; // r10
  _QWORD *v95; // r8
  __int64 *v96; // rbx
  __int64 v97; // rdx
  __int64 *v98; // rsi
  __int64 *v99; // rdx
  __int64 v100; // rsi
  _QWORD *v101; // rcx
  unsigned int v102; // eax
  __int64 v103; // rdi
  _QWORD *v104; // rax
  _QWORD *v105; // r14
  __int64 v106; // rdx
  char *v107; // rax
  char *v108; // r12
  __int64 v109; // r8
  unsigned int v110; // ebp
  void **v111; // r9
  __int64 v112; // r15
  char *v113; // r13
  __int64 v114; // r12
  _QWORD *v115; // rcx
  char *v116; // rbx
  __int64 v117; // rax
  _QWORD *v118; // rdx
  _QWORD *v119; // rax
  __int64 v120; // rdx
  unsigned int v121; // ebx
  __int64 v122; // rbp
  void *v123; // rcx
  unsigned int v124; // ebx
  unsigned int v125; // ebx
  __int64 v127; // [rsp+0h] [rbp-78h]
  unsigned int v128; // [rsp+0h] [rbp-78h]
  unsigned int v129; // [rsp+0h] [rbp-78h]
  _QWORD *v130; // [rsp+0h] [rbp-78h]
  __int64 *v131; // [rsp+8h] [rbp-70h]
  unsigned int v132; // [rsp+8h] [rbp-70h]
  __int64 *v133; // [rsp+8h] [rbp-70h]
  int v134; // [rsp+10h] [rbp-68h]
  __int64 v135; // [rsp+10h] [rbp-68h]
  unsigned int v136; // [rsp+10h] [rbp-68h]
  int v138; // [rsp+20h] [rbp-58h]
  __int64 *v139; // [rsp+20h] [rbp-58h]
  __int64 *v140; // [rsp+28h] [rbp-50h]
  __int64 v141; // [rsp+28h] [rbp-50h]

  if ( *(_DWORD *)(a2 + 12) || *(_DWORD *)(a2 + 16) )
  {
    v4 = *(_QWORD **)a2;
    v5 = *(_QWORD *)a2 + 8LL * *(unsigned int *)(a2 + 8);
    v6 = *(_DWORD *)(a2 + 8);
    v7 = *(_QWORD **)a2;
    v8 = 0;
    if ( *(_QWORD *)a2 == v5 )
      goto LABEL_9;
    do
    {
      while ( *v7 )
      {
        *v7++ = 0;
        if ( (_QWORD *)v5 == v7 )
          goto LABEL_8;
      }
      ++v7;
      ++v8;
    }
    while ( (_QWORD *)v5 != v7 );
LABEL_8:
    if ( v6 <= 0x10 || 3 * v6 >= 4 * v8 )
      goto LABEL_9;
    if ( v4 )
    {
      sub_186B220(v4);
      v121 = *(_DWORD *)(a2 + 8);
      *(_QWORD *)a2 = 0;
      v121 >>= 1;
      *(_DWORD *)(a2 + 8) = v121;
      v122 = v121;
      v123 = (void *)sub_186B270(8LL * v121);
      if ( !v121 )
        goto LABEL_236;
    }
    else
    {
      v124 = v6 >> 1;
      v122 = v124;
      *(_QWORD *)a2 = 0;
      *(_DWORD *)(a2 + 8) = v124;
      v123 = (void *)sub_186B270(8LL * v124);
    }
    v123 = memset(v123, 0, 8 * v122);
LABEL_236:
    *(_QWORD *)a2 = v123;
LABEL_9:
    *(_QWORD *)(a2 + 12) = 0;
  }
  v9 = *(unsigned int *)(a3 + 8);
  if ( !*(_DWORD *)(a3 + 12) && !*(_DWORD *)(a3 + 16) )
    goto LABEL_24;
  v10 = *(__int64 **)a3;
  v11 = *(_QWORD *)a3 + 8LL * (unsigned int)v9;
  if ( *(_QWORD *)a3 != v11 )
  {
    v12 = *(__int64 **)a3;
    v13 = 0;
    do
    {
      while ( *v12 )
      {
        *v12++ = 0;
        if ( (__int64 *)v11 == v12 )
          goto LABEL_17;
      }
      ++v12;
      ++v13;
    }
    while ( (__int64 *)v11 != v12 );
LABEL_17:
    if ( (unsigned int)v9 > 0x10 && 3 * (int)v9 < (unsigned int)(4 * v13) )
    {
      if ( v10 )
      {
        sub_186B220(v10);
        v14 = *(_DWORD *)(a3 + 8);
        *(_QWORD *)a3 = 0;
        v14 >>= 1;
        *(_DWORD *)(a3 + 8) = v14;
        v15 = v14;
        v16 = (void *)sub_186B270(8LL * v14);
        if ( !v14 )
        {
LABEL_22:
          *(_QWORD *)a3 = v16;
          v9 = *(unsigned int *)(a3 + 8);
          goto LABEL_23;
        }
      }
      else
      {
        v125 = (unsigned int)v9 >> 1;
        *(_QWORD *)a3 = 0;
        *(_DWORD *)(a3 + 8) = v125;
        v15 = v125;
        v16 = (void *)sub_186B270(8LL * v125);
      }
      v16 = memset(v16, 0, 8 * v15);
      goto LABEL_22;
    }
  }
LABEL_23:
  *(_QWORD *)(a3 + 12) = 0;
LABEL_24:
  v17 = *(__int64 **)(a1 + 32);
  v18 = 2LL * *(unsigned int *)(a1 + 40);
  v19 = &v17[v18];
  if ( v17 == &v17[v18] )
    goto LABEL_77;
  while ( (unsigned __int64)*v17 <= 1 )
  {
    v17 += 2;
    if ( v19 == v17 )
      goto LABEL_77;
  }
  if ( v19 != v17 )
  {
    v131 = v19;
    v20 = v9;
    v21 = *v17;
    while ( 1 )
    {
      v22 = 2 * v20;
      v134 = 2 * v20;
      if ( 3 * v20 < 4 * (*(_DWORD *)(a3 + 12) + *(_DWORD *)(a3 + 16)) )
      {
        v20 *= 2;
        v25 = 8LL * v22;
        v34 = (__int64 *)sub_186B270(v25);
        v23 = v34;
        if ( v22 )
          memset(v34, 0, v25);
        v26 = &v23[v25 / 8];
        v35 = (__int64 *)(*(_QWORD *)a3 + 8LL * *(unsigned int *)(a3 + 8));
        v24 = v134 - 1;
        if ( *(__int64 **)a3 != v35 )
        {
          v36 = v21;
          v37 = *(__int64 **)a3;
          do
          {
            while ( (unsigned __int64)*v37 <= 1 )
            {
              if ( v35 == ++v37 )
                goto LABEL_58;
            }
            v38 = 8LL * (*(_DWORD *)(*v37 + 12) & (unsigned int)(v134 - 1));
            v39 = &v23[(unsigned __int64)v38 / 8];
            if ( v25 == v38 )
            {
LABEL_62:
              if ( v23 == v39 )
              {
LABEL_67:
                sub_1872CE0("");
                sub_1873130(114, 213);
              }
              v40 = v23;
              while ( *v40 )
              {
                if ( v39 == ++v40 )
                  goto LABEL_67;
              }
            }
            else
            {
              v40 = &v23[(unsigned __int64)v38 / 8];
              while ( *v40 )
              {
                if ( &v23[v25 / 8] == ++v40 )
                  goto LABEL_62;
              }
            }
            v41 = *v37++;
            *v40 = v41;
          }
          while ( v35 != v37 );
LABEL_58:
          v26 = &v23[v25 / 8];
          v35 = *(__int64 **)a3;
          v21 = v36;
          v24 = v134 - 1;
        }
        if ( v35 )
        {
          v140 = v26;
          v138 = v24;
          sub_186B220(v35);
          v26 = v140;
          v24 = v138;
        }
        *(_QWORD *)a3 = v23;
        *(_DWORD *)(a3 + 16) = 0;
        *(_DWORD *)(a3 + 8) = v134;
      }
      else
      {
        v23 = *(__int64 **)a3;
        v24 = v20 - 1;
        v25 = 8LL * v20;
        v26 = (__int64 *)(*(_QWORD *)a3 + v25);
      }
      v27 = *(_DWORD *)(v21 + 12);
      v28 = 8LL * (v27 & (unsigned int)v24);
      v29 = &v23[(unsigned __int64)v28 / 8];
      if ( v28 != v25 )
      {
        v30 = &v23[(unsigned __int64)v28 / 8];
        v31 = nullptr;
        while ( 1 )
        {
          v32 = *v30;
          if ( (unsigned __int64)*v30 > 1 )
          {
            if ( *(_DWORD *)(v32 + 12) == v27 && v32 == v21 )
            {
              *v30 = v21;
              goto LABEL_71;
            }
          }
          else
          {
            if ( !v32 )
            {
              if ( v31 )
              {
                --*(_DWORD *)(a3 + 16);
                v30 = v31;
              }
              *v30 = v21;
              ++*(_DWORD *)(a3 + 12);
              goto LABEL_71;
            }
            v31 = v30;
          }
          if ( ++v30 == v26 )
            goto LABEL_43;
        }
      }
      v31 = nullptr;
      while ( 1 )
      {
LABEL_43:
        if ( v29 == v23 )
        {
          sub_1872CE0("");
          sub_1873130((char *)&qword_70 + 2, 405);
        }
        v33 = *v23;
        if ( (unsigned __int64)*v23 <= 1 )
          break;
        if ( *(_DWORD *)(v33 + 12) == v27 && v33 == v21 )
        {
          *v23 = v21;
          goto LABEL_71;
        }
LABEL_42:
        ++v23;
      }
      if ( v33 )
        break;
      if ( v31 )
      {
        --*(_DWORD *)(a3 + 16);
        v23 = v31;
      }
      *v23 = v21;
      ++*(_DWORD *)(a3 + 12);
LABEL_71:
      v42 = v17 + 2;
      if ( v131 != v17 + 2 )
      {
        while ( 1 )
        {
          v21 = *v42;
          v17 = v42;
          if ( (unsigned __int64)*v42 > 1 )
            break;
          v42 += 2;
          if ( v131 == v42 )
            goto LABEL_76;
        }
        if ( v131 != v42 )
          continue;
      }
LABEL_76:
      v9 = v20;
      goto LABEL_77;
    }
    v31 = v23;
    goto LABEL_42;
  }
LABEL_77:
  v43 = (void **)a3;
  v44 = a2;
  result = *(_QWORD **)a3;
  v46 = *(_QWORD *)a3 + 8 * v9;
  if ( *(_QWORD *)a3 == v46 )
    return result;
LABEL_80:
  while ( 1 )
  {
    v47 = *result;
    v48 = result;
    if ( *result > 1u )
      break;
    if ( (_QWORD *)v46 == ++result )
      return result;
  }
  if ( (_QWORD *)v46 != result )
  {
    v49 = 0;
    v139 = (__int64 *)(a1 + 240);
    while ( 1 )
    {
      v50 = *(unsigned int *)(a1 + 40);
      v51 = *(char **)(a1 + 32);
      v52 = *(_DWORD *)(v47 + 12);
      v53 = v50 - 1;
      v50 *= 16;
      v54 = &v51[v50];
      v55 = 16LL * (v52 & v53);
      v56 = &v51[v55];
      if ( v55 != v50 )
      {
        for ( i = &v51[v55]; v54 != i; i += 16 )
        {
          v58 = *(_QWORD *)i;
          if ( *(_QWORD *)i > 1u )
          {
            if ( *(_DWORD *)(v58 + 12) == v52 && v58 == v47 )
              goto LABEL_100;
          }
          else if ( !v58 )
          {
            goto LABEL_90;
          }
        }
      }
      if ( v51 == v56 )
      {
LABEL_90:
        v59 = *v139;
        if ( !*v139 )
          goto LABEL_91;
        goto LABEL_101;
      }
      while ( 1 )
      {
        v73 = *(_QWORD *)v51;
        if ( *(_QWORD *)v51 > 1u )
          break;
        if ( !v73 )
          goto LABEL_90;
LABEL_117:
        v51 += 16;
        if ( v56 == v51 )
          goto LABEL_90;
      }
      if ( *(_DWORD *)(v73 + 12) != v52 || v73 != v47 )
        goto LABEL_117;
      i = v51;
LABEL_100:
      v59 = **((_QWORD **)i + 1);
      if ( !v59 )
        goto LABEL_91;
LABEL_101:
      v135 = v59;
      v60 = v49;
      v132 = 0;
      v61 = v46;
      if ( !*(_DWORD *)(v59 - 4) )
        goto LABEL_112;
LABEL_102:
      v62 = *(_QWORD *)(v59 + 8LL * v132);
      v127 = v62 + 8LL * *(unsigned int *)(v62 + 68);
      if ( v127 == v62 )
        goto LABEL_122;
      while ( 2 )
      {
        v63 = *(__int64 **)v44;
        v64 = *(_QWORD *)((*(_QWORD *)(v62 + 80) & 0xFFFFFFFFFFFFFFF8LL) + 16);
        v65 = *(unsigned int *)(v44 + 8);
        v66 = *(_DWORD *)(v64 + 12);
        v67 = v65 - 1;
        v65 *= 8;
        v68 = (__int64 *)(*(_QWORD *)v44 + v65);
        v69 = 8LL * (v66 & v67);
        v70 = (__int64 *)(*(_QWORD *)v44 + v69);
        if ( v69 == v65 )
        {
LABEL_132:
          if ( v63 == v70 )
          {
LABEL_110:
            ++v132;
            goto LABEL_111;
          }
          while ( 1 )
          {
            v84 = *v63;
            if ( (unsigned __int64)*v63 > 1 )
            {
              if ( *(_DWORD *)(v84 + 12) == v66 && v64 == v84 )
                goto LABEL_121;
            }
            else if ( !v84 )
            {
              ++v132;
LABEL_111:
              v59 = v135;
              if ( v132 >= *(_DWORD *)(v135 - 4) )
              {
LABEL_112:
                v46 = v61;
                v49 = v60;
                goto LABEL_91;
              }
              goto LABEL_102;
            }
            if ( v70 == ++v63 )
              goto LABEL_110;
          }
        }
        v71 = (__int64 *)(*(_QWORD *)v44 + v69);
        while ( 2 )
        {
          v72 = *v71;
          if ( (unsigned __int64)*v71 <= 1 )
          {
            if ( !v72 )
              goto LABEL_110;
            goto LABEL_107;
          }
          if ( *(_DWORD *)(v72 + 12) != v66 || v64 != v72 )
          {
LABEL_107:
            if ( v68 == ++v71 )
              goto LABEL_132;
            continue;
          }
          break;
        }
LABEL_121:
        v62 += 8;
        if ( v127 != v62 )
          continue;
        break;
      }
LABEL_122:
      v46 = v61;
      v74 = *(unsigned int *)(v44 + 8);
      v128 = 2 * v74;
      if ( 3 * (int)v74 < (unsigned int)(4 * (*(_DWORD *)(v44 + 12) + *(_DWORD *)(v44 + 16))) )
      {
        v76 = 8LL * v128;
        v75 = (__int64 *)sub_186B270(v76);
        if ( v128 )
          v75 = (__int64 *)memset(v75, 0, v76);
        v78 = (__int64)&v75[v76 / 8];
        v94 = (__int64 *)(*(_QWORD *)v44 + 8LL * *(unsigned int *)(v44 + 8));
        v77 = v128 - 1;
        if ( *(__int64 **)v44 != v94 )
        {
          v95 = v48;
          v96 = *(__int64 **)v44;
          do
          {
            while ( (unsigned __int64)*v96 <= 1 )
            {
              if ( v94 == ++v96 )
                goto LABEL_175;
            }
            v97 = *(_DWORD *)(*v96 + 12) & (v128 - 1);
            v98 = &v75[v97];
            if ( v128 == v97 )
            {
LABEL_179:
              if ( v75 == v98 )
              {
LABEL_187:
                sub_1872CE0("");
                sub_1873130(114, 213);
              }
              v99 = v75;
              while ( *v99 )
              {
                if ( v98 == ++v99 )
                  goto LABEL_187;
              }
            }
            else
            {
              v99 = &v75[v97];
              while ( *v99 )
              {
                if ( &v75[v76 / 8] == ++v99 )
                  goto LABEL_179;
              }
            }
            v100 = *v96++;
            *v99 = v100;
          }
          while ( v94 != v96 );
LABEL_175:
          v48 = v95;
          v78 = (__int64)&v75[v76 / 8];
          v77 = v128 - 1;
          v76 = 8LL * v128;
          v94 = *(__int64 **)v44;
        }
        if ( v94 )
        {
          v141 = v78;
          v136 = v77;
          v133 = v75;
          sub_186B220(v94);
          v78 = v141;
          v77 = v136;
          v75 = v133;
        }
        *(_QWORD *)v44 = v75;
        *(_DWORD *)(v44 + 16) = 0;
        *(_DWORD *)(v44 + 8) = v128;
        v52 = *(_DWORD *)(v47 + 12);
      }
      else
      {
        v75 = *(__int64 **)v44;
        v76 = 8 * v74;
        v77 = v74 - 1;
        v78 = *(_QWORD *)v44 + 8 * v74;
      }
      v79 = 8LL * (v52 & v77);
      v80 = &v75[(unsigned __int64)v79 / 8];
      if ( v79 != v76 )
      {
        v81 = &v75[(unsigned __int64)v79 / 8];
        v82 = nullptr;
        while ( 1 )
        {
          v83 = *v81;
          if ( (unsigned __int64)*v81 > 1 )
          {
            if ( *(_DWORD *)(v83 + 12) == v52 && v83 == v47 )
            {
              *v81 = v47;
              goto LABEL_148;
            }
          }
          else
          {
            if ( !v83 )
            {
              if ( v82 )
                goto LABEL_185;
              v82 = v81;
              goto LABEL_186;
            }
            v82 = v81;
          }
          if ( ++v81 == (__int64 *)v78 )
            goto LABEL_143;
        }
      }
      v82 = nullptr;
LABEL_143:
      while ( 2 )
      {
        if ( v80 == v75 )
        {
          sub_1872CE0("");
          sub_1873130(114, 405);
        }
        v85 = *v75;
        if ( (unsigned __int64)*v75 > 1 )
        {
          if ( *(_DWORD *)(v85 + 12) == v52 && v85 == v47 )
          {
            *v75 = v47;
            goto LABEL_148;
          }
          goto LABEL_142;
        }
        if ( v85 )
        {
          v82 = v75;
LABEL_142:
          ++v75;
          continue;
        }
        break;
      }
      if ( v82 )
LABEL_185:
        --*(_DWORD *)(v44 + 16);
      else
        v82 = v75;
LABEL_186:
      *v82 = v47;
      ++*(_DWORD *)(v44 + 12);
LABEL_148:
      v86 = *((unsigned int *)v43 + 2);
      v87 = v86 - 1;
      v86 *= 8;
      v88 = (__int64 *)((char *)*v43 + v86);
      v89 = 8LL * (v52 & v87);
      v90 = (__int64 *)((char *)*v43 + v89);
      if ( v89 != v86 )
      {
        for ( j = (__int64 *)((char *)*v43 + v89); v88 != j; ++j )
        {
          v92 = *j;
          if ( (unsigned __int64)*j > 1 )
          {
            if ( *(_DWORD *)(v92 + 12) == v52 && v92 == v47 )
            {
LABEL_188:
              v101 = j + 1;
              if ( v88 == j + 1 )
                v101 = *v43;
              v102 = *((_DWORD *)v43 + 3) - 1;
              if ( *v101 )
              {
                v103 = *((unsigned int *)v43 + 4);
                *j = 1;
                *((_DWORD *)v43 + 3) = v102;
                if ( v102 < 0x40 )
                  v102 = 64;
                *((_DWORD *)v43 + 4) = v103 + 1;
                if ( v102 < (int)v103 + 1 && !(unsigned __int8)sub_186AF10(v103) )
                {
                  v129 = *((_DWORD *)v43 + 2);
                  v104 = (_QWORD *)sub_186B270(8LL * v129);
                  v105 = v104;
                  if ( v129 )
                    memset(v104, 0, 8LL * v129);
                  v106 = *((unsigned int *)v43 + 2);
                  v107 = (char *)*v43;
                  v108 = (char *)*v43 + 8 * v106;
                  v130 = &v105[v106];
                  if ( *v43 != v108 )
                  {
                    v109 = v44;
                    v110 = v106 - 1;
                    v111 = v43;
                    v112 = v46;
                    v113 = v108;
                    v114 = 8 * v106;
                    v115 = v48;
                    v116 = v107;
                    do
                    {
                      while ( *(_QWORD *)v116 <= 1u )
                      {
                        v116 += 8;
                        if ( v113 == v116 )
                          goto LABEL_206;
                      }
                      v117 = 8LL * (*(_DWORD *)(*(_QWORD *)v116 + 12LL) & v110);
                      v118 = &v105[(unsigned __int64)v117 / 8];
                      if ( v114 == v117 )
                      {
LABEL_222:
                        if ( v105 == v118 )
                        {
LABEL_231:
                          sub_1872CE0("");
                          sub_1873130(114, 213);
                        }
                        v119 = v105;
                        while ( *v119 )
                        {
                          if ( v118 == ++v119 )
                            goto LABEL_231;
                        }
                      }
                      else
                      {
                        v119 = &v105[(unsigned __int64)v117 / 8];
                        while ( *v119 )
                        {
                          if ( v130 == ++v119 )
                            goto LABEL_222;
                        }
                      }
                      v120 = *(_QWORD *)v116;
                      v116 += 8;
                      *v119 = v120;
                    }
                    while ( v113 != v116 );
LABEL_206:
                    v108 = (char *)*v111;
                    v46 = v112;
                    v48 = v115;
                    v44 = v109;
                    v43 = v111;
                  }
                  if ( v108 )
                    sub_186B220(v108);
                  *v43 = v105;
                  *((_DWORD *)v43 + 4) = 0;
                }
              }
              else
              {
                *j = 0;
                *((_DWORD *)v43 + 3) = v102;
              }
              goto LABEL_155;
            }
          }
          else if ( !v92 )
          {
            goto LABEL_155;
          }
        }
      }
      if ( *v43 != v90 )
      {
        for ( j = (__int64 *)*v43; v90 != j; ++j )
        {
          v93 = *j;
          if ( (unsigned __int64)*j > 1 )
          {
            if ( *(_DWORD *)(v93 + 12) == v52 && v93 == v47 )
              goto LABEL_188;
          }
          else if ( !v93 )
          {
            v49 = 1;
            goto LABEL_91;
          }
        }
      }
LABEL_155:
      v49 = 1;
LABEL_91:
      result = v48 + 1;
      if ( (_QWORD *)v46 != v48 + 1 )
      {
        while ( 1 )
        {
          v47 = *result;
          v48 = result;
          if ( *result > 1u )
            break;
          if ( (_QWORD *)v46 == ++result )
            goto LABEL_96;
        }
        if ( (_QWORD *)v46 != result )
          continue;
      }
LABEL_96:
      if ( !(_BYTE)v49 )
        return result;
      result = *v43;
      v46 = (__int64)*v43 + 8 * *((unsigned int *)v43 + 2);
      if ( *v43 == (void *)v46 )
        return result;
      goto LABEL_80;
    }
  }
  return result;
}

