void __fastcall sub_D99420(__int64 a1, void **a2, void **a3, __int64 a4)
{
  unsigned int v5; // esi
  __int64 v6; // r8
  __int64 v7; // rbp
  __int64 v8; // r12
  unsigned int *v9; // rax
  unsigned int v10; // edx
  __int64 v11; // rax
  __int64 v12; // rax
  int v13; // edi
  const __m128i *v14; // rcx
  unsigned int v15; // edx
  __int64 *v16; // rsi
  __int64 v17; // rdx
  const __m128i *v18; // r9
  __int64 *j; // rax
  __int64 v20; // rdx
  _OWORD *v21; // rax
  _OWORD *v22; // r13
  _OWORD *v23; // rax
  _OWORD *v24; // rax
  unsigned int v25; // ecx
  __int64 v26; // r8
  size_t v27; // rdx
  __m128i *v28; // rbx
  __int32 v29; // r11d
  __int64 *v30; // r14
  int v31; // esi
  __int64 v32; // r11
  __m128i *v33; // rdi
  __int64 *m128i_i64; // rax
  __int64 *v35; // rcx
  __int64 v36; // rdx
  unsigned __int64 v38; // r14
  _DWORD *v39; // rax
  __int64 v40; // rax
  int v41; // r8d
  __m128i *v42; // rcx
  unsigned int v43; // edx
  __int64 *v44; // rdi
  __int64 v45; // rdx
  __m128i *v46; // r9
  __int64 *i; // rax
  __int64 v48; // rdx
  _OWORD *v49; // rax
  _OWORD *v50; // rax
  _OWORD *v51; // rax
  unsigned int v52; // ecx
  __m128i v53; // xmm1
  __m128i *v54; // r15
  __int64 v55; // r9
  __m128i *v56; // rcx
  int v57; // esi
  __int64 v58; // r11
  __m128i *v59; // r8
  __m128i *v60; // rax
  __m128i *v61; // rdi
  __int64 v62; // rdx
  unsigned int v63; // ebx
  __int64 v64; // rax
  __int64 v65; // r15
  int v66; // r9d
  __int64 *v67; // rbx
  __int32 v68; // r8d
  size_t v69; // r15
  __int64 *v70; // r12
  int v71; // ecx
  __int64 v72; // r8
  __int64 *v73; // rdi
  __int64 *v74; // rax
  __int64 *v75; // rsi
  __int64 v76; // rdx
  __int64 v77; // rax
  __int64 v78; // r15
  int v79; // r9d
  __int32 v80; // r8d
  size_t v81; // r15
  __int64 *v82; // r12
  int v83; // ecx
  __int64 v84; // r8
  __int64 *v85; // rdi
  __int64 *v86; // rsi
  __int64 v87; // rdx
  __int64 v88; // rax
  __int64 *v89; // rax
  __int32 v90; // ecx
  char *v91; // r14
  char *v92; // r9
  __int64 v93; // rax
  __int64 *v94; // rbp
  char *v95; // rbx
  __int64 v96; // r9
  __int64 v97; // rax
  __int64 *v98; // rdx
  __int64 *v99; // rax
  __int64 *v100; // rax
  __int32 v101; // ecx
  __int64 *v102; // r14
  void *v103; // r9
  __int64 v104; // rax
  __int64 *v105; // rbp
  __int64 v106; // rbx
  __int64 v107; // r9
  __int64 v108; // rax
  __int64 *v109; // rdx
  __int64 *v110; // rax
  __int64 v111; // rax
  __int64 v112; // rax
  __int64 v113; // rax
  __int64 v114; // rax
  __m128i *v115; // rax
  __int32 v116; // edx
  __m128i *v117; // r10
  __int64 v118; // rsi
  const __m128i *v119; // r8
  __m128i *v120; // r11
  void **v121; // rsi
  __int64 v122; // rax
  const __m128i *v123; // rbx
  __int64 v124; // r13
  const __m128i *v125; // r12
  __int32 v126; // r11d
  void **v127; // r8
  __int64 v128; // rdx
  __m128i *v129; // rsi
  __m128i *v130; // rdx
  size_t v131; // r14
  __m128i *v132; // rax
  __int32 v133; // edx
  __m128i *v134; // r10
  __m128i *v135; // r9
  void **v136; // rsi
  __int64 v137; // rax
  __m128i *v138; // r13
  const __m128i *v139; // rbx
  __int32 v140; // r14d
  __int64 v141; // r15
  const __m128i *v142; // r12
  __int32 v143; // r11d
  void **v144; // r9
  __int64 v145; // rdx
  __m128i *v146; // rsi
  __m128i *v147; // rdx
  __m128i v148; // [rsp+0h] [rbp-88h] BYREF
  __m128i v149; // [rsp+10h] [rbp-78h] BYREF
  __int64 v150; // [rsp+20h] [rbp-68h]
  __m128i *v151; // [rsp+28h] [rbp-60h]
  void **v152; // [rsp+30h] [rbp-58h]
  void **v153; // [rsp+38h] [rbp-50h]
  __int64 v154; // [rsp+40h] [rbp-48h]
  __int32 v155; // [rsp+4Ch] [rbp-3Ch]

  v5 = *(_DWORD *)(a4 + 24);
  if ( !v5 )
    return;
  v6 = *(_QWORD *)(a4 + 16);
  v7 = a4;
  v8 = *(_QWORD *)(a1 + 8);
  v9 = *(unsigned int **)(v6 + 24);
  if ( *(_WORD *)(a4 + 4) )
  {
    if ( v9 )
      v10 = *v9;
    else
      v10 = -1;
  }
  else
  {
    if ( !v9 )
      goto LABEL_7;
    v10 = *v9;
    if ( *(_DWORD *)(a1 + 24) == *v9 && v9[1] == 1 )
    {
      v38 = *(_QWORD *)(a4 + 32);
      if ( !*(_WORD *)(v38 + 4) && !*(_DWORD *)(v38 + 24) )
      {
        v39 = *(_DWORD **)(*(_QWORD *)(v38 + 16) + 24LL);
        if ( !v39 || *v39 == -1 )
        {
          v40 = *((unsigned int *)a3 + 2);
          v41 = *(_DWORD *)(v38 + 12);
          v42 = (__m128i *)*a3;
          v43 = v40 - 1;
          v40 *= 16;
          v44 = (__int64 *)((char *)*a3 + v40);
          v45 = 16LL * (v41 & v43);
          v46 = (__m128i *)((char *)*a3 + v45);
          if ( v45 != v40 )
          {
            for ( i = (__int64 *)((char *)*a3 + v45); v44 != i; i += 2 )
            {
              v48 = *i;
              if ( (unsigned __int64)*i > 1 )
              {
                if ( *(_DWORD *)(v48 + 12) == v41 && v38 == v48 )
                  goto LABEL_171;
              }
              else if ( !v48 )
              {
                goto LABEL_44;
              }
            }
          }
          for ( ; v46 != v42; ++v42 )
          {
            v114 = v42->m128i_i64[0];
            if ( v42->m128i_i64[0] > 1uLL )
            {
              if ( *(_DWORD *)(v114 + 12) == v41 && v38 == v114 )
              {
                i = (__int64 *)v42;
LABEL_171:
                v22 = (_OWORD *)i[1];
                goto LABEL_58;
              }
            }
            else if ( !v114 )
            {
              break;
            }
          }
LABEL_44:
          v49 = (_OWORD *)sub_186B270(0x30u);
          *v49 = 0;
          v22 = v49;
          v49[1] = 0;
          v49[2] = 0;
          v50 = (_OWORD *)sub_186B270(0x40u);
          *((_DWORD *)v22 + 4) = 0;
          *(_QWORD *)v22 = v50;
          *((_QWORD *)v22 + 1) = 8;
          *v50 = 0;
          v50[1] = 0;
          v50[2] = 0;
          v50[3] = 0;
          v150 = 8;
          v51 = (_OWORD *)sub_186B270(0x40u);
          v52 = *((_DWORD *)a3 + 2);
          *((_QWORD *)v22 + 3) = v51;
          *v51 = 0;
          *((_QWORD *)v22 + 4) = 8;
          v53 = _mm_unpacklo_epi64((__m128i)v38, (__m128i)(unsigned __int64)v22);
          v51[1] = 0;
          v51[2] = 0;
          v51[3] = 0;
          LODWORD(v51) = 4 * (*((_DWORD *)a3 + 3) + *((_DWORD *)a3 + 4));
          *((_DWORD *)v22 + 10) = 0;
          if ( 3 * v52 < (unsigned int)v51 )
          {
            v148.m128i_i32[0] = 2 * v52;
            v149 = v53;
            v150 = 32LL * v52;
            v115 = (__m128i *)sub_186B270(v150);
            v116 = v148.m128i_i32[0];
            v55 = v150;
            v53 = _mm_load_si128(&v149);
            v54 = v115;
            v117 = (__m128i *)((char *)v115 + v150);
            if ( v148.m128i_i32[0] )
            {
              if ( (v150 & 0x10) == 0 || (*v115 = 0, ++v115, v115 != v117) )
              {
                do
                {
                  *v115 = 0;
                  v115 += 2;
                  v115[-1] = 0;
                }
                while ( v115 != v117 );
              }
            }
            v118 = *((unsigned int *)a3 + 2);
            v119 = (const __m128i *)*a3;
            v56 = v117;
            LODWORD(v150) = v116 - 1;
            v118 *= 16;
            v120 = (__m128i *)((char *)v119 + v118);
            if ( v119 != (const __m128i *)&v119->m128i_i8[v118] )
            {
              v121 = a3;
              v122 = (__int64)v22;
              v123 = v119;
              v124 = v8;
              v125 = v120;
              v126 = v116;
              v127 = v121;
              do
              {
                if ( v123->m128i_i64[0] > 1uLL )
                {
                  v128 = 16LL * (*(_DWORD *)(v123->m128i_i64[0] + 12) & (unsigned int)v150);
                  v129 = &v54[(unsigned __int64)v128 / 0x10];
                  if ( v55 == v128 )
                  {
LABEL_194:
                    if ( v54 == v129 )
                    {
LABEL_209:
                      v155 = v126;
                      v154 = v7;
                      v153 = v127;
                      v152 = (void **)v117;
                      v151 = (__m128i *)v55;
                      v149.m128i_i64[0] = v122;
                      v148 = v53;
                      sub_1872CE0("");
                      sub_1873130(114, 213);
                    }
                    v130 = v54;
                    while ( v130->m128i_i64[0] )
                    {
                      if ( v129 == ++v130 )
                        goto LABEL_209;
                    }
                  }
                  else
                  {
                    v130 = &v54[(unsigned __int64)v128 / 0x10];
                    while ( v130->m128i_i64[0] )
                    {
                      if ( v117 == ++v130 )
                        goto LABEL_194;
                    }
                  }
                  *v130 = _mm_loadu_si128(v123);
                }
                ++v123;
              }
              while ( v125 != v123 );
              v116 = v126;
              v120 = (__m128i *)*v127;
              v8 = v124;
              a3 = v127;
              v22 = (_OWORD *)v122;
            }
            if ( v120 )
            {
              LODWORD(v152) = v116;
              v151 = v117;
              v149.m128i_i64[0] = v55;
              v148 = v53;
              sub_186B220(v120);
              v116 = (int)v152;
              v56 = v151;
              v55 = v149.m128i_i64[0];
              v53 = _mm_load_si128(&v148);
            }
            *a3 = v54;
            *((_DWORD *)a3 + 2) = v116;
            *((_DWORD *)a3 + 4) = 0;
          }
          else
          {
            v54 = (__m128i *)*a3;
            LODWORD(v150) = v52 - 1;
            v55 = 16LL * v52;
            v56 = (__m128i *)((char *)v54 + v55);
          }
          v57 = *(_DWORD *)(v38 + 12);
          v58 = 16LL * (v57 & (unsigned int)v150);
          v59 = &v54[(unsigned __int64)v58 / 0x10];
          if ( v58 != v55 )
          {
            v60 = &v54[(unsigned __int64)v58 / 0x10];
            v61 = nullptr;
            while ( 1 )
            {
              v62 = v60->m128i_i64[0];
              if ( v60->m128i_i64[0] > 1uLL )
              {
                if ( *(_DWORD *)(v62 + 12) == v57 && v38 == v62 )
                {
                  *v60 = v53;
                  goto LABEL_57;
                }
              }
              else
              {
                if ( !v62 )
                {
                  if ( v61 )
                    goto LABEL_204;
                  v61 = v60;
                  goto LABEL_205;
                }
                v61 = v60;
              }
              if ( ++v60 == v56 )
                goto LABEL_166;
            }
          }
          v61 = nullptr;
          while ( 1 )
          {
LABEL_166:
            if ( v59 == v54 )
            {
              sub_1872CE0("");
              sub_1873130(114, 405);
            }
            v113 = v54->m128i_i64[0];
            if ( v54->m128i_i64[0] > 1uLL )
            {
              if ( *(_DWORD *)(v113 + 12) == v57 && v38 == v113 )
              {
                *v54 = v53;
                goto LABEL_57;
              }
            }
            else
            {
              if ( !v113 )
              {
                if ( v61 )
LABEL_204:
                  --*((_DWORD *)a3 + 4);
                else
                  v61 = v54;
LABEL_205:
                *v61 = v53;
                ++*((_DWORD *)a3 + 3);
                goto LABEL_57;
              }
              v61 = v54;
            }
            ++v54;
          }
        }
      }
    }
    if ( v10 == -1 )
      goto LABEL_7;
  }
  v11 = sub_15D2690(*(_QWORD *)(a1 + 8), v10);
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v11 + 160LL))(v11, *(_QWORD *)(v7 + 16)) )
    return;
  v6 = *(_QWORD *)(v7 + 16);
