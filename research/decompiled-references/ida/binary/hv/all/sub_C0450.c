unsigned __int64 __fastcall sub_C0450(__int64 a1, __int64 a2, int *a3, const __m128i *a4, __int64 a5)
{
  int v5; // ebx
  __int64 v6; // r13
  __int64 v7; // r14
  int v9; // eax
  _DWORD *v10; // rdx
  char **v11; // rcx
  char *v12; // r10
  char *v13; // r9
  char *v14; // r8
  int v15; // ecx
  unsigned __int64 v16; // rdi
  __int64 v17; // r15
  __int64 v18; // r14
  unsigned __int64 v19; // r13
  __int64 v20; // r12
  __int64 v21; // rbx
  unsigned int v22; // r9d
  __int64 v23; // rdi
  _BOOL4 v24; // ebp
  unsigned int i; // r10d
  int v26; // r10d
  __int64 v27; // r8
  char *v28; // rsi
  unsigned int v29; // eax
  __int64 v30; // r11
  unsigned int v31; // eax
  unsigned int v32; // r9d
  unsigned __int64 v33; // r8
  int v34; // esi
  unsigned __int64 v35; // rdi
  unsigned __int64 v36; // rsi
  int v37; // r12d
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 *v40; // rdx
  __int64 *v41; // r8
  __int64 v42; // rax
  __int64 v43; // rcx
  char *v46; // rdx
  unsigned __int64 v47; // rdi
  unsigned int v48; // ebp
  unsigned __int64 v49; // r9
  unsigned __int64 v50; // rbx
  __int64 v51; // rax
  __int64 v52; // rdx
  char *v55; // rcx
  char *v56; // rbx
  unsigned __int64 v57; // r9
  unsigned __int64 v58; // r11
  __m128i *v59; // rdi
  __int64 v60; // rax
  __int64 v61; // rdx
  int v62; // eax
  unsigned __int64 v63; // r11
  __int64 v64; // rax
  __int64 v65; // rdx
  __int64 v66; // rax
  bool v68; // cc
  char *v69; // r9
  unsigned __int64 v70; // r8
  char *v71; // r11
  unsigned __int64 v72; // rax
  unsigned __int64 v73; // rdi
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 *v76; // rdx
  __int64 *v77; // rbx
  __int64 v78; // rcx
  __int64 v79; // rsi
  unsigned __int64 v82; // rbp
  char *v83; // r8
  _QWORD *v84; // rax
  __int64 *v85; // rsi
  __int64 v86; // rcx
  __int64 v87; // rdx
  signed __int64 v90; // rax
  __m128i *v91; // rdi
  int v92; // r11d
  int v93; // r10d
  unsigned int v94; // edx
  char *v95; // rcx
  unsigned __int64 v96; // r11
  __m128i *v97; // rdi
  __int64 v98; // rax
  __int64 v99; // rdx
  __int64 v100; // rdx
  int v101; // eax
  __m128i *v106; // rax
  char *v107; // rdx
  __m128i *v108; // rax
  const __m128i *v109; // rcx
  __m128i v110; // xmm0
  __m128i *v111; // rax
  char *v112; // rdx
  __m128i *v113; // rax
  const __m128i *v114; // rcx
  __m128i v115; // xmm2
  char *v116; // rdi
  unsigned __int64 v117; // rsi
  char *v118; // r8
  unsigned __int64 v119; // rbx
  unsigned __int64 v120; // r12
  __int64 *v121; // rdx
  __int64 *v122; // r9
  unsigned __int64 v123; // r9
  char *v124; // rbx
  __m128i *v125; // rdi
  unsigned __int64 v126; // r9
  __int64 v127; // rax
  unsigned int v128; // eax
  int v129; // eax
  __int64 *v130; // rsi
  __int64 *v131; // rcx
  __int64 v134; // rax
  __int64 v135; // r9
  __int64 v138; // rdx
  char *v139; // r9
  signed __int64 v142; // rax
  __int64 v143; // rax
  __int64 v144; // rdx
  char *v147; // rcx
  signed __int64 v150; // rax
  __int64 v151; // rax
  __int64 v152; // rcx
  __m128i *v155; // rax
  char *v156; // rdx
  __m128i *v157; // rax
  const __m128i *v158; // rcx
  __m128i v159; // xmm6
  __int64 *v160; // rdi
  _QWORD *v161; // rsi
  __int64 *v162; // rsi
  _QWORD *v163; // rax
  __int64 v164; // rdx
  __int64 v165; // rax
  __int64 v168; // rdi
  __int64 v169; // rdx
  int v172; // eax
  unsigned __int64 v173; // [rsp+0h] [rbp-E8h]
  unsigned int v174; // [rsp+14h] [rbp-D4h]
  unsigned __int64 v175; // [rsp+18h] [rbp-D0h]
  char v176; // [rsp+20h] [rbp-C8h]
  char v177; // [rsp+24h] [rbp-C4h]
  char *v178; // [rsp+28h] [rbp-C0h]
  unsigned int v179; // [rsp+34h] [rbp-B4h]
  char *v180; // [rsp+38h] [rbp-B0h]
  unsigned int v181; // [rsp+44h] [rbp-A4h]
  const __m128i *v182; // [rsp+48h] [rbp-A0h]
  unsigned __int64 v184; // [rsp+58h] [rbp-90h]
  __int64 v185; // [rsp+60h] [rbp-88h]
  int v186; // [rsp+68h] [rbp-80h]
  int v187; // [rsp+6Ch] [rbp-7Ch]
  const __m128i *v188; // [rsp+70h] [rbp-78h]
  __int64 *v190; // [rsp+80h] [rbp-68h]
  unsigned __int64 v191; // [rsp+88h] [rbp-60h]
  char *v192; // [rsp+90h] [rbp-58h]
  unsigned __int64 v193; // [rsp+98h] [rbp-50h]
  int v194; // [rsp+A0h] [rbp-48h]
  unsigned int v195; // [rsp+A4h] [rbp-44h]
  unsigned __int64 v196; // [rsp+A8h] [rbp-40h]

  v5 = (int)a4;
  v6 = *(_QWORD *)(a1 + 8);
  v7 = *(_QWORD *)(a1 + 112);
  v9 = *(_DWORD *)(a1 + 264);
  v182 = a4;
  v184 = (unsigned __int64)a4->m128i_u64 + a5;
  v185 = *(_DWORD *)(a1 + 276) + (unsigned int)(*(_DWORD *)(a1 + 276) == 0);
  v10 = (__int32 *)((char *)a4->m128i_i32 + v185);
  v174 = *(_DWORD *)(a1 + 24);
  v175 = (unsigned __int64)&a4->m128i_u64[-1] + a5;
  v190 = (__int64 *)(v6 + v174);
  v186 = *a3;
  v187 = a3[1];
  v11 = *(char ***)(a1 + 248);
  v12 = v11[1];
  v13 = v11[14];
  v181 = *((_DWORD *)v11 + 6);
  v196 = (unsigned __int64)&v12[v181];
  v178 = v13;
  v180 = v12;
  v14 = *v11;
  v15 = *((_DWORD *)v11 + 66);
  v192 = v14;
  v194 = (_DWORD)v14 - (_DWORD)v12;
  v195 = v174 - ((_DWORD)v14 - (_DWORD)v12);
  if ( *(_DWORD *)(a1 + 296) && 4LL << v15 )
  {
    v16 = 0;
    do
    {
      _mm_prefetch(&v13[v16], 2);
      v16 += 64LL;
    }
    while ( 4LL << v15 > v16 );
  }
  if ( (unsigned __int64)v10 > v175 )
    goto LABEL_54;
  v177 = 24 - v15;
  v176 = 32 - v9;
  v179 = v174 - 1;
  v191 = v184 - 7;
  v188 = (const __m128i *)(v184 - 32);
  v193 = v184 - 3;
  v17 = v7;
  v18 = v6;
  v19 = (unsigned __int64)v182->m128i_u64 + ((_DWORD)v14 + v5 - (_DWORD)v190 == (_DWORD)v12 + v181);
  do
  {
    v20 = v185;
    v21 = (unsigned int)(-1640531535 * *(_DWORD *)v19) >> v176;
    v22 = *(_DWORD *)&v178[4 * ((unsigned __int64)((unsigned int)(-1640531535 * *(_DWORD *)v19) >> v177) >> 8)];
    v23 = *(unsigned int *)(v17 + 4 * v21);
    v24 = (unsigned __int8)((unsigned int)(-1640531535 * *(_DWORD *)v19) >> v177) == (unsigned __int8)v22;
    v173 = v19 + 256;
    for ( i = v19 - v18; ; i = v26 - v18 )
    {
      v27 = i + 1 - v186;
      v28 = (char *)(v18 + v27);
      if ( v174 > (unsigned int)v27 )
        v28 = &v180[v194 - v174 + (unsigned int)v27];
      v29 = -1640531535 * *v10;
      *(_DWORD *)(v17 + 4 * v21) = i;
      v30 = v29 >> v176;
      v31 = v29 >> v177;
      if ( v179 - (unsigned int)v27 > 2 && *(_DWORD *)(v19 + 1) == *(_DWORD *)v28 )
      {
        v68 = v174 <= (unsigned int)v27;
        v69 = v28 + 4;
        v70 = v19 + 5;
        v71 = (char *)v184;
        if ( !v68 )
          v71 = v192;
        v72 = v70 + v71 - v69;
        if ( v184 < v72 )
          v72 = v184;
        v73 = v72 - 7;
        if ( v70 >= v72 - 7 )
        {
          v77 = (__int64 *)(v28 + 4);
          v76 = (__int64 *)(v19 + 5);
        }
        else
        {
          v74 = *(_QWORD *)(v28 + 4);
          v75 = *(_QWORD *)(v19 + 5);
          if ( v74 != v75 )
          {
            _RDX = v75 ^ v74;
            __asm { tzcnt   rdx, rdx }
            v82 = (unsigned int)_RDX >> 3;
            goto LABEL_79;
          }
          v76 = (__int64 *)(v19 + 13);
          v77 = (__int64 *)(v28 + 12);
          if ( v73 > v19 + 13 )
          {
            v78 = *(_QWORD *)(v28 + 12);
            v79 = *(_QWORD *)(v19 + 13);
            if ( v78 != v79 )
            {
LABEL_63:
              _RCX = v79 ^ v78;
              __asm { tzcnt   rax, rcx }
              v82 = (unsigned __int64)v76 + ((unsigned int)_RAX >> 3) - v70;
              if ( v71 != &v69[v82] )
                goto LABEL_80;
              goto LABEL_64;
            }
            while ( 1 )
            {
              ++v76;
              ++v77;
              if ( v73 <= (unsigned __int64)v76 )
                break;
              v79 = *v77;
              v78 = *v76;
              if ( *v77 != *v76 )
                goto LABEL_63;
            }
          }
        }
        if ( (unsigned __int64)v76 < v72 - 3 && *(_DWORD *)v77 == *(_DWORD *)v76 )
        {
          v76 = (__int64 *)((char *)v76 + 4);
          v77 = (__int64 *)((char *)v77 + 4);
        }
        if ( (unsigned __int64)v76 < v72 - 1 && *(_WORD *)v77 == *(_WORD *)v76 )
        {
          v76 = (__int64 *)((char *)v76 + 2);
          v77 = (__int64 *)((char *)v77 + 2);
        }
        if ( v72 > (unsigned __int64)v76 )
          v76 = (__int64 *)((char *)v76 + (*(_BYTE *)v77 == *(_BYTE *)v76));
        v82 = (unsigned __int64)v76 - v70;
LABEL_79:
        if ( v71 != &v69[v82] )
          goto LABEL_80;
LABEL_64:
        v83 = (char *)(v82 + v70);
        if ( (unsigned __int64)v83 >= v191 )
        {
          v85 = v190;
          v84 = v83;
        }
        else
        {
          if ( *v190 != *(_QWORD *)v83 )
          {
            _RAX = *(_QWORD *)v83 ^ *v190;
            __asm { tzcnt   rax, rax }
            v90 = (unsigned int)_RAX >> 3;
            goto LABEL_141;
          }
          v84 = v83 + 8;
          v85 = v190 + 1;
          if ( v191 > (unsigned __int64)(v83 + 8) )
          {
            v86 = v190[1];
            v87 = *((_QWORD *)v83 + 1);
            if ( v87 != v86 )
            {
LABEL_68:
              _RDX = v86 ^ v87;
              __asm { tzcnt   rdx, rdx }
              v90 = (char *)v84 + ((unsigned int)_RDX >> 3) - v83;
LABEL_141:
              v82 += v90;
LABEL_80:
              v57 = v19 + 1;
              v56 = (char *)(v82 + 4);
              v63 = v19 + 1 - (_QWORD)v182;
              v91 = *(__m128i **)(a2 + 24);
              if ( v19 + 1 > (unsigned __int64)v188 )
              {
                sub_C02D0(v91, v182, v19 + 1, v188);
              }
              else
              {
                *v91 = _mm_loadu_si128(v182);
                if ( v63 <= 0x10 )
                {
                  *(_QWORD *)(a2 + 24) += v63;
                  v64 = *(_QWORD *)(a2 + 8);
LABEL_49:
                  *(_WORD *)(v64 + 4) = v63;
                  **(_DWORD **)(a2 + 8) = 1;
                  v66 = *(_QWORD *)(a2 + 8);
                  if ( v82 + 1 > 0xFFFF )
                  {
                    *(_DWORD *)(a2 + 72) = 2;
                    *(_DWORD *)(a2 + 76) = (v66 - *(_QWORD *)a2) >> 3;
                  }
                  *(_WORD *)(v66 + 6) = v82 + 1;
                  *(_QWORD *)(a2 + 8) += 8LL;
                  goto LABEL_52;
                }
                v106 = *(__m128i **)(a2 + 24);
                v106[1] = _mm_loadu_si128(v182 + 1);
                if ( (__int64)(v63 - 16) > 16 )
                {
                  v107 = &v106->m128i_i8[v63];
                  v108 = v106 + 2;
                  v109 = v182 + 2;
                  do
                  {
                    v110 = _mm_loadu_si128(v109);
                    v108 += 2;
                    v109 += 2;
                    v108[-2] = v110;
                    v108[-1] = _mm_loadu_si128(v109 - 1);
                  }
                  while ( v107 > (char *)v108 );
                }
              }
              *(_QWORD *)(a2 + 24) += v63;
              v64 = *(_QWORD *)(a2 + 8);
              if ( v63 > 0xFFFF )
              {
                v65 = v64 - *(_QWORD *)a2;
                *(_DWORD *)(a2 + 72) = 1;
                *(_DWORD *)(a2 + 76) = v65 >> 3;
              }
              goto LABEL_49;
            }
            while ( 1 )
            {
              ++v84;
              ++v85;
              if ( v191 <= (unsigned __int64)v84 )
                break;
              v87 = *v85;
              v86 = *v84;
              if ( *v85 != *v84 )
                goto LABEL_68;
            }
          }
        }
        if ( (unsigned __int64)v84 < v193 && *(_DWORD *)v85 == *(_DWORD *)v84 )
        {
          v84 = (_QWORD *)((char *)v84 + 4);
          v85 = (__int64 *)((char *)v85 + 4);
        }
        if ( (unsigned __int64)v84 < v184 - 1 && *(_WORD *)v85 == *(_WORD *)v84 )
        {
          v84 = (_QWORD *)((char *)v84 + 2);
          v85 = (__int64 *)((char *)v85 + 2);
        }
        if ( v184 > (unsigned __int64)v84 )
          v84 = (_QWORD *)((char *)v84 + (*(_BYTE *)v85 == *(_BYTE *)v84));
        v90 = (char *)v84 - v83;
        goto LABEL_141;
      }
      if ( v24 )
      {
        v32 = v22 >> 8;
        if ( v181 < v32 )
        {
          v33 = (unsigned __int64)&v180[v32];
          v34 = *(_DWORD *)v19;
          if ( *(_DWORD *)v19 == *(_DWORD *)v33 )
            break;
        }
      }
      if ( v174 >= (unsigned int)v23 )
        goto LABEL_8;
      v34 = *(_DWORD *)v19;
LABEL_21:
      v35 = v18 + v23;
      if ( *(_DWORD *)v35 == v34 )
      {
        v36 = v19 + 4;
        v37 = v19 - v35;
        if ( v19 + 4 >= v191 )
        {
          v41 = (__int64 *)(v35 + 4);
          v40 = (__int64 *)(v19 + 4);
        }
        else
        {
          v38 = *(_QWORD *)(v35 + 4);
          v39 = *(_QWORD *)(v19 + 4);
          if ( v38 != v39 )
          {
            _RDX = v38 ^ v39;
            __asm { tzcnt   rdx, rdx }
            v46 = (char *)((unsigned int)_RDX >> 3);
            goto LABEL_99;
          }
          v40 = (__int64 *)(v19 + 12);
          v41 = (__int64 *)(v35 + 12);
          if ( v191 > v19 + 12 )
          {
            v42 = *(_QWORD *)(v35 + 12);
            v43 = *(_QWORD *)(v19 + 12);
            if ( v42 != v43 )
            {
LABEL_26:
              _RAX = v43 ^ v42;
              __asm { tzcnt   rax, rax }
              v46 = (char *)v40 + ((unsigned int)_RAX >> 3) - v36;
              goto LABEL_99;
            }
            while ( 1 )
            {
              ++v40;
              ++v41;
              if ( v191 <= (unsigned __int64)v40 )
                break;
              v43 = *v41;
              v42 = *v40;
              if ( *v41 != *v40 )
                goto LABEL_26;
            }
          }
        }
        if ( (unsigned __int64)v40 < v193 && *(_DWORD *)v41 == *(_DWORD *)v40 )
        {
          v40 = (__int64 *)((char *)v40 + 4);
          v41 = (__int64 *)((char *)v41 + 4);
        }
        if ( (unsigned __int64)v40 < v184 - 1 && *(_WORD *)v41 == *(_WORD *)v40 )
        {
          v40 = (__int64 *)((char *)v40 + 2);
          v41 = (__int64 *)((char *)v41 + 2);
        }
        if ( v184 > (unsigned __int64)v40 )
          v40 = (__int64 *)((char *)v40 + (*(_BYTE *)v41 == *(_BYTE *)v40));
        v46 = (char *)v40 - v36;
LABEL_99:
        v56 = v46 + 4;
        if ( (unsigned __int64)v190 >= v35 || v19 <= (unsigned __int64)v182 )
        {
          v57 = v19;
        }
        else
        {
          v57 = v19;
          if ( *(_BYTE *)(v35 - 1) == *(_BYTE *)(v19 - 1) )
          {
            do
            {
              --v57;
              --v35;
            }
            while ( v57 > (unsigned __int64)v182
                 && (unsigned __int64)v190 < v35
                 && *(_BYTE *)(v57 - 1) == *(_BYTE *)(v35 - 1) );
            v56 = &v46[v19 + 4 - v57];
          }
        }
        v96 = v57 - (_QWORD)v182;
        v97 = *(__m128i **)(a2 + 24);
        if ( (unsigned __int64)v188 < v57 )
        {
          sub_C02D0(v97, v182, v57, v188);
        }
        else
        {
          *v97 = _mm_loadu_si128(v182);
          if ( v96 <= 0x10 )
          {
            *(_QWORD *)(a2 + 24) += v96;
            v98 = *(_QWORD *)(a2 + 8);
LABEL_112:
            *(_WORD *)(v98 + 4) = v96;
            **(_DWORD **)(a2 + 8) = v37 + 3;
            v100 = *(_QWORD *)(a2 + 8);
            if ( (unsigned __int64)(v56 - 3) > 0xFFFF )
            {
              *(_DWORD *)(a2 + 72) = 2;
              *(_DWORD *)(a2 + 76) = (v100 - *(_QWORD *)a2) >> 3;
            }
            *(_WORD *)(v100 + 6) = (_WORD)v56 - 3;
            *(_QWORD *)(a2 + 8) += 8LL;
            v101 = v186;
            v186 = v37;
            v187 = v101;
            goto LABEL_52;
          }
          v111 = *(__m128i **)(a2 + 24);
          v111[1] = _mm_loadu_si128(v182 + 1);
          if ( (__int64)(v96 - 16) > 16 )
          {
            v112 = &v111->m128i_i8[v96];
            v113 = v111 + 2;
            v114 = v182 + 2;
            do
            {
              v115 = _mm_loadu_si128(v114);
              v113 += 2;
              v114 += 2;
              v113[-2] = v115;
              v113[-1] = _mm_loadu_si128(v114 - 1);
            }
            while ( v112 > (char *)v113 );
          }
        }
        *(_QWORD *)(a2 + 24) += v96;
        v98 = *(_QWORD *)(a2 + 8);
        if ( v96 > 0xFFFF )
        {
          v99 = v98 - *(_QWORD *)a2;
          *(_DWORD *)(a2 + 72) = 1;
          *(_DWORD *)(a2 + 76) = v99 >> 3;
        }
        goto LABEL_112;
      }
LABEL_8:
      v22 = *(_DWORD *)&v178[4 * ((unsigned __int64)v31 >> 8)];
      v23 = *(unsigned int *)(v17 + 4 * v30);
      v24 = (_BYTE)v31 == (unsigned __int8)v22;
      if ( (unsigned __int64)v10 >= v173 )
      {
        ++v20;
        v173 += 256LL;
      }
      if ( v175 < (unsigned __int64)v10 + v20 )
        goto LABEL_54;
      v26 = (int)v10;
      v19 = (unsigned __int64)v10;
      v21 = v30;
      v10 = (_DWORD *)((char *)v10 + v20);
    }
    if ( v174 < (unsigned int)v23 )
      goto LABEL_21;
    v47 = v19 + 4;
    v48 = i + v194 - v174 - v32;
    v49 = (unsigned __int64)&v192[v19 - v33];
    if ( v184 < v49 )
      v49 = v184;
    v50 = v49 - 7;
    if ( v47 >= v49 - 7 )
    {
      v130 = (__int64 *)(v33 + 4);
      v131 = (__int64 *)(v19 + 4);
    }
    else
    {
      v51 = *(_QWORD *)(v33 + 4);
      v52 = *(_QWORD *)(v19 + 4);
      if ( v51 != v52 )
      {
        _RAX = v52 ^ v51;
        __asm { tzcnt   rcx, rax }
        v55 = (char *)((unsigned int)_RCX >> 3);
        goto LABEL_33;
      }
      v131 = (__int64 *)(v19 + 12);
      v130 = (__int64 *)(v33 + 12);
      if ( v50 > v19 + 12 )
      {
        v143 = *(_QWORD *)(v33 + 12);
        v144 = *(_QWORD *)(v19 + 12);
        if ( v143 != v144 )
        {
LABEL_191:
          _RAX = v144 ^ v143;
          __asm { tzcnt   rax, rax }
          v55 = (char *)v131 + ((unsigned int)_RAX >> 3) - v47;
          goto LABEL_33;
        }
        while ( 1 )
        {
          ++v131;
          ++v130;
          if ( v50 <= (unsigned __int64)v131 )
            break;
          v143 = *v130;
          v144 = *v131;
          if ( *v130 != *v131 )
            goto LABEL_191;
        }
      }
    }
    if ( (unsigned __int64)v131 < v49 - 3 && *(_DWORD *)v130 == *(_DWORD *)v131 )
    {
      v131 = (__int64 *)((char *)v131 + 4);
      v130 = (__int64 *)((char *)v130 + 4);
    }
    if ( (unsigned __int64)v131 < v49 - 1 && *(_WORD *)v130 == *(_WORD *)v131 )
    {
      v131 = (__int64 *)((char *)v131 + 2);
      v130 = (__int64 *)((char *)v130 + 2);
    }
    if ( v49 > (unsigned __int64)v131 )
      v131 = (__int64 *)((char *)v131 + (*(_BYTE *)v130 == *(_BYTE *)v131));
    v55 = (char *)v131 - v47;
LABEL_33:
    if ( v192 == &v55[v33 + 4] )
    {
      v139 = &v55[v47];
      if ( (unsigned __int64)&v55[v47] >= v191 )
      {
        v160 = v190;
        v161 = v139;
      }
      else
      {
        if ( *v190 != *(_QWORD *)v139 )
        {
          _RAX = *(_QWORD *)v139 ^ *v190;
          __asm { tzcnt   rax, rax }
          v142 = (unsigned int)_RAX >> 3;
LABEL_188:
          v55 += v142;
          goto LABEL_34;
        }
        v161 = v139 + 8;
        v160 = v190 + 1;
        if ( v191 > (unsigned __int64)(v139 + 8) )
        {
          v164 = *((_QWORD *)v139 + 1);
          v165 = v190[1];
          if ( v165 != v164 )
          {
LABEL_231:
            _RAX = v164 ^ v165;
            __asm { tzcnt   rax, rax }
            v142 = (char *)v161 + ((unsigned int)_RAX >> 3) - v139;
            goto LABEL_188;
          }
          while ( 1 )
          {
            ++v161;
            ++v160;
            if ( v191 <= (unsigned __int64)v161 )
              break;
            v165 = *v160;
            v164 = *v161;
            if ( *v160 != *v161 )
              goto LABEL_231;
          }
        }
      }
      if ( (unsigned __int64)v161 < v193 && *(_DWORD *)v160 == *(_DWORD *)v161 )
      {
        v161 = (_QWORD *)((char *)v161 + 4);
        v160 = (__int64 *)((char *)v160 + 4);
      }
      if ( (unsigned __int64)v161 < v184 - 1 && *(_WORD *)v160 == *(_WORD *)v161 )
      {
        v161 = (_QWORD *)((char *)v161 + 2);
        v160 = (__int64 *)((char *)v160 + 2);
      }
      if ( v184 > (unsigned __int64)v161 )
        v161 = (_QWORD *)((char *)v161 + (*(_BYTE *)v160 == *(_BYTE *)v161));
      v142 = (char *)v161 - v139;
      goto LABEL_188;
    }
LABEL_34:
    v56 = v55 + 4;
    if ( v19 <= (unsigned __int64)v182 || v196 >= v33 )
    {
      v57 = v19;
    }
    else
    {
      v57 = v19;
      if ( *(_BYTE *)(v19 - 1) == *(_BYTE *)(v33 - 1) )
      {
        do
        {
          --v57;
          --v33;
          v56 = &v55[v19 + 4 - v57];
        }
        while ( v57 > (unsigned __int64)v182 && v196 < v33 && *(_BYTE *)(v57 - 1) == *(_BYTE *)(v33 - 1) );
      }
    }
    v58 = v57 - (_QWORD)v182;
    v59 = *(__m128i **)(a2 + 24);
    if ( (unsigned __int64)v188 < v57 )
    {
      sub_C02D0(v59, v182, v57, v188);
    }
    else
    {
      *v59 = _mm_loadu_si128(v182);
      if ( v58 <= 0x10 )
      {
        *(_QWORD *)(a2 + 24) += v58;
        v60 = *(_QWORD *)(a2 + 8);
        goto LABEL_43;
      }
      v155 = *(__m128i **)(a2 + 24);
      v155[1] = _mm_loadu_si128(v182 + 1);
      if ( (__int64)(v58 - 16) > 16 )
      {
        v156 = &v155->m128i_i8[v58];
        v157 = v155 + 2;
        v158 = v182 + 2;
        do
        {
          v159 = _mm_loadu_si128(v158);
          v157 += 2;
          v158 += 2;
          v157[-2] = v159;
          v157[-1] = _mm_loadu_si128(v158 - 1);
        }
        while ( v156 > (char *)v157 );
      }
    }
    *(_QWORD *)(a2 + 24) += v58;
    v60 = *(_QWORD *)(a2 + 8);
    if ( v58 > 0xFFFF )
    {
      v138 = v60 - *(_QWORD *)a2;
      *(_DWORD *)(a2 + 72) = 1;
      *(_DWORD *)(a2 + 76) = v138 >> 3;
    }
LABEL_43:
    *(_WORD *)(v60 + 4) = v58;
    **(_DWORD **)(a2 + 8) = v48 + 3;
    v61 = *(_QWORD *)(a2 + 8);
    if ( (unsigned __int64)(v56 - 3) > 0xFFFF )
    {
      *(_DWORD *)(a2 + 72) = 2;
      *(_DWORD *)(a2 + 76) = (v61 - *(_QWORD *)a2) >> 3;
    }
    *(_WORD *)(v61 + 6) = (_WORD)v56 - 3;
    *(_QWORD *)(a2 + 8) += 8LL;
    v62 = v186;
    v186 = v48;
    v187 = v62;
LABEL_52:
    v19 = (unsigned __int64)&v56[v57];
    if ( v175 < (unsigned __int64)&v56[v57] )
      goto LABEL_53;
    v92 = v187;
    *(_DWORD *)(v17 + 4LL * ((unsigned int)(-1640531535 * *(_DWORD *)(v18 + i + 2)) >> v176)) = i + 2;
    *(_DWORD *)(v17 + 4LL * ((unsigned int)(-1640531535 * *(_DWORD *)(v19 - 2)) >> v176)) = v19 - 2 - v18;
    while ( 2 )
    {
      v93 = v19 - v18;
      v94 = v19 - v18 - v92;
      v95 = (char *)(v18 + v94);
      if ( v174 > v94 )
        v95 = &v180[v94 - (unsigned __int64)v195];
      if ( v92 + v179 - v93 <= 2 || *(_DWORD *)v19 != *(_DWORD *)v95 )
      {
        v187 = v92;
        goto LABEL_53;
      }
      v116 = v95 + 4;
      v117 = v19 + 4;
      v118 = (char *)v184;
      if ( v174 > v94 )
        v118 = v192;
      v119 = v117 + v118 - v116;
      if ( v184 < v119 )
        v119 = v184;
      v120 = v119 - 7;
      if ( v117 >= v119 - 7 )
      {
        v121 = (__int64 *)(v95 + 4);
        v122 = (__int64 *)(v19 + 4);
        goto LABEL_148;
      }
      v134 = *(_QWORD *)(v95 + 4);
      v135 = *(_QWORD *)(v19 + 4);
      if ( v134 == v135 )
      {
        v122 = (__int64 *)(v19 + 12);
        v121 = (__int64 *)(v95 + 12);
        if ( v120 <= v19 + 12 )
          goto LABEL_148;
        v151 = *(_QWORD *)(v95 + 12);
        v152 = *(_QWORD *)(v19 + 12);
        if ( v151 == v152 )
        {
          while ( 1 )
          {
            ++v122;
            ++v121;
            if ( v120 <= (unsigned __int64)v122 )
              break;
            v151 = *v121;
            v152 = *v122;
            if ( *v121 != *v122 )
              goto LABEL_201;
          }
LABEL_148:
          if ( (unsigned __int64)v122 < v119 - 3 && *(_DWORD *)v121 == *(_DWORD *)v122 )
          {
            v122 = (__int64 *)((char *)v122 + 4);
            v121 = (__int64 *)((char *)v121 + 4);
          }
          if ( (unsigned __int64)v122 < v119 - 1 && *(_WORD *)v121 == *(_WORD *)v122 )
          {
            v122 = (__int64 *)((char *)v122 + 2);
            v121 = (__int64 *)((char *)v121 + 2);
          }
          if ( v119 > (unsigned __int64)v122 )
            v122 = (__int64 *)((char *)v122 + (*(_BYTE *)v121 == *(_BYTE *)v122));
          v123 = (unsigned __int64)v122 - v117;
        }
        else
        {
LABEL_201:
          _RAX = v152 ^ v151;
          __asm { tzcnt   rax, rax }
          v123 = (unsigned __int64)v122 + ((unsigned int)_RAX >> 3) - v117;
        }
      }
      else
      {
        _R9 = v134 ^ v135;
        __asm { tzcnt   r9, r9 }
        v123 = (unsigned int)_R9 >> 3;
      }
      if ( v118 == &v116[v123] )
      {
        v147 = (char *)(v117 + v123);
        if ( v117 + v123 >= v191 )
        {
          v162 = v190;
          v163 = v147;
        }
        else
        {
          if ( *v190 != *(_QWORD *)v147 )
          {
            _RAX = *(_QWORD *)v147 ^ *v190;
            __asm { tzcnt   rax, rax }
            v150 = (unsigned int)_RAX >> 3;
LABEL_198:
            v123 += v150;
            goto LABEL_158;
          }
          v163 = v147 + 8;
          v162 = v190 + 1;
          if ( v191 > (unsigned __int64)(v147 + 8) )
          {
            v168 = *((_QWORD *)v147 + 1);
            v169 = v190[1];
            if ( v169 != v168 )
            {
LABEL_234:
              _RDX = v168 ^ v169;
              __asm { tzcnt   rdx, rdx }
              v150 = (char *)v163 + ((unsigned int)_RDX >> 3) - v147;
              goto LABEL_198;
            }
            while ( 1 )
            {
              ++v163;
              ++v162;
              if ( v191 <= (unsigned __int64)v163 )
                break;
              v169 = *v162;
              v168 = *v163;
              if ( *v162 != *v163 )
                goto LABEL_234;
            }
          }
        }
        if ( (unsigned __int64)v163 < v193 && *(_DWORD *)v162 == *(_DWORD *)v163 )
        {
          v163 = (_QWORD *)((char *)v163 + 4);
          v162 = (__int64 *)((char *)v162 + 4);
        }
        if ( (unsigned __int64)v163 < v184 - 1 && *(_WORD *)v162 == *(_WORD *)v163 )
        {
          v163 = (_QWORD *)((char *)v163 + 2);
          v162 = (__int64 *)((char *)v162 + 2);
        }
        if ( v184 > (unsigned __int64)v163 )
          v163 = (_QWORD *)((char *)v163 + (*(_BYTE *)v162 == *(_BYTE *)v163));
        v150 = (char *)v163 - v147;
        goto LABEL_198;
      }
LABEL_158:
      v124 = (char *)(v123 + 4);
      v125 = *(__m128i **)(a2 + 24);
      if ( (unsigned __int64)v188 < v19 )
        sub_C02D0(v125, (const __m128i *)v19, v19, v188);
      else
        *v125 = _mm_loadu_si128((const __m128i *)v19);
      v126 = v123 + 1;
      *(_WORD *)(*(_QWORD *)(a2 + 8) + 4LL) = 0;
      **(_DWORD **)(a2 + 8) = 1;
      v127 = *(_QWORD *)(a2 + 8);
      if ( v126 > 0xFFFF )
      {
        *(_DWORD *)(a2 + 72) = 2;
        *(_DWORD *)(a2 + 76) = (v127 - *(_QWORD *)a2) >> 3;
      }
      *(_WORD *)(v127 + 6) = v126;
      *(_QWORD *)(a2 + 8) += 8LL;
      v128 = -1640531535 * *(_DWORD *)v19;
      v19 += (unsigned __int64)v124;
      *(_DWORD *)(v17 + 4LL * (v128 >> v176)) = v93;
      if ( v175 >= v19 )
      {
        v129 = v92;
        v92 = v186;
        v186 = v129;
        continue;
      }
      break;
    }
    v172 = v186;
    v186 = v92;
    v187 = v172;
LABEL_53:
    v182 = (const __m128i *)v19;
    v10 = (_DWORD *)(v19 + v185);
  }
  while ( v175 >= v19 + v185 );
LABEL_54:
  *a3 = v186;
  a3[1] = v187;
  return v184 - (_QWORD)v182;
}

