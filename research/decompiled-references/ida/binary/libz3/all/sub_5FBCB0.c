__int64 __fastcall sub_5FBCB0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  __int64 *v6; // rcx
  int v7; // esi
  unsigned int v8; // edx
  __int64 *v9; // rdi
  __int64 v10; // rdx
  __int64 *v11; // r8
  __int64 *i; // rax
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 *v15; // rcx
  unsigned int v16; // edx
  __int64 *v17; // rdi
  __int64 v18; // rdx
  __int64 *v19; // r8
  __int64 *j; // rax
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 *v23; // rcx
  unsigned int v24; // edx
  __int64 *v25; // rdi
  __int64 v26; // rdx
  __int64 *v27; // r8
  __int64 *k; // rax
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 *v31; // rcx
  unsigned int v32; // edx
  __int64 *v33; // rdi
  __int64 v34; // rdx
  __int64 *v35; // r8
  __int64 *m; // rax
  __int64 v37; // rdx
  __int64 v38; // rax
  int v39; // r8d
  unsigned int v40; // r13d
  __m128i *v41; // r12
  unsigned int v42; // r9d
  __int64 v43; // rcx
  __m128i *v44; // r14
  __int64 v45; // rax
  __m128i *v46; // rdi
  __m128i *v47; // rax
  __int64 *v48; // rcx
  __int64 v49; // rdx
  unsigned int v50; // edx
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  int v58; // r8d
  unsigned int v59; // r13d
  __m128i *v60; // r12
  unsigned int v61; // ecx
  size_t v62; // r14
  __m128i *v63; // r15
  __int64 v64; // rax
  __m128i *v65; // rdi
  __m128i *v66; // rax
  __m128i *v67; // rcx
  __int64 v68; // rdx
  __int64 v69; // rax
  unsigned int v70; // r12d
  unsigned int v71; // r15d
  __int64 *v72; // r8
  __int64 v73; // rax
  __int64 v74; // rcx
  __int64 *v75; // r10
  __int64 *v76; // r9
  __int64 *v77; // rax
  __int64 *v78; // rcx
  unsigned __int64 v79; // rdi
  __m128i *v80; // rax
  __m128i *v81; // r8
  __m128i *v82; // rdi
  const __m128i *v83; // r15
  const __m128i *v84; // r10
  __int64 v85; // rax
  __m128i *v86; // rdx
  __m128i *v87; // rax
  __m128i *v88; // rax
  __m128i *v89; // r8
  __m128i *v90; // rdi
  const __m128i *v91; // r10
  const __m128i *v92; // r9
  __int64 v93; // rax
  __m128i *v94; // rdx
  __m128i *v95; // rax
  size_t v96; // r14
  __m128i *v97; // rax
  __m128i *v98; // r13
  __m128i *v99; // r8
  __m128i *v100; // rdi
  const __m128i *v101; // rcx
  const __m128i *v102; // rax
  __int64 v103; // rdx
  __m128i *v104; // rsi
  __m128i *v105; // rdx
  unsigned __int64 v106; // rdi

  v5 = *(unsigned int *)(a2 + 160);
  v6 = *(__int64 **)(a2 + 152);
  v7 = *(_DWORD *)(a3 + 12);
  v8 = v5 - 1;
  v5 *= 8;
  v9 = (__int64 *)((char *)v6 + v5);
  v10 = 8LL * (v7 & v8);
  v11 = &v6[(unsigned __int64)v10 / 8];
  if ( v10 != v5 )
  {
    for ( i = &v6[(unsigned __int64)v10 / 8]; v9 != i; ++i )
    {
      v13 = *i;
      if ( (unsigned __int64)*i > 1 )
      {
        if ( *(_DWORD *)(v13 + 12) == v7 && v13 == a3 )
          return 0;
      }
      else if ( !v13 )
      {
        goto LABEL_8;
      }
    }
  }
  for ( ; v11 != v6; ++v6 )
  {
    v52 = *v6;
    if ( (unsigned __int64)*v6 > 1 )
    {
      if ( *(_DWORD *)(v52 + 12) == v7 && v52 == a3 )
        return 0;
    }
    else if ( !v52 )
    {
      break;
    }
  }
