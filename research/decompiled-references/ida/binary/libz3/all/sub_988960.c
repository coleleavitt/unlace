__int64 __fastcall sub_988960(_QWORD *a1, __int64 a2, int a3)
{
  char **v3; // rbp
  char **v4; // rbp
  char **exception; // rbp
  __int64 v6; // r14
  unsigned int *v9; // rdx
  unsigned int *v10; // rsi
  __int64 v11; // rcx
  unsigned int v12; // eax
  unsigned int v13; // r12d
  __int64 v14; // rsi
  int v15; // edi
  __int64 v16; // rdi
  int *v17; // rdx
  int v18; // eax
  __int64 v19; // rax
  __int64 v20; // r15
  __int64 *v21; // rcx
  int v22; // edx
  int v23; // r13d
  __int64 *v24; // r8
  __int64 v25; // rdx
  __int64 *v26; // r9
  __int64 *m; // rax
  _QWORD *v28; // rax
  unsigned int v29; // edx
  __int64 v30; // rcx
  int v31; // edx
  __int64 *v32; // rcx
  __int64 v33; // rdi
  _QWORD *v34; // rax
  unsigned int v35; // edx
  __int64 v36; // rcx
  int v37; // edx
  __int64 *v38; // rcx
  __int64 v39; // rdx
  unsigned int v40; // eax
  __m128 *v41; // rax
  int v42; // r10d
  __int64 v43; // rcx
  __m128 *v44; // rsi
  __m128 v45; // xmm0
  __int64 v46; // rdx
  __m128 *v47; // r8
  __m128 *v48; // rdx
  __m128 *v49; // rdi
  unsigned __int64 v50; // rcx
  __int64 v51; // rsi
  __int64 v52; // rax
  const __m128i *v53; // rdx
  __int64 v54; // r8
  __int64 v55; // rax
  unsigned int v56; // ecx
  const __m128i *v57; // rsi
  __int64 v58; // rcx
  const __m128i *v59; // rdi
  const __m128i *v60; // rax
  __int32 v61; // ecx
  __m128i v62; // xmm0
  void *v63; // r12
  int *v64; // r8
  int *v65; // r13
  int *v66; // r15
  __int64 v67; // rbx
  int v68; // eax
  int v69; // edx
  int v70; // ebp
  _QWORD *v71; // rcx
  bool v72; // zf
  int v73; // ecx
  _QWORD *v74; // rsi
  __int64 v75; // rdx
  __int64 v76; // rbp
  char *v77; // rax
  _QWORD *v78; // rdi
  unsigned __int64 v79; // rax
  __int64 v80; // rsi
  __int64 v81; // rdx
  __int64 v82; // rax
  __int64 v83; // rsi
  __int64 v84; // rdi
  _QWORD *v85; // rbx
  _QWORD *v86; // rbp
  __int64 v87; // rsi
  __int64 v88; // rdi
  char *v89; // rbx
  char *v90; // rbp
  __int64 v91; // rsi
  void *v92; // rdi
  __int64 result; // rax
  _QWORD *v94; // rdx
  __int64 v95; // rax
  _DWORD *v96; // rax
  unsigned __int64 v97; // rax
  __int64 v98; // r10
  __int32 v99; // eax
  __int64 v100; // r13
  _BYTE *v101; // r15
  int v102; // ecx
  int v103; // eax
  int v104; // r8d
  int v105; // edx
  int v106; // eax
  __int64 *v107; // rcx
  int v108; // r8d
  __int64 v109; // rax
  unsigned int v110; // edx
  __int64 *v111; // r9
  __int64 v112; // rdx
  __int64 *v113; // r10
  __int64 *i; // rax
  __int64 v115; // rdx
  __int64 v116; // rax
  __int64 j; // rdx
  __int64 v118; // rax
  char v119; // al
  int v120; // r8d
  __int64 v121; // r9
  int v122; // ecx
  unsigned int v123; // r15d
  unsigned int v124; // ecx
  unsigned int v125; // r15d
  unsigned int v126; // ecx
  unsigned int *v127; // rax
  __int64 v128; // rax
  __int64 v129; // rax
  unsigned int v130; // r13d
  _DWORD *v131; // rdx
  int v132; // ecx
  _DWORD *v133; // r8
  __int64 v134; // rcx
  _DWORD *v135; // r9
  _DWORD *k; // rax
  int v137; // ecx
  __int64 v138; // rax
  int v139; // eax
  __int64 v140; // rax
  unsigned __int64 v141; // rdx
  _QWORD *v142; // rax
  __int64 v143; // r15
  __m128 *v144; // rdx
  __m128 *v145; // r9
  __m128i *v146; // rdi
  __int64 v147; // rdx
  __m128i *v148; // r8
  __int64 v149; // rsi
  __int64 v150; // r14
  unsigned int v151; // r9d
  int v152; // ecx
  const __m128i *v153; // r12
  int v154; // r13d
  const __m128i *v155; // r15
  __int64 v156; // r10
  __int64 v157; // rdx
  __m128 *v158; // rsi
  __m128i *v159; // rdx
  __int64 v160; // rdi
  int v161; // edi
  unsigned int v162; // ecx
  size_t v163; // rsi
  _DWORD *v164; // rdx
  __int64 v165; // rcx
  unsigned int v166; // ecx
  size_t v167; // rsi
  _DWORD *v168; // rdx
  __int64 v169; // rcx
  _QWORD *v170; // rax
  _QWORD *v171; // rax
  __int64 v172; // [rsp+0h] [rbp-128h] BYREF
  int v173[2]; // [rsp+8h] [rbp-120h]
  __int64 v174; // [rsp+10h] [rbp-118h]
  __int64 v175; // [rsp+18h] [rbp-110h]
  __m128 *v176; // [rsp+20h] [rbp-108h]
  int v177; // [rsp+28h] [rbp-100h]
  unsigned int v178; // [rsp+2Ch] [rbp-FCh]
  __int64 v179; // [rsp+30h] [rbp-F8h]
  __int64 v180; // [rsp+38h] [rbp-F0h]
  int v181; // [rsp+40h] [rbp-E8h]
  int v182; // [rsp+48h] [rbp-E0h]
  void *v183[2]; // [rsp+50h] [rbp-D8h] BYREF
  __int64 v184; // [rsp+60h] [rbp-C8h]
  void *v185; // [rsp+68h] [rbp-C0h] BYREF
  int v186; // [rsp+70h] [rbp-B8h]
  int v187; // [rsp+78h] [rbp-B0h]
  int v188; // [rsp+80h] [rbp-A8h]
  int v189; // [rsp+88h] [rbp-A0h]
  int v190; // [rsp+90h] [rbp-98h]
  int v191; // [rsp+98h] [rbp-90h]
  int v192; // [rsp+A0h] [rbp-88h]
  int v193; // [rsp+A8h] [rbp-80h]
  int v194; // [rsp+B0h] [rbp-78h]
  int v195; // [rsp+B8h] [rbp-70h]
  int v196; // [rsp+C0h] [rbp-68h]
  int v197; // [rsp+C8h] [rbp-60h]
  int v198; // [rsp+D0h] [rbp-58h]
  int v199; // [rsp+D8h] [rbp-50h]
  int v200; // [rsp+E0h] [rbp-48h]
  int v201; // [rsp+E8h] [rbp-40h]
  int v202; // [rsp+F0h] [rbp-38h]
  void *v203; // [rsp+F8h] [rbp-30h]

  v6 = (__int64)a1;
  sub_982B00((__int64)a1);
  v9 = (unsigned int *)a1[7];
  if ( v9 )
  {
    v10 = &v9[*(v9 - 1)];
    if ( v9 != v10 )
    {
      v11 = *(_QWORD *)(a1[3] + 8872LL);
      do
      {
        v12 = *v9++;
        *(_BYTE *)(v11 + 16LL * (v12 >> 1) + 11) |= 1u;
      }
      while ( v9 != v10 );
    }
  }
  if ( a3 == -2 )
  {
    v13 = dword_1C7EC90;
    sub_983840((__int64)a1, dword_1C7EC90, a2);
    v14 = a1[24];
    if ( !v14 )
      goto LABEL_48;
    while ( 1 )
    {
LABEL_7:
      v15 = *(_DWORD *)(v14 - 4);
      if ( !v15 )
        goto LABEL_39;
      v16 = (unsigned int)(v15 - 1);
      v17 = (int *)(v14 + 24 * v16);
      v18 = *v17;
      if ( *v17 == 1 )
      {
        v100 = *((_QWORD *)v17 + 1);
        v101 = *((_BYTE **)v17 + 2);
        v102 = *(_DWORD *)(*(_QWORD *)v100 + 12LL);
        v103 = (*(_DWORD *)(*(_QWORD *)v101 + 12LL) - v102) ^ (v102 << 8);
        v104 = (v102 - v103) << 10;
        v105 = v103 ^ ((v102 - v103) << 16);
        v106 = v103 - v102;
        v107 = *(__int64 **)(v6 + 224);
        v108 = (v105 + v106) ^ v104;
        v109 = *(unsigned int *)(v6 + 232);
        v110 = v109 - 1;
        v109 *= 32;
        v111 = (__int64 *)((char *)v107 + v109);
        v112 = 32LL * (v108 & v110);
        v113 = &v107[(unsigned __int64)v112 / 8];
        if ( v112 != v109 )
        {
          for ( i = &v107[(unsigned __int64)v112 / 8]; v111 != i; i += 4 )
          {
            v115 = *i;
            if ( (unsigned __int64)*i > 1 )
            {
              if ( *((_DWORD *)i + 6) == v108 && v100 == v115 && v101 == (_BYTE *)i[1] )
              {
LABEL_145:
                *(_DWORD *)(v14 - 4) = v16;
                goto LABEL_38;
              }
            }
            else if ( !v115 )
            {
              goto LABEL_135;
            }
          }
        }
        for ( ; v113 != v107; v107 += 4 )
        {
          v140 = *v107;
          if ( (unsigned __int64)*v107 > 1 )
          {
            if ( *((_DWORD *)v107 + 6) == v108 && v100 == v140 && v101 == (_BYTE *)v107[1] )
              goto LABEL_145;
          }
          else if ( !v140 )
          {
            break;
          }
        }
LABEL_135:
        v116 = v100;
        do
        {
          *(_BYTE *)(v116 + 44) |= 2u;
          v116 = *(_QWORD *)(v116 + 80);
        }
        while ( v116 );
        for ( j = (__int64)v101; (*(_BYTE *)(j + 44) & 2) == 0; j = *(_QWORD *)(j + 80) )
          ;
        v118 = v100;
        do
        {
          *(_BYTE *)(v118 + 44) &= ~2u;
          v118 = *(_QWORD *)(v118 + 80);
        }
        while ( v118 );
        *(_QWORD *)v173 = j;
        LOBYTE(v172) = sub_983990(v6, v100, j);
        v119 = sub_983990(v6, (__int64)v101, *(__int64 *)v173);
        v122 = (unsigned __int8)v172;
        if ( (_BYTE)v172 && v119 )
        {
          --*(_DWORD *)(*(_QWORD *)(v6 + 192) - 4LL);
          sub_987A00(v6, v100, v101, v122, v120, v121);
          v14 = *(_QWORD *)(v6 + 192);
          goto LABEL_38;
        }
LABEL_37:
        v14 = *(_QWORD *)(v6 + 192);
        goto LABEL_38;
      }
      if ( v18 == 2 )
      {
        v129 = *(unsigned int *)(v6 + 256);
        v130 = v17[2];
        v131 = *(_DWORD **)(v6 + 248);
        v132 = v129 - 1;
        v129 *= 24;
        v133 = (_DWORD *)((char *)v131 + v129);
        v134 = 24LL * (v130 & v132);
        v135 = &v131[(unsigned __int64)v134 / 4];
        if ( v134 != v129 )
        {
          for ( k = &v131[(unsigned __int64)v134 / 4]; v133 != k; k += 6 )
          {
            v137 = k[1];
            if ( v137 == 2 )
            {
              if ( v130 == *k && v130 == k[2] )
                goto LABEL_145;
            }
            else if ( !v137 )
            {
              goto LABEL_191;
            }
          }
        }
        for ( ; v135 != v131; v131 += 6 )
        {
          v139 = v131[1];
          if ( v139 == 2 )
          {
            if ( v130 == *v131 && v130 == v131[2] )
              goto LABEL_145;
          }
          else if ( !v139 )
          {
            break;
          }
        }
LABEL_191:
        v143 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 24) + 8872LL) + 16LL * (v130 >> 1));
        if ( (unsigned __int8)sub_983840(v6, v130, v143) )
        {
          --*(_DWORD *)(*(_QWORD *)(v6 + 192) - 4LL);
          sub_986BE0(v6, v130, v143);
          v14 = *(_QWORD *)(v6 + 192);
          goto LABEL_38;
        }
        goto LABEL_37;
      }
      if ( v18 )
      {
        v51 = 1324;
        goto LABEL_36;
      }
      v19 = *(unsigned int *)(v6 + 208);
      v20 = *((_QWORD *)v17 + 1);
      v21 = *(__int64 **)(v6 + 200);
      v22 = v19 - 1;
      v19 *= 16;
      v23 = v20;
      v24 = (__int64 *)((char *)v21 + v19);
      v25 = 16LL * ((unsigned int)v20 & v22);
      v26 = (__int64 *)((char *)v21 + v25);
      if ( v25 != v19 )
      {
        for ( m = (__int64 *)((char *)v21 + v25); v24 != m; m += 2 )
        {
          v25 = *m;
          if ( (unsigned __int64)*m > 1 )
          {
            if ( (_DWORD)v20 == (_DWORD)v25 && v20 == v25 )
              goto LABEL_145;
          }
          else if ( !v25 )
          {
            goto LABEL_18;
          }
        }
      }
      for ( ; v26 != v21; v21 += 2 )
      {
        v138 = *v21;
        if ( (unsigned __int64)*v21 > 1 )
        {
          if ( (_DWORD)v20 == (_DWORD)v138 && v20 == v138 )
            goto LABEL_145;
        }
        else if ( !v138 )
        {
          break;
        }
      }
