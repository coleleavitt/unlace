__int64 __fastcall sub_821AC0(__int64 *a1, unsigned int *a2, __int64 a3)
{
  __int64 v5; // r8
  char *v6; // r9
  __int64 v8; // r10
  unsigned int *v9; // rbx
  unsigned int v10; // edi
  char *v11; // rdx
  char *v12; // rbx
  __int64 i; // rax
  char *v14; // rsi
  unsigned int v15; // eax
  unsigned __int64 v16; // r12
  unsigned int v17; // r15d
  unsigned int v18; // ecx
  char *v20; // r14
  __int64 j; // rax
  char *v22; // rsi
  char v23; // al
  __int64 v24; // rax
  unsigned __int64 *v25; // r8
  unsigned __int64 v26; // r11
  char *v27; // rax
  unsigned __int64 v28; // rdx
  unsigned __int64 *v29; // rcx
  unsigned __int64 v30; // r10
  unsigned __int64 v31; // rdx
  char *v32; // rax
  unsigned int v33; // eax
  unsigned __int64 v34; // r9
  __int64 v35; // rax
  unsigned __int64 *v36; // r14
  unsigned __int64 *v37; // r8
  unsigned __int64 v38; // rdx
  char *v39; // rax
  char *v40; // r15
  unsigned __int64 v41; // r14
  __int64 v42; // rax
  unsigned __int64 *v43; // rbx
  unsigned __int64 v44; // r12
  unsigned __int64 v45; // rsi
  char *v46; // rax
  unsigned int v47; // eax
  __m128i v48; // xmm0
  __m128i v49; // xmm1
  unsigned __int64 v50; // r12
  unsigned __int64 v51; // xmm0_8
  unsigned __int64 v52; // rdx
  char *v53; // rax
  unsigned __int64 v54; // rbx
  unsigned __int64 v55; // r12
  unsigned __int64 v56; // rdx
  __int64 v57; // rax
  unsigned __int64 *v58; // rdi
  __int64 v59; // rcx
  __int64 v60; // r15
  unsigned __int64 *v61; // rdx
  __int64 v62; // rcx
  unsigned __int64 v63; // rsi
  bool v64; // cf
  __int64 v65; // rax
  unsigned __int64 v66; // rsi
  unsigned __int64 *v67; // rdi
  __int64 v68; // rcx
  __int64 v69; // rdx
  unsigned __int64 *v70; // r8
  unsigned __int64 v71; // r10
  unsigned __int64 v72; // r14
  unsigned __int64 v73; // rsi
  char *v74; // rax
  __int64 v75; // rax
  unsigned __int64 v76; // rsi
  unsigned __int64 *v77; // rdi
  __int64 v78; // rcx
  __int64 v79; // rdx
  unsigned __int64 *v80; // r8
  unsigned __int64 *v81; // r11
  unsigned __int64 v82; // r10
  unsigned __int64 v83; // rbx
  unsigned __int64 v84; // r8
  unsigned __int64 v85; // r12
  unsigned __int64 v86; // rdx
  __int64 v87; // rax
  __int64 v88; // rcx
  unsigned __int64 *v89; // rdx
  __int64 v90; // rcx
  unsigned __int64 v91; // rsi
  char *v92; // rax
  int v93; // ebx
  __int64 v94; // rax
  __int64 v95; // rax
  __int64 v96; // rdx
  __int64 v97; // r12
  unsigned __int64 *v98; // rdi
  __int64 v99; // rdx
  unsigned __int64 v100; // rcx
  unsigned __int64 v101; // r8
  __int64 v102; // rax
  unsigned __int64 *v103; // r12
  unsigned __int64 v104; // r15
  unsigned __int64 v105; // rdx
  char *v106; // rax
  char *v107; // rax
  __int64 v108; // rax
  __int64 v109; // rdx
  __int64 v110; // r14
  unsigned __int64 *v111; // rdi
  __int64 v112; // rdx
  unsigned __int64 v113; // rcx
  __int64 v114; // rax
  __int64 v115; // rdx
  __int64 v116; // rax
  char *v117; // rax
  __int64 v118; // rax
  __int64 v119; // rcx
  unsigned __int64 *v120; // rdx
  __int64 v121; // rcx
  unsigned __int64 v122; // rsi
  __int64 v123; // rax
  __int64 v124; // rcx
  unsigned __int64 *v125; // rdx
  __int64 v126; // rcx
  unsigned __int64 v127; // rsi
  __int64 v128; // rax
  __int64 v129; // rcx
  unsigned __int64 *v130; // rdx
  __int64 v131; // rcx
  unsigned __int64 v132; // rsi
  __int64 v133; // rax
  __int64 v134; // rdx
  unsigned __int64 *v135; // rsi
  unsigned __int64 *v136; // rdi
  __int64 v137; // rdx
  unsigned __int64 v138; // rcx
  __int64 v139; // rax
  __int64 v140; // rdx
  unsigned __int64 *v141; // rsi
  unsigned __int64 *v142; // rdi
  __int64 v143; // rdx
  unsigned __int64 v144; // rcx
  __int64 v145; // rax
  unsigned __int64 *v146; // rdi
  __int64 v147; // rcx
  unsigned __int64 v148; // r8
  unsigned __int64 *v149; // rdx
  __int64 v150; // rcx
  unsigned __int64 v151; // rsi
  unsigned __int64 v152; // r8
  __int64 v153; // rax
  unsigned __int64 *v154; // rdi
  unsigned __int64 *v155; // r10
  __int64 v156; // rcx
  unsigned __int64 *v157; // r9
  unsigned __int64 *v158; // rdx
  unsigned __int64 v159; // rsi
  unsigned __int64 *v160; // r10
  __int64 v161; // rax
  __int64 v162; // rcx
  unsigned __int64 *v163; // rdi
  __int64 v164; // r14
  __int64 v165; // rcx
  unsigned __int64 *v166; // rdx
  unsigned __int64 v167; // rsi
  __int64 v168; // rax
  __int64 v169; // rcx
  unsigned __int64 *v170; // rdi
  unsigned __int64 v171; // r9
  unsigned __int64 *v172; // r8
  __int64 v173; // rcx
  unsigned __int64 *v174; // rdx
  unsigned __int64 v175; // rsi
  unsigned __int64 v176; // r9
  __int64 v177; // rax
  __int64 v178; // rcx
  unsigned __int64 *v179; // rdx
  __int64 v180; // rcx
  unsigned __int64 v181; // rsi
  unsigned __int64 v182; // [rsp+8h] [rbp-80h]
  unsigned __int64 *v183; // [rsp+10h] [rbp-78h]
  unsigned __int64 *v184; // [rsp+18h] [rbp-70h]
  unsigned __int64 v185; // [rsp+20h] [rbp-68h]
  unsigned __int64 v186; // [rsp+28h] [rbp-60h]
  unsigned __int64 v187; // [rsp+38h] [rbp-50h] BYREF
  int v188; // [rsp+40h] [rbp-48h]
  unsigned __int64 v189; // [rsp+48h] [rbp-40h]

  v5 = a1[1];
  v6 = (char *)*a1;
  v189 = __readfsqword(0x28u);
  v8 = 8 * v5;
  if ( v5 )
  {
    v9 = (unsigned int *)&v6[v8 - 8];
    if ( v9[1] == *a2 )
    {
      if ( *(_BYTE *)(a3 + 28) )
      {
        v101 = *(_QWORD *)v9;
        v102 = *(_QWORD *)(a3 + 8);
        LOBYTE(v188) = 1;
        v103 = *(unsigned __int64 **)a3;
        v104 = *(_QWORD *)(a3 + 16);
        v187 = v101;
        v105 = v102 + 1;
        if ( &v187 < v103 || &v187 >= (unsigned __int64 *)((char *)v103 + 12 * v104) )
        {
          if ( v104 < v105 )
          {
            v145 = qvector_reserve(a3, 0, v105, 12);
            v146 = *(unsigned __int64 **)a3;
            v147 = *(_QWORD *)(a3 + 8);
            v148 = *(_QWORD *)(a3 + 16);
            v103 = (unsigned __int64 *)v145;
            *(_QWORD *)(a3 + 16) = v104;
            v149 = v146;
            v150 = v147 - 1;
            if ( v150 >= 0 )
            {
              do
              {
                v151 = *v149;
                v145 += 12;
                v149 = (unsigned __int64 *)((char *)v149 + 12);
                *(_QWORD *)(v145 - 12) = v151;
                *(_DWORD *)(v145 - 4) = *((_DWORD *)v149 - 1);
                v64 = v150-- == 0;
              }
              while ( !v64 );
              v146 = *(unsigned __int64 **)a3;
            }
            v182 = v148;
            qfree(v146);
            v152 = v182;
            *(_QWORD *)a3 = v103;
            v102 = *(_QWORD *)(a3 + 8);
            *(_QWORD *)(a3 + 16) = v152;
          }
          v117 = (char *)v103 + 12 * v102;
          *(_QWORD *)v117 = v187;
          *((_DWORD *)v117 + 2) = v188;
        }
        else
        {
          if ( v104 < v105 )
          {
            v182 = v101;
            v168 = qvector_reserve(a3, 0, v105, 12);
            v169 = *(_QWORD *)(a3 + 8);
            v170 = *(unsigned __int64 **)a3;
            v171 = *(_QWORD *)(a3 + 16);
            v172 = (unsigned __int64 *)v182;
            *(_QWORD *)(a3 + 16) = v104;
            v103 = (unsigned __int64 *)v168;
            v173 = v169 - 1;
            v174 = v170;
            if ( v173 >= 0 )
            {
              do
              {
                v175 = *v174;
                v168 += 12;
                v174 = (unsigned __int64 *)((char *)v174 + 12);
                *(_QWORD *)(v168 - 12) = v175;
                *(_DWORD *)(v168 - 4) = *((_DWORD *)v174 - 1);
                v64 = v173-- == 0;
              }
              while ( !v64 );
              v170 = *(unsigned __int64 **)a3;
            }
            v183 = v172;
            v182 = v171;
            qfree(v170);
            v176 = v182;
            *(_QWORD *)a3 = v103;
            v102 = *(_QWORD *)(a3 + 8);
            v101 = (unsigned __int64)v183;
            *(_QWORD *)(a3 + 16) = v176;
          }
          v106 = (char *)v103 + 12 * v102;
          *(_QWORD *)v106 = v101;
          v106[8] = 1;
        }
        ++*(_QWORD *)(a3 + 8);
      }
      v47 = a2[1];
      v9[1] = v47;
      if ( !*(_BYTE *)(a3 + 28) )
        goto LABEL_36;
      v48 = _mm_cvtsi32_si128(*v9);
      v49 = _mm_cvtsi32_si128(v47);
      v43 = *(unsigned __int64 **)a3;
      v42 = *(_QWORD *)(a3 + 8);
      v50 = *(_QWORD *)(a3 + 16);
      LOBYTE(v188) = 0;
      v51 = _mm_unpacklo_epi32(v48, v49).m128i_u64[0];
      v187 = v51;
      v52 = v42 + 1;
      if ( &v187 >= v43 && &v187 < (unsigned __int64 *)((char *)v43 + 12 * v50) )
      {
        if ( v50 < v52 )
        {
          v182 = v51;
          v161 = qvector_reserve(a3, 0, v52, 12);
          v162 = *(_QWORD *)(a3 + 8);
          v163 = *(unsigned __int64 **)a3;
          v164 = *(_QWORD *)(a3 + 16);
          *(_QWORD *)(a3 + 16) = v50;
          v43 = (unsigned __int64 *)v161;
          v165 = v162 - 1;
          v166 = v163;
          if ( v165 >= 0 )
          {
            do
            {
              v167 = *v166;
              v161 += 12;
              v166 = (unsigned __int64 *)((char *)v166 + 12);
              *(_QWORD *)(v161 - 12) = v167;
              *(_DWORD *)(v161 - 4) = *((_DWORD *)v166 - 1);
              v64 = v165-- == 0;
            }
            while ( !v64 );
            v163 = *(unsigned __int64 **)a3;
          }
          v182 = v51;
          qfree(v163);
          *(_QWORD *)a3 = v43;
          v42 = *(_QWORD *)(a3 + 8);
          *(_QWORD *)(a3 + 16) = v164;
          v51 = v182;
        }
        v53 = (char *)v43 + 12 * v42;
        v53[8] = 0;
        *(_QWORD *)v53 = v51;
        goto LABEL_76;
      }
      if ( v50 >= v52 )
        goto LABEL_75;
      v118 = qvector_reserve(a3, 0, v52, 12);
      v111 = *(unsigned __int64 **)a3;
      v119 = *(_QWORD *)(a3 + 8);
      v110 = *(_QWORD *)(a3 + 16);
      v43 = (unsigned __int64 *)v118;
      *(_QWORD *)(a3 + 16) = v50;
      v120 = v111;
      v121 = v119 - 1;
      if ( v121 < 0 )
        goto LABEL_107;
      do
      {
        v122 = *v120;
        v118 += 12;
        v120 = (unsigned __int64 *)((char *)v120 + 12);
        *(_QWORD *)(v118 - 12) = v122;
        *(_DWORD *)(v118 - 4) = *((_DWORD *)v120 - 1);
        v64 = v121-- == 0;
      }
      while ( !v64 );
      goto LABEL_106;
    }
    if ( v9[1] < *a2 )
    {
      v54 = *(_QWORD *)a2;
      if ( a1[2] < (unsigned __int64)(v5 + 1) )
      {
        v116 = qvector_reserve(a1, v6, v5 + 1, 8);
        *a1 = v116;
        v6 = (char *)v116;
        v8 = 8 * a1[1];
      }
      *(_QWORD *)&v6[v8] = v54;
      ++a1[1];
      if ( !*(_BYTE *)(a3 + 28) )
        goto LABEL_36;
      v41 = *(_QWORD *)a2;
      v42 = *(_QWORD *)(a3 + 8);
      LOBYTE(v188) = 0;
      v43 = *(unsigned __int64 **)a3;
      v55 = *(_QWORD *)(a3 + 16);
      v187 = v41;
      v56 = v42 + 1;
      if ( &v187 >= v43 && &v187 < (unsigned __int64 *)((char *)v43 + 12 * v55) )
      {
        if ( v55 >= v56 )
          goto LABEL_51;
        v57 = qvector_reserve(a3, 0, v56, 12);
        v58 = *(unsigned __int64 **)a3;
        v59 = *(_QWORD *)(a3 + 8);
        v60 = *(_QWORD *)(a3 + 16);
        v43 = (unsigned __int64 *)v57;
        *(_QWORD *)(a3 + 16) = v55;
        v61 = v58;
        v62 = v59 - 1;
        if ( v62 >= 0 )
        {
          do
          {
            v63 = *v61;
            v57 += 12;
            v61 = (unsigned __int64 *)((char *)v61 + 12);
            *(_QWORD *)(v57 - 12) = v63;
            *(_DWORD *)(v57 - 4) = *((_DWORD *)v61 - 1);
            v64 = v62-- == 0;
          }
          while ( !v64 );
          goto LABEL_66;
        }
LABEL_67:
        qfree(v58);
        *(_QWORD *)a3 = v43;
        v42 = *(_QWORD *)(a3 + 8);
        *(_QWORD *)(a3 + 16) = v60;
        goto LABEL_51;
      }
      if ( v55 < v56 )
      {
        v123 = qvector_reserve(a3, 0, v56, 12);
        v111 = *(unsigned __int64 **)a3;
        v124 = *(_QWORD *)(a3 + 8);
        v110 = *(_QWORD *)(a3 + 16);
        v43 = (unsigned __int64 *)v123;
        *(_QWORD *)(a3 + 16) = v55;
        v125 = v111;
        v126 = v124 - 1;
        if ( v126 < 0 )
          goto LABEL_107;
        do
        {
          v127 = *v125;
          v123 += 12;
          v125 = (unsigned __int64 *)((char *)v125 + 12);
          *(_QWORD *)(v123 - 12) = v127;
          *(_DWORD *)(v123 - 4) = *((_DWORD *)v125 - 1);
          v64 = v126-- == 0;
        }
        while ( !v64 );
        goto LABEL_106;
      }
      goto LABEL_75;
    }
  }
  v10 = *a2;
  v11 = &v6[v8];
  v12 = v6;
  for ( i = v8 >> 3; i > 0; i >>= 1 )
  {
    while ( 1 )
    {
      v14 = &v12[8 * (i >> 1)];
      if ( *((_DWORD *)v14 + 1) >= v10 )
        break;
      v12 = v14 + 8;
      i = i - 1 - (i >> 1);
      if ( i <= 0 )
        goto LABEL_8;
    }
  }
LABEL_8:
  if ( v12 == v11 )
  {
    v83 = *(_QWORD *)a2;
    v84 = v5 + 1;
    if ( a1[2] < v84 )
    {
      v114 = qvector_reserve(a1, v6, v84, 8);
      v115 = a1[1];
      *a1 = v114;
      v11 = (char *)(v114 + 8 * v115);
    }
    *(_QWORD *)v11 = v83;
    ++a1[1];
    if ( !*(_BYTE *)(a3 + 28) )
      goto LABEL_36;
    v41 = *(_QWORD *)a2;
    v42 = *(_QWORD *)(a3 + 8);
    LOBYTE(v188) = 0;
    v43 = *(unsigned __int64 **)a3;
    v85 = *(_QWORD *)(a3 + 16);
    v187 = v41;
    v86 = v42 + 1;
    if ( &v187 >= v43 && &v187 < (unsigned __int64 *)((char *)v43 + 12 * v85) )
    {
      if ( v85 >= v86 )
        goto LABEL_51;
      v87 = qvector_reserve(a3, 0, v86, 12);
      v58 = *(unsigned __int64 **)a3;
      v88 = *(_QWORD *)(a3 + 8);
      v60 = *(_QWORD *)(a3 + 16);
      v43 = (unsigned __int64 *)v87;
      *(_QWORD *)(a3 + 16) = v85;
      v89 = v58;
      v90 = v88 - 1;
      if ( v90 < 0 )
        goto LABEL_67;
      do
      {
        v91 = *v89;
        v87 += 12;
        v89 = (unsigned __int64 *)((char *)v89 + 12);
        *(_QWORD *)(v87 - 12) = v91;
        *(_DWORD *)(v87 - 4) = *((_DWORD *)v89 - 1);
        v64 = v90-- == 0;
      }
      while ( !v64 );
      goto LABEL_66;
    }
    if ( v85 < v86 )
    {
      v128 = qvector_reserve(a3, 0, v86, 12);
      v111 = *(unsigned __int64 **)a3;
      v129 = *(_QWORD *)(a3 + 8);
      v110 = *(_QWORD *)(a3 + 16);
      v43 = (unsigned __int64 *)v128;
      *(_QWORD *)(a3 + 16) = v85;
      v130 = v111;
      v131 = v129 - 1;
      if ( v131 < 0 )
        goto LABEL_107;
      do
      {
        v132 = *v130;
        v128 += 12;
        v130 = (unsigned __int64 *)((char *)v130 + 12);
        *(_QWORD *)(v128 - 12) = v132;
        *(_DWORD *)(v128 - 4) = *((_DWORD *)v130 - 1);
        v64 = v131-- == 0;
      }
      while ( !v64 );
      goto LABEL_106;
    }
    goto LABEL_75;
  }
  v15 = *(_DWORD *)v12;
  v16 = *(_QWORD *)a2;
  v17 = a2[1];
  if ( v10 < *(_DWORD *)v12 || (v18 = 0, *((_DWORD *)v12 + 1) < v17) )
  {
    if ( v17 >= v15 )
    {
      v20 = v12;
      if ( v15 <= v10 )
        v10 = *(_DWORD *)v12;
      LODWORD(v182) = v10;
      for ( j = (v11 - v12) >> 3; j > 0; j >>= 1 )
      {
        while ( 1 )
        {
          v22 = &v20[8 * (j >> 1)];
          if ( v17 < *((_DWORD *)v22 + 1) )
            break;
          v20 = v22 + 8;
          j = j - 1 - (j >> 1);
          if ( j <= 0 )
            goto LABEL_19;
        }
      }
LABEL_19:
      if ( v11 == v20 || v17 < *(_DWORD *)v20 )
      {
        v23 = *(_BYTE *)(a3 + 28);
        if ( v12 != v20 )
          goto LABEL_22;
      }
      else
      {
        v17 = *((_DWORD *)v20 + 1);
        v20 += 8;
        v23 = *(_BYTE *)(a3 + 28);
        if ( v12 != v20 )
        {
LABEL_22:
          if ( v23 && v12 < v20 )
          {
            v24 = *(_QWORD *)(a3 + 8);
            v25 = (unsigned __int64 *)v12;
            do
            {
              v28 = *v25;
              v29 = *(unsigned __int64 **)a3;
              LOBYTE(v188) = 1;
              v30 = *(_QWORD *)(a3 + 16);
              v187 = v28;
              v31 = v24 + 1;
              if ( &v187 < v29 || &v187 >= (unsigned __int64 *)((char *)v29 + 12 * v30) )
              {
                if ( v30 < v31 )
                {
                  v184 = (unsigned __int64 *)v30;
                  v183 = v25;
                  v65 = qvector_reserve(a3, 0, v31, 12);
                  v66 = *(_QWORD *)(a3 + 16);
                  v67 = *(unsigned __int64 **)a3;
                  v68 = v65;
                  v69 = *(_QWORD *)(a3 + 8) - 1LL;
                  *(_QWORD *)(a3 + 16) = v184;
                  v70 = v183;
                  if ( v69 >= 0 )
                  {
                    do
                    {
                      v71 = *v67;
                      v65 += 12;
                      v67 = (unsigned __int64 *)((char *)v67 + 12);
                      *(_QWORD *)(v65 - 12) = v71;
                      *(_DWORD *)(v65 - 4) = *((_DWORD *)v67 - 1);
                      v64 = v69-- == 0;
                    }
                    while ( !v64 );
                    v67 = *(unsigned __int64 **)a3;
                  }
                  v185 = v66;
                  v184 = (unsigned __int64 *)v68;
                  v183 = v70;
                  qfree(v67);
                  v29 = v184;
                  v24 = *(_QWORD *)(a3 + 8);
                  v25 = v183;
                  *(_QWORD *)a3 = v184;
                  *(_QWORD *)(a3 + 16) = v66;
                }
                v32 = (char *)v29 + 12 * v24;
                *(_QWORD *)v32 = v187;
                *((_DWORD *)v32 + 2) = v188;
              }
              else
              {
                v26 = v187;
                if ( v30 < v31 )
                {
                  v185 = v30;
                  v184 = (unsigned __int64 *)v187;
                  v183 = v25;
                  v75 = qvector_reserve(a3, 0, v31, 12);
                  v76 = *(_QWORD *)(a3 + 16);
                  v77 = *(unsigned __int64 **)a3;
                  v78 = v75;
                  v79 = *(_QWORD *)(a3 + 8) - 1LL;
                  *(_QWORD *)(a3 + 16) = v185;
                  v80 = v183;
                  v81 = v184;
                  if ( v79 >= 0 )
                  {
                    do
                    {
                      v82 = *v77;
                      v75 += 12;
                      v77 = (unsigned __int64 *)((char *)v77 + 12);
                      *(_QWORD *)(v75 - 12) = v82;
                      *(_DWORD *)(v75 - 4) = *((_DWORD *)v77 - 1);
                      v64 = v79-- == 0;
                    }
                    while ( !v64 );
                    v77 = *(unsigned __int64 **)a3;
                  }
                  v186 = (unsigned __int64)v81;
                  v185 = v76;
                  v184 = (unsigned __int64 *)v78;
                  v183 = v80;
                  qfree(v77);
                  v29 = v184;
                  v24 = *(_QWORD *)(a3 + 8);
                  v26 = v186;
                  *(_QWORD *)a3 = v184;
                  v25 = v183;
                  *(_QWORD *)(a3 + 16) = v76;
                }
                v27 = (char *)v29 + 12 * v24;
                *(_QWORD *)v27 = v26;
                v27[8] = 1;
              }
              ++v25;
              v24 = *(_QWORD *)(a3 + 8) + 1LL;
              *(_QWORD *)(a3 + 8) = v24;
            }
            while ( v25 < (unsigned __int64 *)v20 );
            v11 = (char *)(*a1 + 8 * a1[1]);
          }
          a1[1] -= (v20 - (_BYTE *)memmove(v12 + 8, v20, v11 - v20)) >> 3;
LABEL_35:
          v33 = v182;
          *((_DWORD *)v12 + 1) = v17;
          *(_DWORD *)v12 = v33;
          if ( !*(_BYTE *)(a3 + 28) )
          {
LABEL_36:
            a1[3] = 0;
            return 1;
          }
          v187 = __PAIR64__(v17, v33);
          v43 = *(unsigned __int64 **)a3;
          v42 = *(_QWORD *)(a3 + 8);
          v72 = *(_QWORD *)(a3 + 16);
          LOBYTE(v188) = 0;
          v73 = v42 + 1;
          if ( &v187 >= v43 && &v187 < (unsigned __int64 *)((char *)v43 + 12 * v72) )
          {
            if ( v72 < v73 )
            {
              v133 = qvector_reserve(a3, 0, v42 + 1, 12);
              v134 = *(_QWORD *)(a3 + 8);
              v135 = *(unsigned __int64 **)(a3 + 16);
              *(_QWORD *)(a3 + 16) = v72;
              v136 = *(unsigned __int64 **)a3;
              v43 = (unsigned __int64 *)v133;
              v137 = v134 - 1;
              if ( v137 >= 0 )
              {
                do
                {
                  v138 = *v136;
                  v133 += 12;
                  v136 = (unsigned __int64 *)((char *)v136 + 12);
                  *(_QWORD *)(v133 - 12) = v138;
                  *(_DWORD *)(v133 - 4) = *((_DWORD *)v136 - 1);
                  v64 = v137-- == 0;
                }
                while ( !v64 );
                v136 = *(unsigned __int64 **)a3;
              }
              v183 = v135;
              qfree(v136);
              *(_QWORD *)a3 = v43;
              v42 = *(_QWORD *)(a3 + 8);
              *(_QWORD *)(a3 + 16) = v135;
            }
            v92 = (char *)v43 + 12 * v42;
            v93 = v182;
            *((_DWORD *)v92 + 1) = v17;
            *(_DWORD *)v92 = v93;
            v92[8] = 0;
            goto LABEL_76;
          }
          if ( v72 < v73 )
          {
            v95 = qvector_reserve(a3, 0, v42 + 1, 12);
            v96 = *(_QWORD *)(a3 + 8);
            v97 = *(_QWORD *)(a3 + 16);
            *(_QWORD *)(a3 + 16) = v72;
            v98 = *(unsigned __int64 **)a3;
            v43 = (unsigned __int64 *)v95;
            v99 = v96 - 1;
            if ( v99 >= 0 )
            {
              do
              {
                v100 = *v98;
                v95 += 12;
                v98 = (unsigned __int64 *)((char *)v98 + 12);
                *(_QWORD *)(v95 - 12) = v100;
                *(_DWORD *)(v95 - 4) = *((_DWORD *)v98 - 1);
                v64 = v99-- == 0;
              }
              while ( !v64 );
              v98 = *(unsigned __int64 **)a3;
            }
            qfree(v98);
            *(_QWORD *)a3 = v43;
            v42 = *(_QWORD *)(a3 + 8);
            *(_QWORD *)(a3 + 16) = v97;
          }
          goto LABEL_75;
        }
      }
      if ( v23 )
      {
        v34 = *(_QWORD *)v12;
        v35 = *(_QWORD *)(a3 + 8);
        LOBYTE(v188) = 1;
        v36 = *(unsigned __int64 **)a3;
        v37 = *(unsigned __int64 **)(a3 + 16);
        v187 = v34;
        v38 = v35 + 1;
        if ( &v187 < v36 || &v187 >= (unsigned __int64 *)((char *)v36 + 12 * (_QWORD)v37) )
        {
          if ( (unsigned __int64)v37 < v38 )
          {
            v183 = v37;
            v139 = qvector_reserve(a3, 0, v38, 12);
            v140 = *(_QWORD *)(a3 + 8);
            v141 = *(unsigned __int64 **)(a3 + 16);
            v142 = *(unsigned __int64 **)a3;
            v36 = (unsigned __int64 *)v139;
            *(_QWORD *)(a3 + 16) = v183;
            v143 = v140 - 1;
            if ( v143 >= 0 )
            {
              do
              {
                v144 = *v142;
                v139 += 12;
                v142 = (unsigned __int64 *)((char *)v142 + 12);
                *(_QWORD *)(v139 - 12) = v144;
                *(_DWORD *)(v139 - 4) = *((_DWORD *)v142 - 1);
                v64 = v143-- == 0;
              }
              while ( !v64 );
              v142 = *(unsigned __int64 **)a3;
            }
            v183 = v141;
            qfree(v142);
            *(_QWORD *)a3 = v36;
            v35 = *(_QWORD *)(a3 + 8);
            *(_QWORD *)(a3 + 16) = v141;
          }
          v107 = (char *)v36 + 12 * v35;
          *(_QWORD *)v107 = v187;
          *((_DWORD *)v107 + 2) = v188;
        }
        else
        {
          if ( (unsigned __int64)v37 < v38 )
          {
            v184 = (unsigned __int64 *)v34;
            v183 = v37;
            v153 = qvector_reserve(a3, 0, v38, 12);
            v154 = *(unsigned __int64 **)a3;
            v155 = *(unsigned __int64 **)(a3 + 16);
            v36 = (unsigned __int64 *)v153;
            v156 = *(_QWORD *)(a3 + 8) - 1LL;
            *(_QWORD *)(a3 + 16) = v183;
            v157 = v184;
            v158 = v154;
            if ( v156 >= 0 )
            {
              do
              {
                v159 = *v158;
                v153 += 12;
                v158 = (unsigned __int64 *)((char *)v158 + 12);
                *(_QWORD *)(v153 - 12) = v159;
                *(_DWORD *)(v153 - 4) = *((_DWORD *)v158 - 1);
                v64 = v156-- == 0;
              }
              while ( !v64 );
              v154 = *(unsigned __int64 **)a3;
            }
            v184 = v157;
            v183 = v155;
            qfree(v154);
            v160 = v183;
            *(_QWORD *)a3 = v36;
            v35 = *(_QWORD *)(a3 + 8);
            v34 = (unsigned __int64)v184;
            *(_QWORD *)(a3 + 16) = v160;
          }
          v39 = (char *)v36 + 12 * v35;
          *(_QWORD *)v39 = v34;
          v39[8] = 1;
        }
        ++*(_QWORD *)(a3 + 8);
      }
      goto LABEL_35;
    }
    v40 = (char *)(v12 - v6);
    if ( a1[2] < (unsigned __int64)(v5 + 1) )
    {
      v94 = qvector_reserve(a1, v6, v5 + 1, 8);
      *a1 = v94;
      v12 = &v40[v94];
      v8 = 8 * a1[1];
    }
    memmove(v12 + 8, v12, v8 - (_QWORD)v40);
    *(_QWORD *)v12 = v16;
    ++a1[1];
    if ( !*(_BYTE *)(a3 + 28) )
      goto LABEL_36;
    v41 = *(_QWORD *)a2;
    v42 = *(_QWORD *)(a3 + 8);
    LOBYTE(v188) = 0;
    v43 = *(unsigned __int64 **)a3;
    v44 = *(_QWORD *)(a3 + 16);
    v187 = v41;
    v45 = v42 + 1;
    if ( &v187 >= v43 && &v187 < (unsigned __int64 *)((char *)v43 + 12 * v44) )
    {
      if ( v44 >= v45 )
      {
LABEL_51:
        v46 = (char *)v43 + 12 * v42;
        *(_QWORD *)v46 = v41;
        v46[8] = 0;
LABEL_76:
        ++*(_QWORD *)(a3 + 8);
        goto LABEL_36;
      }
      v177 = qvector_reserve(a3, 0, v42 + 1, 12);
      v58 = *(unsigned __int64 **)a3;
      v178 = *(_QWORD *)(a3 + 8);
      v60 = *(_QWORD *)(a3 + 16);
      v43 = (unsigned __int64 *)v177;
      *(_QWORD *)(a3 + 16) = v44;
      v179 = v58;
      v180 = v178 - 1;
      if ( v180 >= 0 )
      {
        do
        {
          v181 = *v179;
          v177 += 12;
          v179 = (unsigned __int64 *)((char *)v179 + 12);
          *(_QWORD *)(v177 - 12) = v181;
          *(_DWORD *)(v177 - 4) = *((_DWORD *)v179 - 1);
          v64 = v180-- == 0;
        }
        while ( !v64 );
LABEL_66:
        v58 = *(unsigned __int64 **)a3;
        goto LABEL_67;
      }
      goto LABEL_67;
    }
    if ( v44 < v45 )
    {
      v108 = qvector_reserve(a3, 0, v42 + 1, 12);
      v109 = *(_QWORD *)(a3 + 8);
      v110 = *(_QWORD *)(a3 + 16);
      *(_QWORD *)(a3 + 16) = v44;
      v111 = *(unsigned __int64 **)a3;
      v43 = (unsigned __int64 *)v108;
      v112 = v109 - 1;
      if ( v112 < 0 )
      {
LABEL_107:
        qfree(v111);
        *(_QWORD *)a3 = v43;
        v42 = *(_QWORD *)(a3 + 8);
        *(_QWORD *)(a3 + 16) = v110;
        goto LABEL_75;
      }
      do
      {
        v113 = *v111;
        v108 += 12;
        v111 = (unsigned __int64 *)((char *)v111 + 12);
        *(_QWORD *)(v108 - 12) = v113;
        *(_DWORD *)(v108 - 4) = *((_DWORD *)v111 - 1);
        v64 = v112-- == 0;
      }
      while ( !v64 );
LABEL_106:
      v111 = *(unsigned __int64 **)a3;
      goto LABEL_107;
    }
LABEL_75:
    v74 = (char *)v43 + 12 * v42;
    *(_QWORD *)v74 = v187;
    *((_DWORD *)v74 + 2) = v188;
    goto LABEL_76;
  }
  return v18;
}

