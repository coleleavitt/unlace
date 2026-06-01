__int64 __fastcall sub_CAFC80(__int64 a1, void **a2, __int64 a3)
{
  void **v4; // rbp
  __int64 *v5; // rbx
  _BYTE *v6; // rdx
  _DWORD **v7; // r12
  _DWORD **v8; // r14
  _DWORD *v9; // r13
  bool v10; // zf
  unsigned int **v11; // r12
  unsigned int **v12; // r13
  _QWORD *v13; // rdx
  _QWORD *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdi
  char v17; // si
  __int64 v18; // r13
  unsigned int v19; // r12d
  __int64 v20; // rdx
  int v21; // esi
  char *v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rdi
  char v25; // si
  unsigned int v26; // esi
  int v27; // esi
  void **v28; // rcx
  char v29; // r9
  __int64 v30; // rdx
  int v31; // esi
  __int64 v32; // rsi
  char v33; // dl
  __int64 v34; // r12
  __int64 v35; // r15
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // rdx
  int v39; // esi
  __int64 *v40; // rdx
  void *v41; // rdi
  char *v42; // rcx
  bool v43; // si
  char *v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rsi
  __int64 v47; // rdi
  __int64 *v48; // r12
  __int64 v49; // r14
  int v50; // r13d
  __int64 v51; // r15
  __int64 v52; // rsi
  char v53; // dl
  __int64 v54; // rax
  _DWORD *v55; // rcx
  _DWORD *v56; // rax
  __int64 v57; // rax
  _QWORD *v58; // rax
  _QWORD *v59; // rcx
  __int64 v60; // rsi
  __int64 v61; // rdi
  _QWORD *v62; // rax
  _QWORD *v63; // rcx
  __int64 v64; // rsi
  __int64 v65; // rdi
  __int64 v66; // rax
  __int64 *v67; // r8
  __int64 v68; // r15
  __int64 v69; // rax
  int v70; // edx
  __int64 **v71; // rax
  __int64 *v72; // rdx
  __int64 *v73; // rcx
  __int64 v74; // rdi
  __int64 v75; // r15
  unsigned int *v76; // rcx
  __m128i v77; // xmm0
  int v78; // eax
  unsigned int v79; // eax
  __int64 v80; // rdx
  int v81; // eax
  __int64 *v82; // rdx
  unsigned int *v83; // rsi
  __int64 v84; // rax
  int v85; // ecx
  __int64 *v86; // rax
  __int64 v87; // rax
  _QWORD *v88; // rax
  unsigned int v89; // edx
  size_t v90; // rsi
  __int64 v91; // rax
  int v92; // eax
  __int64 v93; // rdi
  _DWORD *v94; // rax
  __int64 v95; // r15
  int v96; // r13d
  _QWORD *v97; // r9
  __int64 v98; // rax
  int v99; // edx
  __int64 v100; // rax
  __int64 v101; // rax
  _QWORD *v102; // r15
  __int64 v103; // r13
  _DWORD *v104; // r13
  unsigned int v105; // edx
  unsigned int v106; // ebx
  __int64 v107; // rbp
  __int64 *v108; // rdi
  __int64 v110; // rax
  unsigned int v111; // ecx
  unsigned int v112; // ebx
  __int64 v113; // rbp
  char *v114; // rdi
  __int64 v115; // rbx
  _QWORD *v116; // rdi
  __int64 v117; // rax
  __int64 v118; // rax
  __int64 v119; // r13
  __int64 v120; // rax
  __int64 v121; // rsi
  __int64 *v122; // rcx
  __int64 *v123; // rsi
  __int64 v124; // r15
  unsigned int v125; // eax
  __int64 v126; // rdx
  int v127; // eax
  __int64 v128; // rdx
  void *v129; // rdi
  __m128 v130; // xmm0
  __int64 *v131; // rax
  __int64 v132; // r15
  _QWORD *v133; // rax
  __int64 *v134; // r9
  __int64 *v135; // rax
  __int64 *v136; // r15
  __int64 v137; // rdx
  __int64 v138; // rax
  char *v139; // r15
  __int64 v140; // r15
  __int64 v141; // rax
  void (__fastcall ***v142)(void *); // rbx
  _QWORD *v143; // r15
  __int64 v144; // rax
  __int64 v145; // r13
  _DWORD *v146; // rdi
  void (**v147)(void); // rax
  size_t v148; // rdi
  __int64 *v149; // rax
  _QWORD *v150; // r8
  __int64 v151; // r10
  _DWORD *v152; // rdx
  _QWORD *v153; // rdi
  _QWORD *v154; // rax
  __int64 v155; // rcx
  __int64 v156; // rcx
  __int64 v157; // rcx
  __int64 *v158; // r14
  __int64 *v159; // rbx
  __int64 *v160; // rbp
  __int64 v161; // rsi
  __int64 v162; // rdi
  __int64 v163; // rsi
  __int64 v164; // rdi
  _DWORD *v165; // rdi
  int v166; // r11d
  __int64 v167; // rbx
  _QWORD *v168; // rdi
  __int64 v169; // rax
  __int64 v170; // rax
  __int64 j; // rax
  __int64 i; // rax
  __int64 v173; // rax
  __int64 v174; // rdx
  char **v175; // rbx
  char **exception; // r15
  _Unwind_Exception *v177; // [rsp+0h] [rbp-188h]
  void *v178; // [rsp+8h] [rbp-180h] BYREF
  void *v179; // [rsp+10h] [rbp-178h]
  void *v180; // [rsp+18h] [rbp-170h]
  unsigned __int64 v181; // [rsp+20h] [rbp-168h]
  int v182[2]; // [rsp+28h] [rbp-160h]
  __int64 *v183; // [rsp+30h] [rbp-158h]
  __int64 v184; // [rsp+38h] [rbp-150h]
  __int64 v185; // [rsp+40h] [rbp-148h]
  int v186[2]; // [rsp+48h] [rbp-140h]
  __int64 *v187; // [rsp+50h] [rbp-138h]
  char *v188; // [rsp+58h] [rbp-130h]
  __int64 *v189; // [rsp+60h] [rbp-128h]
  void **v190; // [rsp+68h] [rbp-120h]
  char v191[8]; // [rsp+78h] [rbp-110h] BYREF
  int v192[2]; // [rsp+80h] [rbp-108h] BYREF
  __int64 v193; // [rsp+88h] [rbp-100h] BYREF
  int v194[2]; // [rsp+90h] [rbp-F8h] BYREF
  __int64 *v195; // [rsp+98h] [rbp-F0h]
  int v196[2]; // [rsp+A0h] [rbp-E8h] BYREF
  int v197[2]; // [rsp+A8h] [rbp-E0h]
  _QWORD *v198; // [rsp+B0h] [rbp-D8h]
  __int64 v199; // [rsp+B8h] [rbp-D0h]
  void *ptr; // [rsp+C0h] [rbp-C8h] BYREF
  int v201[2]; // [rsp+C8h] [rbp-C0h]
  _BYTE v202[184]; // [rsp+D0h] [rbp-B8h] BYREF

  v4 = a2;
  v5 = (__int64 *)a1;
  v185 = a3;
  sub_EE4F60("pb2bv");
  v6 = *a2;
  v7 = *(_DWORD ***)a3;
  *(_BYTE *)(a1 + 480) = (*((_BYTE *)*a2 + 123) & 4) != 0;
  *(_BYTE *)(a1 + 481) = (v6[123] & 0x10) != 0;
  v8 = &v7[*(unsigned int *)(a3 + 8)];
  if ( v7 < v8 )
  {
    do
    {
      while ( 1 )
      {
        v9 = *v7;
        if ( *v7 )
        {
          v10 = v9[8]-- == 1;
          if ( v10 )
            break;
        }
        if ( ++v7 >= v8 )
          goto LABEL_7;
      }
      ++v7;
      sub_ED44E0(v9);
      sub_186B220(v9);
    }
    while ( v7 < v8 );
LABEL_7:
    v6 = *a2;
  }
  *(_DWORD *)(v185 + 8) = 0;
  v188 = v191;
  sub_EE4940(v191, "pb2bv", v6);
  *(_QWORD *)v182 = a1 + 8;
  sub_F73E80(a1 + 8);
  v183 = (__int64 *)(a1 + 584);
  sub_CA1FF0(a1 + 584);
  v11 = *(unsigned int ***)(a1 + 472);
  if ( v11 )
  {
    v12 = &v11[*((unsigned int *)v11 - 1)];
    if ( v11 >= v12 )
      goto LABEL_14;
    do
    {
      if ( *v11 )
        sub_234C20((__int64 *)(*(_QWORD *)(a1 + 464) + 648LL), *v11);
      ++v11;
    }
    while ( v11 < v12 );
    v11 = *(unsigned int ***)(a1 + 472);
    if ( v11 )
LABEL_14:
      *((_DWORD *)v11 - 1) = 0;
  }
  v184 = a1 + 352;
  sub_1474650(a1 + 352);
  v13 = *a2;
  v14 = *a2;
  if ( (*((_BYTE *)*a2 + 123) & 0x20) != 0 )
  {
    v110 = v185;
    ++*((_DWORD *)v13 + 8);
    v111 = *(_DWORD *)(v110 + 8);
    v112 = *(_DWORD *)(v110 + 12);
    if ( v111 >= v112 )
    {
      v178 = v13;
      v167 = 2 * v112;
      v113 = sub_186B270(8 * v167);
      v13 = v178;
      v111 = *(_DWORD *)(v185 + 8);
      v168 = *(_QWORD **)v185;
      if ( v111 )
      {
        if ( v111 - 1 <= 2 || (_QWORD *)v113 == v168 + 1 )
        {
          for ( i = 0; i != v111; ++i )
            *(_QWORD *)(v113 + i * 8) = v168[i];
        }
        else
        {
          v169 = 0;
          do
          {
            *(__m128i *)(v113 + v169 * 8) = _mm_loadu_si128((const __m128i *)&v168[v169]);
            v169 += 2;
          }
          while ( 2LL * (v111 >> 1) != v169 );
          if ( (v111 & 1) != 0 )
            *(_QWORD *)(v113 + 8LL * (v111 & 0xFFFFFFFE)) = v168[v111 & 0xFFFFFFFE];
        }
      }
      if ( v168 != (_QWORD *)(v185 + 16) && v168 )
      {
        v178 = v13;
        sub_186B220(v168);
        v13 = v178;
        v111 = *(_DWORD *)(v185 + 8);
      }
      v170 = v185;
      *(_QWORD *)v185 = v113;
      *(_DWORD *)(v170 + 12) = v167;
    }
    else
    {
      v113 = *(_QWORD *)v110;
    }
    v114 = v188;
    *(_QWORD *)(v113 + 8LL * v111) = v13;
    *(_DWORD *)(v185 + 8) = v111 + 1;
    return sub_EE4A00(v114);
  }
  v15 = v13[9];
  if ( !v15 )
  {
    *(_QWORD *)v196 = 0;
    v46 = *(_QWORD *)a1;
    *(_QWORD *)v192 = v46;
    *(_QWORD *)v194 = v46;
    *(_QWORD *)v197 = v46;
    goto LABEL_191;
  }
  v16 = v13[9];
  v17 = *(_BYTE *)(v15 + 3) >> 6;
  if ( !v17 )
  {
    do
    {
      v16 = *(_QWORD *)(v16 + 16);
      v17 = *(_BYTE *)(v16 + 3) >> 6;
    }
    while ( !v17 );
    if ( v17 != 1 )
      goto LABEL_19;
LABEL_252:
    LODWORD(v178) = *(_DWORD *)(v16 + 4) + 1;
    goto LABEL_21;
  }
  if ( v17 == 1 )
    goto LABEL_252;
LABEL_19:
  if ( v17 == 2 )
    LODWORD(v178) = *(_DWORD *)(v16 + 4) - 1;
  else
    LODWORD(v178) = *(_DWORD *)(v16 + 4);
LABEL_21:
  if ( !(_DWORD)v178 )
  {
    v179 = v202;
    *(_QWORD *)v201 = 0x1000000000LL;
    v174 = v5[45];
    ptr = v202;
    *(_QWORD *)v196 = v174;
    *(_QWORD *)v197 = v5 + 45;
    v198 = v5 + 50;
    v199 = *(_QWORD *)v182;
LABEL_60:
    v33 = *(_BYTE *)(v15 + 3) >> 6;
    if ( v33 )
    {
      if ( v33 != 1 )
      {
LABEL_62:
        if ( v33 == 2 )
          v34 = (unsigned int)(*(_DWORD *)(v15 + 4) - 1);
        else
          v34 = *(unsigned int *)(v15 + 4);
        goto LABEL_64;
      }
    }
    else
    {
      do
      {
        v15 = *(_QWORD *)(v15 + 16);
        v33 = *(_BYTE *)(v15 + 3) >> 6;
      }
      while ( !v33 );
      if ( v33 != 1 )
        goto LABEL_62;
    }
    v34 = (unsigned int)(*(_DWORD *)(v15 + 4) + 1);
LABEL_64:
    if ( !(_DWORD)v34 )
      goto LABEL_83;
    v35 = 0;
LABEL_69:
    v37 = *v14;
    if ( (*((_BYTE *)v14 + 123) & 0x20) != 0 )
    {
      v36 = *(_QWORD *)(v37 + 864);
      goto LABEL_67;
    }
    v38 = v14[9];
    v39 = 17;
    while ( 1 )
    {
      if ( *(char *)(v38 + 3) >= 0 )
      {
        if ( *(_DWORD *)(v38 + 4) == (_DWORD)v35 )
        {
          v40 = (__int64 *)(v38 + 8);
LABEL_74:
          v36 = *v40;
LABEL_67:
          sub_CA18E0(v196, (__int64)&ptr, v36);
          if ( v34 != ++v35 )
          {
            v14 = *v4;
            goto LABEL_69;
          }
          v41 = ptr;
          v42 = (char *)ptr + 8 * (unsigned int)v201[0];
          v43 = ptr == v179 || ptr == nullptr;
          if ( ptr != v42 )
          {
            v44 = (char *)ptr;
            do
            {
              v45 = *(_QWORD *)v44;
              v44 += 8;
              *(_BYTE *)(v45 + 6) &= ~1u;
            }
            while ( v42 != v44 );
          }
          v201[0] = 0;
          if ( !v43 )
            sub_186B220(v41);
LABEL_83:
          v46 = *v5;
          *(_QWORD *)v196 = 0;
          *(_QWORD *)v192 = v46;
          *(_QWORD *)v194 = v46;
          *(_QWORD *)v197 = v46;
          if ( (_DWORD)v178 )
          {
            v13 = *v4;
            goto LABEL_85;
          }
LABEL_191:
          v49 = 0;
          v48 = nullptr;
          sub_C9E940(0, v46);
          v179 = v196;
          goto LABEL_192;
        }
      }
      else if ( *(_BYTE *)(v38 + 3) >> 6 != 2 )
      {
        v40 = (__int64 *)(*(_QWORD *)(v38 + 16) + 8 * v35);
        goto LABEL_74;
      }
      v38 = *(_QWORD *)(v38 + 16);
      if ( !--v39 )
      {
        v180 = v14;
        sub_233F80((__int64 *)(v37 + 616), (_DWORD *)v14 + 18);
        v40 = (__int64 *)(*(_QWORD *)(*((_QWORD *)v180 + 9) + 16LL) + 8 * v35);
        goto LABEL_74;
      }
    }
  }
  v18 = 0;
  v19 = 0;
  do
  {
    v22 = (char *)v13[11];
    v23 = *v13;
    if ( !v22 )
      goto LABEL_39;
    v24 = v13[11];
    v25 = (unsigned __int8)v22[3] >> 6;
    if ( v25 )
    {
      if ( v25 != 1 )
        goto LABEL_31;
    }
    else
    {
      do
      {
        v24 = *(_QWORD *)(v24 + 16);
        v25 = *(_BYTE *)(v24 + 3) >> 6;
      }
      while ( !v25 );
      if ( v25 != 1 )
      {
LABEL_31:
        if ( v25 == 2 )
          v26 = *(_DWORD *)(v24 + 4) - 1;
        else
          v26 = *(_DWORD *)(v24 + 4);
        if ( v19 >= v26 )
        {
LABEL_48:
          v22 = nullptr;
          goto LABEL_39;
        }
        goto LABEL_34;
      }
    }
    if ( v19 >= *(_DWORD *)(v24 + 4) + 1 )
      goto LABEL_48;
LABEL_34:
    v27 = 17;
    while ( 1 )
    {
      if ( v22[3] < 0 )
      {
        if ( (unsigned __int8)v22[3] >> 6 != 2 )
        {
          v28 = (void **)(v18 + *((_QWORD *)v22 + 2));
          goto LABEL_38;
        }
        goto LABEL_53;
      }
      if ( *((_DWORD *)v22 + 1) == v19 )
        break;
LABEL_53:
      v22 = *((char **)v22 + 2);
      if ( !--v27 )
      {
        v179 = v13;
        sub_233F80((__int64 *)(v23 + 616), (_DWORD *)v13 + 22);
        v14 = *v4;
        v28 = (void **)(v18 + *(_QWORD *)(*((_QWORD *)v179 + 11) + 16LL));
        v23 = *(_QWORD *)*v4;
        goto LABEL_38;
      }
    }
    v28 = (void **)(v22 + 8);
LABEL_38:
    v22 = (char *)*v28;
LABEL_39:
    v29 = *((_BYTE *)v14 + 123);
    if ( (v29 & 0x10) != 0 )
    {
      v20 = v14[13];
      v21 = 17;
      do
      {
        if ( *(char *)(v20 + 3) >= 0 )
        {
          if ( v19 == *(_DWORD *)(v20 + 4) )
            goto LABEL_26;
        }
        else if ( *(_BYTE *)(v20 + 3) >> 6 != 2 )
        {
          goto LABEL_26;
        }
        v20 = *(_QWORD *)(v20 + 16);
        --v21;
      }
      while ( v21 );
      v180 = v22;
      v179 = v14;
      sub_236900((_QWORD *)(v23 + 672), v14 + 13);
      v22 = (char *)v180;
      v14 = *v4;
      v29 = *((_BYTE *)*v4 + 123);
      v23 = *(_QWORD *)*v4;
LABEL_26:
      if ( (v29 & 0x20) == 0 )
      {
LABEL_41:
        v30 = v14[9];
        v31 = 17;
        do
        {
          if ( *(char *)(v30 + 3) >= 0 )
          {
            if ( *(_DWORD *)(v30 + 4) == v19 )
              goto LABEL_27;
          }
          else if ( *(_BYTE *)(v30 + 3) >> 6 != 2 )
          {
            goto LABEL_27;
          }
          v30 = *(_QWORD *)(v30 + 16);
          --v31;
        }
        while ( v31 );
        v180 = v22;
        v179 = v14;
        sub_233F80((__int64 *)(v23 + 616), (_DWORD *)v14 + 18);
      }
    }
    else if ( (*((_BYTE *)v14 + 123) & 0x20) == 0 )
    {
      goto LABEL_41;
    }
LABEL_27:
    sub_F79EF0(v182[0]);
    v13 = *v4;
    ++v19;
    v18 += 8;
    v14 = *v4;
  }
  while ( v19 != (_DWORD)v178 );
  v15 = v13[9];
  v179 = v202;
  *(_QWORD *)v201 = 0x1000000000LL;
  v32 = v5[45];
  ptr = v202;
  *(_QWORD *)v196 = v32;
  *(_QWORD *)v197 = v5 + 45;
  v198 = v5 + 50;
  v199 = *(_QWORD *)v182;
  if ( v15 )
    goto LABEL_60;
  v173 = *v5;
  *(_QWORD *)v196 = 0;
  *(_QWORD *)v192 = v173;
  *(_QWORD *)v194 = v173;
  *(_QWORD *)v197 = v173;
LABEL_85:
  v47 = *v13;
  v48 = nullptr;
  v49 = 0;
  v180 = nullptr;
  v50 = 0;
  *(_QWORD *)v186 = v5 + 135;
  if ( (*((_BYTE *)v13 + 123) & 0x20) != 0 )
  {
LABEL_86:
    v51 = *(_QWORD *)(v47 + 864);
    goto LABEL_87;
  }
  while ( 2 )
  {
    v84 = v13[9];
    v85 = 17;
    while ( 2 )
    {
      if ( *(char *)(v84 + 3) < 0 )
      {
        if ( *(_BYTE *)(v84 + 3) >> 6 != 2 )
        {
          v86 = (__int64 *)((char *)v180 + *(_QWORD *)(v84 + 16));
          goto LABEL_147;
        }
LABEL_155:
        v84 = *(_QWORD *)(v84 + 16);
        if ( !--v85 )
        {
          v179 = v13;
          sub_233F80((__int64 *)(v47 + 616), (_DWORD *)v13 + 18);
          v86 = (__int64 *)((char *)v180 + *(_QWORD *)(*((_QWORD *)v179 + 9) + 16LL));
          goto LABEL_147;
        }
        continue;
      }
      break;
    }
    if ( v50 != *(_DWORD *)(v84 + 4) )
      goto LABEL_155;
    v86 = (__int64 *)(v84 + 8);
LABEL_147:
    v51 = *v86;
LABEL_87:
    if ( !*(_WORD *)(v51 + 4) )
    {
      v52 = v51;
      v53 = 1;
      while ( 1 )
      {
        v54 = *(_QWORD *)(v52 + 16);
        v55 = *(_DWORD **)(v54 + 24);
        if ( !v55 || *v55 || v55[1] != 8 )
          break;
        v52 = *(_QWORD *)(v52 + 32);
        v53 ^= 1u;
        if ( *(_WORD *)(v52 + 4) )
          goto LABEL_167;
      }
      v56 = *(_DWORD **)(v54 + 24);
      if ( !v56 )
        goto LABEL_95;
      if ( *v56 )
      {
        if ( *(_WORD *)(v52 + 4) || *v56 != 5 )
          goto LABEL_95;
LABEL_170:
        v92 = v56[1];
        if ( v92 != 2 && v92 != 3 )
          goto LABEL_95;
LABEL_172:
        v179 = v196;
        sub_CAA050(v5, v52, (__int64 *)v196, v53, 1u);
        goto LABEL_123;
      }
      if ( v56[1] != 2 )
        goto LABEL_95;
      v93 = *(_QWORD *)(v52 + 32);
      LOBYTE(v181) = v53;
      v179 = (void *)v52;
      v94 = *(_DWORD **)(sub_15D1F10(v93) + 24);
      v53 = v181;
      if ( v94 && *v94 == 5 && v94[1] == 1 )
        goto LABEL_172;
LABEL_167:
      if ( !*(_WORD *)(v52 + 4) )
      {
        v56 = *(_DWORD **)(*(_QWORD *)(v52 + 16) + 24LL);
        if ( v56 )
        {
          if ( *v56 == 5 )
            goto LABEL_170;
        }
      }
    }
LABEL_95:
    ptr = nullptr;
    *(_QWORD *)v201 = *v5;
    v57 = v5[78];
    if ( v57 )
    {
      if ( *(_DWORD *)(v57 - 4) || *(_QWORD *)v5[76] != v5[77] )
      {
        *(_DWORD *)(v57 - 4) = 0;
LABEL_99:
        v58 = (_QWORD *)v5[80];
        if ( v58 )
        {
          v59 = &v58[*((unsigned int *)v58 - 1)];
          if ( v58 >= v59 )
            goto LABEL_107;
          do
          {
            while ( 1 )
            {
              v60 = *v58;
              if ( *v58 )
              {
                v61 = v5[79];
                v10 = (*(_DWORD *)(v60 + 8))-- == 1;
                if ( v10 )
                  break;
              }
              if ( ++v58 >= v59 )
                goto LABEL_106;
            }
            v181 = (unsigned __int64)v58;
            v179 = v59;
            sub_15D7BC0(v61, v60);
            v59 = v179;
            v58 = (_QWORD *)(v181 + 8);
          }
          while ( v181 + 8 < (unsigned __int64)v179 );
LABEL_106:
          v58 = (_QWORD *)v5[80];
          if ( v58 )
LABEL_107:
            *((_DWORD *)v58 - 1) = 0;
        }
        v62 = (_QWORD *)v5[84];
        if ( v62 )
        {
          v63 = &v62[*((unsigned int *)v62 - 1)];
          if ( v62 >= v63 )
            goto LABEL_116;
          do
          {
            while ( 1 )
            {
              v64 = *v62;
              if ( *v62 )
              {
                v65 = v5[83];
                v10 = (*(_DWORD *)(v64 + 8))-- == 1;
                if ( v10 )
                  break;
              }
              if ( ++v62 >= v63 )
                goto LABEL_115;
            }
            v181 = (unsigned __int64)v62;
            v179 = v63;
            sub_15D7BC0(v65, v64);
            v63 = v179;
            v62 = (_QWORD *)(v181 + 8);
          }
          while ( v181 + 8 < (unsigned __int64)v179 );
LABEL_115:
          v62 = (_QWORD *)v5[84];
          if ( v62 )
LABEL_116:
            *((_DWORD *)v62 - 1) = 0;
        }
        v66 = v5[90];
        if ( v66 )
          *(_DWORD *)(v66 - 4) = 0;
        sub_15843E0(v183);
      }
    }
    else if ( *(_QWORD *)v5[76] != v5[77] )
    {
      goto LABEL_99;
    }
    v10 = *((_BYTE *)v5 + 600) == 0;
    v179 = v196;
    if ( v10 )
      sub_CAF8F0((__int64)v183, v51, (__int64 *)v196, *(__int64 **)v186);
    else
      sub_CAE020((__int64)v183, v51, (__int64 *)v196, *(__int64 **)v186);
    sub_1475DD0(v184, 1, *(_QWORD *)v196, v179, &ptr);
    sub_C9E920((__int64)ptr, *(__int64 *)v201);
LABEL_123:
    if ( *((_BYTE *)v5 + 481) )
    {
      v67 = (__int64 *)*v4;
      if ( (*((_BYTE *)*v4 + 123) & 0x10) != 0 )
      {
        v68 = *v5;
        v69 = v67[13];
        v70 = 17;
        while ( 1 )
        {
          if ( *(char *)(v69 + 3) >= 0 )
          {
            if ( v50 == *(_DWORD *)(v69 + 4) )
            {
              v71 = (__int64 **)(v69 + 8);
              goto LABEL_129;
            }
          }
          else if ( *(_BYTE *)(v69 + 3) >> 6 != 2 )
          {
            v71 = (__int64 **)((char *)v180 + *(_QWORD *)(v69 + 16));
LABEL_129:
            v72 = (__int64 *)v5[71];
            v73 = *v71;
            if ( v72 )
              goto LABEL_130;
LABEL_151:
            if ( !v73 )
              goto LABEL_152;
LABEL_201:
            v75 = (__int64)v73;
            v78 = (*(_DWORD *)v73 + 1) & 0x3FFFFFFF;
            goto LABEL_133;
          }
          v69 = *(_QWORD *)(v69 + 16);
          if ( !--v70 )
          {
            v87 = *v67;
            v181 = (unsigned __int64)*v4;
            sub_236900((_QWORD *)(v87 + 672), v67 + 13);
            v72 = (__int64 *)v5[71];
            v73 = *(__int64 **)((char *)v180 + *(_QWORD *)(*(_QWORD *)(v181 + 104) + 16LL));
            if ( !v72 )
              goto LABEL_151;
LABEL_130:
            if ( v73 )
            {
              if ( v73 != v72 )
              {
                v74 = *(_QWORD *)(v68 + 656);
                v187 = v72;
                v181 = (unsigned __int64)v73;
                v75 = sub_17E9C90(v74, 24);
                v76 = (unsigned int *)v181;
                v77 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v187, (__m128i)v181);
                *(_DWORD *)v187 = (*(_DWORD *)v187 + 1) & 0x3FFFFFFF | *(_DWORD *)v187 & 0xC0000000;
                *v76 = (*v76 + 1) & 0x3FFFFFFF | *v76 & 0xC0000000;
                v78 = 1;
                *(_QWORD *)v75 = 0;
                *(__m128i *)(v75 + 8) = v77;
                goto LABEL_133;
              }
              goto LABEL_201;
            }
            v75 = (__int64)v72;
            v78 = (*(_DWORD *)v72 + 1) & 0x3FFFFFFF;
LABEL_133:
            *(_DWORD *)v75 = *(_DWORD *)v75 & 0xC0000000 | v78 & 0x3FFFFFFF;
            if ( v48 )
              goto LABEL_134;
LABEL_153:
            v88 = (_QWORD *)sub_186B270(0x18u);
            v48 = v88 + 1;
            *v88 = 2;
            v81 = 1;
            v82 = v48;
            goto LABEL_136;
          }
        }
      }
      v75 = v5[71];
      if ( v75 )
      {
        v78 = (*(_DWORD *)v75 + 1) & 0x3FFFFFFF;
        goto LABEL_133;
      }
LABEL_152:
      v75 = 0;
      if ( !v48 )
        goto LABEL_153;
LABEL_134:
      v79 = *((_DWORD *)v48 - 1);
      if ( v79 == *((_DWORD *)v48 - 2) )
      {
        v89 = (3 * v79 + 1) >> 1;
        v90 = 8 * v89 + 8;
        if ( 8 * v79 + 8 >= (unsigned int)v90 || v79 >= v89 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_C9E960((__int64 *)&ptr, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, &ptr);
          sub_233E40((__int64)&ptr);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        LODWORD(v181) = (3 * v79 + 1) >> 1;
        v91 = sub_186B300(v48 - 1, v90);
        v48 = (__int64 *)(v91 + 8);
        *(_DWORD *)v91 = v181;
        LODWORD(v91) = *(_DWORD *)(v91 + 4);
        v82 = &v48[(unsigned int)v91];
        v81 = v91 + 1;
      }
      else
      {
        v80 = v79;
        v81 = v79 + 1;
        v82 = &v48[v80];
      }
LABEL_136:
      v83 = (unsigned int *)v5[71];
      *v82 = v75;
      *((_DWORD *)v48 - 1) = v81;
      if ( v83 )
        sub_234C20((__int64 *)(v5[72] + 648), v83);
      v5[71] = 0;
    }
    ptr = *(void **)v196;
    if ( *(_QWORD *)v196 )
      ++*(_DWORD *)(*(_QWORD *)v196 + 8LL);
    v193 = v49;
    sub_C9F390(&v193, &ptr);
    ++v50;
    v180 = (char *)v180 + 8;
    v49 = v193;
    if ( v50 != (_DWORD)v178 )
    {
      v13 = *v4;
      v47 = *(_QWORD *)*v4;
      if ( (*((_BYTE *)*v4 + 123) & 0x20) != 0 )
        goto LABEL_86;
      continue;
    }
    break;
  }
  v95 = 0;
  v96 = 0;
  sub_C9E940(*(__int64 *)v196, *(__int64 *)v197);
  do
  {
    v97 = *v4;
    if ( !*((_BYTE *)v5 + 481) && (*((_BYTE *)v97 + 123) & 0x10) != 0 )
    {
      v98 = v97[13];
      v99 = 17;
      do
      {
        if ( *(char *)(v98 + 3) >= 0 )
        {
          if ( v96 == *(_DWORD *)(v98 + 4) )
            goto LABEL_179;
        }
        else if ( *(_BYTE *)(v98 + 3) >> 6 != 2 )
        {
          goto LABEL_179;
        }
        v98 = *(_QWORD *)(v98 + 16);
        --v99;
      }
      while ( v99 );
      v100 = *v97;
      v180 = *v4;
      sub_236900((_QWORD *)(v100 + 672), v97 + 13);
      LODWORD(v97) = (_DWORD)v180;
    }
LABEL_179:
    sub_EDBFA0((int)v97);
    ++v96;
    v95 += 8;
  }
  while ( v96 != (_DWORD)v178 );
LABEL_192:
  v101 = *v5;
  *(_QWORD *)v197 = 0;
  *(_QWORD *)v196 = v101;
  sub_1474200(v184, v179);
  v102 = *(_QWORD **)v197;
  if ( *(_QWORD *)v197 )
  {
    v103 = *(_QWORD *)v197 + 8LL * *(unsigned int *)(*(_QWORD *)v197 - 4LL);
    if ( v103 != *(_QWORD *)v197 )
    {
      do
        sub_EDBA20((int)*v4, *v102++, 0, v177, (int)v178, (int)v179, (__int64)v180, v181);
      while ( (_QWORD *)v103 != v102 );
    }
  }
  if ( *((_BYTE *)v5 + 480) )
  {
    v119 = sub_186B270(0x50u);
    v120 = *v5;
    *(_DWORD *)(v119 + 8) = 0;
    *(_QWORD *)(v119 + 16) = 0;
    *(_BYTE *)(v119 + 24) = 1;
    *(_QWORD *)v119 = &off_1C60CE8;
    *(_QWORD *)(v119 + 32) = v120;
    sub_C9E960((__int64 *)(v119 + 40), "pb2bv");
    v121 = *((unsigned int *)v5 + 128);
    v122 = (__int64 *)v5[63];
    *(_QWORD *)(v119 + 72) = 0;
    v123 = &v122[2 * v121];
    if ( v122 != v123 )
    {
      while ( (unsigned __int64)*v122 <= 1 )
      {
        v122 += 2;
        if ( v123 == v122 )
          goto LABEL_233;
      }
      if ( v123 != v122 )
      {
        v124 = *(_QWORD *)(v122[1] + 16);
        v178 = *(void **)(v119 + 32);
        if ( v124 )
          ++*(_DWORD *)(v124 + 8);
LABEL_232:
        v181 = (unsigned __int64)v122;
        v180 = v123;
        v133 = (_QWORD *)sub_186B270(0x58u);
        v128 = (__int64)(v133 + 1);
        v123 = (__int64 *)v180;
        v122 = (__int64 *)v181;
        *v133 = 2;
        *(_QWORD *)(v119 + 72) = v133 + 1;
        v134 = v133 + 1;
        v127 = 1;
        while ( 1 )
        {
          v129 = v178;
          *(_QWORD *)(v128 + 16) = 0;
          v130 = _mm_loadh_ps((const double *)&v178);
          *(_DWORD *)(v128 + 32) = 0;
          *(_QWORD *)(v128 + 24) = v129;
          *(__m128 *)v128 = v130;
          *((_DWORD *)v134 - 1) = v127;
          v131 = v122 + 2;
          if ( v123 == v122 + 2 )
            break;
          while ( 1 )
          {
            v122 = v131;
            if ( (unsigned __int64)*v131 > 1 )
              break;
            v131 += 2;
            if ( v123 == v131 )
              goto LABEL_233;
          }
          if ( v123 == v131 )
            break;
          v132 = *(_QWORD *)(v131[1] + 16);
          v178 = *(void **)(v119 + 32);
          if ( v132 )
          {
            ++*(_DWORD *)(v132 + 8);
            if ( !v134 )
              goto LABEL_232;
          }
          v125 = *((_DWORD *)v134 - 1);
          if ( v125 == *((_DWORD *)v134 - 2) )
          {
            LODWORD(v181) = (3 * v125 + 1) >> 1;
            v148 = (unsigned int)(40 * v181 + 8);
            if ( 40 * v125 + 8 >= (unsigned int)v148 || v125 >= (3 * v125 + 1) >> 1 )
            {
              v175 = (char **)__cxa_allocate_exception(0x28u);
              sub_C9E960((__int64 *)&ptr, "Overflow encountered when expanding vector");
              *v175 = (char *)off_1C63128;
              sub_2333C0(v175 + 1, &ptr);
              sub_233E40((__int64)&ptr);
              __cxa_throw(v175, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            *(_QWORD *)v186 = v122;
            v183 = v123;
            v149 = (__int64 *)sub_186B270(v148);
            v150 = *(_QWORD **)(v119 + 72);
            v180 = v149;
            v134 = v149 + 1;
            v123 = v183;
            v122 = *(__int64 **)v186;
            if ( v150 )
            {
              v151 = *((unsigned int *)v150 - 1);
              v152 = v149 + 1;
              *((_DWORD *)v149 + 1) = v151;
              v153 = &v150[5 * v151];
              v154 = v150;
              if ( v153 != v150 )
              {
                v183 = v122;
                do
                {
                  v155 = v154[1];
                  v154 += 5;
                  v152 += 10;
                  *((_QWORD *)v152 - 4) = v155;
                  v156 = *(v154 - 5);
                  *(v154 - 5) = 0;
                  *((_QWORD *)v152 - 5) = v156;
                  *((_QWORD *)v152 - 2) = *(v154 - 2);
                  v157 = *(v154 - 3);
                  *(v154 - 3) = 0;
                  *((_QWORD *)v152 - 3) = v157;
                  *(v152 - 2) = *((_DWORD *)v154 - 2);
                }
                while ( v153 != v154 );
                v122 = v183;
              }
              if ( (_DWORD)v151 )
              {
                v183 = (__int64 *)v49;
                v158 = v123;
                v189 = v5;
                v190 = v4;
                v159 = &v150[5 * v151];
                v160 = v150;
                *(_QWORD *)v186 = v134;
                v187 = v122;
                do
                {
                  while ( 1 )
                  {
                    v163 = v160[2];
                    if ( v163 )
                    {
                      v164 = v160[3];
                      v10 = (*(_DWORD *)(v163 + 8))-- == 1;
                      if ( v10 )
                        sub_15D7BC0(v164, v163);
                    }
                    v161 = *v160;
                    if ( *v160 )
                    {
                      v162 = v160[1];
                      v10 = (*(_DWORD *)(v161 + 8))-- == 1;
                      if ( v10 )
                        break;
                    }
                    v160 += 5;
                    if ( v159 == v160 )
                      goto LABEL_280;
                  }
                  sub_15D7BC0(v162, v161);
                  v160 += 5;
                }
                while ( v159 != v160 );
LABEL_280:
                v123 = v158;
                v134 = *(__int64 **)v186;
                v49 = (__int64)v183;
                v122 = v187;
                v5 = v189;
                v4 = v190;
                v150 = *(_QWORD **)(v119 + 72);
              }
              v187 = v122;
              *(_QWORD *)v186 = v134;
              v183 = v123;
              sub_186B220(v150 - 1);
              v134 = *(__int64 **)v186;
              v122 = v187;
              v123 = v183;
              v128 = *(_QWORD *)v186 + 40LL * *((unsigned int *)v180 + 1);
              v127 = *((_DWORD *)v180 + 1) + 1;
            }
            else
            {
              *((_DWORD *)v149 + 1) = 0;
              v128 = (__int64)(v149 + 1);
              v127 = 1;
            }
            v165 = v180;
            v166 = v181;
            *(_QWORD *)(v119 + 72) = v134;
            *v165 = v166;
          }
          else
          {
            v126 = v125;
            v127 = v125 + 1;
            v128 = (__int64)&v134[5 * v126];
          }
        }
      }
    }
LABEL_233:
    v135 = *(__int64 **)(sub_1473FE0(v184) + 8);
    if ( v135 )
    {
      v178 = &v135[*((unsigned int *)v135 - 1)];
      if ( v178 != v135 )
      {
        v136 = v135;
        do
          sub_9C2300(v119, *v136++);
        while ( v178 != v136 );
      }
    }
    v137 = v5[70];
    if ( v137 )
    {
      v138 = *(unsigned int *)(v137 - 4);
      if ( (_DWORD)v138 )
      {
        v139 = nullptr;
        v178 = (void *)(8 * v138);
        while ( 1 )
        {
          sub_9C2300(v119, *(_QWORD *)(*(_QWORD *)&v139[v137] + 16LL));
          v139 += 8;
          if ( v178 == v139 )
            break;
          v137 = v5[70];
        }
      }
    }
    v140 = sub_186B270(0x30u);
    sub_CCD400(v140, *v5, v5 + 63, *(_QWORD *)v182);
    v141 = sub_1336AB0(v119, v140);
    v142 = (void (__fastcall ***)(void *))v141;
    if ( v141 )
      ++*(_DWORD *)(v141 + 8);
    v143 = *v4;
    v144 = sub_1336AB0(*((_QWORD *)*v4 + 1), v141);
    v145 = v144;
    if ( v144 )
      ++*(_DWORD *)(v144 + 8);
    v146 = (_DWORD *)v143[1];
    if ( v146 )
    {
      v10 = v146[2]-- == 1;
      if ( v10 )
      {
        v147 = *(void (***)(void))v146;
        v178 = v146;
        (*v147)();
        sub_186B220(v178);
      }
    }
    v143[1] = v145;
    if ( v142 )
    {
      v10 = (*((_DWORD *)v142 + 2))-- == 1;
      if ( v10 )
      {
        (**v142)(v142);
        sub_186B220(v142);
      }
    }
  }
  *((_DWORD *)*v4 + 30) = (*((_DWORD *)*v4 + 30) + 1) & 0x3FFFFFF | *((_DWORD *)*v4 + 30) & 0xFC000000;
  v104 = *v4;
  if ( *v4 )
    ++v104[8];
  v105 = *(_DWORD *)(v185 + 8);
  v106 = *(_DWORD *)(v185 + 12);
  if ( v105 >= v106 )
  {
    v115 = 2 * v106;
    v107 = sub_186B270(8 * v115);
    v105 = *(_DWORD *)(v185 + 8);
    v116 = *(_QWORD **)v185;
    if ( v105 )
    {
      if ( v105 - 1 <= 2 || (_QWORD *)v107 == v116 + 1 )
      {
        for ( j = 0; j != v105; ++j )
          *(_QWORD *)(v107 + j * 8) = v116[j];
      }
      else
      {
        v117 = 0;
        do
        {
          *(__m128i *)(v107 + v117 * 8) = _mm_loadu_si128((const __m128i *)&v116[v117]);
          v117 += 2;
        }
        while ( 2LL * (v105 >> 1) != v117 );
        if ( (v105 & 1) != 0 )
          *(_QWORD *)(v107 + 8LL * (v105 & 0xFFFFFFFE)) = v116[v105 & 0xFFFFFFFE];
      }
    }
    if ( v116 )
    {
      if ( v116 != (_QWORD *)(v185 + 16) )
      {
        sub_186B220(v116);
        v105 = *(_DWORD *)(v185 + 8);
      }
    }
    v118 = v185;
    *(_QWORD *)v185 = v107;
    *(_DWORD *)(v118 + 12) = v115;
  }
  else
  {
    v107 = *(_QWORD *)v185;
  }
  v108 = (__int64 *)v179;
  *(_QWORD *)(v107 + 8LL * v105) = v104;
  *(_DWORD *)(v185 + 8) = v105 + 1;
  sub_2334C0(v108);
  v195 = v48;
  sub_37DDC0(v194);
  v193 = v49;
  sub_2334C0((__int64 *)v192);
  return sub_EE4A00(v188);
}

