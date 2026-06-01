__int64 __fastcall sub_18DE2E0(
        __int64 a1,
        __int64 a2,
        unsigned int *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        unsigned __int64 a9)
{
  __int64 v9; // rbp
  __int64 v10; // r12
  __int64 v11; // rbx
  unsigned int v12; // eax
  _BOOL8 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // edx
  __int64 v17; // rdx
  unsigned __int64 v18; // r15
  void *v19; // rdi
  unsigned int v20; // eax
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  unsigned int v26; // r13d
  char *v27; // r12
  char *v28; // rbx
  _BYTE *i; // rax
  __int64 v30; // rsi
  unsigned int v31; // ecx
  __int64 v32; // rdi
  __int64 *v33; // rbx
  __int64 *v34; // rbp
  __int64 v35; // rsi
  __int64 v36; // rdi
  void **v37; // r14
  void **v38; // r12
  _QWORD *v39; // rdi
  _QWORD *v40; // rbp
  _QWORD *v41; // rbx
  char *v42; // rdi
  void *v44; // rdi
  void **v45; // r13
  unsigned __int64 *v46; // rbp
  unsigned __int64 *v47; // r14
  void *v48; // rax
  void *v49; // rax
  __int64 v50; // rax
  unsigned __int64 v51; // rdi
  unsigned __int64 *v52; // rbp
  unsigned __int64 *v53; // r14
  unsigned __int64 v54; // r12
  unsigned __int64 v55; // rax
  _QWORD *v56; // rbx
  _QWORD *v57; // r13
  _QWORD *v58; // rdi
  void *v59; // rdi
  void **v60; // rbx
  char *v61; // r14
  __int64 v62; // rdx
  bool v63; // zf
  char *v64; // rbp
  __int64 v65; // rsi
  unsigned __int8 v66; // al
  __int64 v67; // rdx
  unsigned __int64 v68; // rdx
  __int64 v69; // rax
  void *v70; // rdi
  __int64 *v71; // rsi
  unsigned int v72; // edx
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // r9
  unsigned __int64 v76; // rax
  __int64 v77; // rbx
  unsigned __int64 *v78; // r14
  unsigned __int64 *v79; // rbx
  unsigned __int64 v80; // r12
  unsigned __int64 v81; // rax
  _QWORD *v82; // r15
  _QWORD *v83; // rbp
  _QWORD *v84; // rdi
  void *v85; // rdi
  void **v86; // rbp
  void **v87; // r15
  __int64 v88; // rdx
  __int64 v89; // rcx
  __int64 v90; // rbx
  __int64 v91; // r8
  __int64 v92; // r9
  void *v93; // rax
  _QWORD *v94; // rax
  __int64 v95; // rdx
  void *v96; // rdi
  _QWORD *v97; // rax
  __int64 v98; // rdx
  __int64 v99; // rcx
  __int64 v100; // rbp
  __int64 v101; // r8
  __int64 v102; // r9
  void *v103; // rax
  _QWORD *v104; // rax
  __int64 v105; // rdx
  __int64 v106; // rcx
  __int64 v107; // rbx
  __int64 v108; // r8
  __int64 v109; // r9
  void *v110; // rax
  _QWORD *v111; // rax
  void **v112; // rbp
  unsigned int v113; // ebp
  int v114; // edx
  __int64 v115; // rcx
  __int64 v116; // r8
  __int64 v117; // r9
  unsigned __int64 v118; // rax
  __int64 v119; // rsi
  unsigned __int8 v120; // dl
  void *v121; // rsi
  unsigned __int8 v122; // al
  unsigned int v123; // ecx
  __int64 v124; // rax
  __int64 v125; // rax
  char *v126; // r14
  char *v127; // rbp
  _BYTE *k; // rax
  __int64 v129; // rsi
  unsigned int v130; // ecx
  __int64 v131; // rdi
  __int64 *v132; // r13
  __int64 *v133; // rbp
  __int64 v134; // rsi
  __int64 v135; // rdi
  _QWORD *v136; // rdi
  _QWORD *v137; // r14
  _QWORD *v138; // rbp
  char *v139; // rdi
  __int64 v140; // rcx
  __int64 v141; // r8
  __int64 v142; // r9
  __int64 v143; // rdi
  unsigned __int64 v144; // rax
  _QWORD *v145; // rdi
  void **v148; // [rsp+8h] [rbp-2010h]
  unsigned __int64 v149; // [rsp+18h] [rbp-2000h]
  int v150; // [rsp+28h] [rbp-1FF0h]
  __int64 v151; // [rsp+28h] [rbp-1FF0h]
  __int64 v153; // [rsp+30h] [rbp-1FE8h]
  bool v154; // [rsp+30h] [rbp-1FE8h]
  unsigned int v155; // [rsp+38h] [rbp-1FE0h]
  int v156; // [rsp+3Ch] [rbp-1FDCh]
  __int64 v157; // [rsp+50h] [rbp-1FC8h]
  unsigned __int64 v158; // [rsp+50h] [rbp-1FC8h]
  __int64 v159; // [rsp+60h] [rbp-1FB8h] BYREF
  unsigned __int64 v160; // [rsp+6Ch] [rbp-1FACh] BYREF
  unsigned __int64 v161; // [rsp+74h] [rbp-1FA4h] BYREF
  char v162; // [rsp+7Ch] [rbp-1F9Ch]
  unsigned __int8 *v163; // [rsp+80h] [rbp-1F98h] BYREF
  unsigned __int64 v164; // [rsp+88h] [rbp-1F90h]
  void *s2[2]; // [rsp+A0h] [rbp-1F78h] BYREF
  _BYTE v166[16]; // [rsp+B0h] [rbp-1F68h] BYREF
  __int64 v167; // [rsp+C0h] [rbp-1F58h] BYREF
  size_t v168; // [rsp+C8h] [rbp-1F50h]
  void *v169; // [rsp+D0h] [rbp-1F48h] BYREF
  __int64 v170; // [rsp+D8h] [rbp-1F40h]
  _DWORD v171[7]; // [rsp+E0h] [rbp-1F38h] BYREF
  __int16 v172; // [rsp+FCh] [rbp-1F1Ch]
  void *v173[2]; // [rsp+100h] [rbp-1F18h]
  __int64 j; // [rsp+110h] [rbp-1F08h]
  void *s1; // [rsp+120h] [rbp-1EF8h] BYREF
  size_t n; // [rsp+128h] [rbp-1EF0h]
  void *v177[2]; // [rsp+130h] [rbp-1EE8h] BYREF
  unsigned __int8 *v178[2]; // [rsp+140h] [rbp-1ED8h] BYREF
  int v179; // [rsp+150h] [rbp-1EC8h]
  __int64 v180; // [rsp+154h] [rbp-1EC4h]
  __int16 v181; // [rsp+15Ch] [rbp-1EBCh]
  void *v182; // [rsp+160h] [rbp-1EB8h]
  void *v183; // [rsp+168h] [rbp-1EB0h]
  __int64 v184; // [rsp+170h] [rbp-1EA8h]
  char v185; // [rsp+198h] [rbp-1E80h]
  unsigned int v186; // [rsp+1A0h] [rbp-1E78h]
  char v187; // [rsp+1A4h] [rbp-1E74h]
  void *v188; // [rsp+BB0h] [rbp-1468h]
  __int64 v189; // [rsp+BB8h] [rbp-1460h]
  int v190; // [rsp+BC0h] [rbp-1458h]
  char v191; // [rsp+BC4h] [rbp-1454h]
  _BYTE v192[128]; // [rsp+BC8h] [rbp-1450h] BYREF
  __int64 v193; // [rsp+C48h] [rbp-13D0h]
  int v194; // [rsp+C50h] [rbp-13C8h]
  __int64 v195; // [rsp+C58h] [rbp-13C0h]
  __int64 v196; // [rsp+C60h] [rbp-13B8h]
  void *ptr; // [rsp+C68h] [rbp-13B0h]
  __int64 v198; // [rsp+C70h] [rbp-13A8h]
  _BYTE v199[32]; // [rsp+C78h] [rbp-13A0h] BYREF
  __int64 *v200; // [rsp+C98h] [rbp-1380h]
  __int64 v201; // [rsp+CA0h] [rbp-1378h]
  __int64 v202; // [rsp+CA8h] [rbp-1370h] BYREF
  __int64 v203; // [rsp+CB0h] [rbp-1368h]
  int v204; // [rsp+CB8h] [rbp-1360h]
  int v205; // [rsp+CBCh] [rbp-135Ch]
  __int64 v206; // [rsp+CC0h] [rbp-1358h]
  char v207; // [rsp+CC8h] [rbp-1350h]
  int v208; // [rsp+CCCh] [rbp-134Ch]
  int v209; // [rsp+1FD0h] [rbp-48h]

  v10 = a1;
  v11 = a4;
  v159 = *(_QWORD *)(a4 + 120);
  v150 = a4 + 120;
  v12 = sub_B85A10(a4 + 120);
  if ( !v12 )
    v12 = *(_DWORD *)(v11 + 128);
  v160 = __PAIR64__(v12, *(_DWORD *)(v11 + 128));
  v16 = v159 & 7;
  if ( v16 == 7 )
  {
    v18 = a9;
    v13 = *(_DWORD *)(v159 & 0xFFFFFFFFFFFFFFF8LL) != 1;
    v17 = 2 * v13 + 5349;
    v156 = 2 * v13 + 5349;
    v155 = 2 * v13 + 5348;
    if ( a9 )
      goto LABEL_5;
  }
  else
  {
    v17 = (unsigned int)(v16 - 5);
    v18 = a9;
    v156 = (unsigned int)v17 < 2 ? 5349 : 5351;
    v155 = (unsigned int)v17 < 2 ? 5348 : 5350;
    if ( a9 )
      goto LABEL_5;
  }
  v17 = *a3;
  if ( (!(_DWORD)v17 || !a3[1]) && !*((_QWORD *)a3 + 1) )
  {
    v18 = *(_QWORD *)(a1 + 544);
    if ( v18 )
    {
LABEL_5:
      if ( !a6 )
      {
        while ( 1 )
        {
          if ( (*(_BYTE *)(v18 + 8) & 0x7Fu) - 59 <= 2 )
          {
            sub_1A48440(v10, v11, v18, 0);
            if ( *(_DWORD *)(v11 + 16) )
              goto LABEL_14;
            v44 = *(void **)(v11 + 88);
            *(_DWORD *)v11 = 0;
            if ( v44 )
              sub_1A39780(v44);
            *(_BYTE *)(v11 + 166) = 0;
            *(_OWORD *)(v11 + 88) = 0;
          }
          v18 = sub_B8ED10(v18);
          if ( !v18 )
            goto LABEL_51;
        }
      }
      do
      {
        if ( (*(_BYTE *)(v18 + 8) & 0x7Fu) - 59 <= 2 )
        {
          v9 &= 0xFFFFFF00FFFFFFFFLL;
          sub_A7A9D0(*(_QWORD *)(v10 + 248), v18 - 64, v17, v13, v14, v15);
          v20 = sub_1CE41F0(v10, v9, 0, 1);
          if ( (_BYTE)v20 )
            return v20;
          if ( *(_DWORD *)(v11 + 16) )
          {
LABEL_14:
            v21 = *(_DWORD *)(v11 + 128);
            *(_WORD *)(v11 + 163) = 0;
            v189 = 16;
            s1 = v177;
            n = 0x1000000000LL;
            v188 = v192;
            ptr = v199;
            v198 = 0x400000000LL;
            v200 = &v202;
            v190 = 0;
            v191 = 1;
            v193 = 0;
            v194 = 0;
            v195 = 0;
            v196 = 0;
            v201 = 0;
            v202 = 0;
            v203 = 1;
            v204 = v21;
            v205 = 0;
            v206 = 0;
            v207 = 0;
            v208 = 0;
            v209 = 0;
            sub_1BF7750(v10, v11, a6, a7, a8, &s1);
            if ( !(unsigned int)sub_1BF27B0(&s1, v10, *(unsigned int *)(v11 + 128), s2) )
            {
              v96 = *(void **)(v11 + 88);
              *(_DWORD *)v11 = 0;
              *(_DWORD *)(v11 + 16) = 0;
              if ( v96 )
                sub_1A39780(v96);
              v97 = s2[0];
              *(_BYTE *)(v11 + 166) = 0;
              *(_OWORD *)(v11 + 88) = 0;
              v167 = v97[1] & 0xFFFFFFFFFFFFFFFBLL;
              sub_1743080(v11 + 8, v167);
              *(_DWORD *)v11 = 2;
              sub_1A43500(v11);
            }
            v26 = sub_18CDC20(v10, v11, v22, v23, v24, v25);
            sub_1BD27A0(&s1);
            v27 = (char *)ptr;
            v28 = (char *)ptr + 8 * (unsigned int)v198;
            if ( ptr != v28 )
            {
              for ( i = ptr; ; i = ptr )
              {
                v30 = 0x40000000000LL;
                v31 = (unsigned int)((v27 - i) >> 3) >> 7;
                if ( v31 <= 0x1D )
                  v30 = 4096LL << v31;
                v32 = *(_QWORD *)v27;
                v27 += 8;
                operator delete(v32, v30, 16);
                if ( v28 == v27 )
                  break;
              }
            }
            v33 = v200;
            v34 = &v200[2 * (unsigned int)v201];
            if ( v200 != v34 )
            {
              do
              {
                v35 = v33[1];
                v36 = *v33;
                v33 += 2;
                operator delete(v36, v35, 16);
              }
              while ( v34 != v33 );
              v34 = v200;
            }
            if ( v34 != &v202 )
              free(v34);
            if ( ptr != v199 )
              free(ptr);
            if ( !v191 )
              free(v188);
            v37 = (void **)s1;
            v38 = (void **)((char *)s1 + 168 * (unsigned int)n);
            if ( s1 != v38 )
            {
              do
              {
                while ( 1 )
                {
                  v38 -= 21;
                  v39 = v38[8];
                  v40 = v38[9];
                  v41 = v39;
                  if ( v40 != v39 )
                  {
                    do
                    {
                      while ( 1 )
                      {
                        v42 = (char *)v41[3];
                        if ( v42 == (char *)(v41 + 5) )
                          break;
                        operator delete(v42);
                        v41 += 8;
                        if ( v40 == v41 )
                          goto LABEL_34;
                      }
                      v41 += 8;
                    }
                    while ( v40 != v41 );
LABEL_34:
                    v39 = v38[8];
                  }
                  if ( !v39 )
                    break;
                  operator delete(v39);
                  if ( v37 == v38 )
                    goto LABEL_37;
                }
              }
              while ( v37 != v38 );
LABEL_37:
              v38 = (void **)s1;
            }
            if ( v38 != v177 )
              free(v38);
            return v26;
          }
          v19 = *(void **)(v11 + 88);
          *(_DWORD *)v11 = 0;
          if ( v19 )
            sub_1A39780(v19);
          *(_BYTE *)(v11 + 166) = 0;
          *(_OWORD *)(v11 + 88) = 0;
        }
        v18 = sub_B8ED10(v18);
      }
      while ( v18 );
    }
  }
LABEL_51:
  v167 = 0;
  v169 = v171;
  memset(&v171[2], 0, 20);
  v168 = 0;
  v170 = 0x100000000LL;
  v172 = 0;
  *(_OWORD *)v173 = 0;
  j = 0;
  if ( !a2 )
    goto LABEL_112;
  sub_1A6BD60((unsigned int)&s1, v10, v150, *(_DWORD *)(v11 + 152), a2, (_DWORD)a3, a5, 1, a9, 0, 0, 1);
  v167 = (__int64)s1;
  v168 = n;
  sub_AEA1F0((char ***)&v169, (char ***)v177);
  v45 = (void **)v173[0];
  v46 = (unsigned __int64 *)v173[1];
  *(unsigned __int8 **)&v171[2] = v178[1];
  v47 = (unsigned __int64 *)v173[0];
  v171[4] = v179;
  *(_QWORD *)&v171[5] = v180;
  v172 = v181;
  v48 = v182;
  v182 = nullptr;
  v173[0] = v48;
  v49 = v183;
  v183 = nullptr;
  v173[1] = v49;
  v50 = v184;
  v184 = 0;
  for ( j = v50; v46 != v47; v47 += 3 )
  {
    if ( *v47 )
    {
      v51 = v47[1];
      if ( v51 )
        sub_1580C40(v51, *v47);
    }
  }
  if ( v45 )
    operator delete(v45);
  v52 = (unsigned __int64 *)v182;
  v151 = v167;
  if ( v183 != v182 )
  {
    v153 = v10;
    v53 = (unsigned __int64 *)v183;
    v157 = v11;
    do
    {
      v54 = *v52;
      if ( *v52 )
      {
        v55 = v52[1];
        if ( v55 )
        {
          if ( v54 < v55 || v54 > v55 + 14848 )
          {
            v56 = *(_QWORD **)(v54 + 528);
            v57 = &v56[8 * (unsigned __int64)*(unsigned int *)(v54 + 536)];
            if ( v56 != v57 )
            {
              do
              {
                while ( 1 )
                {
                  v57 -= 8;
                  v58 = (_QWORD *)v57[3];
                  if ( v58 == v57 + 5 )
                    break;
                  operator delete(v58);
                  if ( v56 == v57 )
                    goto LABEL_67;
                }
              }
              while ( v56 != v57 );
LABEL_67:
              v57 = *(_QWORD **)(v54 + 528);
            }
            if ( v57 != (_QWORD *)(v54 + 544) )
              free(v57);
            v59 = *(void **)(v54 + 416);
            if ( v59 != (void *)(v54 + 432) )
              free(v59);
            v60 = (void **)(v54 + 384);
            v45 = (void **)(v54 + 64);
            do
            {
              while ( *v60 != v60 + 2 )
              {
                operator delete(*v60);
                v60 -= 4;
                if ( v60 == v45 )
                  goto LABEL_75;
              }
              v60 -= 4;
            }
            while ( v45 != v60 );
LABEL_75:
            operator delete((void *)v54, 0x3A0u);
          }
          else
          {
            v67 = *(unsigned int *)(v55 + 14976);
            *(_DWORD *)(v55 + 14976) = v67 + 1;
            *(_QWORD *)(v55 + 8 * v67 + 14848) = v54;
          }
        }
      }
      v52 += 3;
    }
    while ( v53 != v52 );
    v10 = v153;
    v11 = v157;
    v52 = (unsigned __int64 *)v182;
  }
  if ( v52 )
    operator delete(v52);
  if ( v177[0] != v178 )
    free(v177[0]);
  if ( !v151 )
    goto LABEL_112;
  sub_1A39F10(s2, &v167, *(_QWORD *)(v10 + 232));
  v154 = v172;
  if ( (_BYTE)v172 )
  {
    sub_B86A00((__int64)&s1, &v159);
    v112 = (void **)s1;
    if ( (void *)n == s2[1] )
    {
      if ( n )
        v154 = memcmp(s1, s2[0], n) == 0;
    }
    else
    {
      v154 = 0;
    }
    if ( v112 != v177 )
      operator delete(v112);
  }
  *(_QWORD *)(v11 + 120) = v167;
  if ( (_DWORD)v170 )
  {
    v61 = (char *)v169;
    v158 = *(_QWORD *)v169;
    if ( *(_QWORD *)v169 )
    {
      if ( (unsigned int)v170 <= 1 )
      {
        v149 = *(_QWORD *)v169;
      }
      else
      {
        v62 = *(unsigned int *)(v11 + 128);
        v193 = 0;
        s1 = v177;
        n = 0x1000000000LL;
        v188 = v192;
        ptr = v199;
        v198 = 0x400000000LL;
        v194 = 0;
        v195 = 0;
        v196 = 0;
        v200 = &v202;
        v202 = 0;
        v203 = 1;
        v204 = v62;
        v205 = 0;
        v206 = 0;
        v207 = 0;
        v208 = 0;
        v209 = 0;
        v63 = *(_QWORD *)v169 == 0;
        v189 = 16;
        v190 = 0;
        v191 = 1;
        v201 = 0;
        if ( !v63 )
        {
          v64 = (char *)v169 + 8 * (unsigned int)v170;
          do
          {
            v65 = *(_QWORD *)v61;
            v66 = *(_BYTE *)(*(_QWORD *)v61 + 28LL) & 0x7F;
            if ( v66 == 71 )
            {
              v163 = (unsigned __int8 *)(v65 | 3);
              sub_1BF2330(v10, v65, v65 | 3, a6, a7, a8, (__int64)&s1, 0, 0, 1, 0, 0, 0);
            }
            else if ( (unsigned int)v66 - 34 <= 5 && (!a6 || !*(_DWORD *)(a6 + 8)) )
            {
              v163 = (unsigned __int8 *)(v65 | 3);
              sub_1BF10B0(v10, v65, v65 | 3, a7, a8, (unsigned int)&s1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0);
            }
            v61 += 8;
          }
          while ( v64 != v61 );
          v62 = *(unsigned int *)(v11 + 128);
        }
        if ( (unsigned int)sub_1BF27B0(&s1, v10, v62, &v163) )
        {
          LODWORD(v170) = 0;
          sub_1A39E70(&v167, v158);
          v149 = v158;
        }
        else
        {
          v125 = *((_QWORD *)v163 + 1);
          LODWORD(v170) = 0;
          v149 = v125 & 0xFFFFFFFFFFFFFFF8LL;
          v158 = v125 & 0xFFFFFFFFFFFFFFF8LL;
          sub_1A39E70(&v167, v125 & 0xFFFFFFFFFFFFFFF8LL);
        }
        sub_1BD27A0(&s1);
        v126 = (char *)ptr;
        v127 = (char *)ptr + 8 * (unsigned int)v198;
        if ( ptr != v127 )
        {
          for ( k = ptr; ; k = ptr )
          {
            v129 = 0x40000000000LL;
            v130 = (unsigned int)((v126 - k) >> 3) >> 7;
            if ( v130 <= 0x1D )
              v129 = 4096LL << v130;
            v131 = *(_QWORD *)v126;
            v126 += 8;
            operator delete(v131, v129, 16);
            if ( v127 == v126 )
              break;
          }
        }
        v132 = v200;
        v133 = &v200[2 * (unsigned int)v201];
        if ( v200 != v133 )
        {
          do
          {
            v134 = v132[1];
            v135 = *v132;
            v132 += 2;
            operator delete(v135, v134, 16);
          }
          while ( v133 != v132 );
          v133 = v200;
        }
        if ( v133 != &v202 )
          free(v133);
        if ( ptr != v199 )
          free(ptr);
        if ( !v191 )
          free(v188);
        v148 = (void **)s1;
        v45 = (void **)((char *)s1 + 168 * (unsigned int)n);
        if ( s1 != v45 )
        {
          do
          {
            while ( 1 )
            {
              v45 -= 21;
              v136 = v45[8];
              v137 = v45[9];
              v138 = v136;
              if ( v137 != v136 )
              {
                do
                {
                  while ( 1 )
                  {
                    v139 = (char *)v138[3];
                    if ( v139 == (char *)(v138 + 5) )
                      break;
                    operator delete(v139);
                    v138 += 8;
                    if ( v138 == v137 )
                      goto LABEL_222;
                  }
                  v138 += 8;
                }
                while ( v137 != v138 );
LABEL_222:
                v136 = v45[8];
              }
              if ( !v136 )
                break;
              operator delete(v136);
              if ( v148 == v45 )
                goto LABEL_225;
            }
          }
          while ( v148 != v45 );
LABEL_225:
          v45 = (void **)s1;
        }
        if ( v45 != v177 )
          free(v45);
      }
      v121 = (void *)(v149 | (*(_BYTE *)(v158 + 29) >> 5) & 3);
      s1 = v121;
      sub_1743080(v11 + 8, (__int64)v121);
      *(_DWORD *)v11 = 2;
      if ( (*(_BYTE *)(*(_QWORD *)(v10 + 232) + 1LL) & 8) != 0 && sub_17A0250(v158) )
      {
        if ( !v168 )
          goto LABEL_242;
        v143 = 0;
        if ( ((*(__int64 *)(v168 + 8) >> 1) & 3) == 2 )
          v143 = *(_QWORD *)(v168 + 16);
        v144 = (unsigned __int64)sub_F63270(v143, (__int64)v121, v168, v140, v141, v142);
        if ( !v144 )
        {
LABEL_242:
          v145 = (_QWORD *)(*(_QWORD *)(v158 + 16) & 0xFFFFFFFFFFFFFFF8LL);
          if ( (*(_QWORD *)(v158 + 16) & 4) != 0 )
            v145 = (_QWORD *)*v145;
          v144 = sub_B8EAA0((__int64)v145);
          if ( v144 )
            v144 -= 64LL;
        }
        *(_QWORD *)(v11 + 96) = v144;
      }
      v122 = *(_BYTE *)(sub_16C47B0(v158) + 28) & 0x7F;
      v123 = v122 - 26;
      LOBYTE(v45) = v123 <= 0x1A;
      LOBYTE(v123) = v122 == 71;
      LODWORD(v45) = v123 | (unsigned int)v45;
      if ( (unsigned int)v122 - 58 <= 9 )
        goto LABEL_191;
      if ( (unsigned int)v122 - 68 > 6 || (v68 = (v122 + 67) & 0x7F, (unsigned __int8)v68 > 0xBu) )
      {
        if ( v122 == 20 )
          goto LABEL_191;
      }
      else
      {
        v69 = 2689;
        if ( _bittest64(&v69, v68) )
          goto LABEL_191;
      }
      if ( !(_BYTE)v45 )
      {
        if ( s2[0] != v166 )
          operator delete(s2[0]);
LABEL_112:
        v70 = *(void **)(v11 + 88);
        *(_DWORD *)v11 = 0;
        *(_DWORD *)(v11 + 16) = 0;
        if ( v70 )
          sub_1A39780(v70);
        v71 = (__int64 *)(v10 + 8);
        *(_BYTE *)(v11 + 166) = 0;
        *(_OWORD *)(v11 + 88) = 0;
        v72 = *(_DWORD *)(v11 + 128);
        if ( *a3 && a3[1] || *((_QWORD *)a3 + 1) )
        {
          sub_168B9F0((__int64)&s1, v71, v72, 0x10B2u, 0);
          if ( v185 )
          {
            sub_AE9DF0(v178, v159, 9u);
          }
          else if ( v187 )
          {
            v107 = sub_168B9E0(&s1);
            v110 = v177[0];
            if ( v177[0] )
              v110 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v177[0] + 32LL))(v177[0]);
            s2[0] = v110;
            v111 = sub_1587BC0(v107, (__int64 *)s2, v105, v106, v108, v109);
            sub_AE9DF0((unsigned __int8 **)(*v111 + 32LL * v186 + 8), v159, 9u);
          }
          v76 = sub_16A2930(v10, (__int64)a3, 0, v73, v74, v75);
          v77 = v76;
          if ( v185 )
          {
            sub_AE9DF0(v178, v76, 0xCu);
          }
          else if ( v187 )
          {
            v100 = sub_168B9E0(&s1);
            v103 = v177[0];
            if ( v177[0] )
              v103 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v177[0] + 32LL))(v177[0]);
            s2[0] = v103;
            v104 = sub_1587BC0(v100, (__int64 *)s2, v98, v99, v101, v102);
            sub_AE9DF0((unsigned __int8 **)(*v104 + 32LL * v186 + 8), v77, 0xCu);
          }
        }
        else
        {
          sub_168B9F0((__int64)&s1, v71, v72, v155, 0);
          if ( v185 )
          {
            sub_AE9DF0(v178, v159, 9u);
          }
          else if ( v187 )
          {
            v90 = sub_168B9E0(&s1);
            v93 = v177[0];
            if ( v177[0] )
              v93 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v177[0] + 32LL))(v177[0]);
            s2[0] = v93;
            v94 = sub_1587BC0(v90, (__int64 *)s2, v88, v89, v91, v92);
            sub_AE9DF0((unsigned __int8 **)(*v94 + 32LL * v186 + 8), v159, 9u);
          }
        }
        v26 = 1;
        sub_15884C0((__int64)&s1, (__int64 *)&v160);
        sub_15F7200(&s1);
        goto LABEL_121;
      }
