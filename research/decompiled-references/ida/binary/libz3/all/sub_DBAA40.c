__int64 __fastcall sub_DBAA40(_QWORD *a1, __int64 a2)
{
  char **v2; // r12
  char **v3; // r12
  char **v4; // r12
  char **v5; // r12
  char **v6; // r12
  char **v7; // rbx
  char **exception; // rbx
  char **v9; // r12
  char **v10; // r12
  __int64 v13; // rax
  _QWORD *v14; // rdi
  int v15; // r13d
  __int64 v16; // rax
  _DWORD *v17; // rax
  _QWORD *v18; // rdi
  unsigned int v19; // eax
  __int64 v20; // rdx
  int v21; // eax
  _QWORD *v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rbx
  __m128i *v25; // r14
  _QWORD *v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __m128i *v29; // rbx
  unsigned int v30; // r13d
  __int64 v31; // r12
  __int64 v32; // rax
  unsigned int v33; // edx
  __int64 v34; // rdx
  __int64 v35; // rsi
  _QWORD *v36; // rdi
  __int16 v37; // ax
  __int64 v38; // r9
  int v39; // eax
  __int64 v40; // rcx
  const __m128i *v41; // r12
  __int64 v42; // r10
  __m128i *v43; // rdx
  __m128i *v44; // rsi
  __int64 v45; // r8
  unsigned int v46; // esi
  __m128i *m; // rsi
  __m128i *v48; // r8
  __int64 v49; // rcx
  _QWORD *v50; // rdx
  unsigned int v51; // eax
  unsigned int v52; // r13d
  unsigned int v53; // ecx
  size_t v54; // rsi
  unsigned int v55; // r15d
  unsigned int *v56; // rax
  unsigned int v57; // eax
  __int64 v58; // r15
  _QWORD *v59; // rdi
  __int64 v60; // rdx
  _QWORD *v61; // rdx
  unsigned int v62; // eax
  _QWORD *v63; // rdx
  __int64 v64; // rax
  _QWORD *v65; // rax
  unsigned int v67; // r13d
  unsigned int v68; // ecx
  size_t v69; // rsi
  unsigned int v70; // r15d
  unsigned int *v71; // rax
  unsigned int v72; // eax
  __int64 v73; // r15
  _QWORD *v74; // rdi
  __int64 v75; // rdx
  _QWORD *v76; // rdi
  unsigned int v77; // r15d
  size_t v78; // rsi
  unsigned int *v79; // rax
  unsigned int v80; // eax
  __int64 v81; // r12
  __int64 v82; // rdx
  _QWORD *v83; // rdi
  _QWORD *v84; // rax
  _QWORD *v85; // rax
  unsigned int v86; // r12d
  unsigned int v87; // esi
  unsigned int v88; // r12d
  size_t v89; // rsi
  unsigned int *v90; // rax
  __int64 v91; // rax
  unsigned int v92; // r12d
  size_t v93; // rsi
  unsigned int *v94; // rax
  __int64 v95; // rdx
  unsigned int v96; // r12d
  size_t v97; // rsi
  unsigned int *v98; // rax
  __int64 v99; // rax
  unsigned int v100; // r12d
  int v101; // r15d
  __int64 v102; // rax
  __int64 v103; // rax
  __int16 v104; // ax
  unsigned int v105; // edx
  unsigned int v106; // esi
  unsigned int v107; // edx
  size_t v108; // rsi
  unsigned int *v109; // rax
  _QWORD *v110; // rax
  _QWORD *v111; // rax
  unsigned int v112; // r15d
  __int64 v113; // r10
  __int64 v114; // rax
  __int64 v115; // rax
  unsigned int *v116; // rsi
  unsigned int v117; // edx
  size_t v118; // rsi
  unsigned int *v119; // rax
  unsigned int v120; // r9d
  size_t v121; // rsi
  unsigned int *v122; // rax
  _BYTE *v123; // rax
  __int64 v124; // rax
  char v125; // dl
  _QWORD *v126; // rax
  _QWORD *v127; // rax
  __int64 v128; // r8
  _QWORD *v129; // rax
  int v130; // eax
  __int64 v131; // r11
  __m128i *v132; // r8
  __int64 v133; // rsi
  __m128i *v134; // rdx
  __m128i *i; // rdi
  __int64 v136; // rcx
  unsigned int v137; // r9d
  __m128i *k; // rsi
  __m128i *v139; // r9
  __int64 v140; // rcx
  __int64 v141; // rcx
  unsigned int v142; // eax
  __int64 v143; // rcx
  __m128i *v144; // rax
  __m128i *v145; // r15
  __m128i *v146; // rdx
  unsigned int v147; // r10d
  const __m128i *v148; // r8
  const __m128i *n; // rax
  __int64 v150; // rdx
  __m128i *v151; // rsi
  __m128i *v152; // rdx
  __int64 v153; // rcx
  __m128i *v154; // rax
  __m128i *v155; // r10
  __m128i *v156; // rdx
  __m128i *v157; // r9
  unsigned int v158; // r15d
  const __m128i *j; // rax
  __int64 v160; // rdx
  __m128i *v161; // rsi
  __m128i *v162; // rdx
  _QWORD *v163; // [rsp+8h] [rbp-E0h]
  __int64 v164; // [rsp+10h] [rbp-D8h]
  _DWORD *v165; // [rsp+18h] [rbp-D0h]
  unsigned int v166; // [rsp+20h] [rbp-C8h]
  int v167; // [rsp+24h] [rbp-C4h]
  unsigned int v168; // [rsp+28h] [rbp-C0h]
  __int64 v169; // [rsp+28h] [rbp-C0h]
  unsigned int v170; // [rsp+30h] [rbp-B8h]
  unsigned int v171; // [rsp+30h] [rbp-B8h]
  unsigned int v172; // [rsp+30h] [rbp-B8h]
  __int64 v173; // [rsp+30h] [rbp-B8h]
  unsigned int v174; // [rsp+30h] [rbp-B8h]
  size_t v175; // [rsp+30h] [rbp-B8h]
  unsigned int v176; // [rsp+38h] [rbp-B0h]
  unsigned int v177; // [rsp+3Ch] [rbp-ACh]
  unsigned int v178; // [rsp+40h] [rbp-A8h]
  const __m128i *v179; // [rsp+40h] [rbp-A8h]
  __int64 v180; // [rsp+40h] [rbp-A8h]
  __m128i *v181; // [rsp+40h] [rbp-A8h]
  int v182; // [rsp+48h] [rbp-A0h]
  unsigned int v183; // [rsp+50h] [rbp-98h]
  unsigned int v184; // [rsp+50h] [rbp-98h]
  unsigned int v185; // [rsp+50h] [rbp-98h]
  int v186; // [rsp+54h] [rbp-94h]
  int v187; // [rsp+58h] [rbp-90h]
  unsigned int v188; // [rsp+58h] [rbp-90h]
  __m128i *v189; // [rsp+58h] [rbp-90h]
  unsigned int v190; // [rsp+60h] [rbp-88h]
  int v191; // [rsp+64h] [rbp-84h]
  __int64 v192; // [rsp+68h] [rbp-80h]
  const __m128i *v193; // [rsp+70h] [rbp-78h]
  __int64 v194[11]; // [rsp+90h] [rbp-58h] BYREF

  v13 = a1[4];
  if ( v13 )
  {
    v14 = (_QWORD *)a1[3];
    v15 = *(_DWORD *)(v13 - 4);
    if ( v14 )
      goto LABEL_3;
  }
  else
  {
    v14 = (_QWORD *)a1[3];
    v15 = 0;
    if ( v14 )
    {
LABEL_3:
      v16 = *((unsigned int *)v14 - 1);
      if ( (_DWORD)v16 == *((_DWORD *)v14 - 2) )
      {
        v96 = (unsigned int)(3 * v16 + 1) >> 1;
        v97 = 4 * v96 + 8;
        if ( 4 * (int)v16 + 8 >= (unsigned int)v97 || (unsigned int)v16 >= v96 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v194, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v194);
          sub_233E40((__int64)v194);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v98 = (unsigned int *)sub_186B300(v14 - 1, v97);
        v14 = v98 + 2;
        *v98 = v96;
        v99 = v98[1];
        a1[3] = v14;
        v17 = (_DWORD *)v14 + v99;
      }
      else
      {
        v17 = (_DWORD *)v14 + v16;
      }
      goto LABEL_5;
    }
  }
  v111 = (_QWORD *)sub_186B270(0x10u);
  v14 = v111 + 1;
  *v111 = 2;
  a1[3] = v111 + 1;
  v17 = v111 + 1;
LABEL_5:
  *v17 = v15;
  ++*((_DWORD *)v14 - 1);
  if ( a2 )
    ++*(_DWORD *)(a2 + 8);
  v18 = (_QWORD *)a1[2];
  if ( v18 )
  {
    v19 = *((_DWORD *)v18 - 1);
    if ( v19 == *((_DWORD *)v18 - 2) )
    {
      v92 = (3 * v19 + 1) >> 1;
      v93 = 8 * v92 + 8;
      if ( 8 * v19 + 8 >= (unsigned int)v93 || v19 >= v92 )
      {
        v7 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v194, "Overflow encountered when expanding vector");
        *v7 = (char *)off_1C63128;
        sub_2333C0(v7 + 1, v194);
        sub_233E40((__int64)v194);
        __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v94 = (unsigned int *)sub_186B300(v18 - 1, v93);
      v95 = v94[1];
      v18 = v94 + 2;
      *v94 = v92;
      a1[2] = v94 + 2;
      LODWORD(v94) = v95;
      v22 = &v18[v95];
      v21 = (_DWORD)v94 + 1;
    }
    else
    {
      v20 = v19;
      v21 = v19 + 1;
      v22 = &v18[v20];
    }
  }
  else
  {
    v129 = (_QWORD *)sub_186B270(0x18u);
    v18 = v129 + 1;
    *v129 = 2;
    v21 = 1;
    a1[2] = v18;
    v22 = v18;
  }
  *v22 = a2;
  *((_DWORD *)v18 - 1) = v21;
  v23 = sub_186B270(0x80u);
  *(_QWORD *)v23 = 0;
  v24 = *(_QWORD *)(a2 + 24);
  v25 = (__m128i *)v23;
  *(_DWORD *)(v23 + 8) = 0;
  *(_QWORD *)(v23 + 16) = 0;
  *(_DWORD *)(v23 + 24) = 0;
  *(_QWORD *)(v23 + 32) = 0;
  *(_DWORD *)(v23 + 40) = 0;
  *(_QWORD *)(v23 + 48) = 0;
  *(_DWORD *)(v23 + 56) = 0;
  *(_QWORD *)(v23 + 64) = 0;
  *(_DWORD *)(v23 + 72) = 0;
  *(_QWORD *)(v23 + 80) = 0;
  *(_DWORD *)(v23 + 88) = 0;
  *(_QWORD *)(v23 + 96) = 0;
  *(_DWORD *)(v23 + 104) = 0;
  *(_QWORD *)(v23 + 112) = 0;
  *(_DWORD *)(v23 + 120) = 0;
  v26 = (_QWORD *)sub_186B270(0x18u);
  v26[1] = v24;
  v163 = v26 + 1;
  *v26 = 0x100000002LL;
  v27 = sub_186B270(0x10u);
  *(_DWORD *)(v27 + 8) = 0;
  *(_QWORD *)v27 = 0x100000002LL;
  v165 = (_DWORD *)(v27 + 8);
  v28 = sub_186B270(0x80u);
  *(_QWORD *)v28 = 0;
  v29 = (__m128i *)v28;
  v30 = 1;
  *(_DWORD *)(v28 + 8) = 0;
  *(_QWORD *)(v28 + 16) = 0;
  *(_DWORD *)(v28 + 24) = 0;
  *(_QWORD *)(v28 + 32) = 0;
  *(_DWORD *)(v28 + 40) = 0;
  *(_QWORD *)(v28 + 48) = 0;
  *(_DWORD *)(v28 + 56) = 0;
  *(_QWORD *)(v28 + 64) = 0;
  *(_DWORD *)(v28 + 72) = 0;
  *(_QWORD *)(v28 + 80) = 0;
  *(_DWORD *)(v28 + 88) = 0;
  *(_QWORD *)(v28 + 96) = 0;
  *(_DWORD *)(v28 + 104) = 0;
  *(_QWORD *)(v28 + 112) = 0;
  *(_DWORD *)(v28 + 120) = 0;
  v182 = 0;
  v186 = 0;
  v183 = 8;
  v187 = 0;
  v191 = 0;
  v190 = 8;
  v168 = 0;
  v176 = 0;
  v166 = 0;
  v164 = 0;
  v167 = 0;
  v170 = 0;
  v177 = 0;
  while ( 1 )
  {
    v31 = *((unsigned int *)v163 - 1);
    if ( !(_DWORD)v31 )
      break;
    v32 = (unsigned int)(*(v165 - 1) - 1);
    v33 = v165[v32];
    *(v165 - 1) = v32;
    v166 = v33;
    v34 = (unsigned int)(v31 - 1);
    v35 = v163[v34];
    *((_DWORD *)v163 - 1) = v34;
    v36 = (_QWORD *)a1[4];
    v164 = v35;
    if ( v36 )
    {
      v167 = *((_DWORD *)v36 - 1) + 1;
      v37 = *(_WORD *)(v35 + 4);
      if ( !v37 )
        goto LABEL_94;
      if ( v37 != 1 )
      {
        v100 = v30;
        v101 = 8;
        goto LABEL_80;
      }
    }
    else
    {
      v104 = *(_WORD *)(v35 + 4);
      if ( !v104 )
      {
        v167 = 1;
LABEL_94:
        v100 = v30;
        v192 = *(_QWORD *)(v35 + 16);
        if ( *(_DWORD *)(v35 + 24) )
        {
          v112 = 0;
          do
          {
            v115 = (unsigned int)*(v165 - 1);
            v116 = &v165[v115];
            if ( (_DWORD)v115 == *(v165 - 2) )
            {
              v117 = (unsigned int)(3 * v115 + 1) >> 1;
              v118 = 4 * v117 + 8;
              if ( 4 * (int)v115 + 8 >= (unsigned int)v118 || (unsigned int)v115 >= v117 )
              {
                v4 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v194, "Overflow encountered when expanding vector");
                *v4 = (char *)off_1C63128;
                sub_2333C0(v4 + 1, v194);
                sub_233E40((__int64)v194);
                __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v172 = (unsigned int)(3 * v115 + 1) >> 1;
              v119 = (unsigned int *)sub_186B300(v165 - 2, v118);
              v165 = v119 + 2;
              *v119 = v172;
              v116 = &v119[v119[1] + 2];
              LODWORD(v34) = *((_DWORD *)v163 - 1);
            }
            *v116 = v100;
            ++*(v165 - 1);
            v113 = *(_QWORD *)(v164 + 8LL * v112 + 32);
            if ( *((_DWORD *)v163 - 2) == (_DWORD)v34 )
            {
              v120 = (unsigned int)(3 * v34 + 1) >> 1;
              v121 = 8 * v120 + 8;
              if ( 8 * (int)v34 + 8 >= (unsigned int)v121 || (unsigned int)v34 >= v120 )
              {
                v3 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v194, "Overflow encountered when expanding vector");
                *v3 = (char *)off_1C63128;
                sub_2333C0(v3 + 1, v194);
                sub_233E40((__int64)v194);
                __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v178 = (unsigned int)(3 * v34 + 1) >> 1;
              v173 = *(_QWORD *)(v164 + 8LL * v112 + 32);
              v122 = (unsigned int *)sub_186B300(v163 - 1, v121);
              v113 = v173;
              v163 = v122 + 2;
              LODWORD(v34) = v122[1];
              *v122 = v178;
            }
            v114 = (unsigned int)v34;
            LODWORD(v34) = v34 + 1;
            ++v100;
            ++v112;
            v163[v114] = v113;
            *((_DWORD *)v163 - 1) = v34;
          }
          while ( v112 < *(_DWORD *)(v164 + 24) );
        }
        v123 = *(_BYTE **)(v192 + 16);
        if ( !v123 || *v123 != 63 )
        {
          v36 = (_QWORD *)a1[4];
          v101 = 1;
          v124 = *(_QWORD *)(v192 + 24);
          if ( v124 )
          {
            v125 = *(_BYTE *)(v124 + 17);
            if ( (v125 & 1) != 0 && (v125 & 2) != 0 )
              v101 = ((v125 & 8) != 0) + 1;
            else
              v101 = (v125 & 8) == 0 ? 1 : 3;
          }
          goto LABEL_110;
        }
        v130 = *(_DWORD *)(v192 + 12);
        v131 = 16LL * v190;
        v132 = (__m128i *)((char *)v25 + v131);
        v133 = 16LL * (v130 & (v190 - 1));
        v134 = &v25[(unsigned __int64)v133 / 0x10];
        if ( v133 != v131 )
        {
          for ( i = &v25[(unsigned __int64)v133 / 0x10]; v132 != i; ++i )
          {
            v136 = i->m128i_i64[0];
            if ( i->m128i_i64[0] > 1uLL )
            {
              if ( *(_DWORD *)(v136 + 12) == v130 && v192 == v136 )
              {
LABEL_159:
                v142 = i->m128i_u32[2];
                v101 = 7;
                v36 = (_QWORD *)a1[4];
                v176 = v142;
                goto LABEL_110;
              }
            }
            else if ( !v136 )
            {
LABEL_139:
              v137 = 2 * v190;
              if ( 3 * v190 >= 4 * (v191 + v187) )
                goto LABEL_140;
              goto LABEL_215;
            }
          }
        }
        if ( v25 != v134 )
        {
          i = v25;
          while ( 1 )
          {
            v143 = i->m128i_i64[0];
            if ( i->m128i_i64[0] > 1uLL )
            {
              if ( *(_DWORD *)(v143 + 12) == v130 && v192 == v143 )
                goto LABEL_159;
            }
            else if ( !v143 )
            {
              goto LABEL_139;
            }
            if ( v134 == ++i )
              goto LABEL_139;
          }
        }
        if ( 3 * v190 < 4 * (v187 + v191) )
        {
          v137 = 2 * v190;
LABEL_215:
          v193 = (__m128i *)((char *)v25 + v131);
          v190 = v137;
          v188 = v137;
          v180 = v137;
          v175 = 16LL * v137;
          v154 = (__m128i *)sub_186B270(v175);
          v155 = v154;
          v131 = v175;
          v156 = &v154[v180];
          if ( v188 )
          {
            do
            {
              v154->m128i_i64[0] = 0;
              ++v154;
              v154[-1].m128i_i32[2] = 0;
            }
            while ( v154 != v156 );
          }
          v157 = &v155[v175 / 0x10];
          v158 = v188 - 1;
          for ( j = v25; v193 != j; ++j )
          {
            if ( j->m128i_i64[0] > 1uLL )
            {
              v160 = 16LL * (*(_DWORD *)(j->m128i_i64[0] + 12) & v158);
              v161 = &v155[(unsigned __int64)v160 / 0x10];
              if ( v175 == v160 )
              {
LABEL_226:
                if ( v155 == v161 )
                {
LABEL_234:
                  sub_1872CE0("");
                  sub_1873130(114, 213);
                }
                v162 = v155;
                while ( v162->m128i_i64[0] )
                {
                  if ( v161 == ++v162 )
                    goto LABEL_234;
                }
              }
              else
              {
                v162 = &v155[(unsigned __int64)v160 / 0x10];
                while ( v162->m128i_i64[0] )
                {
                  if ( v157 == ++v162 )
                    goto LABEL_226;
                }
              }
              *v162 = _mm_loadu_si128(j);
            }
          }
          if ( v25 )
          {
            v189 = &v155[v175 / 0x10];
            v181 = v155;
            sub_186B220(v25);
            v157 = v189;
            v155 = v181;
            v131 = v175;
          }
          v132 = v157;
          v25 = v155;
          v187 = 0;
          v130 = *(_DWORD *)(v192 + 12);
          v133 = 16LL * (v130 & v158);
          v134 = &v155[(unsigned __int64)v133 / 0x10];
LABEL_140:
          if ( v133 == v131 )
          {
            v139 = nullptr;
LABEL_198:
            if ( v25 != v134 )
            {
              for ( k = v25; k != v134; ++k )
              {
                v153 = k->m128i_i64[0];
                if ( k->m128i_i64[0] > 1uLL )
                {
                  if ( *(_DWORD *)(v153 + 12) == v130 && v192 == v153 )
                    goto LABEL_235;
                }
                else
                {
                  if ( !v153 )
                    goto LABEL_207;
                  v139 = k;
                }
              }
            }
LABEL_213:
            sub_1872CE0("");
            sub_1873130(114, 405);
          }
        }
        else if ( !v131 )
        {
          goto LABEL_213;
        }
        k = v134;
        v139 = nullptr;
        while ( 1 )
        {
          v140 = k->m128i_i64[0];
          if ( k->m128i_i64[0] > 1uLL )
          {
            if ( *(_DWORD *)(v140 + 12) == v130 && v192 == v140 )
            {
LABEL_235:
              k->m128i_i64[0] = v192;
              k->m128i_i32[2] = v166;
LABEL_210:
              v36 = (_QWORD *)a1[4];
              v101 = 6;
              goto LABEL_110;
            }
          }
          else
          {
            if ( !v140 )
            {
LABEL_207:
              if ( v139 )
                --v187;
              else
                v139 = k;
              v139->m128i_i64[0] = v192;
              v139->m128i_i32[2] = v166;
              ++v191;
              goto LABEL_210;
            }
            v139 = k;
          }
          if ( ++k == v132 )
            goto LABEL_198;
        }
      }
      if ( v104 != 1 )
      {
        v167 = 1;
        v100 = v30;
        v101 = 8;
        goto LABEL_111;
      }
      v167 = 1;
    }
    v38 = v35;
    v39 = *(_DWORD *)(v35 + 12);
    v40 = 16LL * v183;
    v41 = (__m128i *)((char *)v29 + v40);
    v42 = 16LL * (v39 & (v183 - 1));
    v43 = &v29[(unsigned __int64)v42 / 0x10];
    if ( v42 == v40 )
    {
      v44 = v29;
      if ( v43 != v29 )
      {
        while ( 1 )
        {
LABEL_125:
          v128 = v44->m128i_i64[0];
          if ( v44->m128i_i64[0] > 1uLL )
          {
            if ( *(_DWORD *)(v128 + 12) == v39 && v38 == v128 )
            {
LABEL_119:
              v100 = v30;
              v101 = 10;
              v168 = v44->m128i_u32[2];
              goto LABEL_110;
            }
          }
          else if ( !v128 )
          {
LABEL_22:
            v46 = 2 * v183;
            if ( 3 * v183 >= 4 * (v182 + v186) )
              goto LABEL_23;
            goto LABEL_176;
          }
          if ( v43 == ++v44 )
            goto LABEL_22;
        }
      }
      if ( 3 * v183 >= 4 * (v186 + v182) )
      {
LABEL_150:
        v48 = nullptr;
LABEL_151:
        if ( v29 != v43 )
        {
          for ( m = v29; m != v43; ++m )
          {
            v141 = m->m128i_i64[0];
            if ( m->m128i_i64[0] > 1uLL )
            {
              if ( *(_DWORD *)(v141 + 12) == v39 && v164 == v141 )
                goto LABEL_196;
            }
            else
            {
              if ( !v141 )
                goto LABEL_168;
              v48 = m;
            }
          }
        }
LABEL_174:
        sub_1872CE0("");
        sub_1873130(114, 405);
      }
      v46 = 2 * v183;
LABEL_176:
      v183 = v46;
      v144 = (__m128i *)sub_186B270(16LL * v46);
      v145 = v144;
      v40 = 16LL * v46;
      v146 = (__m128i *)((char *)v144 + v40);
      if ( v46 )
      {
        do
        {
          v144->m128i_i64[0] = 0;
          ++v144;
          v144[-1].m128i_i32[2] = 0;
        }
        while ( v144 != v146 );
      }
      v147 = v46 - 1;
      v148 = (__m128i *)((char *)v145 + v40);
      for ( n = v29; v41 != n; ++n )
      {
        if ( n->m128i_i64[0] > 1uLL )
        {
          v150 = 16LL * (*(_DWORD *)(n->m128i_i64[0] + 12) & v147);
          v151 = &v145[(unsigned __int64)v150 / 0x10];
          if ( v40 == v150 )
          {
LABEL_187:
            if ( v145 == v151 )
            {
LABEL_195:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v152 = v145;
            while ( v152->m128i_i64[0] )
            {
              if ( v151 == ++v152 )
                goto LABEL_195;
            }
          }
          else
          {
            v152 = &v145[(unsigned __int64)v150 / 0x10];
            while ( v152->m128i_i64[0] )
            {
              if ( v148 == ++v152 )
                goto LABEL_187;
            }
          }
          *v152 = _mm_loadu_si128(n);
        }
      }
      if ( v29 )
      {
        v179 = (__m128i *)((char *)v145 + v40);
        v174 = v147;
        v169 = v40;
        sub_186B220(v29);
        v148 = v179;
        v147 = v174;
        v40 = v169;
      }
      v182 = 0;
      v41 = v148;
      v29 = v145;
      v39 = *(_DWORD *)(v164 + 12);
      v42 = 16LL * (v39 & v147);
      v43 = &v145[(unsigned __int64)v42 / 0x10];
LABEL_23:
      if ( v42 == v40 )
        goto LABEL_150;
      goto LABEL_24;
    }
    v44 = &v29[(unsigned __int64)v42 / 0x10];
    do
    {
      v45 = v44->m128i_i64[0];
      if ( v44->m128i_i64[0] > 1uLL )
      {
        if ( *(_DWORD *)(v45 + 12) == v39 && v164 == v45 )
          goto LABEL_119;
      }
      else if ( !v45 )
      {
        goto LABEL_22;
      }
      ++v44;
    }
    while ( v41 != v44 );
    if ( v43 != v29 )
    {
      v38 = v164;
      v44 = v29;
      goto LABEL_125;
    }
    v46 = 2 * v183;
    if ( 3 * v183 < 4 * (v186 + v182) )
      goto LABEL_176;
    if ( !v40 )
      goto LABEL_174;
LABEL_24:
    m = v43;
    v48 = nullptr;
    while ( 1 )
    {
      v49 = m->m128i_i64[0];
      if ( m->m128i_i64[0] <= 1uLL )
        break;
      if ( *(_DWORD *)(v49 + 12) == v39 && v164 == v49 )
      {
LABEL_196:
        m->m128i_i64[0] = v164;
        m->m128i_i32[2] = v177;
        goto LABEL_171;
      }
LABEL_27:
      if ( ++m == v41 )
        goto LABEL_151;
    }
    if ( v49 )
    {
      v48 = m;
      goto LABEL_27;
    }
LABEL_168:
    if ( v48 )
      --v182;
    else
      v48 = m;
    v48->m128i_i64[0] = v164;
    v48->m128i_i32[2] = v177;
    ++v186;
LABEL_171:
    v36 = (_QWORD *)a1[4];
    v100 = v30;
    v101 = 9;
    v168 = v177++;
LABEL_110:
    if ( !v36 )
    {
LABEL_111:
      v126 = (_QWORD *)sub_186B270(0x68u);
      v36 = v126 + 1;
      *v126 = 2;
      a1[4] = v126 + 1;
      v103 = (__int64)(v126 + 1);
      goto LABEL_82;
    }
LABEL_80:
    v102 = *((unsigned int *)v36 - 1);
    if ( (_DWORD)v102 == *((_DWORD *)v36 - 2) )
    {
      v105 = 3 * v102 + 1;
      v106 = v105 & 0xFFFFFFFE;
      v107 = v105 >> 1;
      v108 = 16 * (v107 + v106) + 8;
      if ( 48 * (int)v102 + 8 >= (unsigned int)v108 || (unsigned int)v102 >= v107 )
      {
        v2 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v194, "Overflow encountered when expanding vector");
        *v2 = (char *)off_1C63128;
        sub_2333C0(v2 + 1, v194);
        sub_233E40((__int64)v194);
        __cxa_throw(v2, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v171 = v107;
      v109 = (unsigned int *)sub_186B300(v36 - 1, v108);
      v36 = v109 + 2;
      a1[4] = v109 + 2;
      *v109 = v171;
      v103 = (__int64)&v109[12 * v109[1] + 2];
    }
    else
    {
      v103 = (__int64)&v36[6 * v102];
    }
LABEL_82:
    *(_DWORD *)(v103 + 4) = v30;
    *(_DWORD *)v103 = v101;
    *(_DWORD *)(v103 + 8) = v167;
    *(_QWORD *)(v103 + 16) = 0;
    *(_QWORD *)(v103 + 24) = v164;
    *(_DWORD *)(v103 + 40) = 0;
    *(_DWORD *)(v103 + 44) = v168;
    v170 = v30;
    v30 = v100;
    *(_QWORD *)(v103 + 32) = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v166), _mm_cvtsi32_si128(v176)).m128i_u64[0];
    ++*((_DWORD *)v36 - 1);
  }
  v50 = (_QWORD *)a1[5];
  if ( v50 )
  {
    v51 = *((_DWORD *)v50 - 1);
    v184 = v51;
    if ( v30 < v51 )
      goto LABEL_41;
    v52 = v30 + 1;
    if ( v51 >= v52 )
    {
      *((_DWORD *)v50 - 1) = v52;
      goto LABEL_41;
    }
LABEL_38:
    while ( 1 )
    {
      v57 = *((_DWORD *)v50 - 2);
      if ( v57 >= v52 )
        break;
      v53 = (3 * v57 + 1) >> 1;
      v54 = 8 * v53 + 8;
      v55 = v53;
      if ( 8 * v57 + 8 >= (unsigned int)v54 || v57 >= v53 )
      {
        v6 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v194, "Overflow encountered when expanding vector");
        *v6 = (char *)off_1C63128;
        sub_2333C0(v6 + 1, v194);
        sub_233E40((__int64)v194);
        __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v56 = (unsigned int *)sub_186B300(v50 - 1, v54);
      v50 = v56 + 2;
      *v56 = v55;
      a1[5] = v56 + 2;
    }
    *((_DWORD *)v50 - 1) = v52;
    v58 = 8LL * v184;
    v59 = &v50[(unsigned __int64)v58 / 8];
    v60 = 8LL * v52;
    if ( v58 != v60 )
      memset(v59, 0, v60 - v58);
  }
  else
  {
    v52 = v30 + 1;
    if ( v52 )
    {
      v127 = (_QWORD *)sub_186B270(0x18u);
      v50 = v127 + 1;
      *v127 = 2;
      a1[5] = v127 + 1;
      v184 = 0;
      goto LABEL_38;
    }
  }
LABEL_41:
  v61 = (_QWORD *)a1[6];
  if ( !v61 )
  {
    v67 = v177 + 1;
    if ( v177 == -1 )
    {
      v76 = (_QWORD *)a1[7];
      if ( !v76 )
        goto LABEL_43;
      goto LABEL_113;
    }
    v110 = (_QWORD *)sub_186B270(0x18u);
    v61 = v110 + 1;
    *v110 = 2;
    a1[6] = v110 + 1;
    v185 = 0;
    goto LABEL_56;
  }
  v62 = *((_DWORD *)v61 - 1);
  v185 = v62;
  if ( v177 < v62 )
    goto LABEL_43;
  v67 = v177 + 1;
  if ( v62 < v177 + 1 )
  {
LABEL_56:
    while ( 1 )
    {
      v72 = *((_DWORD *)v61 - 2);
      if ( v72 >= v67 )
        break;
      v68 = (3 * v72 + 1) >> 1;
      v69 = 8 * v68 + 8;
      v70 = v68;
      if ( 8 * v72 + 8 >= (unsigned int)v69 || v72 >= v68 )
      {
        v10 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v194, "Overflow encountered when expanding vector");
        *v10 = (char *)off_1C63128;
        sub_2333C0(v10 + 1, v194);
        sub_233E40((__int64)v194);
        __cxa_throw(v10, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v71 = (unsigned int *)sub_186B300(v61 - 1, v69);
      v61 = v71 + 2;
      *v71 = v70;
      a1[6] = v71 + 2;
    }
    *((_DWORD *)v61 - 1) = v67;
    v73 = 8LL * v185;
    v74 = &v61[(unsigned __int64)v73 / 8];
    v75 = 8LL * v67;
    if ( v73 == v75 )
    {
      v76 = (_QWORD *)a1[7];
      if ( !v76 )
        goto LABEL_69;
    }
    else
    {
      memset(v74, 0, v75 - v73);
      v76 = (_QWORD *)a1[7];
      if ( !v76 )
        goto LABEL_69;
    }
LABEL_59:
    v31 = *((unsigned int *)v76 - 1);
    if ( (unsigned int)v31 < v67 )
      goto LABEL_64;
LABEL_113:
    *((_DWORD *)v76 - 1) = v67;
    goto LABEL_43;
  }
  v76 = (_QWORD *)a1[7];
  *((_DWORD *)v61 - 1) = v177 + 1;
  if ( v76 )
    goto LABEL_59;
  if ( v177 == -1 )
    goto LABEL_43;
LABEL_69:
  v85 = (_QWORD *)sub_186B270(0x18u);
  *v85 = 2;
  v76 = v85 + 1;
  a1[7] = v85 + 1;
LABEL_64:
  while ( 1 )
  {
    v80 = *((_DWORD *)v76 - 2);
    if ( v80 >= v67 )
      break;
    v77 = (3 * v80 + 1) >> 1;
    v78 = 8 * v77 + 8;
    if ( 8 * v80 + 8 >= (unsigned int)v78 || v80 >= v77 )
    {
      v5 = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v194, "Overflow encountered when expanding vector");
      *v5 = (char *)off_1C63128;
      sub_2333C0(v5 + 1, v194);
      sub_233E40((__int64)v194);
      __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v79 = (unsigned int *)sub_186B300(v76 - 1, v78);
    v76 = v79 + 2;
    *v79 = v77;
    a1[7] = v79 + 2;
  }
  v81 = 8 * v31;
  *((_DWORD *)v76 - 1) = v67;
  v82 = 8LL * v67;
  v83 = &v76[(unsigned __int64)v81 / 8];
  if ( v81 == v82 )
  {
LABEL_43:
    v63 = (_QWORD *)a1[4];
    if ( !v63 )
      goto LABEL_67;
    goto LABEL_44;
  }
  memset(v83, 0, v82 - v81);
  v63 = (_QWORD *)a1[4];
  if ( !v63 )
  {
LABEL_67:
    v84 = (_QWORD *)sub_186B270(0x68u);
    v63 = v84 + 1;
    *v84 = 2;
    a1[4] = v84 + 1;
    v65 = v84 + 1;
    goto LABEL_46;
  }
LABEL_44:
  v64 = *((unsigned int *)v63 - 1);
  if ( (_DWORD)v64 == *((_DWORD *)v63 - 2) )
  {
    v86 = 3 * v64 + 1;
    v87 = v86 & 0xFFFFFFFE;
    v88 = v86 >> 1;
    v89 = 16 * (v88 + v87) + 8;
    if ( 48 * (int)v64 + 8 >= (unsigned int)v89 || (unsigned int)v64 >= v88 )
    {
      v9 = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v194, "Overflow encountered when expanding vector");
      *v9 = (char *)off_1C63128;
      sub_2333C0(v9 + 1, v194);
      sub_233E40((__int64)v194);
      __cxa_throw(v9, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v90 = (unsigned int *)sub_186B300(v63 - 1, v89);
    v63 = v90 + 2;
    *v90 = v88;
    v91 = v90[1];
    a1[4] = v63;
    v65 = &v63[6 * v91];
  }
  else
  {
    v65 = &v63[6 * v64];
  }
LABEL_46:
  *(_DWORD *)v65 = 11;
  v65[2] = 0;
  *((_DWORD *)v65 + 1) = v170;
  *((_DWORD *)v65 + 10) = 0;
  *((_DWORD *)v65 + 2) = v167;
  v65[3] = v164;
  *((_DWORD *)v65 + 8) = v166;
  *((_DWORD *)v65 + 9) = v176;
  *((_DWORD *)v65 + 11) = v168;
  ++*((_DWORD *)v63 - 1);
  if ( v29 )
    sub_186B220(v29);
  if ( v25 )
    sub_186B220(v25);
  sub_186B220(v163 - 1);
  return sub_186B220(v165 - 2);
}

