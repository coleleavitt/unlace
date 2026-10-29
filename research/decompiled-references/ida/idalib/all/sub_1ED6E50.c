__int64 __fastcall sub_1ED6E50(__int64 a1, __int64 a2, unsigned __int64 k, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int8 v7; // al
  unsigned int v8; // edi
  __int64 j; // rbx
  __int64 v10; // r8
  __int64 v11; // rsi
  unsigned __int64 *v12; // rsi
  void **v13; // rax
  unsigned int v14; // eax
  unsigned int v15; // eax
  unsigned int v16; // edx
  size_t v17; // rcx
  __int64 v18; // r8
  unsigned __int64 v19; // rax
  unsigned __int64 i; // rdx
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rax
  __int64 v24; // rsi
  void *v25; // rax
  int v26; // eax
  _QWORD *v27; // rax
  __int64 v28; // rdx
  char *v29; // r13
  __int64 v30; // rbx
  unsigned __int64 v31; // rbp
  unsigned __int64 v32; // rax
  __int64 v33; // rdi
  char v34; // al
  unsigned __int8 v35; // dl
  int v36; // ebx
  __int64 v37; // r9
  __int64 v38; // rcx
  __int64 v39; // rsi
  unsigned __int64 v40; // r8
  __int64 *v41; // rax
  __int64 v42; // r8
  __int64 v43; // rdx
  unsigned __int64 v44; // rsi
  __int64 v45; // rdi
  __m128 v46; // xmm0
  __int64 v47; // rax
  void (*v48)(); // rdx
  unsigned __int64 v49; // r14
  char v50; // bl
  __int64 v51; // rax
  unsigned __int64 v52; // rax
  __int64 *v53; // rdi
  __int64 v54; // rdx
  unsigned __int64 *v55; // rsi
  void **v56; // rax
  unsigned int v57; // eax
  unsigned int v58; // eax
  unsigned int v59; // edx
  unsigned __int64 *v60; // rax
  unsigned __int64 v61; // rdi
  unsigned __int64 v62; // rdx
  unsigned __int64 v63; // rdx
  unsigned __int64 v64; // rdx
  __int64 m; // rbp
  _BYTE *v66; // rax
  int v67; // eax
  __int64 v68; // rsi
  _QWORD *v69; // rax
  __int64 v70; // rdx
  __int64 *v71; // rbx
  __int64 *v72; // rbp
  char v73; // r13
  __int64 v74; // rdx
  __int64 v75; // rsi
  unsigned __int64 v76; // rcx
  __int64 v77; // r8
  __int64 v78; // rsi
  __int64 v79; // rdx
  unsigned __int64 v80; // r9
  unsigned __int64 v81; // rcx
  __int64 v82; // r8
  __int64 v83; // rsi
  __int64 v84; // rsi
  char **v85; // rbp
  __int64 v86; // rax
  char **v87; // r14
  __int64 v88; // r13
  __int64 v89; // rax
  _DWORD *v90; // rax
  __int64 v91; // rdi
  __int64 v92; // r8
  unsigned __int64 v93; // rdx
  __int64 v94; // rax
  unsigned __int64 v95; // rdx
  unsigned __int64 v96; // rax
  __int64 v97; // r8
  __int64 v98; // rdx
  unsigned __int64 v99; // rsi
  __int64 v100; // rax
  int v101; // edx
  __int64 v102; // rax
  __int64 v103; // rdx
  int v104; // esi
  __int64 v105; // rax
  __int64 v106; // rdx
  int v107; // esi
  __int64 v108; // rax
  unsigned int v109; // esi
  unsigned __int64 v110; // rax
  int v111; // edx
  unsigned __int64 v112; // rax
  __int64 v113; // rdx
  __int32 v114; // esi
  __int64 v115; // rax
  __int64 v116; // rdx
  int v117; // esi
  __int64 v118; // rax
  unsigned int v119; // esi
  unsigned int v120; // eax
  const void *v121; // rsi
  unsigned int v122; // eax
  unsigned __int64 v123; // rax
  __int64 v124; // rax
  bool v125; // zf
  _QWORD *v126; // rax
  __int64 v127; // rdx
  _QWORD *v128; // rax
  __int64 v129; // rdx
  __int64 v130; // rdi
  __int64 result; // rax
  unsigned int v132; // eax
  unsigned int v133; // ebx
  __int64 v134; // rdx
  char v135; // al
  __int64 v136; // rdi
  __int64 v137; // rax
  unsigned int v138; // eax
  unsigned int v139; // ebx
  __int64 v140; // rdx
  char v141; // al
  __int64 v142; // rdi
  __int64 v143; // rax
  __int64 v144; // rax
  __int64 v145; // rax
  __int64 v146; // rax
  size_t v147; // rax
  _QWORD *v148; // rax
  __int64 v149; // rbx
  __int64 v150; // rcx
  unsigned __int64 v151; // rdx
  unsigned __int64 v152; // rax
  unsigned __int64 v153; // rdx
  unsigned __int64 v154; // [rsp+0h] [rbp-1E8h] BYREF
  __int64 v155; // [rsp+8h] [rbp-1E0h]
  char *v156; // [rsp+10h] [rbp-1D8h]
  unsigned __int64 *v157; // [rsp+18h] [rbp-1D0h]
  __int64 v158; // [rsp+20h] [rbp-1C8h]
  __int64 v159; // [rsp+28h] [rbp-1C0h]
  unsigned __int64 v160; // [rsp+30h] [rbp-1B8h]
  char v161; // [rsp+3Eh] [rbp-1AAh]
  unsigned __int8 v162; // [rsp+3Fh] [rbp-1A9h]
  char **v163; // [rsp+40h] [rbp-1A8h] BYREF
  __int64 v164; // [rsp+48h] [rbp-1A0h]
  _BYTE v165[32]; // [rsp+50h] [rbp-198h] BYREF
  unsigned __int64 v166; // [rsp+70h] [rbp-178h] BYREF
  __int64 v167; // [rsp+78h] [rbp-170h] BYREF
  unsigned int v168; // [rsp+80h] [rbp-168h]
  __int64 v169; // [rsp+88h] [rbp-160h]
  int v170; // [rsp+90h] [rbp-158h]
  __int64 v171; // [rsp+98h] [rbp-150h]
  int v172; // [rsp+A0h] [rbp-148h]
  __int64 v173; // [rsp+A8h] [rbp-140h]
  unsigned int v174; // [rsp+B0h] [rbp-138h]
  void *v175; // [rsp+B8h] [rbp-130h] BYREF
  unsigned __int64 v176; // [rsp+C0h] [rbp-128h]
  unsigned __int64 v177; // [rsp+110h] [rbp-D8h] BYREF
  unsigned __int64 v178; // [rsp+118h] [rbp-D0h] BYREF
  __int64 v179; // [rsp+120h] [rbp-C8h]
  __m128 v180; // [rsp+128h] [rbp-C0h]
  __int64 v181; // [rsp+138h] [rbp-B0h]
  int v182; // [rsp+140h] [rbp-A8h]
  __int64 v183; // [rsp+148h] [rbp-A0h]
  unsigned int v184; // [rsp+150h] [rbp-98h]
  void *ptr; // [rsp+158h] [rbp-90h] BYREF
  unsigned __int64 v186; // [rsp+160h] [rbp-88h]
  _BYTE v187[128]; // [rsp+168h] [rbp-80h] BYREF

  v7 = *(_BYTE *)(a1 + 9412);
  *(_BYTE *)(a1 + 9412) = 0;
  v162 = v7;
  while ( 1 )
  {
    v8 = *(_DWORD *)(a1 + 3328);
    j = v8;
    if ( !v8 )
    {
      v10 = *(unsigned int *)(a1 + 3480);
      if ( !(_DWORD)v10 )
      {
        v11 = *(unsigned int *)(a1 + 3560);
        if ( !(_DWORD)v11 )
          break;
      }
    }
    v166 = 1;
    v12 = (unsigned __int64 *)(a1 + 3248);
    v157 = &v166;
    v13 = (void **)&v167;
    do
    {
      *v13 = (void *)-4096LL;
      v13 += 2;
    }
    while ( v13 != &v175 );
    v14 = *(_DWORD *)(a1 + 3248) & 0xFFFFFFFE;
    *(_DWORD *)(a1 + 3248) = *(_DWORD *)(a1 + 3248) & 1 | (2 * ((unsigned int)v166 >> 1));
    v15 = v14 | v166 & 1;
    v16 = *(_DWORD *)(a1 + 3252);
    *(_DWORD *)(a1 + 3252) = 0;
    v166 = __PAIR64__(v16, v15);
    if ( (v15 & 1) == 0 )
    {
      v17 = a1 + 3248;
      v18 = v167;
      v12 = v157;
      if ( (*(_BYTE *)(a1 + 3248) & 1) == 0 )
      {
        v124 = *(_QWORD *)(a1 + 3256);
        i = *(unsigned int *)(a1 + 3264);
        *(_QWORD *)(a1 + 3256) = v167;
        v167 = v124;
        LODWORD(v124) = v168;
        v168 = i;
        *(_DWORD *)(a1 + 3264) = v124;
        goto LABEL_22;
      }
LABEL_9:
      *(_BYTE *)v12 |= 1u;
      v19 = *(_QWORD *)(v17 + 8);
      i = *((unsigned int *)v12 + 4);
      v12[1] = v19;
      if ( v19 != -8192 && v19 != -4096 )
        *((_DWORD *)v12 + 4) = *(_DWORD *)(v17 + 16);
      v21 = *(_QWORD *)(v17 + 24);
      v12[3] = v21;
      if ( v21 != -8192 && v21 != -4096 )
        *((_DWORD *)v12 + 8) = *(_DWORD *)(v17 + 32);
      v22 = *(_QWORD *)(v17 + 40);
      v12[5] = v22;
      if ( v22 != -4096 && v22 != -8192 )
        *((_DWORD *)v12 + 12) = *(_DWORD *)(v17 + 48);
      v23 = *(_QWORD *)(v17 + 56);
      v12[7] = v23;
      if ( v23 != -4096 && v23 != -8192 )
        *((_DWORD *)v12 + 16) = *(_DWORD *)(v17 + 64);
      *(_BYTE *)v17 &= ~1u;
      *(_QWORD *)(v17 + 8) = v18;
      *(_DWORD *)(v17 + 16) = i;
      j = *(unsigned int *)(a1 + 3328);
      goto LABEL_22;
    }
    v18 = *(_QWORD *)(a1 + 3256);
    v17 = (size_t)v157;
    if ( (*(_BYTE *)(a1 + 3248) & 1) == 0 )
      goto LABEL_9;
    v100 = v167;
    LOBYTE(v16) = v167 != -4096;
    LOBYTE(v17) = v167 != -8192;
    v101 = v17 & v16;
    if ( v18 == -4096 || v18 == -8192 )
    {
      v167 = *(_QWORD *)(a1 + 3256);
      *(_QWORD *)(a1 + 3256) = v100;
      if ( (_BYTE)v101 )
        *(_DWORD *)(a1 + 3264) = v168;
    }
    else
    {
      LODWORD(v17) = *(_DWORD *)(a1 + 3264);
      if ( (_BYTE)v101 )
      {
        v101 = v168;
        v167 = *(_QWORD *)(a1 + 3256);
        v168 = v17;
        *(_QWORD *)(a1 + 3256) = v100;
        *(_DWORD *)(a1 + 3264) = v101;
      }
      else
      {
        v167 = *(_QWORD *)(a1 + 3256);
        *(_QWORD *)(a1 + 3256) = v100;
        v168 = v17;
      }
    }
    v102 = v169;
    LOBYTE(v17) = v169 != -4096;
    LOBYTE(v101) = v169 != -8192;
    LODWORD(v17) = v101 & v17;
    v103 = *(_QWORD *)(a1 + 3272);
    if ( v103 == -4096 || v103 == -8192 )
    {
      v169 = *(_QWORD *)(a1 + 3272);
      *(_QWORD *)(a1 + 3272) = v102;
      if ( (_BYTE)v17 )
        *(_DWORD *)(a1 + 3280) = v170;
    }
    else
    {
      v104 = *(_DWORD *)(a1 + 3280);
      if ( (_BYTE)v17 )
      {
        LODWORD(v17) = v170;
        v169 = *(_QWORD *)(a1 + 3272);
        v170 = v104;
        *(_QWORD *)(a1 + 3272) = v102;
        *(_DWORD *)(a1 + 3280) = v17;
      }
      else
      {
        v169 = *(_QWORD *)(a1 + 3272);
        *(_QWORD *)(a1 + 3272) = v102;
        v170 = v104;
      }
    }
    v105 = v171;
    LOBYTE(v17) = v171 != -8192;
    LOBYTE(v103) = v171 != -4096;
    LODWORD(v17) = v103 & v17;
    v106 = *(_QWORD *)(a1 + 3288);
    if ( v106 == -4096 || v106 == -8192 )
    {
      v171 = *(_QWORD *)(a1 + 3288);
      *(_QWORD *)(a1 + 3288) = v105;
      if ( (_BYTE)v17 )
        *(_DWORD *)(a1 + 3296) = v172;
    }
    else
    {
      v107 = *(_DWORD *)(a1 + 3296);
      if ( (_BYTE)v17 )
      {
        LODWORD(v17) = v172;
        v171 = *(_QWORD *)(a1 + 3288);
        v172 = v107;
        *(_QWORD *)(a1 + 3288) = v105;
        *(_DWORD *)(a1 + 3296) = v17;
      }
      else
      {
        v171 = *(_QWORD *)(a1 + 3288);
        *(_QWORD *)(a1 + 3288) = v105;
        v172 = v107;
      }
    }
    v108 = v173;
    LOBYTE(v17) = v173 != -4096;
    LOBYTE(v106) = v173 != -8192;
    v17 = (unsigned int)v106 & (unsigned int)v17;
    i = *(_QWORD *)(a1 + 3304);
    if ( i == -4096 || i == -8192 )
    {
      v173 = *(_QWORD *)(a1 + 3304);
      j = v8;
      *(_QWORD *)(a1 + 3304) = v108;
      if ( (_BYTE)v17 )
        *(_DWORD *)(a1 + 3312) = v174;
    }
    else
    {
      v109 = *(_DWORD *)(a1 + 3312);
      if ( (_BYTE)v17 )
      {
        v17 = v174;
        v173 = *(_QWORD *)(a1 + 3304);
        j = v8;
        v174 = v109;
        *(_QWORD *)(a1 + 3304) = v108;
        *(_DWORD *)(a1 + 3312) = v17;
      }
      else
      {
        v173 = *(_QWORD *)(a1 + 3304);
        j = v8;
        *(_QWORD *)(a1 + 3304) = v108;
        v174 = v109;
      }
    }
LABEL_22:
    v24 = 0x400000000LL;
    v176 = 0x400000000LL;
    v25 = v157 + 11;
    v175 = v157 + 11;
    if ( (_DWORD)j )
    {
      i = *(_QWORD *)(a1 + 3320);
      v24 = a1 + 3336;
      if ( i == a1 + 3336 )
      {
        v17 = 16LL * (unsigned int)j;
        if ( (unsigned int)j <= 4uLL
          || (sub_2237220(v157 + 9, v157 + 11, (unsigned int)j, 16),
              v25 = v175,
              v24 = *(_QWORD *)(a1 + 3320),
              (v17 = 16LL * *(unsigned int *)(a1 + 3328)) != 0) )
        {
          memcpy(v25, (const void *)v24, v17);
        }
        LODWORD(v176) = j;
        *(_DWORD *)(a1 + 3328) = 0;
      }
      else
      {
        v120 = *(_DWORD *)(a1 + 3332);
        v175 = *(void **)(a1 + 3320);
        v176 = __PAIR64__(v120, j);
        *(_QWORD *)(a1 + 3320) = v24;
        *(_QWORD *)(a1 + 3328) = 0;
      }
    }
    v26 = *(_DWORD *)(a1 + 3248) >> 1;
    if ( v26 )
    {
      if ( (*(_BYTE *)(a1 + 3248) & 1) != 0 )
      {
LABEL_188:
        v27 = (_QWORD *)(a1 + 3256);
        v28 = 8;
        goto LABEL_29;
      }
      v17 = (unsigned int)(4 * v26);
    }
    else
    {
      v17 = *(unsigned int *)(a1 + 3252);
      if ( !(_DWORD)v17 )
        goto LABEL_32;
      v17 = 0;
      if ( (*(_BYTE *)(a1 + 3248) & 1) != 0 )
        goto LABEL_188;
    }
    i = *(unsigned int *)(a1 + 3264);
    if ( (unsigned int)i <= (unsigned int)v17 || (unsigned int)i <= 0x40 )
    {
      v27 = *(_QWORD **)(a1 + 3256);
      v28 = 2 * i;
LABEL_29:
      for ( i = (unsigned __int64)&v27[v28]; (_QWORD *)i != v27; v27 += 2 )
        *v27 = -4096;
      *(_QWORD *)(a1 + 3248) &= 1uLL;
      goto LABEL_32;
    }
    if ( !v26 || (v138 = v26 - 1) == 0 )
    {
      v24 = 16LL * *(unsigned int *)(a1 + 3264);
      operator delete(*(_QWORD *)(a1 + 3256), v24, 8);
      *(_BYTE *)(a1 + 3248) |= 1u;
      goto LABEL_206;
    }
    _BitScanReverse(&v138, v138);
    v139 = 1 << (33 - (v138 ^ 0x1F));
    if ( v139 - 5 <= 0x3A )
    {
      v139 = 64;
      operator delete(*(_QWORD *)(a1 + 3256), 16LL * *(unsigned int *)(a1 + 3264), 8);
      v141 = *(_BYTE *)(a1 + 3248);
      v142 = 1024;
      goto LABEL_259;
    }
    if ( (_DWORD)i != v139 )
    {
      v24 = 16LL * *(unsigned int *)(a1 + 3264);
      operator delete(*(_QWORD *)(a1 + 3256), v24, 8);
      v141 = *(_BYTE *)(a1 + 3248) | 1;
      *(_BYTE *)(a1 + 3248) = v141;
      if ( v139 <= 4 )
      {
LABEL_206:
        v125 = (*(_QWORD *)(a1 + 3248) & 1LL) == 0;
        *(_QWORD *)(a1 + 3248) &= 1uLL;
        if ( v125 )
          goto LABEL_260;
      }
      else
      {
        v142 = 16LL * v139;
LABEL_259:
        v24 = 8;
        *(_BYTE *)(a1 + 3248) = v141 & 0xFE;
        v143 = sub_22300B0(v142, 8, v140, v17, v18, a6);
        v125 = (*(_QWORD *)(a1 + 3248) & 1LL) == 0;
        *(_QWORD *)(a1 + 3248) &= 1uLL;
        *(_QWORD *)(a1 + 3256) = v143;
        *(_DWORD *)(a1 + 3264) = v139;
        if ( v125 )
        {
LABEL_260:
          v126 = *(_QWORD **)(a1 + 3256);
          v127 = 2LL * *(unsigned int *)(a1 + 3264);
LABEL_208:
          i = (unsigned __int64)&v126[v127];
          for ( j = (unsigned int)v176; (_QWORD *)i != v126; v126 += 2 )
            *v126 = -4096;
          goto LABEL_32;
        }
      }
      v126 = (_QWORD *)(a1 + 3256);
      v127 = 8;
      goto LABEL_208;
    }
    v125 = (*(_QWORD *)(a1 + 3248) & 1LL) == 0;
    *(_QWORD *)(a1 + 3248) &= 1uLL;
    if ( v125 )
    {
      v17 = *(_QWORD *)(a1 + 3256);
      v146 = 16LL * (unsigned int)i;
    }
    else
    {
      v17 = a1 + 3256;
      v146 = 64;
    }
    v147 = v17 + v146;
    do
    {
      *(_QWORD *)v17 = -4096;
      v17 += 16LL;
    }
    while ( v147 != v17 );
    j = (unsigned int)v176;
LABEL_32:
    v29 = (char *)v175;
    v30 = 16 * j;
    *(_DWORD *)(a1 + 3328) = 0;
    v156 = &v29[v30];
    if ( v29 == &v29[v30] )
      goto LABEL_66;
    v161 = *(_BYTE *)(a1 + 9267);
    do
    {
      v31 = *((_QWORD *)v29 + 1);
      *(_BYTE *)(a1 + 9267) = 1;
      v32 = *(_QWORD *)(v31 + 48) & 0xFFFFFFFFFFFFFFF0LL;
      v33 = *(_QWORD *)v32;
      if ( *(_BYTE *)(*(_QWORD *)v32 + 16LL) != 26 )
        v33 = sub_F63050(v33, v24, i, v17);
      v34 = *(_BYTE *)(v33 + 19);
      v35 = ((unsigned __int8)v34 >> 1) & 0xF;
      v36 = v35;
      if ( v35 == 2 )
      {
        v76 = *(_QWORD *)(v33 + 16);
        v77 = 8LL * *(unsigned __int16 *)(v33 + 22) + 48;
        v78 = (v76 & 0x40000000) != 0;
        if ( (v34 & 0x40) != 0 )
          v78 += (*(_BYTE *)(((v33 + v77 + ((v34 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 1) & 4) != 0;
        v44 = ((v33 + v77 + ((SBYTE3(v76) >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 8 * v78;
        v79 = (v76 & 0x40000000) != 0;
        v80 = (v33 + v77 + ((SBYTE3(v76) >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL;
        if ( (v34 & 0x40) != 0 )
          v79 += (*(_BYTE *)(((v33 + v77 + ((v34 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 1) & 4) != 0;
        v155 = 0;
        v81 = v76 >> 24;
        v43 = (__int64)(v80
                      + 8
                      * ((*(_WORD *)((v33 + v77 + (((char)v81 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) & 0x3FF) + v79)
                      - v44) >> 3;
        v38 = v81 & 1;
        if ( !(_DWORD)v38 )
        {
          v42 = 0;
          v154 = 0;
          goto LABEL_109;
        }
LABEL_119:
        v42 = 0;
        v154 = 0;
        goto LABEL_45;
      }
      if ( (unsigned int)v35 - 6 <= 2 )
      {
        v37 = 8LL * *(unsigned __int16 *)(v33 + 22) + 48;
        v38 = *(_QWORD *)(v33 + 16);
        v39 = (v38 & 0x40000000) != 0;
        v40 = (v33 + v37 + ((SBYTE3(v38) >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL;
        if ( (v34 & 0x40) != 0 )
          v39 += (*(_BYTE *)(((v33 + v37 + ((v34 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 1) & 4) != 0;
        v41 = (__int64 *)(v40 + 8 * v39);
        if ( v35 == 2 )
          v41 = (__int64 *)(v40
                          + 8
                          * ((*(_WORD *)((v33 + ((SBYTE3(v38) >> 5) & 4) + v37 + 7) & 0xFFFFFFFFFFFFFFF8LL) & 0x3FF)
                           + v39));
        v155 = *v41;
        if ( (v38 & 0x1000000) == 0 )
        {
LABEL_108:
          v154 = 0;
          v42 = 0;
          v43 = 0;
          v44 = 0;
LABEL_109:
          if ( *(_BYTE *)(v33 + 16) != 26
            && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v33 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 26 )
          {
            v160 = v44;
            v159 = v43;
            v158 = v42;
            sub_F63050(v33, v44, v43, v38);
            v44 = v160;
            v43 = v159;
            v42 = v158;
          }
          goto LABEL_45;
        }
        goto LABEL_43;
      }
      if ( v35 == 10 )
      {
        v38 = *(_QWORD *)(v33 + 16);
        v82 = 8LL * *(unsigned __int16 *)(v33 + 22) + 48;
        v83 = (v38 & 0x40000000) != 0;
        if ( (v34 & 0x40) != 0 )
          v83 += (*(_BYTE *)(((v33 + v82 + ((v34 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 1) & 4) != 0;
        v154 = *(_QWORD *)(((v33 + v82 + ((SBYTE3(v38) >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 8 * v83);
        v84 = (v38 & 0x40000000) != 0;
        if ( (v34 & 0x40) != 0 )
          v84 += (*(_BYTE *)(((v33 + ((v34 >> 5) & 4) + v82 + 7) & 0xFFFFFFFFFFFFFFF8LL) + 1) & 4) != 0;
        v42 = *(_QWORD *)(((v33 + v82 + ((SBYTE3(v38) >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 8 * v84 + 8);
      }
      else
      {
        if ( v35 != 9 )
        {
          v155 = 0;
          v38 = *(_QWORD *)(v33 + 16);
          if ( (v38 & 0x1000000) == 0 )
            goto LABEL_108;
LABEL_43:
          if ( v35 != 2 )
          {
            v154 = 0;
            v42 = 0;
            v43 = 0;
            v44 = 0;
            goto LABEL_45;
          }
          v43 = 0;
          v44 = 0;
          goto LABEL_119;
        }
        v38 = *(_QWORD *)(v33 + 16);
        v97 = 8LL * *(unsigned __int16 *)(v33 + 22) + 48;
        v98 = (v38 & 0x40000000) != 0;
        v99 = (v33 + v97 + ((SBYTE3(v38) >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL;
        if ( (v34 & 0x40) != 0 )
          v98 += (*(_BYTE *)(((v33 + v97 + ((v34 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 1) & 4) != 0;
        v42 = 0;
        v154 = *(_QWORD *)(v99 + 8 * v98);
      }
      v155 = 0;
      v43 = 0;
      v44 = 0;
      if ( (v38 & 0x1000000) == 0 )
        goto LABEL_109;
LABEL_45:
      v45 = *(_QWORD *)(a1 + 144);
      LODWORD(v177) = v36;
      v178 = v44;
      v46 = _mm_loadh_ps((const double *)&v154);
      v179 = v43;
      v180 = v46;
      v181 = v42;
      v47 = *(_QWORD *)(v45 + 18368);
      if ( v47 )
      {
        v48 = *(void (**)())(*(_QWORD *)v47 + 64LL);
        if ( v48 != nullsub_436 )
        {
          ((void (__fastcall *)(_QWORD, unsigned __int64))v48)(*(_QWORD *)(v45 + 18368), v31);
          v45 = *(_QWORD *)(a1 + 144);
        }
      }
      v49 = v31;
      v50 = 0;
      while ( 1 )
      {
        v24 = v49;
        sub_A823F0(v45, v49, (__int64)&v177, 0);
        v51 = *(_QWORD *)(v49 + 104);
        if ( (v51 & 1) != 0 )
        {
          if ( v50 )
            break;
          i = v51 & 0xFFFFFFFFFFFFFFFELL;
LABEL_57:
          v52 = v51 & 0xFFFFFFFFFFFFFFF8LL;
          v50 = 1;
          v17 = v52;
          if ( i )
          {
            i &= 4u;
            if ( (_DWORD)i )
            {
              if ( v52 )
              {
                v53 = *(__int64 **)v52;
                i = *(unsigned int *)(*(_QWORD *)v52 + 12LL);
                if ( *(_DWORD *)(v52 + 8) != (_DWORD)i )
                {
                  *(_DWORD *)(v52 + 8) = i;
                  v54 = *v53;
                  v24 = v49;
                  v154 = v52;
                  (*(void (__fastcall **)(__int64 *, unsigned __int64, __int64, unsigned __int64))(v54 + 152))(
                    v53,
                    v49,
                    v54,
                    v52);
                  v52 = v154;
                }
                v17 = *(_QWORD *)(v52 + 16);
                v50 = 1;
              }
            }
          }
          goto LABEL_63;
        }
        if ( (v51 & 2) != 0 )
        {
          if ( v50 )
            break;
          v148 = (_QWORD *)(v51 & 0xFFFFFFFFFFFFFFFCLL);
          v50 = 1;
          if ( v148 )
          {
            v149 = v148[2295];
            if ( v149 )
            {
              v150 = v148[294];
              v148[304] += 24LL;
              v151 = (v150 + 7) & 0xFFFFFFFFFFFFFFF8LL;
              v24 = v151 + 24;
              if ( v148[295] >= v151 + 24 && v150 )
              {
                v148[294] = v24;
                v152 = (v150 + 7) & 0xFFFFFFFFFFFFFFF8LL;
              }
              else
              {
                v24 = 24;
                v152 = sub_986170((__int64)(v148 + 294), 24, 24, 3, v18, a6);
                v151 = v152 & 0xFFFFFFFFFFFFFFFBLL;
              }
              *(_QWORD *)v152 = v149;
              v153 = v151 | 4;
              *(_DWORD *)(v152 + 8) = 0;
              *(_QWORD *)(v152 + 16) = v49;
            }
            else
            {
              v153 = v49 & 0xFFFFFFFFFFFFFFFBLL;
            }
            i = v153 & 0xFFFFFFFFFFFFFFFELL;
            v51 = i | 1;
            *(_QWORD *)(v49 + 104) = i | 1;
            goto LABEL_57;
          }
LABEL_286:
          v17 = 0;
LABEL_63:
          v49 = v17;
          goto LABEL_51;
        }
        v49 = v51 & 0xFFFFFFFFFFFFFFFCLL;
        if ( (v51 & 0xFFFFFFFFFFFFFFFCLL) == 0 )
          goto LABEL_286;
LABEL_51:
        if ( v31 == v49 || !v49 )
          break;
        v45 = *(_QWORD *)(a1 + 144);
      }
      v29 += 16;
      *(_BYTE *)(a1 + 9267) = v161;
    }
    while ( v156 != v29 );
LABEL_66:
    v55 = (unsigned __int64 *)(a1 + 3400);
    v177 = 1;
    v56 = (void **)&v178;
    do
    {
      *v56 = (void *)-4096LL;
      v56 += 2;
    }
    while ( v56 != &ptr );
    v57 = *(_DWORD *)(a1 + 3400) & 0xFFFFFFFE;
    a4 = *(_DWORD *)(a1 + 3400) & 1;
    *(_DWORD *)(a1 + 3400) = a4 | (2 * ((unsigned int)v177 >> 1));
    v58 = v57 | v177 & 1;
    v59 = *(_DWORD *)(a1 + 3404);
    *(_DWORD *)(a1 + 3404) = 0;
    v177 = __PAIR64__(v59, v58);
    if ( (v58 & 1) != 0 )
    {
      v61 = *(_QWORD *)(a1 + 3408);
      v60 = &v177;
      if ( (*(_BYTE *)(a1 + 3400) & 1) == 0 )
        goto LABEL_70;
      v110 = v178;
      LOBYTE(v59) = v178 != -4096;
      LOBYTE(a4) = v178 != -8192;
      v111 = a4 & v59;
      if ( v61 == -4096 || v61 == -8192 )
      {
        v178 = *(_QWORD *)(a1 + 3408);
        *(_QWORD *)(a1 + 3408) = v110;
        if ( (_BYTE)v111 )
          *(_DWORD *)(a1 + 3416) = v179;
      }
      else
      {
        LODWORD(a4) = *(_DWORD *)(a1 + 3416);
        if ( (_BYTE)v111 )
        {
          v111 = v179;
          v178 = *(_QWORD *)(a1 + 3408);
          LODWORD(v179) = a4;
          *(_QWORD *)(a1 + 3408) = v110;
          *(_DWORD *)(a1 + 3416) = v111;
        }
        else
        {
          v178 = *(_QWORD *)(a1 + 3408);
          *(_QWORD *)(a1 + 3408) = v110;
          LODWORD(v179) = a4;
        }
      }
      v112 = v180.m128_u64[0];
      LOBYTE(a4) = v180.m128_u64[0] != -4096;
      LOBYTE(v111) = v180.m128_u64[0] != -8192;
      LODWORD(a4) = v111 & a4;
      v113 = *(_QWORD *)(a1 + 3424);
      if ( v113 == -4096 || v113 == -8192 )
      {
        v180.m128_u64[0] = *(_QWORD *)(a1 + 3424);
        *(_QWORD *)(a1 + 3424) = v112;
        if ( (_BYTE)a4 )
          *(_DWORD *)(a1 + 3432) = v180.m128_i32[2];
      }
      else
      {
        v114 = *(_DWORD *)(a1 + 3432);
        if ( (_BYTE)a4 )
        {
          LODWORD(a4) = v180.m128_i32[2];
          v180.m128_u64[0] = *(_QWORD *)(a1 + 3424);
          v180.m128_i32[2] = v114;
          *(_QWORD *)(a1 + 3424) = v112;
          *(_DWORD *)(a1 + 3432) = a4;
        }
        else
        {
          v180.m128_u64[0] = *(_QWORD *)(a1 + 3424);
          *(_QWORD *)(a1 + 3424) = v112;
          v180.m128_i32[2] = v114;
        }
      }
      v115 = v181;
      LOBYTE(a4) = v181 != -8192;
      LOBYTE(v113) = v181 != -4096;
      LODWORD(a4) = v113 & a4;
      v116 = *(_QWORD *)(a1 + 3440);
      if ( v116 == -4096 || v116 == -8192 )
      {
        v181 = *(_QWORD *)(a1 + 3440);
        *(_QWORD *)(a1 + 3440) = v115;
        if ( (_BYTE)a4 )
          *(_DWORD *)(a1 + 3448) = v182;
      }
      else
      {
        v117 = *(_DWORD *)(a1 + 3448);
        if ( (_BYTE)a4 )
        {
          LODWORD(a4) = v182;
          v181 = *(_QWORD *)(a1 + 3440);
          v182 = v117;
          *(_QWORD *)(a1 + 3440) = v115;
          *(_DWORD *)(a1 + 3448) = a4;
        }
        else
        {
          v181 = *(_QWORD *)(a1 + 3440);
          *(_QWORD *)(a1 + 3440) = v115;
          v182 = v117;
        }
      }
      v118 = v183;
      LOBYTE(a4) = v183 != -8192;
      LOBYTE(v116) = v183 != -4096;
      a4 = (unsigned int)v116 & (unsigned int)a4;
      k = *(_QWORD *)(a1 + 3456);
      if ( k == -4096 || k == -8192 )
      {
        v183 = *(_QWORD *)(a1 + 3456);
        *(_QWORD *)(a1 + 3456) = v118;
        if ( (_BYTE)a4 )
          *(_DWORD *)(a1 + 3464) = v184;
      }
      else
      {
        v119 = *(_DWORD *)(a1 + 3464);
        if ( (_BYTE)a4 )
        {
          a4 = v184;
          v183 = *(_QWORD *)(a1 + 3456);
          v184 = v119;
          *(_QWORD *)(a1 + 3456) = v118;
          *(_DWORD *)(a1 + 3464) = a4;
        }
        else
        {
          v183 = *(_QWORD *)(a1 + 3456);
          *(_QWORD *)(a1 + 3456) = v118;
          v184 = v119;
        }
      }
    }
    else
    {
      v60 = (unsigned __int64 *)(a1 + 3400);
      v61 = v178;
      v55 = &v177;
      if ( (*(_BYTE *)(a1 + 3400) & 1) != 0 )
      {
LABEL_70:
        *(_BYTE *)v55 |= 1u;
        v62 = v60[1];
        a4 = *((unsigned int *)v55 + 4);
        v55[1] = v62;
        if ( v62 != -4096 && v62 != -8192 )
          *((_DWORD *)v55 + 4) = *((_DWORD *)v60 + 4);
        v63 = v60[3];
        v55[3] = v63;
        if ( v63 != -4096 && v63 != -8192 )
          *((_DWORD *)v55 + 8) = *((_DWORD *)v60 + 8);
        v64 = v60[5];
        v55[5] = v64;
        if ( v64 != -4096 && v64 != -8192 )
          *((_DWORD *)v55 + 12) = *((_DWORD *)v60 + 12);
        k = v60[7];
        v55[7] = k;
        if ( k != -4096 && k != -8192 )
        {
          k = *((unsigned int *)v60 + 16);
          *((_DWORD *)v55 + 16) = k;
        }
        *(_BYTE *)v60 &= ~1u;
        v60[1] = v61;
        *((_DWORD *)v60 + 4) = a4;
      }
      else
      {
        v123 = *(_QWORD *)(a1 + 3408);
        k = *(unsigned int *)(a1 + 3416);
        *(_QWORD *)(a1 + 3408) = v178;
        v178 = v123;
        LODWORD(v123) = v179;
        LODWORD(v179) = k;
        *(_DWORD *)(a1 + 3416) = v123;
      }
    }
    m = *(unsigned int *)(a1 + 3480);
    v66 = v187;
    ptr = v187;
    v186 = 0x400000000LL;
    if ( (_DWORD)m )
    {
      k = *(_QWORD *)(a1 + 3472);
      v121 = (const void *)(a1 + 3488);
      if ( k == a1 + 3488 )
      {
        a4 = 16LL * (unsigned int)m;
        if ( (unsigned int)m <= 4uLL
          || (sub_2237220(&ptr, v187, (unsigned int)m, 16),
              v66 = ptr,
              v121 = *(const void **)(a1 + 3472),
              (a4 = 16LL * *(unsigned int *)(a1 + 3480)) != 0) )
        {
          memcpy(v66, v121, a4);
        }
        LODWORD(v186) = m;
        *(_DWORD *)(a1 + 3480) = 0;
      }
      else
      {
        v122 = *(_DWORD *)(a1 + 3484);
        ptr = *(void **)(a1 + 3472);
        v186 = __PAIR64__(v122, m);
        *(_QWORD *)(a1 + 3472) = v121;
        *(_QWORD *)(a1 + 3480) = 0;
      }
    }
    v67 = *(_DWORD *)(a1 + 3400) >> 1;
    if ( v67 )
    {
      if ( (*(_BYTE *)(a1 + 3400) & 1) == 0 )
      {
        a4 = (unsigned int)(4 * v67);
        goto LABEL_87;
      }
LABEL_189:
      v69 = (_QWORD *)(a1 + 3408);
      v70 = 8;
LABEL_90:
      for ( k = (unsigned __int64)&v69[v70]; (_QWORD *)k != v69; v69 += 2 )
        *v69 = -4096;
      *(_QWORD *)(a1 + 3400) &= 1uLL;
      goto LABEL_93;
    }
    k = *(unsigned int *)(a1 + 3404);
    if ( !(_DWORD)k )
      goto LABEL_93;
    a4 = 0;
    if ( (*(_BYTE *)(a1 + 3400) & 1) != 0 )
      goto LABEL_189;
LABEL_87:
    v68 = *(unsigned int *)(a1 + 3416);
    if ( (unsigned int)v68 <= (unsigned int)a4 || (unsigned int)v68 <= 0x40 )
    {
      v69 = *(_QWORD **)(a1 + 3408);
      v70 = 2LL * (unsigned int)v68;
      goto LABEL_90;
    }
    if ( !v67 || (v132 = v67 - 1) == 0 )
    {
      operator delete(*(_QWORD *)(a1 + 3408), 16 * v68, 8);
      *(_BYTE *)(a1 + 3400) |= 1u;
LABEL_237:
      v125 = (*(_QWORD *)(a1 + 3400) & 1LL) == 0;
      *(_QWORD *)(a1 + 3400) &= 1uLL;
      if ( v125 )
        goto LABEL_255;
      goto LABEL_238;
    }
    _BitScanReverse(&v132, v132);
    v133 = 1 << (33 - (v132 ^ 0x1F));
    if ( v133 - 5 <= 0x3A )
    {
      v133 = 64;
      operator delete(*(_QWORD *)(a1 + 3408), 16 * v68, 8);
      v135 = *(_BYTE *)(a1 + 3400);
      v136 = 1024;
      goto LABEL_254;
    }
    if ( (_DWORD)v68 == v133 )
    {
      v125 = (*(_QWORD *)(a1 + 3400) & 1LL) == 0;
      *(_QWORD *)(a1 + 3400) &= 1uLL;
      if ( v125 )
      {
        a4 = *(_QWORD *)(a1 + 3408);
        v144 = 16LL * (unsigned int)v68;
      }
      else
      {
        a4 = a1 + 3408;
        v144 = 64;
      }
      v145 = a4 + v144;
      do
      {
        *(_QWORD *)a4 = -4096;
        a4 += 16;
      }
      while ( v145 != a4 );
      m = (unsigned int)v186;
      goto LABEL_93;
    }
    operator delete(*(_QWORD *)(a1 + 3408), 16 * v68, 8);
    v135 = *(_BYTE *)(a1 + 3400) | 1;
    *(_BYTE *)(a1 + 3400) = v135;
    if ( v133 <= 4 )
      goto LABEL_237;
    v136 = 16LL * v133;
LABEL_254:
    *(_BYTE *)(a1 + 3400) = v135 & 0xFE;
    v137 = sub_22300B0(v136, 8, v134, a4, v18, a6);
    v125 = (*(_QWORD *)(a1 + 3400) & 1LL) == 0;
    *(_QWORD *)(a1 + 3400) &= 1uLL;
    *(_QWORD *)(a1 + 3408) = v137;
    *(_DWORD *)(a1 + 3416) = v133;
    if ( v125 )
    {
LABEL_255:
      v128 = *(_QWORD **)(a1 + 3408);
      v129 = 2LL * *(unsigned int *)(a1 + 3416);
      goto LABEL_239;
    }
LABEL_238:
    v128 = (_QWORD *)(a1 + 3408);
    v129 = 8;
LABEL_239:
    k = (unsigned __int64)&v128[v129];
    for ( m = (unsigned int)v186; (_QWORD *)k != v128; v128 += 2 )
      *v128 = -4096;
LABEL_93:
    v71 = (__int64 *)ptr;
    *(_DWORD *)(a1 + 3480) = 0;
    v72 = &v71[2 * m];
    if ( v71 != v72 )
    {
      v73 = *(_BYTE *)(a1 + 9267);
      do
      {
        v74 = v71[1];
        v75 = *v71;
        *(_BYTE *)(a1 + 9267) = 1;
        v71 += 2;
        sub_A82820(*(_QWORD *)(a1 + 144), v75, v74, a4, v18, a6);
        *(_BYTE *)(a1 + 9267) = v73;
      }
      while ( v72 != v71 );
    }
    v163 = (char **)v165;
    v164 = 0x400000000LL;
    if ( !*(_DWORD *)(a1 + 3560) )
      goto LABEL_97;
    sub_1EB4A10(&v163, (char ***)(a1 + 3552));
    v85 = v163;
    v86 = (unsigned int)v164;
    *(_DWORD *)(a1 + 3560) = 0;
    v87 = &v85[v86];
    if ( v87 == v85 )
      goto LABEL_139;
    while ( 2 )
    {
      while ( 2 )
      {
        v88 = *((_QWORD *)*v85 + 14);
        v89 = *(_QWORD *)(v88 + 104);
        k = v89 & 0xFFFFFFFFFFFFFFFELL;
        if ( (v89 & 1) == 0 )
        {
          a4 = v89 & 0xFFFFFFFFFFFFFFFCLL;
          if ( (v89 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
          {
            if ( (v89 & 2) == 0 )
              goto LABEL_131;
            v92 = *(_QWORD *)(a4 + 18360);
            v93 = v88 & 0xFFFFFFFFFFFFFFFBLL;
            if ( v92 )
            {
              v94 = *(_QWORD *)(a4 + 2352);
              *(_QWORD *)(a4 + 2432) += 24LL;
              v95 = (v94 + 7) & 0xFFFFFFFFFFFFFFF8LL;
              if ( *(_QWORD *)(a4 + 2360) >= v95 + 24 && v94 )
              {
                *(_QWORD *)(a4 + 2352) = v95 + 24;
                v96 = (v94 + 7) & 0xFFFFFFFFFFFFFFF8LL;
              }
              else
              {
                v154 = v92;
                v96 = sub_986170(a4 + 2352, 24, 24, 3, v92, a6);
                v92 = v154;
                v95 = v96 & 0xFFFFFFFFFFFFFFFBLL;
              }
              *(_QWORD *)v96 = v92;
              v93 = v95 | 4;
              *(_DWORD *)(v96 + 8) = 0;
              *(_QWORD *)(v96 + 16) = v88;
            }
            k = v93 & 0xFFFFFFFFFFFFFFFELL;
            v89 = k | 1;
            *(_QWORD *)(v88 + 104) = k | 1;
          }
        }
        if ( !k
          || (k &= 4u, !(_DWORD)k)
          || (v90 = (_DWORD *)(v89 & 0xFFFFFFFFFFFFFFF8LL)) == nullptr
          || (v91 = *(_QWORD *)v90, k = *(unsigned int *)(*(_QWORD *)v90 + 12LL), v90[2] == (_DWORD)k) )
        {
LABEL_131:
          if ( v87 == ++v85 )
            goto LABEL_138;
          continue;
        }
        break;
      }
      v90[2] = k;
      ++v85;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v91 + 152LL))(v91, v88);
      if ( v87 != v85 )
        continue;
      break;
    }
LABEL_138:
    v87 = v163;
LABEL_139:
    if ( v87 != (char **)v165 )
      free(v87);
LABEL_97:
    if ( ptr != v187 )
      free(ptr);
    if ( (v177 & 1) == 0 )
      operator delete(v178, 16LL * (unsigned int)v179, 8);
    if ( v175 != v157 + 11 )
      free(v175);
    if ( (v166 & 1) == 0 )
      operator delete(v167, 16LL * v168, 8);
  }
  v130 = *(_QWORD *)(a1 + 496);
  if ( v130 )
    sub_224E0F0(v130, v11, k, a4, v10);
  sub_1ED38C0(a1);
  result = v162;
  v125 = *(_QWORD *)(a1 + 152) == 0;
  *(_BYTE *)(a1 + 9412) = v162;
  if ( !v125 )
    return sub_1F37FE0(a1);
  return result;
}