LABEL_8:
  v14 = *(unsigned int *)(a1 + 104);
  v15 = *(__int64 **)(a1 + 96);
  v16 = v14 - 1;
  v14 *= 8;
  v17 = (__int64 *)((char *)v15 + v14);
  v18 = 8LL * (v7 & v16);
  v19 = &v15[(unsigned __int64)v18 / 8];
  if ( v18 != v14 )
  {
    for ( j = &v15[(unsigned __int64)v18 / 8]; v17 != j; ++j )
    {
      v21 = *j;
      if ( (unsigned __int64)*j > 1 )
      {
        if ( *(_DWORD *)(v21 + 12) == v7 && v21 == a3 )
          return 0;
      }
      else if ( !v21 )
      {
        goto LABEL_15;
      }
    }
  }
  for ( ; v19 != v15; ++v15 )
  {
    v53 = *v15;
    if ( (unsigned __int64)*v15 > 1 )
    {
      if ( *(_DWORD *)(v53 + 12) == v7 && v53 == a3 )
        return 0;
    }
    else if ( !v53 )
    {
      break;
    }
  }
LABEL_15:
  v22 = *(unsigned int *)(a1 + 128);
  v23 = *(__int64 **)(a1 + 120);
  v24 = v22 - 1;
  v22 *= 8;
  v25 = (__int64 *)((char *)v23 + v22);
  v26 = 8LL * (v7 & v24);
  v27 = &v23[(unsigned __int64)v26 / 8];
  if ( v26 != v22 )
  {
    for ( k = &v23[(unsigned __int64)v26 / 8]; v25 != k; ++k )
    {
      v29 = *k;
      if ( (unsigned __int64)*k > 1 )
      {
        if ( *(_DWORD *)(v29 + 12) == v7 && v29 == a3 )
          return 0;
      }
      else if ( !v29 )
      {
        goto LABEL_22;
      }
    }
  }
  for ( ; v27 != v23; ++v23 )
  {
    v54 = *v23;
    if ( (unsigned __int64)*v23 > 1 )
    {
      if ( *(_DWORD *)(v54 + 12) == v7 && v54 == a3 )
        return 0;
    }
    else if ( !v54 )
    {
      break;
    }
  }
LABEL_22:
  v30 = *(unsigned int *)(a1 + 80);
  v31 = *(__int64 **)(a1 + 72);
  v32 = v30 - 1;
  v30 *= 8;
  v33 = (__int64 *)((char *)v31 + v30);
  v34 = 8LL * (v7 & v32);
  v35 = &v31[(unsigned __int64)v34 / 8];
  if ( v34 != v30 )
  {
    for ( m = &v31[(unsigned __int64)v34 / 8]; v33 != m; ++m )
    {
      v37 = *m;
      if ( (unsigned __int64)*m > 1 )
      {
        if ( *(_DWORD *)(v37 + 12) == v7 && v37 == a3 )
          return 0;
      }
      else if ( !v37 )
      {
        goto LABEL_29;
      }
    }
  }
  for ( ; v35 != v31; ++v31 )
  {
    v55 = *v31;
    if ( (unsigned __int64)*v31 > 1 )
    {
      if ( *(_DWORD *)(v55 + 12) == v7 && v55 == a3 )
        return 0;
    }
    else if ( !v55 )
    {
      break;
    }
  }
