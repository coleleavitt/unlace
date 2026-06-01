__int64 __fastcall sub_314A50(__m128i *a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 *v6; // r12
  __int64 v7; // rbp
  __int64 v8; // rax
  __int64 v9; // rbp
  __int64 *v10; // r15
  __int64 v11; // r10
  __int64 v12; // r8
  __int64 v13; // rax
  int v14; // edi
  char *v15; // rcx
  unsigned int v16; // edx
  char *v17; // rsi
  __int64 v18; // rdx
  char *v19; // r9
  char *i; // rax
  char *v21; // rdx
  __int64 *v22; // r13
  char *v23; // rdx
  __int64 v24; // rax
  int v25; // r9d
  _QWORD *v26; // rsi
  unsigned int v27; // ecx
  _QWORD *v28; // rdi
  __int64 v29; // rcx
  _QWORD *v30; // r10
  _QWORD *j; // rcx
  _QWORD *v32; // rax
  void *v33; // rdi
  _QWORD *v34; // rsi
  unsigned int v35; // eax
  __int64 v36; // r10
  __int64 v37; // r8
  __int64 v38; // rax
  int v39; // r9d
  _QWORD *v40; // rdx
  unsigned int v41; // ecx
  _QWORD *v42; // r11
  __int64 v43; // rcx
  _QWORD *v44; // rsi
  _QWORD *jj; // rax
  __int64 v46; // rcx
  __int64 v47; // rcx
  int v48; // r9d
  _QWORD *v49; // rax
  unsigned int v50; // esi
  _QWORD *v51; // r10
  __int64 v52; // rsi
  _QWORD *v53; // rdi
  _QWORD *kk; // rcx
  __int64 v55; // rsi
  void *v56; // rdi
  _QWORD *v57; // rsi
  char v58; // al
  __int64 v59; // rax
  __int64 v60; // r9
  __int64 v61; // r15
  __int64 v62; // r8
  __int64 v63; // rdx
  int v64; // r10d
  _QWORD *v65; // rax
  unsigned int v66; // esi
  _QWORD *v67; // r11
  __int64 v68; // rbx
  _QWORD *v69; // rsi
  _QWORD *i1; // rdx
  _QWORD *v71; // rbx
  __int64 v72; // rdx
  int v73; // r9d
  _QWORD *v74; // rax
  unsigned int v75; // esi
  __int64 v76; // rdx
  __int64 v77; // rsi
  _QWORD *v78; // rdi
  _QWORD *i2; // rsi
  _QWORD *v80; // r14
  _QWORD *v81; // rsi
  unsigned int v82; // eax
  void *v83; // r14
  char *v84; // rbx
  __int64 v85; // r12
  __int64 v86; // rsi
  __int64 v87; // rdx
  int v88; // r10d
  __int64 v89; // r13
  unsigned int v90; // ecx
  _QWORD *v91; // rax
  _QWORD *v92; // r11
  __int64 v93; // r15
  _QWORD *v94; // rcx
  _QWORD *i3; // rdx
  _QWORD *v96; // r15
  __int64 v97; // rdx
  int v98; // edi
  _QWORD *v99; // rax
  unsigned int v100; // ecx
  __int64 v101; // rdx
  __int64 v102; // rcx
  _QWORD *v103; // rsi
  _QWORD *i4; // rcx
  _QWORD *v105; // r14
  _QWORD *v106; // rsi
  unsigned int v107; // eax
  __int64 v108; // rax
  unsigned int v109; // eax
  __int64 v110; // r8
  __int64 v111; // rax
  int v112; // r9d
  char *v113; // rdx
  unsigned int v114; // ecx
  char *v115; // r11
  __int64 v116; // rcx
  char *v117; // rsi
  char *k; // rax
  __int64 v119; // rcx
  __int64 v120; // rcx
  int v121; // r9d
  _QWORD *v122; // rax
  unsigned int v123; // esi
  _QWORD *v124; // r10
  __int64 v125; // rsi
  _QWORD *v126; // rdi
  _QWORD *m; // rcx
  __int64 v128; // rsi
  _QWORD *v129; // rsi
  unsigned int v130; // eax
  __m128d v131; // xmm0
  __int64 v132; // rcx
  __int64 i5; // r12
  __int64 *v134; // rbp
  __int64 v135; // rcx
  __int64 v136; // rax
  __int64 v137; // rax
  __int64 v138; // rcx
  int v139; // eax
  __int64 v140; // r8
  _QWORD *v141; // rsi
  __int64 v142; // rcx
  __int64 v143; // rax
  int v144; // r9d
  unsigned int v145; // edx
  _QWORD *v146; // r11
  __int64 v147; // rdx
  _QWORD *v148; // r10
  _QWORD *mm; // rax
  __int64 v150; // rdx
  __int64 v151; // rdx
  int v152; // edi
  char *v153; // rsi
  unsigned int v154; // r8d
  char *v155; // r10
  __int64 v156; // r9
  char *v157; // r8
  char *nn; // r15
  __int64 v159; // rdx
  _QWORD *v160; // rdx
  _QWORD *v161; // rsi
  char v162; // al
  __int64 v163; // rax
  __int64 v164; // r8
  __int64 v165; // rsi
  __int64 v166; // rax
  int v167; // r9d
  _QWORD *v168; // rcx
  unsigned int v169; // edx
  _QWORD *v170; // r11
  __int64 v171; // rdx
  _QWORD *v172; // r10
  _QWORD *n; // rdx
  __int64 v174; // rax
  __int64 v175; // rax
  int v176; // edi
  _QWORD *v177; // rsi
  unsigned int v178; // ecx
  _QWORD *v179; // r10
  __int64 v180; // rcx
  _QWORD *v181; // r9
  _QWORD *ii; // rax
  __int64 v183; // rcx
  _QWORD *v184; // rsi
  unsigned int v185; // eax
  __int64 v186; // rdx
  __int64 v187; // rcx
  __int64 v188; // rax
  __int64 v189; // rdx
  unsigned int v190; // eax
  unsigned int v191; // eax
  int v192; // eax
  unsigned int v193; // eax
  char *v194; // [rsp+8h] [rbp-A0h]
  void *v195; // [rsp+10h] [rbp-98h]
  void *v196; // [rsp+10h] [rbp-98h]
  void *v197; // [rsp+10h] [rbp-98h]
  void *v198; // [rsp+10h] [rbp-98h]
  __int64 *v199; // [rsp+10h] [rbp-98h]
  void *v200; // [rsp+10h] [rbp-98h]
  void *v201; // [rsp+10h] [rbp-98h]
  void *v202; // [rsp+10h] [rbp-98h]
  __int64 v203; // [rsp+18h] [rbp-90h]
  char *v204; // [rsp+18h] [rbp-90h]
  _QWORD *v205; // [rsp+18h] [rbp-90h]
  __int64 v206; // [rsp+18h] [rbp-90h]
  __int64 *v207; // [rsp+18h] [rbp-90h]
  __int64 v208; // [rsp+18h] [rbp-90h]
  _QWORD *v209; // [rsp+18h] [rbp-90h]
  __int64 v210; // [rsp+18h] [rbp-90h]
  _QWORD *v211; // [rsp+18h] [rbp-90h]
  char *v213; // [rsp+28h] [rbp-80h]
  _QWORD *v214; // [rsp+28h] [rbp-80h]
  __int64 v215; // [rsp+28h] [rbp-80h]
  _QWORD *v216; // [rsp+28h] [rbp-80h]
  char *v217; // [rsp+28h] [rbp-80h]
  void *v218; // [rsp+28h] [rbp-80h]
  char *v219; // [rsp+28h] [rbp-80h]
  _QWORD *v220; // [rsp+28h] [rbp-80h]
  __int64 v221; // [rsp+28h] [rbp-80h]
  _QWORD *v222; // [rsp+28h] [rbp-80h]
  __int64 *v223; // [rsp+30h] [rbp-78h]
  __int64 v225; // [rsp+48h] [rbp-60h] BYREF
  __int64 v226; // [rsp+50h] [rbp-58h]
  __int64 v227; // [rsp+58h] [rbp-50h] BYREF
  __int64 v228; // [rsp+60h] [rbp-48h]

  result = (char *)a2 - (char *)a1;
  v223 = a2;
  if ( (char *)a2 - (char *)a1 <= 128 )
    return result;
  v6 = &v225;
LABEL_3:
  v7 = result;
  v8 = result >> 4;
  v9 = v7 >> 3;
  if ( a3 )
  {
    --a3;
    v10 = &a1->m128i_i64[v8];
    v11 = *v10;
    v12 = a1->m128i_i64[1];
    v194 = &a1->m128i_i8[8];
    v225 = 0;
    v227 = 1;
    v13 = *(unsigned int *)(a4 + 8);
    v14 = *(_DWORD *)(v11 + 12);
    v15 = *(char **)a4;
    v226 = 0;
    v16 = v13 - 1;
    v228 = 0;
    v13 *= 40;
    v17 = &v15[v13];
    v18 = 40LL * (v14 & v16);
    v19 = &v15[v18];
    if ( v18 != v13 )
    {
      for ( i = &v15[v18]; v17 != i; i += 40 )
      {
        v21 = *(char **)i;
        if ( *(_QWORD *)i > 1u )
        {
          if ( *((_DWORD *)v21 + 3) == v14 && (char *)v11 == v21 )
          {
            v21 = i;
            goto LABEL_11;
          }
        }
        else if ( !v21 )
        {
          goto LABEL_11;
        }
      }
    }
    if ( v15 == v19 )
    {
LABEL_150:
      v21 = nullptr;
    }
    else
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v21 = *(char **)v15;
          if ( *(_QWORD *)v15 > 1u )
            break;
          if ( !v21 )
            goto LABEL_11;
          v15 += 40;
          if ( v19 == v15 )
            goto LABEL_150;
        }
        if ( *((_DWORD *)v21 + 3) == v14 && (char *)v11 == v21 )
          break;
        v15 += 40;
        if ( v19 == v15 )
          goto LABEL_150;
      }
      v21 = v15;
    }
