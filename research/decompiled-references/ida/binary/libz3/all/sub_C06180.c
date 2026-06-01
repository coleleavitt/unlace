__int64 __fastcall sub_C06180(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  char **exception; // r12
  _QWORD *v5; // rbx
  _QWORD *v7; // rbp
  __int64 v8; // rsi
  __int64 v9; // rdi
  unsigned int v11; // r12d
  __m128i *v12; // rax
  __int64 v13; // r9
  __m128i *v14; // rbp
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // r13
  _DWORD *v18; // rdx
  int v19; // esi
  __int64 *v20; // rcx
  __int64 v21; // rax
  unsigned int v22; // edx
  __int64 *v23; // rdi
  __int64 v24; // rdx
  __int64 *v25; // r8
  __int64 *v26; // rax
  __int64 v27; // rdx
  __int64 v28; // r13
  __int64 v29; // r9
  __int64 v30; // rdi
  _QWORD *v31; // rax
  unsigned int v32; // edx
  __int64 v33; // rcx
  int v34; // edx
  __int64 *v35; // rcx
  unsigned int v36; // r15d
  int v37; // r8d
  __int64 v38; // rcx
  __m128i *v39; // rbx
  unsigned int v40; // esi
  __m128i v41; // xmm0
  __int64 v42; // rax
  __m128i *v43; // r10
  __m128i *v44; // rax
  __m128i *v45; // rdi
  __int64 v46; // rdx
  __int64 v47; // rdx
  unsigned int v48; // r13d
  unsigned int v49; // esi
  __m128i v50; // xmm0
  __int64 v51; // rax
  __m128i *v52; // r10
  __m128i *v53; // rax
  __m128i *v54; // rdi
  __int64 v55; // rdx
  __int64 v56; // rdx
  __int64 v57; // r14
  __int64 v58; // r10
  __int64 v59; // r13
  unsigned int v60; // esi
  __int64 v61; // rax
  __m128i *v62; // rdi
  __m128i *i; // rax
  __int64 v64; // rdx
  int v65; // edx
  _QWORD *v66; // r15
  int v67; // edx
  __int64 v68; // rsi
  _QWORD *v69; // r15
  __int64 v70; // rdx
  __int64 v71; // r13
  char *v72; // rax
  char *v73; // rdi
  unsigned __int64 v74; // rax
  __int64 v75; // r11
  char *v76; // rax
  _QWORD *v77; // rdi
  int v78; // r11d
  unsigned __int64 v79; // rax
  __int64 v80; // rsi
  int v81; // esi
  __int64 v82; // r8
  __m128i *v83; // rdi
  __m128i *k; // rax
  __int64 v85; // rdx
  __int64 v86; // r9
  int v88; // r8d
  __int64 v89; // rax
  unsigned int v90; // r10d
  __int64 *v91; // rbx
  __int64 v92; // rcx
  __int64 v93; // r14
  __int64 v94; // r10
  __int64 *v95; // rdi
  __int64 *v96; // rax
  __int64 *v97; // rcx
  __int64 v98; // rdx
  __int64 v99; // rax
  int v100; // edi
  __int64 *v101; // rcx
  __int64 v102; // rax
  unsigned int v103; // edx
  __int64 *v104; // rsi
  __int64 v105; // rdx
  __int64 *v106; // r8
  __int64 *j; // rax
  unsigned int v108; // r15d
  unsigned int v109; // edi
  __int64 v110; // rax
  __m128i *v111; // r10
  __int64 *m128i_i64; // rax
  __int64 *v113; // rsi
  __int64 v114; // rdx
  __int64 v115; // rdx
  __m128i *v116; // rax
  __m128i *v117; // r14
  const __m128i *v118; // r15
  const __m128i *v119; // r12
  __int64 v120; // rax
  __m128i *v121; // rdx
  __m128i *v122; // rax
  __m128i v123; // xmm0
  __int64 v124; // rax
  unsigned __int64 v125; // rax
  __int64 v126; // r11
  __int64 v127; // rax
  __m128i *v128; // rax
  __m128i *v129; // r10
  const __m128i *v130; // r14
  const __m128i *v131; // r12
  __int64 v132; // rax
  __m128i *v133; // rdx
  __m128i *v134; // rax
  __m128i v135; // xmm0
  __int64 v136; // rdx
  unsigned int v137; // r14d
  unsigned int v138; // ecx
  unsigned int *v139; // rdx
  __int64 *v140; // rax
  __int64 *v141; // r15
  __int64 *v142; // rax
  __int64 v143; // rdx
  __int64 *v144; // rsi
  __int64 *v145; // rdx
  __int64 v146; // rsi
  unsigned __int64 v147; // rax
  __int64 v148; // rsi
  __m128i *v149; // rax
  __m128i *v150; // r13
  const __m128i *v151; // r14
  const __m128i *v152; // r12
  __int64 v153; // rax
  __m128i *v154; // rdx
  __m128i *v155; // rax
  __m128i v156; // xmm0
  _QWORD *v157; // rax
  __int64 v158; // rax
  __int64 v159; // rax
  __int64 v160; // [rsp+0h] [rbp-588h]
  __int64 v161; // [rsp+0h] [rbp-588h]
  __int64 v162; // [rsp+0h] [rbp-588h]
  __int64 v163; // [rsp+0h] [rbp-588h]
  int v164; // [rsp+0h] [rbp-588h]
  int v165; // [rsp+0h] [rbp-588h]
  __int64 v166; // [rsp+0h] [rbp-588h]
  int v167; // [rsp+0h] [rbp-588h]
  __int64 v168; // [rsp+8h] [rbp-580h]
  int v169; // [rsp+8h] [rbp-580h]
  char v170; // [rsp+8h] [rbp-580h]
  int v171; // [rsp+8h] [rbp-580h]
  unsigned int v172; // [rsp+8h] [rbp-580h]
  __int64 v173; // [rsp+8h] [rbp-580h]
  __int64 v174; // [rsp+8h] [rbp-580h]
  __int64 v175; // [rsp+8h] [rbp-580h]
  int v176; // [rsp+8h] [rbp-580h]
  __int64 v177; // [rsp+8h] [rbp-580h]
  __int64 v178; // [rsp+8h] [rbp-580h]
  __int64 v179; // [rsp+8h] [rbp-580h]
  __int64 v180; // [rsp+10h] [rbp-578h]
  __int64 v181; // [rsp+10h] [rbp-578h]
  int v182; // [rsp+1Ch] [rbp-56Ch]
  int v183; // [rsp+20h] [rbp-568h]
  __int64 v184; // [rsp+20h] [rbp-568h]
  __int64 v185; // [rsp+20h] [rbp-568h]
  __int64 v186; // [rsp+20h] [rbp-568h]
  int v187; // [rsp+28h] [rbp-560h]
  __int64 v188; // [rsp+28h] [rbp-560h]
  __int64 v189; // [rsp+28h] [rbp-560h]
  __int64 v190; // [rsp+28h] [rbp-560h]
  __int64 v191; // [rsp+30h] [rbp-558h]
  __int64 v192; // [rsp+30h] [rbp-558h]
  __int64 v193; // [rsp+30h] [rbp-558h]
  __int64 v194; // [rsp+38h] [rbp-550h]
  __int64 v195; // [rsp+38h] [rbp-550h]
  __int64 v196; // [rsp+40h] [rbp-548h]
  __int64 v201; // [rsp+78h] [rbp-510h]
  __int64 v202[4]; // [rsp+90h] [rbp-4F8h] BYREF
  void *ptr; // [rsp+B0h] [rbp-4D8h]
  __int64 v204; // [rsp+B8h] [rbp-4D0h]
  _BYTE v205[128]; // [rsp+C0h] [rbp-4C8h] BYREF
  void *v206; // [rsp+140h] [rbp-448h]
  __int64 v207; // [rsp+148h] [rbp-440h]
  _QWORD v208[135]; // [rsp+150h] [rbp-438h] BYREF

  v5 = (_QWORD *)a2[1];
  if ( v5 )
  {
    v7 = &v5[*((unsigned int *)v5 - 1)];
    if ( v5 >= v7 )
      goto LABEL_9;
    do
    {
      while ( 1 )
      {
        v8 = *v5;
        if ( *v5 )
        {
          v9 = *a2;
          if ( (*(_DWORD *)(v8 + 8))-- == 1 )
            break;
        }
        if ( ++v5 >= v7 )
          goto LABEL_8;
      }
      sub_15D7BC0(v9, v8);
      ++v5;
    }
    while ( v5 < v7 );
LABEL_8:
    v5 = (_QWORD *)a2[1];
    if ( v5 )
LABEL_9:
      *((_DWORD *)v5 - 1) = 0;
  }
  v11 = 8;
  v12 = (__m128i *)sub_186B270(0x80u);
  v13 = a3;
  v180 = 0;
  *v12 = 0;
  v14 = v12;
  v12[1] = 0;
  v12[2] = 0;
  v12[3] = 0;
  v12[4] = 0;
  v12[5] = 0;
  v12[6] = 0;
  v12[7] = 0;
  v206 = v208;
  ptr = v205;
  v208[0] = a3;
  v204 = 0x1000000000LL;
  LODWORD(v160) = 0;
  v207 = 0x8000000001LL;
  v182 = 0;
  v201 = *(_QWORD *)(a1 + 8);
  v15 = 1;
LABEL_11:
  if ( !*(_WORD *)(v13 + 4) )
  {
    v16 = *(unsigned int *)(v13 + 24);
    if ( (_DWORD)v16 )
    {
      v170 = 1;
      v57 = v13 + 32;
      v37 = v11 - 1;
      LODWORD(v204) = 0;
      v38 = 16LL * v11;
      v58 = v13 + 32 + 8 * v16;
      v39 = (__m128i *)((char *)v14 + v38);
      do
      {
        v59 = *(_QWORD *)v57;
        v60 = *(_DWORD *)(*(_QWORD *)v57 + 12LL);
        v61 = 16LL * (v37 & v60);
        v62 = &v14[(unsigned __int64)v61 / 0x10];
        if ( v61 != v38 )
        {
          for ( i = &v14[(unsigned __int64)v61 / 0x10]; v39 != i; ++i )
          {
            v64 = i->m128i_i64[0];
            if ( i->m128i_i64[0] > 1uLL )
            {
              if ( *(_DWORD *)(v64 + 12) == v60 && v59 == v64 )
              {
LABEL_85:
                v67 = v204;
                v68 = i->m128i_i64[1];
                v69 = ptr;
                if ( (unsigned int)v204 >= HIDWORD(v204) )
                {
                  v196 = v13;
                  v71 = (unsigned int)(2 * HIDWORD(v204));
                  v194 = v58;
                  v191 = v38;
                  v187 = v37;
                  v72 = (char *)sub_186B270(8 * v71);
                  v67 = v204;
                  v73 = (char *)ptr;
                  v69 = v72;
                  v37 = v187;
                  v38 = v191;
                  v58 = v194;
                  v13 = v196;
                  if ( (_DWORD)v204 )
                  {
                    if ( (unsigned int)(v204 - 1) <= 2 || v72 == (char *)ptr + 8 )
                    {
                      v125 = 0;
                      v126 = 8LL * (unsigned int)v204;
                      do
                      {
                        v69[v125 / 8] = *(_QWORD *)&v73[v125];
                        v125 += 8LL;
                      }
                      while ( v125 != v126 );
                    }
                    else
                    {
                      v74 = 0;
                      v75 = 16LL * ((unsigned int)v204 >> 1);
                      do
                      {
                        *(__m128i *)&v69[v74 / 8] = _mm_loadu_si128((const __m128i *)&v73[v74]);
                        v74 += 16LL;
                      }
                      while ( v75 != v74 );
                      if ( (v67 & 1) != 0 )
                        v69[v67 & 0xFFFFFFFE] = *(_QWORD *)&v73[8 * (v67 & 0xFFFFFFFE)];
                    }
                  }
                  if ( v73 != v205 && v73 )
                  {
                    sub_186B220(v73);
                    v67 = v204;
                    v13 = v196;
                    v58 = v194;
                    v38 = v191;
                    v37 = v187;
                  }
                  ptr = v69;
                  HIDWORD(v204) = v71;
                }
                v69[v67] = v68;
                LODWORD(v204) = v67 + 1;
                goto LABEL_82;
              }
            }
            else if ( !v64 )
            {
              goto LABEL_79;
            }
          }
        }
        if ( v62 != v14 )
        {
          for ( i = v14; v62 != i; ++i )
          {
            v70 = i->m128i_i64[0];
            if ( i->m128i_i64[0] > 1uLL )
            {
              if ( *(_DWORD *)(v70 + 12) == v60 && v59 == v70 )
                goto LABEL_85;
            }
            else if ( !v70 )
            {
              break;
            }
          }
        }
LABEL_79:
        v65 = v207;
        if ( (unsigned int)v207 >= HIDWORD(v207) )
        {
          v195 = v13;
          v171 = 2 * HIDWORD(v207);
          v192 = v58;
          v188 = v38;
          v183 = v37;
          v76 = (char *)sub_186B270(8LL * (unsigned int)(2 * HIDWORD(v207)));
          v65 = v207;
          v77 = v206;
          v66 = v76;
          v78 = v171;
          v37 = v183;
          v38 = v188;
          v58 = v192;
          v13 = v195;
          if ( (_DWORD)v207 )
          {
            if ( (unsigned int)(v207 - 1) <= 2 || v76 == (char *)v206 + 8 )
            {
              v147 = 0;
              v148 = 8LL * (unsigned int)v207;
              do
              {
                v66[v147 / 8] = v77[v147 / 8];
                v147 += 8LL;
              }
              while ( v148 != v147 );
            }
            else
            {
              v79 = 0;
              v80 = 16LL * ((unsigned int)v207 >> 1);
              do
              {
                *(__m128i *)&v66[v79 / 8] = _mm_loadu_si128((const __m128i *)&v77[v79 / 8]);
                v79 += 16LL;
              }
              while ( v79 != v80 );
              if ( (v65 & 1) != 0 )
                v66[v65 & 0xFFFFFFFE] = v77[v65 & 0xFFFFFFFE];
            }
          }
          if ( v77 != v208 && v77 )
          {
            sub_186B220(v77);
            v65 = v207;
            v13 = v195;
            v58 = v192;
            v38 = v188;
            v37 = v183;
            v78 = v171;
          }
          v206 = v66;
          HIDWORD(v207) = v78;
        }
        else
        {
          v66 = v206;
        }
        v170 = 0;
        v66[v65] = v59;
        LODWORD(v207) = v65 + 1;
LABEL_82:
        v57 += 8;
      }
      while ( v58 != v57 );
      if ( !v170 )
        goto LABEL_120;
      v17 = *(_QWORD *)(v13 + 16);
    }
    else
    {
      v17 = *(_QWORD *)(v13 + 16);
      v18 = *(_DWORD **)(v17 + 24);
      if ( !v18 || *v18 == -1 )
      {
        v100 = *(_DWORD *)(v17 + 12);
        LODWORD(v207) = v15 - 1;
        v101 = *(__int64 **)(a1 + 24);
        v102 = *(unsigned int *)(a1 + 32);
        v103 = v102 - 1;
        v102 *= 24;
        v104 = (__int64 *)((char *)v101 + v102);
        v105 = 24LL * (v100 & v103);
        v106 = (__int64 *)((char *)v101 + v105);
        if ( v105 != v102 )
        {
          for ( j = (__int64 *)((char *)v101 + v105); v104 != j; j += 3 )
          {
            v105 = *j;
            if ( (unsigned __int64)*j > 1 )
            {
              if ( *(_DWORD *)(v105 + 12) == v100 && v17 == v105 )
              {
LABEL_221:
                v173 = j[2];
                if ( !v173 )
                  goto LABEL_168;
                goto LABEL_169;
              }
            }
            else if ( !v105 )
            {
              goto LABEL_168;
            }
          }
        }
        for ( ; v106 != v101; v101 += 3 )
        {
          v127 = *v101;
          if ( (unsigned __int64)*v101 > 1 )
          {
            if ( *(_DWORD *)(v127 + 12) == v100 && v17 == v127 )
            {
              j = v101;
              goto LABEL_221;
            }
          }
          else if ( !v127 )
          {
            break;
          }
        }
LABEL_168:
        v184 = v13;
        v173 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64 *, __int64 *))(*(_QWORD *)a1 + 40LL))(
                 a1,
                 *(_QWORD *)(v17 + 40),
                 v105,
                 v101,
                 v106);
        sub_135F9B0(a1, v17, v173);
        v13 = v184;
LABEL_169:
        v108 = 2 * v11;
        if ( 3 * v11 >= 4 * (v182 + (int)v160) )
        {
          v37 = v11 - 1;
          v38 = 16LL * v11;
          v39 = (__m128i *)((char *)v14 + v38);
          goto LABEL_171;
        }
        v186 = v13;
        v160 = 16LL * v108;
        v149 = (__m128i *)sub_186B270(v160);
        v38 = v160;
        v13 = v186;
        v150 = v149;
        v39 = (__m128i *)((char *)v149 + v160);
        if ( v108 )
        {
          if ( (v160 & 0x10) == 0 || (*v149 = 0, ++v149, v149 != v39) )
          {
            do
            {
              *v149 = 0;
              v149 += 2;
              v149[-1] = 0;
            }
            while ( v149 != v39 );
          }
          v37 = v108 - 1;
          v151 = &v14[v11];
          goto LABEL_302;
        }
        v39 = v149;
        v37 = -1;
        v159 = v11;
        v151 = &v14[v159];
        if ( &v14[v159] != v14 )
        {
LABEL_302:
          v152 = v14;
          do
          {
            while ( v152->m128i_i64[0] <= 1uLL )
            {
              if ( v151 == ++v152 )
                goto LABEL_310;
            }
            v153 = 16LL * (*(_DWORD *)(v152->m128i_i64[0] + 12) & (unsigned int)v37);
            v154 = &v150[(unsigned __int64)v153 / 0x10];
            if ( v160 == v153 )
            {
LABEL_313:
              if ( v150 == v154 )
              {
LABEL_324:
                sub_1872CE0("");
                sub_1873130(114, 213);
              }
              v155 = v150;
              while ( v155->m128i_i64[0] )
              {
                if ( v154 == ++v155 )
                  goto LABEL_324;
              }
            }
            else
            {
              v155 = &v150[(unsigned __int64)v153 / 0x10];
              while ( v155->m128i_i64[0] )
              {
                if ( ++v155 == v39 )
                  goto LABEL_313;
              }
            }
            v156 = _mm_loadu_si128(v152++);
            *v155 = v156;
          }
          while ( v151 != v152 );
        }
LABEL_310:
        if ( v14 )
        {
          v167 = v37;
          sub_186B220(v14);
          v13 = v186;
          v38 = 16LL * v108;
          v37 = v167;
        }
        LODWORD(v160) = 0;
        v11 = v108;
        v14 = v150;
LABEL_171:
        v109 = *(_DWORD *)(v13 + 12);
        v110 = 16LL * (v37 & v109);
        v111 = &v14[(unsigned __int64)v110 / 0x10];
        if ( v110 == v38 )
        {
          v113 = nullptr;
LABEL_179:
          if ( v111 != v14 )
          {
            m128i_i64 = (__int64 *)v14;
            do
            {
              while ( 1 )
              {
                v115 = *m128i_i64;
                if ( (unsigned __int64)*m128i_i64 <= 1 )
                  break;
                if ( *(_DWORD *)(v115 + 12) == v109 && v115 == v13 )
                  goto LABEL_328;
                m128i_i64 += 2;
                if ( v111 == (__m128i *)m128i_i64 )
                  goto LABEL_187;
              }
              if ( !v115 )
                goto LABEL_117;
              v113 = m128i_i64;
              m128i_i64 += 2;
            }
            while ( v111 != (__m128i *)m128i_i64 );
          }
LABEL_187:
          sub_1872CE0("");
          sub_1873130(114, 405);
        }
        m128i_i64 = v14[(unsigned __int64)v110 / 0x10].m128i_i64;
        v113 = nullptr;
        while ( 1 )
        {
          while ( 1 )
          {
            v114 = *m128i_i64;
            if ( (unsigned __int64)*m128i_i64 > 1 )
              break;
            if ( !v114 )
            {
LABEL_117:
              if ( v113 )
                LODWORD(v160) = v160 - 1;
              else
                v113 = m128i_i64;
              *v113 = v13;
              v113[1] = v173;
              ++v182;
              goto LABEL_120;
            }
            v113 = m128i_i64;
            m128i_i64 += 2;
            if ( m128i_i64 == (__int64 *)v39 )
              goto LABEL_179;
          }
          if ( *(_DWORD *)(v114 + 12) == v109 && v114 == v13 )
            break;
          m128i_i64 += 2;
          if ( m128i_i64 == (__int64 *)v39 )
            goto LABEL_179;
        }
LABEL_328:
        *m128i_i64 = v13;
        m128i_i64[1] = v173;
LABEL_120:
        v15 = v207;
        goto LABEL_121;
      }
      LODWORD(v204) = 0;
    }
    v19 = *(_DWORD *)(v17 + 12);
    v20 = *(__int64 **)(a1 + 120);
    v21 = *(unsigned int *)(a1 + 128);
    v22 = v21 - 1;
    v21 *= 8;
    v23 = (__int64 *)((char *)v20 + v21);
    v24 = 8LL * (v19 & v22);
    v25 = &v20[(unsigned __int64)v24 / 8];
    if ( v24 == v21 )
    {
LABEL_209:
      if ( v20 == v25 )
        goto LABEL_23;
      while ( 1 )
      {
        v124 = *v20;
        if ( (unsigned __int64)*v20 > 1 )
        {
          if ( *(_DWORD *)(v124 + 12) == v19 && v124 == v17 )
            goto LABEL_144;
        }
        else if ( !v124 )
        {
          goto LABEL_23;
        }
        if ( v25 == ++v20 )
          goto LABEL_23;
      }
    }
    v26 = &v20[(unsigned __int64)v24 / 8];
    while ( 1 )
    {
      v27 = *v26;
      if ( (unsigned __int64)*v26 > 1 )
      {
        if ( *(_DWORD *)(v27 + 12) == v19 && v27 == v17 )
        {
LABEL_144:
          v88 = *(_DWORD *)(a4 + 16);
          v89 = *(unsigned int *)(a4 + 8);
          v172 = 2 * v89;
          if ( 3 * (int)v89 < (unsigned int)(4 * (v88 + *(_DWORD *)(a4 + 12))) )
          {
            v189 = v13;
            v140 = (__int64 *)sub_186B270(8LL * v172);
            v92 = 8LL * v172;
            v13 = v189;
            v91 = v140;
            if ( v172 )
            {
              memset(v140, 0, 8LL * v172);
              v92 = 8LL * v172;
              v13 = v189;
            }
            v93 = (__int64)v91 + v92;
            v141 = *(__int64 **)a4;
            v90 = v172 - 1;
            v142 = (__int64 *)(*(_QWORD *)a4 + 8LL * *(unsigned int *)(a4 + 8));
            if ( *(__int64 **)a4 != v142 )
            {
              do
              {
                while ( (unsigned __int64)*v141 <= 1 )
                {
                  if ( v142 == ++v141 )
                    goto LABEL_285;
                }
                v143 = 8LL * (*(_DWORD *)(*v141 + 12) & v90);
                v144 = &v91[(unsigned __int64)v143 / 8];
                if ( v92 == v143 )
                {
LABEL_289:
                  if ( v91 == v144 )
                  {
LABEL_323:
                    sub_1872CE0("");
                    sub_1873130(114, 213);
                  }
                  v145 = v91;
                  while ( *v145 )
                  {
                    if ( v144 == ++v145 )
                      goto LABEL_323;
                  }
                }
                else
                {
                  v145 = &v91[(unsigned __int64)v143 / 8];
                  while ( *v145 )
                  {
                    if ( (__int64 *)v93 == ++v145 )
                      goto LABEL_289;
                  }
                }
                v146 = *v141++;
                *v145 = v146;
              }
              while ( v142 != v141 );
LABEL_285:
              v142 = *(__int64 **)a4;
            }
            if ( v142 )
            {
              v193 = v13;
              v190 = v92;
              sub_186B220(v142);
              v13 = v193;
              v92 = v190;
              v90 = v172 - 1;
            }
            v88 = 0;
            v19 = *(_DWORD *)(v17 + 12);
            *(_QWORD *)a4 = v91;
            *(_DWORD *)(a4 + 8) = v172;
            *(_DWORD *)(a4 + 16) = 0;
          }
          else
          {
            v90 = v89 - 1;
            v91 = *(__int64 **)a4;
            v92 = 8 * v89;
            v93 = *(_QWORD *)a4 + 8 * v89;
          }
          v94 = v19 & v90;
          v95 = &v91[v94];
          if ( 8 * v94 != v92 )
          {
            v96 = &v91[v94];
            v97 = nullptr;
            while ( 1 )
            {
              v98 = *v96;
              if ( (unsigned __int64)*v96 > 1 )
              {
                if ( *(_DWORD *)(v98 + 12) == v19 && v98 == v17 )
                {
                  *v96 = v17;
                  goto LABEL_23;
                }
              }
              else
              {
                if ( !v98 )
                {
                  if ( v97 )
                    goto LABEL_320;
                  v97 = v96;
                  goto LABEL_321;
                }
                v97 = v96;
              }
              if ( ++v96 == (__int64 *)v93 )
                goto LABEL_157;
            }
          }
          v97 = nullptr;
LABEL_157:
          while ( 2 )
          {
            if ( v95 == v91 )
            {
              sub_1872CE0("");
              sub_1873130(114, 405);
            }
            v99 = *v91;
            if ( (unsigned __int64)*v91 > 1 )
            {
              if ( *(_DWORD *)(v99 + 12) == v19 && v99 == v17 )
              {
                *v91 = v17;
                goto LABEL_23;
              }
              goto LABEL_156;
            }
            if ( v99 )
            {
              v97 = v91;
LABEL_156:
              ++v91;
              continue;
            }
            break;
          }
          if ( v97 )
LABEL_320:
            *(_DWORD *)(a4 + 16) = v88 - 1;
          else
            v97 = v91;
LABEL_321:
          *v97 = v17;
          ++*(_DWORD *)(a4 + 12);
LABEL_23:
          sub_14B6590((__int64)v202, v160, v13, v180);
          v28 = v202[0];
          v29 = v168;
          v202[0] = v181;
          if ( v181 )
          {
            v30 = v202[1];
            v169 = *(_DWORD *)(v181 + 8);
            *(_DWORD *)(v181 + 8) = v169 - 1;
            if ( v169 == 1 )
            {
              v178 = v29;
              sub_15D7BC0(v30, v181);
              v29 = v178;
            }
          }
          if ( v28 != v29 )
          {
            if ( v28 )
              ++*(_DWORD *)(v28 + 8);
            v31 = (_QWORD *)a2[1];
            if ( v31 )
            {
              v32 = *((_DWORD *)v31 - 1);
              if ( v32 == *((_DWORD *)v31 - 2) )
              {
                v137 = (3 * v32 + 1) >> 1;
                v138 = 8 * v137 + 8;
                if ( 8 * v32 + 8 >= v138 || v32 >= v137 )
                {
                  exception = (char **)__cxa_allocate_exception(0x28u);
                  sub_24ABB0(v202, "Overflow encountered when expanding vector");
                  *exception = (char *)off_1C63128;
                  sub_2333C0(exception + 1, v202);
                  sub_233E40((__int64)v202);
                  __cxa_throw(
                    exception,
                    (struct type_info *)&`typeinfo for'default_exception,
                    (void (*)(void *))sub_230E50);
                }
                v177 = v29;
                v139 = (unsigned int *)sub_186B300(v31 - 1, v138);
                v31 = v139 + 2;
                v29 = v177;
                *v139 = v137;
                a2[1] = (__int64)(v139 + 2);
                LODWORD(v139) = v139[1];
                v35 = &v31[(unsigned int)v139];
                v34 = (_DWORD)v139 + 1;
              }
              else
              {
                v33 = v32;
                v34 = v32 + 1;
                v35 = &v31[v33];
              }
            }
            else
            {
              v179 = v29;
              v157 = (_QWORD *)sub_186B270(0x18u);
              *v157 = 2;
              v31 = v157 + 1;
              v34 = 1;
              v29 = v179;
              a2[1] = (__int64)v31;
              v35 = v31;
            }
            *v35 = v28;
            *((_DWORD *)v31 - 1) = v34;
          }
          v36 = 2 * v11;
          LODWORD(v207) = v207 - 1;
          if ( 3 * v11 < 4 * (v182 + (int)v160) )
          {
            v175 = v29;
            v160 = 16LL * v36;
            v128 = (__m128i *)sub_186B270(v160);
            v38 = v160;
            v29 = v175;
            v129 = v128;
            v39 = (__m128i *)((char *)v128 + v160);
            if ( v36 )
            {
              if ( (v160 & 0x10) == 0 || (*v128 = 0, ++v128, v128 != v39) )
              {
                do
                {
                  *v128 = 0;
                  v128 += 2;
                  v128[-1] = 0;
                }
                while ( v128 != v39 );
              }
              v37 = v36 - 1;
              v130 = &v14[v11];
              goto LABEL_244;
            }
            v39 = v128;
            v37 = -1;
            v158 = v11;
            v130 = &v14[v158];
            if ( &v14[v158] != v14 )
            {
LABEL_244:
              v131 = v14;
              do
              {
                while ( v131->m128i_i64[0] <= 1uLL )
                {
                  if ( ++v131 == v130 )
                    goto LABEL_252;
                }
                v132 = 16LL * (*(_DWORD *)(v131->m128i_i64[0] + 12) & (unsigned int)v37);
                v133 = &v129[(unsigned __int64)v132 / 0x10];
                if ( v160 == v132 )
                {
LABEL_255:
                  if ( v129 == v133 )
                  {
LABEL_318:
                    sub_1872CE0("");
                    sub_1873130(114, 213);
                  }
                  v134 = v129;
                  while ( v134->m128i_i64[0] )
                  {
                    if ( v133 == ++v134 )
                      goto LABEL_318;
                  }
                }
                else
                {
                  v134 = &v129[(unsigned __int64)v132 / 0x10];
                  while ( v134->m128i_i64[0] )
                  {
                    if ( ++v134 == v39 )
                      goto LABEL_255;
                  }
                }
                v135 = _mm_loadu_si128(v131++);
                *v134 = v135;
              }
              while ( v131 != v130 );
            }
LABEL_252:
            if ( v14 )
            {
              v185 = v175;
              v176 = v37;
              v160 = (__int64)v129;
              sub_186B220(v14);
              v129 = (__m128i *)v160;
              v37 = v176;
              v38 = 16LL * v36;
              v29 = v185;
            }
            LODWORD(v160) = 0;
            v11 = v36;
            v14 = v129;
            goto LABEL_35;
          }
          v37 = v11 - 1;
          v38 = 16LL * v11;
          v39 = (__m128i *)((char *)v14 + v38);
LABEL_35:
          v40 = *(_DWORD *)(v29 + 12);
          v41 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v29, (__m128i)(unsigned __int64)v28);
          v42 = 16LL * (v37 & v40);
          v43 = &v14[(unsigned __int64)v42 / 0x10];
          if ( v42 == v38 )
          {
            v45 = nullptr;
LABEL_43:
            if ( v14 != v43 )
            {
              v44 = v14;
              do
              {
                while ( 1 )
                {
                  v47 = v44->m128i_i64[0];
                  if ( v44->m128i_i64[0] <= 1uLL )
                    break;
                  if ( *(_DWORD *)(v47 + 12) == v40 && v47 == v29 )
                    goto LABEL_322;
                  if ( v43 == ++v44 )
                    goto LABEL_51;
                }
                if ( !v47 )
                  goto LABEL_223;
                v45 = v44++;
              }
              while ( v43 != v44 );
            }
LABEL_51:
            sub_1872CE0("");
            sub_1873130(114, 405);
          }
          v44 = &v14[(unsigned __int64)v42 / 0x10];
          v45 = nullptr;
          while ( 1 )
          {
            while ( 1 )
            {
              v46 = v44->m128i_i64[0];
              if ( v44->m128i_i64[0] <= 1uLL )
                break;
              if ( *(_DWORD *)(v46 + 12) == v40 && v46 == v29 )
              {
LABEL_322:
                *v44 = v41;
                goto LABEL_226;
              }
              if ( ++v44 == v39 )
                goto LABEL_43;
            }
            if ( !v46 )
              break;
            v45 = v44++;
            if ( v44 == v39 )
              goto LABEL_43;
          }
LABEL_223:
          if ( v45 )
            LODWORD(v160) = v160 - 1;
          else
            v45 = v44;
          *v45 = v41;
          ++v182;
LABEL_226:
          v180 = v28;
          v15 = v207;
LABEL_121:
          if ( !v15 )
            goto LABEL_127;
LABEL_122:
          v13 = *((_QWORD *)v206 + (unsigned int)(v15 - 1));
          goto LABEL_11;
        }
      }
      else if ( !v27 )
      {
        goto LABEL_23;
      }
      if ( v23 == ++v26 )
        goto LABEL_209;
    }
  }
  v48 = 2 * v11;
  if ( 3 * v11 >= 4 * (v182 + (int)v160) )
  {
    v37 = v11 - 1;
    v38 = 16LL * v11;
    v39 = (__m128i *)((char *)v14 + v38);
    goto LABEL_54;
  }
  v174 = v13;
  v160 = 16LL * v48;
  v116 = (__m128i *)sub_186B270(v160);
  v38 = v160;
  v13 = v174;
  v117 = v116;
  v39 = (__m128i *)((char *)v116 + v160);
  if ( v48 )
  {
    if ( (v160 & 0x10) == 0 || (*v116 = 0, ++v116, v39 != v116) )
    {
      do
      {
        *v116 = 0;
        v116 += 2;
        v116[-1] = 0;
      }
      while ( v39 != v116 );
    }
    v37 = v48 - 1;
    v118 = &v14[v11];
    goto LABEL_193;
  }
  v39 = v116;
  v37 = -1;
  v118 = &v14[v11];
  if ( v118 != v14 )
  {
LABEL_193:
    v119 = v14;
    do
    {
      while ( v119->m128i_i64[0] <= 1uLL )
      {
        if ( ++v119 == v118 )
          goto LABEL_201;
      }
      v120 = 16LL * (*(_DWORD *)(v119->m128i_i64[0] + 12) & (unsigned int)v37);
      v121 = &v117[(unsigned __int64)v120 / 0x10];
      if ( v160 == v120 )
      {
LABEL_204:
        if ( v117 == v121 )
        {
LABEL_235:
          sub_1872CE0("");
          sub_1873130(114, 213);
        }
        v122 = v117;
        while ( v122->m128i_i64[0] )
        {
          if ( v121 == ++v122 )
            goto LABEL_235;
        }
      }
      else
      {
        v122 = &v117[(unsigned __int64)v120 / 0x10];
        while ( v122->m128i_i64[0] )
        {
          if ( ++v122 == v39 )
            goto LABEL_204;
        }
      }
      v123 = _mm_loadu_si128(v119++);
      *v122 = v123;
    }
    while ( v119 != v118 );
  }
LABEL_201:
  if ( v14 )
  {
    v164 = v37;
    sub_186B220(v14);
    v13 = v174;
    v38 = 16LL * v48;
    v37 = v164;
  }
  LODWORD(v160) = 0;
  v11 = v48;
  v14 = v117;
LABEL_54:
  v49 = *(_DWORD *)(v13 + 12);
  v50 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v13, (__m128i)(unsigned __int64)v13);
  v51 = 16LL * (v37 & v49);
  v52 = &v14[(unsigned __int64)v51 / 0x10];
  if ( v51 == v38 )
  {
    v54 = nullptr;
LABEL_62:
    if ( v14 != v52 )
    {
      v53 = v14;
      do
      {
        while ( 1 )
        {
          v56 = v53->m128i_i64[0];
          if ( v53->m128i_i64[0] <= 1uLL )
            break;
          if ( *(_DWORD *)(v56 + 12) == v49 && v56 == v13 )
            goto LABEL_260;
          if ( v52 == ++v53 )
            goto LABEL_70;
        }
        if ( !v56 )
          goto LABEL_123;
        v54 = v53++;
      }
      while ( v52 != v53 );
    }
LABEL_70:
    sub_1872CE0("");
    sub_1873130(114, 405);
  }
  v53 = &v14[(unsigned __int64)v51 / 0x10];
  v54 = nullptr;
  while ( 1 )
  {
    while ( 1 )
    {
      v55 = v53->m128i_i64[0];
      if ( v53->m128i_i64[0] <= 1uLL )
        break;
      if ( *(_DWORD *)(v55 + 12) == v49 && v55 == v13 )
      {
LABEL_260:
        *v53 = v50;
        goto LABEL_126;
      }
      if ( ++v53 == v39 )
        goto LABEL_62;
    }
    if ( !v55 )
      break;
    v54 = v53++;
    if ( v53 == v39 )
      goto LABEL_62;
  }
LABEL_123:
  if ( v54 )
    LODWORD(v160) = v160 - 1;
  else
    v54 = v53;
  *v54 = v50;
  ++v182;
LABEL_126:
  v15 = v207 - 1;
  LODWORD(v207) = v15;
  if ( v15 )
    goto LABEL_122;
LABEL_127:
  v81 = *(_DWORD *)(a3 + 12);
  v82 = 16LL * (v81 & (unsigned int)v37);
  v83 = &v14[(unsigned __int64)v82 / 0x10];
  if ( v82 == v38 )
  {
LABEL_261:
    if ( v14 != v83 )
    {
      for ( k = v14; v83 != k; ++k )
      {
        v136 = k->m128i_i64[0];
        if ( k->m128i_i64[0] > 1uLL )
        {
          if ( *(_DWORD *)(v136 + 12) == v81 && v136 == a3 )
            goto LABEL_236;
        }
        else if ( !v136 )
        {
          break;
        }
      }
    }
LABEL_134:
    sub_1872CE0("");
    sub_1873130(114, 192);
  }
  k = &v14[(unsigned __int64)v82 / 0x10];
  while ( 2 )
  {
    v85 = k->m128i_i64[0];
    if ( k->m128i_i64[0] <= 1uLL )
    {
      if ( !v85 )
        goto LABEL_134;
      goto LABEL_131;
    }
    if ( *(_DWORD *)(v85 + 12) != v81 || v85 != a3 )
    {
LABEL_131:
      if ( ++k == v39 )
        goto LABEL_261;
      continue;
    }
    break;
  }
LABEL_236:
  v86 = k->m128i_i64[1];
  if ( v180 )
  {
    v165 = *(_DWORD *)(v180 + 8);
    *(_DWORD *)(v180 + 8) = v165 - 1;
    if ( v165 == 1 )
    {
      v166 = v86;
      sub_15D7BC0(v201, v180);
      v86 = v166;
    }
  }
  if ( ptr && ptr != v205 )
  {
    v161 = v86;
    sub_186B220(ptr);
    v86 = v161;
  }
  if ( v206 != v208 && v206 )
  {
    v162 = v86;
    sub_186B220(v206);
    v86 = v162;
  }
  if ( v14 )
  {
    v163 = v86;
    sub_186B220(v14);
    return v163;
  }
  return v86;
}

