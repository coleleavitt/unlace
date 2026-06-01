__int64 __fastcall sub_87CEB0(__int64 a1, unsigned __int64 a2, int a3, __int64 a4, int a5, int a6, __m128 a7)
{
  char **v7; // r14
  char **v8; // r14
  char **exception; // rbx
  char **v10; // r14
  char **v11; // r14
  char **v12; // r14
  __int64 v15; // rax
  char v16; // bl
  __int64 v17; // rbx
  int v18; // edi
  __int64 v19; // rax
  __int64 *v20; // rcx
  unsigned int v21; // edx
  __int64 *v22; // rsi
  __int64 v23; // rdx
  __int64 *v24; // r8
  __int64 *j; // rax
  __int64 v26; // rdx
  unsigned int k; // ebx
  __int64 v28; // rdx
  int v29; // eax
  __int64 *v30; // rdx
  __int64 v31; // rax
  __int64 v32; // r15
  _QWORD *v33; // rcx
  unsigned int v34; // eax
  unsigned int v35; // ecx
  size_t v36; // rsi
  unsigned int *v37; // rax
  __int64 v38; // rdx
  _DWORD *v39; // rdi
  __int64 v40; // rax
  _QWORD *v41; // r12
  __int64 *v42; // rbx
  _QWORD *v43; // r13
  __int64 v44; // rsi
  bool v45; // zf
  __int64 *v46; // r12
  unsigned __int64 v47; // r13
  __int64 v48; // rsi
  __int64 v49; // rsi
  unsigned int v50; // r12d
  __int64 v51; // rdx
  int v52; // eax
  __int64 *v53; // rdx
  __int64 v54; // rax
  __int64 v55; // r15
  unsigned int v56; // eax
  unsigned int v57; // r8d
  size_t v58; // rsi
  unsigned int *v59; // rax
  __int64 v60; // rdx
  _QWORD *v61; // rax
  _QWORD *v62; // rdx
  unsigned int m; // r13d
  __int64 v64; // rcx
  int v65; // eax
  _QWORD *v66; // rcx
  __int64 v67; // r12
  unsigned int v68; // eax
  unsigned int v69; // r15d
  size_t v70; // rsi
  unsigned int *v71; // rax
  unsigned int v72; // edx
  __int64 v73; // r12
  int v74; // r10d
  __int64 v75; // rcx
  unsigned __int64 *v76; // r13
  int v77; // esi
  __int64 v78; // r10
  __int64 v79; // rdi
  unsigned __int64 *v80; // rax
  _QWORD *v81; // rcx
  unsigned __int64 v82; // rdx
  __int64 v83; // rax
  __int64 v84; // r13
  _QWORD *v85; // r12
  _QWORD *v86; // rdx
  unsigned int v87; // eax
  __int64 v88; // rcx
  int v89; // eax
  _QWORD *v90; // rcx
  __int64 v91; // r13
  _QWORD *v92; // rax
  _QWORD *v93; // rdx
  _QWORD *v94; // r12
  unsigned int v95; // eax
  __int64 v96; // rcx
  int v97; // eax
  _QWORD *v98; // rcx
  __int64 v99; // rax
  int v100; // edx
  unsigned int v101; // r12d
  unsigned int v102; // r13d
  __int64 v103; // rdi
  __int64 v104; // r15
  unsigned int v105; // eax
  __int64 v106; // rsi
  __int64 v107; // r15
  __int64 v108; // rdi
  __int64 v109; // r13
  _QWORD *v110; // rdx
  unsigned int v111; // eax
  __int64 v112; // rcx
  int v113; // eax
  __int64 *v114; // rcx
  void *v115; // r12
  void *v116; // r14
  _QWORD *v117; // rcx
  unsigned __int64 v118; // r12
  __int64 *v119; // r14
  __int64 v120; // rsi
  __int64 *v121; // r14
  unsigned __int64 v122; // r12
  __int64 v123; // rsi
  __int64 *v124; // rbx
  unsigned __int64 v125; // r14
  __int64 v126; // rsi
  _QWORD *v128; // rax
  unsigned int v129; // r12d
  unsigned int v130; // ecx
  unsigned int *v131; // rax
  __int64 v132; // rcx
  __int64 v133; // r12
  __int64 v134; // r12
  unsigned int v135; // r15d
  unsigned int v136; // ecx
  unsigned int *v137; // rax
  __int64 v138; // rcx
  unsigned int v139; // r15d
  unsigned int v140; // ecx
  unsigned int *v141; // rax
  __int64 v142; // rcx
  __int64 v143; // rax
  int v144; // r9d
  __m128 *v145; // rdx
  __m128 *v146; // rax
  const __m128i *v147; // r15
  __m128i *v148; // r8
  __int64 v149; // rdx
  __m128 *v150; // rsi
  __int64 v151; // rdi
  __m128 *v152; // rdx
  _QWORD *v153; // rax
  _QWORD *v154; // rdx
  _QWORD *v155; // rdx
  _QWORD *v156; // rdx
  int v157; // [rsp+10h] [rbp-140h]
  __int64 v158; // [rsp+18h] [rbp-138h]
  unsigned int v159; // [rsp+30h] [rbp-120h]
  _QWORD *v160; // [rsp+30h] [rbp-120h]
  _QWORD *v161; // [rsp+38h] [rbp-118h]
  int v162; // [rsp+38h] [rbp-118h]
  size_t v163; // [rsp+38h] [rbp-118h]
  int v164[2]; // [rsp+40h] [rbp-110h]
  unsigned int v165; // [rsp+48h] [rbp-108h]
  unsigned int v166; // [rsp+48h] [rbp-108h]
  size_t v167; // [rsp+48h] [rbp-108h]
  int v168; // [rsp+48h] [rbp-108h]
  unsigned int i; // [rsp+54h] [rbp-FCh]
  __int64 v170; // [rsp+58h] [rbp-F8h]
  unsigned int v171; // [rsp+64h] [rbp-ECh] BYREF
  int v172[2]; // [rsp+68h] [rbp-E8h] BYREF
  __int64 v173; // [rsp+70h] [rbp-E0h] BYREF
  int v174[2]; // [rsp+78h] [rbp-D8h] BYREF
  __int64 v175; // [rsp+80h] [rbp-D0h]
  __int64 v176; // [rsp+90h] [rbp-C0h]
  __int64 v177; // [rsp+A0h] [rbp-B0h]
  _QWORD *v178; // [rsp+A8h] [rbp-A8h]
  _QWORD v179[2]; // [rsp+B0h] [rbp-A0h] BYREF
  _QWORD v180[2]; // [rsp+C0h] [rbp-90h] BYREF
  _QWORD v181[2]; // [rsp+D0h] [rbp-80h] BYREF
  _QWORD v182[2]; // [rsp+E0h] [rbp-70h] BYREF
  __int64 v183; // [rsp+F0h] [rbp-60h] BYREF
  __int64 v184; // [rsp+F8h] [rbp-58h]
  _BYTE v185[80]; // [rsp+100h] [rbp-50h] BYREF

  v15 = *(_QWORD *)(a1 + 72);
  v170 = a1;
  v178 = nullptr;
  v158 = v15;
  v175 = v15;
  v176 = v15;
  v177 = v15;
  v179[0] = 0;
  v179[1] = 0;
  v180[0] = 1;
  v180[1] = 0;
  v181[0] = 0;
  v181[1] = 0;
  v182[0] = 1;
  v182[1] = 0;
  if ( !(unsigned __int8)sub_1673B50((int)a1 + 128, a3, (unsigned int)v179, (unsigned int)&v171, a5, a6) )
  {
    sub_1872CE0("");
    sub_1873130(114, 87);
  }
  if ( !(unsigned __int8)sub_1673C40(a1 + 128, a4, v181) )
  {
    sub_1872CE0("");
    sub_1873130(114, 88);
  }
  i = v171;
  if ( v171 )
  {
    for ( i = 0; i < v171; ++i )
    {
      v16 = sub_182E3A0(qword_1C7F2C0, v179, i);
      if ( v16 != (unsigned __int8)sub_182E3A0(qword_1C7F2C0, v181, i) )
        break;
    }
  }
  v17 = a1;
  v18 = *(_DWORD *)(a2 + 12);
  v19 = *(unsigned int *)(v170 + 720);
  v20 = *(__int64 **)(v170 + 712);
  v21 = v19 - 1;
  v19 *= 16;
  v22 = (__int64 *)((char *)v20 + v19);
  v23 = 16LL * (v18 & v21);
  v24 = &v20[(unsigned __int64)v23 / 8];
  if ( v23 != v19 )
  {
    for ( j = &v20[(unsigned __int64)v23 / 8]; v22 != j; j += 2 )
    {
      v26 = *j;
      if ( (unsigned __int64)*j > 1 )
      {
        if ( *(_DWORD *)(v26 + 12) == v18 && v26 == a2 )
        {
LABEL_161:
          v42 = nullptr;
          v160 = nullptr;
          *(_QWORD *)v164 = j[1];
          goto LABEL_108;
        }
      }
      else if ( !v26 )
      {
LABEL_15:
        v170 = v17;
        goto LABEL_16;
      }
    }
  }
  if ( v20 != v24 )
  {
    v17 = v170;
    while ( 1 )
    {
      v40 = *v20;
      if ( (unsigned __int64)*v20 > 1 )
      {
        if ( *(_DWORD *)(v40 + 12) == v18 && v40 == a2 )
        {
          j = v20;
          goto LABEL_161;
        }
      }
      else if ( !v40 )
      {
        goto LABEL_15;
      }
      v20 += 2;
      if ( v24 == v20 )
        goto LABEL_15;
    }
  }
LABEL_16:
  v161 = nullptr;
  if ( v171 )
  {
    for ( k = 0; k < v171; ++k )
    {
      v31 = *(_QWORD *)(a2 + 32);
      v183 = 0;
      v184 = 0;
      *(_QWORD *)v172 = v31;
      v32 = sub_15DCAD0(*(_QWORD *)(v170 + 136), (int)v172, 0);
      sub_15D0DF0(&v183);
      if ( v32 )
        ++*(_DWORD *)(v32 + 8);
      v33 = v161;
      if ( v161 )
      {
        v34 = *((_DWORD *)v161 - 1);
        if ( v34 == *((_DWORD *)v161 - 2) )
        {
          v35 = (3 * v34 + 1) >> 1;
          v36 = 8 * v35 + 8;
          if ( 8 * v34 + 8 >= (unsigned int)v36 || v34 >= v35 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(&v183, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, &v183);
            sub_233E40((__int64)&v183);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v165 = (3 * v34 + 1) >> 1;
          v37 = (unsigned int *)sub_186B300(v161 - 1, v36);
          v38 = v37[1];
          v39 = v37 + 2;
          v161 = v37 + 2;
          *v37 = v165;
          LODWORD(v37) = v38;
          v33 = v39;
          v30 = (__int64 *)&v39[2 * v38];
          v29 = (_DWORD)v37 + 1;
        }
        else
        {
          v28 = v34;
          v29 = v34 + 1;
          v30 = &v161[v28];
        }
      }
      else
      {
        v128 = (_QWORD *)sub_186B270(0x18u);
        *v128 = 2;
        v161 = v128 + 1;
        v30 = v128 + 1;
        v33 = v128 + 1;
        v29 = 1;
      }
      *v30 = v32;
      *((_DWORD *)v33 - 1) = v29;
    }
  }
  if ( *(_DWORD *)(a2 + 24) <= 1u )
  {
    v42 = nullptr;
    v160 = v161;
  }
  else
  {
    v41 = v178;
    v42 = nullptr;
    v166 = 1;
    while ( 1 )
    {
      if ( v41 )
      {
        v43 = &v41[*((unsigned int *)v41 - 1)];
        if ( v41 >= v43 )
          goto LABEL_45;
        do
        {
          while ( 1 )
          {
            v44 = *v41;
            if ( *v41 )
            {
              v45 = (*(_DWORD *)(v44 + 8))-- == 1;
              if ( v45 )
                break;
            }
            if ( ++v41 >= v43 )
              goto LABEL_44;
          }
          sub_15D7BC0(v177, v44);
          ++v41;
        }
        while ( v41 < v43 );
LABEL_44:
        v41 = v178;
        if ( v178 )
LABEL_45:
          *((_DWORD *)v41 - 1) = 0;
      }
      if ( v42 )
      {
        v46 = v42;
        v47 = (unsigned __int64)&v42[*((unsigned int *)v42 - 1)];
        if ( (unsigned __int64)v42 < v47 )
        {
          do
          {
            while ( 1 )
            {
              v48 = *v46;
              if ( *v46 )
              {
                v45 = (*(_DWORD *)(v48 + 8))-- == 1;
                if ( v45 )
                  break;
              }
              if ( (unsigned __int64)++v46 >= v47 )
                goto LABEL_53;
            }
            sub_15D7BC0(v158, v48);
            ++v46;
          }
          while ( (unsigned __int64)v46 < v47 );
        }
LABEL_53:
        *((_DWORD *)v42 - 1) = 0;
      }
      v49 = v171;
      if ( v171 )
      {
        v50 = 0;
        do
        {
          v54 = *(_QWORD *)(a2 + 32);
          LOBYTE(v184) = 0;
          v173 = v54;
          LODWORD(v183) = v166;
          v55 = sub_15DCAD0(*(_QWORD *)(v170 + 136), (int)&v173, 0);
          sub_15D0DF0(&v183);
          if ( v55 )
            ++*(_DWORD *)(v55 + 8);
          if ( v42 )
          {
            v56 = *((_DWORD *)v42 - 1);
            if ( v56 == *((_DWORD *)v42 - 2) )
            {
              v57 = (3 * v56 + 1) >> 1;
              v58 = 8 * v57 + 8;
              if ( 8 * v56 + 8 >= (unsigned int)v58 || v56 >= v57 )
              {
                v8 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(&v183, "Overflow encountered when expanding vector");
                *v8 = (char *)off_1C63128;
                sub_2333C0(v8 + 1, &v183);
                sub_233E40((__int64)&v183);
                __cxa_throw(v8, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v159 = (3 * v56 + 1) >> 1;
              v59 = (unsigned int *)sub_186B300(v42 - 1, v58);
              v60 = v59[1];
              v42 = (__int64 *)(v59 + 2);
              *v59 = v159;
              LODWORD(v59) = v60;
              v53 = &v42[v60];
              v52 = (_DWORD)v59 + 1;
            }
            else
            {
              v51 = v56;
              v52 = v56 + 1;
              v53 = &v42[v51];
            }
          }
          else
          {
            v61 = (_QWORD *)sub_186B270(0x18u);
            v42 = v61 + 1;
            v53 = v61 + 1;
            *v61 = 2;
            v52 = 1;
          }
          v49 = v171;
          ++v50;
          *v53 = v55;
          *((_DWORD *)v42 - 1) = v52;
        }
        while ( v50 < (unsigned int)v49 );
      }
      sub_FE1B20(v170 + 272, v49, v161, v42);
      v41 = v161;
      ++v166;
      v160 = v178;
      v178 = v161;
      if ( v166 >= *(_DWORD *)(a2 + 24) )
        break;
      v161 = v160;
    }
  }
  *(_QWORD *)v164 = sub_186B270(0x18u);
  *(_QWORD *)(*(_QWORD *)v164 + 8LL) = 0;
  **(_QWORD **)v164 = v158;
  if ( v160 )
  {
    v62 = nullptr;
    for ( m = 0; m < *((_DWORD *)v160 - 1); ++m )
    {
      v67 = v160[m];
      if ( v67 )
        ++*(_DWORD *)(v67 + 8);
      if ( v62 )
      {
        v68 = *((_DWORD *)v62 - 1);
        if ( v68 == *((_DWORD *)v62 - 2) )
        {
          v69 = (3 * v68 + 1) >> 1;
          v70 = 8 * v69 + 8;
          if ( 8 * v68 + 8 >= (unsigned int)v70 || v68 >= v69 )
          {
            v12 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(&v183, "Overflow encountered when expanding vector");
            *v12 = (char *)off_1C63128;
            sub_2333C0(v12 + 1, &v183);
            sub_233E40((__int64)&v183);
            __cxa_throw(v12, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v71 = (unsigned int *)sub_186B300(v62 - 1, v70);
          v62 = v71 + 2;
          *v71 = v69;
          *(_QWORD *)(*(_QWORD *)v164 + 8LL) = v71 + 2;
          LODWORD(v71) = v71[1];
          v66 = &v62[(unsigned int)v71];
          v65 = (_DWORD)v71 + 1;
        }
        else
        {
          v64 = v68;
          v65 = v68 + 1;
          v66 = &v62[v64];
        }
      }
      else
      {
        v153 = (_QWORD *)sub_186B270(0x18u);
        v62 = v153 + 1;
        *v153 = 2;
        v66 = v153 + 1;
        *(_QWORD *)(*(_QWORD *)v164 + 8LL) = v153 + 1;
        v65 = 1;
      }
      *v66 = v67;
      *((_DWORD *)v62 - 1) = v65;
    }
  }
  v72 = *(_DWORD *)(v170 + 720);
  *(_DWORD *)(*(_QWORD *)v164 + 16LL) = 0;
  if ( 3 * v72 < 4 * (*(_DWORD *)(v170 + 724) + *(_DWORD *)(v170 + 728)) )
  {
    v162 = 2 * v72;
    v167 = 32LL * v72;
    v143 = sub_186B270(v167);
    v75 = v167;
    v144 = v162;
    v73 = v143;
    v145 = (__m128 *)v143;
    v146 = (__m128 *)(v167 + v143);
    if ( v162 )
    {
      a7.m128_u64[0] = 0;
      if ( (((_BYTE)v146 - (_BYTE)v73) & 0x10) == 0
        || (v145 = (__m128 *)(v73 + 16), *(_OWORD *)v73 = 0, v146 != (__m128 *)(v73 + 16)) )
      {
        do
        {
          *v145 = 0;
          v145 += 2;
          v145[-1] = 0;
        }
        while ( v146 != v145 );
      }
    }
    v74 = v162 - 1;
    v76 = (unsigned __int64 *)v146;
    v147 = *(const __m128i **)(v170 + 712);
    v148 = (__m128i *)&v147[*(unsigned int *)(v170 + 720)];
    if ( v147 != v148 )
    {
      do
      {
        if ( v147->m128i_i64[0] > 1uLL )
        {
          v149 = 16LL * (*(_DWORD *)(v147->m128i_i64[0] + 12) & (unsigned int)v74);
          v150 = (__m128 *)(v73 + v149);
          if ( v167 == v149 )
          {
LABEL_174:
            if ( (__m128 *)v73 == v150 )
            {
LABEL_189:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v151 = v170;
            v152 = (__m128 *)v73;
            while ( v152->m128_u64[0] )
            {
              if ( v150 == ++v152 )
                goto LABEL_189;
            }
          }
          else
          {
            v151 = v170;
            v152 = (__m128 *)(v73 + v149);
            while ( v152->m128_u64[0] )
            {
              if ( v146 == ++v152 )
                goto LABEL_174;
            }
          }
          a7 = (__m128)_mm_loadu_si128(v147);
          v170 = v151;
          *v152 = a7;
        }
        ++v147;
      }
      while ( v148 != v147 );
      v148 = *(__m128i **)(v170 + 712);
    }
    if ( v148 )
    {
      v157 = v162;
      v163 = v167;
      v168 = v144 - 1;
      sub_186B220(v148);
      v144 = v157;
      v75 = v163;
      v74 = v168;
    }
    *(_QWORD *)(v170 + 712) = v73;
    *(_DWORD *)(v170 + 720) = v144;
    *(_DWORD *)(v170 + 728) = 0;
  }
  else
  {
    v73 = *(_QWORD *)(v170 + 712);
    v74 = v72 - 1;
    v75 = 16LL * v72;
    v76 = (unsigned __int64 *)(v73 + v75);
  }
  v77 = *(_DWORD *)(a2 + 12);
  v78 = 16LL * (v77 & (unsigned int)v74);
  v79 = v73 + v78;
  if ( v78 == v75 )
  {
    v81 = nullptr;
LABEL_92:
    if ( v79 == v73 )
    {
LABEL_100:
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    while ( 1 )
    {
      while ( 1 )
      {
        v83 = *(_QWORD *)v73;
        if ( *(_QWORD *)v73 <= 1u )
          break;
        if ( *(_DWORD *)(v83 + 12) == v77 && v83 == a2 )
        {
          *(_QWORD *)v73 = a2;
          *(_QWORD *)(v73 + 8) = *(_QWORD *)v164;
          goto LABEL_101;
        }
        v73 += 16;
        if ( v79 == v73 )
          goto LABEL_100;
      }
      if ( !v83 )
        break;
      v81 = (_QWORD *)v73;
      v73 += 16;
      if ( v79 == v73 )
        goto LABEL_100;
    }
    if ( v81 )
      --*(_DWORD *)(v170 + 728);
    else
      v81 = (_QWORD *)v73;
  }
  else
  {
    v80 = (unsigned __int64 *)(v73 + v78);
    v81 = nullptr;
    while ( 1 )
    {
      while ( 1 )
      {
        v82 = *v80;
        if ( *v80 <= 1 )
          break;
        if ( *(_DWORD *)(v82 + 12) == v77 && v82 == a2 )
        {
          *v80 = a2;
          v80[1] = *(_QWORD *)v164;
          goto LABEL_101;
        }
        v80 += 2;
        if ( v80 == v76 )
          goto LABEL_92;
      }
      if ( !v82 )
        break;
      v81 = v80;
      v80 += 2;
      if ( v80 == v76 )
        goto LABEL_92;
    }
    if ( v81 )
      --*(_DWORD *)(v170 + 728);
    else
      v81 = v80;
  }
  *v81 = a2;
  v81[1] = *(_QWORD *)v164;
  ++*(_DWORD *)(v170 + 724);
LABEL_101:
  v84 = *(_QWORD *)(v170 + 80);
  v85 = (_QWORD *)sub_180C100(v84 + 2144, 16);
  v86 = *(_QWORD **)(v84 + 2128);
  *v85 = off_1C558B8;
  v85[1] = *(_QWORD *)v164;
  if ( v86 )
  {
    v87 = *((_DWORD *)v86 - 1);
    if ( v87 == *((_DWORD *)v86 - 2) )
    {
      v139 = (3 * v87 + 1) >> 1;
      v140 = 8 * v139 + 8;
      if ( 8 * v87 + 8 >= v140 || v87 >= v139 )
      {
        v10 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(&v183, "Overflow encountered when expanding vector");
        *v10 = (char *)off_1C63128;
        sub_2333C0(v10 + 1, &v183);
        sub_233E40((__int64)&v183);
        __cxa_throw(v10, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v141 = (unsigned int *)sub_186B300(v86 - 1, v140);
      v142 = v141[1];
      v86 = v141 + 2;
      *(_QWORD *)(v84 + 2128) = v141 + 2;
      *v141 = v139;
      LODWORD(v141) = v142;
      v90 = &v86[v142];
      v89 = (_DWORD)v141 + 1;
    }
    else
    {
      v88 = v87;
      v89 = v87 + 1;
      v90 = &v86[v88];
    }
  }
  else
  {
    v155 = (_QWORD *)sub_186B270(0x18u);
    *v155 = 2;
    v89 = 1;
    v86 = v155 + 1;
    *(_QWORD *)(v84 + 2128) = v86;
    v90 = v86;
  }
  *v90 = v85;
  *((_DWORD *)v86 - 1) = v89;
  v91 = *(_QWORD *)(v170 + 80);
  v92 = (_QWORD *)sub_180C100(v91 + 2144, 24);
  v93 = *(_QWORD **)(v91 + 2128);
  v94 = v92;
  *v92 = off_1C558E0;
  v92[1] = v170 + 712;
  v92[2] = a2;
  if ( v93 )
  {
    v95 = *((_DWORD *)v93 - 1);
    if ( v95 == *((_DWORD *)v93 - 2) )
    {
      v135 = (3 * v95 + 1) >> 1;
      v136 = 8 * v135 + 8;
      if ( 8 * v95 + 8 >= v136 || v95 >= v135 )
      {
        v11 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(&v183, "Overflow encountered when expanding vector");
        *v11 = (char *)off_1C63128;
        sub_2333C0(v11 + 1, &v183);
        sub_233E40((__int64)&v183);
        __cxa_throw(v11, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v137 = (unsigned int *)sub_186B300(v93 - 1, v136);
      v138 = v137[1];
      v93 = v137 + 2;
      *(_QWORD *)(v91 + 2128) = v137 + 2;
      *v137 = v135;
      LODWORD(v137) = v138;
      v98 = &v93[v138];
      v97 = (_DWORD)v137 + 1;
    }
    else
    {
      v96 = v95;
      v97 = v95 + 1;
      v98 = &v93[v96];
    }
  }
  else
  {
    v156 = (_QWORD *)sub_186B270(0x18u);
    *v156 = 2;
    v97 = 1;
    v93 = v156 + 1;
    *(_QWORD *)(v91 + 2128) = v93;
    v98 = v93;
  }
  *v98 = v94;
  *((_DWORD *)v93 - 1) = v97;
LABEL_108:
  v99 = *(_QWORD *)(*(_QWORD *)v164 + 8LL);
  if ( v99 )
    v100 = *(_DWORD *)(v99 - 4);
  else
    v100 = 0;
  v101 = *(_DWORD *)(*(_QWORD *)v164 + 16LL);
  if ( v101 != v100 )
  {
    if ( i >= v101 )
    {
      while ( 1 )
      {
        v102 = sub_7E58C0(v170, *(_QWORD *)(v99 + 8LL * v101));
        *(_QWORD *)v174 = a2;
        LODWORD(v183) = v101;
        v103 = *(_QWORD *)(v170 + 136);
        LOBYTE(v184) = 0;
        v104 = sub_15DCAD0(v103, (int)v174, 0);
        sub_15D0DF0(&v183);
        v105 = sub_7E58C0(v170, v104);
        sub_7E5800(v170, v102, v105);
        if ( i < ++v101 )
          break;
        v99 = *(_QWORD *)(*(_QWORD *)v164 + 8LL);
      }
      v101 = *(_DWORD *)(*(_QWORD *)v164 + 16LL);
    }
    v106 = 24;
    v107 = *(_QWORD *)(v170 + 80);
    v108 = v107 + 2144;
    v109 = sub_180C100(v107 + 2144, 24);
    *(_QWORD *)v109 = &off_1C4C070;
    *(_QWORD *)(v109 + 8) = *(_QWORD *)v164 + 16LL;
    v110 = *(_QWORD **)(v107 + 2128);
    *(_DWORD *)(v109 + 16) = v101;
    if ( v110 )
    {
      v111 = *((_DWORD *)v110 - 1);
      if ( v111 == *((_DWORD *)v110 - 2) )
      {
        v129 = (3 * v111 + 1) >> 1;
        v130 = 8 * v129 + 8;
        if ( 8 * v111 + 8 >= v130 || v111 >= v129 )
        {
          v7 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(&v183, "Overflow encountered when expanding vector");
          *v7 = (char *)off_1C63128;
          sub_2333C0(v7 + 1, &v183);
          sub_233E40((__int64)&v183);
          __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v106 = v130;
        v108 = (__int64)(v110 - 1);
        v131 = (unsigned int *)sub_186B300(v110 - 1, v130);
        v132 = v131[1];
        v110 = v131 + 2;
        *(_QWORD *)(v107 + 2128) = v131 + 2;
        *v131 = v129;
        LODWORD(v131) = v132;
        v114 = &v110[v132];
        v113 = (_DWORD)v131 + 1;
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
      v108 = 24;
      v154 = (_QWORD *)sub_186B270(0x18u);
      *v154 = 2;
      v113 = 1;
      v110 = v154 + 1;
      *(_QWORD *)(v107 + 2128) = v110;
      v114 = v110;
    }
    *v114 = v109;
    *((_DWORD *)v110 - 1) = v113;
    if ( (unsigned int)sub_180B130(v108) )
    {
      if ( (unsigned __int8)sub_186A530(*(double *)a7.m128_u64) )
      {
        sub_186A4C0(*(double *)a7.m128_u64);
        v133 = sub_180B150(v108, v106);
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_1606360(&v183, a2, *(_QWORD *)(v170 + 72), 0, 0, 0);
        sub_160E8B0(v133, &v183);
        std::__ostream_insert<char,std::char_traits<char>>();
        std::ostream::_M_insert<unsigned long>();
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_18572D0(v185);
        sub_186A500(v185, "\n");
      }
      else
      {
        v134 = sub_180B150(v108, v106);
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_1606360(&v183, a2, *(_QWORD *)(v170 + 72), 0, 0, 0);
        sub_160E8B0(v134, &v183);
        std::__ostream_insert<char,std::char_traits<char>>();
        std::ostream::_M_insert<unsigned long>();
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_18572D0(v185);
      }
    }
    *(_DWORD *)(*(_QWORD *)v164 + 16LL) = i;
  }
  v115 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v181);
  sub_182CBA0(v115, v182);
  v116 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v179);
  sub_182CBA0(v116, v180);
  v117 = v178;
  if ( v178 )
  {
    v118 = (unsigned __int64)&v178[*((unsigned int *)v178 - 1)];
    if ( (unsigned __int64)v178 >= v118 )
      goto LABEL_129;
    v119 = v178;
    do
    {
      while ( 1 )
      {
        v120 = *v119;
        if ( *v119 )
        {
          v45 = (*(_DWORD *)(v120 + 8))-- == 1;
          if ( v45 )
            break;
        }
        if ( (unsigned __int64)++v119 >= v118 )
          goto LABEL_128;
      }
      sub_15D7BC0(v177, v120);
      ++v119;
    }
    while ( (unsigned __int64)v119 < v118 );
LABEL_128:
    v117 = v178;
    if ( v178 )
LABEL_129:
      sub_186B220(v117 - 1);
  }
  if ( v42 )
  {
    v121 = v42;
    v122 = (unsigned __int64)&v42[*((unsigned int *)v42 - 1)];
    if ( (unsigned __int64)v42 < v122 )
    {
      do
      {
        while ( 1 )
        {
          v123 = *v121;
          if ( *v121 )
          {
            v45 = (*(_DWORD *)(v123 + 8))-- == 1;
            if ( v45 )
              break;
          }
          if ( (unsigned __int64)++v121 >= v122 )
            goto LABEL_137;
        }
        sub_15D7BC0(v158, v123);
        ++v121;
      }
      while ( (unsigned __int64)v121 < v122 );
    }
LABEL_137:
    sub_186B220(v42 - 1);
  }
  if ( v160 )
  {
    v124 = v160;
    if ( v160 < &v160[*((unsigned int *)v160 - 1)] )
    {
      v125 = (unsigned __int64)&v160[*((unsigned int *)v160 - 1)];
      do
      {
        while ( 1 )
        {
          v126 = *v124;
          if ( *v124 )
          {
            v45 = (*(_DWORD *)(v126 + 8))-- == 1;
            if ( v45 )
              break;
          }
          if ( (unsigned __int64)++v124 >= v125 )
            goto LABEL_145;
        }
        ++v124;
        sub_15D7BC0(v158, v126);
      }
      while ( (unsigned __int64)v124 < v125 );
    }
LABEL_145:
    sub_186B220(v160 - 1);
  }
  return 0;
}