LABEL_7:
  v12 = *((unsigned int *)a2 + 2);
  v13 = *(_DWORD *)(v6 + 12);
  v14 = (const __m128i *)*a2;
  v15 = v12 - 1;
  v12 *= 16;
  v16 = (__int64 *)((char *)*a2 + v12);
  v17 = 16LL * (v13 & v15);
  v18 = (const __m128i *)((char *)*a2 + v17);
  if ( v17 != v12 )
  {
    for ( j = (__int64 *)((char *)*a2 + v17); v16 != j; j += 2 )
    {
      v20 = *j;
      if ( (unsigned __int64)*j > 1 )
      {
        if ( *(_DWORD *)(v20 + 12) == v13 && v20 == v6 )
          goto LABEL_55;
      }
      else if ( !v20 )
      {
        goto LABEL_14;
      }
    }
  }
  for ( ; v18 != v14; ++v14 )
  {
    v111 = v14->m128i_i64[0];
    if ( v14->m128i_i64[0] > 1uLL )
    {
      if ( *(_DWORD *)(v111 + 12) == v13 && v111 == v6 )
      {
        j = (__int64 *)v14;
LABEL_55:
        v22 = (_OWORD *)j[1];
        goto LABEL_56;
      }
    }
    else if ( !v111 )
    {
      break;
    }
  }