LABEL_11:
    v213 = v21;
    v22 = &v227;
    v203 = v12;
    v195 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v6);
    sub_182CBA0(v195, &v227);
    v23 = v213;
    v225 = 0;
    v227 = 1;
    v24 = *(unsigned int *)(a4 + 8);
    v25 = *(_DWORD *)(v203 + 12);
    v26 = *(_QWORD **)a4;
    v226 = 0;
    v27 = v24 - 1;
    v228 = 0;
    v24 *= 40;
    v28 = (_QWORD *)((char *)v26 + v24);
    v29 = 40LL * (v25 & v27);
    v30 = &v26[(unsigned __int64)v29 / 8];
    if ( v29 != v24 )
    {
      for ( j = &v26[(unsigned __int64)v29 / 8]; v28 != j; j += 5 )
      {
        v32 = (_QWORD *)*j;
        if ( *j > 1u )
        {
          if ( *((_DWORD *)v32 + 3) == v25 && (_QWORD *)v203 == v32 )
          {
            v32 = j;
            goto LABEL_18;
          }
        }
        else if ( !v32 )
        {
          goto LABEL_18;
        }
      }
    }
    if ( v26 == v30 )
    {
LABEL_159:
      v32 = nullptr;
    }
    else
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v32 = (_QWORD *)*v26;
          if ( *v26 > 1u )
            break;
          if ( !v32 )
            goto LABEL_18;
          v26 += 5;
          if ( v30 == v26 )
            goto LABEL_159;
        }
        if ( *((_DWORD *)v32 + 3) == v25 && (_QWORD *)v203 == v32 )
          break;
        v26 += 5;
        if ( v30 == v26 )
          goto LABEL_159;
      }
      v32 = v26;
    }
