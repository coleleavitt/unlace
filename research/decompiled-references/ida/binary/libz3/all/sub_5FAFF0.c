__int64 __fastcall sub_5FAFF0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 result; // rax
  __int64 v4; // rdi
  __int64 v5; // r8
  __int64 v6; // rbp
  __int64 *v7; // r12
  __int64 v8; // r15
  __int64 v9; // r13
  int v10; // edi
  __int64 v11; // r14
  unsigned int v12; // eax
  unsigned int v13; // esi
  __m128i *v14; // rbx
  int v15; // r11d
  __int64 v16; // r9
  __int64 *v17; // rbp
  int v18; // esi
  __int64 v19; // r11
  __m128i *v20; // r10
  __m128i *v21; // rax
  __int64 *v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rax
  __m128i *v25; // rax
  int v26; // esi
  __m128i *v27; // r10
  const __m128i *v28; // rcx
  __int64 v29; // rdi
  __m128i *v30; // r8
  __int64 v31; // rdx
  __m128i *v32; // rsi
  __m128i *v33; // rdx
  __m128i v34; // xmm0
  __int64 v35; // r12
  __int64 v36; // r8
  int v37; // edi
  __int64 v38; // r14
  __m128i *v39; // rbx
  unsigned int v40; // r11d
  size_t v41; // rbp
  __int64 *v42; // r13
  int v43; // esi
  __int64 v44; // r11
  __m128i *v45; // r10
  __int64 *v46; // rax
  __int64 *v47; // rcx
  __int64 v48; // rdx
  __int64 v49; // rax
  __m128i *v50; // rax
  int v51; // r10d
  __m128i *v52; // r9
  __int64 v53; // rcx
  __int64 v54; // rdi
  __m128i *v55; // r8
  __m128i *v56; // r13
  const __m128i *v57; // rbx
  __int64 v58; // rax
  __m128i *v59; // rdx
  __m128i *v60; // rax
  __m128i v61; // xmm0
  __int64 v62; // rax
  __int64 v63; // rax
  int v64; // edi
  _QWORD *v65; // rbx
  __int64 v66; // r8
  unsigned int v67; // r10d
  _QWORD *v68; // r13
  int v69; // ecx
  __int64 v70; // rax
  _QWORD *v71; // r10
  _QWORD *v72; // rax
  _QWORD *v73; // rsi
  __int64 v74; // rdx
  __int64 v75; // rax
  _QWORD *v76; // rax
  int v77; // ecx
  char *v78; // r11
  char *v79; // r9
  __int64 v80; // rax
  char *v81; // rbp
  __int64 v82; // r15
  _QWORD *v83; // r12
  char *v84; // rbx
  __int64 v85; // r9
  __int64 v86; // rax
  _QWORD *v87; // rdx
  _QWORD *v88; // rax
  __int64 v89; // rdx
  __int64 v90; // rax
  int v91; // edi
  __m128i *v92; // rbx
  unsigned int v93; // r9d
  __int64 v94; // rcx
  __int64 *m128i_i64; // rbp
  int v96; // esi
  __int64 v97; // r9
  __m128i *v98; // r10
  __int64 *v99; // rax
  __int64 *v100; // rcx
  __int64 v101; // rdx
  __int64 v102; // rax
  __m128i *v103; // rax
  int v104; // edx
  __m128i *v105; // r11
  __int64 v106; // r10
  __int64 v107; // rsi
  __m128i *v108; // r8
  __int64 v109; // rax
  __m128i *v110; // r13
  const __m128i *v111; // rbx
  __int64 v112; // rdx
  __m128i *v113; // rsi
  __m128i *v114; // rdx
  __m128i v115; // xmm0
  int v117; // [rsp+0h] [rbp-78h]
  __int64 v118; // [rsp+0h] [rbp-78h]
  size_t v119; // [rsp+0h] [rbp-78h]
  unsigned int v120; // [rsp+0h] [rbp-78h]
  int n; // [rsp+8h] [rbp-70h]
  size_t nd; // [rsp+8h] [rbp-70h]
  int na; // [rsp+8h] [rbp-70h]
  __int64 nb; // [rsp+8h] [rbp-70h]
  unsigned int ne; // [rsp+8h] [rbp-70h]
  int nc; // [rsp+8h] [rbp-70h]
  size_t nf; // [rsp+8h] [rbp-70h]
  int v128; // [rsp+10h] [rbp-68h]
  __int64 v129; // [rsp+10h] [rbp-68h]
  int v130; // [rsp+10h] [rbp-68h]
  int v131; // [rsp+18h] [rbp-60h]
  __int64 *v132; // [rsp+30h] [rbp-48h]
  __int64 v133; // [rsp+38h] [rbp-40h]

  v2 = *(_QWORD *)(a1 + 40);
  result = sub_654200(v2, 0);
  v4 = *(_QWORD *)(v2 + 2968);
  v5 = a1;
  if ( v4 )
  {
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 328LL))(v4, a1 + 96);
    v5 = a1;
  }
  v6 = *(_QWORD *)(a2 + 24);
  if ( !v6 )
    return result;
  result = v6 + 8LL * *(unsigned int *)(v6 - 4);
  v133 = result;
  if ( result == v6 )
    return result;
  v7 = *(__int64 **)(a2 + 24);
  v8 = v5;
  do
  {
    v9 = *v7;
    v10 = *(_DWORD *)(v8 + 160);
    v11 = *(_QWORD *)(*(_QWORD *)(*v7 + 40) + 16LL);
    v12 = *(_DWORD *)(v8 + 152);
    v13 = 2 * v12;
    if ( 3 * v12 < 4 * (v10 + *(_DWORD *)(v8 + 156)) )
    {
      n = 2 * v12;
      v25 = (__m128i *)sub_186B270(16LL * v13);
      v16 = 16LL * v13;
      v26 = n;
      v14 = v25;
      v27 = (__m128i *)((char *)v25 + v16);
      if ( n )
      {
        do
        {
          v25->m128i_i64[0] = 0;
          ++v25;
          v25[-1].m128i_i32[2] = 0;
        }
        while ( v25 != v27 );
      }
      v15 = n - 1;
      v17 = (__int64 *)v27;
      v28 = *(const __m128i **)(v8 + 144);
      v29 = *(unsigned int *)(v8 + 152);
      v30 = (__m128i *)&v28[v29];
      if ( v28 != &v28[v29] )
      {
        do
        {
          while ( v28->m128i_i64[0] <= 1uLL )
          {
            if ( v30 == ++v28 )
              goto LABEL_34;
          }
          v31 = 16LL * (*(_DWORD *)(v28->m128i_i64[0] + 12) & (unsigned int)v15);
          v32 = &v14[(unsigned __int64)v31 / 0x10];
          if ( v16 == v31 )
          {
LABEL_38:
            if ( v14 == v32 )
              goto LABEL_163;
            v33 = v14;
            while ( v33->m128i_i64[0] )
            {
              if ( v32 == ++v33 )
              {
LABEL_163:
                sub_1872CE0("");
                sub_1873130(114, 213);
              }
            }
          }
          else
          {
            v33 = &v14[(unsigned __int64)v31 / 0x10];
            while ( v33->m128i_i64[0] )
            {
              if ( v27 == ++v33 )
                goto LABEL_38;
            }
          }
          v34 = _mm_loadu_si128(v28++);
          *v33 = v34;
        }
        while ( v30 != v28 );
LABEL_34:
        v30 = *(__m128i **)(v8 + 144);
        v26 = n;
      }
      if ( v30 )
      {
        nd = v16;
        v117 = v15;
        sub_186B220(v30);
        v16 = nd;
        v15 = v117;
      }
      *(_QWORD *)(v8 + 144) = v14;
      v10 = 0;
      *(_DWORD *)(v8 + 152) = v26;
      *(_DWORD *)(v8 + 160) = 0;
    }
    else
    {
      v14 = *(__m128i **)(v8 + 144);
      v15 = v12 - 1;
      v16 = 16LL * v12;
      v17 = (__int64 *)((char *)v14->m128i_i64 + v16);
    }
    v18 = *(_DWORD *)(v11 + 12);
    v19 = 16LL * (v18 & (unsigned int)v15);
    v20 = &v14[(unsigned __int64)v19 / 0x10];
    if ( v19 != v16 )
    {
      v21 = &v14[(unsigned __int64)v19 / 0x10];
      v22 = nullptr;
      while ( 1 )
      {
        v23 = v21->m128i_i64[0];
        if ( v21->m128i_i64[0] > 1uLL )
        {
          if ( *(_DWORD *)(v23 + 12) == v18 && v11 == v23 )
          {
            v22 = (__int64 *)v21;
            goto LABEL_46;
          }
        }
        else
        {
          if ( !v23 )
          {
            if ( v22 )
              goto LABEL_44;
            v22 = (__int64 *)v21;
            goto LABEL_45;
          }
          v22 = (__int64 *)v21;
        }
        if ( ++v21 == (__m128i *)v17 )
          goto LABEL_19;
      }
    }
    v22 = nullptr;
    while ( 1 )
    {
LABEL_19:
      if ( v20 == v14 )
        goto LABEL_162;
      v24 = v14->m128i_i64[0];
      if ( v14->m128i_i64[0] <= 1uLL )
        break;
      if ( *(_DWORD *)(v24 + 12) == v18 && v11 == v24 )
      {
        v22 = (__int64 *)v14;
        goto LABEL_46;
      }
LABEL_18:
      ++v14;
    }
    if ( v24 )
    {
      v22 = (__int64 *)v14;
      goto LABEL_18;
    }
    if ( v22 )
LABEL_44:
      *(_DWORD *)(v8 + 160) = v10 - 1;
    else
      v22 = (__int64 *)v14;
LABEL_45:
    *v22 = v11;
    *((_DWORD *)v22 + 2) = 0;
    ++*(_DWORD *)(v8 + 156);
LABEL_46:
    ++*((_DWORD *)v22 + 2);
    if ( !*(_DWORD *)(v9 + 56) )
      goto LABEL_47;
    v90 = *(unsigned int *)(v8 + 176);
    v91 = *(_DWORD *)(v8 + 184);
    if ( 3 * (int)v90 < (unsigned int)(4 * (v91 + *(_DWORD *)(v8 + 180))) )
    {
      nc = 2 * v90;
      v119 = 16LL * (unsigned int)(2 * v90);
      v103 = (__m128i *)sub_186B270(v119);
      v94 = v119;
      v104 = nc;
      v92 = v103;
      v105 = &v103[v119 / 0x10];
      if ( nc )
      {
        do
        {
          v103->m128i_i64[0] = 0;
          ++v103;
          v103[-1].m128i_i32[2] = 0;
        }
        while ( v103 != v105 );
      }
      v106 = *(_QWORD *)(v8 + 168);
      v93 = nc - 1;
      m128i_i64 = (__int64 *)v105;
      v107 = 16LL * *(unsigned int *)(v8 + 176);
      v108 = (__m128i *)(v106 + v107);
      if ( v106 != v106 + v107 )
      {
        v109 = v9;
        v110 = v92;
        v111 = *(const __m128i **)(v8 + 168);
        do
        {
          while ( v111->m128i_i64[0] <= 1uLL )
          {
            if ( v108 == ++v111 )
              goto LABEL_179;
          }
          v112 = 16LL * (*(_DWORD *)(v111->m128i_i64[0] + 12) & (unsigned int)(nc - 1));
          v113 = &v110[(unsigned __int64)v112 / 0x10];
          if ( v119 == v112 )
          {
LABEL_183:
            if ( v110 == v113 )
              goto LABEL_195;
            v114 = v110;
            while ( v114->m128i_i64[0] )
            {
              if ( v113 == ++v114 )
              {
LABEL_195:
                sub_1872CE0("");
                sub_1873130(114, 213);
              }
            }
          }
          else
          {
            v114 = &v110[(unsigned __int64)v112 / 0x10];
            while ( v114->m128i_i64[0] )
            {
              if ( v105 == ++v114 )
                goto LABEL_183;
            }
          }
          v115 = _mm_loadu_si128(v111++);
          *v114 = v115;
        }
        while ( v108 != v111 );
LABEL_179:
        m128i_i64 = (__int64 *)v105;
        v108 = *(__m128i **)(v8 + 168);
        v92 = v110;
        v9 = v109;
        v93 = nc - 1;
        v104 = nc;
        v94 = v119;
      }
      if ( v108 )
      {
        v130 = v104;
        nf = v94;
        v120 = v93;
        sub_186B220(v108);
        v104 = v130;
        v94 = nf;
        v93 = v120;
      }
      *(_QWORD *)(v8 + 168) = v92;
      v91 = 0;
      *(_DWORD *)(v8 + 176) = v104;
      *(_DWORD *)(v8 + 184) = 0;
    }
    else
    {
      v92 = *(__m128i **)(v8 + 168);
      v93 = v90 - 1;
      v94 = 16 * v90;
      m128i_i64 = v92[v90].m128i_i64;
    }
    v96 = *(_DWORD *)(v11 + 12);
    v97 = 16LL * (v96 & v93);
    v98 = &v92[(unsigned __int64)v97 / 0x10];
    if ( v97 != v94 )
    {
      v99 = v92[(unsigned __int64)v97 / 0x10].m128i_i64;
      v100 = nullptr;
      while ( 1 )
      {
        v101 = *v99;
        if ( (unsigned __int64)*v99 > 1 )
        {
          if ( *(_DWORD *)(v101 + 12) == v96 && v11 == v101 )
          {
            v100 = v99;
            goto LABEL_192;
          }
        }
        else
        {
          if ( !v101 )
          {
            if ( v100 )
              goto LABEL_190;
            v100 = v99;
            goto LABEL_191;
          }
          v100 = v99;
        }
        v99 += 2;
        if ( v99 == m128i_i64 )
          goto LABEL_154;
      }
    }
    v100 = nullptr;
LABEL_154:
    while ( 2 )
    {
      if ( v98 == v92 )
        goto LABEL_162;
      v102 = v92->m128i_i64[0];
      if ( v92->m128i_i64[0] > 1uLL )
      {
        if ( *(_DWORD *)(v102 + 12) == v96 && v11 == v102 )
        {
          v100 = (__int64 *)v92;
          goto LABEL_192;
        }
        goto LABEL_153;
      }
      if ( v102 )
      {
        v100 = (__int64 *)v92;
LABEL_153:
        ++v92;
        continue;
      }
      break;
    }
    if ( v100 )
LABEL_190:
      *(_DWORD *)(v8 + 184) = v91 - 1;
    else
      v100 = (__int64 *)v92;
LABEL_191:
    *v100 = v11;
    *((_DWORD *)v100 + 2) = 0;
    ++*(_DWORD *)(v8 + 180);
LABEL_192:
    ++*((_DWORD *)v100 + 2);
LABEL_47:
    result = *(unsigned int *)(v9 + 68);
    if ( !(_DWORD)result )
      goto LABEL_92;
    v132 = v7;
    v35 = v9;
    v118 = v9 + 8 * result;
    while ( 2 )
    {
      v36 = *(unsigned int *)(v8 + 200);
      v37 = *(_DWORD *)(v8 + 208);
      v38 = *(_QWORD *)((*(_QWORD *)(v35 + 80) & 0xFFFFFFFFFFFFFFF8LL) + 16);
      if ( 3 * (int)v36 < (unsigned int)(4 * (v37 + *(_DWORD *)(v8 + 204))) )
      {
        na = 2 * v36;
        v41 = 16LL * (unsigned int)(2 * v36);
        v50 = (__m128i *)sub_186B270(v41);
        v51 = na;
        v39 = v50;
        v52 = &v50[v41 / 0x10];
        if ( na )
        {
          do
          {
            v50->m128i_i64[0] = 0;
            ++v50;
            v50[-1].m128i_i32[2] = 0;
          }
          while ( v50 != v52 );
        }
        v53 = *(_QWORD *)(v8 + 192);
        v40 = na - 1;
        v42 = (__int64 *)v52;
        v54 = 16LL * *(unsigned int *)(v8 + 200);
        v55 = (__m128i *)(v53 + v54);
        if ( v53 != v53 + v54 )
        {
          v56 = v39;
          v57 = *(const __m128i **)(v8 + 192);
          do
          {
            while ( v57->m128i_i64[0] <= 1uLL )
            {
              if ( v55 == ++v57 )
                goto LABEL_77;
            }
            v58 = 16LL * (*(_DWORD *)(v57->m128i_i64[0] + 12) & v40);
            v59 = &v56[(unsigned __int64)v58 / 0x10];
            if ( v41 == v58 )
            {
LABEL_81:
              if ( v56 == v59 )
                goto LABEL_111;
              v60 = v56;
              while ( v60->m128i_i64[0] )
              {
                if ( v59 == ++v60 )
                {
LABEL_111:
                  sub_1872CE0("");
                  sub_1873130(114, 213);
                }
              }
            }
            else
            {
              v60 = &v56[(unsigned __int64)v58 / 0x10];
              while ( v60->m128i_i64[0] )
              {
                if ( v52 == ++v60 )
                  goto LABEL_81;
              }
            }
            v61 = _mm_loadu_si128(v57++);
            *v60 = v61;
          }
          while ( v55 != v57 );
LABEL_77:
          v39 = v56;
          v42 = (__int64 *)v52;
          v55 = *(__m128i **)(v8 + 192);
        }
        if ( v55 )
        {
          sub_186B220(v55);
          v51 = na;
          v40 = na - 1;
        }
        *(_QWORD *)(v8 + 192) = v39;
        v37 = 0;
        *(_DWORD *)(v8 + 200) = v51;
        *(_DWORD *)(v8 + 208) = 0;
      }
      else
      {
        v39 = *(__m128i **)(v8 + 192);
        v40 = v36 - 1;
        v41 = 16 * v36;
        v42 = v39[v36].m128i_i64;
      }
      v43 = *(_DWORD *)(v38 + 12);
      v44 = 16LL * (v43 & v40);
      v45 = &v39[(unsigned __int64)v44 / 0x10];
      if ( v44 != v41 )
      {
        v46 = v39[(unsigned __int64)v44 / 0x10].m128i_i64;
        v47 = nullptr;
        while ( 1 )
        {
          v48 = *v46;
          if ( (unsigned __int64)*v46 > 1 )
          {
            if ( *(_DWORD *)(v48 + 12) == v43 && v38 == v48 )
            {
              v47 = v46;
              goto LABEL_89;
            }
          }
          else
          {
            if ( !v48 )
            {
              if ( v47 )
                goto LABEL_87;
              v47 = v46;
              goto LABEL_88;
            }
            v47 = v46;
          }
          v46 += 2;
          if ( v46 == v42 )
            goto LABEL_62;
        }
      }
      v47 = nullptr;
      if ( v45 == v39 )
        goto LABEL_162;
      while ( 2 )
      {
        v49 = v39->m128i_i64[0];
        if ( v39->m128i_i64[0] > 1uLL )
        {
          if ( *(_DWORD *)(v49 + 12) == v43 && v38 == v49 )
          {
            v47 = (__int64 *)v39;
            goto LABEL_89;
          }
          goto LABEL_61;
        }
        if ( v49 )
        {
          v47 = (__int64 *)v39;
LABEL_61:
          ++v39;
LABEL_62:
          if ( v45 == v39 )
          {
LABEL_162:
            sub_1872CE0("");
            sub_1873130(114, 461);
          }
          continue;
        }
        break;
      }
      if ( v47 )
LABEL_87:
        *(_DWORD *)(v8 + 208) = v37 - 1;
      else
        v47 = (__int64 *)v39;
LABEL_88:
      *v47 = v38;
      *((_DWORD *)v47 + 2) = 0;
      ++*(_DWORD *)(v8 + 204);
LABEL_89:
      v62 = *(_QWORD *)(v35 + 80);
      ++*((_DWORD *)v47 + 2);
      if ( (v62 & 7) != 1 )
        goto LABEL_90;
      v63 = *(unsigned int *)(v8 + 128);
      v64 = *(_DWORD *)(v8 + 136);
      if ( 3 * (int)v63 < (unsigned int)(4 * (v64 + *(_DWORD *)(v8 + 132))) )
      {
        v128 = 2 * v63;
        nb = 8LL * (unsigned int)(2 * v63);
        v76 = (_QWORD *)sub_186B270(nb);
        v77 = v128;
        v66 = nb;
        v65 = v76;
        if ( v128 )
        {
          memset(v76, 0, nb);
          v66 = nb;
          v77 = v128;
        }
        v78 = *(char **)(v8 + 120);
        v67 = v77 - 1;
        v68 = (_QWORD *)((char *)v65 + v66);
        v79 = &v78[8 * *(unsigned int *)(v8 + 128)];
        if ( v78 != v79 )
        {
          v80 = v8;
          v81 = *(char **)(v8 + 120);
          v82 = v35;
          v83 = v65;
          v84 = v79;
          v85 = v80;
          do
          {
            while ( *(_QWORD *)v81 <= 1u )
            {
              v81 += 8;
              if ( v84 == v81 )
                goto LABEL_128;
            }
            v86 = 8LL * (*(_DWORD *)(*(_QWORD *)v81 + 12LL) & v67);
            v87 = &v83[(unsigned __int64)v86 / 8];
            if ( v66 == v86 )
            {
LABEL_132:
              if ( v83 == v87 )
              {
LABEL_158:
                sub_1872CE0("");
                sub_1873130(114, 213);
              }
              v88 = v83;
              while ( *v88 )
              {
                if ( v87 == ++v88 )
                  goto LABEL_158;
              }
            }
            else
            {
              v88 = &v83[(unsigned __int64)v86 / 8];
              while ( *v88 )
              {
                if ( v68 == ++v88 )
                  goto LABEL_132;
              }
            }
            v89 = *(_QWORD *)v81;
            v81 += 8;
            *v88 = v89;
          }
          while ( v84 != v81 );
LABEL_128:
          v65 = v83;
          v35 = v82;
          v8 = v85;
          v79 = *(char **)(v85 + 120);
        }
        if ( v79 )
        {
          v131 = v77;
          v129 = v66;
          ne = v77 - 1;
          sub_186B220(v79);
          v77 = v131;
          v66 = v129;
          v67 = ne;
        }
        *(_QWORD *)(v8 + 120) = v65;
        v64 = 0;
        *(_DWORD *)(v8 + 128) = v77;
        *(_DWORD *)(v8 + 136) = 0;
      }
      else
      {
        v65 = *(_QWORD **)(v8 + 120);
        v66 = 8 * v63;
        v67 = v63 - 1;
        v68 = &v65[v63];
      }
      v69 = *(_DWORD *)(v38 + 12);
      v70 = 8LL * (v69 & v67);
      v71 = &v65[(unsigned __int64)v70 / 8];
      if ( v70 != v66 )
      {
        v72 = &v65[(unsigned __int64)v70 / 8];
        v73 = nullptr;
        while ( 1 )
        {
          v74 = *v72;
          if ( *v72 > 1u )
          {
            if ( *(_DWORD *)(v74 + 12) == v69 && v38 == v74 )
            {
              *v72 = v38;
              goto LABEL_90;
            }
          }
          else
          {
            if ( !v74 )
            {
              if ( v73 )
                goto LABEL_138;
              v73 = v72;
              goto LABEL_139;
            }
            v73 = v72;
          }
          if ( ++v72 == v68 )
            goto LABEL_107;
        }
      }
      v73 = nullptr;
LABEL_107:
      while ( 2 )
      {
        if ( v71 == v65 )
        {
          sub_1872CE0("");
          sub_1873130(114, 405);
        }
        v75 = *v65;
        if ( *v65 > 1u )
        {
          if ( *(_DWORD *)(v75 + 12) == v69 && v38 == v75 )
          {
            *v65 = v38;
            goto LABEL_90;
          }
          goto LABEL_106;
        }
        if ( v75 )
        {
          v73 = v65;
LABEL_106:
          ++v65;
          continue;
        }
        break;
      }
      if ( v73 )
LABEL_138:
        *(_DWORD *)(v8 + 136) = v64 - 1;
      else
        v73 = v65;
LABEL_139:
      *v73 = v38;
      ++*(_DWORD *)(v8 + 132);
LABEL_90:
      result = v118;
      v35 += 8;
      if ( v35 != v118 )
        continue;
      break;
    }
    v7 = v132;
LABEL_92:
    ++v7;
  }
  while ( (__int64 *)v133 != v7 );
  return result;
}

