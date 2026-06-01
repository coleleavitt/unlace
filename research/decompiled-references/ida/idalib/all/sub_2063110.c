__int64 __fastcall sub_2063110(__int64 a1, __int64 *a2, char a3, unsigned __int64 i, char *a5, __int64 a6)
{
  _QWORD *v6; // r15
  __int64 v7; // r12
  __int64 v8; // rax
  __int64 result; // rax
  unsigned __int8 v10; // al
  _QWORD *v12; // rax
  __int64 v13; // rdx
  unsigned __int8 v14; // al
  __int64 *v15; // rbp
  __int64 v16; // r14
  signed __int64 v17; // r13
  __int64 v18; // rsi
  _QWORD *v19; // rdi
  int v20; // eax
  __int64 v21; // rdx
  unsigned __int8 v22; // al
  __int64 v23; // rdx
  unsigned __int8 v24; // al
  __int64 *v25; // r13
  __int64 v26; // r14
  _QWORD *v27; // r15
  _QWORD *v28; // rbp
  unsigned __int64 v29; // rbp
  int v30; // eax
  __int64 v31; // r15
  _QWORD *v32; // r15
  _QWORD *v33; // rdi
  __int64 v34; // rsi
  __int64 v35; // rdx
  unsigned __int8 v36; // al
  __int64 v37; // rdx
  unsigned __int8 v38; // al
  unsigned __int64 v39; // rbp
  __int64 v40; // rax
  __int64 v41; // r14
  __int64 v42; // rcx
  unsigned __int64 v43; // r13
  __int64 v44; // rdx
  unsigned __int64 v45; // rdi
  unsigned __int64 v46; // rax
  unsigned __int64 v47; // rax
  __int64 v48; // rcx
  unsigned __int64 v49; // rdx
  _QWORD *v50; // rbp
  _QWORD *v51; // rdx
  __int64 v52; // rdx
  unsigned __int8 v53; // al
  __int64 v54; // rdx
  unsigned __int8 v55; // al
  __int64 *v56; // r12
  __int64 v57; // r13
  _QWORD *v58; // r14
  _QWORD *v59; // rbp
  unsigned __int64 v60; // r14
  int v61; // eax
  __int64 v62; // r15
  _QWORD *v63; // r15
  _QWORD *v64; // rdi
  __int64 v65; // rsi
  __int64 v66; // rdx
  unsigned __int8 v67; // al
  unsigned __int8 v68; // dl
  __int64 v69; // rdx
  char *v70; // rax
  __int64 *v71; // r15
  __int64 v72; // r14
  char *v73; // r12
  unsigned int v74; // edi
  unsigned int v75; // edx
  char *v76; // rsi
  __int64 v77; // rax
  __int64 v78; // rbp
  unsigned __int64 v79; // rdi
  __int64 v80; // rdi
  __m128i *v81; // rax
  __int64 v82; // r14
  char *v83; // r8
  unsigned int v84; // r10d
  __int64 v85; // rcx
  __m128i *v86; // rdx
  unsigned __int64 v87; // rsi
  char *v88; // rcx
  bool v89; // si
  int v90; // r13d
  __int64 v91; // rdi
  bool v92; // dl
  unsigned int v93; // esi
  char *v94; // r9
  __int64 v95; // r11
  __int64 v96; // rdx
  __int64 v97; // rcx
  __int64 v98; // r8
  __int64 v99; // r9
  unsigned int v100; // edi
  __int64 v101; // rcx
  unsigned __int32 v102; // eax
  unsigned __int64 v103; // rsi
  __int64 v104; // r10
  int v105; // ecx
  int v106; // eax
  __int64 v107; // rcx
  __int64 v108; // rdx
  __int64 v109; // rdx
  __int64 v110; // rax
  unsigned __int64 v111; // rdx
  unsigned __int64 v112; // rdi
  unsigned __int64 v113; // rdi
  __int64 v114; // rdi
  __m128i *v115; // rax
  char *v116; // r8
  unsigned int v117; // r10d
  __int64 v118; // rcx
  __m128i *v119; // rdx
  unsigned __int64 v120; // rsi
  char *v121; // rcx
  bool v122; // di
  int v123; // r14d
  __int64 v124; // rsi
  bool v125; // dl
  unsigned int v126; // edi
  char *v127; // r9
  __int64 v128; // r11
  __int64 v129; // rsi
  int v130; // edi
  unsigned int v131; // ecx
  int v132; // r13d
  char *v133; // rdi
  int v134; // r8d
  __int64 v135; // rcx
  __m128i *v136; // rdx
  unsigned __int64 v137; // rsi
  __int64 v138; // rcx
  __m128i *v139; // rdx
  unsigned __int64 v140; // rsi
  int v141; // r11d
  unsigned __int64 v142; // rbp
  int v143; // eax
  int v144; // eax
  __int64 v145; // r9
  bool v146; // zf
  unsigned int v147; // eax
  __int64 v148; // rdx
  unsigned __int64 v149; // rax
  __int64 v150; // rdi
  unsigned __int64 v151; // rax
  __int64 v152; // rax
  unsigned __int64 v153; // rdx
  __int64 v154; // rbp
  __int64 v155; // rax
  unsigned __int64 v156; // rdx
  __int32 v157; // r12d
  void *v158; // rdi
  char *v159; // r8
  int v160; // r9d
  char *v161; // [rsp+0h] [rbp-E8h]
  __int64 *v162; // [rsp+0h] [rbp-E8h]
  void *v163; // [rsp+10h] [rbp-D8h]
  unsigned int v164; // [rsp+24h] [rbp-C4h]
  unsigned int v165; // [rsp+24h] [rbp-C4h]
  __int64 v166; // [rsp+28h] [rbp-C0h]
  char *v167; // [rsp+28h] [rbp-C0h]
  int v168; // [rsp+30h] [rbp-B8h]
  char *v169; // [rsp+30h] [rbp-B8h]
  int v170; // [rsp+38h] [rbp-B0h]
  __m128 v171; // [rsp+40h] [rbp-A8h] BYREF
  void *src; // [rsp+50h] [rbp-98h] BYREF
  __int64 v173; // [rsp+58h] [rbp-90h]
  unsigned int v174; // [rsp+60h] [rbp-88h]
  void *v175; // [rsp+68h] [rbp-80h] BYREF
  __int64 v176; // [rsp+70h] [rbp-78h]
  char v177[8]; // [rsp+78h] [rbp-70h] BYREF
  __m128 v178; // [rsp+80h] [rbp-68h] BYREF
  __int64 v179; // [rsp+90h] [rbp-58h]
  unsigned int v180; // [rsp+98h] [rbp-50h]
  void *ptr; // [rsp+A0h] [rbp-48h] BYREF
  __int64 v182; // [rsp+A8h] [rbp-40h]
  _BYTE v183[56]; // [rsp+B0h] [rbp-38h] BYREF

  v6 = (_QWORD *)(a1 + 40);
  v7 = a1 + 184;
  *(_QWORD *)a1 = a2;
  v8 = *a2;
  *(_QWORD *)(a1 + 72) = a1 + 88;
  *(_QWORD *)(a1 + 120) = a1 + 136;
  *(_QWORD *)(a1 + 8) = v8;
  result = 0x400000000LL;
  *(_QWORD *)(a1 + 216) = a1 + 232;
  *(_QWORD *)(a1 + 16) = i;
  *(_QWORD *)(a1 + 24) = a1 + 40;
  *(_QWORD *)(a1 + 32) = 0x400000000LL;
  *(_QWORD *)(a1 + 80) = 0x400000000LL;
  *(_QWORD *)(a1 + 128) = 0x400000000LL;
  *(_QWORD *)(a1 + 168) = a1 + 184;
  *(_QWORD *)(a1 + 176) = 0x400000000LL;
  *(_QWORD *)(a1 + 224) = 0x400000000LL;
  *(_QWORD *)(a1 + 264) = 0;
  *(_QWORD *)(a1 + 272) = 0;
  *(_DWORD *)(a1 + 280) = 0;
  v163 = (void *)(a1 + 304);
  *(_QWORD *)(a1 + 288) = a1 + 304;
  *(_QWORD *)(a1 + 296) = 0;
  *(_QWORD *)(a1 + 304) = a1 + 320;
  *(_QWORD *)(a1 + 312) = 0x400000000LL;
  *(_BYTE *)(a1 + 352) = a3;
  *(_QWORD *)(a1 + 360) = 0;
  *(_QWORD *)(a1 + 368) = 0;
  *(_DWORD *)(a1 + 376) = 0;
  if ( !i )
    return result;
  v10 = *(_BYTE *)(i - 16);
  if ( (v10 & 2) != 0 )
  {
    v12 = *(_QWORD **)(i - 32);
    v13 = v12[4];
    if ( !v13 )
      goto LABEL_15;
    v14 = *(_BYTE *)(v13 - 16);
    if ( (v14 & 2) != 0 )
      goto LABEL_5;
LABEL_103:
    i = v13 - 8LL * ((v14 >> 2) & 0xF);
    v15 = (__int64 *)(i - 16);
    v16 = i - 16 + 8LL * ((*(_WORD *)(v13 - 16) >> 6) & 0xF);
    goto LABEL_6;
  }
  i -= 8LL * ((v10 >> 2) & 0xF);
  v12 = (_QWORD *)(i - 16);
  v13 = *(_QWORD *)(i - 16 + 32);
  if ( !v13 )
    goto LABEL_15;
  v14 = *(_BYTE *)(v13 - 16);
  if ( (v14 & 2) == 0 )
    goto LABEL_103;
LABEL_5:
  v15 = *(__int64 **)(v13 - 32);
  v16 = (__int64)&v15[*(unsigned int *)(v13 - 24)];
LABEL_6:
  if ( v15 == (__int64 *)v16 )
  {
    LODWORD(v17) = 0;
    v20 = 0;
  }
  else
  {
    v17 = ((unsigned __int64)(v16 - 8 - (_QWORD)v15) >> 3) + 1;
    if ( v17 <= 4 )
      goto LABEL_10;
    sub_2062C80(a1 + 24, ((unsigned __int64)(v16 - 8 - (_QWORD)v15) >> 3) + 1);
    v18 = *v15;
    v6 = (_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL * *(unsigned int *)(a1 + 32));
    if ( !*v15 )
      goto LABEL_11;
    while ( 1 )
    {
      *v6 = v18;
      v19 = v6;
      ++v15;
      ++v6;
      sub_20B2EE0(v19, v18, 1);
      if ( (__int64 *)v16 == v15 )
        break;
LABEL_10:
      while ( 1 )
      {
        v18 = *v15;
        if ( *v15 )
          break;
LABEL_11:
        ++v15;
        *v6++ = 0;
        if ( (__int64 *)v16 == v15 )
          goto LABEL_12;
      }
    }
LABEL_12:
    v20 = *(_DWORD *)(a1 + 32);
  }
  v21 = *(_QWORD *)(a1 + 16);
  *(_DWORD *)(a1 + 32) = v20 + v17;
  v22 = *(_BYTE *)(v21 - 16);
  if ( (v22 & 2) != 0 )
    v12 = *(_QWORD **)(v21 - 32);
  else
    v12 = (_QWORD *)(v21 - 8LL * ((v22 >> 2) & 0xF) - 16);
LABEL_15:
  v23 = v12[5];
  if ( v23 )
  {
    v24 = *(_BYTE *)(v23 - 16);
    if ( (v24 & 2) != 0 )
    {
      v25 = *(__int64 **)(v23 - 32);
      v26 = (__int64)&v25[*(unsigned int *)(v23 - 24)];
    }
    else
    {
      i = v23 - 8LL * ((v24 >> 2) & 0xF);
      v25 = (__int64 *)(i - 16);
      v26 = i - 16 + 8LL * ((*(_WORD *)(v23 - 16) >> 6) & 0xF);
    }
    v27 = *(_QWORD **)(a1 + 72);
    v28 = &v27[*(unsigned int *)(a1 + 80)];
    while ( v27 != v28 )
    {
      while ( *--v28 )
      {
        sub_20A0850(v28);
        if ( v27 == v28 )
          goto LABEL_22;
      }
    }
LABEL_22:
    *(_DWORD *)(a1 + 80) = 0;
    LODWORD(v29) = 0;
    v30 = 0;
    if ( v25 != (__int64 *)v26 )
    {
      v31 = 0;
      v29 = ((unsigned __int64)(v26 - 8 - (_QWORD)v25) >> 3) + 1;
      if ( v29 > *(unsigned int *)(a1 + 84) )
      {
        sub_2062C80(a1 + 72, ((unsigned __int64)(v26 - 8 - (_QWORD)v25) >> 3) + 1);
        v31 = 8LL * *(unsigned int *)(a1 + 80);
      }
      v32 = (_QWORD *)(*(_QWORD *)(a1 + 72) + v31);
      do
      {
        while ( 1 )
        {
          v34 = *v25;
          if ( !*v25 )
            break;
          *v32 = v34;
          v33 = v32;
          ++v25;
          ++v32;
          sub_20B2EE0(v33, v34, 1);
          if ( (__int64 *)v26 == v25 )
            goto LABEL_29;
        }
        ++v25;
        *v32++ = 0;
      }
      while ( (__int64 *)v26 != v25 );
LABEL_29:
      v30 = *(_DWORD *)(a1 + 80);
    }
    v35 = *(_QWORD *)(a1 + 16);
    *(_DWORD *)(a1 + 80) = v30 + v29;
    v36 = *(_BYTE *)(v35 - 16);
    if ( (v36 & 2) != 0 )
      v12 = *(_QWORD **)(v35 - 32);
    else
      v12 = (_QWORD *)(v35 - 8LL * ((v36 >> 2) & 0xF) - 16);
  }
  v37 = v12[6];
  if ( v37 )
  {
    v38 = *(_BYTE *)(v37 - 16);
    if ( (v38 & 2) != 0 )
    {
      v39 = *(_QWORD *)(v37 - 32);
      v40 = v39 + 8LL * *(unsigned int *)(v37 - 24);
    }
    else
    {
      i = v37 - 8LL * ((v38 >> 2) & 0xF);
      v39 = i - 16;
      v40 = i - 16 + 8LL * ((*(_WORD *)(v37 - 16) >> 6) & 0xF);
    }
    *(_DWORD *)(a1 + 176) = 0;
    if ( v39 == v40 )
    {
      LODWORD(v43) = 0;
    }
    else
    {
      v41 = v40 - 8;
      v42 = 0;
      v43 = ((v40 - 8 - v39) >> 3) + 1;
      if ( v43 > *(unsigned int *)(a1 + 180) )
      {
        sub_2237220(a1 + 168, v7, ((v40 - 8 - v39) >> 3) + 1, 8);
        v44 = *(unsigned int *)(a1 + 176);
        v42 = 8 * v44;
        LODWORD(v43) = v44 + v43;
      }
      v45 = *(_QWORD *)(a1 + 168) + v42;
      v46 = (v41 - v39) >> 3;
      if ( (v45 >= v39 + 16 || v39 >= v45 + 16) && (v46 & 0x1FFFFFFFFFFFFFFCLL) != 0 )
      {
        v47 = v46 + 1;
        v48 = 0;
        do
        {
          *(__m128i *)(v45 + v48) = _mm_loadu_si128((const __m128i *)(v39 + v48));
          v48 += 16;
        }
        while ( 16 * (v47 >> 1) != v48 );
        i = v47 & 0xFFFFFFFFFFFFFFFELL;
        v49 = 8 * (v47 & 0xFFFFFFFFFFFFFFFELL);
        v50 = (_QWORD *)(v49 + v39);
        v51 = (_QWORD *)(v45 + v49);
        if ( (v47 & 0xFFFFFFFFFFFFFFFELL) != v47 )
          *v51 = *v50;
      }
      else
      {
        for ( i = 0; ; ++i )
        {
          *(_QWORD *)(v45 + 8 * i) = *(_QWORD *)(v39 + 8 * i);
          if ( i == v46 )
            break;
        }
      }
    }
    v52 = *(_QWORD *)(a1 + 16);
    *(_DWORD *)(a1 + 176) = v43;
    v53 = *(_BYTE *)(v52 - 16);
    if ( (v53 & 2) != 0 )
      v12 = *(_QWORD **)(v52 - 32);
    else
      v12 = (_QWORD *)(v52 - 8LL * ((v53 >> 2) & 0xF) - 16);
  }
  v54 = v12[7];
  if ( v54 )
  {
    v55 = *(_BYTE *)(v54 - 16);
    if ( (v55 & 2) != 0 )
    {
      v56 = *(__int64 **)(v54 - 32);
      v57 = (__int64)&v56[*(unsigned int *)(v54 - 24)];
    }
    else
    {
      i = v54 - 8LL * ((v55 >> 2) & 0xF);
      v56 = (__int64 *)(i - 16);
      v57 = i - 16 + 8LL * ((*(_WORD *)(v54 - 16) >> 6) & 0xF);
    }
    v58 = *(_QWORD **)(a1 + 216);
    v59 = &v58[*(unsigned int *)(a1 + 224)];
    while ( v58 != v59 )
    {
      while ( *--v59 )
      {
        sub_20A0850(v59);
        if ( v58 == v59 )
          goto LABEL_53;
      }
    }
LABEL_53:
    *(_DWORD *)(a1 + 224) = 0;
    LODWORD(v60) = 0;
    v61 = 0;
    if ( v56 != (__int64 *)v57 )
    {
      v62 = 0;
      v60 = ((unsigned __int64)(v57 - 8 - (_QWORD)v56) >> 3) + 1;
      if ( v60 > *(unsigned int *)(a1 + 228) )
      {
        sub_2062C80(a1 + 216, ((unsigned __int64)(v57 - 8 - (_QWORD)v56) >> 3) + 1);
        v62 = 8LL * *(unsigned int *)(a1 + 224);
      }
      v63 = (_QWORD *)(*(_QWORD *)(a1 + 216) + v62);
      do
      {
        while ( 1 )
        {
          v65 = *v56;
          if ( !*v56 )
            break;
          *v63 = v65;
          v64 = v63;
          ++v56;
          ++v63;
          sub_20B2EE0(v64, v65, 1);
          if ( (__int64 *)v57 == v56 )
            goto LABEL_60;
        }
        ++v56;
        *v63++ = 0;
      }
      while ( (__int64 *)v57 != v56 );
LABEL_60:
      v61 = *(_DWORD *)(a1 + 224);
    }
    v66 = *(_QWORD *)(a1 + 16);
    *(_DWORD *)(a1 + 224) = v61 + v60;
    v67 = *(_BYTE *)(v66 - 16);
    if ( (v67 & 2) != 0 )
      v12 = *(_QWORD **)(v66 - 32);
    else
      v12 = (_QWORD *)(v66 - 8LL * ((v67 >> 2) & 0xF) - 16);
  }
  result = v12[8];
  if ( result )
  {
    v68 = *(_BYTE *)(result - 16);
    if ( (v68 & 2) != 0 )
    {
      v69 = *(_QWORD *)(result - 32);
      v70 = (char *)(v69 + 8LL * *(unsigned int *)(result - 24));
    }
    else
    {
      v129 = -16 - 8LL * ((v68 >> 2) & 0xF);
      i = v129 + 8LL * ((*(_WORD *)(result - 16) >> 6) & 0xF);
      v69 = result + v129;
      v70 = (char *)(i + result);
    }
    v161 = v70;
    v174 = 0;
    src = nullptr;
    v173 = 0;
    v175 = v177;
    v176 = 0;
    if ( (char *)v69 != v70 )
    {
      v71 = (__int64 *)v69;
      v72 = 0;
      v73 = nullptr;
      while ( 1 )
      {
        v78 = *v71;
        if ( !(_DWORD)v72 )
          goto LABEL_73;
        v74 = v72 - 1;
        v75 = (v72 - 1) & (((unsigned int)v78 >> 9) ^ ((unsigned int)v78 >> 4));
        v76 = &v73[8 * v75];
        v77 = *(_QWORD *)v76;
        if ( *(_QWORD *)v76 == v78 )
        {
LABEL_69:
          sub_201A780(&v178, v76, &v73[8 * v72], (__int64)&src, 1);
          goto LABEL_70;
        }
        v105 = 1;
        a5 = nullptr;
        if ( v77 != -4096 )
        {
          while ( 1 )
          {
            if ( !a5 && v77 == -8192 )
              a5 = v76;
            a6 = (unsigned int)(v105 + 1);
            v75 = v74 & (v105 + v75);
            v76 = &v73[8 * v75];
            v77 = *(_QWORD *)v76;
            if ( v78 == *(_QWORD *)v76 )
              goto LABEL_69;
            if ( v77 == -4096 )
              break;
            ++v105;
          }
          if ( a5 )
            v76 = a5;
        }
        v69 = (unsigned int)(3 * v72);
        v106 = v173 + 1;
        i = (unsigned int)(4 * (v173 + 1));
        if ( (unsigned int)i < (unsigned int)v69 )
        {
          v107 = (unsigned int)(v72 - (v106 + HIDWORD(v173)));
          v108 = (unsigned int)v72 >> 3;
          if ( (unsigned int)v107 > (unsigned int)v108 )
            goto LABEL_115;
          v112 = ((v74 | ((unsigned __int64)v74 >> 1)) >> 2) | v74 | ((unsigned __int64)v74 >> 1);
          v113 = (((v112 >> 4) | v112) >> 8) | (v112 >> 4) | v112;
          v114 = ((v113 >> 16) | v113) + 1;
          if ( (unsigned int)v114 < 0x40 )
            LODWORD(v114) = 64;
          v174 = v114;
          v115 = (__m128i *)sub_22300B0(8LL * (unsigned int)v114, 8, v108, v107, a5, a6);
          src = v115;
          if ( v73 )
          {
            v173 = 0;
            v166 = 8 * v72;
            v116 = &v73[8 * v72];
            v117 = v174;
            v118 = 8LL * v174;
            if ( v115 != (__m128i *)&v115->m128i_i8[v118] )
            {
              v119 = v115;
              v120 = ((unsigned __int64)(v118 - 8) >> 3) + 1;
              if ( v118 == 8 )
                goto LABEL_128;
              do
              {
                ++v119;
                v119[-1] = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
              }
              while ( v119 != &v115[v120 >> 1] );
              v119 = (__m128i *)((char *)v115 + 8 * (v120 & 0xFFFFFFFFFFFFFFFELL));
              if ( (v120 & 0xFFFFFFFFFFFFFFFELL) != v120 )
LABEL_128:
                v119->m128i_i64[0] = -4096;
            }
            v121 = v73;
            v122 = 0;
            v123 = 0;
            v165 = v117 - 1;
            do
            {
              v124 = *(_QWORD *)v121;
              v125 = *(_QWORD *)v121 != -8192 && *(_QWORD *)v121 != -4096;
              if ( v125 )
              {
                if ( !v117 )
                  JUMPOUT(0x2EB538);
                v126 = v165 & (((unsigned int)v124 >> 9) ^ ((unsigned int)v124 >> 4));
                v127 = &v115->m128i_i8[8 * v126];
                v128 = *(_QWORD *)v127;
                if ( v124 != *(_QWORD *)v127 && v128 != -4096 )
                {
                  v170 = 1;
                  v169 = nullptr;
                  while ( 1 )
                  {
                    if ( !v169 )
                    {
                      if ( v128 != -8192 )
                        v127 = nullptr;
                      v169 = v127;
                    }
                    v126 = v165 & (v170 + v126);
                    ++v170;
                    v127 = &v115->m128i_i8[8 * v126];
                    v128 = *(_QWORD *)v127;
                    if ( v124 == *(_QWORD *)v127 )
                      break;
                    if ( v128 == -4096 )
                    {
                      if ( v169 )
                        v127 = v169;
                      break;
                    }
                  }
                }
                *(_QWORD *)v127 = v124;
                ++v123;
                v122 = v125;
              }
              v121 += 8;
            }
            while ( v116 != v121 );
            if ( v122 )
              LODWORD(v173) = v123;
            operator delete(v73, v166, 8);
            v73 = (char *)src;
            v72 = v174;
            v106 = v173 + 1;
          }
          else
          {
            v173 = 0;
            v72 = v174;
            v138 = 8LL * v174;
            v73 = &v115->m128i_i8[v138];
            if ( v115 == (__m128i *)&v115->m128i_i8[v138] )
            {
              v106 = 1;
            }
            else
            {
              v139 = v115;
              v140 = ((unsigned __int64)(v138 - 8) >> 3) + 1;
              if ( v138 == 8 )
                goto LABEL_180;
              do
              {
                ++v139;
                v139[-1] = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
              }
              while ( v139 != &v115[v140 >> 1] );
              v139 = (__m128i *)((char *)v115 + 8 * (v140 & 0xFFFFFFFFFFFFFFFELL));
              if ( (v140 & 0xFFFFFFFFFFFFFFFELL) != v140 )
LABEL_180:
                v139->m128i_i64[0] = -4096;
              v73 = (char *)v115;
              v106 = 1;
            }
          }
          if ( !(_DWORD)v72 )
          {
LABEL_251:
            LODWORD(v173) = v173 + 1;
            BUG();
          }
          v132 = (v72 - 1) & (((unsigned int)v78 >> 9) ^ ((unsigned int)v78 >> 4));
          v76 = &v73[8 * v132];
          v109 = *(_QWORD *)v76;
          if ( v78 == *(_QWORD *)v76 )
            goto LABEL_116;
          if ( v109 != -4096 )
          {
            v133 = &v73[8 * v132];
            v134 = 1;
            v76 = nullptr;
            while ( 1 )
            {
              if ( v109 == -8192 && !v76 )
                v76 = v133;
              v132 = (v72 - 1) & (v134 + v132);
              v133 = &v73[8 * v132];
              v109 = *(_QWORD *)v133;
              if ( v78 == *(_QWORD *)v133 )
              {
                v76 = &v73[8 * v132];
                goto LABEL_116;
              }
              if ( v109 == -4096 )
                break;
              ++v134;
            }
            if ( v76 )
            {
LABEL_115:
              v109 = *(_QWORD *)v76;
LABEL_116:
              LODWORD(v173) = v106;
              if ( v109 != -4096 )
                --HIDWORD(v173);
              goto LABEL_118;
            }
            v76 = &v73[8 * v132];
          }
        }
        else
        {
LABEL_73:
          v79 = (((((((unsigned int)(2 * v72 - 1) | ((unsigned __int64)(unsigned int)(2 * v72 - 1) >> 1)) >> 2)
                  | (unsigned int)(2 * v72 - 1)
                  | ((unsigned __int64)(unsigned int)(2 * v72 - 1) >> 1)) >> 4)
                | (((unsigned int)(2 * v72 - 1) | ((unsigned __int64)(unsigned int)(2 * v72 - 1) >> 1)) >> 2)
                | (unsigned int)(2 * v72 - 1)
                | ((unsigned __int64)(unsigned int)(2 * v72 - 1) >> 1)) >> 8)
              | (((((unsigned int)(2 * v72 - 1) | ((unsigned __int64)(unsigned int)(2 * v72 - 1) >> 1)) >> 2)
                | (unsigned int)(2 * v72 - 1)
                | ((unsigned __int64)(unsigned int)(2 * v72 - 1) >> 1)) >> 4)
              | (((unsigned int)(2 * v72 - 1) | ((unsigned __int64)(unsigned int)(2 * v72 - 1) >> 1)) >> 2)
              | (unsigned int)(2 * v72 - 1)
              | ((unsigned __int64)(unsigned int)(2 * v72 - 1) >> 1);
          v80 = ((v79 >> 16) | v79) + 1;
          if ( (unsigned int)v80 < 0x40 )
            LODWORD(v80) = 64;
          v174 = v80;
          v81 = (__m128i *)sub_22300B0(8LL * (unsigned int)v80, 8, v69, i, a5, a6);
          src = v81;
          if ( v73 )
          {
            v82 = 8 * v72;
            v173 = 0;
            v83 = &v73[v82];
            v84 = v174;
            v85 = 8LL * v174;
            if ( v81 != (__m128i *)&v81->m128i_i8[v85] )
            {
              v86 = v81;
              v87 = ((unsigned __int64)(v85 - 8) >> 3) + 1;
              if ( v85 == 8 )
                goto LABEL_80;
              do
              {
                ++v86;
                v86[-1] = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
              }
              while ( &v81[v87 >> 1] != v86 );
              v86 = (__m128i *)((char *)v81 + 8 * (v87 & 0xFFFFFFFFFFFFFFFELL));
              if ( (v87 & 0xFFFFFFFFFFFFFFFELL) != v87 )
LABEL_80:
                v86->m128i_i64[0] = -4096;
            }
            v88 = v73;
            v89 = 0;
            v90 = 0;
            v164 = v84 - 1;
            if ( v73 != v83 )
            {
              do
              {
                v91 = *(_QWORD *)v88;
                v92 = *(_QWORD *)v88 != -4096 && *(_QWORD *)v88 != -8192;
                if ( v92 )
                {
                  if ( !v84 )
                  {
                    *(_QWORD *)&dword_0 = *(_QWORD *)v88;
                    BUG();
                  }
                  v93 = v164 & (((unsigned int)v91 >> 9) ^ ((unsigned int)v91 >> 4));
                  v94 = &v81->m128i_i8[8 * v93];
                  v95 = *(_QWORD *)v94;
                  if ( *(_QWORD *)v94 != v91 && v95 != -4096 )
                  {
                    v168 = 1;
                    v167 = nullptr;
                    while ( 1 )
                    {
                      if ( !v167 )
                      {
                        if ( v95 != -8192 )
                          v94 = nullptr;
                        v167 = v94;
                      }
                      v93 = v164 & (v168 + v93);
                      v94 = &v81->m128i_i8[8 * v93];
                      v95 = *(_QWORD *)v94;
                      if ( v91 == *(_QWORD *)v94 )
                        break;
                      if ( v95 == -4096 )
                      {
                        if ( v167 )
                          v94 = v167;
                        break;
                      }
                      ++v168;
                    }
                  }
                  *(_QWORD *)v94 = v91;
                  ++v90;
                  v89 = v92;
                }
                v88 += 8;
              }
              while ( v83 != v88 );
              if ( v89 )
                LODWORD(v173) = v90;
            }
            operator delete(v73, v82, 8);
            v73 = (char *)src;
            v72 = v174;
            v106 = v173 + 1;
          }
          else
          {
            v173 = 0;
            v72 = v174;
            v135 = 8LL * v174;
            v73 = &v81->m128i_i8[v135];
            if ( v81 == (__m128i *)&v81->m128i_i8[v135] )
            {
              v106 = 1;
            }
            else
            {
              v136 = v81;
              v137 = ((unsigned __int64)(v135 - 8) >> 3) + 1;
              if ( v135 == 8 )
                goto LABEL_174;
              do
              {
                ++v136;
                v136[-1] = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
              }
              while ( &v81[v137 >> 1] != v136 );
              v136 = (__m128i *)((char *)v81 + 8 * (v137 & 0xFFFFFFFFFFFFFFFELL));
              if ( (v137 & 0xFFFFFFFFFFFFFFFELL) != v137 )
LABEL_174:
                v136->m128i_i64[0] = -4096;
              v73 = (char *)v81;
              v106 = 1;
            }
          }
          if ( !(_DWORD)v72 )
            goto LABEL_251;
          v130 = v72 - 1;
          v131 = (v72 - 1) & (((unsigned int)v78 >> 9) ^ ((unsigned int)v78 >> 4));
          v76 = &v73[8 * v131];
          v109 = *(_QWORD *)v76;
          if ( v78 == *(_QWORD *)v76 )
            goto LABEL_116;
          if ( v109 != -4096 )
          {
            v159 = &v73[8 * (v130 & (((unsigned int)v78 >> 9) ^ ((unsigned int)v78 >> 4)))];
            v160 = 1;
            v76 = nullptr;
            while ( 1 )
            {
              if ( !v76 && v109 == -8192 )
                v76 = v159;
              v131 = v130 & (v160 + v131);
              v159 = &v73[8 * v131];
              v109 = *(_QWORD *)v159;
              if ( v78 == *(_QWORD *)v159 )
              {
                v76 = &v73[8 * v131];
                goto LABEL_116;
              }
              if ( v109 == -4096 )
                break;
              ++v160;
            }
            if ( v76 )
              goto LABEL_115;
            v76 = &v73[8 * v131];
          }
        }
        LODWORD(v173) = v106;
LABEL_118:
        *(_QWORD *)v76 = v78;
        sub_201A780(&v178, v76, &v73[8 * v72], (__int64)&src, 1);
        v110 = (unsigned int)v176;
        i = HIDWORD(v176);
        v111 = (unsigned int)v176 + 1LL;
        if ( v111 > HIDWORD(v176) )
        {
          sub_2237220(&v175, v177, v111, 8);
          v110 = (unsigned int)v176;
        }
        v69 = (__int64)v175;
        *((_QWORD *)v175 + v110) = v78;
        LODWORD(v176) = v176 + 1;
LABEL_70:
        if ( v161 == (char *)++v71 )
          break;
        v73 = (char *)src;
        v72 = v174;
      }
    }
    v178 = 0u;
    v179 = 0;
    v180 = 0;
    operator delete(0, 0, 8);
    v180 = v174;
    if ( v174 )
    {
      v178.m128_u64[1] = sub_22300B0(8LL * v174, 8, v96, v97, v98, v99);
      v179 = v173;
      memcpy((void *)v178.m128_u64[1], src, 8LL * v180);
    }
    else
    {
      v178.m128_u64[1] = 0;
      v179 = 0;
    }
    v182 = 0;
    ptr = v183;
    if ( (_DWORD)v176 )
      sub_2061920(&ptr, (char **)&v175);
    v100 = *(_DWORD *)(a1 + 280);
    v101 = a1 + 264;
    if ( v100 )
    {
      v96 = v178.m128_u64[0];
      v98 = *(_QWORD *)(a1 + 264);
      v102 = (v100 - 1) & (((unsigned __int32)v178.m128_i32[0] >> 9) ^ ((unsigned __int32)v178.m128_i32[0] >> 4));
      v103 = v98 + 16LL * v102;
      v104 = *(_QWORD *)v103;
      if ( *(_QWORD *)v103 == v178.m128_u64[0] )
      {
LABEL_94:
        sub_2062D70(&v171, (_QWORD *)v103, (_QWORD *)(v98 + 16LL * v100), v101, 1);
LABEL_95:
        if ( ptr != v183 )
          free(ptr);
        operator delete(v178.m128_u64[1], 8LL * v180, 8);
        if ( v175 != v177 )
          free(v175);
        return operator delete(src, 8LL * v174, 8);
      }
      v141 = 1;
      v142 = 0;
      if ( v104 != -4096 )
      {
        while ( 1 )
        {
          if ( v104 == -8192 && !v142 )
            v142 = v103;
          v102 = (v100 - 1) & (v141 + v102);
          v103 = v98 + 16LL * v102;
          v104 = *(_QWORD *)v103;
          if ( v178.m128_u64[0] == *(_QWORD *)v103 )
            goto LABEL_94;
          if ( v104 == -4096 )
          {
            if ( v142 )
              v103 = v142;
            break;
          }
          ++v141;
        }
      }
      v143 = *(_DWORD *)(a1 + 272);
      v99 = 3 * v100;
      v171.m128_u64[0] = v103;
      v144 = v143 + 1;
      if ( 4 * v144 < (unsigned int)v99 )
      {
        v145 = v100 - *(_DWORD *)(a1 + 276) - v144;
        if ( (unsigned int)v145 > v100 >> 3 )
        {
LABEL_185:
          v146 = *(_QWORD *)v103 == -4096;
          *(_DWORD *)(a1 + 272) = v144;
          if ( !v146 )
            --*(_DWORD *)(a1 + 276);
          *(_QWORD *)v103 = v96;
          *(_DWORD *)(v103 + 8) = 0;
          sub_2062D70(&v171, (_QWORD *)v103, (_QWORD *)(v98 + 16LL * *(unsigned int *)(a1 + 280)), v101, 1);
          v147 = *(_DWORD *)(a1 + 296);
          *(_DWORD *)(v171.m128_u64[0] + 8) = v147;
          v148 = v147;
          if ( *(_DWORD *)(a1 + 300) <= v147 )
          {
            v152 = sub_2237400(a1 + 288, v163, 0, 48, &v171);
            v153 = v178.m128_u64[0];
            v154 = v152;
            v155 = v152 + 48LL * *(unsigned int *)(a1 + 296);
            *(_QWORD *)(v155 + 8) = 0;
            *(_QWORD *)v155 = v153;
            v156 = v178.m128_u64[1];
            *(_QWORD *)(v155 + 16) = 0;
            *(_DWORD *)(v155 + 24) = 0;
            *(_QWORD *)(v155 + 8) = v156;
            *(_QWORD *)(v155 + 16) = v179;
            *(_DWORD *)(v155 + 24) = v180;
            v178.m128_u64[1] = 0;
            v179 = 0;
            v180 = 0;
            *(_QWORD *)(v155 + 32) = v155 + 48;
            *(_QWORD *)(v155 + 40) = 0;
            if ( (_DWORD)v182 )
              sub_201AE80((char ***)(v155 + 32), (char ***)&ptr);
            sub_2062DE0((__int64 **)(a1 + 288), v154);
            v157 = v171.m128_i32[0];
            v158 = *(void **)(a1 + 288);
            if ( v163 != v158 )
              free(v158);
            *(_QWORD *)(a1 + 288) = v154;
            *(_DWORD *)(a1 + 300) = v157;
            ++*(_DWORD *)(a1 + 296);
          }
          else
          {
            v149 = v178.m128_u64[0];
            v150 = *(_QWORD *)(a1 + 288) + 48 * v148;
            *(_QWORD *)(v150 + 8) = 0;
            *(_QWORD *)v150 = v149;
            v151 = v178.m128_u64[1];
            *(_QWORD *)(v150 + 16) = 0;
            *(_DWORD *)(v150 + 24) = 0;
            *(_QWORD *)(v150 + 8) = v151;
            *(_QWORD *)(v150 + 16) = v179;
            *(_DWORD *)(v150 + 24) = v180;
            v178.m128_u64[1] = 0;
            v179 = 0;
            v180 = 0;
            *(_QWORD *)(v150 + 32) = v150 + 48;
            *(_QWORD *)(v150 + 40) = 0;
            if ( (_DWORD)v182 )
              sub_201AE80((char ***)(v150 + 32), (char ***)&ptr);
            ++*(_DWORD *)(a1 + 296);
          }
          goto LABEL_95;
        }
        v162 = (__int64 *)(a1 + 264);
        sub_2062F10((__int64 *)(a1 + 264), v100, v178.m128_i64[0], v101, v98, v145);
LABEL_209:
        sub_2062BC0(v162, (__int64 *)&v178, &v171);
        v103 = v171.m128_u64[0];
        v96 = v178.m128_u64[0];
        v98 = *(_QWORD *)(a1 + 264);
        v144 = *(_DWORD *)(a1 + 272) + 1;
        v101 = (__int64)v162;
        goto LABEL_185;
      }
    }
    else
    {
      v171.m128_u64[0] = 0;
    }
    v162 = (__int64 *)(a1 + 264);
    sub_2062F10((__int64 *)(a1 + 264), 2 * v100, v96, v101, v98, v99);
    goto LABEL_209;
  }
  return result;
}