LABEL_18:
    v214 = v32;
    v204 = v23;
    v196 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v6);
    sub_182CBA0(v196, &v227);
    v33 = qword_1C7F2C0;
    v34 = v204 + 1;
    if ( (*((_BYTE *)v204 + 28) & 1) != 0
      || *((_DWORD *)v204 + 6) != 1
      || (*((_BYTE *)v214 + 28) & 1) != 0
      || *((_DWORD *)v214 + 6) != 1 )
    {
      LOBYTE(v35) = sub_1848D40(qword_1C7F2C0, v34, v214 + 1);
      v33 = qword_1C7F2C0;
    }
    else if ( (*((_BYTE *)v204 + 12) & 1) != 0 || (*((_BYTE *)v214 + 12) & 1) != 0 )
    {
      v190 = sub_182C7B0(qword_1C7F2C0, v34, v214 + 1);
      v33 = qword_1C7F2C0;
      v35 = v190 >> 31;
    }
    else
    {
      LOBYTE(v35) = *((_DWORD *)v204 + 2) < *((_DWORD *)v214 + 2);
    }
    v36 = *(v223 - 1);
    if ( !(_BYTE)v35 )
    {
      v225 = 0;
      v227 = 1;
      v110 = a1->m128i_i64[1];
      v111 = *(unsigned int *)(a4 + 8);
      v112 = *(_DWORD *)(v36 + 12);
      v226 = 0;
      v228 = 0;
      v113 = *(char **)a4;
      v114 = v111 - 1;
      v111 *= 40;
      v115 = (char *)(*(_QWORD *)a4 + v111);
      v116 = 40LL * (v112 & v114);
      v117 = (char *)(*(_QWORD *)a4 + v116);
      if ( v116 != v111 )
      {
        for ( k = (char *)(*(_QWORD *)a4 + v116); v115 != k; k += 40 )
        {
          v119 = *(_QWORD *)k;
          if ( *(_QWORD *)k > 1u )
          {
            if ( *(_DWORD *)(v119 + 12) == v112 && v36 == v119 )
            {
              v113 = k;
              goto LABEL_168;
            }
          }
          else if ( !v119 )
          {
            goto LABEL_167;
          }
        }
      }
      for ( ; v117 != v113; v113 += 40 )
      {
        v136 = *(_QWORD *)v113;
        if ( *(_QWORD *)v113 > 1u )
        {
          if ( *(_DWORD *)(v136 + 12) == v112 && v36 == v136 )
            goto LABEL_168;
        }
        else if ( !v136 )
        {
          break;
        }
      }
LABEL_167:
      v113 = nullptr;
LABEL_168:
      v219 = v113;
      v208 = v110;
      sub_182CBA0(v33, v6);
      sub_182CBA0(v33, &v227);
      v225 = 0;
      v227 = 1;
      v120 = *(unsigned int *)(a4 + 8);
      v121 = *(_DWORD *)(v208 + 12);
      v122 = *(_QWORD **)a4;
      v226 = 0;
      v123 = v120 - 1;
      v228 = 0;
      v120 *= 40;
      v124 = (_QWORD *)((char *)v122 + v120);
      v125 = 40LL * (v121 & v123);
      v126 = &v122[(unsigned __int64)v125 / 8];
      if ( v125 != v120 )
      {
        for ( m = &v122[(unsigned __int64)v125 / 8]; v124 != m; m += 5 )
        {
          v128 = *m;
          if ( *m > 1u )
          {
            if ( *(_DWORD *)(v128 + 12) == v121 && v208 == v128 )
            {
              v122 = m;
              goto LABEL_176;
            }
          }
          else if ( !v128 )
          {
            goto LABEL_175;
          }
        }
      }
      for ( ; v126 != v122; v122 += 5 )
      {
        v132 = *v122;
        if ( *v122 > 1u )
        {
          if ( *(_DWORD *)(v132 + 12) == v121 && v208 == v132 )
            goto LABEL_176;
        }
        else if ( !v132 )
        {
          break;
        }
      }
LABEL_175:
      v122 = nullptr;
LABEL_176:
      v209 = v122;
      v200 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v6);
      sub_182CBA0(v200, &v227);
      v56 = qword_1C7F2C0;
      v129 = v219 + 8;
      if ( (v219[28] & 1) != 0
        || *((_DWORD *)v219 + 6) != 1
        || (*((_BYTE *)v209 + 28) & 1) != 0
        || *((_DWORD *)v209 + 6) != 1 )
      {
        LOBYTE(v130) = sub_1848D40(qword_1C7F2C0, v129, v209 + 1);
        v56 = qword_1C7F2C0;
      }
      else if ( (v219[12] & 1) != 0 || (*((_BYTE *)v209 + 12) & 1) != 0 )
      {
        v193 = sub_182C7B0(qword_1C7F2C0, v129, v209 + 1);
        v56 = qword_1C7F2C0;
        v130 = v193 >> 31;
      }
      else
      {
        LOBYTE(v130) = *((_DWORD *)v219 + 2) < *((_DWORD *)v209 + 2);
      }
      if ( (_BYTE)v130 )
      {
LABEL_180:
        v131 = (__m128d)_mm_loadu_si128(a1);
        v60 = a1->m128i_i64[1];
        *(__m128d *)a1 = _mm_shuffle_pd(v131, v131, 1);
        goto LABEL_42;
      }
      v164 = *v10;
      v165 = *(v223 - 1);
      v225 = 0;
      v227 = 1;
      v166 = *(unsigned int *)(a4 + 8);
      v167 = *(_DWORD *)(v165 + 12);
      v168 = *(_QWORD **)a4;
      v226 = 0;
      v169 = v166 - 1;
      v228 = 0;
      v166 *= 40;
      v170 = (_QWORD *)((char *)v168 + v166);
      v171 = 40LL * (v167 & v169);
      v172 = &v168[(unsigned __int64)v171 / 8];
      if ( v171 != v166 )
      {
        for ( n = &v168[(unsigned __int64)v171 / 8]; v170 != n; n += 5 )
        {
          v174 = *n;
          if ( *n > 1u )
          {
            if ( *(_DWORD *)(v174 + 12) == v167 && v165 == v174 )
            {
LABEL_256:
              v221 = v164;
              v211 = n;
              sub_182CBA0(v56, v6);
              sub_182CBA0(v56, &v227);
              v225 = 0;
              v227 = 1;
              v175 = *(unsigned int *)(a4 + 8);
              v176 = *(_DWORD *)(v221 + 12);
              v177 = *(_QWORD **)a4;
              v226 = 0;
              v178 = v175 - 1;
              v228 = 0;
              v175 *= 40;
              v179 = (_QWORD *)((char *)v177 + v175);
              v180 = 40LL * (v176 & v178);
              v181 = &v177[(unsigned __int64)v180 / 8];
              if ( v180 != v175 )
              {
                for ( ii = &v177[(unsigned __int64)v180 / 8]; v179 != ii; ii += 5 )
                {
                  v183 = *ii;
                  if ( *ii > 1u )
                  {
                    if ( *(_DWORD *)(v183 + 12) == v176 && v221 == v183 )
                      goto LABEL_264;
                  }
                  else if ( !v183 )
                  {
                    goto LABEL_263;
                  }
                }
              }
              if ( v177 != v181 )
              {
                for ( ii = v177; v181 != ii; ii += 5 )
                {
                  v187 = *ii;
                  if ( *ii > 1u )
                  {
                    if ( *(_DWORD *)(v187 + 12) == v176 && v221 == v187 )
                      goto LABEL_264;
                  }
                  else if ( !v187 )
                  {
                    ii = nullptr;
LABEL_264:
                    v222 = ii;
                    v202 = qword_1C7F2C0;
                    sub_182CBA0(qword_1C7F2C0, v6);
                    sub_182CBA0(v202, &v227);
                    v56 = qword_1C7F2C0;
                    v184 = v211 + 1;
                    if ( (*((_BYTE *)v211 + 28) & 1) != 0
                      || *((_DWORD *)v211 + 6) != 1
                      || (*((_BYTE *)v222 + 28) & 1) != 0
                      || *((_DWORD *)v222 + 6) != 1 )
                    {
                      LOBYTE(v185) = sub_1848D40(qword_1C7F2C0, v184, v222 + 1);
                      v56 = qword_1C7F2C0;
                    }
                    else if ( (*((_BYTE *)v211 + 12) & 1) != 0 || (*((_BYTE *)v222 + 12) & 1) != 0 )
                    {
                      v191 = sub_182C7B0(qword_1C7F2C0, v184, v222 + 1);
                      v56 = qword_1C7F2C0;
                      v185 = v191 >> 31;
                    }
                    else
                    {
                      LOBYTE(v185) = *((_DWORD *)v211 + 2) < *((_DWORD *)v222 + 2);
                    }
                    if ( (_BYTE)v185 )
                      goto LABEL_242;
LABEL_41:
                    v59 = a1->m128i_i64[0];
                    a1->m128i_i64[0] = *v10;
                    *v10 = v59;
                    v60 = a1->m128i_i64[0];
                    goto LABEL_42;
                  }
                }
              }
LABEL_263:
              ii = nullptr;
              goto LABEL_264;
            }
          }
          else if ( !v174 )
          {
            goto LABEL_255;
          }
        }
      }
      if ( v168 != v172 )
      {
        for ( n = v168; v172 != n; n += 5 )
        {
          v188 = *n;
          if ( *n > 1u )
          {
            if ( *(_DWORD *)(v188 + 12) == v167 && v165 == v188 )
              goto LABEL_256;
          }
          else if ( !v188 )
          {
            n = nullptr;
            goto LABEL_256;
          }
        }
      }
