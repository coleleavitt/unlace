__int64 *__fastcall sub_8BE680(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rbx
  unsigned int *v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rax
  int *v7; // rbx
  __int64 v8; // rax
  void *v9; // rdi
  unsigned int *v10; // rbx
  unsigned int v11; // r15d
  unsigned int *v12; // r15
  unsigned __int64 v13; // rbx
  unsigned int v14; // edx
  unsigned int v15; // r13d
  void *v16; // rbp
  int v17; // eax
  void *v18; // rdi
  void *v19; // rdi
  void *v20; // rdi
  void *v21; // rdi
  __int32 v22; // eax
  void *v23; // rdi
  int v24; // eax
  void *v25; // rbp
  unsigned int v26; // r13d
  __int64 v27; // rdx
  __int64 v28; // r14
  __int64 v29; // rax
  __int64 v30; // rbx
  void *v31; // rbp
  __int64 v32; // rsi
  __int32 v33; // edx
  __int64 v34; // rdx
  char v35; // cl
  __int64 v36; // rdx
  char v37; // cl
  __int64 v38; // rax
  _QWORD *v39; // rbx
  void *v40; // rbp
  int v41; // eax
  __int64 v42; // rax
  unsigned int v43; // ebx
  __int64 v44; // r13
  __int64 v45; // r15
  unsigned int v46; // ebx
  int v47; // eax
  __int64 v48; // rdx
  __int64 v49; // rax
  __int64 v50; // r14
  int v51; // eax
  unsigned int v52; // r13d
  size_t v53; // rdi
  unsigned int *v54; // rbp
  _DWORD *v55; // r14
  __int64 v56; // rax
  _DWORD *v57; // rdx
  __int64 v58; // rsi
  __int64 j; // rax
  int v60; // ecx
  char v61; // di
  __int64 v62; // rcx
  char v63; // di
  __int64 v64; // rcx
  __int64 v65; // rax
  __int64 v66; // r15
  __int64 v67; // rbx
  void *v68; // rbp
  __int64 v69; // rsi
  __int64 v70; // rax
  _QWORD *v71; // rax
  char **v72; // rbx
  __int64 v73; // rdx
  __int64 v74; // rdx
  unsigned int v75; // esi
  __int64 v76; // rdi
  unsigned int *v77; // rcx
  unsigned int v78; // eax
  unsigned int v79; // ecx
  __int64 k; // r13
  unsigned __int64 v81; // rax
  __int64 v82; // r13
  __int64 v83; // rcx
  __int64 v84; // r15
  __int64 v85; // rbx
  __int64 v86; // rdx
  int v87; // r12d
  __int64 v88; // r14
  __int64 v89; // r12
  __int64 v90; // r13
  __int64 v91; // rdi
  __int64 v92; // rax
  __int64 v93; // r12
  int v94; // eax
  unsigned int v95; // ebp
  _QWORD *v96; // rax
  __m128i v97; // xmm0
  _QWORD *v98; // r13
  __int64 v99; // rbp
  __int64 v100; // r14
  _QWORD *v101; // rax
  unsigned int v102; // edx
  __int64 v103; // rcx
  int v104; // edx
  __int64 *v105; // rcx
  __int64 v106; // rbp
  __int64 *result; // rax
  __int64 v108; // rax
  __int64 v109; // r12
  __int64 v110; // rdi
  __int64 v111; // rax
  __int64 v112; // rbp
  __int64 v113; // r12
  __int64 v114; // rdi
  bool v115; // zf
  unsigned int v116; // r13d
  void *v117; // r15
  unsigned int v118; // eax
  __int64 v119; // rax
  __int8 v120; // cl
  char v121; // dl
  char v122; // cl
  __int64 v123; // rdx
  __int64 v124; // rdx
  __int64 v125; // rax
  unsigned int v126; // r10d
  __int64 v127; // rsi
  unsigned int v128; // r11d
  unsigned int v129; // r8d
  __int64 v130; // rax
  unsigned int v131; // edx
  unsigned int v132; // ebp
  unsigned int v133; // ecx
  unsigned int *v134; // rdx
  __int64 v135; // rcx
  _QWORD *v136; // rax
  unsigned int v137; // eax
  char **exception; // rbx
  __int64 v139; // rdx
  char **v140; // r12
  __int64 v141; // rdx
  unsigned int *v142; // [rsp+0h] [rbp-1F8h]
  unsigned int v143; // [rsp+0h] [rbp-1F8h]
  _QWORD *v144; // [rsp+0h] [rbp-1F8h]
  __int64 v145; // [rsp+8h] [rbp-1F0h]
  void *v146; // [rsp+8h] [rbp-1F0h]
  unsigned int *v147; // [rsp+8h] [rbp-1F0h]
  int v149; // [rsp+18h] [rbp-1E0h]
  void *v150; // [rsp+18h] [rbp-1E0h]
  unsigned int v151; // [rsp+24h] [rbp-1D4h]
  unsigned int *i; // [rsp+28h] [rbp-1D0h]
  __int64 v153; // [rsp+38h] [rbp-1C0h]
  void *v154; // [rsp+40h] [rbp-1B8h]
  void *v155; // [rsp+40h] [rbp-1B8h]
  void *v156; // [rsp+48h] [rbp-1B0h]
  unsigned int *v157; // [rsp+58h] [rbp-1A0h]
  __int64 v158; // [rsp+78h] [rbp-180h]
  __int64 v159; // [rsp+80h] [rbp-178h]
  unsigned int v160; // [rsp+88h] [rbp-170h]
  unsigned int v161; // [rsp+8Ch] [rbp-16Ch]
  unsigned int v162; // [rsp+ACh] [rbp-14Ch] BYREF
  unsigned int *v163; // [rsp+B0h] [rbp-148h] BYREF
  unsigned int *v164; // [rsp+B8h] [rbp-140h] BYREF
  __int64 v165; // [rsp+C0h] [rbp-138h] BYREF
  __int64 v166; // [rsp+C8h] [rbp-130h]
  __int64 v167; // [rsp+D0h] [rbp-128h] BYREF
  __int64 v168; // [rsp+D8h] [rbp-120h]
  int v169; // [rsp+E0h] [rbp-118h]
  __int64 v170[4]; // [rsp+F0h] [rbp-108h] BYREF
  int v171; // [rsp+110h] [rbp-E8h]
  __int64 v172[2]; // [rsp+120h] [rbp-D8h] BYREF
  int v173; // [rsp+130h] [rbp-C8h] BYREF
  char v174; // [rsp+134h] [rbp-C4h]
  __int64 v175; // [rsp+138h] [rbp-C0h]
  int v176; // [rsp+140h] [rbp-B8h]
  __m128i v177; // [rsp+150h] [rbp-A8h] BYREF
  int v178; // [rsp+160h] [rbp-98h] BYREF
  char v179; // [rsp+164h] [rbp-94h]
  __int64 v180; // [rsp+168h] [rbp-90h]
  int v181; // [rsp+170h] [rbp-88h]
  __m128i v182; // [rsp+180h] [rbp-78h] BYREF
  __int64 v183; // [rsp+190h] [rbp-68h] BYREF
  __int64 v184; // [rsp+198h] [rbp-60h]
  __int64 v185; // [rsp+1A0h] [rbp-58h]
  int v186; // [rsp+1A8h] [rbp-50h]
  __int64 v187[9]; // [rsp+1B0h] [rbp-48h] BYREF

  v1 = *(_QWORD *)(a1 + 784);
  if ( v1 )
    *(_DWORD *)(v1 - 4) = 0;
  v165 = 0;
  ++dword_1C7EC28;
  v2 = *(unsigned int *)(a1 + 348);
  v166 = 0;
  v167 = 1;
  v161 = v2;
  v3 = (unsigned int *)(*(_QWORD *)(a1 + 256) + (v2 << 6));
  v168 = 0;
  sub_182CBA0(qword_1C7F2C0, &v167);
  BYTE4(v167) &= ~1u;
  v4 = *v3;
  LODWORD(v167) = 1;
  v169 = 0;
  v5 = 5 * v4;
  v6 = *(_QWORD *)(a1 + 288);
  v170[0] = 0;
  v170[1] = 0;
  v7 = (int *)(v6 + 8 * v5);
  v170[2] = 1;
  v170[3] = 0;
  sub_27B950((__int64)qword_1C7F2C0, (__int64)v170, v7);
  v142 = nullptr;
  v157 = nullptr;
  v171 = v7[8];
  v153 = 0;
  v151 = v161;
  do
  {
    if ( !v157 || (v8 = *(v157 - 1), (_DWORD)v8 == *(v157 - 2)) )
    {
      v163 = v157;
      sub_313C10(&v163);
      v157 = v163;
      v8 = *(v163 - 1);
    }
    v157[v8] = v151;
    v9 = qword_1C7F2C0;
    ++*(v157 - 1);
    v10 = (unsigned int *)(*(_QWORD *)(a1 + 256) + ((unsigned __int64)v151 << 6));
    v11 = *v10;
    v160 = *v10;
    sub_2FC4A0((__int64)v9, (__int64)&v165, (__int64)(v10 + 2), (__int64)&v165);
    v169 += v10[10];
    v159 = v11;
    v12 = *(unsigned int **)(*(_QWORD *)(a1 + 264) + 8LL * v11);
    if ( v12 )
    {
      for ( i = &v12[*(v12 - 1)]; i != v12; ++v12 )
      {
LABEL_10:
        v162 = *v12;
        v13 = *(_QWORD *)(a1 + 256) + ((unsigned __int64)v162 << 6);
        if ( v162 != v151 && *(_BYTE *)(v13 + 56) && v142 )
        {
          v14 = *(v142 - 1);
          v15 = 0;
          v158 = v13 + 8;
          v149 = *(_DWORD *)(v13 + 4);
          while ( v15 < v14 )
          {
            if ( v149 == v142[v15] )
            {
              v182 = 0u;
              v16 = qword_1C7F2C0;
              v183 = 1;
              v145 = v153 + 40LL * v15;
              v184 = 0;
              if ( (*(_BYTE *)(v13 + 12) & 1) != 0 )
                sub_182C690(qword_1C7F2C0, &v182, v158);
              else
                v182.m128i_i32[0] = *(_DWORD *)(v13 + 8);
              if ( (*(_BYTE *)(v13 + 28) & 1) != 0 )
              {
                sub_182C690(v16, &v183, v13 + 24);
              }
              else
              {
                v17 = *(_DWORD *)(v13 + 24);
                BYTE4(v183) &= ~1u;
                LODWORD(v183) = v17;
              }
              v18 = qword_1C7F2C0;
              LODWORD(v185) = *(_DWORD *)(v13 + 40);
              if ( (v183 & 0x100000000LL) != 0 || (_DWORD)v183 != 1 || (v167 & 0x100000000LL) != 0 || (_DWORD)v167 != 1 )
              {
                sub_1852000(qword_1C7F2C0, &v182, &v165);
              }
              else
              {
                sub_1832A70(qword_1C7F2C0, &v182, &v165);
                sub_182CBA0(v18, &v183);
                BYTE4(v183) &= ~1u;
                LODWORD(v183) = 1;
              }
              v19 = qword_1C7F2C0;
              v177.m128i_i32[0] = 0;
              LODWORD(v185) = v185 - v169;
              v177.m128i_i8[4] &= 0xFCu;
              v179 &= 0xFCu;
              v177.m128i_i64[1] = 0;
              v178 = 1;
              v180 = 0;
              if ( (v182.m128i_i8[4] & 1) != 0 )
                sub_182C690(qword_1C7F2C0, &v177, &v182);
              else
                v177.m128i_i32[0] = v182.m128i_i32[0];
              if ( (v183 & 0x100000000LL) != 0 )
              {
                sub_182C690(v19, &v178, &v183);
              }
              else
              {
                v179 &= ~1u;
                v178 = v183;
              }
              v181 = v185;
              v154 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, &v182);
              sub_182CBA0(v154, &v183);
              v20 = qword_1C7F2C0;
              v182 = 0u;
              v183 = 1;
              v184 = 0;
              if ( (v177.m128i_i8[4] & 1) != 0 )
                sub_182C690(qword_1C7F2C0, &v182, &v177);
              else
                v182.m128i_i32[0] = v177.m128i_i32[0];
              if ( (v179 & 1) != 0 )
              {
                sub_182C690(v20, &v183, &v178);
              }
              else
              {
                BYTE4(v183) &= ~1u;
                LODWORD(v183) = v178;
              }
              v21 = qword_1C7F2C0;
              LODWORD(v185) = v181;
              v22 = *(_DWORD *)v145;
              if ( *(_DWORD *)v145 )
              {
                if ( v182.m128i_i32[0] )
                {
                  if ( (v183 & 0x100000000LL) != 0
                    || (_DWORD)v183 != 1
                    || (*(_BYTE *)(v145 + 20) & 1) != 0
                    || *(_DWORD *)(v145 + 16) != 1 )
                  {
                    sub_1851D20(qword_1C7F2C0, &v182, v145, &v182);
                  }
                  else
                  {
                    sub_1831A80(qword_1C7F2C0, &v182, v145, &v182);
                    sub_182CBA0(v21, &v183);
                    BYTE4(v183) &= ~1u;
                    LODWORD(v183) = 1;
                  }
                }
                else
                {
                  if ( (*(_BYTE *)(v145 + 4) & 1) != 0 )
                  {
                    sub_182C690(qword_1C7F2C0, &v182, v145);
                  }
                  else
                  {
                    v182.m128i_i8[4] &= ~1u;
                    v182.m128i_i32[0] = v22;
                  }
                  if ( (*(_BYTE *)(v145 + 20) & 1) != 0 )
                  {
                    sub_182C690(v21, &v183, v145 + 16);
                  }
                  else
                  {
                    v51 = *(_DWORD *)(v145 + 16);
                    BYTE4(v183) &= ~1u;
                    LODWORD(v183) = v51;
                  }
                }
              }
              else
              {
                if ( (v182.m128i_i8[4] & 1) != 0 )
                  sub_182C690(qword_1C7F2C0, &v182, &v182);
                else
                  v182.m128i_i8[4] &= ~1u;
                if ( (v183 & 0x100000000LL) != 0 )
                  sub_182C690(v21, &v183, &v183);
                else
                  BYTE4(v183) &= ~1u;
              }
              v23 = qword_1C7F2C0;
              LODWORD(v172[0]) = 0;
              BYTE4(v172[0]) &= 0xFCu;
              v24 = *(_DWORD *)(v145 + 32);
              v174 &= 0xFCu;
              LODWORD(v185) = v24 + v185;
              v172[1] = 0;
              v173 = 1;
              v175 = 0;
              if ( (v182.m128i_i8[4] & 1) != 0 )
                sub_182C690(qword_1C7F2C0, v172, &v182);
              else
                LODWORD(v172[0]) = v182.m128i_i32[0];
              if ( (v183 & 0x100000000LL) != 0 )
              {
                sub_182C690(v23, &v173, &v183);
              }
              else
              {
                v174 &= ~1u;
                v173 = v183;
              }
              v176 = v185;
              v156 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, &v182);
              sub_182CBA0(v156, &v183);
              v155 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, &v177);
              sub_182CBA0(v155, &v178);
              if ( SLODWORD(v172[0]) > 0 || !LODWORD(v172[0]) && v176 >= 0 )
              {
                sub_89AA40((__int64)&v182, (__int64)v170, (__int64)v172);
                if ( v182.m128i_i32[0] < 0 || !v182.m128i_i32[0] && (int)v185 < 0 )
                {
                  v150 = qword_1C7F2C0;
                  sub_182CBA0(qword_1C7F2C0, &v182);
                  sub_182CBA0(v150, &v183);
                  sub_2FC4A0((__int64)qword_1C7F2C0, (__int64)v170, (__int64)v172, (__int64)v170);
                  v26 = v15 + 1;
                  v171 += v176;
                  *(v142 - 1) = v26;
                  if ( v153 )
                  {
                    v27 = 40LL * v26;
                    v28 = v153 + v27;
                    v29 = 40LL * *(unsigned int *)(v153 - 4);
                    v30 = v153 + v29;
                    if ( v27 != v29 )
                    {
                      do
                      {
                        v31 = qword_1C7F2C0;
                        sub_182CBA0(qword_1C7F2C0, v28);
                        v32 = v28 + 16;
                        v28 += 40;
                        sub_182CBA0(v31, v32);
                      }
                      while ( v30 != v28 );
                    }
                    *(_DWORD *)(v153 - 4) = v26;
                  }
                  if ( v157 )
                    *(v157 - 1) = v26;
                  v163 = v157;
                  sub_893BD0(&v163, &v162);
                  v157 = v163;
                  sub_89AA40((__int64)&v182, v145, v158);
                  v33 = v182.m128i_i32[0];
                  ++v12;
                  v182.m128i_i32[0] = v165;
                  LODWORD(v165) = v33;
                  v34 = v182.m128i_i64[1];
                  v182.m128i_i64[1] = v166;
                  v166 = v34;
                  v35 = v182.m128i_i8[4] & 1;
                  LOBYTE(v34) = BYTE4(v165) & 0xFC | v182.m128i_i8[4] & 2;
                  v182.m128i_i8[4] = BYTE4(v165) & 1 | v182.m128i_i8[4] & 0xFC | BYTE4(v165) & 2;
                  BYTE4(v165) = v35 | v34;
                  LODWORD(v34) = v183;
                  LODWORD(v183) = v167;
                  LODWORD(v167) = v34;
                  v36 = v184;
                  v184 = v168;
                  v168 = v36;
                  v37 = BYTE4(v183) & 1;
                  LOBYTE(v36) = BYTE4(v167) & 0xFD | BYTE4(v183) & 2;
                  BYTE4(v183) = BYTE4(v167) & 1 | BYTE4(v183) & 0xFC | BYTE4(v167) & 2;
                  BYTE4(v167) = v37 | v36 & 0xFE;
                  v169 = v185;
                  sub_25A130(v182.m128i_i8);
                  sub_25A130((char *)v172);
                  if ( i != v12 )
                    goto LABEL_10;
                  goto LABEL_57;
                }
                v146 = qword_1C7F2C0;
                sub_182CBA0(qword_1C7F2C0, &v182);
                sub_182CBA0(v146, &v183);
              }
              v25 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v172);
              sub_182CBA0(v25, &v173);
              v14 = *(v142 - 1);
            }
            ++v15;
          }
        }
      }
    }