LABEL_191:
      v113 = (unsigned __int8)v45;
      v26 = (unsigned int)v45 ^ 1;
      if ( (_DWORD)v170 && *(_QWORD *)v169 && (v124 = sub_16C47B0(*(_QWORD *)v169)) != 0 )
      {
        v114 = 6029;
        if ( (*(_BYTE *)(v124 + 28) & 0x7F) != 0x2D )
          v114 = 6283;
      }
      else
      {
        v114 = 6283;
      }
      goto LABEL_175;
    }
  }
  v26 = 1;
  v113 = 0;
  v114 = 6283;
LABEL_175:
  if ( *a3 && a3[1] || *((_QWORD *)a3 + 1) )
  {
    sub_168B9B0((__int64)&s1, v10 + 8, v114);
    sub_168B9B0((__int64)&v163, v10 + 8, 4276);
    sub_AE9DF0(&v163, v159, 9u);
    v118 = sub_16A2930(v10, (__int64)a3, 0, v115, v116, v117);
    sub_AE9DF0(&v163, v118, 0xCu);
    v119 = v154;
    v120 = 2;
  }
  else
  {
    sub_168B9B0((__int64)&s1, v10 + 8, v114);
    sub_168B9B0((__int64)&v163, v10 + 8, v156);
    v120 = 9;
    v119 = v159;
  }
  sub_AE9DF0(&v163, v119, v120);
  v162 = 1;
  v161 = v160;
  sub_AEC610((__int64 *)&v163, (__int64 *)&v161);
  sub_1A5FC70(v10, &v167, &v163, &s1, v113);
  if ( v163 && v164 )
    sub_1580C40(v164, (unsigned __int64)v163);
  if ( s1 && n )
    sub_1580C40(n, (unsigned __int64)s1);
  if ( s2[0] != v166 )
    operator delete(s2[0]);