LABEL_255:
      n = nullptr;
      goto LABEL_256;
    }
    v37 = *v10;
    v225 = 0;
    v227 = 1;
    v38 = *(unsigned int *)(a4 + 8);
    v39 = *(_DWORD *)(v36 + 12);
    v40 = *(_QWORD **)a4;
    v226 = 0;
    v228 = 0;
    v41 = v38 - 1;
    v38 *= 40;
    v42 = (_QWORD *)((char *)v40 + v38);
    v43 = 40LL * (v39 & v41);
    v44 = &v40[(unsigned __int64)v43 / 8];
    if ( v43 != v38 )
    {
      for ( jj = &v40[(unsigned __int64)v43 / 8]; v42 != jj; jj += 5 )
      {
        v46 = *jj;
        if ( *jj > 1u )
        {
          if ( *(_DWORD *)(v46 + 12) == v39 && v36 == v46 )
          {
            v40 = jj;
            goto LABEL_30;
          }
        }
        else if ( !v46 )
        {
          goto LABEL_29;
        }
      }
    }
    for ( ; v44 != v40; v40 += 5 )
    {
      v137 = *v40;
      if ( *v40 > 1u )
      {
        if ( *(_DWORD *)(v137 + 12) == v39 && v36 == v137 )
          goto LABEL_30;
      }
      else if ( !v137 )
      {
        break;
      }
    }