LABEL_29:
  v38 = *(unsigned int *)(a1 + 152);
  v39 = *(_DWORD *)(a1 + 160);
  v40 = 2 * v38;
  if ( 3 * (int)v38 < (unsigned int)(4 * (v39 + *(_DWORD *)(a1 + 156))) )
  {
    v80 = (__m128i *)sub_186B270(16LL * v40);
    v43 = 16LL * v40;
    v41 = v80;
    v81 = &v80[(unsigned __int64)v43 / 0x10];
    if ( v40 )
    {
      do
      {
        v80->m128i_i64[0] = 0;
        ++v80;
        v80[-1].m128i_i32[2] = 0;
      }
      while ( v80 != v81 );
    }
    v82 = *(__m128i **)(a1 + 144);
    v42 = v40 - 1;
    v44 = v81;
    v83 = v82;
    v84 = &v82[*(unsigned int *)(a1 + 152)];
    if ( v82 != v84 )
    {
      do
      {
        if ( v83->m128i_i64[0] > 1uLL )
        {
          v85 = 16LL * (*(_DWORD *)(v83->m128i_i64[0] + 12) & v42);
          v86 = &v41[(unsigned __int64)v85 / 0x10];
          if ( v43 == v85 )
          {
LABEL_126:
            if ( v41 == v86 )
            {
LABEL_135:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v87 = v41;
            while ( v87->m128i_i64[0] )
            {
              if ( v86 == ++v87 )
                goto LABEL_135;
            }
          }
          else
          {
            v87 = &v41[(unsigned __int64)v85 / 0x10];
            while ( v87->m128i_i64[0] )
            {
              if ( v81 == ++v87 )
                goto LABEL_126;
            }
          }
          *v87 = _mm_loadu_si128(v83);
        }
        ++v83;
      }
      while ( v84 != v83 );
      v82 = *(__m128i **)(a1 + 144);
    }
    if ( v82 )
    {
      sub_186B220(v82);
      v43 = 16LL * v40;
      v42 = v40 - 1;
    }
    *(_QWORD *)(a1 + 144) = v41;
    v7 = *(_DWORD *)(a3 + 12);
    v39 = 0;
    *(_DWORD *)(a1 + 152) = v40;
    *(_DWORD *)(a1 + 160) = 0;
  }
  else
  {
    v41 = *(__m128i **)(a1 + 144);
    v42 = v38 - 1;
    v43 = 16 * v38;
    v44 = &v41[v38];
  }
  v45 = 16LL * (v7 & v42);
  v46 = &v41[(unsigned __int64)v45 / 0x10];
  if ( v45 != v43 )
  {
    v47 = &v41[(unsigned __int64)v45 / 0x10];
    v48 = nullptr;
    while ( 1 )
    {
      v49 = v47->m128i_i64[0];
      if ( v47->m128i_i64[0] > 1uLL )
      {
        if ( *(_DWORD *)(v49 + 12) == v7 && v49 == a3 )
          goto LABEL_84;
      }
      else
      {
        if ( !v49 )
          goto LABEL_81;
        v48 = (__int64 *)v47;
      }
      if ( ++v47 == v44 )
        goto LABEL_76;
    }
  }
  v48 = nullptr;
  while ( 1 )
  {
LABEL_76:
    if ( v46 == v41 )
      goto LABEL_197;
    v56 = v41->m128i_i64[0];
    if ( v41->m128i_i64[0] <= 1uLL )
      break;
    if ( *(_DWORD *)(v56 + 12) == v7 && v56 == a3 )
    {
      v47 = v41;
      goto LABEL_84;
    }
LABEL_75:
    ++v41;
  }
  if ( v56 )
  {
    v48 = (__int64 *)v41;
    goto LABEL_75;
  }
  v47 = v41;
LABEL_81:
  if ( v48 )
  {
    v47 = (__m128i *)v48;
    *(_DWORD *)(a1 + 160) = v39 - 1;
  }
  v47->m128i_i64[0] = a3;
  v47->m128i_i32[2] = 0;
  ++*(_DWORD *)(a1 + 156);
LABEL_84:
  v50 = 1;
  if ( v47->m128i_i32[2] <= 1 )
    return v50;
  v57 = *(unsigned int *)(a1 + 200);
  v58 = *(_DWORD *)(a1 + 208);
  v59 = 2 * v57;
  if ( 3 * (int)v57 < (unsigned int)(4 * (v58 + *(_DWORD *)(a1 + 204))) )
  {
    v62 = 16LL * v59;
    v88 = (__m128i *)sub_186B270(v62);
    v60 = v88;
    v89 = &v88[v62 / 0x10];
    if ( v59 )
    {
      do
      {
        v88->m128i_i64[0] = 0;
        ++v88;
        v88[-1].m128i_i32[2] = 0;
      }
      while ( v88 != v89 );
    }
    v90 = *(__m128i **)(a1 + 192);
    v61 = v59 - 1;
    v63 = v89;
    v91 = v90;
    v92 = &v90[*(unsigned int *)(a1 + 200)];
    if ( v90 != v92 )
    {
      do
      {
        if ( v91->m128i_i64[0] > 1uLL )
        {
          v93 = 16LL * (*(_DWORD *)(v91->m128i_i64[0] + 12) & v61);
          v94 = &v60[(unsigned __int64)v93 / 0x10];
          if ( v62 == v93 )
          {
LABEL_151:
            if ( v60 == v94 )
            {
LABEL_160:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v95 = v60;
            while ( v95->m128i_i64[0] )
            {
              if ( v94 == ++v95 )
                goto LABEL_160;
            }
          }
          else
          {
            v95 = &v60[(unsigned __int64)v93 / 0x10];
            while ( v95->m128i_i64[0] )
            {
              if ( v89 == ++v95 )
                goto LABEL_151;
            }
          }
          *v95 = _mm_loadu_si128(v91);
        }
        ++v91;
      }
      while ( v92 != v91 );
      v90 = *(__m128i **)(a1 + 192);
    }
    if ( v90 )
    {
      sub_186B220(v90);
      v61 = v59 - 1;
    }
    *(_QWORD *)(a1 + 192) = v60;
    v7 = *(_DWORD *)(a3 + 12);
    v58 = 0;
    *(_DWORD *)(a1 + 200) = v59;
    *(_DWORD *)(a1 + 208) = 0;
  }
  else
  {
    v60 = *(__m128i **)(a1 + 192);
    v61 = v57 - 1;
    v62 = 16 * v57;
    v63 = &v60[v57];
  }
  v64 = 16LL * (v7 & v61);
  v65 = &v60[(unsigned __int64)v64 / 0x10];
  if ( v64 == v62 )
  {
    v67 = nullptr;
LABEL_98:
    while ( v65 != v60 )
    {
      v69 = v60->m128i_i64[0];
      if ( v60->m128i_i64[0] > 1uLL )
      {
        if ( *(_DWORD *)(v69 + 12) == v7 && v69 == a3 )
          goto LABEL_105;
      }
      else
      {
        if ( !v69 )
        {
          if ( v67 )
            goto LABEL_103;
          goto LABEL_104;
        }
        v67 = v60;
      }
      ++v60;
    }
LABEL_197:
    sub_1872CE0("");
    sub_1873130(114, 461);
  }
  v66 = &v60[(unsigned __int64)v64 / 0x10];
  v67 = nullptr;
  while ( 1 )
  {
    v68 = v66->m128i_i64[0];
    if ( v66->m128i_i64[0] <= 1uLL )
      break;
    if ( *(_DWORD *)(v68 + 12) == v7 && v68 == a3 )
    {
      v60 = v66;
      goto LABEL_105;
    }
LABEL_91:
    if ( ++v66 == v63 )
      goto LABEL_98;
  }
  if ( v68 )
  {
    v67 = v66;
    goto LABEL_91;
  }
  v60 = v66;
  if ( !v67 )
    goto LABEL_104;
LABEL_103:
  v60 = v67;
  *(_DWORD *)(a1 + 208) = v58 - 1;
LABEL_104:
  v60->m128i_i64[0] = a3;
  v60->m128i_i32[2] = 0;
  ++*(_DWORD *)(a1 + 204);
LABEL_105:
  if ( v60->m128i_i32[2] > 1 )
    return 0;
  v70 = *(_DWORD *)(a1 + 152);
  v50 = *(_DWORD *)(a1 + 160);
  v71 = 2 * v70;
  if ( 3 * v70 < 4 * (v50 + *(_DWORD *)(a1 + 156)) )
  {
    v70 *= 2;
    v96 = 16LL * v71;
    v97 = (__m128i *)sub_186B270(v96);
    v98 = v97;
    v99 = &v97[v96 / 0x10];
    if ( v71 )
    {
      do
      {
        v97->m128i_i64[0] = 0;
        ++v97;
        v97[-1].m128i_i32[2] = 0;
      }
      while ( v97 != v99 );
    }
    v100 = *(__m128i **)(a1 + 144);
    v101 = v100;
    v102 = &v100[*(unsigned int *)(a1 + 152)];
    if ( v100 != v102 )
    {
      do
      {
        if ( v101->m128i_i64[0] > 1uLL )
        {
          v103 = 16LL * (*(_DWORD *)(v101->m128i_i64[0] + 12) & (v71 - 1));
          v104 = &v98[(unsigned __int64)v103 / 0x10];
          if ( v96 == v103 )
          {
LABEL_172:
            if ( v98 == v104 )
            {
LABEL_195:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v105 = v98;
            while ( v105->m128i_i64[0] )
            {
              if ( v104 == ++v105 )
                goto LABEL_195;
            }
          }
          else
          {
            v105 = &v98[(unsigned __int64)v103 / 0x10];
            while ( v105->m128i_i64[0] )
            {
              if ( v99 == ++v105 )
                goto LABEL_172;
            }
          }
          *v105 = _mm_loadu_si128(v101);
        }
        ++v101;
      }
      while ( v102 != v101 );
      v100 = *(__m128i **)(a1 + 144);
    }
    if ( v100 )
      sub_186B220(v100);
    *(_QWORD *)(a1 + 144) = v98;
    v7 = *(_DWORD *)(a3 + 12);
    v50 = 0;
    *(_DWORD *)(a1 + 152) = v71;
    *(_DWORD *)(a1 + 160) = 0;
  }
  v72 = *(__int64 **)(a1 + 144);
  v73 = 16LL * v70;
  v74 = 16LL * (v7 & (v70 - 1));
  v75 = &v72[(unsigned __int64)v73 / 8];
  v76 = &v72[(unsigned __int64)v74 / 8];
  if ( v74 == v73 )
  {
    v78 = nullptr;
LABEL_184:
    if ( v72 != v76 )
    {
      v77 = *(__int64 **)(a1 + 144);
      while ( 1 )
      {
        v106 = *v77;
        if ( (unsigned __int64)*v77 > 1 )
        {
          if ( *(_DWORD *)(v106 + 12) == v7 && v106 == a3 )
            goto LABEL_139;
        }
        else
        {
          if ( !v106 )
            goto LABEL_136;
          v78 = v77;
        }
        v77 += 2;
        if ( v76 == v77 )
          goto LABEL_197;
      }
    }
    goto LABEL_197;
  }
  v77 = &v72[(unsigned __int64)v74 / 8];
  v78 = nullptr;
  while ( 1 )
  {
    v79 = *v77;
    if ( (unsigned __int64)*v77 <= 1 )
      break;
    if ( *(_DWORD *)(v79 + 12) == v7 && v79 == a3 )
      goto LABEL_139;
LABEL_111:
    v77 += 2;
    if ( v75 == v77 )
      goto LABEL_184;
  }
  if ( v79 )
  {
    v78 = v77;
    goto LABEL_111;
  }
LABEL_136:
  if ( v78 )
  {
    --v50;
    v77 = v78;
    *(_DWORD *)(a1 + 160) = v50;
  }
  *v77 = a3;
  *((_DWORD *)v77 + 2) = 0;
  ++*(_DWORD *)(a1 + 156);
LABEL_139:
  LOBYTE(v50) = *((_DWORD *)v77 + 2) <= 4;
  return v50;
}

