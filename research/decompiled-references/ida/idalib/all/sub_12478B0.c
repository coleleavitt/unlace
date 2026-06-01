void __fastcall sub_12478B0(__int64 *a1, __m128i *a2, __int64 *a3, __int64 a4)
{
  unsigned __int64 v7; // rax
  __int64 v8; // rcx
  size_t v9; // rdx
  void **v10; // r13
  __int64 v11; // r15
  __int64 v12; // rdi
  char v13; // al
  char v14; // al
  const char *v15; // rdx
  char *v16; // rsi
  char *v17; // rsi
  const char *v18; // rax
  size_t v19; // rdx
  char *v20; // r15
  _BYTE *v21; // rax
  void **v22; // rcx
  char *v23; // rsi
  unsigned __int64 v24; // r13
  __int64 v25; // rax
  void **v26; // r8
  char *v27; // rdi
  size_t v28; // rax
  int v29; // eax
  void **v30; // rdx
  unsigned __int64 v31; // rax
  __int64 v32; // rcx
  size_t v33; // rdx
  void **v34; // r13
  __int64 v35; // r15
  size_t *v36; // r8
  __int64 v37; // rsi
  char v38; // al
  _QWORD *v39; // rax
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rcx
  __int64 v43; // r15
  void **v44; // rdx
  size_t v45; // rcx
  const char *v46; // r15
  size_t v47; // rax
  __int64 v48; // rdx
  const char *v49; // rax
  char *v50; // rsi
  signed __int64 v51; // rdx
  signed __int64 v52; // rax
  char *v53; // rsi
  __int64 v54; // rax
  _BYTE *v55; // rdx
  char *v56; // rdx
  __int64 v57; // rax
  __int64 v58; // rsi
  _QWORD *v59; // rdx
  __int64 *v60; // rax
  void **v61; // rcx
  const char *v62; // r15
  size_t v63; // rdx
  size_t v64; // rax
  size_t v65; // rdx
  void **v66; // r9
  __m128i *v67; // rax
  void **v68; // r9
  size_t v69; // rax
  void **v70; // rcx
  void **v71; // rax
  void **v72; // rdi
  char *v73; // rdi
  void **v74; // rax
  void *v75; // rdi
  unsigned __int64 v76; // rsi
  char *v77; // rdi
  unsigned __int64 v78; // rax
  __int64 v79; // rdx
  void **v80; // rbp
  void **v81; // r12
  void *v82; // r13
  __int64 v83; // rcx
  void ***v84; // r15
  __int64 v85; // rax
  char v86; // al
  __int64 v87; // r15
  __int64 v88; // rax
  void ***v89; // rdx
  void **v90; // r10
  unsigned int *v91; // r8
  __int64 v92; // rsi
  char v93; // al
  __int64 v94; // rax
  __int64 v95; // rdx
  __int64 v96; // r8
  __int64 v97; // r9
  __int64 v98; // r15
  char *v99; // rdi
  size_t v100; // rax
  __int64 *v101; // rdi
  const char *v102; // rax
  char *v103; // rsi
  size_t v104; // rdx
  size_t v105; // rax
  char *v106; // rsi
  char *v107; // r15
  size_t v108; // rax
  __int64 v109; // rcx
  __int64 v110; // r8
  __int64 v111; // r9
  signed __int64 v112; // rdx
  char *v113; // rsi
  signed __int64 v114; // rax
  char *v115; // rsi
  __int64 v116; // rsi
  size_t v117; // rax
  void **v118; // rcx
  void **v119; // rax
  void **v120; // rdi
  char *v121; // rdi
  void **v122; // rax
  void *v123; // rdi
  void *v124; // r13
  _BYTE *v125; // rax
  void **v126; // rbp
  void *v127; // r15
  unsigned __int8 *v128; // rbp
  size_t v129; // rdx
  __int64 v130; // rax
  void **v131; // rbp
  size_t v132; // rax
  void **v133; // r12
  void **v134; // rbx
  void **v135; // rdi
  void **v136; // rdi
  void **v137; // rbx
  void **v138; // r12
  char *v139; // rsi
  signed __int64 v140; // rax
  char *v141; // rsi
  char *v142; // rsi
  signed __int64 v143; // rax
  char *v144; // rsi
  __int64 v145; // r15
  __int64 v146; // rax
  const char *v147; // rdi
  unsigned int v148; // eax
  __int64 v149; // rax
  const char *v150; // rdi
  unsigned int v151; // eax
  __int64 v152; // rdx
  size_t v153; // rdi
  __int64 v154; // rdx
  size_t v155; // rdi
  size_t v156; // rdx
  int v157; // eax
  __int64 v158; // rdx
  __int64 v159; // rax
  __int64 v160; // r12
  __int64 v161; // r13
  __int64 v162; // r12
  void *v163; // rdi
  void **v164; // [rsp+8h] [rbp-170h] BYREF
  void **p_dest; // [rsp+10h] [rbp-168h]
  void **v166; // [rsp+18h] [rbp-160h]
  void *v167; // [rsp+20h] [rbp-158h]
  char *v168; // [rsp+28h] [rbp-150h]
  char v169; // [rsp+32h] [rbp-146h] BYREF
  char v170; // [rsp+33h] [rbp-145h] BYREF
  int v171; // [rsp+34h] [rbp-144h] BYREF
  __int64 *v172; // [rsp+38h] [rbp-140h] BYREF
  char *v173; // [rsp+40h] [rbp-138h] BYREF
  size_t v174; // [rsp+48h] [rbp-130h]
  void *dest; // [rsp+50h] [rbp-128h] BYREF
  __m128 v176; // [rsp+58h] [rbp-120h] BYREF
  void *v177; // [rsp+70h] [rbp-108h] BYREF
  signed __int64 v178; // [rsp+78h] [rbp-100h]
  __m128i v179; // [rsp+80h] [rbp-F8h] BYREF
  void *v180[2]; // [rsp+90h] [rbp-E8h] BYREF
  size_t *v181; // [rsp+A0h] [rbp-D8h] BYREF
  __int64 v182; // [rsp+B0h] [rbp-C8h]
  char *v183; // [rsp+C0h] [rbp-B8h] BYREF
  size_t v184; // [rsp+C8h] [rbp-B0h]
  void **v185; // [rsp+D0h] [rbp-A8h]
  __int64 v186; // [rsp+E0h] [rbp-98h]
  size_t n[2]; // [rsp+F0h] [rbp-88h] BYREF
  __int64 v188; // [rsp+100h] [rbp-78h] BYREF
  __int64 *v189; // [rsp+108h] [rbp-70h]
  void *v190; // [rsp+110h] [rbp-68h]
  int *v191; // [rsp+118h] [rbp-60h]
  _BYTE v192[16]; // [rsp+120h] [rbp-58h] BYREF
  __int16 v193; // [rsp+130h] [rbp-48h]

  sub_11CC730(a1, a2, (__int64)a3, a4, 50);
  n[0] = 0xA49000009A3LL;
  v7 = sub_21B6DA0(a3, n, 2);
  v8 = a3[1];
  v188 = 0xA49000009A3LL;
  v9 = v8 + 8LL * (unsigned int)v7;
  v10 = (void **)(v8 + 8 * HIDWORD(v7));
  v164 = v10;
  *(__m128 *)n = _mm_loadh_ps((const double *)&v164);
  if ( (void **)v9 == v10 )
    goto LABEL_6;
  while ( 1 )
  {
    v11 = *(_QWORD *)v9;
    if ( *(_QWORD *)v9 )
    {
      v12 = *(_QWORD *)v9;
      v164 = (void **)v9;
      v13 = sub_21B9810(v12, 2467);
      v9 = (size_t)v164;
      if ( v13 )
        break;
      v14 = sub_21B9810(v11, 2633);
      v9 = (size_t)v164;
      if ( v14 )
        break;
    }
    v9 += 8LL;
    n[0] = v9;
    if ( v10 == (void **)v9 )
      goto LABEL_6;
  }
  v164 = v10;
  v188 = 0xA49000009A3LL;
  *(__m128 *)n = _mm_loadh_ps((const double *)&v164);
  if ( v10 == (void **)v9 )
    goto LABEL_6;
  do
  {
    v83 = *(_QWORD *)v9;
    v84 = (void ***)(v9 + 8);
    v85 = *(_QWORD *)(*(_QWORD *)v9 + 16LL);
    p_dest = *(void ***)v9;
    if ( !v85 )
      v85 = v83;
    *(_BYTE *)(v85 + 44) |= 1u;
    n[0] = v9 + 8;
    if ( v84 == (void ***)v10 )
      break;
    while ( 1 )
    {
      if ( *v84 )
      {
        v164 = *v84;
        if ( (unsigned __int8)sub_21B9810(v164, 2467) || (unsigned __int8)sub_21B9810(v164, 2633) )
          break;
      }
      n[0] = (size_t)++v84;
      if ( v10 == (void **)v84 )
        goto LABEL_101;
    }
    v9 = n[0];
  }
  while ( v10 != (void **)n[0] );
LABEL_101:
  v86 = sub_21B9810(p_dest, 2467);
  v15 = "+long-calls";
  if ( !v86 )
LABEL_6:
    v15 = "-long-calls";
  n[0] = (size_t)v15;
  v16 = *(char **)(a4 + 8);
  n[1] = 11;
  if ( v16 == *(char **)(a4 + 16) )
  {
    sub_1075D80(a4, v16, n);
  }
  else
  {
    *(_QWORD *)v16 = v15;
    v17 = v16 + 16;
    *((_QWORD *)v17 - 1) = 11;
    *(_QWORD *)(a4 + 8) = v17;
  }
  v169 = 0;
  v18 = sub_1245260((__int64)a3);
  v20 = (char *)v18;
  if ( v19 )
  {
    v164 = (void **)v19;
    v21 = memchr(v18, 116, v19);
    v22 = v164;
    v23 = (char *)v164 - 1;
    v164 = (void **)((char *)v164 - 1);
    if ( v21 )
    {
      if ( v21 - v20 == -1 )
      {
        v24 = (unsigned __int64)v22 - 1;
        v164 = v22;
      }
      else
      {
        v24 = (unsigned __int64)v22 - 2;
      }
    }
    else
    {
      v24 = (unsigned __int64)v23;
      v164 = v22;
    }
  }
  else
  {
    v164 = nullptr;
    v24 = -1;
  }
  v25 = sub_10DCD30((__int64)a3, 0x968u);
  v26 = (void **)v25;
  if ( !v25 )
    goto LABEL_20;
  v27 = **(char ***)(v25 + 48);
  v183 = v27;
  if ( !v27 )
  {
    v184 = 0;
LABEL_145:
    v116 = *a1;
    p_dest = v26;
    sub_FC70B0((__int64)n, v116, 0, 497);
    sub_AEC220((unsigned __int8 **)n, p_dest[3], (signed __int64)p_dest[4]);
    sub_AEC220((unsigned __int8 **)n, v183, v184);
    if ( (_BYTE)v193 )
    {
      sub_FC7790(v188, (__int64 *)n, SHIBYTE(v193));
      v188 = 0;
      v193 = 0;
    }
    if ( v190 != v192 )
      operator delete(v190);
    v167 = (void *)n[0];
    if ( n[0] )
    {
      v117 = n[1];
      if ( n[1] )
      {
        if ( n[0] >= n[1] && n[0] <= n[1] + 14848 )
        {
          v154 = *(unsigned int *)(n[1] + 14976);
          v155 = n[0];
          *(_DWORD *)(n[1] + 14976) = v154 + 1;
          *(_QWORD *)(v117 + 8 * v154 + 14848) = v155;
        }
        else
        {
          v118 = *((void ***)v167 + 66);
          v119 = &v118[8 * (unsigned __int64)*((unsigned int *)v167 + 134)];
          if ( v118 != v119 )
          {
            do
            {
              while ( 1 )
              {
                v119 -= 8;
                v120 = (void **)v119[3];
                if ( v120 == v119 + 5 )
                  break;
                v166 = v119;
                p_dest = v118;
                operator delete(v120);
                v118 = p_dest;
                v119 = v166;
                if ( p_dest == v166 )
                  goto LABEL_156;
              }
            }
            while ( v118 != v119 );
LABEL_156:
            v119 = *((void ***)v167 + 66);
          }
          if ( v119 != (void **)((char *)v167 + 544) )
            free(v119);
          v121 = *((char **)v167 + 52);
          if ( v121 != (char *)v167 + 432 )
            free(v121);
          v122 = (void **)((char *)v167 + 384);
          p_dest = (void **)((char *)v167 + 64);
          do
          {
            while ( 1 )
            {
              v123 = *v122;
              if ( *v122 == v122 + 2 )
                break;
              v166 = v122;
              operator delete(v123);
              v122 = v166 - 4;
              if ( v166 - 4 == p_dest )
                goto LABEL_164;
            }
            v122 -= 4;
          }
          while ( v122 != p_dest );
LABEL_164:
          operator delete(v167, 0x3A0u);
        }
      }
    }
    goto LABEL_20;
  }
  p_dest = (void **)v25;
  v28 = strlen(v27);
  v26 = p_dest;
  v184 = v28;
  if ( v28 == 3 )
  {
    if ( !(unsigned int)sub_22462B0(&v183, "64b", 3) )
      goto LABEL_20;
    v28 = v184;
    v26 = p_dest;
  }
  if ( v28 != 4 )
    goto LABEL_145;
  p_dest = v26;
  v29 = sub_22462B0(&v183, "128b", 4);
  v26 = p_dest;
  if ( v29 )
    goto LABEL_145;
LABEL_20:
  v172 = a3;
  if ( (v20[v24] & 0xDF) == 0x54 )
  {
    v30 = nullptr;
    if ( (unsigned __int64)v164 >= v24 )
      v30 = (void **)v24;
    v164 = v30;
  }
  if ( v20 )
  {
    p_dest = &dest;
    dest = &v176.m128_u16[4];
    sub_1244700(&dest, v20, (__int64)v164 + (_QWORD)v20);
  }
  else
  {
    v176.m128_i8[8] = 0;
    p_dest = &dest;
    dest = &v176.m128_u16[4];
    v176.m128_u64[0] = 0;
  }
  v169 = 0;
  LODWORD(n[1]) = 2617;
  n[0] = 0x96A0000096BLL;
  v31 = sub_21B6DA0(a3, n, 3);
  v32 = a3[1];
  v188 = 0x96A0000096BLL;
  LODWORD(v189) = 2617;
  v33 = v32 + 8LL * (unsigned int)v31;
  v34 = (void **)(v32 + 8 * HIDWORD(v31));
  v164 = v34;
  *(__m128 *)n = _mm_loadh_ps((const double *)&v164);
  if ( (void **)v33 != v34 )
  {
    v167 = (char *)&n[1] + 4;
    while ( 1 )
    {
      v35 = *(_QWORD *)v33;
      v36 = n;
      if ( *(_QWORD *)v33 )
        break;
LABEL_32:
      v33 += 8LL;
      n[0] = v33;
      if ( v34 == (void **)v33 )
        goto LABEL_33;
    }
    while ( 1 )
    {
      v37 = *((unsigned int *)v36 + 4);
      v166 = (void **)v36;
      if ( !(_DWORD)v37 )
        goto LABEL_32;
      v164 = (void **)v33;
      v38 = sub_21B9810(v35, v37);
      v33 = (size_t)v164;
      if ( v38 )
        break;
      v36 = (size_t *)((char *)v166 + 4);
      if ( (char *)v166 + 4 == v167 )
        goto LABEL_32;
    }
    v164 = v34;
    v188 = 0x96A0000096BLL;
    LODWORD(v189) = 2617;
    *(__m128 *)n = _mm_loadh_ps((const double *)&v164);
    if ( v34 == (void **)v33 )
      goto LABEL_33;
    v168 = (char *)&n[1] + 4;
LABEL_107:
    v87 = *(_QWORD *)v33;
    v88 = *(_QWORD *)(*(_QWORD *)v33 + 16LL);
    if ( !v88 )
      v88 = *(_QWORD *)v33;
    v89 = (void ***)(v33 + 8);
    *(_BYTE *)(v88 + 44) |= 1u;
    for ( n[0] = (size_t)v89; v34 != (void **)v89; n[0] = (size_t)v89 )
    {
      v90 = *v89;
      v91 = (unsigned int *)n;
      if ( *v89 )
      {
        do
        {
          v92 = v91[4];
          v167 = v91;
          if ( !(_DWORD)v92 )
            break;
          v166 = (void **)v89;
          v164 = v90;
          v93 = sub_21B9810(v90, v92);
          v90 = v164;
          v89 = (void ***)v166;
          if ( v93 )
          {
            v33 = n[0];
            if ( v34 != (void **)n[0] )
              goto LABEL_107;
            goto LABEL_115;
          }
          v91 = (unsigned int *)((char *)v167 + 4);
        }
        while ( v168 != (char *)v167 + 4 );
      }
      ++v89;
    }
LABEL_115:
    if ( (unsigned __int8)sub_21B9810(v87, 2617) )
      goto LABEL_33;
    v94 = sub_10DE660((__int64)a3, 0x96Bu, 0x96Au);
    v98 = v94;
    if ( !v94 || !(unsigned __int8)sub_21B9810(v94, 2410) )
    {
LABEL_126:
      v169 = 1;
      LOWORD(v186) = 1027;
      v185 = p_dest;
      v183 = "hvx";
      v102 = sub_1244E20(&v172, 1, v95, (__int64)&v172, v96, v97, (char)"hvx");
      v103 = *(char **)(a4 + 8);
      n[0] = (size_t)v102;
      n[1] = v104;
      if ( v103 == *(char **)(a4 + 16) )
      {
        sub_1075D80(a4, v103, n);
        goto LABEL_41;
      }
      v105 = n[1];
      v106 = v103 + 16;
      *((_QWORD *)v106 - 2) = n[0];
      *((_QWORD *)v106 - 1) = v105;
      v54 = v176.m128_u64[0];
      *(_QWORD *)(a4 + 8) = v106;
      v55 = dest;
      if ( v54 != 3 )
        goto LABEL_42;
      goto LABEL_128;
    }
    v99 = **(char ***)(v98 + 48);
    v100 = 0;
    v183 = v99;
    if ( v99 )
      v100 = j__strlen(v99);
    v184 = v100;
    sub_2246450(n, &v183);
    v101 = (__int64 *)dest;
    if ( (__int64 *)n[0] == &v188 )
    {
      v95 = n[1];
      if ( n[1] )
      {
        if ( n[1] == 1 )
          *(_BYTE *)dest = v188;
        else
          memcpy(dest, (const void *)n[0], n[1]);
        v95 = n[1];
        v101 = (__int64 *)dest;
      }
      v176.m128_u64[0] = v95;
      *((_BYTE *)v101 + v95) = 0;
      v101 = (__int64 *)n[0];
      goto LABEL_124;
    }
    v95 = (__int64)(p_dest + 2);
    if ( dest == p_dest + 2 )
    {
      v164 = (void **)v188;
      dest = (void *)n[0];
      v176 = _mm_loadh_ps((const double *)&v164);
    }
    else
    {
      v164 = (void **)v188;
      v95 = v176.m128_i64[1];
      dest = (void *)n[0];
      v176 = _mm_loadh_ps((const double *)&v164);
      if ( v101 )
      {
        n[0] = (size_t)v101;
        v188 = v95;
        goto LABEL_124;
      }
    }
    v101 = &v188;
    n[0] = (size_t)&v188;
LABEL_124:
    n[1] = 0;
    *(_BYTE *)v101 = 0;
    if ( (__int64 *)n[0] != &v188 )
      operator delete((void *)n[0]);
    goto LABEL_126;
  }
LABEL_33:
  v39 = (_QWORD *)sub_10DCD30((__int64)a3, 0xA39u);
  if ( v39 )
  {
    v42 = v39[1];
    v43 = **(_QWORD **)(v42 + 8);
    v44 = (void **)(*(_QWORD *)(v42 + 32) + 80LL * (unsigned int)(*(_DWORD *)(*v39 + 40LL) - 1));
    if ( *(_DWORD *)v44 )
    {
      v149 = *(_QWORD *)(v42 + 16);
      v45 = 0;
      v150 = (const char *)(v43 + *(unsigned int *)(v149 + 4LL * (unsigned int)(*(_DWORD *)v44 + 1)));
      if ( v150 )
      {
        v164 = v44;
        v151 = j__strlen(v150);
        v44 = v164;
        v45 = v151;
      }
      v47 = 0;
      v46 = (const char *)(*((unsigned int *)v44 + 1) + v43);
      if ( !v46 )
      {
LABEL_37:
        v48 = 0;
        if ( v47 < v45 )
          goto LABEL_39;
        goto LABEL_38;
      }
    }
    else
    {
      v45 = 0;
      v46 = (const char *)(*((unsigned int *)v44 + 1) + v43);
      if ( !v46 )
      {
        v45 = 0;
        v47 = 0;
LABEL_38:
        v48 = v47 - v45;
        v47 = v45;
LABEL_39:
        n[1] = v48;
        LOWORD(v190) = 261;
        n[0] = (size_t)&v46[v47];
        v49 = sub_1244E20(&v172, 0, v48, (__int64)&v172, v40, v41, (unsigned __int8)v46 + (unsigned __int8)v47);
        v50 = *(char **)(a4 + 8);
        v183 = (char *)v49;
        v184 = v51;
        if ( v50 == *(char **)(a4 + 16) )
        {
          sub_1075D80(a4, v50, &v183);
        }
        else
        {
          v52 = v184;
          v53 = v50 + 16;
          *((_QWORD *)v53 - 2) = v183;
          *((_QWORD *)v53 - 1) = v52;
          *(_QWORD *)(a4 + 8) = v53;
        }
        goto LABEL_41;
      }
    }
    v164 = (void **)v45;
    v47 = strlen(v46);
    v45 = (size_t)v164;
    goto LABEL_37;
  }
LABEL_41:
  v54 = v176.m128_u64[0];
  v55 = dest;
  if ( v176.m128_u64[0] != 3 )
  {
LABEL_42:
    v54 = 4;
    v56 = "128b";
    goto LABEL_43;
  }
LABEL_128:
  if ( (*(_WORD *)v55 != 13942 || v55[2] != 48)
    && (*(_WORD *)v55 != 13942 || v55[2] != 50)
    && (*(_WORD *)v55 != 13942 || v55[2] != 53) )
  {
    goto LABEL_42;
  }
  v56 = "64b";
LABEL_43:
  v173 = v56;
  v174 = v54;
  v57 = sub_10DCD30((__int64)a3, 0x968u);
  if ( !v57 )
    goto LABEL_139;
  if ( v169 )
  {
    v164 = (void **)v57;
    if ( !(unsigned __int8)sub_21B9810(v57, 2408) )
      goto LABEL_77;
    v107 = *(char **)v164[6];
    v108 = 0;
    if ( v107 )
      v108 = j__strlen(*(const char **)v164[6]);
    v173 = v107;
    v174 = v108;
LABEL_139:
    if ( !v169 )
      goto LABEL_78;
    goto LABEL_140;
  }
  v58 = *a1;
  v164 = (void **)v57;
  sub_FC70B0((__int64)n, v58, 0, 427);
  v59 = v164[1];
  v60 = (__int64 *)v59[1];
  v61 = (void **)(v59[4] + 80LL * (unsigned int)(*((_DWORD *)*v164 + 10) - 1));
  if ( !*(_DWORD *)v61 )
  {
    v62 = (const char *)(*v60 + *((unsigned int *)v61 + 1));
    if ( v62 )
      v63 = strlen(v62);
    else
      v63 = 0;
LABEL_48:
    v64 = 0;
LABEL_49:
    v65 = v63 - v64;
    goto LABEL_50;
  }
  v145 = *v60;
  v146 = v59[2];
  v63 = 0;
  v147 = (const char *)(v145 + *(unsigned int *)(v146 + 4LL * (unsigned int)(*(_DWORD *)v61 + 1)));
  if ( v147 )
  {
    v164 = v61;
    v148 = j__strlen(v147);
    v61 = v164;
    v63 = v148;
  }
  v62 = (const char *)(*((unsigned int *)v61 + 1) + v145);
  if ( !v62 )
  {
    if ( v63 )
      goto LABEL_217;
    goto LABEL_48;
  }
  v164 = (void **)v63;
  v64 = strlen(v62);
  if ( (unsigned __int64)v164 <= v64 )
  {
    v63 = v64;
    v64 = (size_t)v164;
    goto LABEL_49;
  }
  v65 = 0;
LABEL_50:
  if ( &v62[v64] )
  {
    v164 = v180;
    v180[0] = &v181;
    sub_1244700(v180, &v62[v64], (__int64)&v62[v64 + v65]);
    v66 = v164;
    goto LABEL_52;
  }
LABEL_217:
  v66 = v180;
  LOBYTE(v181) = 0;
  v180[1] = nullptr;
  v180[0] = &v181;
LABEL_52:
  v164 = v66;
  v67 = (__m128i *)sub_99BDC0(v66, 0, 0, "-", 1u);
  v68 = v164;
  v177 = &v179;
  if ( (__m128i *)v67->m128i_i64[0] == &v67[1] )
  {
    v179 = _mm_loadu_si128(v67 + 1);
  }
  else
  {
    v177 = (void *)v67->m128i_i64[0];
    v179.m128i_i64[0] = v67[1].m128i_i64[0];
  }
  v178 = v67->m128i_i64[1];
  v67->m128i_i64[0] = (__int64)v67[1].m128i_i64;
  v67->m128i_i64[1] = 0;
  v67[1].m128i_i8[0] = 0;
  if ( v180[0] != v68 + 2 )
    operator delete(v180[0]);
  sub_AEC220((unsigned __int8 **)n, v177, v178);
  if ( v177 != &v179 )
    operator delete(v177);
  if ( (_BYTE)v193 )
  {
    sub_FC7790(v188, (__int64 *)n, SHIBYTE(v193));
    v188 = 0;
    v193 = 0;
  }
  if ( v190 != v192 )
    operator delete(v190);
  v167 = (void *)n[0];
  if ( n[0] )
  {
    v69 = n[1];
    if ( n[1] )
    {
      if ( n[0] < n[1] || n[0] > n[1] + 14848 )
      {
        v70 = *((void ***)v167 + 66);
        v71 = &v70[8 * (unsigned __int64)*((unsigned int *)v167 + 134)];
        if ( v70 != v71 )
        {
          do
          {
            while ( 1 )
            {
              v71 -= 8;
              v72 = (void **)v71[3];
              if ( v72 == v71 + 5 )
                break;
              v166 = v71;
              v164 = v70;
              operator delete(v72);
              v70 = v164;
              v71 = v166;
              if ( v164 == v166 )
                goto LABEL_68;
            }
          }
          while ( v70 != v71 );
LABEL_68:
          v71 = *((void ***)v167 + 66);
        }
        if ( v71 != (void **)((char *)v167 + 544) )
          free(v71);
        v73 = *((char **)v167 + 52);
        if ( v73 != (char *)v167 + 432 )
          free(v73);
        v74 = (void **)((char *)v167 + 384);
        v164 = (void **)((char *)v167 + 64);
        do
        {
          while ( 1 )
          {
            v75 = *v74;
            if ( *v74 == v74 + 2 )
              break;
            v166 = v74;
            operator delete(v75);
            v74 = v166 - 4;
            if ( v164 == v166 - 4 )
              goto LABEL_76;
          }
          v74 -= 4;
        }
        while ( v164 != v74 );
LABEL_76:
        operator delete(v167, 0x3A0u);
      }
      else
      {
        v152 = *(unsigned int *)(n[1] + 14976);
        v153 = n[0];
        *(_DWORD *)(n[1] + 14976) = v152 + 1;
        *(_QWORD *)(v69 + 8 * v152 + 14848) = v153;
      }
    }
  }
LABEL_77:
  if ( !v169 )
    goto LABEL_78;
LABEL_140:
  sub_2246450(n, &v173);
  v180[0] = "hvx-length";
  v181 = n;
  LOWORD(v182) = 1027;
  v177 = (void *)sub_1244E20(&v172, 1, 1027, v109, v110, v111, (char)"hvx-length");
  v178 = v112;
  if ( (__int64 *)n[0] != &v188 )
    operator delete((void *)n[0]);
  v113 = *(char **)(a4 + 8);
  if ( v113 == *(char **)(a4 + 16) )
  {
    sub_1245C50(a4, v113, &v177);
  }
  else
  {
    v114 = v178;
    v115 = v113 + 16;
    *((_QWORD *)v115 - 2) = v177;
    *((_QWORD *)v115 - 1) = v114;
    *(_QWORD *)(a4 + 8) = v115;
  }
LABEL_78:
  v76 = v176.m128_u64[0];
  v77 = (char *)dest;
  if ( v176.m128_u64[0] )
  {
    v76 = v176.m128_u64[0] - 1;
    v77 = (char *)dest + 1;
  }
  if ( (unsigned __int8)sub_2247970(v77, v76, 10, n) || n[0] != LODWORD(n[0]) )
    v171 = 0;
  else
    v171 = n[0];
  v188 = (__int64)&v169;
  v190 = &v170;
  n[0] = (size_t)a3;
  n[1] = (size_t)&v172;
  v189 = a1;
  v191 = &v171;
  sub_12472A0((__int64)&v177, (__int64 *)n, 0x969u, 0xA38u);
  if ( v179.m128i_i8[0] )
  {
    v142 = *(char **)(a4 + 8);
    if ( v142 == *(char **)(a4 + 16) )
    {
      sub_1245C50(a4, v142, &v177);
    }
    else
    {
      v143 = v178;
      v144 = v142 + 16;
      *((_QWORD *)v144 - 2) = v177;
      *((_QWORD *)v144 - 1) = v143;
      *(_QWORD *)(a4 + 8) = v144;
    }
  }
  sub_12472A0((__int64)&v177, (__int64 *)n, 0x967u, 0xA37u);
  if ( v179.m128i_i8[0] )
  {
    v139 = *(char **)(a4 + 8);
    if ( v139 == *(char **)(a4 + 16) )
    {
      sub_1245C50(a4, v139, &v177);
    }
    else
    {
      v140 = v178;
      v141 = v139 + 16;
      *((_QWORD *)v141 - 2) = v177;
      *((_QWORD *)v141 - 1) = v140;
      *(_QWORD *)(a4 + 8) = v141;
    }
  }
  if ( dest != p_dest + 2 )
    operator delete(dest);
  n[0] = 0x5BE00000786LL;
  v78 = sub_21B6DA0(a3, n, 2);
  v79 = a3[1];
  v188 = 0x5BE00000786LL;
  v80 = (void **)(v79 + 8LL * (unsigned int)v78);
  v81 = (void **)(v79 + 8 * HIDWORD(v78));
  v164 = v81;
  *(__m128 *)n = _mm_loadh_ps((const double *)&v164);
  if ( v80 != v81 )
  {
    while ( 1 )
    {
      v82 = *v80;
      if ( *v80 )
      {
        if ( (unsigned __int8)sub_21B9810(*v80, 1926) || (unsigned __int8)sub_21B9810(v82, 1470) )
          break;
      }
      n[0] = (size_t)++v80;
      if ( v81 == v80 )
        return;
    }
    v164 = v81;
    v188 = 0x5BE00000786LL;
    *(__m128 *)n = _mm_loadh_ps((const double *)&v164);
    if ( v81 != v80 )
    {
      do
      {
        v124 = *v80;
        v125 = *((_BYTE **)*v80 + 2);
        if ( !v125 )
          v125 = *v80;
        v126 = v80 + 1;
        v125[44] |= 1u;
        n[0] = (size_t)v126;
        if ( v126 == v81 )
          break;
        while ( 1 )
        {
          v127 = *v126;
          if ( *v126 )
          {
            if ( (unsigned __int8)sub_21B9810(*v126, 1926) || (unsigned __int8)sub_21B9810(v127, 1470) )
              break;
          }
          n[0] = (size_t)++v126;
          if ( v81 == v126 )
            goto LABEL_173;
        }
        v80 = (void **)n[0];
      }
      while ( v81 != (void **)n[0] );
LABEL_173:
      if ( (unsigned __int8)sub_21B9810(v124, 1926) && !v169 )
      {
        sub_FC70B0((__int64)n, *a1, 0, 578);
        v128 = (unsigned __int8 *)n[0];
        if ( !n[0] )
        {
          v156 = n[1];
          v157 = *(_DWORD *)(n[1] + 14976);
          if ( v157 )
          {
            v159 = (unsigned int)(v157 - 1);
            *(_DWORD *)(n[1] + 14976) = v159;
            v128 = *(unsigned __int8 **)(v156 + 8 * v159 + 14848);
            v160 = *((unsigned int *)v128 + 134);
            *v128 = 0;
            v161 = *((_QWORD *)v128 + 66);
            *((_DWORD *)v128 + 106) = 0;
            v162 = v161 + (v160 << 6);
            while ( v161 != v162 )
            {
              while ( 1 )
              {
                v162 -= 64;
                v163 = *(void **)(v162 + 24);
                if ( v163 == (void *)(v162 + 40) )
                  break;
                operator delete(v163);
                if ( v161 == v162 )
                  goto LABEL_261;
              }
            }
LABEL_261:
            *((_DWORD *)v128 + 134) = 0;
          }
          else
          {
            v128 = (unsigned __int8 *)operator new(0x3A0u);
            *v128 = 0;
            *((_QWORD *)v128 + 12) = v128 + 112;
            *((_QWORD *)v128 + 16) = v128 + 144;
            *((_QWORD *)v128 + 20) = v128 + 176;
            *((_QWORD *)v128 + 24) = v128 + 208;
            *((_QWORD *)v128 + 28) = v128 + 240;
            *((_QWORD *)v128 + 32) = v128 + 272;
            *((_QWORD *)v128 + 36) = v128 + 304;
            *((_QWORD *)v128 + 40) = v128 + 336;
            *((_QWORD *)v128 + 44) = v128 + 368;
            *((_QWORD *)v128 + 48) = v128 + 400;
            *((_QWORD *)v128 + 52) = v128 + 432;
            *((_QWORD *)v128 + 13) = 0;
            v128[112] = 0;
            *((_QWORD *)v128 + 17) = 0;
            v128[144] = 0;
            *((_QWORD *)v128 + 21) = 0;
            v128[176] = 0;
            *((_QWORD *)v128 + 25) = 0;
            v128[208] = 0;
            *((_QWORD *)v128 + 29) = 0;
            v128[240] = 0;
            *((_QWORD *)v128 + 33) = 0;
            v128[272] = 0;
            *((_QWORD *)v128 + 37) = 0;
            v128[304] = 0;
            *((_QWORD *)v128 + 41) = 0;
            v128[336] = 0;
            *((_QWORD *)v128 + 45) = 0;
            v128[368] = 0;
            *((_QWORD *)v128 + 49) = 0;
            v128[400] = 0;
            *((_QWORD *)v128 + 53) = 0x800000000LL;
            *((_QWORD *)v128 + 66) = v128 + 544;
            *((_QWORD *)v128 + 67) = 0x600000000LL;
          }
          n[0] = (size_t)v128;
        }
        v128[*v128 + 1] = 1;
        v129 = n[0];
        v130 = *(unsigned __int8 *)n[0];
        *(_BYTE *)n[0] = v130 + 1;
        *(_QWORD *)(v129 + 8 * v130 + 16) = "auto-vectorization";
        if ( (_BYTE)v193 )
        {
          sub_FC7790(v188, (__int64 *)n, SHIBYTE(v193));
          v188 = 0;
          v193 = 0;
        }
        if ( v190 != v192 )
          operator delete(v190);
        v131 = (void **)n[0];
        if ( n[0] )
        {
          v132 = n[1];
          if ( n[1] )
          {
            if ( n[0] >= n[1] && n[0] <= n[1] + 14848 )
            {
              v158 = *(unsigned int *)(n[1] + 14976);
              *(_DWORD *)(n[1] + 14976) = v158 + 1;
              *(_QWORD *)(v132 + 8 * v158 + 14848) = v131;
            }
            else
            {
              v133 = *(void ***)(n[0] + 528);
              v134 = &v133[8 * (unsigned __int64)*(unsigned int *)(n[0] + 536)];
              if ( v133 != v134 )
              {
                do
                {
                  while ( 1 )
                  {
                    v134 -= 8;
                    v135 = (void **)v134[3];
                    if ( v135 == v134 + 5 )
                      break;
                    operator delete(v135);
                    if ( v133 == v134 )
                      goto LABEL_187;
                  }
                }
                while ( v133 != v134 );
LABEL_187:
                v134 = (void **)v131[66];
              }
              if ( v134 != v131 + 68 )
                free(v134);
              v136 = (void **)v131[52];
              if ( v136 != v131 + 54 )
                free(v136);
              v137 = v131 + 48;
              v138 = v131 + 8;
              do
              {
                while ( *v137 != v137 + 2 )
                {
                  operator delete(*v137);
                  v137 -= 4;
                  if ( v138 == v137 )
                    goto LABEL_195;
                }
                v137 -= 4;
              }
              while ( v138 != v137 );
LABEL_195:
              operator delete(v131, 0x3A0u);
            }
          }
        }
      }
    }
  }
}
