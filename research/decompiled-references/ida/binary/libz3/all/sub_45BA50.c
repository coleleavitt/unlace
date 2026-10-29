__int64 __fastcall sub_45BA50(__int64 *a1, int *a2)
{
  char **exception; // rbp
  char **v3; // rbp
  char **v4; // rbp
  char **v5; // rbp
  int *v7; // rbp
  _QWORD *v8; // rdi
  __int64 result; // rax
  unsigned int v10; // ebx
  unsigned int v11; // ebx
  _DWORD *v12; // rax
  _QWORD *v13; // rax
  unsigned int v14; // ebx
  unsigned int v15; // edx
  __int64 *v16; // r11
  __int64 v17; // rbx
  int v18; // ecx
  size_t v19; // r14
  __int64 *v20; // r12
  int v21; // esi
  __int64 v22; // rcx
  __int64 v23; // rdi
  __int64 *v24; // rax
  _QWORD *v25; // rcx
  int *v26; // rdx
  int *v27; // rax
  __int64 v28; // r13
  __int64 v29; // r12
  bool v30; // zf
  unsigned int v31; // eax
  int *v32; // r14
  int *v33; // r12
  char *v34; // r13
  __int64 v35; // rcx
  _DWORD *v36; // rdx
  __int64 v37; // rbx
  _QWORD *v38; // rdi
  unsigned __int64 v39; // rcx
  __int64 v40; // r9
  unsigned __int64 v41; // rcx
  __int64 v42; // r9
  _BYTE *v43; // rdi
  char *v44; // rcx
  char *v45; // rax
  __int64 v46; // rdx
  __int64 v47; // r14
  __int64 v48; // r12
  __int64 v49; // r10
  _DWORD *v50; // rax
  __int64 v51; // rax
  int v52; // edi
  char *v53; // rcx
  unsigned int v54; // edx
  char *v55; // rsi
  __int64 v56; // rdx
  char *v57; // r9
  char *v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rax
  __int64 *v61; // r9
  __int64 *v62; // r13
  __int64 *v63; // r14
  __int64 v64; // r12
  char v65; // al
  int v66; // eax
  char *v67; // rcx
  _QWORD *v68; // rcx
  unsigned int v69; // eax
  __int64 v70; // rsi
  int v71; // eax
  _QWORD *v72; // rsi
  unsigned int v73; // ebx
  _QWORD *v74; // rax
  unsigned int v75; // ebx
  size_t v76; // rsi
  unsigned int *v77; // rax
  __int64 v78; // rsi
  __int64 v79; // rbx
  char *v80; // rdi
  __int64 v81; // rsi
  __int64 v82; // r11
  _QWORD *v83; // rax
  __int64 v84; // rsi
  __int64 v85; // r11
  _QWORD *v86; // rax
  unsigned int v87; // edx
  __int64 v88; // rcx
  int v89; // edx
  _QWORD *v90; // rcx
  __int64 v91; // rdx
  unsigned int v92; // ebx
  int v93; // r12d
  __int64 v94; // rbx
  unsigned int v95; // r10d
  __int64 v96; // r9
  __int64 *v97; // r13
  int v98; // ecx
  __int64 v99; // r10
  __int64 v100; // rsi
  __int64 *v101; // rax
  _QWORD *v102; // rdi
  int *v103; // rdx
  int *v104; // rax
  __int64 v105; // rax
  int v106; // r9d
  __m128i *v107; // rdx
  __m128i *v108; // rax
  const __m128i *v109; // r13
  __m128i *v110; // r10
  __int64 v111; // rdx
  __m128i *v112; // rsi
  __m128i *v113; // rdx
  __m128i v114; // xmm0
  _QWORD *v115; // rax
  _QWORD *v116; // rbx
  _QWORD *v117; // rax
  unsigned int v118; // edx
  __int64 v119; // rcx
  int v120; // edx
  _QWORD *v121; // rcx
  __int64 v122; // rdx
  unsigned int v123; // edi
  __int64 *v124; // r14
  size_t v125; // r12
  __m128i *v126; // r13
  int v127; // edi
  __int64 v128; // rdx
  __int64 *v129; // r10
  __m128i *v130; // rdx
  __m128i *v131; // rsi
  int *v132; // rax
  unsigned int v133; // ebx
  unsigned int v134; // ecx
  unsigned int *v135; // rdx
  __int64 v136; // rcx
  int v137; // r14d
  __int64 v138; // rax
  __m128i *v139; // rdx
  __m128i *v140; // rax
  const __m128i *v141; // r14
  __m128i *v142; // rcx
  __int64 v143; // rdx
  __m128i *v144; // rsi
  __m128i *v145; // rdx
  __m128i v146; // xmm0
  int *v147; // rax
  _QWORD *v148; // rax
  unsigned int v149; // r12d
  unsigned int v150; // ecx
  unsigned int *v151; // rdx
  __int64 v152; // rcx
  _QWORD *v153; // rax
  unsigned int v154; // edx
  __int64 v155; // rcx
  int v156; // edx
  int **v157; // rcx
  unsigned int v158; // ebx
  unsigned int v159; // ebx
  __m128i *v160; // rax
  __m128i *v161; // rdx
  __m128i *v162; // r11
  const __m128i *v163; // r10
  __m128i *v164; // rcx
  __int64 v165; // rdx
  __m128i *v166; // rsi
  __m128i *v167; // rdx
  unsigned int v168; // r12d
  unsigned int v169; // ecx
  unsigned int *v170; // rdx
  __int64 v171; // rcx
  _QWORD *v172; // rax
  _QWORD *v173; // rax
  unsigned int v174; // [rsp+8h] [rbp-1C0h]
  _QWORD *v175; // [rsp+8h] [rbp-1C0h]
  int v176; // [rsp+8h] [rbp-1C0h]
  unsigned int v177; // [rsp+8h] [rbp-1C0h]
  _DWORD *v178; // [rsp+10h] [rbp-1B8h]
  int *v179; // [rsp+10h] [rbp-1B8h]
  int v180; // [rsp+10h] [rbp-1B8h]
  int *v181; // [rsp+20h] [rbp-1A8h]
  __int64 v182; // [rsp+20h] [rbp-1A8h]
  char *v183; // [rsp+30h] [rbp-198h]
  __int64 v184[4]; // [rsp+50h] [rbp-178h] BYREF
  void *v185; // [rsp+70h] [rbp-158h]
  __int64 v186; // [rsp+78h] [rbp-150h]
  _QWORD v187[16]; // [rsp+80h] [rbp-148h] BYREF
  void *v188; // [rsp+100h] [rbp-C8h] BYREF
  __int64 v189; // [rsp+108h] [rbp-C0h]
  _BYTE v190[184]; // [rsp+110h] [rbp-B8h] BYREF

  v7 = a2;
  v8 = v187;
  v187[0] = a2;
  v186 = 0x1000000001LL;
  v185 = v187;
  v174 = 1;
  while ( 2 )
  {
    if ( (unsigned int)*v7 < *((_DWORD *)a1 + 42)
      && (*(_DWORD *)(a1[22] + 4LL * ((unsigned int)*v7 >> 5)) & (1 << *v7)) != 0 )
    {
      result = --v174;
      LODWORD(v186) = v174;
      goto LABEL_4;
    }
    v10 = v7[6];
    if ( v10 )
    {
      v28 = v10 - 1;
      v29 = *a1;
      v30 = *(_QWORD *)(v29 + 848) == sub_15D1F10(*(_QWORD *)&v7[2 * v28 + 8]);
      v31 = v186;
      if ( v30 )
      {
        v28 = v10;
      }
      else if ( v10 == 1 )
      {
LABEL_51:
        if ( v174 < v31 )
        {
          v174 = v31;
          v8 = v185;
          goto LABEL_5;
        }
        v174 = v31;
        goto LABEL_8;
      }
      v32 = v7;
      v33 = &v7[2 * v28];
      do
      {
        v36 = *((_DWORD **)v32 + 4);
        if ( *v36 >= *((_DWORD *)a1 + 42) || (*(_DWORD *)(a1[22] + 4LL * (*v36 >> 5)) & (1 << *v36)) == 0 )
        {
          if ( v31 < HIDWORD(v186) )
          {
            v34 = (char *)v185;
          }
          else
          {
            v178 = *((_DWORD **)v32 + 4);
            v37 = (unsigned int)(2 * HIDWORD(v186));
            v34 = (char *)sub_186B270(8 * v37);
            v31 = v186;
            v38 = v185;
            v36 = v178;
            if ( (_DWORD)v186 )
            {
              if ( (unsigned int)(v186 - 1) <= 2 || v34 == (char *)v185 + 8 )
              {
                v41 = 0;
                v42 = 8LL * (unsigned int)v186;
                do
                {
                  *(_QWORD *)&v34[v41] = v38[v41 / 8];
                  v41 += 8LL;
                }
                while ( v42 != v41 );
              }
              else
              {
                v39 = 0;
                v40 = 16LL * ((unsigned int)v186 >> 1);
                do
                {
                  *(__m128i *)&v34[v39] = _mm_loadu_si128((const __m128i *)&v38[v39 / 8]);
                  v39 += 16LL;
                }
                while ( v39 != v40 );
                if ( (v31 & 1) != 0 )
                  *(_QWORD *)&v34[8 * (v31 & 0xFFFFFFFE)] = v38[v31 & 0xFFFFFFFE];
              }
            }
            if ( v38 != v187 && v38 )
            {
              sub_186B220(v38);
              v31 = v186;
              v36 = v178;
            }
            v185 = v34;
            HIDWORD(v186) = v37;
          }
          v35 = v31++;
          *(_QWORD *)&v34[8 * v35] = v36;
          LODWORD(v186) = v31;
        }
        v32 += 2;
      }
      while ( v32 != v33 );
      goto LABEL_51;
    }
LABEL_8:
    LODWORD(v186) = v174 - 1;
    v11 = *v7;
    if ( (unsigned int)*v7 >= *((_DWORD *)a1 + 42) )
      sub_186B510(a1 + 21, v11 + 1, 0);
    *(_DWORD *)(a1[22] + 4LL * (v11 >> 5)) |= 1 << v11;
    if ( *((_WORD *)v7 + 2) || (v12 = *(_DWORD **)(*((_QWORD *)v7 + 2) + 24LL)) == nullptr || *v12 || v12[1] != 34 )
    {
      v188 = v190;
      v189 = 0x1000000000LL;
      v13 = (_QWORD *)sub_186B270(8u);
      v14 = v7[6];
      v175 = v13;
      *v13 = 0;
      if ( !v14 )
        goto LABEL_14;
      v47 = v14 - 1;
      v48 = *a1;
      if ( *(_QWORD *)(v48 + 848) == sub_15D1F10(*(_QWORD *)&v7[2 * v47 + 8]) )
      {
        v47 = v14;
      }
      else if ( v14 == 1 )
      {
        goto LABEL_104;
      }
      v179 = v7;
      v181 = &v7[2 * v47];
      while ( 1 )
      {
        v49 = *((_QWORD *)v179 + 4);
        if ( !*((_WORD *)v7 + 2) )
        {
          v50 = *(_DWORD **)(*((_QWORD *)v7 + 2) + 24LL);
          if ( v50 )
          {
            if ( !*v50 && v50[1] == 35 )
              goto LABEL_103;
          }
        }
        v51 = *((unsigned int *)a1 + 24);
        v52 = *(_DWORD *)(v49 + 12);
        v53 = (char *)a1[11];
        v54 = v51 - 1;
        v51 *= 16;
        v55 = &v53[v51];
        v56 = 16LL * (v52 & v54);
        v57 = &v53[v56];
        if ( v56 != v51 )
        {
          v58 = &v53[v56];
          do
          {
            while ( 1 )
            {
              v59 = *(_QWORD *)v58;
              if ( *(_QWORD *)v58 <= 1u )
                break;
              if ( *(_DWORD *)(v59 + 12) == v52 && v49 == v59 )
                goto LABEL_90;
              v58 += 16;
              if ( v55 == v58 )
                goto LABEL_81;
            }
            if ( !v59 )
              goto LABEL_293;
            v58 += 16;
          }
          while ( v55 != v58 );
        }
LABEL_81:
        if ( v53 == v57 )
LABEL_293:
          BUG();
        while ( 1 )
        {
          v60 = *(_QWORD *)v53;
          if ( *(_QWORD *)v53 > 1u )
            break;
          if ( !v60 )
            goto LABEL_293;
LABEL_85:
          v53 += 16;
          if ( v57 == v53 )
            goto LABEL_293;
        }
        if ( *(_DWORD *)(v60 + 12) != v52 || v49 != v60 )
          goto LABEL_85;
        v58 = v53;
LABEL_90:
        v61 = **((__int64 ***)v58 + 1);
        if ( v61 )
        {
          v62 = &v61[*((unsigned int *)v61 - 1)];
          if ( v62 != v61 )
          {
            v63 = **((__int64 ***)v58 + 1);
            do
            {
              while ( 1 )
              {
                v64 = *v63;
                v65 = *(_BYTE *)(*v63 + 6);
                if ( (v65 & 1) == 0 )
                  break;
                if ( v62 == ++v63 )
                  goto LABEL_103;
              }
              *(_BYTE *)(v64 + 6) = v65 | 1;
              v66 = v189;
              if ( (unsigned int)v189 >= HIDWORD(v189) )
              {
                v79 = (unsigned int)(2 * HIDWORD(v189));
                v67 = (char *)sub_186B270(8 * v79);
                v66 = v189;
                v80 = (char *)v188;
                if ( (_DWORD)v189 )
                {
                  if ( (unsigned int)(v189 - 1) <= 2 || v67 == (char *)v188 + 8 )
                  {
                    v84 = 0;
                    v85 = 8LL * (unsigned int)v189;
                    do
                    {
                      *(_QWORD *)&v67[v84] = *(_QWORD *)&v80[v84];
                      v84 += 8;
                    }
                    while ( v84 != v85 );
                  }
                  else
                  {
                    v81 = 0;
                    v82 = 16LL * ((unsigned int)v189 >> 1);
                    do
                    {
                      *(__m128i *)&v67[v81] = _mm_loadu_si128((const __m128i *)&v80[v81]);
                      v81 += 16;
                    }
                    while ( v82 != v81 );
                    if ( (v66 & 1) != 0 )
                      *(_QWORD *)&v67[8 * (v66 & 0xFFFFFFFE)] = *(_QWORD *)&v80[8 * (v66 & 0xFFFFFFFE)];
                  }
                }
                if ( v80 != v190 && v80 )
                {
                  v183 = v67;
                  sub_186B220(v80);
                  v66 = v189;
                  v67 = v183;
                }
                v188 = v67;
                HIDWORD(v189) = v79;
              }
              else
              {
                v67 = (char *)v188;
              }
              *(_QWORD *)&v67[8 * v66] = v64;
              LODWORD(v189) = v66 + 1;
              v68 = (_QWORD *)*v175;
              if ( *v175 )
              {
                v69 = *((_DWORD *)v68 - 1);
                if ( v69 == *((_DWORD *)v68 - 2) )
                {
                  v75 = (3 * v69 + 1) >> 1;
                  v76 = 8 * v75 + 8;
                  if ( 8 * v69 + 8 >= (unsigned int)v76 || v69 >= v75 )
                  {
                    exception = (char **)__cxa_allocate_exception(0x28u);
                    sub_24ABB0(v184, "Overflow encountered when expanding vector");
                    *exception = (char *)off_1C63128;
                    sub_2333C0(exception + 1, v184);
                    sub_233E40((__int64)v184);
                    __cxa_throw(
                      exception,
                      (struct type_info *)&`typeinfo for'default_exception,
                      (void (*)(void *))sub_230E50);
                  }
                  v77 = (unsigned int *)sub_186B300(v68 - 1, v76);
                  v78 = v77[1];
                  v68 = v77 + 2;
                  *v77 = v75;
                  LODWORD(v77) = v78;
                  *v175 = v68;
                  v72 = &v68[v78];
                  v71 = (_DWORD)v77 + 1;
                }
                else
                {
                  v70 = v69;
                  v71 = v69 + 1;
                  v72 = &v68[v70];
                }
              }
              else
              {
                v83 = (_QWORD *)sub_186B270(0x18u);
                v68 = v83 + 1;
                v72 = v83 + 1;
                *v83 = 2;
                *v175 = v83 + 1;
                v71 = 1;
              }
              *v72 = v64;
              *((_DWORD *)v68 - 1) = v71;
              v73 = *v7;
              if ( (unsigned int)*v7 >= *((_DWORD *)a1 + 36) )
                sub_186B510(a1 + 18, v73 + 1, 0);
              ++v63;
              *(_DWORD *)(a1[19] + 4LL * (v73 >> 5)) |= 1 << v73;
            }
            while ( v62 != v63 );
          }
        }
LABEL_103:
        v179 += 2;
        if ( v181 == v179 )
        {
LABEL_104:
          v74 = (_QWORD *)*v175;
          if ( *v175 )
          {
            if ( *((_DWORD *)v74 - 1) )
            {
              v86 = (_QWORD *)a1[4];
              if ( v86 )
              {
                v87 = *((_DWORD *)v86 - 1);
                if ( v87 == *((_DWORD *)v86 - 2) )
                {
                  v133 = (3 * v87 + 1) >> 1;
                  v134 = 8 * v133 + 8;
                  if ( 8 * v87 + 8 >= v134 || v87 >= v133 )
                  {
                    v3 = (char **)__cxa_allocate_exception(0x28u);
                    sub_24ABB0(v184, "Overflow encountered when expanding vector");
                    *v3 = (char *)off_1C63128;
                    sub_2333C0(v3 + 1, v184);
                    sub_233E40((__int64)v184);
                    __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                  }
                  v135 = (unsigned int *)sub_186B300(v86 - 1, v134);
                  v86 = v135 + 2;
                  v136 = v135[1];
                  *v135 = v133;
                  a1[4] = (__int64)(v135 + 2);
                  LODWORD(v135) = v136;
                  v90 = &v86[v136];
                  v89 = (_DWORD)v135 + 1;
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
                v148 = (_QWORD *)sub_186B270(0x18u);
                *v148 = 2;
                v86 = v148 + 1;
                v89 = 1;
                a1[4] = (__int64)v86;
                v90 = v86;
              }
              *v90 = v175;
              *((_DWORD *)v86 - 1) = v89;
              v91 = *((unsigned int *)a1 + 24);
              v92 = 2 * v91;
              v93 = 2 * v91;
              if ( 3 * (int)v91 < (unsigned int)(4 * (*((_DWORD *)a1 + 25) + *((_DWORD *)a1 + 26))) )
              {
                v137 = 2 * v91;
                v138 = sub_186B270(16LL * v92);
                v96 = 16LL * v92;
                v94 = v138;
                v139 = (__m128i *)v138;
                v140 = (__m128i *)(v96 + v138);
                if ( v137 )
                {
                  if ( (((_BYTE)v140 - (_BYTE)v94) & 0x10) == 0
                    || (v139 = (__m128i *)(v94 + 16), *(_OWORD *)v94 = 0, v140 != (__m128i *)(v94 + 16)) )
                  {
                    do
                    {
                      *v139 = 0;
                      v139 += 2;
                      v139[-1] = 0;
                    }
                    while ( v140 != v139 );
                  }
                }
                v141 = (const __m128i *)a1[11];
                v95 = v93 - 1;
                v97 = (__int64 *)v140;
                v142 = (__m128i *)&v141[*((unsigned int *)a1 + 24)];
                if ( v141 != v142 )
                {
                  do
                  {
                    while ( v141->m128i_i64[0] <= 1uLL )
                    {
                      if ( v142 == ++v141 )
                        goto LABEL_204;
                    }
                    v143 = 16LL * (*(_DWORD *)(v141->m128i_i64[0] + 12) & v95);
                    v144 = (__m128i *)(v94 + v143);
                    if ( v96 == v143 )
                    {
LABEL_208:
                      if ( (__m128i *)v94 == v144 )
                      {
LABEL_227:
                        sub_1872CE0("");
                        sub_1873130(114, 213);
                      }
                      v145 = (__m128i *)v94;
                      while ( v145->m128i_i64[0] )
                      {
                        if ( v144 == ++v145 )
                          goto LABEL_227;
                      }
                    }
                    else
                    {
                      v145 = (__m128i *)(v94 + v143);
                      while ( v145->m128i_i64[0] )
                      {
                        if ( v140 == ++v145 )
                          goto LABEL_208;
                      }
                    }
                    v146 = _mm_loadu_si128(v141++);
                    *v145 = v146;
                  }
                  while ( v142 != v141 );
LABEL_204:
                  v142 = (__m128i *)a1[11];
                }
                if ( v142 )
                {
                  v182 = v96;
                  sub_186B220(v142);
                  v96 = v182;
                  v95 = v93 - 1;
                }
                a1[11] = v94;
                *((_DWORD *)a1 + 24) = v93;
                *((_DWORD *)a1 + 26) = 0;
              }
              else
              {
                v94 = a1[11];
                v95 = v91 - 1;
                v96 = 16 * v91;
                v97 = (__int64 *)(v94 + 16 * v91);
              }
              v98 = v7[3];
              v99 = 16LL * (v98 & v95);
              v100 = v94 + v99;
              if ( v99 != v96 )
              {
                v101 = (__int64 *)(v94 + v99);
                v102 = nullptr;
                while ( 1 )
                {
                  v103 = (int *)*v101;
                  if ( (unsigned __int64)*v101 > 1 )
                  {
                    if ( v103[3] == v98 && v103 == v7 )
                    {
                      *v101 = (__int64)v7;
                      v101[1] = (__int64)v175;
                      goto LABEL_57;
                    }
                  }
                  else
                  {
                    if ( !v103 )
                    {
                      if ( v102 )
                        goto LABEL_216;
                      v102 = v101;
                      goto LABEL_217;
                    }
                    v102 = v101;
                  }
                  v101 += 2;
                  if ( v101 == v97 )
                    goto LABEL_143;
                }
              }
              v102 = nullptr;
              while ( 1 )
              {
LABEL_143:
                if ( v100 == v94 )
                {
LABEL_56:
                  sub_1872CE0("");
                  sub_1873130(114, 405);
                }
                v104 = *(int **)v94;
                if ( *(_QWORD *)v94 > 1u )
                {
                  if ( v104[3] == v98 && v104 == v7 )
                  {
                    *(_QWORD *)v94 = v7;
                    *(_QWORD *)(v94 + 8) = v175;
LABEL_57:
                    v43 = v188;
                    v44 = (char *)v188 + 8 * (unsigned int)v189;
                    v45 = (char *)v188;
                    if ( v188 != v44 )
                    {
                      do
                      {
                        v46 = *(_QWORD *)v45;
                        v45 += 8;
                        *(_BYTE *)(v46 + 6) &= ~1u;
                      }
                      while ( v45 != v44 );
                    }
                    LODWORD(v189) = 0;
                    if ( v43 && v43 != v190 )
                      sub_186B220(v43);
                    result = (unsigned int)v186;
                    v8 = v185;
                    v174 = v186;
                    if ( (_DWORD)v186 )
                      goto LABEL_5;
                    goto LABEL_63;
                  }
                }
                else
                {
                  if ( !v104 )
                  {
                    if ( v102 )
LABEL_216:
                      --*((_DWORD *)a1 + 26);
                    else
                      v102 = (_QWORD *)v94;
LABEL_217:
                    *v102 = v7;
                    v102[1] = v175;
                    ++*((_DWORD *)a1 + 25);
                    goto LABEL_57;
                  }
                  v102 = (_QWORD *)v94;
                }
                v94 += 16;
              }
            }
            sub_186B220(v74 - 1);
          }
LABEL_14:
          sub_186B220(v175);
          v15 = *((_DWORD *)a1 + 24);
          v16 = a1 + 1;
          if ( 3 * v15 < 4 * (*((_DWORD *)a1 + 25) + *((_DWORD *)a1 + 26)) )
          {
            v19 = 32LL * v15;
            v176 = 2 * v15;
            v105 = sub_186B270(v19);
            v106 = v176;
            v17 = v105;
            v107 = (__m128i *)v105;
            v16 = a1 + 1;
            v108 = (__m128i *)(v19 + v105);
            if ( v176 )
            {
              if ( (((_BYTE)v108 - (_BYTE)v17) & 0x10) == 0
                || (v107 = (__m128i *)(v17 + 16), *(_OWORD *)v17 = 0, v108 != (__m128i *)(v17 + 16)) )
              {
                do
                {
                  *v107 = 0;
                  v107 += 2;
                  v107[-1] = 0;
                }
                while ( v108 != v107 );
              }
            }
            v109 = (const __m128i *)a1[11];
            v18 = v176 - 1;
            v20 = (__int64 *)v108;
            v110 = (__m128i *)&v109[*((unsigned int *)a1 + 24)];
            if ( v109 != v110 )
            {
              do
              {
                while ( v109->m128i_i64[0] <= 1uLL )
                {
                  if ( v110 == ++v109 )
                    goto LABEL_160;
                }
                v111 = 16LL * (*(_DWORD *)(v109->m128i_i64[0] + 12) & (unsigned int)v18);
                v112 = (__m128i *)(v17 + v111);
                if ( v19 == v111 )
                {
LABEL_164:
                  if ( (__m128i *)v17 == v112 )
                  {
LABEL_173:
                    sub_1872CE0("");
                    sub_1873130(114, 213);
                  }
                  v113 = (__m128i *)v17;
                  while ( v113->m128i_i64[0] )
                  {
                    if ( v112 == ++v113 )
                      goto LABEL_173;
                  }
                }
                else
                {
                  v113 = (__m128i *)(v17 + v111);
                  while ( v113->m128i_i64[0] )
                  {
                    if ( v108 == ++v113 )
                      goto LABEL_164;
                  }
                }
                v114 = _mm_loadu_si128(v109++);
                *v113 = v114;
              }
              while ( v110 != v109 );
LABEL_160:
              v110 = (__m128i *)a1[11];
            }
            if ( v110 )
            {
              sub_186B220(v110);
              v106 = v176;
              v18 = v176 - 1;
              v16 = a1 + 1;
            }
            a1[11] = v17;
            *((_DWORD *)a1 + 24) = v106;
            *((_DWORD *)a1 + 26) = 0;
          }
          else
          {
            v17 = a1[11];
            v18 = v15 - 1;
            v19 = 16LL * v15;
            v20 = (__int64 *)(v17 + v19);
          }
          v21 = v7[3];
          v22 = 16LL * (v21 & (unsigned int)v18);
          v23 = v17 + v22;
          if ( v22 != v19 )
          {
            v24 = (__int64 *)(v17 + v22);
            v25 = nullptr;
            while ( 1 )
            {
              v26 = (int *)*v24;
              if ( (unsigned __int64)*v24 > 1 )
              {
                if ( v26[3] == v21 && v26 == v7 )
                {
                  *v24 = (__int64)v7;
                  v24[1] = (__int64)v16;
                  goto LABEL_57;
                }
              }
              else
              {
                if ( !v26 )
                {
                  if ( v25 )
                    goto LABEL_171;
                  v25 = v24;
                  goto LABEL_172;
                }
                v25 = v24;
              }
              v24 += 2;
              if ( v24 == v20 )
                goto LABEL_27;
            }
          }
          v25 = nullptr;
          while ( 1 )
          {
LABEL_27:
            if ( v23 == v17 )
              goto LABEL_56;
            v27 = *(int **)v17;
            if ( *(_QWORD *)v17 > 1u )
            {
              if ( v27[3] == v21 && v27 == v7 )
              {
                *(_QWORD *)v17 = v7;
                *(_QWORD *)(v17 + 8) = v16;
                goto LABEL_57;
              }
            }
            else
            {
              if ( !v27 )
              {
                if ( v25 )
LABEL_171:
                  --*((_DWORD *)a1 + 26);
                else
                  v25 = (_QWORD *)v17;
LABEL_172:
                *v25 = v7;
                v25[1] = v16;
                ++*((_DWORD *)a1 + 25);
                goto LABEL_57;
              }
              v25 = (_QWORD *)v17;
            }
            v17 += 16;
          }
        }
      }
    }
    v115 = (_QWORD *)sub_186B270(8u);
    *v115 = 0;
    v116 = v115;
    v117 = (_QWORD *)a1[4];
    if ( v117 )
    {
      v118 = *((_DWORD *)v117 - 1);
      if ( v118 == *((_DWORD *)v117 - 2) )
      {
        v149 = (3 * v118 + 1) >> 1;
        v150 = 8 * v149 + 8;
        if ( 8 * v118 + 8 >= v150 || v118 >= v149 )
        {
          v4 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0((__int64 *)&v188, "Overflow encountered when expanding vector");
          *v4 = (char *)off_1C63128;
          sub_2333C0(v4 + 1, &v188);
          sub_233E40((__int64)&v188);
          __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v151 = (unsigned int *)sub_186B300(v117 - 1, v150);
        v117 = v151 + 2;
        v152 = v151[1];
        *v151 = v149;
        a1[4] = (__int64)(v151 + 2);
        LODWORD(v151) = v152;
        v121 = &v117[v152];
        v120 = (_DWORD)v151 + 1;
      }
      else
      {
        v119 = v118;
        v120 = v118 + 1;
        v121 = &v117[v119];
      }
    }
    else
    {
      v173 = (_QWORD *)sub_186B270(0x18u);
      *v173 = 2;
      v117 = v173 + 1;
      v120 = 1;
      a1[4] = (__int64)v117;
      v121 = v117;
    }
    *v121 = v116;
    *((_DWORD *)v117 - 1) = v120;
    v122 = *((unsigned int *)a1 + 24);
    v123 = 2 * v122;
    v180 = 2 * v122;
    if ( 3 * (int)v122 < (unsigned int)(4 * (*((_DWORD *)a1 + 25) + *((_DWORD *)a1 + 26))) )
    {
      v125 = 16LL * v123;
      v160 = (__m128i *)sub_186B270(v125);
      v124 = (__int64 *)v160;
      v161 = v160;
      v162 = &v160[v125 / 0x10];
      if ( v123 )
      {
        if ( ((16 * (_BYTE)v123) & 0x10) == 0 || (v161 = v160 + 1, *v160 = 0, &v160[1] != v162) )
        {
          do
          {
            *v161 = 0;
            v161 += 2;
            v161[-1] = 0;
          }
          while ( v161 != v162 );
        }
      }
      v163 = (const __m128i *)a1[11];
      v126 = &v160[v125 / 0x10];
      v164 = (__m128i *)&v163[*((unsigned int *)a1 + 24)];
      v177 = v180 - 1;
      if ( v163 != v164 )
      {
        do
        {
          if ( v163->m128i_i64[0] > 1uLL )
          {
            v165 = 16LL * (*(_DWORD *)(v163->m128i_i64[0] + 12) & v177);
            v166 = &v160[(unsigned __int64)v165 / 0x10];
            if ( v125 == v165 )
            {
LABEL_263:
              if ( v160 == v166 )
              {
LABEL_272:
                sub_1872CE0("");
                sub_1873130(114, 213);
              }
              v167 = v160;
              while ( v167->m128i_i64[0] )
              {
                if ( v166 == ++v167 )
                  goto LABEL_272;
              }
            }
            else
            {
              v167 = &v160[(unsigned __int64)v165 / 0x10];
              while ( v167->m128i_i64[0] )
              {
                if ( v162 == ++v167 )
                  goto LABEL_263;
              }
            }
            *v167 = _mm_loadu_si128(v163);
          }
          ++v163;
        }
        while ( v164 != v163 );
        v164 = (__m128i *)a1[11];
      }
      if ( v164 )
        sub_186B220(v164);
      a1[11] = (__int64)v124;
      *((_DWORD *)a1 + 26) = 0;
      *((_DWORD *)a1 + 24) = v180;
    }
    else
    {
      v124 = (__int64 *)a1[11];
      v177 = v122 - 1;
      v125 = 16 * v122;
      v126 = (__m128i *)&v124[2 * v122];
    }
    v127 = v7[3];
    v128 = 16LL * (v127 & v177);
    v129 = &v124[(unsigned __int64)v128 / 8];
    if ( v128 == v125 )
    {
      v131 = nullptr;
      while ( 1 )
      {
LABEL_223:
        if ( v129 == v124 )
        {
          sub_1872CE0("");
          sub_1873130(114, 405);
        }
        v147 = (int *)*v124;
        if ( (unsigned __int64)*v124 > 1 )
        {
          if ( v147[3] == v127 && v147 == v7 )
          {
            *v124 = (__int64)v7;
            v124[1] = (__int64)v116;
            goto LABEL_242;
          }
        }
        else
        {
          if ( !v147 )
          {
            if ( v131 )
            {
              --*((_DWORD *)a1 + 26);
              v124 = (__int64 *)v131;
            }
            *v124 = (__int64)v7;
            v124[1] = (__int64)v116;
            ++*((_DWORD *)a1 + 25);
            goto LABEL_242;
          }
          v131 = (__m128i *)v124;
        }
        v124 += 2;
      }
    }
    v130 = (__m128i *)&v124[(unsigned __int64)v128 / 8];
    v131 = nullptr;
    while ( 1 )
    {
      v132 = (int *)v130->m128i_i64[0];
      if ( v130->m128i_i64[0] <= 1uLL )
        break;
      if ( v132[3] == v127 && v132 == v7 )
      {
        v130->m128i_i64[0] = (__int64)v7;
        v130->m128i_i64[1] = (__int64)v116;
        goto LABEL_242;
      }
LABEL_184:
      if ( ++v130 == v126 )
        goto LABEL_223;
    }
    if ( v132 )
    {
      v131 = v130;
      goto LABEL_184;
    }
    if ( v131 )
    {
      --*((_DWORD *)a1 + 26);
      v130 = v131;
    }
    v130->m128i_i64[0] = (__int64)v7;
    v130->m128i_i64[1] = (__int64)v116;
    ++*((_DWORD *)a1 + 25);
LABEL_242:
    v153 = (_QWORD *)*v116;
    if ( *v116 )
    {
      v154 = *((_DWORD *)v153 - 1);
      if ( v154 == *((_DWORD *)v153 - 2) )
      {
        v168 = (3 * v154 + 1) >> 1;
        v169 = 8 * v168 + 8;
        if ( 8 * v154 + 8 >= v169 || v154 >= v168 )
        {
          v5 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0((__int64 *)&v188, "Overflow encountered when expanding vector");
          *v5 = (char *)off_1C63128;
          sub_2333C0(v5 + 1, &v188);
          sub_233E40((__int64)&v188);
          __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v170 = (unsigned int *)sub_186B300(v153 - 1, v169);
        v153 = v170 + 2;
        v171 = v170[1];
        *v170 = v168;
        *v116 = v170 + 2;
        LODWORD(v170) = v171;
        v157 = (int **)&v153[v171];
        v156 = (_DWORD)v170 + 1;
      }
      else
      {
        v155 = v154;
        v156 = v154 + 1;
        v157 = (int **)&v153[v155];
      }
    }
    else
    {
      v172 = (_QWORD *)sub_186B270(0x18u);
      *v172 = 2;
      v153 = v172 + 1;
      v156 = 1;
      *v116 = v153;
      v157 = (int **)v153;
    }
    *v157 = v7;
    *((_DWORD *)v153 - 1) = v156;
    v158 = *v7;
    if ( (unsigned int)*v7 >= *((_DWORD *)a1 + 36) )
      sub_186B510(a1 + 18, v158 + 1, 0);
    *(_DWORD *)(a1[19] + 4LL * (v158 >> 5)) |= 1 << v158;
    v159 = **(_DWORD **)&v7[2 * (v7[6] - 1) + 8];
    if ( v159 >= *((_DWORD *)a1 + 30) )
      sub_186B510(a1 + 15, v159 + 1, 0);
    v8 = v185;
    *(_DWORD *)(a1[16] + 4LL * (v159 >> 5)) |= 1 << v159;
    result = (unsigned int)v186;
    v174 = v186;
LABEL_4:
    if ( v174 )
    {
LABEL_5:
      v7 = (int *)v8[v174 - 1];
      continue;
    }
    break;
  }
LABEL_63:
  if ( v8 )
  {
    result = (__int64)v187;
    if ( v8 != v187 )
      return sub_186B220(v8);
  }
  return result;
}