LABEL_29:
    v40 = nullptr;
LABEL_30:
    v215 = v37;
    v205 = v40;
    sub_182CBA0(v33, v6);
    sub_182CBA0(v33, &v227);
    v225 = 0;
    v227 = 1;
    v47 = *(unsigned int *)(a4 + 8);
    v48 = *(_DWORD *)(v215 + 12);
    v49 = *(_QWORD **)a4;
    v226 = 0;
    v50 = v47 - 1;
    v228 = 0;
    v47 *= 40;
    v51 = (_QWORD *)((char *)v49 + v47);
    v52 = 40LL * (v48 & v50);
    v53 = &v49[(unsigned __int64)v52 / 8];
    if ( v52 != v47 )
    {
      for ( kk = &v49[(unsigned __int64)v52 / 8]; v51 != kk; kk += 5 )
      {
        v55 = *kk;
        if ( *kk > 1u )
        {
          if ( *(_DWORD *)(v55 + 12) == v48 && v215 == v55 )
          {
            v49 = kk;
            goto LABEL_38;
          }
        }
        else if ( !v55 )
        {
          goto LABEL_37;
        }
      }
    }
    for ( ; v53 != v49; v49 += 5 )
    {
      v138 = *v49;
      if ( *v49 > 1u )
      {
        if ( *(_DWORD *)(v138 + 12) == v48 && v215 == v138 )
          goto LABEL_38;
      }
      else if ( !v138 )
      {
        break;
      }
    }
LABEL_37:
    v49 = nullptr;
