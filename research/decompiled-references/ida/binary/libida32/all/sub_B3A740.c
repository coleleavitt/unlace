void __fastcall sub_B3A740(char ***a1, __int64 a2, int a3, int a4, _BYTE *a5, __int64 a6)
{
  char ***v8; // rbp
  __int64 v9; // rbx
  __int64 *v10; // rdi
  __int64 v11; // rdx
  unsigned __int64 v12; // rax
  int v13; // esi
  __int64 v14; // rsi
  int v15; // eax
  __int64 *v16; // rdi
  __int64 v17; // r13
  __int64 v18; // r9
  char **v19; // rsi
  unsigned __int8 *v20; // r14
  _QWORD *v21; // rax
  _QWORD *v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  void **v26; // r15
  _BYTE *v27; // rdi
  __int64 v28; // rax
  _QWORD *v29; // r14
  __int64 v30; // rax
  unsigned __int64 v31; // rcx
  unsigned __int64 v32; // rdx
  __int64 v33; // rax
  void **v34; // r14
  size_t v35; // rax
  void **v36; // rdx
  void **v37; // r15
  void **v38; // rbx
  void **v39; // rdi
  void **v40; // rdi
  void **v41; // r15
  int v42; // ecx
  __int64 v43; // rax
  unsigned __int64 v44; // rax
  unsigned int *v45; // rbx
  size_t v46; // r12
  _BYTE *v47; // rbx
  _BYTE *v48; // rdi
  unsigned __int64 v49; // rdx
  void **v50; // rax
  _QWORD *v51; // r12
  __int64 v52; // rbx
  unsigned __int64 v53; // rax
  unsigned __int64 v54; // rcx
  unsigned __int64 v55; // rdx
  unsigned __int64 v56; // rbx
  char *v57; // r14
  _BYTE *v58; // rax
  void **v59; // rsi
  signed __int64 v60; // r15
  void **v61; // rbp
  unsigned __int64 v62; // rax
  void **v63; // r12
  void **v64; // rbx
  void **v65; // rdi
  void **v66; // rdi
  void **v67; // rbx
  void **v68; // r12
  size_t v69; // rdx
  int v70; // eax
  __int64 v71; // rax
  __int64 v72; // r15
  __int64 v73; // rdx
  __int64 v74; // r15
  __int64 v75; // rbx
  void *v76; // rdi
  __int64 v77; // r13
  void *v78; // rcx
  unsigned int v79; // eax
  __int64 v80; // rdx
  __int64 v81; // r9
  __int64 *v82; // rcx
  void **v83; // r13
  __int64 *v84; // rax
  size_t v85; // rdx
  __int64 v86; // rdx
  __int64 *v87; // r14
  unsigned __int64 v88; // kr00_8
  __int64 v89; // rbx
  __int64 v90; // r15
  unsigned __int64 v91; // rsi
  size_t v92; // rdx
  int v93; // eax
  __int64 v94; // rax
  __int64 v95; // r15
  __int64 v96; // rdx
  __int64 v97; // r15
  __int64 v98; // rbx
  void *v99; // rdi
  __int64 v100; // rax
  unsigned int v101; // r8d
  void **v102; // rcx
  _QWORD *v103; // r14
  int v104; // eax
  __int64 v105; // r14
  _QWORD *v106; // rbx
  __int64 v107; // rax
  unsigned __int64 v108; // rcx
  unsigned __int64 v109; // rdx
  __int64 v110; // rax
  _QWORD *v111; // rbx
  void *v112; // r12
  __int64 v113; // rax
  unsigned __int64 v114; // rcx
  unsigned __int64 v115; // rdx
  __int64 v116; // rax
  __int64 v117; // rax
  char **v118; // rdi
  void **v119; // r8
  char *v120; // rax
  char *v121; // rcx
  char *v122; // rdx
  size_t v123; // rdx
  __int64 v124; // rdx
  unsigned __int64 v125; // rdx
  int v126; // eax
  __int64 v127; // rax
  unsigned __int64 v128; // rdx
  int v129; // eax
  __int64 v130; // rax
  __int64 v131; // rax
  unsigned __int64 v132; // rdx
  int v133; // eax
  __int64 v134; // rax
  __int64 v135; // rax
  __int64 v136; // rbp
  __int64 v137; // rdx
  __int64 v138; // rbp
  void *v139; // r13
  _QWORD *v140; // r12
  __int64 v141; // rbx
  void *v142; // rdi
  __int64 v143; // rax
  __int64 v144; // r12
  __int64 v145; // rdx
  __int64 v146; // r12
  char ***v147; // r13
  _QWORD *v148; // rbp
  __int64 v149; // rbx
  void *v150; // rdi
  char *v151; // r15
  __int64 v152; // rbx
  char *v153; // rdi
  int v154; // eax
  __int64 v155; // rax
  __int64 v156; // rbx
  unsigned __int64 v157; // r14
  unsigned __int64 v158; // rbx
  void *v159; // rdi
  __int64 v160; // rbx
  char *v161; // rdi
  int v162; // r14d
  __int64 v163; // rax
  void **v164; // [rsp+8h] [rbp-180h] BYREF
  void *v165; // [rsp+10h] [rbp-178h]
  void **v166; // [rsp+18h] [rbp-170h]
  void **v167; // [rsp+20h] [rbp-168h]
  void **p_ptr; // [rsp+28h] [rbp-160h]
  void *ptr; // [rsp+30h] [rbp-158h] BYREF
  __int64 v170; // [rsp+38h] [rbp-150h]
  __int64 v171; // [rsp+40h] [rbp-148h] BYREF
  void *src; // [rsp+50h] [rbp-138h]
  size_t n; // [rsp+58h] [rbp-130h]
  _QWORD v174[2]; // [rsp+60h] [rbp-128h] BYREF
  int v175; // [rsp+70h] [rbp-118h] BYREF
  int v176; // [rsp+74h] [rbp-114h]
  char v177; // [rsp+78h] [rbp-110h]
  __int64 v178; // [rsp+7Ch] [rbp-10Ch]
  char v179; // [rsp+84h] [rbp-104h]
  void *dest; // [rsp+88h] [rbp-100h]
  __m128 v181; // [rsp+90h] [rbp-F8h] BYREF
  char v182; // [rsp+A8h] [rbp-E0h]
  void *v183; // [rsp+B0h] [rbp-D8h] BYREF
  size_t v184; // [rsp+B8h] [rbp-D0h]
  void **v185; // [rsp+C0h] [rbp-C8h]
  void *v186; // [rsp+D0h] [rbp-B8h]
  __int16 v187; // [rsp+F0h] [rbp-98h]
  void *v188; // [rsp+100h] [rbp-88h] BYREF
  unsigned __int64 v189; // [rsp+108h] [rbp-80h]
  _BYTE *v190; // [rsp+110h] [rbp-78h]
  __int64 v191; // [rsp+118h] [rbp-70h]
  _BYTE v192[12]; // [rsp+120h] [rbp-68h]
  int v193; // [rsp+12Ch] [rbp-5Ch]
  __int64 v194; // [rsp+130h] [rbp-58h] BYREF
  __int16 v195; // [rsp+140h] [rbp-48h]

  v8 = a1;
  v9 = a6;
  v10 = (__int64 *)*a1;
  LODWORD(v164) = a3;
  v11 = *v10;
  LODWORD(v165) = a4;
  v10[10] += 24;
  v12 = (v11 + 15) & 0xFFFFFFFFFFFFFFF0LL;
  if ( v10[1] >= v12 + 24 && v11 )
    *v10 = v12 + 24;
  else
    v12 = sub_962430((__int64)v10, 24, 24, 4, (__int64)a5, a6);
  v13 = (int)v164;
  *(_QWORD *)(v12 + 8) = a5;
  *(_QWORD *)(v12 + 16) = v9;
  *(_DWORD *)v12 = v13;
  v14 = (unsigned int)v165;
  *(_DWORD *)(v12 + 4) = (_DWORD)v165;
  *(_QWORD *)(a2 + 16) = v12;
  *(_QWORD *)(a2 + 24) = 1;
  v15 = *(_DWORD *)(v12 + 4);
  if ( v15 )
    *(_DWORD *)(a2 + 8) = v15;
  v16 = (__int64 *)v8[5];
  if ( v16 )
  {
    if ( (v16[6] & 1) == 0 )
    {
      sub_B169D0(v16, v14);
      v16 = (__int64 *)v8[5];
    }
    if ( (v16[6] & 0x30) != 0 )
    {
      v17 = v16[5];
      p_ptr = &ptr;
      ptr = &v171;
      v170 = 0x200000000LL;
      if ( !v17 || !(unsigned __int8)sub_B293D0(a5, v9, v17, (__int64)&ptr) )
      {
        v19 = v8[2];
        v166 = &v183;
        sub_FA3370(&v183, v19, (unsigned int)v164, 2653);
        v20 = (unsigned __int8 *)v183;
        if ( !v183 )
        {
          v69 = v184;
          v70 = *(_DWORD *)(v184 + 14976);
          if ( v70 )
          {
            v71 = (unsigned int)(v70 - 1);
            *(_DWORD *)(v184 + 14976) = v71;
            v20 = *(unsigned __int8 **)(v69 + 8 * v71 + 14848);
            v72 = *((unsigned int *)v20 + 134);
            *v20 = 0;
            v73 = *((_QWORD *)v20 + 66);
            *((_DWORD *)v20 + 106) = 0;
            v74 = v73 + (v72 << 6);
            if ( v73 != v74 )
            {
              v167 = (void **)v9;
              v75 = v73;
              do
              {
                while ( 1 )
                {
                  v74 -= 64;
                  v76 = *(void **)(v74 + 24);
                  if ( v76 == (void *)(v74 + 40) )
                    break;
                  operator delete(v76);
                  if ( v75 == v74 )
                    goto LABEL_106;
                }
              }
              while ( v75 != v74 );
LABEL_106:
              v9 = (__int64)v167;
            }
            *((_DWORD *)v20 + 134) = 0;
          }
          else
          {
            v20 = (unsigned __int8 *)operator new(0x3A0u);
            *v20 = 0;
            *((_QWORD *)v20 + 12) = v20 + 112;
            *((_QWORD *)v20 + 16) = v20 + 144;
            *((_QWORD *)v20 + 20) = v20 + 176;
            *((_QWORD *)v20 + 24) = v20 + 208;
            *((_QWORD *)v20 + 28) = v20 + 240;
            *((_QWORD *)v20 + 32) = v20 + 272;
            *((_QWORD *)v20 + 36) = v20 + 304;
            *((_QWORD *)v20 + 40) = v20 + 336;
            *((_QWORD *)v20 + 44) = v20 + 368;
            *((_QWORD *)v20 + 48) = v20 + 400;
            *((_QWORD *)v20 + 52) = v20 + 432;
            *((_QWORD *)v20 + 13) = 0;
            v20[112] = 0;
            *((_QWORD *)v20 + 17) = 0;
            v20[144] = 0;
            *((_QWORD *)v20 + 21) = 0;
            v20[176] = 0;
            *((_QWORD *)v20 + 25) = 0;
            v20[208] = 0;
            *((_QWORD *)v20 + 29) = 0;
            v20[240] = 0;
            *((_QWORD *)v20 + 33) = 0;
            v20[272] = 0;
            *((_QWORD *)v20 + 37) = 0;
            v20[304] = 0;
            *((_QWORD *)v20 + 41) = 0;
            v20[336] = 0;
            *((_QWORD *)v20 + 45) = 0;
            v20[368] = 0;
            *((_QWORD *)v20 + 49) = 0;
            v20[400] = 0;
            *((_QWORD *)v20 + 53) = 0x800000000LL;
            *((_QWORD *)v20 + 66) = v20 + 544;
            *((_QWORD *)v20 + 67) = 0x600000000LL;
          }
          v183 = v20;
        }
        v20[*v20 + 1] = 0;
        src = v174;
        if ( &a5[v9] && !a5 )
          goto LABEL_163;
        if ( (unsigned __int64)v9 > 0xF )
        {
          if ( v9 < 0 )
            goto LABEL_232;
          v21 = (_QWORD *)operator new(v9 + 1);
          v174[0] = v9;
          src = v21;
        }
        else
        {
          if ( v9 == 1 )
          {
            LOBYTE(v174[0]) = *a5;
            v21 = v174;
            goto LABEL_18;
          }
          v21 = v174;
          if ( !v9 )
          {
LABEL_18:
            n = v9;
            *((_BYTE *)v21 + v9) = 0;
            v22 = v183;
            v23 = *(unsigned __int8 *)v183;
            *(_BYTE *)v183 = v23 + 1;
            v24 = (unsigned __int8)v23;
            v25 = 4 * (v23 + 3);
            v26 = (void **)&v22[v25];
            v27 = (_BYTE *)v22[v25];
            if ( src == v174 )
            {
              v85 = n;
              if ( n )
              {
                if ( n == 1 )
                  *v27 = v174[0];
                else
                  memcpy(v27, src, n);
                v85 = n;
                v27 = *v26;
              }
              v26[1] = (void *)v85;
              v27[v85] = 0;
              v27 = src;
            }
            else
            {
              if ( v27 == (_BYTE *)&v22[v25 + 2] )
              {
                *v26 = src;
                v26[1] = (void *)n;
                v26[2] = (void *)v174[0];
              }
              else
              {
                v28 = v22[4 * v24 + 14];
                *v26 = src;
                v26[1] = (void *)n;
                v26[2] = (void *)v174[0];
                if ( v27 )
                {
                  src = v27;
                  v174[0] = v28;
                  goto LABEL_22;
                }
              }
              v27 = v174;
              src = v174;
            }
LABEL_22:
            n = 0;
            *v27 = 0;
            if ( src != v174 )
              operator delete(src);
            v29 = v183;
            if ( v183 )
            {
              v30 = *((unsigned int *)v183 + 106);
              v31 = *((unsigned int *)v183 + 107);
              v32 = v30 + 1;
            }
            else
            {
              v92 = v184;
              v93 = *(_DWORD *)(v184 + 14976);
              if ( v93 )
              {
                v94 = (unsigned int)(v93 - 1);
                *(_DWORD *)(v184 + 14976) = v94;
                v29 = *(_QWORD **)(v92 + 8 * v94 + 14848);
                v95 = *((unsigned int *)v29 + 134);
                *(_BYTE *)v29 = 0;
                v96 = v29[66];
                *((_DWORD *)v29 + 106) = 0;
                v97 = v96 + (v95 << 6);
                if ( v96 == v97 )
                {
                  v32 = 1;
                  v30 = 0;
                }
                else
                {
                  v167 = (void **)v9;
                  v98 = v96;
                  do
                  {
                    while ( 1 )
                    {
                      v97 -= 64;
                      v99 = *(void **)(v97 + 24);
                      if ( v99 == (void *)(v97 + 40) )
                        break;
                      operator delete(v99);
                      if ( v98 == v97 )
                        goto LABEL_140;
                    }
                  }
                  while ( v98 != v97 );
LABEL_140:
                  v30 = *((unsigned int *)v29 + 106);
                  v9 = (__int64)v167;
                  v32 = v30 + 1;
                }
                *((_DWORD *)v29 + 134) = 0;
                v31 = *((unsigned int *)v29 + 107);
              }
              else
              {
                v117 = operator new(0x3A0u);
                v31 = 8;
                v32 = 1;
                v29 = (_QWORD *)v117;
                *(_BYTE *)v117 = 0;
                *(_QWORD *)(v117 + 96) = v117 + 112;
                *(_QWORD *)(v117 + 128) = v117 + 144;
                *(_QWORD *)(v117 + 160) = v117 + 176;
                *(_QWORD *)(v117 + 192) = v117 + 208;
                *(_QWORD *)(v117 + 224) = v117 + 240;
                *(_QWORD *)(v117 + 256) = v117 + 272;
                *(_QWORD *)(v117 + 288) = v117 + 304;
                *(_QWORD *)(v117 + 320) = v117 + 336;
                *(_QWORD *)(v117 + 352) = v117 + 368;
                *(_QWORD *)(v117 + 384) = v117 + 400;
                *(_QWORD *)(v117 + 416) = v117 + 432;
                *(_QWORD *)(v117 + 104) = 0;
                *(_BYTE *)(v117 + 112) = 0;
                *(_QWORD *)(v117 + 136) = 0;
                *(_BYTE *)(v117 + 144) = 0;
                *(_QWORD *)(v117 + 168) = 0;
                *(_BYTE *)(v117 + 176) = 0;
                *(_QWORD *)(v117 + 200) = 0;
                *(_BYTE *)(v117 + 208) = 0;
                *(_QWORD *)(v117 + 232) = 0;
                *(_BYTE *)(v117 + 240) = 0;
                *(_QWORD *)(v117 + 264) = 0;
                *(_BYTE *)(v117 + 272) = 0;
                *(_QWORD *)(v117 + 296) = 0;
                *(_BYTE *)(v117 + 304) = 0;
                *(_QWORD *)(v117 + 328) = 0;
                *(_BYTE *)(v117 + 336) = 0;
                *(_QWORD *)(v117 + 360) = 0;
                *(_BYTE *)(v117 + 368) = 0;
                *(_QWORD *)(v117 + 392) = 0;
                *(_BYTE *)(v117 + 400) = 0;
                *(_QWORD *)(v117 + 424) = 0x800000000LL;
                *(_QWORD *)(v117 + 528) = v117 + 544;
                *(_QWORD *)(v117 + 536) = 0x600000000LL;
                v30 = 0;
              }
              v183 = v29;
            }
            LOBYTE(v189) = 1;
            v188 = (void *)__PAIR64__((unsigned int)v165, (unsigned int)v164);
            if ( v32 > v31 )
            {
              sub_22134E0(v29 + 52, v29 + 54, v32, 12);
              v30 = *((unsigned int *)v29 + 106);
            }
            v33 = v29[52] + 12 * v30;
            *(_QWORD *)v33 = v188;
            *(_DWORD *)(v33 + 8) = v189;
            ++*((_DWORD *)v29 + 106);
            if ( (_BYTE)v187 )
            {
              sub_FA3A50(v185, v166, HIBYTE(v187));
              v185 = nullptr;
              v187 = 0;
            }
            if ( v186 != v166 + 6 )
              operator delete(v186);
            v34 = (void **)v183;
            if ( v183 )
            {
              v35 = v184;
              if ( v184 )
              {
                if ( (unsigned __int64)v183 < v184 || (unsigned __int64)v183 > v184 + 14848 )
                {
                  v36 = *((void ***)v183 + 66);
                  v37 = &v36[8 * (unsigned __int64)*((unsigned int *)v183 + 134)];
                  if ( v36 != v37 )
                  {
                    v167 = (void **)v9;
                    v38 = v36;
                    do
                    {
                      while ( 1 )
                      {
                        v37 -= 8;
                        v39 = (void **)v37[3];
                        if ( v39 == v37 + 5 )
                          break;
                        operator delete(v39);
                        if ( v38 == v37 )
                          goto LABEL_39;
                      }
                    }
                    while ( v38 != v37 );
LABEL_39:
                    v9 = (__int64)v167;
                    v37 = (void **)v34[66];
                  }
                  if ( v37 != v34 + 68 )
                    free(v37);
                  v40 = (void **)v34[52];
                  v41 = v34 + 52;
                  if ( v40 != v34 + 54 )
                    free(v40);
                  v167 = v34 + 12;
                  do
                  {
                    while ( 1 )
                    {
                      v41 -= 4;
                      if ( *v41 == v41 + 2 )
                        break;
                      operator delete(*v41);
                      if ( v41 == v167 )
                        goto LABEL_47;
                    }
                  }
                  while ( v41 != v167 );
LABEL_47:
                  operator delete(v34, 0x3A0u);
                }
                else
                {
                  v86 = *(unsigned int *)(v184 + 14976);
                  *(_DWORD *)(v184 + 14976) = v86 + 1;
                  *(_QWORD *)(v35 + 8 * v86 + 14848) = v34;
                }
              }
            }
            if ( !v17 )
              goto LABEL_93;
            v42 = *(_DWORD *)(v17 + 20) & 0x1FFFFFFF;
            if ( !v42 )
              goto LABEL_93;
            if ( v42 == 1 )
            {
              v43 = *(_QWORD *)(*(_QWORD *)(v17 + 24) + 40LL);
              if ( (v43 & 7) != 0 )
                goto LABEL_93;
              v44 = v43 & 0xFFFFFFFFFFFFFFF8LL;
              if ( !v44 )
                goto LABEL_93;
              v45 = *(unsigned int **)(v44 + 16);
              v46 = *v45;
              v47 = v45 + 4;
            }
            else
            {
              v87 = (__int64 *)(v17 + 24);
              v191 = v9;
              v188 = nullptr;
              v88 = v9 + 2;
              v189 = 0;
              v190 = a5;
              v89 = v17 + 8LL * (unsigned int)(v42 - 1) + 32;
              v193 = 0;
              *(_DWORD *)v192 = v88 / 3;
              *(_QWORD *)&v192[4] = (unsigned int)(*(_DWORD *)v192 + 1);
              do
              {
                v90 = *v87;
                if ( *v87 )
                {
                  v91 = *(_QWORD *)(v90 + 40) & 0xFFFFFFFFFFFFFFF8LL;
                  if ( (*(_QWORD *)(v90 + 40) & 7) != 0 )
                    v91 = 0;
                  sub_FF6970(&v188, v91);
                  if ( (*(_BYTE *)(v90 + 28) & 0x7F) == 0x44 )
                    sub_B29290(*(_QWORD *)(v90 + 56), (__int64)&v188);
                }
                ++v87;
              }
              while ( v87 != (__int64 *)v89 );
              sub_FF6A10(v166, &v188);
              if ( !(_BYTE)v185 )
                goto LABEL_93;
              v47 = v183;
              v46 = v184;
            }
            if ( v46 )
            {
              sub_FA3370(&v188, v8[2], (unsigned int)v164, 2628);
              sub_AC84E0((unsigned __int8 **)&v188, v47, v46);
              v175 = (int)v164;
              v178 = 0;
              v176 = (int)v165;
              v179 = 0;
              dest = &v181.m128_u16[4];
              v181.m128_u64[0] = 0;
              v181.m128_i8[8] = 0;
              v182 = 0;
              v177 = 1;
              v183 = v166 + 2;
              sub_B29310(v166, v47, (__int64)&v47[v46]);
              v48 = dest;
              if ( v183 == v166 + 2 )
              {
                v123 = v184;
                if ( v184 )
                {
                  if ( v184 == 1 )
                    *(_BYTE *)dest = (_BYTE)v185;
                  else
                    memcpy(dest, v183, v184);
                  v123 = v184;
                  v48 = dest;
                }
                v181.m128_u64[0] = v123;
                v48[v123] = 0;
                v48 = v183;
              }
              else
              {
                if ( dest == &v181.m128_u16[4] )
                {
                  v164 = v185;
                  dest = v183;
                  v181 = _mm_loadh_ps((const double *)&v164);
                }
                else
                {
                  v164 = v185;
                  v49 = v181.m128_u64[1];
                  dest = v183;
                  v181 = _mm_loadh_ps((const double *)&v164);
                  if ( v48 )
                  {
                    v183 = v48;
                    v185 = (void **)v49;
                    goto LABEL_59;
                  }
                }
                v48 = v166 + 2;
                v183 = v166 + 2;
              }
LABEL_59:
              v50 = v166;
              v184 = 0;
              *v48 = 0;
              if ( v183 != v50 + 2 )
                operator delete(v183);
              if ( !v175 || !v176 )
              {
LABEL_72:
                if ( dest != &v181.m128_u16[4] )
                  operator delete(dest);
                if ( (_BYTE)v195 )
                {
                  sub_FA3A50(v190, &v188, HIBYTE(v195));
                  v190 = nullptr;
                  v195 = 0;
                }
                if ( *(__int64 **)v192 != &v194 )
                  operator delete(*(void **)v192);
                v61 = (void **)v188;
                if ( v188 )
                {
                  v62 = v189;
                  if ( v189 )
                  {
                    if ( (unsigned __int64)v188 < v189 || (unsigned __int64)v188 > v189 + 14848 )
                    {
                      v63 = *((void ***)v188 + 66);
                      v64 = &v63[8 * (unsigned __int64)*((unsigned int *)v188 + 134)];
                      if ( v63 != v64 )
                      {
                        do
                        {
                          while ( 1 )
                          {
                            v64 -= 8;
                            v65 = (void **)v64[3];
                            if ( v65 == v64 + 5 )
                              break;
                            operator delete(v65);
                            if ( v63 == v64 )
                              goto LABEL_84;
                          }
                        }
                        while ( v63 != v64 );
LABEL_84:
                        v64 = (void **)v61[66];
                      }
                      if ( v64 != v61 + 68 )
                        free(v64);
                      v66 = (void **)v61[52];
                      v67 = v61 + 52;
                      if ( v66 != v61 + 54 )
                        free(v66);
                      v68 = v61 + 12;
                      do
                      {
                        while ( 1 )
                        {
                          v67 -= 4;
                          if ( *v67 == v67 + 2 )
                            break;
                          operator delete(*v67);
                          if ( v68 == v67 )
                            goto LABEL_92;
                        }
                      }
                      while ( v68 != v67 );
LABEL_92:
                      operator delete(v61, 0x3A0u);
                    }
                    else
                    {
                      v124 = *(unsigned int *)(v189 + 14976);
                      *(_DWORD *)(v189 + 14976) = v124 + 1;
                      *(_QWORD *)(v62 + 8 * v124 + 14848) = v61;
                    }
                  }
                }
                goto LABEL_93;
              }
              v51 = v188;
              if ( v188 )
              {
                v52 = *((unsigned int *)v188 + 134);
                v53 = *((_QWORD *)v188 + 66);
                v54 = *((unsigned int *)v188 + 135);
                v55 = v52 + 1;
                v56 = v53 + (v52 << 6);
              }
              else
              {
                v132 = v189;
                v133 = *(_DWORD *)(v189 + 14976);
                if ( v133 )
                {
                  v155 = (unsigned int)(v133 - 1);
                  *(_DWORD *)(v189 + 14976) = v155;
                  v51 = *(_QWORD **)(v132 + 8 * v155 + 14848);
                  v156 = *((unsigned int *)v51 + 134);
                  v157 = v51[66];
                  *(_BYTE *)v51 = 0;
                  *((_DWORD *)v51 + 106) = 0;
                  v158 = v157 + (v156 << 6);
                  if ( v157 != v158 )
                  {
                    do
                    {
                      while ( 1 )
                      {
                        v158 -= 64LL;
                        v159 = *(void **)(v158 + 24);
                        if ( v159 == (void *)(v158 + 40) )
                          break;
                        operator delete(v159);
                        if ( v157 == v158 )
                          goto LABEL_224;
                      }
                    }
                    while ( v157 != v158 );
LABEL_224:
                    v157 = v51[66];
                  }
                  *((_DWORD *)v51 + 134) = 0;
                  v54 = *((unsigned int *)v51 + 135);
                  v53 = v157;
                }
                else
                {
                  v134 = operator new(0x3A0u);
                  v54 = 6;
                  v51 = (_QWORD *)v134;
                  *(_BYTE *)v134 = 0;
                  *(_QWORD *)(v134 + 96) = v134 + 112;
                  *(_QWORD *)(v134 + 128) = v134 + 144;
                  *(_QWORD *)(v134 + 160) = v134 + 176;
                  *(_QWORD *)(v134 + 192) = v134 + 208;
                  *(_QWORD *)(v134 + 224) = v134 + 240;
                  *(_QWORD *)(v134 + 256) = v134 + 272;
                  *(_QWORD *)(v134 + 288) = v134 + 304;
                  *(_QWORD *)(v134 + 320) = v134 + 336;
                  *(_QWORD *)(v134 + 352) = v134 + 368;
                  *(_QWORD *)(v134 + 384) = v134 + 400;
                  *(_QWORD *)(v134 + 416) = v134 + 432;
                  *(_QWORD *)(v134 + 104) = 0;
                  *(_BYTE *)(v134 + 112) = 0;
                  *(_QWORD *)(v134 + 136) = 0;
                  *(_BYTE *)(v134 + 144) = 0;
                  *(_QWORD *)(v134 + 168) = 0;
                  *(_BYTE *)(v134 + 176) = 0;
                  *(_QWORD *)(v134 + 200) = 0;
                  *(_BYTE *)(v134 + 208) = 0;
                  *(_QWORD *)(v134 + 232) = 0;
                  *(_BYTE *)(v134 + 240) = 0;
                  *(_QWORD *)(v134 + 264) = 0;
                  *(_BYTE *)(v134 + 272) = 0;
                  *(_QWORD *)(v134 + 296) = 0;
                  *(_BYTE *)(v134 + 304) = 0;
                  *(_QWORD *)(v134 + 328) = 0;
                  *(_BYTE *)(v134 + 336) = 0;
                  *(_QWORD *)(v134 + 360) = 0;
                  *(_BYTE *)(v134 + 368) = 0;
                  *(_QWORD *)(v134 + 392) = 0;
                  *(_BYTE *)(v134 + 400) = 0;
                  *(_QWORD *)(v134 + 424) = 0x800000000LL;
                  v53 = v134 + 544;
                  v51[66] = v53;
                  v51[67] = 0x600000000LL;
                }
                v188 = v51;
                v56 = v53;
                v55 = 1;
              }
              v57 = (char *)&v175;
              if ( v55 > v54 )
              {
                v151 = (char *)(v51 + 68);
                if ( v53 > (unsigned __int64)&v175 || v56 <= (unsigned __int64)&v175 )
                {
                  v160 = sub_22136C0(v51 + 66, v51 + 68, v55, 64, v166);
                  sub_9CBAD0(v51 + 66, v160);
                  v161 = (char *)v51[66];
                  v162 = (int)v183;
                  if ( v161 != v151 )
                    free(v161);
                  v163 = *((unsigned int *)v51 + 134);
                  v51[66] = v160;
                  *((_DWORD *)v51 + 135) = v162;
                  v57 = (char *)&v175;
                  v56 = (v163 << 6) + v160;
                }
                else
                {
                  v164 = (void **)((char *)&v175 - v53);
                  v152 = sub_22136C0(v51 + 66, v51 + 68, v55, 64, v166);
                  sub_9CBAD0(v51 + 66, v152);
                  v153 = (char *)v51[66];
                  v154 = (int)v183;
                  if ( v153 != v151 )
                  {
                    v165 = v183;
                    free(v153);
                    v154 = (int)v165;
                  }
                  v51[66] = v152;
                  *((_DWORD *)v51 + 135) = v154;
                  v57 = (char *)v164 + v152;
                  v56 = ((unsigned __int64)*((unsigned int *)v51 + 134) << 6) + v152;
                }
              }
              *(_QWORD *)v56 = *(_QWORD *)v57;
              *(_DWORD *)(v56 + 8) = *((_DWORD *)v57 + 2);
              *(_QWORD *)(v56 + 12) = *(_QWORD *)(v57 + 12);
              *(_DWORD *)(v56 + 20) = *((_DWORD *)v57 + 5);
              v58 = (_BYTE *)(v56 + 40);
              *(_QWORD *)(v56 + 24) = v56 + 40;
              v59 = *((void ***)v57 + 3);
              v60 = *((_QWORD *)v57 + 4);
              if ( !(void **)((char *)v59 + v60) || v59 )
              {
                if ( (unsigned __int64)v60 <= 0xF )
                {
                  if ( v60 == 1 )
                  {
                    *(_BYTE *)(v56 + 40) = *(_BYTE *)v59;
LABEL_71:
                    *(_QWORD *)(v56 + 32) = v60;
                    v58[v60] = 0;
                    *(_BYTE *)(v56 + 56) = v57[56];
                    ++*((_DWORD *)v51 + 134);
                    goto LABEL_72;
                  }
                  if ( !v60 )
                    goto LABEL_71;
LABEL_191:
                  memcpy(v58, v59, v60);
                  v58 = *(_BYTE **)(v56 + 24);
                  goto LABEL_71;
                }
                v164 = *((void ***)v57 + 3);
                if ( v60 >= 0 )
                {
                  v58 = (_BYTE *)operator new(v60 + 1);
                  *(_QWORD *)(v56 + 40) = v60;
                  v59 = v164;
                  *(_QWORD *)(v56 + 24) = v58;
                  goto LABEL_191;
                }
LABEL_232:
                std::__throw_length_error("basic_string::_M_create");
              }
LABEL_163:
              std::__throw_logic_error("basic_string::_M_construct null not valid");
            }
LABEL_93:
            if ( ptr != p_ptr + 2 )
              free(ptr);
            return;
          }
        }
        memcpy(v21, a5, v9);
        v21 = src;
        goto LABEL_18;
      }
      v77 = (unsigned int)v170;
      v78 = nullptr;
      if ( (_DWORD)v170 )
      {
        v118 = *v8;
        v119 = (void **)ptr;
        v120 = **v8;
        v118[10] += 4 * (unsigned int)v170;
        v121 = (char *)((unsigned __int64)(v120 + 3) & 0xFFFFFFFFFFFFFFFCLL);
        v122 = &v121[4 * v77];
        if ( v118[1] >= v122 && v120 )
        {
          *v118 = v122;
        }
        else
        {
          v166 = v119;
          v131 = sub_962430((__int64)v118, 4 * v77, 4 * v77, 2, (__int64)v119, v18);
          v119 = v166;
          v121 = (char *)v131;
        }
        v78 = memmove(v121, v119, 4 * v77);
      }
      *(_QWORD *)(a2 + 40) = v78;
      *(_QWORD *)(a2 + 48) = v77;
      v79 = sub_2220DF0(a5, v9);
      v80 = (unsigned int)sub_2220F70(v8 + 6, a5, v9, v79);
      v82 = (__int64 *)&v8[6][v80];
      if ( *v82 )
      {
        if ( *v82 != -8 )
        {
          v83 = &v188;
          sub_B3A700((__int64 **)&v188, v82, 0);
          v84 = (__int64 *)v188;
LABEL_146:
          v105 = *v84;
          if ( *(_QWORD *)(*v84 + 8) )
          {
            sub_FA3370(&v188, v8[2], (unsigned int)v164, 2651);
            sub_AC84E0((unsigned __int8 **)&v188, a5, v9);
            v106 = v188;
            if ( v188 )
            {
              v107 = *((unsigned int *)v188 + 106);
              v108 = *((unsigned int *)v188 + 107);
              v109 = v107 + 1;
            }
            else
            {
              v128 = v189;
              v129 = *(_DWORD *)(v189 + 14976);
              if ( v129 )
              {
                v143 = (unsigned int)(v129 - 1);
                *(_DWORD *)(v189 + 14976) = v143;
                v106 = *(_QWORD **)(v128 + 8 * v143 + 14848);
                v144 = *((unsigned int *)v106 + 134);
                *(_BYTE *)v106 = 0;
                v145 = v106[66];
                *((_DWORD *)v106 + 106) = 0;
                v146 = v145 + (v144 << 6);
                if ( v145 != v146 )
                {
                  v166 = &v188;
                  v147 = v8;
                  v148 = v106;
                  v149 = v145;
                  do
                  {
                    while ( 1 )
                    {
                      v146 -= 64;
                      v150 = *(void **)(v146 + 24);
                      if ( v150 == (void *)(v146 + 40) )
                        break;
                      operator delete(v150);
                      if ( v149 == v146 )
                        goto LABEL_212;
                    }
                  }
                  while ( v149 != v146 );
LABEL_212:
                  v106 = v148;
                  v8 = v147;
                  v83 = v166;
                }
                v107 = *((unsigned int *)v106 + 106);
                v108 = *((unsigned int *)v106 + 107);
                *((_DWORD *)v106 + 134) = 0;
                v109 = v107 + 1;
              }
              else
              {
                v130 = operator new(0x3A0u);
                v108 = 8;
                v109 = 1;
                v106 = (_QWORD *)v130;
                *(_BYTE *)v130 = 0;
                *(_QWORD *)(v130 + 96) = v130 + 112;
                *(_QWORD *)(v130 + 128) = v130 + 144;
                *(_QWORD *)(v130 + 160) = v130 + 176;
                *(_QWORD *)(v130 + 192) = v130 + 208;
                *(_QWORD *)(v130 + 224) = v130 + 240;
                *(_QWORD *)(v130 + 256) = v130 + 272;
                *(_QWORD *)(v130 + 288) = v130 + 304;
                *(_QWORD *)(v130 + 320) = v130 + 336;
                *(_QWORD *)(v130 + 352) = v130 + 368;
                *(_QWORD *)(v130 + 384) = v130 + 400;
                *(_QWORD *)(v130 + 416) = v130 + 432;
                *(_QWORD *)(v130 + 104) = 0;
                *(_BYTE *)(v130 + 112) = 0;
                *(_QWORD *)(v130 + 136) = 0;
                *(_BYTE *)(v130 + 144) = 0;
                *(_QWORD *)(v130 + 168) = 0;
                *(_BYTE *)(v130 + 176) = 0;
                *(_QWORD *)(v130 + 200) = 0;
                *(_BYTE *)(v130 + 208) = 0;
                *(_QWORD *)(v130 + 232) = 0;
                *(_BYTE *)(v130 + 240) = 0;
                *(_QWORD *)(v130 + 264) = 0;
                *(_BYTE *)(v130 + 272) = 0;
                *(_QWORD *)(v130 + 296) = 0;
                *(_BYTE *)(v130 + 304) = 0;
                *(_QWORD *)(v130 + 328) = 0;
                *(_BYTE *)(v130 + 336) = 0;
                *(_QWORD *)(v130 + 360) = 0;
                *(_BYTE *)(v130 + 368) = 0;
                *(_QWORD *)(v130 + 392) = 0;
                *(_BYTE *)(v130 + 400) = 0;
                *(_QWORD *)(v130 + 424) = 0x800000000LL;
                *(_QWORD *)(v130 + 528) = v130 + 544;
                *(_QWORD *)(v130 + 536) = 0x600000000LL;
                v107 = 0;
              }
              v188 = v106;
            }
            LOBYTE(v184) = 1;
            v183 = (void *)__PAIR64__((unsigned int)v165, (unsigned int)v164);
            if ( v109 > v108 )
            {
              sub_22134E0(v106 + 52, v106 + 54, v109, 12);
              v107 = *((unsigned int *)v106 + 106);
            }
            v110 = v106[52] + 12 * v107;
            *(_QWORD *)v110 = v183;
            *(_DWORD *)(v110 + 8) = v184;
            ++*((_DWORD *)v106 + 106);
            sub_AC6300((__int64)v83);
            sub_FA3370(v83, v8[2], **(unsigned int **)(v105 + 8), 2629);
            v111 = v188;
            v112 = **(void ***)(*(_QWORD *)(v105 + 8) + 16LL);
            if ( v188 )
            {
              v113 = *((unsigned int *)v188 + 106);
              v114 = *((unsigned int *)v188 + 107);
              v115 = v113 + 1;
            }
            else
            {
              v125 = v189;
              v126 = *(_DWORD *)(v189 + 14976);
              if ( v126 )
              {
                v135 = (unsigned int)(v126 - 1);
                *(_DWORD *)(v189 + 14976) = v135;
                v111 = *(_QWORD **)(v125 + 8 * v135 + 14848);
                v136 = *((unsigned int *)v111 + 134);
                *(_BYTE *)v111 = 0;
                v137 = v111[66];
                *((_DWORD *)v111 + 106) = 0;
                v138 = v137 + (v136 << 6);
                if ( v137 != v138 )
                {
                  v164 = v83;
                  v139 = v112;
                  v140 = v111;
                  v141 = v137;
                  do
                  {
                    while ( 1 )
                    {
                      v138 -= 64;
                      v142 = *(void **)(v138 + 24);
                      if ( v142 == (void *)(v138 + 40) )
                        break;
                      operator delete(v142);
                      if ( v141 == v138 )
                        goto LABEL_204;
                    }
                  }
                  while ( v141 != v138 );
LABEL_204:
                  v111 = v140;
                  v112 = v139;
                  v83 = v164;
                }
                v113 = *((unsigned int *)v111 + 106);
                v114 = *((unsigned int *)v111 + 107);
                *((_DWORD *)v111 + 134) = 0;
                v115 = v113 + 1;
              }
              else
              {
                v127 = operator new(0x3A0u);
                v114 = 8;
                v115 = 1;
                v111 = (_QWORD *)v127;
                *(_BYTE *)v127 = 0;
                *(_QWORD *)(v127 + 96) = v127 + 112;
                *(_QWORD *)(v127 + 128) = v127 + 144;
                *(_QWORD *)(v127 + 160) = v127 + 176;
                *(_QWORD *)(v127 + 192) = v127 + 208;
                *(_QWORD *)(v127 + 224) = v127 + 240;
                *(_QWORD *)(v127 + 256) = v127 + 272;
                *(_QWORD *)(v127 + 288) = v127 + 304;
                *(_QWORD *)(v127 + 320) = v127 + 336;
                *(_QWORD *)(v127 + 352) = v127 + 368;
                *(_QWORD *)(v127 + 384) = v127 + 400;
                *(_QWORD *)(v127 + 416) = v127 + 432;
                *(_QWORD *)(v127 + 104) = 0;
                *(_BYTE *)(v127 + 112) = 0;
                *(_QWORD *)(v127 + 136) = 0;
                *(_BYTE *)(v127 + 144) = 0;
                *(_QWORD *)(v127 + 168) = 0;
                *(_BYTE *)(v127 + 176) = 0;
                *(_QWORD *)(v127 + 200) = 0;
                *(_BYTE *)(v127 + 208) = 0;
                *(_QWORD *)(v127 + 232) = 0;
                *(_BYTE *)(v127 + 240) = 0;
                *(_QWORD *)(v127 + 264) = 0;
                *(_BYTE *)(v127 + 272) = 0;
                *(_QWORD *)(v127 + 296) = 0;
                *(_BYTE *)(v127 + 304) = 0;
                *(_QWORD *)(v127 + 328) = 0;
                *(_BYTE *)(v127 + 336) = 0;
                *(_QWORD *)(v127 + 360) = 0;
                *(_BYTE *)(v127 + 368) = 0;
                *(_QWORD *)(v127 + 392) = 0;
                *(_BYTE *)(v127 + 400) = 0;
                *(_QWORD *)(v127 + 424) = 0x800000000LL;
                *(_QWORD *)(v127 + 528) = v127 + 544;
                *(_QWORD *)(v127 + 536) = 0x600000000LL;
                v113 = 0;
              }
              v188 = v111;
            }
            v183 = v112;
            LOBYTE(v184) = 1;
            if ( v115 > v114 )
            {
              sub_22134E0(v111 + 52, v111 + 54, v115, 12);
              v113 = *((unsigned int *)v111 + 106);
            }
            v116 = v111[52] + 12 * v113;
            *(_QWORD *)v116 = v183;
            *(_DWORD *)(v116 + 8) = v184;
            ++*((_DWORD *)v111 + 106);
            sub_AC6300((__int64)v83);
          }
          *(_QWORD *)(v105 + 8) = a2;
          goto LABEL_93;
        }
        --*((_DWORD *)v8 + 16);
      }
      v167 = (void **)v82;
      LODWORD(v166) = v80;
      v100 = sub_220C370(v9 + 17, 8, v80, v82, v80, v81);
      v101 = (unsigned int)v166;
      v102 = v167;
      v103 = (_QWORD *)v100;
      if ( v9 )
      {
        memcpy((void *)(v100 + 16), a5, v9);
        v102 = v167;
        v101 = (unsigned int)v166;
      }
      *((_BYTE *)v103 + v9 + 16) = 0;
      v83 = &v188;
      *v103 = v9;
      v103[1] = 0;
      *v102 = v103;
      ++*((_DWORD *)v8 + 15);
      v104 = sub_2221390(v8 + 6, v101);
      sub_B3A700((__int64 **)&v188, (__int64 *)&v8[6][v104], 0);
      v84 = (__int64 *)v188;
      goto LABEL_146;
    }
  }
}