LABEL_18:
      v172 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64 *, __int64 *, __int64 *))(*(_QWORD *)v20 + 48LL))(
               v20,
               v6,
               v25,
               v21,
               v24,
               v26);
      if ( !v172 )
        goto LABEL_37;
      --*(_DWORD *)(*(_QWORD *)(v6 + 192) - 4LL);
      ++*(_DWORD *)(v172 + 8);
      v28 = *(_QWORD **)(v6 + 280);
      if ( v28 )
      {
        v29 = *((_DWORD *)v28 - 1);
        if ( v29 == *((_DWORD *)v28 - 2) )
        {
          v162 = (3 * v29 + 1) >> 1;
          v163 = 8 * v162 + 8;
          if ( 8 * v29 + 8 >= (unsigned int)v163 || v29 >= v162 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0((__int64 *)v183, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v183);
            sub_233E40((__int64)v183);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v173[0] = (3 * v29 + 1) >> 1;
          v164 = (_DWORD *)sub_186B300(v28 - 1, v163);
          v28 = v164 + 2;
          *v164 = v173[0];
          v165 = (unsigned int)v164[1];
          *(_QWORD *)(v6 + 280) = v164 + 2;
          LODWORD(v164) = v165;
          v32 = &v28[v165];
          v31 = (_DWORD)v164 + 1;
        }
        else
        {
          v30 = v29;
          v31 = v29 + 1;
          v32 = &v28[v30];
        }
      }
      else
      {
        v170 = (_QWORD *)sub_186B270(0x18u);
        v31 = 1;
        *v170 = 2;
        v28 = v170 + 1;
        *(_QWORD *)(v6 + 280) = v28;
        v32 = v28;
      }
      v33 = v172;
      *v32 = v172;
      *((_DWORD *)v28 - 1) = v31;
      v34 = *(_QWORD **)(v6 + 296);
      ++*(_DWORD *)(v33 + 8);
      if ( v34 )
      {
        v35 = *((_DWORD *)v34 - 1);
        if ( v35 == *((_DWORD *)v34 - 2) )
        {
          v166 = (3 * v35 + 1) >> 1;
          v167 = 8 * v166 + 8;
          if ( 8 * v35 + 8 >= (unsigned int)v167 || v35 >= v166 )
          {
            v4 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0((__int64 *)v183, "Overflow encountered when expanding vector");
            *v4 = (char *)off_1C63128;
            sub_2333C0(v4 + 1, v183);
            sub_233E40((__int64)v183);
            __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v173[0] = (3 * v35 + 1) >> 1;
          v168 = (_DWORD *)sub_186B300(v34 - 1, v167);
          v34 = v168 + 2;
          *v168 = v173[0];
          v169 = (unsigned int)v168[1];
          *(_QWORD *)(v6 + 296) = v168 + 2;
          LODWORD(v168) = v169;
          v38 = &v34[v169];
          v37 = (_DWORD)v168 + 1;
        }
        else
        {
          v36 = v35;
          v37 = v35 + 1;
          v38 = &v34[v36];
        }
      }
      else
      {
        v171 = (_QWORD *)sub_186B270(0x18u);
        v37 = 1;
        *v171 = 2;
        v34 = v171 + 1;
        *(_QWORD *)(v6 + 296) = v34;
        v38 = v34;
      }
      *v38 = v172;
      *((_DWORD *)v34 - 1) = v37;
      v39 = *(unsigned int *)(v6 + 208);
      v40 = 4 * (*(_DWORD *)(v6 + 212) + *(_DWORD *)(v6 + 216));
      v173[0] = 2 * v39;
      if ( 3 * (int)v39 < v40 )
      {
        v174 = 16LL * (unsigned int)v173[0];
        v41 = (__m128 *)sub_186B270(v174);
        v43 = v174;
        v144 = v41;
        v145 = (__m128 *)((char *)v41 + v174);
        if ( v173[0] )
        {
          if ( (v174 & 0x10) == 0 || (v144 = v41 + 1, *v41 = 0, &v41[1] != v145) )
          {
            do
            {
              *v144 = 0;
              v144 += 2;
              v144[-1] = 0;
            }
            while ( v144 != v145 );
          }
        }
        v146 = *(__m128i **)(v6 + 200);
        v147 = *(unsigned int *)(v6 + 208);
        v42 = v173[0] - 1;
        v44 = v145;
        if ( v146 != &v146[v147] )
        {
          v148 = (__m128i *)v145;
          v149 = v6;
          v174 = v20;
          v150 = v43;
          v151 = v13;
          v152 = v20;
          v153 = &v146[v147];
          v154 = v173[0] - 1;
          v155 = v146;
          v156 = v149;
          do
          {
            if ( v155->m128i_i64[0] > 1uLL )
            {
              v157 = 16LL * (v154 & (unsigned int)v155->m128i_i64[0]);
              v158 = &v41[(unsigned __int64)v157 / 0x10];
              if ( v150 == v157 )
              {
LABEL_210:
                if ( v41 == v158 )
                {
LABEL_225:
                  v180 = a2;
                  v179 = v156;
                  v178 = v151;
                  v176 = (__m128 *)v148;
                  LODWORD(v175) = v152;
                  v177 = a3;
                  sub_1872CE0("");
                  sub_1873130(114, 213);
                }
                v159 = (__m128i *)v41;
                while ( v159->m128i_i64[0] )
                {
                  if ( v158 == (__m128 *)++v159 )
                    goto LABEL_225;
                }
              }
              else
              {
                v159 = (__m128i *)&v41[(unsigned __int64)v157 / 0x10];
                while ( v159->m128i_i64[0] )
                {
                  if ( v148 == ++v159 )
                    goto LABEL_210;
                }
              }
              *v159 = _mm_loadu_si128(v155);
            }
            ++v155;
          }
          while ( v153 != v155 );
          v160 = v156;
          v20 = v174;
          v42 = v154;
          v23 = v152;
          v43 = v150;
          v6 = v160;
          v146 = *(__m128i **)(v160 + 200);
          v44 = (__m128 *)v148;
          v13 = v151;
        }
        if ( v146 )
        {
          v176 = v44;
          v175 = v43;
          v177 = v42;
          v174 = (__int64)v41;
          sub_186B220(v146);
          v44 = v176;
          v43 = v175;
          v42 = v177;
          v41 = (__m128 *)v174;
        }
        v161 = v173[0];
        *(_QWORD *)(v6 + 200) = v41;
        *(_DWORD *)(v6 + 216) = 0;
        *(_DWORD *)(v6 + 208) = v161;
      }
      else
      {
        v41 = *(__m128 **)(v6 + 200);
        v42 = v39 - 1;
        v43 = 16 * v39;
        v44 = &v41[v39];
      }
      v45 = _mm_loadh_ps((const double *)&v172);
      v46 = 16LL * ((unsigned int)v20 & v42);
      v47 = &v41[(unsigned __int64)v46 / 0x10];
      if ( v46 != v43 )
      {
        v48 = &v41[(unsigned __int64)v46 / 0x10];
        v49 = nullptr;
        while ( 1 )
        {
          v50 = v48->m128_u64[0];
          if ( v48->m128_u64[0] > 1 )
          {
            if ( v23 == (_DWORD)v50 && v20 == v50 )
            {
              *v48 = v45;
              v14 = *(_QWORD *)(v6 + 192);
              goto LABEL_38;
            }
          }
          else
          {
            if ( !v50 )
            {
              if ( v49 )
                --*(_DWORD *)(v6 + 216);
              else
                v49 = v48;
              *v49 = v45;
              v14 = *(_QWORD *)(v6 + 192);
              ++*(_DWORD *)(v6 + 212);
              goto LABEL_38;
            }
            v49 = v48;
          }
          if ( ++v48 == v44 )
            goto LABEL_186;
        }
      }
      v49 = nullptr;
      while ( 1 )
      {
LABEL_186:
        if ( v47 == v41 )
        {
          v51 = 405;
LABEL_36:
          sub_1872CE0("");
          sub_1873130(114, v51);
        }
        v141 = v41->m128_u64[0];
        if ( v41->m128_u64[0] <= 1 )
          break;
        if ( v23 == (_DWORD)v141 && v20 == v141 )
        {
          *v41 = v45;
          v14 = *(_QWORD *)(v6 + 192);
          goto LABEL_38;
        }
LABEL_185:
        ++v41;
      }
      if ( v141 )
        break;
      if ( v49 )
      {
        --*(_DWORD *)(v6 + 216);
        v41 = v49;
      }
      *v41 = v45;
      v14 = *(_QWORD *)(v6 + 192);
      ++*(_DWORD *)(v6 + 212);
LABEL_38:
      if ( !v14 )
      {
LABEL_39:
        if ( a3 != -2 )
          goto LABEL_40;
LABEL_48:
        *(_QWORD *)v173 = sub_9864A0((_QWORD *)v6, dword_1C7EC90, a2);
        goto LABEL_49;
      }
    }
    v49 = v41;
    goto LABEL_185;
  }
  v94 = (_QWORD *)a1[24];
  v13 = a3 ^ 1;
  if ( v94 )
  {
    v95 = *((unsigned int *)v94 - 1);
    if ( (_DWORD)v95 == *((_DWORD *)v94 - 2) )
    {
      v123 = 3 * v95 + 1;
      v124 = v123 & 0xFFFFFFFE;
      v125 = v123 >> 1;
      v126 = 8 * (v125 + v124) + 8;
      if ( 24 * (int)v95 + 8 >= v126 || (unsigned int)v95 >= v125 )
      {
        v3 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0((__int64 *)v183, "Overflow encountered when expanding vector");
        *v3 = (char *)off_1C63128;
        sub_2333C0(v3 + 1, v183);
        sub_233E40((__int64)v183);
        __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v127 = (unsigned int *)sub_186B300(v94 - 1, v126);
      v94 = v127 + 2;
      *v127 = v125;
      v128 = v127[1];
      a1[24] = v94;
      v96 = &v94[3 * v128];
    }
    else
    {
      v96 = &v94[3 * v95];
    }
  }
  else
  {
    v142 = (_QWORD *)sub_186B270(0x38u);
    *v142 = 2;
    v94 = v142 + 1;
    a1[24] = v142 + 1;
    v96 = v142 + 1;
  }
  *v96 = 2;
  v96[2] = a3;
  ++*((_DWORD *)v94 - 1);
  sub_983840((__int64)a1, a3 ^ 1, a2);
  v14 = a1[24];
  if ( v14 )
    goto LABEL_7;
LABEL_40:
  v52 = sub_9864A0((_QWORD *)v6, v13, a2);
  v53 = *(const __m128i **)(v6 + 248);
  v54 = v52;
  v55 = *(unsigned int *)(v6 + 256);
  v56 = v55 - 1;
  v55 *= 24;
  v57 = (const __m128i *)((char *)v53 + v55);
  v58 = 24LL * (a3 & v56);
  v59 = (const __m128i *)((char *)v53 + v58);
  if ( v58 == v55 )
  {
LABEL_119:
    while ( v59 != v53 )
    {
      v99 = v53->m128i_i32[1];
      if ( v99 == 2 )
      {
        if ( a3 == v53->m128i_i32[0] && a3 == v53->m128i_i32[2] )
        {
          v60 = v53;
          goto LABEL_47;
        }
      }
      else if ( !v99 )
      {
        break;
      }
      v53 = (const __m128i *)((char *)v53 + 24);
    }
LABEL_238:
    BUG();
  }
  v60 = (const __m128i *)((char *)v53 + v58);
  while ( 1 )
  {
    v61 = v60->m128i_i32[1];
    if ( v61 != 2 )
    {
      if ( !v61 )
        goto LABEL_238;
      goto LABEL_43;
    }
    if ( a3 == v60->m128i_i32[0] && a3 == v60->m128i_i32[2] )
      break;
LABEL_43:
    v60 = (const __m128i *)((char *)v60 + 24);
    if ( v57 == v60 )
      goto LABEL_119;
  }
LABEL_47:
  v62 = _mm_unpacklo_epi64(_mm_loadl_epi64(v60 + 1), (__m128i)(unsigned __int64)v54);
  *(_QWORD *)v173 = sub_15DF030(
                      *(_QWORD *)(v6 + 8),
                      v172,
                      *(__int64 *)v173,
                      v174,
                      v175,
                      (int)v176,
                      v177,
                      v179,
                      v180,
                      v181,
                      v182,
                      v62.m128i_i32[0],
                      v62.m128i_i32[2],
                      v184,
                      v185,
                      v186,
                      v187,
                      v188,
                      v189,
                      v190,
                      v191,
                      v192,
                      v193,
                      v194,
                      v195,
                      v196,
                      v197,
                      v198,
                      v199,
                      v200,
                      v201,
                      v202,
                      v203);
LABEL_49:
  v63 = *(void **)(v6 + 8);
  v64 = *(int **)(v6 + 56);
  v172 = (__int64)&v185;
  v183[1] = &v185;
  v183[0] = v63;
  v184 = 0x1000000000LL;
  if ( !v64 )
    goto LABEL_109;
  v65 = &v64[*(v64 - 1)];
  if ( v65 == v64 )
    goto LABEL_109;
  v66 = v64;
  while ( 2 )
  {
    v73 = *v66;
    v74 = *(_QWORD **)(v6 + 24);
    v75 = (unsigned int)*v66 >> 1;
    *(_BYTE *)(v74[1109] + 16 * v75 + 11) &= ~1u;
    if ( v73 == dword_1C7EC94 )
    {
      v67 = *(_QWORD *)(v74[13] + 856LL);
      if ( !v67 )
        goto LABEL_64;
LABEL_56:
      v68 = *(_DWORD *)(v67 + 8) + 1;
      *(_DWORD *)(v67 + 8) = v68;
      *(_DWORD *)(v67 + 8) = v68 + 1;
      v69 = v184;
      v70 = HIDWORD(v184);
      if ( (unsigned int)v184 < HIDWORD(v184) )
        goto LABEL_57;
LABEL_66:
      v76 = (unsigned int)(2 * v70);
      v77 = (char *)sub_186B270(8 * v76);
      v69 = v184;
      v78 = v183[1];
      v71 = v77;
      if ( (_DWORD)v184 )
      {
        if ( (unsigned int)(v184 - 1) <= 2 || v77 == (char *)v183[1] + 8 )
        {
          v97 = 0;
          v98 = 8LL * (unsigned int)v184;
          do
          {
            v71[v97 / 8] = v78[v97 / 8];
            v97 += 8LL;
          }
          while ( v97 != v98 );
        }
        else
        {
          v79 = 0;
          v80 = 16LL * ((unsigned int)v184 >> 1);
          do
          {
            *(__m128i *)&v71[v79 / 8] = _mm_loadu_si128((const __m128i *)&v78[v79 / 8]);
            v79 += 16LL;
          }
          while ( v79 != v80 );
          if ( (v69 & 1) != 0 )
            v71[v69 & 0xFFFFFFFE] = v78[v69 & 0xFFFFFFFE];
        }
      }
      if ( v78 != (_QWORD *)v172 && v78 )
      {
        v174 = (__int64)v71;
        sub_186B220(v78);
        v69 = v184;
        v71 = (_QWORD *)v174;
      }
      v183[1] = v71;
      HIDWORD(v184) = v76;
    }
    else
    {
      if ( v73 == dword_1C7EC90 )
      {
        v67 = *(_QWORD *)(v74[13] + 864LL);
        if ( v67 )
          goto LABEL_56;
        v67 = 0;
      }
      else
      {
        v67 = *(_QWORD *)(v74[1105] + 8 * v75);
        if ( (v73 & 1) != 0 )
          v67 = sub_15E1A70(v74[13]);
        if ( v67 )
          goto LABEL_56;
LABEL_64:
        v67 = 0;
      }
      v69 = v184;
      v70 = HIDWORD(v184);
      if ( (unsigned int)v184 >= HIDWORD(v184) )
        goto LABEL_66;
LABEL_57:
      v71 = v183[1];
    }
    v71[v69] = v67;
    LODWORD(v184) = v69 + 1;
    if ( !v67 || (v72 = *(_DWORD *)(v67 + 8) == 1, --*(_DWORD *)(v67 + 8), !v72) )
    {
      if ( v65 == ++v66 )
        break;
      goto LABEL_61;
    }
    ++v66;
    sub_15D7BC0(v63, v67);
    if ( v65 != v66 )
    {
LABEL_61:
      v63 = *(void **)(v6 + 8);
      continue;
    }
    break;
  }
  if ( (_DWORD)v184 )
  {
    v81 = (_DWORD)v184 == 1 ? *(_QWORD *)v183[1] : sub_15E1AF0(*(_QWORD *)(v6 + 8));
    if ( v81 )
    {
      v82 = sub_15DFBF0(*(_QWORD *)(v6 + 8), *(_QWORD *)v173, v81);
      *(_QWORD *)v173 = v82;
      if ( v82 )
        goto LABEL_83;
      goto LABEL_84;
    }
  }
LABEL_109:
  v82 = *(_QWORD *)v173;
  if ( *(_QWORD *)v173 )
LABEL_83:
    ++*(_DWORD *)(v82 + 8);
LABEL_84:
  v83 = *(_QWORD *)(v6 + 304);
  if ( v83 )
  {
    v84 = *(_QWORD *)(v6 + 312);
    v72 = (*(_DWORD *)(v83 + 8))-- == 1;
    if ( v72 )
      sub_15D7BC0(v84, v83);
  }
  v85 = *(_QWORD **)(v6 + 280);
  *(_QWORD *)(v6 + 304) = *(_QWORD *)v173;
  if ( v85 )
  {
    v86 = &v85[*((unsigned int *)v85 - 1)];
    if ( v85 >= v86 )
      goto LABEL_95;
    do
    {
      while ( 1 )
      {
        v87 = *v85;
        if ( *v85 )
        {
          v88 = *(_QWORD *)(v6 + 272);
          v72 = (*(_DWORD *)(v87 + 8))-- == 1;
          if ( v72 )
            break;
        }
        if ( ++v85 >= v86 )
          goto LABEL_94;
      }
      sub_15D7BC0(v88, v87);
      ++v85;
    }
    while ( v85 < v86 );
LABEL_94:
    v85 = *(_QWORD **)(v6 + 280);
    if ( v85 )
LABEL_95:
      *((_DWORD *)v85 - 1) = 0;
  }
  sub_982B00(v6);
  v89 = (char *)v183[1];
  v90 = (char *)v183[1] + 8 * (unsigned int)v184;
  if ( v183[1] < v90 )
  {
    do
    {
      while ( 1 )
      {
        v91 = *(_QWORD *)v89;
        if ( *(_QWORD *)v89 )
        {
          v92 = v183[0];
          v72 = (*(_DWORD *)(v91 + 8))-- == 1;
          if ( v72 )
            break;
        }
        v89 += 8;
        if ( v89 >= v90 )
          goto LABEL_102;
      }
      sub_15D7BC0(v92, v91);
      v89 += 8;
    }
    while ( v89 < v90 );
LABEL_102:
    v89 = (char *)v183[1];
  }
  result = v172;
  if ( v89 != (char *)v172 )
  {
    if ( v89 )
      return sub_186B220(v89);
  }
  return result;
}