LABEL_38:
    v216 = v49;
    v197 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v6);
    sub_182CBA0(v197, &v227);
    v56 = qword_1C7F2C0;
    v57 = v205 + 1;
    if ( (*((_BYTE *)v205 + 28) & 1) != 0
      || *((_DWORD *)v205 + 6) != 1
      || (*((_BYTE *)v216 + 28) & 1) != 0
      || *((_DWORD *)v216 + 6) != 1 )
    {
      v58 = sub_1848D40(qword_1C7F2C0, v57, v216 + 1);
      v56 = qword_1C7F2C0;
      if ( v58 )
        goto LABEL_41;
    }
    else if ( (*((_BYTE *)v205 + 12) & 1) != 0 || (*((_BYTE *)v216 + 12) & 1) != 0 )
    {
      v139 = sub_182C7B0(qword_1C7F2C0, v57, v216 + 1);
      v56 = qword_1C7F2C0;
      if ( v139 < 0 )
        goto LABEL_41;
    }
    else if ( *((_DWORD *)v205 + 2) < *((_DWORD *)v216 + 2) )
    {
      goto LABEL_41;
    }
    v140 = *(v223 - 1);
    v225 = 0;
    v227 = 1;
    v141 = *(_QWORD **)a4;
    v142 = a1->m128i_i64[1];
    v143 = *(unsigned int *)(a4 + 8);
    v226 = 0;
    v144 = *(_DWORD *)(v140 + 12);
    v228 = 0;
    v145 = v143 - 1;
    v143 *= 40;
    v146 = (_QWORD *)((char *)v141 + v143);
    v147 = 40LL * (v144 & v145);
    v148 = &v141[(unsigned __int64)v147 / 8];
    if ( v147 == v143 )
    {
LABEL_298:
      if ( v141 != v148 )
      {
        for ( mm = v141; v148 != mm; mm += 5 )
        {
          v189 = *mm;
          if ( *mm > 1u )
          {
            if ( *(_DWORD *)(v189 + 12) == v144 && v140 == v189 )
              goto LABEL_231;
          }
          else if ( !v189 )
          {
            mm = nullptr;
            goto LABEL_231;
          }
        }
      }
LABEL_230:
      mm = nullptr;
      goto LABEL_231;
    }
    mm = &v141[(unsigned __int64)v147 / 8];
    while ( 1 )
    {
      v150 = *mm;
      if ( *mm > 1u )
      {
        if ( *(_DWORD *)(v150 + 12) == v144 && v140 == v150 )
        {
LABEL_231:
          v220 = mm;
          v210 = v142;
          sub_182CBA0(v56, v6);
          sub_182CBA0(v56, &v227);
          v225 = 0;
          v227 = 1;
          v151 = *(unsigned int *)(a4 + 8);
          v152 = *(_DWORD *)(v210 + 12);
          v153 = *(char **)a4;
          v226 = 0;
          v154 = v151 - 1;
          v228 = 0;
          v151 *= 40;
          v155 = &v153[v151];
          v156 = 40LL * (v152 & v154);
          v157 = &v153[v156];
          if ( v156 != v151 )
          {
            for ( nn = &v153[v156]; v155 != nn; nn += 40 )
            {
              v159 = *(_QWORD *)nn;
              if ( *(_QWORD *)nn > 1u )
              {
                if ( *(_DWORD *)(v159 + 12) == v152 && v210 == v159 )
                  goto LABEL_239;
              }
              else if ( !v159 )
              {
                goto LABEL_238;
              }
            }
          }
          if ( v153 != v157 )
          {
            for ( nn = v153; v157 != nn; nn += 40 )
            {
              v186 = *(_QWORD *)nn;
              if ( *(_QWORD *)nn > 1u )
              {
                if ( *(_DWORD *)(v186 + 12) == v152 && v210 == v186 )
                  goto LABEL_239;
              }
              else if ( !v186 )
              {
                nn = nullptr;
                goto LABEL_239;
              }
            }
          }
LABEL_238:
          nn = nullptr;
LABEL_239:
          v201 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v6);
          sub_182CBA0(v201, &v227);
          v56 = qword_1C7F2C0;
          v160 = nn + 8;
          v161 = v220 + 1;
          if ( (*((_BYTE *)v220 + 28) & 1) != 0
            || *((_DWORD *)v220 + 6) != 1
            || (nn[28] & 1) != 0
            || *((_DWORD *)nn + 6) != 1 )
          {
            v162 = sub_1848D40(qword_1C7F2C0, v161, v160);
            v56 = qword_1C7F2C0;
            if ( !v162 )
              goto LABEL_180;
          }
          else if ( (*((_BYTE *)v220 + 12) & 1) != 0 || (nn[12] & 1) != 0 )
          {
            v192 = sub_182C7B0(qword_1C7F2C0, v161, v160);
            v56 = qword_1C7F2C0;
            if ( v192 >= 0 )
              goto LABEL_180;
          }
          else if ( *((_DWORD *)v220 + 2) >= *((_DWORD *)nn + 2) )
          {
            goto LABEL_180;
          }
LABEL_242:
          v163 = a1->m128i_i64[0];
          a1->m128i_i64[0] = *(v223 - 1);
          *(v223 - 1) = v163;
          v60 = a1->m128i_i64[0];
LABEL_42:
          v217 = (char *)v223;
          v61 = a4;
          while ( 2 )
          {
            while ( 2 )
            {
              v62 = *(_QWORD *)v194;
              v225 = 0;
              v227 = 1;
              v63 = *(unsigned int *)(v61 + 8);
              v64 = *(_DWORD *)(v60 + 12);
              v65 = *(_QWORD **)v61;
              v226 = 0;
              v228 = 0;
              v66 = v63 - 1;
              v63 *= 40;
              v67 = (_QWORD *)((char *)v65 + v63);
              v68 = 40LL * (v64 & v66);
              v69 = &v65[(unsigned __int64)v68 / 8];
              if ( v68 != v63 )
              {
                for ( i1 = &v65[(unsigned __int64)v68 / 8]; v67 != i1; i1 += 5 )
                {
                  v71 = (_QWORD *)*i1;
                  if ( *i1 > 1u )
                  {
                    if ( *((_DWORD *)v71 + 3) == v64 && v71 == (_QWORD *)v60 )
                    {
                      v71 = i1;
                      goto LABEL_50;
                    }
                  }
                  else if ( !v71 )
                  {
                    goto LABEL_50;
                  }
                }
              }
              if ( v65 == v69 )
              {
LABEL_79:
                v71 = nullptr;
              }
              else
              {
                while ( 1 )
                {
                  while ( 1 )
                  {
                    v71 = (_QWORD *)*v65;
                    if ( *v65 > 1u )
                      break;
                    if ( !v71 )
                      goto LABEL_50;
                    v65 += 5;
                    if ( v69 == v65 )
                      goto LABEL_79;
                  }
                  if ( *((_DWORD *)v71 + 3) == v64 && v71 == (_QWORD *)v60 )
                    break;
                  v65 += 5;
                  if ( v69 == v65 )
                    goto LABEL_79;
                }
                v71 = v65;
              }
LABEL_50:
              v206 = v62;
              sub_182CBA0(v56, v6);
              sub_182CBA0(v56, v22);
              v225 = 0;
              v227 = 1;
              v72 = *(unsigned int *)(v61 + 8);
              v73 = *(_DWORD *)(v206 + 12);
              v74 = *(_QWORD **)v61;
              v226 = 0;
              v75 = v72 - 1;
              v228 = 0;
              v76 = 40 * v72;
              v77 = 40LL * (v73 & v75);
              v78 = &v74[(unsigned __int64)v77 / 8];
              if ( v77 != v76 )
              {
                for ( i2 = &v74[(unsigned __int64)v77 / 8]; &v74[(unsigned __int64)v76 / 8] != i2; i2 += 5 )
                {
                  v80 = (_QWORD *)*i2;
                  if ( *i2 > 1u )
                  {
                    if ( *((_DWORD *)v80 + 3) == v73 && (_QWORD *)v206 == v80 )
                    {
                      v80 = i2;
                      goto LABEL_57;
                    }
                  }
                  else if ( !v80 )
                  {
                    goto LABEL_57;
                  }
                }
              }
              if ( v74 == v78 )
              {
LABEL_70:
                v80 = nullptr;
              }
              else
              {
                while ( 1 )
                {
                  while ( 1 )
                  {
                    v80 = (_QWORD *)*v74;
                    if ( *v74 > 1u )
                      break;
                    if ( !v80 )
                      goto LABEL_57;
                    v74 += 5;
                    if ( v78 == v74 )
                      goto LABEL_70;
                  }
                  if ( *((_DWORD *)v80 + 3) == v73 && (_QWORD *)v206 == v80 )
                    break;
                  v74 += 5;
                  if ( v78 == v74 )
                    goto LABEL_70;
                }
                v80 = v74;
              }
LABEL_57:
              v198 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v6);
              sub_182CBA0(v198, v22);
              v56 = qword_1C7F2C0;
              v81 = v71 + 1;
              if ( (*((_BYTE *)v71 + 28) & 1) != 0
                || *((_DWORD *)v71 + 6) != 1
                || (*((_BYTE *)v80 + 28) & 1) != 0
                || *((_DWORD *)v80 + 6) != 1 )
              {
                LOBYTE(v82) = sub_1848D40(qword_1C7F2C0, v81, v80 + 1);
                v56 = qword_1C7F2C0;
                goto LABEL_60;
              }
              if ( (*((_BYTE *)v71 + 12) & 1) != 0 || (*((_BYTE *)v80 + 12) & 1) != 0 )
              {
                v109 = sub_182C7B0(qword_1C7F2C0, v81, v80 + 1);
                v56 = qword_1C7F2C0;
                v82 = v109 >> 31;
LABEL_60:
                if ( !(_BYTE)v82 )
                  goto LABEL_85;
LABEL_61:
                v194 += 8;
                v60 = a1->m128i_i64[0];
                continue;
              }
              break;
            }
            if ( *((_DWORD *)v71 + 2) < *((_DWORD *)v80 + 2) )
              goto LABEL_61;
LABEL_85:
            v199 = v22;
            v83 = v56;
            v84 = v217 - 8;
            v207 = v6;
            v85 = v61;
            while ( 2 )
            {
              v86 = *(_QWORD *)v84;
              v225 = 0;
              v227 = 1;
              v87 = *(unsigned int *)(v85 + 8);
              v88 = *(_DWORD *)(v86 + 12);
              v89 = a1->m128i_i64[0];
              v226 = 0;
              v90 = v87 - 1;
              v91 = *(_QWORD **)v85;
              v228 = 0;
              v87 *= 40;
              v92 = (_QWORD *)((char *)v91 + v87);
              v93 = 40LL * (v88 & v90);
              v94 = &v91[(unsigned __int64)v93 / 8];
              if ( v93 != v87 )
              {
                for ( i3 = &v91[(unsigned __int64)v93 / 8]; v92 != i3; i3 += 5 )
                {
                  v96 = (_QWORD *)*i3;
                  if ( *i3 > 1u )
                  {
                    if ( *((_DWORD *)v96 + 3) == v88 && (_QWORD *)v86 == v96 )
                    {
                      v96 = i3;
                      goto LABEL_93;
                    }
                  }
                  else if ( !v96 )
                  {
                    goto LABEL_93;
                  }
                }
              }
              if ( v91 == v94 )
              {
LABEL_122:
                v96 = nullptr;
              }
              else
              {
                while ( 1 )
                {
                  while ( 1 )
                  {
                    v96 = (_QWORD *)*v91;
                    if ( *v91 > 1u )
                      break;
                    if ( !v96 )
                      goto LABEL_93;
                    v91 += 5;
                    if ( v94 == v91 )
                      goto LABEL_122;
                  }
                  if ( *((_DWORD *)v96 + 3) == v88 && (_QWORD *)v86 == v96 )
                    break;
                  v91 += 5;
                  if ( v94 == v91 )
                    goto LABEL_122;
                }
                v96 = v91;
              }
LABEL_93:
              sub_182CBA0(v83, v207);
              sub_182CBA0(v83, v199);
              v225 = 0;
              v227 = 1;
              v97 = *(unsigned int *)(v85 + 8);
              v98 = *(_DWORD *)(v89 + 12);
              v99 = *(_QWORD **)v85;
              v226 = 0;
              v228 = 0;
              v100 = v97 - 1;
              v101 = 40 * v97;
              v102 = 40LL * (v98 & v100);
              v103 = &v99[(unsigned __int64)v102 / 8];
              if ( v102 != v101 )
              {
                for ( i4 = &v99[(unsigned __int64)v102 / 8]; &v99[(unsigned __int64)v101 / 8] != i4; i4 += 5 )
                {
                  v105 = (_QWORD *)*i4;
                  if ( *i4 > 1u )
                  {
                    if ( *((_DWORD *)v105 + 3) == v98 && (_QWORD *)v89 == v105 )
                    {
                      v105 = i4;
                      goto LABEL_100;
                    }
                  }
                  else if ( !v105 )
                  {
                    goto LABEL_100;
                  }
                }
              }
              if ( v99 == v103 )
              {
LABEL_113:
                v105 = nullptr;
              }
              else
              {
                while ( 1 )
                {
                  while ( 1 )
                  {
                    v105 = (_QWORD *)*v99;
                    if ( *v99 > 1u )
                      break;
                    if ( !v105 )
                      goto LABEL_100;
                    v99 += 5;
                    if ( v103 == v99 )
                      goto LABEL_113;
                  }
                  if ( *((_DWORD *)v105 + 3) == v98 && (_QWORD *)v89 == v105 )
                    break;
                  v99 += 5;
                  if ( v103 == v99 )
                    goto LABEL_113;
                }
                v105 = v99;
              }
LABEL_100:
              v218 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v207);
              sub_182CBA0(v218, v199);
              v106 = v96 + 1;
              if ( (*((_BYTE *)v96 + 28) & 1) != 0
                || *((_DWORD *)v96 + 6) != 1
                || (*((_BYTE *)v105 + 28) & 1) != 0
                || *((_DWORD *)v105 + 6) != 1 )
              {
                LOBYTE(v107) = sub_1848D40(qword_1C7F2C0, v106, v105 + 1);
                goto LABEL_103;
              }
              if ( (*((_BYTE *)v96 + 12) & 1) != 0 || (*((_BYTE *)v105 + 12) & 1) != 0 )
              {
                v107 = (unsigned int)sub_182C7B0(qword_1C7F2C0, v106, v105 + 1) >> 31;
LABEL_103:
                if ( !(_BYTE)v107 )
                  goto LABEL_128;
LABEL_104:
                v83 = qword_1C7F2C0;
                v84 -= 8;
                continue;
              }
              break;
            }
            if ( *((_DWORD *)v96 + 2) < *((_DWORD *)v105 + 2) )
              goto LABEL_104;
LABEL_128:
            v61 = v85;
            v217 = v84;
            v22 = v199;
            v6 = v207;
            if ( v194 < v84 )
            {
              v56 = qword_1C7F2C0;
              v108 = *(_QWORD *)v194;
              *(_QWORD *)v194 = *(_QWORD *)v84;
              v194 += 8;
              *(_QWORD *)v84 = v108;
              v60 = a1->m128i_i64[0];
              continue;
            }
            break;
          }
          a4 = v61;
          sub_314A50(v194, v223, a3, v61);
          result = v194 - (char *)a1;
          if ( v194 - (char *)a1 <= 128 )
            return result;
          v223 = (__int64 *)v194;
          goto LABEL_3;
        }
      }
      else if ( !v150 )
      {
        goto LABEL_230;
      }
      mm += 5;
      if ( v146 == mm )
        goto LABEL_298;
    }
  }
  for ( i5 = v8 - 1; ; --i5 )
  {
    sub_314300((__int64)a1, i5, v9, a1->m128i_i64[i5], a4);
    if ( !i5 )
      break;
  }
  v134 = v223;
  for ( result = (char *)v223 - (char *)a1;
        (char *)v134 - (char *)a1 > 8;
        result = sub_314300((__int64)a1, 0, ((char *)v134 - (char *)a1) >> 3, v135, a4) )
  {
    v135 = *--v134;
    *v134 = a1->m128i_i64[0];
  }
  return result;
}