LABEL_14:
  v148.m128i_i64[0] = v6;
  v21 = (_OWORD *)sub_186B270(0x30u);
  *v21 = 0;
  v22 = v21;
  v21[1] = 0;
  v21[2] = 0;
  v23 = (_OWORD *)sub_186B270(0x40u);
  *((_DWORD *)v22 + 4) = 0;
  *(_QWORD *)v22 = v23;
  *((_QWORD *)v22 + 1) = 8;
  *v23 = 0;
  v23[1] = 0;
  v23[2] = 0;
  v23[3] = 0;
  v150 = 8;
  v24 = (_OWORD *)sub_186B270(0x40u);
  v25 = *((_DWORD *)a2 + 2);
  v26 = v148.m128i_i64[0];
  *((_QWORD *)v22 + 3) = v24;
  v27 = v150;
  *v24 = 0;
  v24[1] = 0;
  *((_QWORD *)v22 + 4) = v27;
  v24[2] = 0;
  v24[3] = 0;
  LODWORD(v24) = 4 * (*((_DWORD *)a2 + 3) + *((_DWORD *)a2 + 4));
  *((_DWORD *)v22 + 10) = 0;
  if ( 3 * v25 < (unsigned int)v24 )
  {
    v149.m128i_i64[0] = v26;
    v148.m128i_i32[0] = 2 * v25;
    v131 = 32LL * v25;
    v150 = v131;
    v132 = (__m128i *)sub_186B270(v131);
    v133 = v148.m128i_i32[0];
    v26 = v149.m128i_i64[0];
    v28 = v132;
    v134 = &v132[v131 / 0x10];
    if ( v148.m128i_i32[0] )
    {
      if ( (v131 & 0x10) == 0 || (*v132 = 0, ++v132, v132 != v134) )
      {
        do
        {
          *v132 = 0;
          v132 += 2;
          v132[-1] = 0;
        }
        while ( v132 != v134 );
      }
    }
    v29 = v133 - 1;
    v30 = (__int64 *)v134;
    v135 = (__m128i *)((char *)*a2 + 16 * *((unsigned int *)a2 + 2));
    if ( *a2 != v135 )
    {
      v136 = a2;
      v137 = (__int64)v22;
      v138 = v28;
      v139 = (const __m128i *)*a2;
      v140 = v133 - 1;
      v141 = v8;
      v142 = v135;
      v143 = v133;
      v144 = v136;
      do
      {
        if ( v139->m128i_i64[0] > 1uLL )
        {
          v145 = 16LL * (*(_DWORD *)(v139->m128i_i64[0] + 12) & (unsigned int)v140);
          v146 = &v138[(unsigned __int64)v145 / 0x10];
          if ( v150 == v145 )
          {
LABEL_226:
            if ( v138 == v146 )
            {
LABEL_242:
              LODWORD(v154) = v143;
              v153 = (void **)v7;
              v152 = v144;
              v151 = v134;
              v149.m128i_i64[0] = v26;
              v148.m128i_i64[0] = v137;
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v147 = v138;
            while ( v147->m128i_i64[0] )
            {
              if ( v146 == ++v147 )
                goto LABEL_242;
            }
          }
          else
          {
            v147 = &v138[(unsigned __int64)v145 / 0x10];
            while ( v147->m128i_i64[0] )
            {
              if ( v134 == ++v147 )
                goto LABEL_226;
            }
          }
          *v147 = _mm_loadu_si128(v139);
        }
        ++v139;
      }
      while ( v142 != v139 );
      v8 = v141;
      a2 = v144;
      v135 = (__m128i *)*v144;
      v28 = v138;
      v133 = v143;
      v22 = (_OWORD *)v137;
      v29 = v140;
      v30 = (__int64 *)v134;
    }
    if ( v135 )
    {
      LODWORD(v151) = v133;
      v149.m128i_i32[0] = v29;
      v148.m128i_i64[0] = v26;
      sub_186B220(v135);
      v133 = (int)v151;
      v29 = v149.m128i_i32[0];
      v26 = v148.m128i_i64[0];
    }
    *a2 = v28;
    *((_DWORD *)a2 + 2) = v133;
    *((_DWORD *)a2 + 4) = 0;
  }
  else
  {
    v28 = (__m128i *)*a2;
    v29 = v25 - 1;
    v150 = 16LL * v25;
    v30 = (__int64 *)((char *)v28->m128i_i64 + v150);
  }
  v31 = *(_DWORD *)(v26 + 12);
  v32 = 16LL * (v31 & (unsigned int)v29);
  v33 = &v28[(unsigned __int64)v32 / 0x10];
  if ( v32 != v150 )
  {
    m128i_i64 = v28[(unsigned __int64)v32 / 0x10].m128i_i64;
    v35 = nullptr;
    while ( 1 )
    {
      v36 = *m128i_i64;
      if ( (unsigned __int64)*m128i_i64 > 1 )
      {
        if ( *(_DWORD *)(v36 + 12) == v31 && v36 == v26 )
        {
          *m128i_i64 = v26;
          m128i_i64[1] = (__int64)v22;
          goto LABEL_56;
        }
      }
      else
      {
        if ( !v36 )
        {
          if ( v35 )
            goto LABEL_237;
          v35 = m128i_i64;
          goto LABEL_238;
        }
        v35 = m128i_i64;
      }
      m128i_i64 += 2;
      if ( m128i_i64 == v30 )
        goto LABEL_159;
    }
  }
  v35 = nullptr;
  while ( 1 )
  {
LABEL_159:
    if ( v33 == v28 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v112 = v28->m128i_i64[0];
    if ( v28->m128i_i64[0] <= 1uLL )
      break;
    if ( *(_DWORD *)(v112 + 12) == v31 && v112 == v26 )
    {
      v28->m128i_i64[0] = v26;
      v28->m128i_i64[1] = (__int64)v22;
      goto LABEL_56;
    }
LABEL_158:
    ++v28;
  }
  if ( v112 )
  {
    v35 = (__int64 *)v28;
    goto LABEL_158;
  }
  if ( v35 )
LABEL_237:
    --*((_DWORD *)a2 + 4);
  else
    v35 = (__int64 *)v28;
LABEL_238:
  *v35 = v26;
  v35[1] = (__int64)v22;
  ++*((_DWORD *)a2 + 3);
LABEL_56:
  if ( !(unsigned __int8)sub_15D2710(v8, *(_QWORD *)(v7 + 32)) )
  {
LABEL_79:
    v78 = *((unsigned int *)v22 + 8);
    v79 = *((_DWORD *)v22 + 10);
    if ( 3 * (int)v78 < (unsigned int)(4 * (v79 + *((_DWORD *)v22 + 9))) )
    {
      LODWORD(v150) = 2 * v78;
      v81 = 8LL * (unsigned int)(2 * v78);
      v89 = (__int64 *)sub_186B270(v81);
      v90 = v150;
      v67 = v89;
      if ( (_DWORD)v150 )
      {
        memset(v89, 0, v81);
        v90 = v150;
      }
      v91 = *((char **)v22 + 3);
      v80 = v90 - 1;
      v82 = &v67[v81 / 8];
      v92 = &v91[8 * *((unsigned int *)v22 + 8)];
      if ( v91 != v92 )
      {
        v93 = v7;
        v94 = v67;
        v95 = &v91[8 * *((unsigned int *)v22 + 8)];
        v96 = v93;
        do
        {
          if ( *(_QWORD *)v91 > 1u )
          {
            v97 = 8LL * (*(_DWORD *)(*(_QWORD *)v91 + 12LL) & (unsigned int)v80);
            v98 = &v94[(unsigned __int64)v97 / 8];
            if ( v81 == v97 )
            {
LABEL_109:
              if ( v94 == v98 )
              {
LABEL_150:
                v149.m128i_i32[0] = v90;
                v148.m128i_i64[0] = v96;
                LODWORD(v150) = v90 - 1;
                sub_1872CE0("");
                sub_1873130(114, 213);
              }
              v99 = v94;
              while ( *v99 )
              {
                if ( v98 == ++v99 )
                  goto LABEL_150;
              }
            }
            else
            {
              v99 = &v94[(unsigned __int64)v97 / 8];
              while ( *v99 )
              {
                if ( v82 == ++v99 )
                  goto LABEL_109;
              }
            }
            *v99 = *(_QWORD *)v91;
          }
          v91 += 8;
        }
        while ( v95 != v91 );
        v67 = v94;
        v7 = v96;
        v92 = *((char **)v22 + 3);
      }
      if ( v92 )
      {
        v148.m128i_i32[0] = v90;
        LODWORD(v150) = v90 - 1;
        sub_186B220(v92);
        v90 = v148.m128i_i32[0];
        v80 = v150;
      }
      *((_QWORD *)v22 + 3) = v67;
      v79 = 0;
      *((_DWORD *)v22 + 8) = v90;
      *((_DWORD *)v22 + 10) = 0;
    }
    else
    {
      v67 = *((__int64 **)v22 + 3);
      v80 = v78 - 1;
      v81 = 8 * v78;
      v82 = &v67[v81 / 8];
    }
    v83 = *(_DWORD *)(v7 + 12);
    v84 = v83 & (unsigned int)v80;
    v85 = &v67[v84];
    if ( 8 * v84 == v81 )
    {
      v86 = nullptr;
LABEL_89:
      if ( v85 == v67 )
      {
LABEL_97:
        sub_1872CE0("");
        sub_1873130(114, 405);
      }
      while ( 1 )
      {
        while ( 1 )
        {
          v88 = *v67;
          if ( (unsigned __int64)*v67 <= 1 )
            break;
          if ( *(_DWORD *)(v88 + 12) == v83 && v7 == v88 )
          {
LABEL_206:
            *v67 = v7;
            return;
          }
          if ( v85 == ++v67 )
            goto LABEL_97;
        }
        if ( !v88 )
          break;
        v86 = v67++;
        if ( v85 == v67 )
          goto LABEL_97;
      }
      if ( !v86 )
      {
        v86 = v67;
        goto LABEL_26;
      }
    }
    else
    {
      v74 = &v67[v84];
      v86 = nullptr;
      while ( 1 )
      {
        while ( 1 )
        {
          v87 = *v74;
          if ( (unsigned __int64)*v74 <= 1 )
            break;
          if ( *(_DWORD *)(v87 + 12) == v83 && v7 == v87 )
          {
LABEL_149:
            *v74 = v7;
            return;
          }
          if ( ++v74 == v82 )
            goto LABEL_89;
        }
        if ( !v87 )
          break;
        v86 = v74++;
        if ( v74 == v82 )
          goto LABEL_89;
      }
      if ( !v86 )
      {
        v86 = v74;
        goto LABEL_26;
      }
    }
    *((_DWORD *)v22 + 10) = v79 - 1;
LABEL_26:
    *v86 = v7;
    ++*((_DWORD *)v22 + 9);
    return;
  }
LABEL_57:
  v5 = *(_DWORD *)(v7 + 24);
LABEL_58:
  v63 = 1;
  while ( v63 < v5 )
  {
    v64 = v63++;
    if ( !(unsigned __int8)sub_15D2710(v8, *(_QWORD *)(v7 + 8 * v64 + 32)) )
      goto LABEL_79;
    v5 = *(_DWORD *)(v7 + 24);
  }
  v65 = *((unsigned int *)v22 + 2);
  v66 = *((_DWORD *)v22 + 4);
  if ( 3 * (int)v65 < (unsigned int)(4 * (v66 + *((_DWORD *)v22 + 3))) )
  {
    LODWORD(v150) = 2 * v65;
    v69 = 8LL * (unsigned int)(2 * v65);
    v100 = (__int64 *)sub_186B270(v69);
    v101 = v150;
    v67 = v100;
    if ( (_DWORD)v150 )
    {
      memset(v100, 0, v69);
      v101 = v150;
    }
    v102 = *(__int64 **)v22;
    v68 = v101 - 1;
    v70 = &v67[v69 / 8];
    v103 = (void *)(*(_QWORD *)v22 + 8LL * *((unsigned int *)v22 + 2));
    if ( *(void **)v22 != v103 )
    {
      v104 = v7;
      v105 = v67;
      v106 = *(_QWORD *)v22 + 8LL * *((unsigned int *)v22 + 2);
      v107 = v104;
      do
      {
        if ( (unsigned __int64)*v102 > 1 )
        {
          v108 = 8LL * (*(_DWORD *)(*v102 + 12) & (unsigned int)v68);
          v109 = &v105[(unsigned __int64)v108 / 8];
          if ( v69 == v108 )
          {
LABEL_129:
            if ( v105 == v109 )
            {
LABEL_151:
              v149.m128i_i32[0] = v101;
              v148.m128i_i64[0] = v107;
              LODWORD(v150) = v101 - 1;
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v110 = v105;
            while ( *v110 )
            {
              if ( v109 == ++v110 )
                goto LABEL_151;
            }
          }
          else
          {
            v110 = &v105[(unsigned __int64)v108 / 8];
            while ( *v110 )
            {
              if ( v70 == ++v110 )
                goto LABEL_129;
            }
          }
          *v110 = *v102;
        }
        ++v102;
      }
      while ( (__int64 *)v106 != v102 );
      v67 = v105;
      v7 = v107;
      v103 = *(void **)v22;
    }
    if ( v103 )
    {
      v148.m128i_i32[0] = v101;
      LODWORD(v150) = v101 - 1;
      sub_186B220(v103);
      v101 = v148.m128i_i32[0];
      v68 = v150;
    }
    *(_QWORD *)v22 = v67;
    v66 = 0;
    *((_DWORD *)v22 + 2) = v101;
    *((_DWORD *)v22 + 4) = 0;
  }
  else
  {
    v67 = *(__int64 **)v22;
    v68 = v65 - 1;
    v69 = 8 * v65;
    v70 = (__int64 *)(*(_QWORD *)v22 + v69);
  }
  v71 = *(_DWORD *)(v7 + 12);
  v72 = v71 & (unsigned int)v68;
  v73 = &v67[v72];
  if ( 8 * v72 != v69 )
  {
    v74 = &v67[v72];
    v75 = nullptr;
    while ( 1 )
    {
      v76 = *v74;
      if ( (unsigned __int64)*v74 > 1 )
      {
        if ( *(_DWORD *)(v76 + 12) == v71 && v7 == v76 )
          goto LABEL_149;
      }
      else
      {
        if ( !v76 )
        {
          if ( v75 )
            goto LABEL_147;
          v75 = v74;
          goto LABEL_148;
        }
        v75 = v74;
      }
      if ( ++v74 == v70 )
        goto LABEL_75;
    }
  }
  v75 = nullptr;
LABEL_75:
  while ( 2 )
  {
    if ( v73 == v67 )
      goto LABEL_97;
    v77 = *v67;
    if ( (unsigned __int64)*v67 > 1 )
    {
      if ( *(_DWORD *)(v77 + 12) == v71 && v7 == v77 )
        goto LABEL_206;
      goto LABEL_74;
    }
    if ( v77 )
    {
      v75 = v67;
LABEL_74:
      ++v67;
      continue;
    }
    break;
  }
  if ( v75 )
LABEL_147:
    *((_DWORD *)v22 + 4) = v66 - 1;
  else
    v75 = v67;
LABEL_148:
  *v75 = v7;
  ++*((_DWORD *)v22 + 3);
}