LABEL_121:
  v78 = (unsigned __int64 *)v173[1];
  v79 = (unsigned __int64 *)v173[0];
  if ( v173[1] != v173[0] )
  {
    do
    {
      v80 = *v79;
      if ( *v79 )
      {
        v81 = v79[1];
        if ( v81 )
        {
          if ( v80 < v81 || v80 > v81 + 14848 )
          {
            v82 = *(_QWORD **)(v80 + 528);
            v83 = &v82[8 * (unsigned __int64)*(unsigned int *)(v80 + 536)];
            if ( v82 != v83 )
            {
              do
              {
                while ( 1 )
                {
                  v83 -= 8;
                  v84 = (_QWORD *)v83[3];
                  if ( v84 == v83 + 5 )
                    break;
                  operator delete(v84);
                  if ( v82 == v83 )
                    goto LABEL_128;
                }
              }
              while ( v82 != v83 );
LABEL_128:
              v83 = *(_QWORD **)(v80 + 528);
            }
            if ( v83 != (_QWORD *)(v80 + 544) )
              free(v83);
            v85 = *(void **)(v80 + 416);
            if ( v85 != (void *)(v80 + 432) )
              free(v85);
            v86 = (void **)(v80 + 384);
            v87 = (void **)(v80 + 64);
            do
            {
              while ( *v86 != v86 + 2 )
              {
                operator delete(*v86);
                v86 -= 4;
                if ( v87 == v86 )
                  goto LABEL_136;
              }
              v86 -= 4;
            }
            while ( v87 != v86 );
LABEL_136:
            operator delete((void *)v80, 0x3A0u);
          }
          else
          {
            v95 = *(unsigned int *)(v81 + 14976);
            *(_DWORD *)(v81 + 14976) = v95 + 1;
            *(_QWORD *)(v81 + 8 * v95 + 14848) = v80;
          }
        }
      }
      v79 += 3;
    }
    while ( v78 != v79 );
    v79 = (unsigned __int64 *)v173[0];
  }
  if ( v79 )
    operator delete(v79);
  if ( v169 != v171 )
    free(v169);
  return v26;
}