LABEL_57:
    if ( v153 )
    {
      v38 = *(unsigned int *)(v153 - 4);
      if ( (_DWORD)v38 == *(_DWORD *)(v153 - 8) )
      {
        v52 = (unsigned int)(3 * v38 + 1) >> 1;
        v53 = 40 * v52 + 8;
        if ( 40 * (int)v38 + 8 >= (unsigned int)v53 || (unsigned int)v38 >= v52 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_12D192(v182.m128i_i64, "Overflow encountered when expanding vector", v139);
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, &v182);
          sub_233E40((__int64)&v182);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v54 = (unsigned int *)sub_186B270(v53);
        v55 = v54 + 2;
        v56 = *(unsigned int *)(v153 - 4);
        v57 = v54 + 2;
        v54[1] = v56;
        v58 = v153 + 40 * v56;
        for ( j = v153; v58 != j; *(v57 - 2) = *(_DWORD *)(j - 8) )
        {
          v60 = *(_DWORD *)j;
          v61 = *(_BYTE *)(j + 4);
          j += 40;
          v57 += 10;
          *(v57 - 10) = v60;
          *((_BYTE *)v57 - 36) = v61 & 3 | *(_BYTE *)(v57 - 9) & 0xFC;
          v62 = *(_QWORD *)(j - 32);
          *(_QWORD *)(j - 32) = 0;
          *((_QWORD *)v57 - 4) = v62;
          v63 = *(_BYTE *)(j - 20);
          *(v57 - 6) = *(_DWORD *)(j - 24);
          *((_BYTE *)v57 - 20) = v63 & 3 | *(_BYTE *)(v57 - 5) & 0xFC;
          v64 = *(_QWORD *)(j - 16);
          *(_QWORD *)(j - 16) = 0;
          *((_QWORD *)v57 - 2) = v64;
        }
        v65 = *(unsigned int *)(v153 - 4);
        if ( (_DWORD)v65 )
        {
          v66 = v153;
          v147 = v54;
          v67 = v153 + 40 * v65;
          do
          {
            v68 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, v66);
            v69 = v66 + 16;
            v66 += 40;
            sub_182CBA0(v68, v69);
          }
          while ( v67 != v66 );
          v54 = v147;
        }
        sub_186B220((void *)(v153 - 8));
        v70 = v54[1];
        *v54 = v52;
        v153 = (__int64)v55;
        v39 = &v55[10 * v70];
      }
      else
      {
        v39 = (_QWORD *)(v153 + 40 * v38);
      }
    }
    else
    {
      v71 = (_QWORD *)sub_186B270(0x58u);
      *v71 = 2;
      v153 = (__int64)(v71 + 1);
      v39 = v71 + 1;
    }
    *v39 = 0;
    v40 = qword_1C7F2C0;
    v39[1] = 0;
    v39[2] = 1;
    v39[3] = 0;
    if ( (v165 & 0x100000000LL) != 0 )
      sub_182C690(v40, v39, &v165);
    else
      *(_DWORD *)v39 = v165;
    if ( (v167 & 0x100000000LL) != 0 )
    {
      sub_182C690(v40, v39 + 2, &v167);
    }
    else
    {
      v41 = v167;
      *((_BYTE *)v39 + 20) &= ~1u;
      *((_DWORD *)v39 + 4) = v41;
    }
    *((_DWORD *)v39 + 8) = v169;
    ++*(_DWORD *)(v153 - 4);
    if ( !v142 || (v42 = *(v142 - 1), (_DWORD)v42 == *(v142 - 2)) )
    {
      v164 = v142;
      sub_313C10(&v164);
      v142 = v164;
      v42 = *(v164 - 1);
    }
    v142[v42] = v160;
    ++*(v142 - 1);
    v151 = *(_DWORD *)(*(_QWORD *)(a1 + 304) + 4 * v159);
  }
  while ( v161 != v151 );
  if ( !v157 )
  {
    v182 = 0u;
    v183 = 1;
    v184 = 0;
    LODWORD(v185) = 0;
    goto LABEL_116;
  }
  v43 = *(v157 - 1);
  v182 = 0u;
  v183 = 1;
  v184 = 0;
  LODWORD(v185) = 0;
  if ( !v43 )
    goto LABEL_116;
  v44 = v43;
  v45 = 0;
  v46 = v43 - 1;
  do
  {
    v48 = *(_QWORD *)(a1 + 256);
    v49 = (unsigned int)(v45 - 1);
    v50 = v48 + ((unsigned __int64)v157[v45] << 6);
    if ( !v45 )
      v49 = v46;
    if ( *(_DWORD *)(v50 + 4) != *(_DWORD *)(v48 + ((unsigned __int64)v157[v49] << 6)) )
      goto LABEL_116;
    sub_2FC4A0((__int64)qword_1C7F2C0, (__int64)&v182, v50 + 8, (__int64)&v182);
    ++v45;
    v47 = v185 + *(_DWORD *)(v50 + 40);
    LODWORD(v185) = v47;
  }
  while ( v44 != v45 );
  if ( v182.m128i_i32[0] > 0 || !v182.m128i_i32[0] && v47 >= 0 )
  {
LABEL_116:
    sub_25A130(v182.m128i_i8);
    v72 = (char **)__cxa_allocate_exception(0x28u);
    sub_12D192(v182.m128i_i64, "edges are not inconsistent", v73);
    *v72 = (char *)off_1C63128;
    sub_2333C0(v72 + 1, &v182);
    sub_233E40((__int64)&v182);
    __cxa_throw(v72, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  sub_25A130(v182.m128i_i8);
  if ( *(v157 - 1) )
  {
    v74 = 0;
    v75 = 0;
    v76 = *(_QWORD *)(a1 + 400);
    do
    {
      v77 = (unsigned int *)(v76 + 4LL * v157[v74]);
      v78 = *v77 + 1;
      *v77 = v78;
      v79 = *(v157 - 1);
      if ( v75 < v78 )
        v75 = v78;
      ++v74;
    }
    while ( (unsigned int)v74 < v79 );
    if ( v79 > 5 && v75 > 0x14 )
    {
      v126 = 0;
      v127 = 0;
      v128 = -1;
      v129 = -1;
      v130 = 0;
      do
      {
        v131 = *(_DWORD *)(v76 + 4LL * v157[v130]);
        if ( v129 < v131 )
        {
          if ( v131 < v128 )
          {
            v126 = v130;
            v128 = *(_DWORD *)(v76 + 4LL * v157[v130]);
          }
        }
        else
        {
          v126 = v127;
          v128 = v129;
          v127 = (unsigned int)v130;
          v129 = *(_DWORD *)(v76 + 4LL * v157[v130]);
        }
        ++v130;
      }
      while ( (unsigned int)v130 < v79 );
      if ( v126 >= (unsigned int)v127 )
      {
        v137 = v126;
        v126 = v127;
        v127 = v137;
      }
      sub_8B4C90(
        *(_QWORD *)(a1 + 792),
        *(_DWORD *)(*(_QWORD *)(a1 + 256) + ((unsigned __int64)v157[v126] << 6) + 4),
        *(unsigned int *)(*(_QWORD *)(a1 + 256) + ((unsigned __int64)v157[v127] << 6)),
        v127 + 1 - v126,
        &v157[v126]);
      v79 = *(v157 - 1);
    }
    for ( k = 0; (unsigned int)k < v79; ++k )
    {
      v81 = *(_QWORD *)(a1 + 256) + ((unsigned __int64)v157[k] << 6);
      if ( *(_DWORD *)(v81 + 52) != -2 )
      {
        sub_893780((_QWORD *)(a1 + 784), (unsigned int *)(v81 + 52));
        v79 = *(v157 - 1);
      }
    }
  }
  sub_25A130((char *)v170);
  sub_25A130((char *)&v165);
  sub_186B220(v142 - 2);
  sub_186B220(v157 - 2);
  v172[0] = v153;
  sub_8BE5D0(v172);
  sub_8A1290(a1);
  v82 = *(unsigned int *)(*(_QWORD *)(a1 + 24) + 712LL);
  if ( !(_DWORD)v82 )
  {
    v83 = *(_QWORD *)(a1 + 784);
    v84 = *(_QWORD *)(a1 + 16);
    v85 = 0;
    if ( !v83 )
      goto LABEL_174;
    goto LABEL_131;
  }
  sub_180C5A0(&v177, "farkas");
  v182.m128i_i8[8] = 2;
  v170[0] = 0;
  v182.m128i_i64[0] = v177.m128i_i64[0];
  sub_8B4B00(v170);
  v85 = v170[0];
  v115 = v182.m128i_i8[8] == 0;
  *(__m128i *)(v170[0] + 16LL * *(unsigned int *)(v170[0] - 4)) = _mm_load_si128(&v182);
  v182.m128i_i32[0] = 0;
  if ( !v115 )
    v182.m128i_i8[8] = 0;
  ++*(_DWORD *)(v85 - 4);
  v116 = 0;
  sub_15D0DF0(&v182);
  while ( 1 )
  {
    v83 = *(_QWORD *)(a1 + 784);
    v118 = v83 ? *(_DWORD *)(v83 - 4) : 0;
    if ( v118 < v116 )
      break;
    v182 = (__m128i)1uLL;
    v183 = 1;
    v184 = 0;
    sub_182CBA0(qword_1C7F2C0, &v183);
    BYTE4(v183) &= ~1u;
    LODWORD(v183) = 1;
    v119 = sub_186B270(0x20u);
    v120 = v182.m128i_i8[4];
    v177.m128i_i64[0] = v119;
    v177.m128i_i8[8] = 4;
    *(_DWORD *)v119 = v182.m128i_i32[0];
    v121 = v120 & 3 | *(_BYTE *)(v119 + 4) & 0xFC;
    v122 = BYTE4(v183);
    *(_BYTE *)(v119 + 4) = v121;
    v123 = v182.m128i_i64[1];
    v182.m128i_i64[1] = 0;
    *(_QWORD *)(v119 + 8) = v123;
    *(_DWORD *)(v119 + 16) = v183;
    *(_BYTE *)(v119 + 20) = v122 & 3 | *(_BYTE *)(v119 + 20) & 0xFC;
    v124 = v184;
    v184 = 0;
    *(_QWORD *)(v119 + 24) = v124;
    v125 = *(unsigned int *)(v85 - 4);
    if ( (_DWORD)v125 != *(_DWORD *)(v85 - 8) )
    {
      *(__m128i *)(v85 + 16 * v125) = _mm_load_si128(&v177);
LABEL_165:
      v177.m128i_i32[0] = 0;
      v177.m128i_i8[8] = 0;
      goto LABEL_166;
    }
    v170[0] = v85;
    sub_8B4B00(v170);
    v85 = v170[0];
    v115 = v177.m128i_i8[8] == 0;
    *(__m128i *)(v170[0] + 16LL * *(unsigned int *)(v170[0] - 4)) = _mm_load_si128(&v177);
    if ( !v115 )
      goto LABEL_165;
    v177.m128i_i32[0] = 0;
LABEL_166:
    ++*(_DWORD *)(v85 - 4);
    ++v116;
    sub_15D0DF0(&v177);
    v117 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v182);
    sub_182CBA0(v117, &v183);
  }
  v82 = *(unsigned int *)(v85 - 4);
  v84 = *(_QWORD *)(a1 + 16);
  if ( v83 )
  {
LABEL_131:
    v86 = *(unsigned int *)(v83 - 4);
    goto LABEL_132;
  }
LABEL_174:
  v86 = 0;
LABEL_132:
  v87 = *(_DWORD *)(a1 + 8);
  sub_B72D60(&v182, v84, v86, v83, 0, 0);
  v186 = v87;
  v182.m128i_i64[0] = (__int64)qword_1C6E7C8;
  v187[0] = 0;
  if ( (_DWORD)v82 )
  {
    v88 = v85;
    v89 = 16 * v82 + v85;
    v90 = v85;
LABEL_134:
    sub_8B4B00(v187);
    v91 = v187[0];
    v92 = *(unsigned int *)(v187[0] - 4);
    while ( 1 )
    {
      sub_15D0E50(16 * v92 + v91, v90);
      v91 = v187[0];
      v88 += 16;
      v92 = (unsigned int)(*(_DWORD *)(v187[0] - 4) + 1);
      *(_DWORD *)(v187[0] - 4) = v92;
      if ( v89 == v88 )
        break;
      v90 = v88;
      if ( *(_DWORD *)(v91 - 8) == (_DWORD)v92 )
        goto LABEL_134;
    }
  }
  v182.m128i_i64[0] = (__int64)&off_1C57990;
  sub_B73430(&v182, v84);
  v93 = sub_180C100(v84 + 8400, 56);
  *(_BYTE *)(v93 + 8) = v182.m128i_i8[8] & 3 | *(_BYTE *)(v93 + 8) & 0xFC;
  *(_DWORD *)(v93 + 12) = v182.m128i_i32[3];
  *(_QWORD *)(v93 + 16) = v183;
  *(_DWORD *)(v93 + 24) = v184;
  *(_QWORD *)(v93 + 32) = v185;
  *(_QWORD *)v93 = qword_1C6E7C8;
  v94 = v186;
  *(_QWORD *)(v93 + 48) = 0;
  *(_DWORD *)(v93 + 40) = v94;
  if ( v187[0] )
  {
    v95 = *(_DWORD *)(v187[0] - 4);
    v143 = *(_DWORD *)(v187[0] - 8);
    v96 = (_QWORD *)sub_186B270(16LL * v143 + 8);
    v97 = _mm_cvtsi32_si128(v143);
    v98 = v96 + 1;
    v144 = v96 + 1;
    *v96 = _mm_unpacklo_epi32(v97, _mm_cvtsi32_si128(v95)).m128i_u64[0];
    *(_QWORD *)(v93 + 48) = v96 + 1;
    v99 = v187[0];
    if ( !v187[0] || (v100 = v187[0] + 16LL * *(unsigned int *)(v187[0] - 4), v100 == v187[0]) )
    {
      *(_QWORD *)v93 = &off_1C57990;
LABEL_143:
      if ( *((_DWORD *)v144 - 1) )
      {
        v101 = *(_QWORD **)(v84 + 8600);
        if ( v101 )
        {
          v102 = *((_DWORD *)v101 - 1);
          if ( v102 == *((_DWORD *)v101 - 2) )
          {
            v132 = (3 * v102 + 1) >> 1;
            v133 = 8 * v132 + 8;
            if ( 8 * v102 + 8 >= v133 || v102 >= v132 )
            {
              v140 = (char **)__cxa_allocate_exception(0x28u);
              sub_12D192(v177.m128i_i64, "Overflow encountered when expanding vector", v141);
              *v140 = (char *)off_1C63128;
              sub_2333C0(v140 + 1, &v177);
              sub_233E40((__int64)&v177);
              __cxa_throw(v140, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v134 = (unsigned int *)sub_186B300(v101 - 1, v133);
            v101 = v134 + 2;
            v135 = v134[1];
            *(_QWORD *)(v84 + 8600) = v134 + 2;
            *v134 = v132;
            LODWORD(v134) = v135;
            v105 = &v101[v135];
            v104 = (_DWORD)v134 + 1;
          }
          else
          {
            v103 = v102;
            v104 = v102 + 1;
            v105 = &v101[v103];
          }
        }
        else
        {
          v136 = (_QWORD *)sub_186B270(0x18u);
          *v136 = 2;
          v101 = v136 + 1;
          v104 = 1;
          *(_QWORD *)(v84 + 8600) = v101;
          v105 = v101;
        }
        *v105 = v93;
        *((_DWORD *)v101 - 1) = v104;
      }
    }
    else
    {
      do
      {
        sub_15D0E50(v98, v99);
        v99 += 16;
        v98 += 2;
      }
      while ( v100 != v99 );
      v144 = *(_QWORD **)(v93 + 48);
      *(_QWORD *)v93 = &off_1C57990;
      if ( v144 )
        goto LABEL_143;
    }
  }
  else
  {
    *(_QWORD *)v93 = &off_1C57990;
  }
  v177.m128i_i64[0] = v93 | 3;
  sub_8E8670(v84, &v177, 4294967294LL);
  v106 = v187[0];
  result = qword_1C6E7C8;
  v182.m128i_i64[0] = (__int64)qword_1C6E7C8;
  if ( v187[0] )
  {
    v108 = *(unsigned int *)(v187[0] - 4);
    if ( (_DWORD)v108 )
    {
      v109 = v187[0] + 16 * v108;
      do
      {
        v110 = v106;
        v106 += 16;
        sub_15D0DF0(v110);
      }
      while ( v106 != v109 );
      v106 = v187[0];
    }
    result = (__int64 *)sub_186B220((void *)(v106 - 8));
  }
  if ( v85 )
  {
    v111 = *(unsigned int *)(v85 - 4);
    if ( (_DWORD)v111 )
    {
      v112 = v85;
      v113 = v85 + 16 * v111;
      do
      {
        v114 = v112;
        v112 += 16;
        sub_15D0DF0(v114);
      }
      while ( v112 != v113 );
    }
    return (__int64 *)sub_186B220((void *)(v85 - 8));
  }
  return result;
}

