_QWORD *__fastcall sub_874FD0(__int64 a1, _QWORD *a2, __int64 a3, __int64 *a4)
{
  char **exception; // r13
  unsigned int **v6; // rax
  int v7; // r8d
  unsigned int *v8; // rbx
  __int16 v9; // di
  _DWORD *v10; // rax
  char *v11; // rax
  __int64 v12; // r13
  __int64 v13; // r12
  __int64 v14; // r9
  __int64 v15; // rax
  int *v16; // rcx
  int v17; // edx
  int v18; // esi
  _DWORD *v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  unsigned int v22; // ebx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rbx
  __int64 v26; // rcx
  int v27; // r8d
  int v28; // r9d
  __int64 v29; // rdx
  __int64 v30; // rdi
  int *v31; // r8
  int v32; // esi
  __int64 v33; // rax
  int v34; // r9d
  __int64 v35; // rsi
  __int64 v36; // rcx
  int *v37; // rsi
  int v38; // r9d
  __int64 v39; // rsi
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rbx
  __int64 v44; // r14
  _QWORD *v45; // r12
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r13
  unsigned int v50; // edx
  __int64 v51; // rsi
  int v52; // eax
  _QWORD *v53; // rsi
  unsigned int v54; // eax
  unsigned int v55; // r8d
  size_t v56; // rsi
  unsigned int *v57; // rax
  __int64 v58; // rsi
  __int64 v59; // rax
  __int64 v60; // rbx
  __int64 v61; // r13
  __int64 v62; // r13
  __int64 *v63; // rdx
  __int64 v64; // rsi
  __int64 v65; // rdi
  bool v66; // zf
  _QWORD *result; // rax
  _QWORD *v68; // rax
  __int64 v69; // rdx
  __int64 v70; // rdx
  __int64 v71; // rsi
  int *v72; // rdi
  int v73; // r9d
  __int64 v74; // rax
  int *v75; // rcx
  __int64 v76; // rsi
  __int64 v77; // rax
  int v78; // r8d
  __m128i *v79; // r9
  __m128i *v80; // rbx
  __int64 v81; // rax
  __m128i ***v82; // rsi
  __m128i ***v83; // rcx
  int v84; // eax
  __m128i **v85; // rsi
  __m128i *i; // rdx
  __int64 v87; // rdi
  __int64 v88; // rsi
  __int64 v89; // r11
  __m128i *v90; // rsi
  __m128i ***v91; // r14
  __m128i *v92; // rdx
  __int64 v93; // rdi
  unsigned int v94; // r10d
  __m128i *v95; // r10
  __int64 v96; // r11
  __int64 v97; // rdi
  __int64 v98; // r9
  __int64 v99; // rax
  __int64 v100; // r14
  __int64 v101; // rsi
  _QWORD *v102; // rdx
  __int64 v103; // rdi
  __int64 v104; // rdx
  __int64 v105; // rax
  __int64 v106; // rax
  __int64 v107; // rbx
  int v108; // edx
  int v109; // ecx
  int v110; // r8d
  int v111; // r9d
  __int64 v112; // rdi
  int *v113; // rcx
  int v114; // edx
  __int64 v115; // rax
  int v116; // esi
  int v117; // ecx
  int v118; // r11d
  int *v119; // rcx
  __int64 v120; // r14
  __int64 v121; // rdi
  __int64 v122; // rdi
  __int64 v123; // rdi
  __int64 v124; // r14
  _QWORD *v125; // rdx
  const __m128i *j; // rax
  __int64 v127; // rdx
  __m128i *v128; // rsi
  __m128i *v129; // rdx
  __m128i ***v130; // rsi
  const __m128i *v131; // [rsp+8h] [rbp-E8h]
  __m128i ***v132; // [rsp+10h] [rbp-E0h]
  unsigned int v133; // [rsp+18h] [rbp-D8h]
  __int64 v134; // [rsp+20h] [rbp-D0h]
  unsigned int v135; // [rsp+20h] [rbp-D0h]
  unsigned int v136; // [rsp+2Ch] [rbp-C4h]
  size_t v137; // [rsp+30h] [rbp-C0h]
  __int64 v138; // [rsp+38h] [rbp-B8h]
  int v139; // [rsp+40h] [rbp-B0h]
  unsigned int v140; // [rsp+44h] [rbp-ACh]
  __int64 v141; // [rsp+48h] [rbp-A8h]
  __int64 v142; // [rsp+50h] [rbp-A0h]
  unsigned int **v143; // [rsp+58h] [rbp-98h]
  __int64 v144; // [rsp+60h] [rbp-90h]
  unsigned int v145; // [rsp+60h] [rbp-90h]
  __int64 v147; // [rsp+70h] [rbp-80h]
  unsigned int v149; // [rsp+78h] [rbp-78h]
  __int64 v150; // [rsp+80h] [rbp-70h]
  unsigned int v151; // [rsp+80h] [rbp-70h]
  __int64 v152; // [rsp+88h] [rbp-68h]
  __int64 v153; // [rsp+88h] [rbp-68h]
  __m128i ***v154; // [rsp+88h] [rbp-68h]
  int v155[2]; // [rsp+98h] [rbp-58h] BYREF
  __int64 v156; // [rsp+A0h] [rbp-50h] BYREF
  char v157; // [rsp+A8h] [rbp-48h]

  v150 = sub_15D1F10(*a2);
  v6 = (unsigned int **)a2[8];
  v7 = *(_DWORD *)(a1 + 112);
  v8 = *v6;
  v143 = v6;
  v9 = *((_WORD *)*v6 + 2);
  if ( !v9 )
  {
    v10 = *(_DWORD **)(*((_QWORD *)v8 + 2) + 24LL);
    if ( v10 )
    {
      if ( v7 == *v10 && v10[1] == 13 )
      {
        ++v8[2];
        v99 = *v8;
LABEL_128:
        v100 = 8 * v99;
        result = (_QWORD *)(a4[1] + 8 * v99);
        v101 = *result;
        v102 = result;
        if ( *result )
        {
          v103 = *a4;
          v66 = (*(_DWORD *)(v101 + 8))-- == 1;
          if ( v66 )
          {
            result = (_QWORD *)sub_15D7BC0(v103, v101);
            v102 = (_QWORD *)(v100 + a4[1]);
          }
        }
        *v102 = v8;
        return result;
      }
    }
  }
  v11 = (char *)(v143 + 11);
  if ( *((int *)v143 + 22) >> 8 == -1 )
  {
LABEL_76:
    v13 = 0x3FFFFFFFCLL;
    v12 = 0xFFFFFFFFLL;
  }
  else
  {
    while ( *(_DWORD *)(a1 + 12) != *v11 )
    {
      v11 = *((char **)v11 + 1);
      if ( !v11 )
        goto LABEL_76;
    }
    v12 = (unsigned int)(*(int *)v11 >> 8);
    v13 = 4 * v12;
  }
  v14 = *(_QWORD *)(a1 + 488);
  v15 = v12;
  v16 = (int *)(v14 + v13);
  v17 = *(_DWORD *)(v14 + v13);
  if ( v17 >= 0 )
  {
    v15 = v17;
    v18 = *(_DWORD *)(v14 + 4LL * v17);
    if ( v18 >= -1 )
    {
      if ( v18 != -1 )
      {
        do
        {
          v17 = v18;
          v18 = *(_DWORD *)(v14 + 4LL * v18);
        }
        while ( v18 >= 0 );
      }
      do
      {
        *v16 = v17;
        v16 = (int *)(v14 + 4 * v15);
        v15 = *v16;
      }
      while ( (int)v15 >= 0 );
      v9 = *((_WORD *)v8 + 2);
      v15 = v17;
      v7 = *(_DWORD *)(a1 + 112);
    }
  }
  v152 = *(_QWORD *)(*(_QWORD *)(a1 + 472) + 8 * v15);
  if ( !v9 )
  {
    v19 = *(_DWORD **)(*((_QWORD *)v8 + 2) + 24LL);
    if ( v19 )
    {
      if ( *v19 == v7 && v19[1] == 2 )
      {
        v120 = *(_QWORD *)(a4[1] + 8LL * ***(unsigned int ***)(v152 + 64));
        v156 = sub_15D1F10(v8);
        *(_QWORD *)v155 = v120;
        v121 = *(_QWORD *)(a1 + 120);
        v157 = 1;
        v8 = (unsigned int *)sub_15DCAD0(v121, (int)v155, 0);
        sub_15D0DF0(&v156);
        v99 = **v143;
        if ( v8 )
          ++v8[2];
        goto LABEL_128;
      }
    }
  }
  v20 = *(_QWORD *)(v150 + 24);
  if ( v20 && (v21 = *(_QWORD *)(v20 + 8)) != 0 )
    v22 = *(_DWORD *)(v21 - 4) - 1;
  else
    v22 = -1;
  v142 = sub_1346140(*(_QWORD *)(a1 + 72), v150);
  v23 = sub_186B270(0x38u);
  v24 = v22;
  v147 = v23;
  v25 = v23;
  sub_13478B0(v23, *(_QWORD *)(a1 + 72), v24);
  sub_135F980(a3, v142, v25);
  if ( v152 )
  {
    if ( *(_QWORD *)(v25 + 24) )
      goto LABEL_23;
    v69 = ***(unsigned int ***)(v152 + 64);
    sub_1349280(v147, *(_QWORD *)(a4[1] + 8 * v69), v69, v26, v27, v28);
  }
  if ( !*(_QWORD *)(v147 + 24) )
  {
    v70 = *(_QWORD *)(a1 + 488);
    v71 = *(_QWORD *)(a1 + 480);
    v72 = (int *)(v70 + v13);
    v73 = *(_DWORD *)(v70 + v13);
    if ( v73 < 0 )
    {
      v76 = *(_QWORD *)(v71 + 8 * v12);
      if ( !v76 )
        goto LABEL_94;
      goto LABEL_93;
    }
    v74 = v73;
    LODWORD(v26) = *(_DWORD *)(v70 + 4LL * v73);
    if ( (int)v26 < -1 )
    {
      if ( !*(_QWORD *)(v71 + 8LL * v73) )
        goto LABEL_94;
    }
    else
    {
      if ( (_DWORD)v26 != -1 )
      {
        do
        {
          v73 = v26;
          LODWORD(v26) = *(_DWORD *)(v70 + 4LL * (int)v26);
        }
        while ( (int)v26 >= 0 );
      }
      v75 = (int *)(v70 + v13);
      do
      {
        *v75 = v73;
        v75 = (int *)(v70 + 4 * v74);
        v74 = *v75;
      }
      while ( (int)v74 >= 0 );
      if ( !*(_QWORD *)(v71 + 8LL * v73) )
        goto LABEL_94;
      v26 = *v72;
      if ( (int)v26 < 0 )
      {
        v76 = *(_QWORD *)(v71 + 8 * v12);
        goto LABEL_93;
      }
      v74 = (int)v26;
      v27 = *(_DWORD *)(v70 + 4LL * (int)v26);
      if ( v27 >= -1 )
      {
        if ( v27 != -1 )
        {
          do
          {
            v26 = v27;
            v27 = *(_DWORD *)(v70 + 4LL * v27);
          }
          while ( v27 >= 0 );
        }
        do
        {
          *v72 = v26;
          v72 = (int *)(v70 + 4 * v74);
          v74 = *v72;
        }
        while ( (int)v74 >= 0 );
        v76 = *(_QWORD *)(v71 + 8 * v26);
LABEL_93:
        sub_1349280(v147, v76, v70, v26, v27, v73);
        if ( *(_QWORD *)(v147 + 24) )
          goto LABEL_23;
LABEL_94:
        v77 = sub_186B270(0x80u);
        *(_QWORD *)(v77 + 48) = 0;
        v80 = (__m128i *)v77;
        *(_QWORD *)(v77 + 64) = 0;
        *(_QWORD *)v77 = 0;
        *(_DWORD *)(v77 + 8) = 0;
        *(_QWORD *)(v77 + 16) = 0;
        *(_DWORD *)(v77 + 24) = 0;
        *(_QWORD *)(v77 + 32) = 0;
        *(_DWORD *)(v77 + 40) = 0;
        *(_DWORD *)(v77 + 56) = 0;
        *(_DWORD *)(v77 + 72) = 0;
        *(_QWORD *)(v77 + 80) = 0;
        *(_DWORD *)(v77 + 88) = 0;
        *(_QWORD *)(v77 + 96) = 0;
        *(_DWORD *)(v77 + 104) = 0;
        *(_QWORD *)(v77 + 112) = 0;
        *(_DWORD *)(v77 + 120) = 0;
        v81 = *((_QWORD *)v143[8] + 6);
        if ( !v81 )
          goto LABEL_135;
        v82 = *((__m128i ****)v143[8] + 6);
        v83 = &v82[*(unsigned int *)(v81 - 4)];
        if ( v82 == v83 )
          goto LABEL_135;
        v154 = *((__m128i ****)v143[8] + 6);
        v84 = 0;
        v138 = 0;
        v139 = 0;
        v140 = 8;
        v136 = 0;
LABEL_98:
        v85 = *v154;
        i = **v154;
        if ( i->m128i_i16[2] )
          goto LABEL_97;
        i = *(__m128i **)(i[1].m128i_i64[0] + 24);
        if ( !i )
          goto LABEL_97;
        if ( i->m128i_i64[0] != (*(unsigned int *)(a1 + 112) | 0x100000000LL) )
          goto LABEL_97;
        i = (__m128i *)v85[22][4].m128i_i64[0];
        if ( v143[8] != (unsigned int *)i )
          goto LABEL_97;
        v87 = a4[1];
        if ( !v87 )
          goto LABEL_97;
        i = (__m128i *)*(unsigned int *)v85[8]->m128i_i64[0];
        if ( (unsigned int)i >= *(_DWORD *)(v87 - 4) )
          goto LABEL_97;
        v88 = *(_QWORD *)(v87 + 8LL * (_QWORD)i);
        v141 = v88;
        if ( !v88 )
          goto LABEL_97;
        v78 = *(_DWORD *)(v88 + 12);
        v89 = 16LL * (v78 & (v140 - 1));
        v90 = &v80[(unsigned __int64)v89 / 0x10];
        v137 = 16LL * v140;
        v79 = &v80[v137 / 0x10];
        if ( v89 != v137 )
        {
          v91 = v154;
          v92 = &v80[(unsigned __int64)v89 / 0x10];
          do
          {
            v93 = v92->m128i_i64[0];
            if ( v92->m128i_i64[0] > 1uLL )
            {
              if ( *(_DWORD *)(v93 + 12) == v78 && v93 == v141 )
                goto LABEL_191;
            }
            else if ( !v93 )
            {
              goto LABEL_112;
            }
            ++v92;
          }
          while ( v79 != v92 );
          if ( v80 != v90 )
          {
            v92 = v80;
            goto LABEL_181;
          }
          v145 = 1;
          if ( 3 * v140 >= 4 * (v84 + v139) )
          {
            if ( v137 )
              goto LABEL_115;
            goto LABEL_184;
          }
          v94 = 2 * v140;
          goto LABEL_193;
        }
        v91 = v154;
        v92 = v80;
        if ( v80 == v90 )
        {
          if ( 3 * v140 >= 4 * (v84 + v139) )
          {
            v145 = 1;
            v95 = nullptr;
            goto LABEL_168;
          }
          v145 = 1;
          v94 = 2 * v140;
          goto LABEL_193;
        }
        while ( 1 )
        {
LABEL_181:
          v123 = v92->m128i_i64[0];
          if ( v92->m128i_i64[0] > 1uLL )
          {
            if ( *(_DWORD *)(v123 + 12) == v78 && v123 == v141 )
            {
LABEL_191:
              v154 = v91;
              v145 = v92->m128i_i32[2] + 1;
LABEL_113:
              v94 = 2 * v140;
              if ( 3 * v140 >= 4 * (v84 + v139) )
              {
LABEL_114:
                if ( v89 != v137 )
                {
LABEL_115:
                  v95 = nullptr;
                  i = v90;
                  while ( 1 )
                  {
                    v97 = i->m128i_i64[0];
                    if ( i->m128i_i64[0] > 1uLL )
                    {
                      if ( *(_DWORD *)(v97 + 12) == v78 )
                      {
                        v96 = v141;
                        if ( v97 == v141 )
                        {
                          v130 = v154;
LABEL_219:
                          v154 = v130;
                          i->m128i_i64[0] = v96;
                          i->m128i_i32[2] = v145;
                          goto LABEL_185;
                        }
                      }
                    }
                    else
                    {
                      if ( !v97 )
                      {
                        if ( v95 )
                        {
LABEL_189:
                          --v84;
                          i = v95;
                        }
LABEL_190:
                        i->m128i_i64[0] = v141;
                        i->m128i_i32[2] = v145;
                        ++v139;
LABEL_185:
                        if ( v136 < v145 )
                        {
                          v136 = v145;
                          v138 = v141;
                        }
LABEL_97:
                        if ( v83 != ++v154 )
                          goto LABEL_98;
                        if ( v138 )
                          sub_1349280(v147, v138, (_DWORD)i, (_DWORD)v83, v78, (_DWORD)v79);
                        if ( v80 )
LABEL_135:
                          sub_186B220(v80);
                        goto LABEL_23;
                      }
                      v95 = i;
                    }
                    if ( ++i == v79 )
                      goto LABEL_168;
                  }
                }
                v95 = nullptr;
LABEL_168:
                if ( v90 != v80 )
                {
                  LODWORD(v79) = (_DWORD)v154;
                  for ( i = v80; i != v90; ++i )
                  {
                    v122 = i->m128i_i64[0];
                    if ( i->m128i_i64[0] > 1uLL )
                    {
                      if ( *(_DWORD *)(v122 + 12) == v78 )
                      {
                        v96 = v141;
                        if ( v122 == v141 )
                        {
                          v130 = v154;
                          goto LABEL_219;
                        }
                      }
                    }
                    else
                    {
                      if ( !v122 )
                      {
                        if ( v95 )
                          goto LABEL_189;
                        goto LABEL_190;
                      }
                      v95 = i;
                    }
                  }
                }
LABEL_184:
                sub_1872CE0("");
                sub_1873130(114, 405);
              }
LABEL_193:
              v131 = &v80[v137 / 0x10];
              v132 = v83;
              v140 = v94;
              v133 = v94;
              v134 = v94;
              v137 = 16LL * v94;
              v124 = sub_186B270(v137);
              v83 = v132;
              v125 = (_QWORD *)v124;
              if ( v133 )
              {
                do
                {
                  *v125 = 0;
                  v125 += 2;
                  *((_DWORD *)v125 - 2) = 0;
                }
                while ( v125 != (_QWORD *)(v124 + 16 * v134) );
              }
              v135 = v133 - 1;
              for ( j = v80; v131 != j; ++j )
              {
                if ( j->m128i_i64[0] > 1uLL )
                {
                  v127 = 16LL * (*(_DWORD *)(j->m128i_i64[0] + 12) & v135);
                  v128 = (__m128i *)(v124 + v127);
                  if ( v137 == v127 )
                  {
LABEL_204:
                    if ( (__m128i *)v124 == v128 )
                    {
LABEL_209:
                      sub_1872CE0("");
                      sub_1873130(114, 213);
                    }
                    v129 = (__m128i *)v124;
                    while ( v129->m128i_i64[0] )
                    {
                      if ( v128 == ++v129 )
                        goto LABEL_209;
                    }
                  }
                  else
                  {
                    v129 = (__m128i *)(v124 + v127);
                    while ( v129->m128i_i64[0] )
                    {
                      if ( (__m128i *)(v124 + v137) == ++v129 )
                        goto LABEL_204;
                    }
                  }
                  *v129 = _mm_loadu_si128(j);
                }
              }
              if ( v80 )
              {
                sub_186B220(v80);
                v83 = v132;
              }
              v79 = (__m128i *)(v124 + v137);
              v80 = (__m128i *)v124;
              v78 = *(_DWORD *)(v141 + 12);
              v89 = 16LL * (v78 & v135);
              v90 = (__m128i *)(v124 + v89);
              v84 = 0;
              goto LABEL_114;
            }
          }
          else if ( !v123 )
          {
LABEL_112:
            v154 = v91;
            v145 = 1;
            goto LABEL_113;
          }
          if ( v90 == ++v92 )
            goto LABEL_112;
        }
      }
    }
    v76 = *(_QWORD *)(v71 + 8 * v74);
    goto LABEL_93;
  }
LABEL_23:
  v29 = *(_QWORD *)(a1 + 488);
  v30 = *(_QWORD *)(a1 + 480);
  v31 = (int *)(v29 + v13);
  v32 = *(_DWORD *)(v29 + v13);
  if ( v32 < 0 )
  {
    if ( *(_QWORD *)(v30 + 8 * v12) )
      goto LABEL_38;
    v98 = *(_QWORD *)(v147 + 24);
    if ( !v98 )
      goto LABEL_125;
    goto LABEL_124;
  }
  v33 = v32;
  v34 = *(_DWORD *)(v29 + 4LL * v32);
  if ( v34 < -1 )
  {
    if ( *(_QWORD *)(v30 + 8LL * v32) )
      goto LABEL_146;
    v98 = *(_QWORD *)(v147 + 24);
    if ( !v98 )
      goto LABEL_32;
  }
  else
  {
    if ( v34 == -1 )
    {
      v36 = v32;
    }
    else
    {
      do
      {
        v35 = v34;
        v34 = *(_DWORD *)(v29 + 4LL * v34);
        v36 = v35;
      }
      while ( v34 >= 0 );
    }
    v37 = (int *)(v29 + v13);
    do
    {
      *v37 = v36;
      v37 = (int *)(v29 + 4 * v33);
      v33 = *v37;
    }
    while ( (int)v33 >= 0 );
    v32 = *v31;
    if ( *(_QWORD *)(v30 + 8 * v36) )
      goto LABEL_30;
    v98 = *(_QWORD *)(v147 + 24);
    if ( !v98 )
      goto LABEL_30;
    v33 = v32;
    if ( v32 < 0 )
    {
LABEL_124:
      *(_QWORD *)(v30 + 8 * v12) = v98;
      goto LABEL_125;
    }
  }
  v117 = *(_DWORD *)(v29 + 4 * v33);
  if ( v117 < -1 )
  {
    *(_QWORD *)(v30 + 8 * v33) = v98;
    goto LABEL_32;
  }
  if ( v117 == -1 )
  {
    v118 = v32;
  }
  else
  {
    do
    {
      v118 = v117;
      v117 = *(_DWORD *)(v29 + 4LL * v117);
    }
    while ( v117 >= 0 );
  }
  v119 = (int *)(v29 + v13);
  do
  {
    *v119 = v118;
    v119 = (int *)(v29 + 4 * v33);
    v33 = *v119;
  }
  while ( (int)v33 >= 0 );
  v32 = *v31;
  *(_QWORD *)(v30 + 8LL * v118) = v98;
LABEL_30:
  if ( v32 < 0 )
  {
LABEL_125:
    v41 = *(_QWORD *)(v30 + 8 * v12);
    goto LABEL_37;
  }
  v33 = v32;
LABEL_32:
  v38 = *(_DWORD *)(v29 + 4 * v33);
  if ( v38 < -1 )
  {
LABEL_146:
    v41 = *(_QWORD *)(v30 + 8 * v33);
    goto LABEL_37;
  }
  if ( v38 == -1 )
  {
    v40 = v32;
  }
  else
  {
    do
    {
      v39 = v38;
      v38 = *(_DWORD *)(v29 + 4LL * v38);
      v40 = v39;
    }
    while ( v38 >= 0 );
  }
  do
  {
    *v31 = v40;
    v31 = (int *)(v29 + 4 * v33);
    v33 = *v31;
  }
  while ( (int)v33 >= 0 );
  v41 = *(_QWORD *)(v30 + 8 * v40);
LABEL_37:
  if ( !v41 )
  {
    v104 = 0xFFFFFFFF0LL;
    v105 = *(_QWORD *)(*(_QWORD *)(v150 + 24) + 8LL);
    if ( v105 )
      v104 = 16LL * (unsigned int)(*(_DWORD *)(v105 - 4) - 1);
    v106 = v104 + v105;
    if ( *(_BYTE *)(v106 + 8) != 1 )
      sub_A8ADA((__int64)"std::get: wrong index for variant");
    v107 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a3 + 40LL))(a3, *(_QWORD *)v106);
    sub_1349280(v147, v107, v108, v109, v110, v111);
    v112 = *(_QWORD *)(a1 + 488);
    v113 = (int *)(v112 + v13);
    v114 = *(_DWORD *)(v112 + v13);
    if ( v114 >= 0 )
    {
      v115 = v114;
      v116 = *(_DWORD *)(v112 + 4LL * v114);
      v12 = v114;
      if ( v116 >= -1 )
      {
        if ( v116 != -1 )
        {
          do
          {
            v114 = v116;
            v116 = *(_DWORD *)(v112 + 4LL * v116);
          }
          while ( v116 >= 0 );
        }
        do
        {
          *v113 = v114;
          v113 = (int *)(v112 + 4 * v115);
          v115 = *v113;
        }
        while ( (int)v115 >= 0 );
        v12 = v114;
      }
    }
    *(_QWORD *)(*(_QWORD *)(a1 + 480) + 8 * v12) = v107;
  }
