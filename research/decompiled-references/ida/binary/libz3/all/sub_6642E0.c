__int64 __fastcall sub_6642E0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r15
  __int64 v5; // rcx
  __int64 *v6; // rdi
  int v7; // esi
  size_t v8; // rbp
  __int64 *v9; // r14
  __int64 *v10; // rbx
  __int64 v11; // r9
  __int64 *v12; // r8
  __int64 result; // rax
  __int64 v14; // rdx
  unsigned int v15; // r12d
  __int64 *v16; // rax
  __int64 *v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 *v20; // rax
  __int64 *v21; // r8
  __int64 *v22; // r9
  __int64 *v23; // rbp
  __int64 *v24; // rbx
  __int64 v25; // rax
  __int64 *v26; // rdx
  __int64 *v27; // rax
  _QWORD *v28; // r14
  __int64 v29; // rax
  __int16 v30; // ax
  __int64 v31; // rsi
  __int64 v32; // rax
  __int64 v33; // r9
  __int64 v34; // r11
  __int64 v35; // r12
  __int64 *v36; // rcx
  __int64 v37; // r14
  int v38; // edi
  __int64 *v39; // rbp
  unsigned int v40; // r8d
  int v41; // r10d
  size_t v42; // r14
  __int64 *v43; // rbx
  __int64 v44; // r8
  __int64 *v45; // rsi
  __int64 *v46; // rax
  __int64 v47; // rdx
  unsigned int v48; // ecx
  __int64 *v49; // rcx
  __int64 *v50; // rdx
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 *v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rbx
  __int64 *v56; // rax
  int v57; // ecx
  __int64 *v58; // rax
  unsigned int v59; // r8d
  __int64 *v60; // r9
  __int64 v61; // rdx
  __int64 *v62; // rsi
  __int64 *v63; // rdx
  __int64 v64; // rsi
  unsigned int v65; // eax
  unsigned int v66; // r10d
  unsigned int v67; // r14d
  __int64 v68; // rbp
  __int64 *v69; // rdi
  int v70; // esi
  __int64 *v71; // r12
  __int64 v72; // r8
  unsigned int v73; // r9d
  int v74; // r11d
  __int64 v75; // r8
  __int64 *v76; // rbx
  __int64 v77; // r9
  __int64 *v78; // rcx
  __int64 *v79; // rax
  __int64 v80; // rdx
  unsigned int v81; // r15d
  __int64 *v82; // rdi
  __int64 *v83; // rdx
  __int64 v84; // rax
  __int64 v85; // rax
  unsigned int v86; // edx
  __int64 *v87; // rax
  __int64 v88; // rdx
  int v89; // eax
  __int64 *i; // rax
  __int64 v91; // rdx
  __int64 *v92; // rax
  __int64 *v93; // rax
  unsigned int v94; // r14d
  __int64 *v95; // rcx
  __int64 v96; // rdx
  __int64 *v97; // rsi
  __int64 *v98; // rdx
  __int64 v99; // rsi
  __int64 v100; // rcx
  __int16 v101; // ax
  __int64 v102; // rax
  unsigned int v103; // edx
  __int64 v104; // rax
  __int64 *v105; // rax
  int v106; // edx
  __int64 v107; // rax
  __m128i *v108; // rbp
  size_t v109; // rbx
  __m128 *v110; // r12
  int v111; // esi
  __m128 v112; // xmm0
  __int64 v113; // rax
  __m128i *v114; // rdi
  __m128 *v115; // rax
  __m128 *v116; // rcx
  unsigned __int64 v117; // rdx
  __int64 v118; // rax
  __int64 v119; // rbx
  __int64 *v120; // rdi
  unsigned __int64 v121; // rax
  __int64 v122; // rcx
  __int64 v123; // rbx
  __int64 *v124; // rdi
  unsigned __int64 v125; // rax
  __int64 v126; // rcx
  __m128i *v127; // rdx
  __m128i *v128; // rax
  const __m128i *v129; // r14
  __m128i *v130; // rcx
  __int64 v131; // rdx
  __m128i *v132; // rsi
  __m128i *v133; // rdx
  __int64 v134; // rbx
  __int64 *v135; // rdi
  unsigned __int64 v136; // rdx
  __int64 v137; // rcx
  unsigned int v138; // [rsp+0h] [rbp-188h]
  _QWORD *v139; // [rsp+0h] [rbp-188h]
  __int64 v140; // [rsp+0h] [rbp-188h]
  unsigned int v141; // [rsp+0h] [rbp-188h]
  unsigned int v142; // [rsp+8h] [rbp-180h]
  unsigned int v143; // [rsp+8h] [rbp-180h]
  __int64 *v145; // [rsp+18h] [rbp-170h] BYREF
  __m128i *v146; // [rsp+20h] [rbp-168h]
  __int64 *v147; // [rsp+28h] [rbp-160h]
  __int64 *m128i_i64; // [rsp+30h] [rbp-158h]
  int v149; // [rsp+3Ch] [rbp-14Ch]
  void *ptr; // [rsp+40h] [rbp-148h]
  __int64 v151; // [rsp+48h] [rbp-140h]
  __int64 v152; // [rsp+50h] [rbp-138h] BYREF
  int v153; // [rsp+58h] [rbp-130h]

  v3 = a3;
  v5 = *(unsigned int *)(a2 + 8);
  v6 = *(__int64 **)a2;
  v7 = *(_DWORD *)(a3 + 12);
  v8 = 8 * v5;
  v9 = v6;
  v10 = &v6[v5];
  v11 = 8LL * (v7 & (unsigned int)(v5 - 1));
  v12 = &v6[(unsigned __int64)v11 / 8];
  if ( v11 != 8 * v5 )
  {
    for ( result = (__int64)&v6[(unsigned __int64)v11 / 8]; v10 != (__int64 *)result; result += 8 )
    {
      v14 = *(_QWORD *)result;
      if ( *(_QWORD *)result > 1u )
      {
        if ( *(_DWORD *)(v14 + 12) == v7 && v3 == v14 )
          return result;
      }
      else if ( !v14 )
      {
        goto LABEL_8;
      }
    }
  }
  for ( ; v12 != v6; ++v6 )
  {
    result = *v6;
    if ( (unsigned __int64)*v6 > 1 )
    {
      if ( *(_DWORD *)(result + 12) == v7 && v3 == result )
        return result;
    }
    else if ( !result )
    {
      break;
    }
  }
