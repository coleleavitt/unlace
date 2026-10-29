__int64 *__fastcall sub_8B8D40(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rdx
  unsigned int *v6; // rbx
  __int64 v7; // rdx
  int *v8; // rdx
  __int64 v9; // rax
  void *v10; // rdi
  __int64 v11; // rdx
  unsigned int *v12; // rdx
  unsigned int v13; // ebx
  unsigned int *v14; // r13
  __int64 v15; // r15
  unsigned int v16; // edx
  unsigned int j; // ebx
  void *v18; // rbp
  int v19; // eax
  void *v20; // rdi
  void *v21; // rdi
  void *v22; // rdi
  void *v23; // rdi
  __int32 v24; // eax
  void *v25; // rdi
  void *v26; // rbp
  void *v27; // rdi
  __int64 v28; // rax
  _QWORD *v29; // rbx
  void *v30; // rbp
  int v31; // eax
  __int64 v32; // rax
  __int64 v33; // rax
  unsigned int v34; // ebx
  __int64 v35; // r13
  __int64 v36; // r15
  unsigned int v37; // ebx
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rax
  int v41; // eax
  unsigned int v42; // ebx
  __int64 v43; // rdx
  __int64 v44; // rax
  __int64 v45; // rbx
  __int64 v46; // r15
  void *v47; // rbp
  __int64 v48; // rsi
  __int32 v49; // edx
  __int64 v50; // rdx
  char v51; // cl
  __int64 v52; // rdx
  unsigned int v53; // ebp
  size_t v54; // rdi
  __int64 v55; // r8
  __int64 v56; // r13
  __int64 v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rsi
  __int64 k; // rax
  int v61; // ecx
  char v62; // di
  __int64 v63; // rcx
  char v64; // di
  __int64 v65; // rcx
  __int64 v66; // rax
  __int64 v67; // rbx
  __int64 v68; // rbp
  __int64 v69; // r15
  void *v70; // r13
  __int64 v71; // rsi
  __int64 v72; // rbx
  _QWORD *v73; // rax
  __int64 v74; // rdi
  __int64 v75; // rdx
  unsigned int v76; // esi
  unsigned int *v77; // rcx
  unsigned int v78; // eax
  __int64 v79; // rcx
  __int64 v80; // rax
  unsigned int v81; // esi
  unsigned int v82; // r10d
  unsigned int v83; // r11d
  unsigned int v84; // r8d
  unsigned int v85; // edx
  int v86; // ecx
  unsigned int *v87; // rax
  unsigned int *v88; // r8
  __int64 v89; // r13
  __int64 v90; // rax
  __int64 v91; // r13
  __int64 v92; // rcx
  __int64 v93; // r15
  __int64 v94; // rbx
  __int64 v95; // rdx
  int v96; // r12d
  __int64 v97; // r14
  __int64 v98; // r12
  __int64 v99; // r13
  __int64 v100; // rdi
  __int64 v101; // rax
  __int64 v102; // r12
  int v103; // eax
  unsigned int v104; // ebp
  _QWORD *v105; // rax
  __m128i v106; // xmm0
  _QWORD *v107; // r13
  __int64 v108; // rbp
  __int64 v109; // r14
  _QWORD *v110; // rax
  unsigned int v111; // edx
  __int64 v112; // rcx
  int v113; // edx
  __int64 *v114; // rcx
  __int64 v115; // rbp
  __int64 *result; // rax
  __int64 v117; // rax
  __int64 v118; // r12
  __int64 v119; // rdi
  __int64 v120; // rax
  __int64 v121; // rbp
  __int64 v122; // r12
  __int64 v123; // rdi
  bool v124; // zf
  unsigned int v125; // r13d
  void *v126; // r15
  unsigned int v127; // eax
  __int64 v128; // rax
  __int8 v129; // cl
  char v130; // dl
  char v131; // cl
  __int64 v132; // rdx
  __int64 v133; // rdx
  __int64 v134; // rax
  unsigned int v135; // ebp
  unsigned int v136; // ecx
  unsigned int *v137; // rdx
  __int64 v138; // rcx
  char **v139; // rbx
  __int64 v140; // rdx
  _QWORD *v141; // rax
  char **exception; // rbx
  __int64 v143; // rdx
  char **v144; // r12
  __int64 v145; // rdx
  unsigned int *v146; // [rsp+0h] [rbp-1B8h]
  unsigned int v147; // [rsp+0h] [rbp-1B8h]
  _QWORD *v148; // [rsp+0h] [rbp-1B8h]
  unsigned int v149; // [rsp+8h] [rbp-1B0h]
  unsigned int v150; // [rsp+8h] [rbp-1B0h]
  _DWORD *v151; // [rsp+8h] [rbp-1B0h]
  int v152; // [rsp+10h] [rbp-1A8h]
  __int64 v153; // [rsp+10h] [rbp-1A8h]
  __int64 v154; // [rsp+18h] [rbp-1A0h]
  unsigned int v155; // [rsp+24h] [rbp-194h]
  unsigned int *i; // [rsp+28h] [rbp-190h]
  __int64 v157; // [rsp+30h] [rbp-188h]
  void *v158; // [rsp+38h] [rbp-180h]
  void *v159; // [rsp+38h] [rbp-180h]
  void *v160; // [rsp+40h] [rbp-178h]
  void *v161; // [rsp+40h] [rbp-178h]
  void *v162; // [rsp+40h] [rbp-178h]
  void *v163; // [rsp+40h] [rbp-178h]
  unsigned int *v164; // [rsp+58h] [rbp-160h]
  int *v165; // [rsp+70h] [rbp-148h]
  __int64 v166; // [rsp+80h] [rbp-138h]
  unsigned int v167; // [rsp+88h] [rbp-130h]
  unsigned int v168; // [rsp+8Ch] [rbp-12Ch]
  unsigned int v169; // [rsp+ACh] [rbp-10Ch] BYREF
  unsigned int *v170; // [rsp+B0h] [rbp-108h] BYREF
  unsigned int *v171; // [rsp+B8h] [rbp-100h] BYREF
  __int64 v172; // [rsp+C0h] [rbp-F8h] BYREF
  __int64 v173; // [rsp+C8h] [rbp-F0h]
  __int64 v174; // [rsp+D0h] [rbp-E8h] BYREF
  __int64 v175; // [rsp+D8h] [rbp-E0h]
  __int64 v176[4]; // [rsp+E0h] [rbp-D8h] BYREF
  __int64 v177[2]; // [rsp+100h] [rbp-B8h] BYREF
  int v178; // [rsp+110h] [rbp-A8h] BYREF
  char v179; // [rsp+114h] [rbp-A4h]
  __int64 v180; // [rsp+118h] [rbp-A0h]
  __m128i v181; // [rsp+120h] [rbp-98h] BYREF
  int v182; // [rsp+130h] [rbp-88h] BYREF
  char v183; // [rsp+134h] [rbp-84h]
  __int64 v184; // [rsp+138h] [rbp-80h]
  __m128i v185; // [rsp+140h] [rbp-78h] BYREF
  __int64 v186; // [rsp+150h] [rbp-68h] BYREF
  __int64 v187; // [rsp+158h] [rbp-60h]
  __int64 v188; // [rsp+160h] [rbp-58h]
  int v189; // [rsp+168h] [rbp-50h]
  __int64 v190[9]; // [rsp+170h] [rbp-48h] BYREF

  v2 = *(_QWORD *)(a1 + 776);
  if ( v2 )
    *(_DWORD *)(v2 - 4) = 0;
  v3 = *(unsigned int *)(a1 + 340);
  v172 = 0;
  ++dword_1C7EC34;
  v168 = v3;
  v173 = 0;
  v4 = 7 * v3;
  v5 = *(_QWORD *)(a1 + 248);
  v174 = 1;
  v175 = 0;
  v6 = (unsigned int *)(v5 + 8 * v4);
  sub_182CBA0(qword_1C7F2C0, &v174);
  BYTE4(v174) &= ~1u;
  v7 = *v6;
  LODWORD(v174) = 1;
  v8 = (int *)(*(_QWORD *)(a1 + 280) + 32 * v7);
  v176[0] = 0;
  v176[1] = 0;
  v176[2] = 1;
  v176[3] = 0;
  sub_27B950((__int64)qword_1C7F2C0, (__int64)v176, v8);
  v146 = nullptr;
  v164 = nullptr;
  v155 = v168;
  v157 = 0;
  do
  {
    if ( !v164 || (v9 = *(v164 - 1), (_DWORD)v9 == *(v164 - 2)) )
    {
      v170 = v164;
      sub_313C10(&v170);
      v164 = v170;
      v9 = *(v170 - 1);
    }
    v10 = qword_1C7F2C0;
    v164[v9] = v155;
    v11 = *(_QWORD *)(a1 + 248);
    ++*(v164 - 1);
    v12 = (unsigned int *)(v11 + 56LL * v155);
    v13 = *v12;
    v167 = *v12;
    sub_2FC4A0((__int64)v10, (__int64)&v172, (__int64)(v12 + 2), (__int64)&v172);
    v166 = v13;
    v14 = *(unsigned int **)(*(_QWORD *)(a1 + 256) + 8LL * v13);
    if ( v14 )
    {
      for ( i = &v14[*(v14 - 1)]; i != v14; ++v14 )
      {
        v169 = *v14;
        v15 = *(_QWORD *)(a1 + 248) + 56LL * v169;
        if ( v169 != v155 && *(_BYTE *)(v15 + 48) && v146 )
        {
          v16 = *(v146 - 1);
          v165 = (int *)(v15 + 8);
          v152 = *(_DWORD *)(v15 + 4);
          for ( j = 0; j < v16; ++j )
          {
            if ( v152 == v146[j] )
            {
              v185 = 0u;
              v18 = qword_1C7F2C0;
              v186 = 1;
              v154 = v157 + 32LL * j;
              v187 = 0;
              if ( (*(_BYTE *)(v15 + 12) & 1) != 0 )
                sub_182C690(qword_1C7F2C0, &v185, v165);
              else
                v185.m128i_i32[0] = *(_DWORD *)(v15 + 8);
              if ( (*(_BYTE *)(v15 + 28) & 1) != 0 )
              {
                sub_182C690(v18, &v186, v15 + 24);
              }
              else
              {
                v19 = *(_DWORD *)(v15 + 24);
                BYTE4(v186) &= ~1u;
                LODWORD(v186) = v19;
              }
              v20 = qword_1C7F2C0;
              if ( (v186 & 0x100000000LL) != 0 || (_DWORD)v186 != 1 || (v174 & 0x100000000LL) != 0 || (_DWORD)v174 != 1 )
              {
                sub_1852000(qword_1C7F2C0, &v185, &v172);
              }
              else
              {
                sub_1832A70(qword_1C7F2C0, &v185, &v172);
                sub_182CBA0(v20, &v186);
                BYTE4(v186) &= ~1u;
                LODWORD(v186) = 1;
              }
              v181.m128i_i8[4] &= 0xFCu;
              v21 = qword_1C7F2C0;
              v183 &= 0xFCu;
              v181.m128i_i32[0] = 0;
              v181.m128i_i64[1] = 0;
              v182 = 1;
              v184 = 0;
              if ( (v185.m128i_i8[4] & 1) != 0 )
                sub_182C690(qword_1C7F2C0, &v181, &v185);
              else
                v181.m128i_i32[0] = v185.m128i_i32[0];
              if ( (v186 & 0x100000000LL) != 0 )
              {
                sub_182C690(v21, &v182, &v186);
              }
              else
              {
                v183 &= ~1u;
                v182 = v186;
              }
              v158 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, &v185);
              sub_182CBA0(v158, &v186);
              v22 = qword_1C7F2C0;
              v185 = 0u;
              v186 = 1;
              v187 = 0;
              if ( (v181.m128i_i8[4] & 1) != 0 )
                sub_182C690(qword_1C7F2C0, &v185, &v181);
              else
                v185.m128i_i32[0] = v181.m128i_i32[0];
              if ( (v183 & 1) != 0 )
              {
                sub_182C690(v22, &v186, &v182);
              }
              else
              {
                BYTE4(v186) &= ~1u;
                LODWORD(v186) = v182;
              }
              v23 = qword_1C7F2C0;
              v24 = *(_DWORD *)v154;
              if ( *(_DWORD *)v154 )
              {
                if ( v185.m128i_i32[0] )
                {
                  if ( (v186 & 0x100000000LL) != 0
                    || (_DWORD)v186 != 1
                    || (*(_BYTE *)(v154 + 20) & 1) != 0
                    || *(_DWORD *)(v154 + 16) != 1 )
                  {
                    sub_1851D20(qword_1C7F2C0, &v185, v154, &v185);
                  }
                  else
                  {
                    v162 = qword_1C7F2C0;
                    sub_1831A80(qword_1C7F2C0, &v185, v154, &v185);
                    sub_182CBA0(v162, &v186);
                    BYTE4(v186) &= ~1u;
                    LODWORD(v186) = 1;
                  }
                }
                else
                {
                  if ( (*(_BYTE *)(v154 + 4) & 1) != 0 )
                  {
                    v163 = qword_1C7F2C0;
                    sub_182C690(qword_1C7F2C0, &v185, v154);
                    v23 = v163;
                  }
                  else
                  {
                    v185.m128i_i8[4] &= ~1u;
                    v185.m128i_i32[0] = v24;
                  }
                  if ( (*(_BYTE *)(v154 + 20) & 1) != 0 )
                  {
                    sub_182C690(v23, &v186, v154 + 16);
                  }
                  else
                  {
                    v41 = *(_DWORD *)(v154 + 16);
                    BYTE4(v186) &= ~1u;
                    LODWORD(v186) = v41;
                  }
                }
              }
              else
              {
                if ( (v185.m128i_i8[4] & 1) != 0 )
                {
                  v161 = qword_1C7F2C0;
                  sub_182C690(qword_1C7F2C0, &v185, &v185);
                  v23 = v161;
                }
                else
                {
                  v185.m128i_i8[4] &= ~1u;
                }
                if ( (v186 & 0x100000000LL) != 0 )
                  sub_182C690(v23, &v186, &v186);
                else
                  BYTE4(v186) &= ~1u;
              }
              BYTE4(v177[0]) &= 0xFCu;
              v25 = qword_1C7F2C0;
              v179 &= 0xFCu;
              LODWORD(v177[0]) = 0;
              v177[1] = 0;
              v178 = 1;
              v180 = 0;
              if ( (v185.m128i_i8[4] & 1) != 0 )
                sub_182C690(qword_1C7F2C0, v177, &v185);
              else
                LODWORD(v177[0]) = v185.m128i_i32[0];
              if ( (v186 & 0x100000000LL) != 0 )
              {
                sub_182C690(v25, &v178, &v186);
              }
              else
              {
                v179 &= ~1u;
                v178 = v186;
              }
              v160 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, &v185);
              sub_182CBA0(v160, &v186);
              v159 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, &v181);
              sub_182CBA0(v159, &v182);
              if ( SLODWORD(v177[0]) >= 0 )
              {
                sub_27B340((__int64)&v185, (__int64)v176, (int *)v177);
                v27 = qword_1C7F2C0;
                if ( v185.m128i_i32[0] < 0 )
                {
                  sub_182CBA0(qword_1C7F2C0, &v185);
                  sub_182CBA0(v27, &v186);
                  sub_2FC4A0((__int64)qword_1C7F2C0, (__int64)v176, (__int64)v177, (__int64)v176);
                  v42 = j + 1;
                  *(v146 - 1) = v42;
                  if ( v157 )
                  {
                    v43 = 32LL * v42;
                    v44 = 32LL * *(unsigned int *)(v157 - 4);
                    if ( v43 != v44 )
                    {
                      v149 = v42;
                      v45 = v157 + v43;
                      v46 = v44 + v157;
                      do
                      {
                        v47 = qword_1C7F2C0;
                        sub_182CBA0(qword_1C7F2C0, v45);
                        v48 = v45 + 16;
                        v45 += 32;
                        sub_182CBA0(v47, v48);
                      }
                      while ( v46 != v45 );
                      v42 = v149;
                    }
                    *(_DWORD *)(v157 - 4) = v42;
                  }
                  if ( v164 )
                    *(v164 - 1) = v42;
                  v170 = v164;
                  sub_893BD0(&v170, &v169);
                  v164 = v170;
                  sub_27B340((__int64)&v185, v154, v165);
                  v49 = v185.m128i_i32[0];
                  v185.m128i_i32[0] = v172;
                  LODWORD(v172) = v49;
                  v50 = v185.m128i_i64[1];
                  v185.m128i_i64[1] = v173;
                  v173 = v50;
                  v51 = v185.m128i_i8[4] & 1;
                  LOBYTE(v50) = BYTE4(v172) & 0xFC | v185.m128i_i8[4] & 2;
                  v185.m128i_i8[4] = BYTE4(v172) & 1 | v185.m128i_i8[4] & 0xFC | BYTE4(v172) & 2;
                  BYTE4(v172) = v51 | v50;
                  LODWORD(v50) = v186;
                  LODWORD(v186) = v174;
                  LODWORD(v174) = v50;
                  v52 = v187;
                  v187 = v175;
                  v175 = v52;
                  LOBYTE(v52) = BYTE4(v186) & 1 | BYTE4(v174) & 0xFC | BYTE4(v186) & 2;
                  BYTE4(v186) = BYTE4(v174) & 1 | BYTE4(v186) & 0xFC | BYTE4(v174) & 2;
                  BYTE4(v174) = v52;
                  sub_25A130(v185.m128i_i8);
                  sub_25A130((char *)v177);
                  break;
                }
                sub_182CBA0(qword_1C7F2C0, &v185);
                sub_182CBA0(v27, &v186);
              }
              v26 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v177);
              sub_182CBA0(v26, &v178);
              v16 = *(v146 - 1);
            }
          }
        }
      }
    }
    if ( v157 )
    {
      v28 = *(unsigned int *)(v157 - 4);
      if ( (_DWORD)v28 == *(_DWORD *)(v157 - 8) )
      {
        v53 = (unsigned int)(3 * v28 + 1) >> 1;
        v54 = 32 * v53 + 8;
        if ( 32 * (int)v28 + 8 >= (unsigned int)v54 || (unsigned int)v28 >= v53 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_12D192(v185.m128i_i64, "Overflow encountered when expanding vector", v143);
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, &v185);
          sub_233E40((__int64)&v185);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v55 = sub_186B270(v54);
        v56 = v55 + 8;
        v57 = *(unsigned int *)(v157 - 4);
        v58 = v55 + 8;
        *(_DWORD *)(v55 + 4) = v57;
        v59 = v157 + 32 * v57;
        for ( k = v157; k != v59; *(_QWORD *)(v58 - 8) = v65 )
        {
          v61 = *(_DWORD *)k;
          v62 = *(_BYTE *)(k + 4);
          k += 32;
          v58 += 32;
          *(_DWORD *)(v58 - 32) = v61;
          *(_BYTE *)(v58 - 28) = v62 & 3 | *(_BYTE *)(v58 - 28) & 0xFC;
          v63 = *(_QWORD *)(k - 24);
          *(_QWORD *)(k - 24) = 0;
          *(_QWORD *)(v58 - 24) = v63;
          v64 = *(_BYTE *)(k - 12);
          *(_DWORD *)(v58 - 16) = *(_DWORD *)(k - 16);
          *(_BYTE *)(v58 - 12) = v64 & 3 | *(_BYTE *)(v58 - 12) & 0xFC;
          v65 = *(_QWORD *)(k - 8);
          *(_QWORD *)(k - 8) = 0;
        }
        v66 = *(unsigned int *)(v157 - 4);
        if ( (_DWORD)v66 )
        {
          v153 = v55 + 8;
          v150 = v53;
          v67 = v157 + 32 * v66;
          v68 = v157;
          v69 = v55;
          do
          {
            v70 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, v68);
            v71 = v68 + 16;
            v68 += 32;
            sub_182CBA0(v70, v71);
          }
          while ( v68 != v67 );
          v53 = v150;
          v56 = v153;
          v55 = v69;
        }
        v151 = (_DWORD *)v55;
        sub_186B220((void *)(v157 - 8));
        v157 = v56;
        v72 = (unsigned int)v151[1];
        *v151 = v53;
        v29 = (_QWORD *)(v56 + 32 * v72);
      }
      else
      {
        v29 = (_QWORD *)(32 * v28 + v157);
      }
    }
    else
    {
      v73 = (_QWORD *)sub_186B270(0x48u);
      *v73 = 2;
      v157 = (__int64)(v73 + 1);
      v29 = v73 + 1;
    }
    *v29 = 0;
    v30 = qword_1C7F2C0;
    v29[1] = 0;
    v29[2] = 1;
    v29[3] = 0;
    if ( (v172 & 0x100000000LL) != 0 )
      sub_182C690(v30, v29, &v172);
    else
      *(_DWORD *)v29 = v172;
    if ( (v174 & 0x100000000LL) != 0 )
    {
      sub_182C690(v30, v29 + 2, &v174);
    }
    else
    {
      v31 = v174;
      *((_BYTE *)v29 + 20) &= ~1u;
      *((_DWORD *)v29 + 4) = v31;
    }
    ++*(_DWORD *)(v157 - 4);
    if ( !v146 || (v32 = *(v146 - 1), (_DWORD)v32 == *(v146 - 2)) )
    {
      v171 = v146;
      sub_313C10(&v171);
      v146 = v171;
      v32 = *(v171 - 1);
    }
    v146[v32] = v167;
    v33 = *(_QWORD *)(a1 + 296);
    ++*(v146 - 1);
    v155 = *(_DWORD *)(v33 + 4 * v166);
  }
  while ( v168 != v155 );
  if ( !v164 )
  {
    v185 = 0u;
    v186 = 1;
    v187 = 0;
    goto LABEL_186;
  }
  v34 = *(v164 - 1);
  v185 = 0u;
  v186 = 1;
  v187 = 0;
  if ( !v34 )
    goto LABEL_186;
  v35 = v34;
  v36 = 0;
  v37 = v34 - 1;
  do
  {
    v38 = *(_QWORD *)(a1 + 248);
    v39 = v38 + 56LL * v164[v36];
    v40 = (unsigned int)(v36 - 1);
    if ( !v36 )
      v40 = v37;
    if ( *(_DWORD *)(v39 + 4) != *(_DWORD *)(v38 + 56LL * v164[v40]) )
      goto LABEL_186;
    sub_2FC4A0((__int64)qword_1C7F2C0, (__int64)&v185, v39 + 8, (__int64)&v185);
    ++v36;
  }
  while ( v36 != v35 );
  if ( v185.m128i_i32[0] >= 0 )
  {
LABEL_186:
    sub_25A130(v185.m128i_i8);
    v139 = (char **)__cxa_allocate_exception(0x28u);
    sub_12D192(v185.m128i_i64, "edges are not inconsistent", v140);
    *v139 = (char *)off_1C63128;
    sub_2333C0(v139 + 1, &v185);
    sub_233E40((__int64)&v185);
    __cxa_throw(v139, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  sub_25A130(v185.m128i_i8);
  if ( *(v164 - 1) )
  {
    v74 = *(_QWORD *)(a1 + 392);
    v75 = 0;
    v76 = 0;
    do
    {
      v77 = (unsigned int *)(v74 + 4LL * v164[v75]);
      v78 = *v77 + 1;
      *v77 = v78;
      v79 = *(v164 - 1);
      if ( v76 < v78 )
        v76 = v78;
      ++v75;
    }
    while ( (unsigned int)v75 < (unsigned int)v79 );
    if ( (unsigned int)v79 > 5 && v76 > 0x14 )
    {
      v80 = 0;
      v81 = 0;
      v82 = 0;
      v83 = -1;
      v84 = -1;
      do
      {
        v85 = *(_DWORD *)(v74 + 4LL * v164[v80]);
        if ( v84 < v85 )
        {
          if ( v85 < v83 )
          {
            v81 = v80;
            v83 = *(_DWORD *)(v74 + 4LL * v164[v80]);
          }
        }
        else
        {
          v81 = v82;
          v83 = v84;
          v82 = v80;
          v84 = *(_DWORD *)(v74 + 4LL * v164[v80]);
        }
        ++v80;
      }
      while ( v79 != v80 );
      v86 = v82 + 1 - v81;
      v87 = &v164[v82];
      v88 = &v164[v81];
      if ( v81 >= v82 )
      {
        v87 = &v164[v81];
        v88 = &v164[v82];
        v86 = v81 + 1 - v82;
      }
      sub_8B6E30(
        *(_QWORD *)(a1 + 784),
        *(_DWORD *)(*(_QWORD *)(a1 + 248) + 56LL * *v88 + 4),
        *(unsigned int *)(*(_QWORD *)(a1 + 248) + 56LL * *v87),
        v86,
        v88);
      LODWORD(v79) = *(v164 - 1);
    }
    if ( (_DWORD)v79 )
    {
      v89 = 0;
      do
      {
        v90 = *(_QWORD *)(a1 + 248) + 56LL * v164[v89];
        if ( *(_DWORD *)(v90 + 44) != -2 )
        {
          sub_893780((_QWORD *)(a1 + 776), (unsigned int *)(v90 + 44));
          LODWORD(v79) = *(v164 - 1);
        }
        ++v89;
      }
      while ( (unsigned int)v89 < (unsigned int)v79 );
    }
  }
  sub_25A130((char *)v176);
  sub_25A130((char *)&v172);
  sub_186B220(v146 - 2);
  sub_186B220(v164 - 2);
  v177[0] = v157;
  sub_27FC20(v177);
  sub_8A0120(a1);
  v91 = *(unsigned int *)(*(_QWORD *)(a1 + 24) + 712LL);
  if ( !(_DWORD)v91 )
  {
    v92 = *(_QWORD *)(a1 + 776);
    v93 = *(_QWORD *)(a1 + 16);
    v94 = 0;
    if ( !v92 )
      goto LABEL_179;
    goto LABEL_136;
  }
  sub_180C5A0(&v181, "farkas");
  v185.m128i_i8[8] = 2;
  v176[0] = 0;
  v185.m128i_i64[0] = v181.m128i_i64[0];
  sub_8B4B00(v176);
  v94 = v176[0];
  v124 = v185.m128i_i8[8] == 0;
  *(__m128i *)(v176[0] + 16LL * *(unsigned int *)(v176[0] - 4)) = _mm_load_si128(&v185);
  v185.m128i_i32[0] = 0;
  if ( !v124 )
    v185.m128i_i8[8] = 0;
  ++*(_DWORD *)(v94 - 4);
  v125 = 0;
  sub_15D0DF0(&v185);
  while ( 1 )
  {
    v92 = *(_QWORD *)(a1 + 776);
    v127 = v92 ? *(_DWORD *)(v92 - 4) : 0;
    if ( v127 < v125 )
      break;
    v185 = (__m128i)1uLL;
    v186 = 1;
    v187 = 0;
    sub_182CBA0(qword_1C7F2C0, &v186);
    BYTE4(v186) &= ~1u;
    LODWORD(v186) = 1;
    v128 = sub_186B270(0x20u);
    v129 = v185.m128i_i8[4];
    v181.m128i_i64[0] = v128;
    v181.m128i_i8[8] = 4;
    *(_DWORD *)v128 = v185.m128i_i32[0];
    v130 = v129 & 3 | *(_BYTE *)(v128 + 4) & 0xFC;
    v131 = BYTE4(v186);
    *(_BYTE *)(v128 + 4) = v130;
    v132 = v185.m128i_i64[1];
    v185.m128i_i64[1] = 0;
    *(_QWORD *)(v128 + 8) = v132;
    *(_DWORD *)(v128 + 16) = v186;
    *(_BYTE *)(v128 + 20) = v131 & 3 | *(_BYTE *)(v128 + 20) & 0xFC;
    v133 = v187;
    v187 = 0;
    *(_QWORD *)(v128 + 24) = v133;
    v134 = *(unsigned int *)(v94 - 4);
    if ( (_DWORD)v134 != *(_DWORD *)(v94 - 8) )
    {
      *(__m128i *)(v94 + 16 * v134) = _mm_load_si128(&v181);
LABEL_170:
      v181.m128i_i32[0] = 0;
      v181.m128i_i8[8] = 0;
      goto LABEL_171;
    }
    v176[0] = v94;
    sub_8B4B00(v176);
    v94 = v176[0];
    v124 = v181.m128i_i8[8] == 0;
    *(__m128i *)(v176[0] + 16LL * *(unsigned int *)(v176[0] - 4)) = _mm_load_si128(&v181);
    if ( !v124 )
      goto LABEL_170;
    v181.m128i_i32[0] = 0;
LABEL_171:
    ++*(_DWORD *)(v94 - 4);
    ++v125;
    sub_15D0DF0(&v181);
    v126 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v185);
    sub_182CBA0(v126, &v186);
  }
  v93 = *(_QWORD *)(a1 + 16);
  v91 = *(unsigned int *)(v94 - 4);
  if ( v92 )
  {
LABEL_136:
    v95 = *(unsigned int *)(v92 - 4);
    goto LABEL_137;
  }
LABEL_179:
  v95 = 0;
LABEL_137:
  v96 = *(_DWORD *)(a1 + 8);
  sub_B72D60(&v185, v93, v95, v92, 0, 0);
  v189 = v96;
  v185.m128i_i64[0] = (__int64)qword_1C6E7C8;
  v190[0] = 0;
  if ( (_DWORD)v91 )
  {
    v97 = v94;
    v98 = 16 * v91 + v94;
    v99 = v94;
LABEL_139:
    sub_8B4B00(v190);
    v100 = v190[0];
    v101 = *(unsigned int *)(v190[0] - 4);
    while ( 1 )
    {
      sub_15D0E50(16 * v101 + v100, v99);
      v100 = v190[0];
      v97 += 16;
      v101 = (unsigned int)(*(_DWORD *)(v190[0] - 4) + 1);
      *(_DWORD *)(v190[0] - 4) = v101;
      if ( v97 == v98 )
        break;
      v99 = v97;
      if ( *(_DWORD *)(v100 - 8) == (_DWORD)v101 )
        goto LABEL_139;
    }
  }
  v185.m128i_i64[0] = (__int64)&off_1C57990;
  sub_B73430(&v185, v93);
  v102 = sub_180C100(v93 + 8400, 56);
  *(_BYTE *)(v102 + 8) = v185.m128i_i8[8] & 3 | *(_BYTE *)(v102 + 8) & 0xFC;
  *(_DWORD *)(v102 + 12) = v185.m128i_i32[3];
  *(_QWORD *)(v102 + 16) = v186;
  *(_DWORD *)(v102 + 24) = v187;
  *(_QWORD *)(v102 + 32) = v188;
  *(_QWORD *)v102 = qword_1C6E7C8;
  v103 = v189;
  *(_QWORD *)(v102 + 48) = 0;
  *(_DWORD *)(v102 + 40) = v103;
  if ( v190[0] )
  {
    v104 = *(_DWORD *)(v190[0] - 4);
    v147 = *(_DWORD *)(v190[0] - 8);
    v105 = (_QWORD *)sub_186B270(16LL * v147 + 8);
    v106 = _mm_cvtsi32_si128(v147);
    v107 = v105 + 1;
    v148 = v105 + 1;
    *v105 = _mm_unpacklo_epi32(v106, _mm_cvtsi32_si128(v104)).m128i_u64[0];
    *(_QWORD *)(v102 + 48) = v105 + 1;
    v108 = v190[0];
    if ( !v190[0] || (v109 = v190[0] + 16LL * *(unsigned int *)(v190[0] - 4), v109 == v190[0]) )
    {
      *(_QWORD *)v102 = &off_1C57990;
LABEL_148:
      if ( *((_DWORD *)v148 - 1) )
      {
        v110 = *(_QWORD **)(v93 + 8600);
        if ( v110 )
        {
          v111 = *((_DWORD *)v110 - 1);
          if ( v111 == *((_DWORD *)v110 - 2) )
          {
            v135 = (3 * v111 + 1) >> 1;
            v136 = 8 * v135 + 8;
            if ( 8 * v111 + 8 >= v136 || v111 >= v135 )
            {
              v144 = (char **)__cxa_allocate_exception(0x28u);
              sub_12D192(v181.m128i_i64, "Overflow encountered when expanding vector", v145);
              *v144 = (char *)off_1C63128;
              sub_2333C0(v144 + 1, &v181);
              sub_233E40((__int64)&v181);
              __cxa_throw(v144, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v137 = (unsigned int *)sub_186B300(v110 - 1, v136);
            v110 = v137 + 2;
            v138 = v137[1];
            *(_QWORD *)(v93 + 8600) = v137 + 2;
            *v137 = v135;
            LODWORD(v137) = v138;
            v114 = &v110[v138];
            v113 = (_DWORD)v137 + 1;
          }
          else
          {
            v112 = v111;
            v113 = v111 + 1;
            v114 = &v110[v112];
          }
        }
        else
        {
          v141 = (_QWORD *)sub_186B270(0x18u);
          *v141 = 2;
          v110 = v141 + 1;
          v113 = 1;
          *(_QWORD *)(v93 + 8600) = v110;
          v114 = v110;
        }
        *v114 = v102;
        *((_DWORD *)v110 - 1) = v113;
      }
    }
    else
    {
      do
      {
        sub_15D0E50(v107, v108);
        v108 += 16;
        v107 += 2;
      }
      while ( v109 != v108 );
      v148 = *(_QWORD **)(v102 + 48);
      *(_QWORD *)v102 = &off_1C57990;
      if ( v148 )
        goto LABEL_148;
    }
  }
  else
  {
    *(_QWORD *)v102 = &off_1C57990;
  }
  v181.m128i_i64[0] = v102 | 3;
  sub_8E8670(v93, &v181, 4294967294LL);
  v115 = v190[0];
  result = qword_1C6E7C8;
  v185.m128i_i64[0] = (__int64)qword_1C6E7C8;
  if ( v190[0] )
  {
    v117 = *(unsigned int *)(v190[0] - 4);
    if ( (_DWORD)v117 )
    {
      v118 = v190[0] + 16 * v117;
      do
      {
        v119 = v115;
        v115 += 16;
        sub_15D0DF0(v119);
      }
      while ( v115 != v118 );
      v115 = v190[0];
    }
    result = (__int64 *)sub_186B220((void *)(v115 - 8));
  }
  if ( v94 )
  {
    v120 = *(unsigned int *)(v94 - 4);
    if ( (_DWORD)v120 )
    {
      v121 = v94;
      v122 = v94 + 16 * v120;
      do
      {
        v123 = v121;
        v121 += 16;
        sub_15D0DF0(v123);
      }
      while ( v121 != v122 );
    }
    return (__int64 *)sub_186B220((void *)(v94 - 8));
  }
  return result;
}

