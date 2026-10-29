bool __fastcall presolve_expand_major(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6, int a7)
{
  __int64 v9; // rdx
  int *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rdi
  int v13; // eax
  int v14; // ecx
  __int64 v16; // rcx
  _DWORD *v17; // rdi
  _DWORD *v18; // rcx
  int v19; // ebx
  int v20; // ebp
  __int64 v21; // r15
  __int64 v22; // r14
  __int64 v23; // r12
  int v24; // edx
  __int64 v25; // rax
  __int64 v26; // rdx
  int v27; // eax
  int j; // edx
  __int64 v30; // rbp
  signed int v31; // r12d
  signed int *v32; // rax
  unsigned int v33; // r13d
  signed int v34; // edx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rax
  _DWORD *v39; // rbx
  int v40; // r8d
  unsigned int v41; // eax
  int v42; // esi
  __int64 v43; // xmm0_8
  unsigned int v44; // r11d
  __int64 v45; // rcx
  __int64 v46; // rdi
  __int64 v47; // rcx
  unsigned int v48; // r10d
  __int64 v49; // rsi
  __int64 v50; // rbx
  __int64 v51; // rax
  unsigned int v52; // r9d
  __int64 v53; // rsi
  __int64 v54; // rbx
  __int128 v55; // xmm1
  signed int v56; // edx
  int v57; // r8d
  int v58; // ecx
  int v59; // eax
  int v60; // ecx
  __int64 v61; // xmm0_8
  int v62; // eax
  int v63; // eax
  int v64; // ecx
  signed int v65; // edx
  __int64 v66; // xmm0_8
  int v67; // eax
  int v68; // r8d
  int v69; // eax
  int v70; // eax
  int i; // edx
  __int64 v72; // rbp
  signed int v73; // r14d
  signed int *v74; // rax
  unsigned int v75; // r15d
  signed int v76; // edx
  __int64 v77; // rcx
  __int64 v78; // r8
  __int64 v79; // r9
  __int64 v80; // rax
  _DWORD *v81; // rbx
  int v82; // r8d
  unsigned int v83; // eax
  int v84; // esi
  __int64 v85; // xmm0_8
  unsigned int v86; // r11d
  __int64 v87; // rcx
  __int64 v88; // rdi
  __int64 v89; // rcx
  unsigned int v90; // r10d
  __int64 v91; // rsi
  __int64 v92; // rbx
  __int64 v93; // rax
  unsigned int v94; // r9d
  __int64 v95; // rsi
  __int64 v96; // rbx
  __int128 v97; // xmm1
  signed int v98; // edx
  int v99; // r8d
  int v100; // ecx
  int v101; // eax
  int v102; // ecx
  __int64 v103; // xmm0_8
  int v104; // eax
  int v105; // eax
  int v106; // ecx
  signed int v107; // edx
  __int64 v108; // xmm0_8
  int v109; // eax
  int v110; // r8d
  int v111; // eax
  int v112; // eax
  __int64 v113; // rax
  __int64 v114; // r8
  unsigned __int64 v115; // rdx
  int v116; // esi
  int v117; // esi
  int v118; // ecx
  signed int v119; // r14d
  __int64 v120; // rbp
  signed int *v121; // rax
  unsigned int v122; // r15d
  signed int v123; // edx
  __int64 v124; // rcx
  __int64 v125; // r9
  __int64 v126; // r8
  __int64 v127; // rax
  _DWORD *v128; // rbx
  int v129; // r8d
  unsigned int v130; // eax
  int v131; // esi
  __int64 v132; // xmm0_8
  unsigned int v133; // r11d
  __int64 v134; // rcx
  __int64 v135; // rdi
  __int64 v136; // rcx
  unsigned int v137; // r10d
  __int64 v138; // rsi
  __int64 v139; // rbx
  __int64 v140; // rax
  unsigned int v141; // r9d
  __int64 v142; // rsi
  __int64 v143; // rbx
  __int128 v144; // xmm1
  signed int v145; // edx
  int v146; // r8d
  int v147; // ecx
  int v148; // eax
  int v149; // ecx
  __int64 v150; // xmm0_8
  int v151; // eax
  int v152; // eax
  int v153; // ecx
  signed int v154; // edx
  __int64 v155; // xmm0_8
  int v156; // eax
  int v157; // r8d
  int v158; // eax
  __int64 v159; // rax
  __int64 v160; // r8
  unsigned __int64 v161; // rdx
  int v162; // esi
  __int64 v163; // rax
  __int64 v164; // r8
  unsigned __int64 v165; // rdx
  int v166; // esi
  __int64 v168; // [rsp+8h] [rbp-B0h]
  __int64 v170; // [rsp+10h] [rbp-A8h]
  unsigned __int64 v172; // [rsp+18h] [rbp-A0h]
  int *v174; // [rsp+28h] [rbp-90h]
  signed int v175; // [rsp+28h] [rbp-90h]
  __int64 v176; // [rsp+28h] [rbp-90h]
  int v177; // [rsp+30h] [rbp-88h]
  unsigned __int64 v178; // [rsp+30h] [rbp-88h]
  __int64 v179; // [rsp+30h] [rbp-88h]
  int *v180; // [rsp+38h] [rbp-80h]
  int *v181; // [rsp+40h] [rbp-78h]
  int v182; // [rsp+4Ch] [rbp-6Ch]
  __int64 v183; // [rsp+50h] [rbp-68h]
  unsigned __int64 v184; // [rsp+50h] [rbp-68h]
  signed int v185; // [rsp+58h] [rbp-60h]
  signed int v186; // [rsp+60h] [rbp-58h]
  int v187; // [rsp+64h] [rbp-54h]
  _DWORD *v188; // [rsp+70h] [rbp-48h]
  _DWORD *v189; // [rsp+78h] [rbp-40h]

  v9 = 4LL * a7;
  v10 = (int *)(a1 + v9);
  v181 = (int *)(a4 + v9);
  v11 = *(int *)(a4 + v9);
  v174 = (int *)(a5 + 8LL * a7);
  v12 = v174[1];
  v180 = v10;
  v13 = *v10;
  v14 = v11 + v13 + 1;
  if ( v14 < *(_DWORD *)(a1 + 4 * v12) )
    return 0;
  v182 = *(_DWORD *)(a1 + 4LL * a6);
  if ( a6 == (_DWORD)v12 )
  {
    for ( i = a6; *(_DWORD *)(a5 + 8LL * i) != -66666666; i = *(_DWORD *)(a5 + 8LL * i) )
      ;
    if ( a6 != i )
    {
      v72 = i;
      v73 = 0;
      while ( 1 )
      {
        v74 = (signed int *)(a1 + 4 * v72);
        v75 = *(_DWORD *)(a4 + 4 * v72);
        v76 = *v74;
        *v74 = v73;
        v185 = v76 + v75;
        if ( v76 < (int)(v76 + v75) )
        {
          v77 = v76;
          v78 = 4LL * v76;
          v79 = 4LL * v73;
          v80 = 8LL * v76;
          v81 = (_DWORD *)(a3 + v79);
          v176 = 8LL * v73;
          v178 = a2 + v176;
          if ( v75 > 0xC
            && (v80 >= v176 + 32 || v176 >= v80 + 32)
            && (v78 >= v79 + 16 || v79 >= v78 + 16)
            && ((unsigned __int64)v81 >= a2 + 8 * (v73 + (unsigned __int64)v75)
             || v178 >= a3 + 4 * (v73 + (unsigned __int64)v75)) )
          {
            v82 = v73;
            v83 = ((unsigned __int64)(a2 + v80) >> 3) & 1;
            if ( v83 )
            {
              v84 = *(_DWORD *)(a3 + 4LL * v76);
              v85 = *(_QWORD *)(a2 + 8LL * v76);
              v82 = v73 + 1;
              ++v76;
              *(_QWORD *)(a2 + 8LL * v73) = v85;
              *v81 = v84;
            }
            v86 = v75 - v83;
            v87 = v83 + v77;
            v88 = a2 + 8 * v87;
            v89 = a3 + 4 * v87;
            v90 = (v75 - v83) >> 2;
            v91 = v176 + 8LL * v83;
            v92 = v79 + 4LL * v83;
            v93 = 0;
            v94 = 0;
            v95 = a2 + v91;
            v96 = a3 + v92;
            do
            {
              ++v94;
              v97 = *(_OWORD *)(v88 + 2 * v93);
              *(_OWORD *)(v95 + 2 * v93 + 16) = *(_OWORD *)(v88 + 2 * v93 + 16);
              *(_OWORD *)(v95 + 2 * v93) = v97;
              *(__m128i *)(v96 + v93) = _mm_loadu_si128((const __m128i *)(v89 + v93));
              v93 += 16;
            }
            while ( v90 > v94 );
            v98 = (v86 & 0xFFFFFFFC) + v76;
            v99 = (v86 & 0xFFFFFFFC) + v82;
            if ( (v86 & 0xFFFFFFFC) != v86 )
            {
              v100 = *(_DWORD *)(a3 + 4LL * v98);
              *(_QWORD *)(a2 + 8LL * v99) = *(_QWORD *)(a2 + 8LL * v98);
              *(_DWORD *)(a3 + 4LL * v99) = v100;
              v101 = v98 + 1;
              v102 = v99 + 1;
              if ( v185 > v98 + 1 )
              {
                v103 = *(_QWORD *)(a2 + 8LL * v101);
                v104 = *(_DWORD *)(a3 + 4LL * v101);
                *(_QWORD *)(a2 + 8LL * v102) = v103;
                *(_DWORD *)(a3 + 4LL * v102) = v104;
                v105 = v98 + 2;
                v106 = v99 + 2;
                if ( v185 > v98 + 2 )
                {
                  v107 = v98 + 3;
                  v108 = *(_QWORD *)(a2 + 8LL * v105);
                  v109 = *(_DWORD *)(a3 + 4LL * v105);
                  v110 = v99 + 3;
                  *(_QWORD *)(a2 + 8LL * v106) = v108;
                  *(_DWORD *)(a3 + 4LL * v106) = v109;
                  if ( v185 > v107 )
                  {
                    v111 = *(_DWORD *)(a3 + 4LL * v107);
                    *(_QWORD *)(a2 + 8LL * v110) = *(_QWORD *)(a2 + 8LL * v107);
                    *(_DWORD *)(a3 + 4LL * v110) = v111;
                  }
                }
              }
            }
          }
          else
          {
            v163 = a2 + v80;
            v164 = a3 + v78;
            v165 = 0;
            do
            {
              v166 = *(_DWORD *)(v164 + v165);
              *(_QWORD *)(v178 + 2 * v165) = *(_QWORD *)(v163 + 2 * v165);
              v81[v165 / 4] = v166;
              v165 += 4LL;
            }
            while ( v165 != 4LL * (v75 - 1) + 4 );
          }
          v73 += v75;
        }
        v112 = *(_DWORD *)(a5 + 8 * v72 + 4);
        if ( a6 == v112 )
          break;
        v72 = v112;
      }
      v14 = *v181 + *v180 + 1;
    }
    return v182 <= v14;
  }
  else
  {
    v187 = *(_DWORD *)(a5 + 8LL * a6);
    v16 = 4LL * v187;
    v17 = (_DWORD *)(a1 + v16);
    v18 = (_DWORD *)(a4 + v16);
    v188 = v17;
    v19 = *v17 + *v18;
    v189 = v18;
    v20 = v11 + v19 + 1;
    if ( v20 >= v182 )
    {
      v117 = *(_DWORD *)(a5 + 8LL * a6);
      v118 = a6;
      while ( v117 != -66666666 )
      {
        v118 = v117;
        v117 = *(_DWORD *)(a5 + 8LL * v117);
      }
      if ( a6 != v118 )
      {
        v119 = 0;
        do
        {
          v120 = v118;
          v121 = (signed int *)(a1 + 4LL * v118);
          v122 = *(_DWORD *)(a4 + 4LL * v118);
          v123 = *v121;
          *v121 = v119;
          v186 = v123 + v122;
          if ( v123 < (int)(v123 + v122) )
          {
            v124 = v123;
            v125 = 4LL * v119;
            v126 = 4LL * v123;
            v127 = 8LL * v123;
            v128 = (_DWORD *)(a3 + v125);
            v179 = 8LL * v119;
            v184 = a2 + v179;
            if ( v122 > 0xC
              && (v179 + 32 <= v127 || v127 + 32 <= v179)
              && (v126 + 16 <= v125 || v125 + 16 <= v126)
              && (v184 >= a3 + 4 * (v119 + (unsigned __int64)v122)
               || (unsigned __int64)v128 >= a2 + 8 * (v119 + (unsigned __int64)v122)) )
            {
              v129 = v119;
              v130 = ((unsigned __int64)(a2 + v127) >> 3) & 1;
              if ( v130 )
              {
                v131 = *(_DWORD *)(a3 + 4LL * v123);
                v132 = *(_QWORD *)(a2 + 8LL * v123);
                v129 = v119 + 1;
                ++v123;
                *(_QWORD *)(a2 + 8LL * v119) = v132;
                *v128 = v131;
              }
              v133 = v122 - v130;
              v134 = v130 + v124;
              v135 = a2 + 8 * v134;
              v136 = a3 + 4 * v134;
              v137 = (v122 - v130) >> 2;
              v138 = v179 + 8LL * v130;
              v139 = v125 + 4LL * v130;
              v140 = 0;
              v141 = 0;
              v142 = a2 + v138;
              v143 = a3 + v139;
              do
              {
                ++v141;
                v144 = *(_OWORD *)(v135 + 2 * v140);
                *(_OWORD *)(v142 + 2 * v140 + 16) = *(_OWORD *)(v135 + 2 * v140 + 16);
                *(_OWORD *)(v142 + 2 * v140) = v144;
                *(__m128i *)(v143 + v140) = _mm_loadu_si128((const __m128i *)(v136 + v140));
                v140 += 16;
              }
              while ( v137 > v141 );
              v145 = (v133 & 0xFFFFFFFC) + v123;
              v146 = (v133 & 0xFFFFFFFC) + v129;
              if ( v133 != (v133 & 0xFFFFFFFC) )
              {
                v147 = *(_DWORD *)(a3 + 4LL * v145);
                *(_QWORD *)(a2 + 8LL * v146) = *(_QWORD *)(a2 + 8LL * v145);
                *(_DWORD *)(a3 + 4LL * v146) = v147;
                v148 = v145 + 1;
                v149 = v146 + 1;
                if ( v186 > v145 + 1 )
                {
                  v150 = *(_QWORD *)(a2 + 8LL * v148);
                  v151 = *(_DWORD *)(a3 + 4LL * v148);
                  *(_QWORD *)(a2 + 8LL * v149) = v150;
                  *(_DWORD *)(a3 + 4LL * v149) = v151;
                  v152 = v145 + 2;
                  v153 = v146 + 2;
                  if ( v186 > v145 + 2 )
                  {
                    v154 = v145 + 3;
                    v155 = *(_QWORD *)(a2 + 8LL * v152);
                    v156 = *(_DWORD *)(a3 + 4LL * v152);
                    v157 = v146 + 3;
                    *(_QWORD *)(a2 + 8LL * v153) = v155;
                    *(_DWORD *)(a3 + 4LL * v153) = v156;
                    if ( v186 > v154 )
                    {
                      v158 = *(_DWORD *)(a3 + 4LL * v154);
                      *(_QWORD *)(a2 + 8LL * v157) = *(_QWORD *)(a2 + 8LL * v154);
                      *(_DWORD *)(a3 + 4LL * v157) = v158;
                    }
                  }
                }
              }
            }
            else
            {
              v159 = a2 + v127;
              v160 = a3 + v126;
              v161 = 0;
              do
              {
                v162 = *(_DWORD *)(v160 + v161);
                *(_QWORD *)(v184 + 2 * v161) = *(_QWORD *)(v159 + 2 * v161);
                v128[v161 / 4] = v162;
                v161 += 4LL;
              }
              while ( v161 != 4LL * (v122 - 1) + 4 );
            }
            v119 += v122;
          }
          v118 = *(_DWORD *)(a5 + 8 * v120 + 4);
        }
        while ( a6 != v118 );
        v11 = *v181;
        v19 = *v188 + *v189;
        v13 = *v180;
        v20 = v11 + v19 + 1;
      }
    }
    v21 = a3;
    v22 = a2;
    v23 = v13;
    v177 = a6;
    v168 = a5;
    v183 = a1;
    memcpy((void *)(v21 + 4LL * v19), (const void *)(v21 + 4LL * v13), 4 * v11);
    memcpy((void *)(v22 + 8LL * v19), (const void *)(v22 + 8 * v23), 8LL * *v181);
    *v180 = v19;
    v24 = *v174;
    v25 = v174[1];
    if ( *v174 >= 0 )
      *(_DWORD *)(a5 + 8LL * v24 + 4) = v25;
    if ( (int)v25 >= 0 )
      *(_DWORD *)(a5 + 8 * v25) = v24;
    v26 = a5 + 8LL * v187;
    v174[1] = -66666666;
    v27 = *(_DWORD *)(v26 + 4);
    *(_DWORD *)(v26 + 4) = a7;
    *v174 = v187;
    if ( v27 >= 0 )
      *(_DWORD *)(a5 + 8LL * v27) = a7;
    v174[1] = v27;
    if ( v182 > v20 )
      return 0;
    for ( j = v177; *(_DWORD *)(a5 + 8LL * j) != -66666666; j = *(_DWORD *)(a5 + 8LL * j) )
      ;
    if ( v177 != j )
    {
      v30 = j;
      v31 = 0;
      while ( 1 )
      {
        v32 = (signed int *)(v183 + 4 * v30);
        v33 = *(_DWORD *)(a4 + 4 * v30);
        v34 = *v32;
        *v32 = v31;
        v175 = v34 + v33;
        if ( v34 < (int)(v34 + v33) )
        {
          v35 = v34;
          v36 = 4LL * v34;
          v37 = 4LL * v31;
          v38 = 8LL * v34;
          v39 = (_DWORD *)(v21 + v37);
          v170 = 8LL * v31;
          v172 = v22 + v170;
          if ( v33 > 0xC
            && (v38 >= v170 + 32 || v170 >= v38 + 32)
            && (v36 >= v37 + 16 || v37 >= v36 + 16)
            && ((unsigned __int64)v39 >= v22 + 8 * (v31 + (unsigned __int64)v33)
             || v172 >= v21 + 4 * (v31 + (unsigned __int64)v33)) )
          {
            v40 = v31;
            v41 = ((unsigned __int64)(v22 + v38) >> 3) & 1;
            if ( v41 )
            {
              v42 = *(_DWORD *)(v21 + 4LL * v34);
              v43 = *(_QWORD *)(v22 + 8LL * v34);
              v40 = v31 + 1;
              ++v34;
              *(_QWORD *)(v22 + 8LL * v31) = v43;
              *v39 = v42;
            }
            v44 = v33 - v41;
            v45 = v41 + v35;
            v46 = v22 + 8 * v45;
            v47 = v21 + 4 * v45;
            v48 = (v33 - v41) >> 2;
            v49 = v170 + 8LL * v41;
            v50 = v37 + 4LL * v41;
            v51 = 0;
            v52 = 0;
            v53 = v22 + v49;
            v54 = v21 + v50;
            do
            {
              ++v52;
              v55 = *(_OWORD *)(v46 + 2 * v51);
              *(_OWORD *)(v53 + 2 * v51 + 16) = *(_OWORD *)(v46 + 2 * v51 + 16);
              *(_OWORD *)(v53 + 2 * v51) = v55;
              *(__m128i *)(v54 + v51) = _mm_loadu_si128((const __m128i *)(v47 + v51));
              v51 += 16;
            }
            while ( v48 > v52 );
            v56 = (v44 & 0xFFFFFFFC) + v34;
            v57 = (v44 & 0xFFFFFFFC) + v40;
            if ( v44 != (v44 & 0xFFFFFFFC) )
            {
              v58 = *(_DWORD *)(v21 + 4LL * v56);
              *(_QWORD *)(v22 + 8LL * v57) = *(_QWORD *)(v22 + 8LL * v56);
              *(_DWORD *)(v21 + 4LL * v57) = v58;
              v59 = v56 + 1;
              v60 = v57 + 1;
              if ( v175 > v56 + 1 )
              {
                v61 = *(_QWORD *)(v22 + 8LL * v59);
                v62 = *(_DWORD *)(v21 + 4LL * v59);
                *(_QWORD *)(v22 + 8LL * v60) = v61;
                *(_DWORD *)(v21 + 4LL * v60) = v62;
                v63 = v56 + 2;
                v64 = v57 + 2;
                if ( v175 > v56 + 2 )
                {
                  v65 = v56 + 3;
                  v66 = *(_QWORD *)(v22 + 8LL * v63);
                  v67 = *(_DWORD *)(v21 + 4LL * v63);
                  v68 = v57 + 3;
                  *(_QWORD *)(v22 + 8LL * v64) = v66;
                  *(_DWORD *)(v21 + 4LL * v64) = v67;
                  if ( v175 > v65 )
                  {
                    v69 = *(_DWORD *)(v21 + 4LL * v65);
                    *(_QWORD *)(v22 + 8LL * v68) = *(_QWORD *)(v22 + 8LL * v65);
                    *(_DWORD *)(v21 + 4LL * v68) = v69;
                  }
                }
              }
            }
          }
          else
          {
            v113 = v22 + v38;
            v114 = v21 + v36;
            v115 = 0;
            do
            {
              v116 = *(_DWORD *)(v114 + v115);
              *(_QWORD *)(v172 + 2 * v115) = *(_QWORD *)(v113 + 2 * v115);
              v39[v115 / 4] = v116;
              v115 += 4LL;
            }
            while ( v115 != 4LL * (v33 - 1) + 4 );
          }
          v31 += v33;
        }
        v70 = *(_DWORD *)(v168 + 8 * v30 + 4);
        if ( v177 == v70 )
          break;
        v30 = v70;
      }
    }
    return v182 < *v181 + *v180;
  }
}