LABEL_38:
  v42 = sub_874A00(a1, (__int64)v143);
  v43 = *(_QWORD *)v42;
  v44 = *(_QWORD *)v42 + 16LL * *(unsigned int *)(v42 + 8);
  if ( *(_QWORD *)v42 == v44 )
    goto LABEL_75;
  while ( *(_QWORD *)(v43 + 8) <= 1u )
  {
    v43 += 16;
    if ( v44 == v43 )
      goto LABEL_75;
  }
  if ( v44 == v43 )
  {
LABEL_75:
    v45 = nullptr;
  }
  else
  {
    v45 = nullptr;
    v153 = *(_QWORD *)(v43 + 8);
    do
    {
      v46 = a4[1];
      if ( v46 )
      {
        v47 = ***(unsigned int ***)(v153 + 64);
        if ( (unsigned int)v47 < *(_DWORD *)(v46 - 4) )
        {
          v48 = *(_QWORD *)(v46 + 8 * v47);
          v144 = v48;
          if ( v48 )
          {
            if ( *(_QWORD *)(v147 + 24) != v48 )
            {
              if ( v45 )
                *((_DWORD *)v45 - 1) = 0;
              if ( *(_DWORD *)(v153 + 152) > 1u )
              {
                v49 = *(_QWORD *)(v46 + 8LL * ***(unsigned int ***)(*(_QWORD *)(v153 + 184) + 64LL));
                if ( v45 )
                {
                  v50 = 1;
                  goto LABEL_56;
                }
                v68 = (_QWORD *)sub_186B270(0x18u);
                v45 = v68 + 1;
                v53 = v68 + 1;
                *v68 = 2;
                v50 = 1;
                v52 = 1;
                while ( 1 )
                {
                  *v53 = v49;
                  ++v50;
                  *((_DWORD *)v45 - 1) = v52;
                  if ( v50 >= *(_DWORD *)(v153 + 152) )
                    break;
                  v49 = *(_QWORD *)(a4[1] + 8LL * ***(unsigned int ***)(*(_QWORD *)(v153 + 8LL * v50 + 176) + 64LL));
LABEL_56:
                  v54 = *((_DWORD *)v45 - 1);
                  if ( v54 == *((_DWORD *)v45 - 2) )
                  {
                    v55 = (3 * v54 + 1) >> 1;
                    v56 = 8 * v55 + 8;
                    if ( 8 * v54 + 8 >= (unsigned int)v56 || v54 >= v55 )
                    {
                      exception = (char **)__cxa_allocate_exception(0x28u);
                      sub_24ABB0(&v156, "Overflow encountered when expanding vector");
                      *exception = (char *)off_1C63128;
                      sub_2333C0(exception + 1, &v156);
                      sub_233E40((__int64)&v156);
                      __cxa_throw(
                        exception,
                        (struct type_info *)&`typeinfo for'default_exception,
                        (void (*)(void *))sub_230E50);
                    }
                    v149 = v50;
                    v151 = (3 * v54 + 1) >> 1;
                    v57 = (unsigned int *)sub_186B300(v45 - 1, v56);
                    v58 = v57[1];
                    v45 = v57 + 2;
                    v50 = v149;
                    *v57 = v151;
                    LODWORD(v57) = v58;
                    v53 = &v45[v58];
                    v52 = (_DWORD)v57 + 1;
                  }
                  else
                  {
                    v51 = v54;
                    v52 = v54 + 1;
                    v53 = &v45[v51];
                  }
                }
              }
              sub_1349120(v147, v45, v144);
            }
          }
        }
      }
      v59 = v43 + 16;
      if ( v44 == v43 + 16 )
        break;
      while ( 1 )
      {
        v43 = v59;
        if ( *(_QWORD *)(v59 + 8) > 1u )
          break;
        v59 += 16;
        if ( v44 == v59 )
          goto LABEL_66;
      }
      v153 = *(_QWORD *)(v59 + 8);
    }
    while ( v44 != v59 );
  }
LABEL_66:
  v157 = 1;
  v156 = v142;
  v60 = sub_15DCAD0(*(_QWORD *)(a1 + 72), 0, 0);
  v61 = **v143;
  if ( v60 )
    ++*(_DWORD *)(v60 + 8);
  v62 = 8 * v61;
  v63 = (__int64 *)(v62 + a4[1]);
  v64 = *v63;
  if ( *v63 )
  {
    v65 = *a4;
    v66 = (*(_DWORD *)(v64 + 8))-- == 1;
    if ( v66 )
    {
      sub_15D7BC0(v65, v64);
      v63 = (__int64 *)(v62 + a4[1]);
    }
  }
  *v63 = v60;
  result = (_QWORD *)sub_15D0DF0(&v156);
  if ( v45 )
    return (_QWORD *)sub_186B220(v45 - 1);
  return result;
}