LABEL_8:
  v15 = 2 * v5;
  if ( 3 * (int)v5 < (unsigned int)(4 * (*(_DWORD *)(a2 + 12) + *(_DWORD *)(a2 + 16))) )
  {
    v8 = 8LL * v15;
    v20 = (__int64 *)sub_186B270(v8);
    v9 = v20;
    if ( v15 )
      memset(v20, 0, 8LL * v15);
    v21 = *(__int64 **)a2;
    v10 = &v9[v8 / 8];
    v138 = v15 - 1;
    v22 = (__int64 *)(*(_QWORD *)a2 + 8LL * *(unsigned int *)(a2 + 8));
    if ( *(__int64 **)a2 != v22 )
    {
      v23 = &v9[v8 / 8];
      LODWORD(v145) = v15;
      v24 = v21;
      do
      {
        if ( (unsigned __int64)*v24 > 1 )
        {
          v25 = *(_DWORD *)(*v24 + 12) & v138;
          v26 = &v9[v25];
          if ( v15 == v25 )
          {
LABEL_47:
            if ( v9 == v26 )
            {
LABEL_282:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v27 = v9;
            while ( *v27 )
            {
              if ( v26 == ++v27 )
                goto LABEL_282;
            }
          }
          else
          {
            v27 = &v9[v25];
            while ( *v27 )
            {
              if ( v23 == ++v27 )
                goto LABEL_47;
            }
          }
          *v27 = *v24;
        }
        ++v24;
      }
      while ( v22 != v24 );
      v10 = v23;
      v8 = 8LL * v15;
      v15 = (unsigned int)v145;
      v22 = *(__int64 **)a2;
    }
    if ( v22 )
      sub_186B220(v22);
    v7 = *(_DWORD *)(v3 + 12);
    *(_QWORD *)a2 = v9;
    *(_DWORD *)(a2 + 8) = v15;
    *(_DWORD *)(a2 + 16) = 0;
    v11 = 8LL * (v7 & v138);
    v12 = &v9[(unsigned __int64)v11 / 8];
  }
  if ( v11 != v8 )
  {
    v16 = v12;
    v17 = nullptr;
    while ( 1 )
    {
      v18 = *v16;
      if ( (unsigned __int64)*v16 > 1 )
      {
        if ( *(_DWORD *)(v18 + 12) == v7 && v3 == v18 )
        {
          *v16 = v3;
          goto LABEL_53;
        }
      }
      else
      {
        if ( !v18 )
        {
          if ( v17 )
            goto LABEL_272;
          v17 = v16;
          goto LABEL_273;
        }
        v17 = v16;
      }
      if ( ++v16 == v10 )
        goto LABEL_32;
    }
  }
  v17 = nullptr;
  while ( 1 )
  {
LABEL_32:
    if ( v9 == v12 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v19 = *v9;
    if ( (unsigned __int64)*v9 <= 1 )
      break;
    if ( *(_DWORD *)(v19 + 12) == v7 && v3 == v19 )
    {
      *v9 = v3;
      goto LABEL_53;
    }
LABEL_31:
    ++v9;
  }
  if ( v19 )
  {
    v17 = v9;
    goto LABEL_31;
  }
  if ( v17 )
LABEL_272:
    --*(_DWORD *)(a2 + 16);
  else
    v17 = v9;
LABEL_273:
  *v17 = v3;
  ++*(_DWORD *)(a2 + 12);
LABEL_53:
  v28 = &v152;
  v152 = v3;
  v147 = &v152;
  ptr = &v152;
  v153 = 0;
  v151 = 0x1000000001LL;
  v29 = 0;
LABEL_54:
  while ( 2 )
  {
    v139 = &v28[2 * v29];
    v30 = *(_WORD *)(v3 + 4);
    if ( v30 == 1 )
    {
      v32 = sub_15D1F10(v3);
      sub_65F1B0(a1, v32);
      result = (unsigned int)(v151 - 1);
      LODWORD(v151) = v151 - 1;
      goto LABEL_60;
    }
    if ( v30 != 2 )
    {
      if ( !v30 )
      {
        v142 = *(_DWORD *)(v3 + 24);
LABEL_64:
        v33 = *((unsigned int *)v139 + 2);
        v34 = v3 + 8 * v33;
        if ( (unsigned int)v33 >= v142 )
          goto LABEL_89;
LABEL_65:
        v35 = *(_QWORD *)(v34 + 32);
        LODWORD(v33) = v33 + 1;
        v36 = *(__int64 **)a2;
        *((_DWORD *)v139 + 2) = v33;
        v37 = *(unsigned int *)(a2 + 8);
        v38 = *(_DWORD *)(v35 + 12);
        v39 = v36;
        v40 = v37 - 1;
        v41 = *(_DWORD *)(a2 + 8);
        v42 = 8 * v37;
        v43 = &v36[v42 / 8];
        v44 = 8LL * (v38 & v40);
        v45 = &v36[(unsigned __int64)v44 / 8];
        if ( v44 == v42 )
        {
LABEL_90:
          if ( v36 != v45 )
          {
            v53 = v36;
            while ( 1 )
            {
              v54 = *v53;
              if ( (unsigned __int64)*v53 > 1 )
              {
                if ( *(_DWORD *)(v54 + 12) == v38 && v35 == v54 )
                  goto LABEL_88;
              }
              else if ( !v54 )
              {
                goto LABEL_97;
              }
              if ( v45 == ++v53 )
                goto LABEL_97;
            }
          }
          v44 = 0;
LABEL_97:
          v48 = 2 * v41;
          if ( 3 * v41 < (unsigned int)(4 * (*(_DWORD *)(a2 + 12) + *(_DWORD *)(a2 + 16))) )
            goto LABEL_100;
          goto LABEL_98;
        }
        v46 = &v36[(unsigned __int64)v44 / 8];
        while ( 1 )
        {
          v47 = *v46;
          if ( (unsigned __int64)*v46 > 1 )
          {
            if ( *(_DWORD *)(v47 + 12) == v38 && v35 == v47 )
            {
LABEL_88:
              v34 += 8;
              if ( (unsigned int)v33 >= v142 )
              {
LABEL_89:
                LODWORD(v151) = v151 - 1;
                sub_6621D0(a1, v3);
                goto LABEL_59;
              }
              goto LABEL_65;
            }
          }
          else if ( !v47 )
          {
            v48 = 2 * v41;
            if ( 3 * v41 >= (unsigned int)(4 * (*(_DWORD *)(a2 + 16) + *(_DWORD *)(a2 + 12))) )
            {
              v49 = v45;
LABEL_74:
              v50 = nullptr;
              while ( 1 )
              {
                v51 = *v45;
                if ( (unsigned __int64)*v45 > 1 )
                {
                  if ( *(_DWORD *)(v51 + 12) == v38 && v35 == v51 )
                  {
                    *v45 = v35;
                    goto LABEL_182;
                  }
                }
                else
                {
                  if ( !v51 )
                  {
                    if ( v50 )
                      goto LABEL_187;
                    v50 = v45;
                    goto LABEL_188;
                  }
                  v50 = v45;
                }
                if ( ++v45 == v43 )
                  goto LABEL_84;
              }
            }
LABEL_100:
            v55 = v48;
            LODWORD(v145) = v48;
            v42 = 8LL * v48;
            v56 = (__int64 *)sub_186B270(v42);
            v57 = (int)v145;
            v39 = v56;
            if ( (_DWORD)v145 )
            {
              memset(v56, 0, 8 * v55);
              v57 = (int)v145;
            }
            v58 = *(__int64 **)a2;
            v59 = v57 - 1;
            v43 = &v39[v42 / 8];
            v60 = (__int64 *)(*(_QWORD *)a2 + 8LL * *(unsigned int *)(a2 + 8));
            if ( *(__int64 **)a2 != v60 )
            {
              do
              {
                while ( (unsigned __int64)*v58 <= 1 )
                {
                  if ( v60 == ++v58 )
                    goto LABEL_111;
                }
                v61 = 8LL * (*(_DWORD *)(*v58 + 12) & v59);
                v62 = &v39[(unsigned __int64)v61 / 8];
                if ( v42 == v61 )
                {
LABEL_176:
                  if ( v39 == v62 )
                  {
LABEL_197:
                    v149 = v57;
                    m128i_i64 = v60;
                    v146 = (__m128i *)v58;
                    LODWORD(v145) = v57 - 1;
                    sub_1872CE0("");
                    sub_1873130(114, 213);
                  }
                  v63 = v39;
                  while ( *v63 )
                  {
                    if ( v62 == ++v63 )
                      goto LABEL_197;
                  }
                }
                else
                {
                  v63 = &v39[(unsigned __int64)v61 / 8];
                  while ( *v63 )
                  {
                    if ( v43 == ++v63 )
                      goto LABEL_176;
                  }
                }
                v64 = *v58++;
                *v63 = v64;
              }
              while ( v60 != v58 );
LABEL_111:
              v60 = *(__int64 **)a2;
            }
            if ( v60 )
            {
              LODWORD(v146) = v57;
              LODWORD(v145) = v57 - 1;
              sub_186B220(v60);
              v57 = (int)v146;
              v59 = (unsigned int)v145;
            }
            v38 = *(_DWORD *)(v35 + 12);
            *(_QWORD *)a2 = v39;
            *(_DWORD *)(a2 + 8) = v57;
            *(_DWORD *)(a2 + 16) = 0;
            v44 = 8LL * (v38 & v59);
            v45 = &v39[(unsigned __int64)v44 / 8];
LABEL_98:
            v49 = v45;
            if ( v44 != v42 )
              goto LABEL_74;
            v50 = nullptr;
LABEL_84:
            while ( 2 )
            {
              if ( v39 == v49 )
              {
                sub_1872CE0("");
                sub_1873130(114, 405);
              }
              v52 = *v39;
              if ( (unsigned __int64)*v39 > 1 )
              {
                if ( *(_DWORD *)(v52 + 12) == v38 && v35 == v52 )
                {
                  *v39 = v35;
LABEL_182:
                  v101 = *(_WORD *)(v35 + 4);
                  if ( v101 != 1 )
                    goto LABEL_183;
LABEL_189:
                  v102 = sub_15D1F10(v35);
                  sub_65F1B0(a1, v102);
                  goto LABEL_64;
                }
                goto LABEL_83;
              }
              if ( v52 )
              {
                v50 = v39;
LABEL_83:
                ++v39;
                continue;
              }
              break;
            }
            if ( v50 )
LABEL_187:
              --*(_DWORD *)(a2 + 16);
            else
              v50 = v39;
LABEL_188:
            v101 = *(_WORD *)(v35 + 4);
            *v50 = v35;
            ++*(_DWORD *)(a2 + 12);
            if ( v101 == 1 )
              goto LABEL_189;
LABEL_183:
            if ( v101 == 2 )
            {
              v103 = v151;
              if ( (unsigned int)v151 >= HIDWORD(v151) )
              {
                v123 = (unsigned int)(2 * HIDWORD(v151));
                v28 = (_QWORD *)sub_186B270(16 * v123);
                v124 = (__int64 *)ptr;
                v125 = 0;
                v103 = v151;
                v126 = 16LL * (unsigned int)v151;
                if ( (_DWORD)v151 )
                {
                  do
                  {
                    *(__m128i *)&v28[v125 / 8] = _mm_loadu_si128((const __m128i *)&v124[v125 / 8]);
                    v125 += 16LL;
                  }
                  while ( v125 != v126 );
                }
                if ( v124 != v147 && v124 )
                {
                  sub_186B220(v124);
                  v103 = v151;
                }
                ptr = v28;
                HIDWORD(v151) = v123;
              }
              else
              {
                v28 = ptr;
              }
              v104 = v103;
            }
            else
            {
              if ( v101 )
              {
                sub_1872CE0("");
                sub_1873130(114, 73);
              }
              if ( !*(_DWORD *)(v35 + 24) )
              {
                sub_6621D0(a1, v35);
                goto LABEL_64;
              }
              v104 = (unsigned int)v151;
              if ( (unsigned int)v151 >= HIDWORD(v151) )
              {
                v134 = (unsigned int)(2 * HIDWORD(v151));
                v28 = (_QWORD *)sub_186B270(16 * v134);
                v135 = (__int64 *)ptr;
                v136 = 0;
                v104 = (unsigned int)v151;
                v137 = 16LL * (unsigned int)v151;
                if ( (_DWORD)v151 )
                {
                  do
                  {
                    *(__m128i *)&v28[v136 / 8] = _mm_loadu_si128((const __m128i *)&v135[v136 / 8]);
                    v136 += 16LL;
                  }
                  while ( v136 != v137 );
                }
                if ( v135 != v147 )
                {
                  if ( v135 )
                  {
                    sub_186B220(v135);
                    v104 = (unsigned int)v151;
                  }
                }
                ptr = v28;
                HIDWORD(v151) = v134;
              }
              else
              {
                v28 = ptr;
              }
            }
            v105 = &v28[2 * v104];
            *((_DWORD *)v105 + 2) = 0;
            v88 = (unsigned int)v151;
            *v105 = v35;
            v89 = v88 + 1;
LABEL_196:
            LODWORD(v151) = v89;
            v29 = (unsigned int)(v89 - 1);
            v3 = v28[2 * v88];
            goto LABEL_54;
          }
          if ( v43 == ++v46 )
            goto LABEL_90;
        }
      }
      v31 = 100;
      sub_1872CE0("");
LABEL_58:
      sub_1873130(114, v31);
    }
    v65 = *(_DWORD *)(v3 + 72);
    v66 = *((_DWORD *)v139 + 2);
    v67 = v65 + *(_DWORD *)(v3 + 76) + 1;
    if ( v66 >= v67 )
      goto LABEL_206;
    if ( v66 )
    {
      v69 = *(__int64 **)a2;
LABEL_173:
      v100 = v66 - 1;
      if ( v65 < v66 )
        v100 = (unsigned int)v100 - v65;
      v68 = *(_QWORD *)(16LL * *(unsigned int *)(v3 + 20) + v3 + 8 * v100 + 80);
    }
    else
    {
      v68 = *(_QWORD *)(v3 + 24);
      v69 = *(__int64 **)a2;
    }
    ++v66;
    v70 = *(_DWORD *)(v68 + 12);
    v71 = v69;
    *((_DWORD *)v139 + 2) = v66;
    v72 = *(unsigned int *)(a2 + 8);
    v73 = v72 - 1;
    v74 = *(_DWORD *)(a2 + 8);
    v75 = 8 * v72;
    v76 = (__int64 *)((char *)v69 + v75);
    v77 = 8LL * (v70 & v73);
    v78 = &v69[(unsigned __int64)v77 / 8];
    if ( v77 == v75 )
    {
LABEL_145:
      if ( v69 != v78 )
      {
        for ( i = v69; v78 != i; ++i )
        {
          v91 = *i;
          if ( (unsigned __int64)*i > 1 )
          {
            if ( *(_DWORD *)(v91 + 12) == v70 && v68 == v91 )
              goto LABEL_171;
          }
          else if ( !v91 )
          {
            break;
          }
        }
      }
      if ( 3 * v74 >= (unsigned int)(4 * (*(_DWORD *)(a2 + 12) + *(_DWORD *)(a2 + 16))) )
      {
LABEL_169:
        v82 = v78;
        if ( v77 == v75 )
        {
          v83 = nullptr;
LABEL_133:
          if ( v82 == v71 )
          {
LABEL_141:
            sub_1872CE0("");
            sub_1873130(114, 405);
          }
          while ( 1 )
          {
            while ( 1 )
            {
              v85 = *v71;
              if ( (unsigned __int64)*v71 <= 1 )
                break;
              if ( *(_DWORD *)(v85 + 12) == v70 && v68 == v85 )
              {
                *v71 = v68;
                goto LABEL_142;
              }
              if ( ++v71 == v82 )
                goto LABEL_141;
            }
            if ( !v85 )
              break;
            v83 = v71++;
            if ( v71 == v82 )
              goto LABEL_141;
          }
          if ( !v83 )
          {
            v83 = v71;
            goto LABEL_232;
          }
LABEL_231:
          --*(_DWORD *)(a2 + 16);
LABEL_232:
          *v83 = v68;
          ++*(_DWORD *)(a2 + 12);
LABEL_142:
          v86 = v151;
          if ( (unsigned int)v151 >= HIDWORD(v151) )
          {
            v119 = (unsigned int)(2 * HIDWORD(v151));
            v28 = (_QWORD *)sub_186B270(16 * v119);
            v120 = (__int64 *)ptr;
            v121 = 0;
            v86 = v151;
            v122 = 16LL * (unsigned int)v151;
            if ( (_DWORD)v151 )
            {
              do
              {
                *(__m128i *)&v28[v121 / 8] = _mm_loadu_si128((const __m128i *)&v120[v121 / 8]);
                v121 += 16LL;
              }
              while ( v121 != v122 );
            }
            if ( v120 != v147 && v120 )
            {
              sub_186B220(v120);
              v86 = v151;
            }
            ptr = v28;
            HIDWORD(v151) = v119;
          }
          else
          {
            v28 = ptr;
          }
          v87 = &v28[2 * v86];
          *((_DWORD *)v87 + 2) = 0;
          v88 = (unsigned int)v151;
          *v87 = v68;
          v89 = v88 + 1;
          goto LABEL_196;
        }
LABEL_126:
        v83 = nullptr;
        while ( 1 )
        {
          while ( 1 )
          {
            v84 = *v78;
            if ( (unsigned __int64)*v78 <= 1 )
              break;
            if ( *(_DWORD *)(v84 + 12) == v70 && v68 == v84 )
            {
              *v78 = v68;
              goto LABEL_142;
            }
            if ( ++v78 == v76 )
              goto LABEL_133;
          }
          if ( !v84 )
            break;
          v83 = v78++;
          if ( v78 == v76 )
            goto LABEL_133;
        }
        if ( !v83 )
        {
          v83 = v78;
          goto LABEL_232;
        }
        goto LABEL_231;
      }
      v81 = 2 * v74;
LABEL_154:
      v92 = (__int64 *)sub_186B270(8LL * v81);
      v75 = 8LL * v81;
      v71 = v92;
      if ( v81 )
      {
        memset(v92, 0, 8LL * v81);
        v75 = 8LL * v81;
      }
      v93 = *(__int64 **)a2;
      v94 = v81 - 1;
      v76 = (__int64 *)((char *)v71 + v75);
      v95 = (__int64 *)(*(_QWORD *)a2 + 8LL * *(unsigned int *)(a2 + 8));
      if ( *(__int64 **)a2 != v95 )
      {
        do
        {
          while ( (unsigned __int64)*v93 <= 1 )
          {
            if ( v95 == ++v93 )
              goto LABEL_165;
          }
          v96 = 8LL * (*(_DWORD *)(*v93 + 12) & v94);
          v97 = &v71[(unsigned __int64)v96 / 8];
          if ( v75 == v96 )
          {
LABEL_200:
            if ( v71 == v97 )
            {
LABEL_242:
              v145 = v95;
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v98 = v71;
            while ( *v98 )
            {
              if ( v97 == ++v98 )
                goto LABEL_242;
            }
          }
          else
          {
            v98 = &v71[(unsigned __int64)v96 / 8];
            while ( *v98 )
            {
              if ( v76 == ++v98 )
                goto LABEL_200;
            }
          }
          v99 = *v93++;
          *v98 = v99;
        }
        while ( v95 != v93 );
LABEL_165:
        v95 = *(__int64 **)a2;
      }
      if ( v95 )
      {
        v140 = v75;
        sub_186B220(v95);
        v75 = v140;
      }
      v70 = *(_DWORD *)(v68 + 12);
      *(_QWORD *)a2 = v71;
      *(_DWORD *)(a2 + 8) = v81;
      *(_DWORD *)(a2 + 16) = 0;
      v77 = 8LL * (v70 & v94);
      v78 = &v71[(unsigned __int64)v77 / 8];
      goto LABEL_169;
    }
    v79 = &v69[(unsigned __int64)v77 / 8];
    while ( 1 )
    {
      v80 = *v79;
      if ( (unsigned __int64)*v79 > 1 )
        break;
      if ( !v80 )
      {
        v81 = 2 * v74;
        v82 = &v69[(unsigned __int64)v77 / 8];
        if ( 3 * v74 >= (unsigned int)(4 * (*(_DWORD *)(a2 + 16) + *(_DWORD *)(a2 + 12))) )
          goto LABEL_126;
        goto LABEL_154;
      }
LABEL_122:
      if ( v76 == ++v79 )
        goto LABEL_145;
    }
    if ( *(_DWORD *)(v80 + 12) != v70 || v68 != v80 )
      goto LABEL_122;
LABEL_171:
    if ( v66 < v67 )
    {
      v65 = *(_DWORD *)(v3 + 72);
      goto LABEL_173;
    }
LABEL_206:
    LODWORD(v151) = v151 - 1;
    v106 = *(_DWORD *)(a1 + 196) + *(_DWORD *)(a1 + 200);
    v145 = *(__int64 **)(a1 + 176);
    v107 = *(unsigned int *)(a1 + 192);
    v143 = 2 * v107;
    if ( 3 * (int)v107 < (unsigned int)(4 * v106) )
    {
      v109 = 16LL * v143;
      v108 = (__m128i *)sub_186B270(v109);
      v127 = v108;
      v128 = &v108[v109 / 0x10];
      if ( v143 )
      {
        if ( (v109 & 0x10) == 0 || (v127 = v108 + 1, *v108 = 0, v128 != &v108[1]) )
        {
          do
          {
            *v127 = 0;
            v127 += 2;
            v127[-1] = 0;
          }
          while ( v128 != v127 );
        }
      }
      v110 = (__m128 *)&v108[v109 / 0x10];
      v129 = *(const __m128i **)(a1 + 184);
      v141 = v143 - 1;
      v130 = (__m128i *)&v129[*(unsigned int *)(a1 + 192)];
      if ( v129 != v130 )
      {
        do
        {
          if ( v129->m128i_i64[0] > 1uLL )
          {
            v131 = 16LL * (*(_DWORD *)(v129->m128i_i64[0] + 12) & v141);
            v132 = &v108[(unsigned __int64)v131 / 0x10];
            if ( v109 == v131 )
            {
LABEL_262:
              if ( v108 == v132 )
              {
LABEL_287:
                m128i_i64 = v108[v109 / 0x10].m128i_i64;
                v146 = v130;
                sub_1872CE0("");
                sub_1873130(114, 213);
              }
              v133 = v108;
              while ( v133->m128i_i64[0] )
              {
                if ( v132 == ++v133 )
                  goto LABEL_287;
              }
            }
            else
            {
              v133 = &v108[(unsigned __int64)v131 / 0x10];
              while ( v133->m128i_i64[0] )
              {
                if ( v128 == ++v133 )
                  goto LABEL_262;
              }
            }
            *v133 = _mm_loadu_si128(v129);
          }
          ++v129;
        }
        while ( v130 != v129 );
        v130 = *(__m128i **)(a1 + 184);
      }
      if ( v130 )
        sub_186B220(v130);
      *(_QWORD *)(a1 + 184) = v108;
      *(_DWORD *)(a1 + 192) = v143;
      *(_DWORD *)(a1 + 200) = 0;
    }
    else
    {
      v108 = *(__m128i **)(a1 + 184);
      v141 = v107 - 1;
      v109 = 16 * v107;
      v110 = (__m128 *)&v108[v107];
    }
    v111 = *(_DWORD *)(v3 + 12);
    v112 = _mm_loadh_ps((const double *)&v145);
    v113 = 16LL * (v111 & v141);
    v114 = &v108[(unsigned __int64)v113 / 0x10];
    if ( v113 != v109 )
    {
      v115 = (__m128 *)&v108[(unsigned __int64)v113 / 0x10];
      v116 = nullptr;
      while ( 1 )
      {
        v117 = v115->m128_u64[0];
        if ( v115->m128_u64[0] > 1 )
        {
          if ( *(_DWORD *)(v117 + 12) == v111 && v117 == v3 )
          {
            *v115 = v112;
            goto LABEL_59;
          }
        }
        else
        {
          if ( !v117 )
          {
            if ( v116 )
              goto LABEL_276;
            v116 = v115;
            goto LABEL_277;
          }
          v116 = v115;
        }
        if ( ++v115 == v110 )
          goto LABEL_219;
      }
    }
    v116 = nullptr;
LABEL_219:
    while ( 2 )
    {
      if ( v114 == v108 )
      {
        v31 = 405;
        sub_1872CE0("");
        goto LABEL_58;
      }
      v118 = v108->m128i_i64[0];
      if ( v108->m128i_i64[0] > 1uLL )
      {
        if ( *(_DWORD *)(v118 + 12) == v111 && v118 == v3 )
        {
          *v108 = (__m128i)v112;
          goto LABEL_59;
        }
        goto LABEL_218;
      }
      if ( v118 )
      {
        v116 = (__m128 *)v108;
LABEL_218:
        ++v108;
        continue;
      }
      break;
    }
    if ( v116 )
LABEL_276:
      --*(_DWORD *)(a1 + 200);
    else
      v116 = (__m128 *)v108;
LABEL_277:
    *v116 = v112;
    ++*(_DWORD *)(a1 + 196);
LABEL_59:
    result = (unsigned int)v151;
LABEL_60:
    v28 = ptr;
    if ( (_DWORD)result )
    {
      v29 = (unsigned int)(result - 1);
      v3 = *((_QWORD *)ptr + 2 * (unsigned int)v29);
      continue;
    }
    break;
  }
  if ( ptr )
  {
    result = (__int64)v147;
    if ( ptr != v147 )
      return sub_186B220(ptr);
  }
  return result;
}

