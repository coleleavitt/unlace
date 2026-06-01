/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_458A40
// Address: 0x0000000000458A40

//----- (0000000000458A40) ----------------------------------------------------
unsigned __int64 __fastcall sub_458A40(
        __int64 a1,
        __int64 a2,
        signed int a3,
        int a4,
        _QWORD *a5,
        _QWORD *a6,
        double a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        double a11,
        double a12,
        __m128 a13,
        __m128 a14,
        _QWORD *a15,
        __int64 a16,
        _QWORD *a17,
        unsigned int a18)
{
  __int64 v18; // rbp
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v22; // r13
  __int64 v23; // rdi
  __int64 v24; // rdx
  __int64 v25; // rax
  unsigned __int64 v26; // r15
  __int64 v27; // rdx
  _QWORD *v28; // r14
  int v29; // eax
  __int64 v30; // rax
  unsigned __int64 v31; // rsi
  size_t v32; // r15
  const char *v33; // r13
  __int64 (__fastcall *v34)(__int64, _QWORD *); // rax
  char *v35; // r8
  __int64 v36; // rax
  __m128 si128; // xmm0
  __int64 v38; // rdx
  __int64 v39; // r15
  unsigned __int64 v40; // r13
  void *v41; // r8
  void *v42; // rdi
  void *v44; // rax
  __int64 v45; // r14
  __int64 v46; // rbx
  void *v47; // rdx
  char *v48; // r15
  __int64 v49; // r14
  _QWORD *v50; // rbx
  __int64 v51; // rbp
  __int64 v52; // rax
  __int64 v53; // rax
  void *v54; // rdi
  __int64 v55; // r12
  __int64 v56; // r14
  char *v57; // rdx
  char *v58; // rax
  void *v59; // rdi
  size_t v61; // r11
  __int64 v62; // r9
  unsigned __int64 v63; // r10
  char *v64; // rsi
  __int64 v65; // rax
  size_t v66; // r11
  __int64 v67; // r9
  const void *v68; // r12
  unsigned __int64 v69; // r10
  char *v70; // rsi
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // rdx
  unsigned __int64 v74; // r15
  __int64 v75; // rsi
  void *v76; // rax
  char *v77; // rsi
  __int64 v78; // rdx
  __int64 (*v79)(); // r8
  int v80; // eax
  int v81; // r15d
  __int64 v82; // r15
  __int64 v83; // r12
  void *v84; // r8
  int v85; // r15d
  __int64 (__fastcall *v86)(__int64, int); // rax
  unsigned __int64 v87; // rdx
  __int64 v88; // rax
  unsigned __int64 v89; // rdx
  __int64 v90; // rsi
  void *v91; // rdi
  void *v92; // r11
  _QWORD *v93; // rax
  int *v94; // rcx
  __int64 v95; // rsi
  __int64 v96; // rdx
  __int64 v97; // rax
  __int64 v98; // rsi
  __int64 v99; // rcx
  __int64 v100; // r8
  int *v101; // rax
  int *v102; // rdx
  _BOOL8 v103; // rdi
  int v104; // eax
  int v105; // edx
  size_t v106; // r15
  size_t v107; // r8
  void *v108; // rdi
  int *v109; // rax
  int v110; // edx
  int *v111; // r15
  unsigned __int64 v112; // rdx
  __int64 v113; // rsi
  void *v114; // rdi
  void *v115; // rdi
  void *v116; // rax
  _QWORD *v117; // rcx
  void *v118; // rsi
  void *v119; // rax
  void *v120; // rax
  int v121; // r15d
  __int64 v122; // rax
  __int64 v123; // rcx
  int *v124; // r12
  __int64 v125; // r8
  __int64 v126; // rax
  int *v127; // rdx
  _BOOL8 v128; // rdi
  int v129; // eax
  int v130; // esi
  int v131; // edx
  size_t v132; // r12
  void *v133; // rdi
  int *v134; // rax
  unsigned __int64 v135; // rdx
  int *v136; // r15
  __int64 v137; // rcx
  __int64 v138; // rax
  __int64 v139; // rcx
  int *v140; // r12
  __int64 v141; // r8
  __int64 v142; // rax
  unsigned int v143; // eax
  int v144; // esi
  size_t v145; // r12
  void *v146; // rdi
  int *v147; // r12
  void *v148; // rdi
  void *v149; // rdi
  void *v150; // rdi
  void *v151; // rax
  void *v152; // rsi
  void *v153; // rax
  void *v154; // rsi
  __int64 v155; // rcx
  char *v156; // rdi
  _QWORD *v157; // rax
  int v158; // eax
  int v159; // ebx
  int v160; // eax
  double v161; // xmm4_8
  double v162; // xmm5_8
  int v163; // eax
  __int64 v164; // rcx
  __int64 (__fastcall *v165)(__int64, unsigned int, __int64, __int64); // r11
  unsigned __int64 v166; // r13
  const void *v167; // r14
  void *v168; // rdi
  __int64 v169; // rdx
  int v170; // eax
  unsigned __int64 v171; // r15
  int *v172; // rbp
  char *v173; // rax
  const void *v174; // rsi
  int v176; // [rsp+8h] [rbp-190h]
  void *v177; // [rsp+8h] [rbp-190h]
  int v178; // [rsp+8h] [rbp-190h]
  void *v179; // [rsp+8h] [rbp-190h]
  int v180; // [rsp+8h] [rbp-190h]
  __int64 v181; // [rsp+10h] [rbp-188h]
  __m128i v184; // [rsp+30h] [rbp-168h] BYREF
  __int64 v185; // [rsp+40h] [rbp-158h]
  void *v186; // [rsp+48h] [rbp-150h]
  size_t n[2]; // [rsp+50h] [rbp-148h] BYREF
  size_t v188[2]; // [rsp+60h] [rbp-138h] BYREF
  __int64 v189; // [rsp+70h] [rbp-128h]
  char v190; // [rsp+7Bh] [rbp-11Dh]
  unsigned int v191; // [rsp+7Ch] [rbp-11Ch] BYREF
  void *v192; // [rsp+80h] [rbp-118h] BYREF
  __int128 v193; // [rsp+88h] [rbp-110h]
  char *v194; // [rsp+A0h] [rbp-F8h] BYREF
  __int128 v195; // [rsp+A8h] [rbp-F0h]
  unsigned int *v196; // [rsp+C0h] [rbp-D8h] BYREF
  int v197; // [rsp+C8h] [rbp-D0h] BYREF
  void *v198; // [rsp+D0h] [rbp-C8h]
  int *v199; // [rsp+D8h] [rbp-C0h]
  int *v200; // [rsp+E0h] [rbp-B8h]
  __int64 v201; // [rsp+E8h] [rbp-B0h]
  int v202; // [rsp+F0h] [rbp-A8h] BYREF
  void *src; // [rsp+F8h] [rbp-A0h] BYREF
  size_t v204[2]; // [rsp+100h] [rbp-98h]
  _QWORD v205[3]; // [rsp+110h] [rbp-88h] BYREF
  char v206; // [rsp+128h] [rbp-70h] BYREF
  unsigned __int64 v207; // [rsp+158h] [rbp-40h]

  v18 = a1;
  v19 = a1 + 344;
  v184.m128i_i64[0] = a2;
  v191 = a3;
  v207 = __readfsqword(0x28u);
  v20 = *(_QWORD *)(a1 + 352);
  v202 = -2;
  src = (void *)-1LL;
  *(_OWORD *)v204 = 0;
  if ( !v20 )
  {
    v22 = a1 + 344;
LABEL_22:
    v196 = &v191;
    v22 = sub_458520((_QWORD *)(v18 + 336), v22, (__int64)byte_48F2E3, (signed int **)&v196);
    goto LABEL_8;
  }
  v22 = a1 + 344;
  do
  {
    while ( 1 )
    {
      v23 = *(_QWORD *)(v20 + 16);
      v24 = *(_QWORD *)(v20 + 24);
      if ( a3 > *(_DWORD *)(v20 + 32) )
        break;
      v22 = v20;
      v20 = *(_QWORD *)(v20 + 16);
      if ( !v23 )
        goto LABEL_6;
    }
    v20 = *(_QWORD *)(v20 + 24);
  }
  while ( v24 );
LABEL_6:
  if ( v19 == v22 || a3 < *(_DWORD *)(v22 + 32) )
    goto LABEL_22;
LABEL_8:
  v25 = *(_QWORD *)(v22 + 48);
  v26 = *(_QWORD *)(v22 + 56);
  if ( v26 < v25 + 1 )
  {
    v44 = sub_481540(v22 + 40, nullptr, v25 + 1, 0x30u);
    v45 = *(_QWORD *)(v22 + 48);
    v46 = *(_QWORD *)(v22 + 56);
    v47 = v44;
    *(_QWORD *)(v22 + 56) = v26;
    v48 = *(char **)(v22 + 40);
    v49 = v45 - 1;
    if ( v49 >= 0 )
    {
      v186 = v44;
      v185 = v46;
      v50 = v44;
      n[0] = v18;
      v51 = v49;
      do
      {
        v52 = *(_QWORD *)v48;
        a8 = 0;
        *(_QWORD *)v48 = 0;
        *v50 = v52;
        v50[1] = *((_QWORD *)v48 + 1);
        v53 = *((_QWORD *)v48 + 2);
        *(_OWORD *)(v48 + 8) = 0;
        v50[2] = v53;
        v50[3] = *((_QWORD *)v48 + 3);
        v50[4] = *((_QWORD *)v48 + 4);
        *((_BYTE *)v50 + 40) = v48[40];
        v54 = *(void **)v48;
        if ( *(_QWORD *)v48 )
        {
          v55 = *((_QWORD *)v48 + 1);
          if ( v55 )
          {
            v56 = 0;
            v57 = *(char **)v48;
            do
            {
              v58 = &v57[32 * v56];
              if ( *(int *)v58 >= -1 )
              {
                v59 = *((void **)v58 + 1);
                if ( v59 )
                {
                  *((_QWORD *)v58 + 2) = 0;
                  j__free(v59);
                  v57 = *(char **)v48;
                }
              }
              ++v56;
            }
            while ( v55 != v56 );
            v54 = v57;
          }
          *((_QWORD *)v48 + 1) = 0;
          j__free(v54);
        }
        v48 += 48;
        v50 += 6;
      }
      while ( v51-- != 0 );
      v46 = v185;
      v47 = v186;
      v18 = n[0];
      v48 = *(char **)(v22 + 40);
    }
    v185 = (__int64)v47;
    j__free(v48);
    v27 = v185;
    v25 = *(_QWORD *)(v22 + 48);
    *(_QWORD *)(v22 + 56) = v46;
    *(_QWORD *)(v22 + 40) = v27;
  }
  else
  {
    v27 = *(_QWORD *)(v22 + 40);
  }
  v28 = (_QWORD *)(v27 + 48 * v25);
  *(_OWORD *)(v28 + 1) = 0;
  *v28 = 0;
  *((_BYTE *)v28 + 40) = 0;
  *(_OWORD *)(v28 + 3) = -1;
  ++*(_QWORD *)(v22 + 48);
  v29 = *(_DWORD *)(v18 + 220);
  v197 = 0;
  v199 = &v197;
  v198 = nullptr;
  v200 = &v197;
  v201 = 0;
  if ( (v29 & 0xFFFFFFF) == 7 )
  {
    v32 = 54;
    v33 = "last event was an exception, cannot perform an appcall";
    goto LABEL_24;
  }
  v30 = *(_QWORD *)(v18 + 680);
  v31 = (int)v30;
  if ( !v30 )
    v31 = *(int *)(v18 + 776);
  sub_4587A0((void **)v28, v31);
  LODWORD(v185) = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, _QWORD))(*(_QWORD *)v18 + 224LL))(
                    v18,
                    v191,
                    0xFFFFFFFFLL,
                    *v28,
                    0);
  v32 = 24;
  v33 = "failed to read registers";
  if ( (_DWORD)v185 != 1 )
    goto LABEL_24;
  v34 = *(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v18 + 456LL);
  if ( v34 == sub_453C80 )
    v35 = *(char **)(*v28 + 32LL * *(int *)(v18 + 780) + 8);
  else
    v35 = (char *)v34(v18, v28);
  if ( v35 == (char *)-1LL )
    goto LABEL_64;
  v36 = *(int *)(v18 + 276);
  si128 = 0;
  v192 = nullptr;
  v186 = v35;
  v38 = a6[1] + (int)v36 - 1;
  v193 = 0;
  v39 = v38 & -(int)v36;
  v40 = (unsigned __int64)&v35[-v39 - v36] & 0xFFFFFFFFFFFFFFF0LL;
  v28[4] = v40 + v39;
  v190 = sub_484BB0(a6, v40, 0);
  v41 = v186;
  if ( !v190 )
  {
    if ( v192 )
    {
      *(_QWORD *)&v193 = 0;
      j__free(v192);
    }
    v32 = 45;
    v33 = "failed to allocate memory for stack arguments";
    goto LABEL_24;
  }
  v61 = *(int *)(v18 + 276);
  if ( *(_DWORD *)(v18 + 276) )
  {
    v62 = v193;
    v63 = v193 + v61;
    if ( __CFADD__((_QWORD)v193, v61) )
    {
      if ( (unsigned __int64)v193 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v193 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v193 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_51;
      }
      v63 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v64 = (char *)v192;
    v65 = v193;
    if ( *((_QWORD *)&v193 + 1) < v63 )
    {
      v189 = v193;
      v188[0] = (size_t)v186;
      n[0] = v61;
      v186 = (void *)v63;
      v192 = sub_481540((__int64)&v192, v192, v63, 1u);
      v64 = (char *)v192;
      v62 = v189;
      v65 = v193;
      v41 = (void *)v188[0];
      v61 = n[0];
      v63 = (unsigned __int64)v186;
    }
    v189 = v62;
    v188[0] = (size_t)v41;
    n[0] = v61;
    v186 = (void *)v63;
    memset(&v64[v65], 0, v63 - v65);
    v61 = n[0];
    v41 = (void *)v188[0];
    v62 = v189;
    *(_QWORD *)&v193 = v186;
LABEL_51:
    v186 = v41;
    memcpy((char *)v192 + v62, v28 + 4, v61);
    v41 = v186;
  }
  v66 = a6[1];
  if ( !v66 )
    goto LABEL_58;
  v67 = v193;
  v68 = (const void *)*a6;
  v69 = v193 + v66;
  if ( __CFADD__((_QWORD)v193, v66) )
  {
    if ( (unsigned __int64)v193 > 0x7FFFFFFFFFFFFFFELL )
    {
      if ( (_QWORD)v193 != 0x7FFFFFFFFFFFFFFFLL )
        *(_QWORD *)&v193 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_57;
    }
    v69 = 0x7FFFFFFFFFFFFFFFLL;
  }
  v70 = (char *)v192;
  v71 = v193;
  if ( *((_QWORD *)&v193 + 1) < v69 )
  {
    v189 = v193;
    v188[0] = v66;
    n[0] = (size_t)v41;
    v186 = (void *)v69;
    v192 = sub_481540((__int64)&v192, v192, v69, 1u);
    v70 = (char *)v192;
    v67 = v189;
    v71 = v193;
    v66 = v188[0];
    v41 = (void *)n[0];
    v69 = (unsigned __int64)v186;
  }
  v189 = v67;
  v188[0] = v66;
  n[0] = (size_t)v41;
  v186 = (void *)v69;
  memset(&v70[v71], 0, v69 - v71);
  v41 = (void *)n[0];
  v66 = v188[0];
  v67 = v189;
  *(_QWORD *)&v193 = v186;
LABEL_57:
  v186 = v41;
  memcpy((char *)v192 + v67, v68, v66);
  v41 = v186;
LABEL_58:
  v72 = *(int *)(v18 + 276);
  v73 = v193;
  v74 = v72 + v39;
  if ( (unsigned __int64)v193 < v74 )
  {
    v77 = (char *)v192;
    if ( *((_QWORD *)&v193 + 1) < v74 )
    {
      v186 = v41;
      v192 = sub_481540((__int64)&v192, v192, v74, 1u);
      v73 = v193;
      v77 = (char *)v192;
      v41 = v186;
    }
    v186 = v41;
    memset(&v77[v73], 0, v74 - v73);
    *(_QWORD *)&v193 = v74;
    v41 = v186;
    v72 = *(int *)(v18 + 276);
  }
  else if ( v74 != (_QWORD)v193 )
  {
    *(_QWORD *)&v193 = v74;
  }
  v75 = v40 - v72;
  v28[3] = v40 - v72;
  if ( v40 - v72 >= (unsigned __int64)v41 )
  {
    if ( v192 )
    {
      *(_QWORD *)&v193 = 0;
      j__free(v192);
    }
LABEL_64:
    v32 = 30;
    v33 = "failed to allocate stack frame";
    goto LABEL_24;
  }
  v78 = 0;
  v79 = *(__int64 (**)())(*(_QWORD *)v18 + 448LL);
  v80 = 0;
  if ( v79 != sub_453BE0 )
  {
    v80 = ((__int64 (__fastcall *)(__int64, _QWORD *, unsigned int **, void **))v79)(v18, v28, &v196, &v192);
    v78 = v80;
    v75 = v80 + v28[3];
  }
  v81 = v193;
  v28[3] = v75;
  v82 = (unsigned int)(v81 - v80);
  if ( (int)v82 > 0
    && v82 != (*(__int64 (__fastcall **)(__int64, __int64, char *, __int64, _QWORD))(*(_QWORD *)v18 + 296LL))(
                v18,
                v75,
                (char *)v192 + v78,
                v82,
                0) )
  {
    if ( v192 )
    {
      *(_QWORD *)&v193 = 0;
      j__free(v192);
    }
    v32 = 31;
    v33 = "failed to setup stack arguments";
    goto LABEL_24;
  }
  (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD, __int64))(*(_QWORD *)v18 + 312LL))(
    v18,
    0,
    4,
    v28[4],
    0xFFFFFFFFLL);
  if ( a5[1] )
  {
    v83 = 0;
    while ( 1 )
    {
      v84 = (void *)(*a5 + 32 * v83);
      v85 = *(_DWORD *)v84;
      if ( *(_DWORD *)v84 == *(_DWORD *)(v18 + 780) || v85 == *(_DWORD *)(v18 + 784) )
      {
        if ( v192 )
        {
          *(_QWORD *)&v193 = 0;
          j__free(v192);
        }
        v121 = 3;
        goto LABEL_156;
      }
      v86 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)v18 + 608LL);
      if ( v86 == sub_455390 )
      {
        v87 = *(_QWORD *)(v18 + 680);
        if ( !v87 )
          sub_410DF0("debmod_t::get_reginfo is not implemented");
        if ( v85 >= v87 )
        {
          if ( !byte_4C94E1 )
            sub_481AC0(3256);
          BUG();
        }
        v88 = *(_QWORD *)(v18 + 672) + 32LL * v85;
      }
      else
      {
        v186 = (void *)(*a5 + 32 * v83);
        v88 = v86(v18, v85);
        v84 = v186;
      }
      v89 = *(unsigned __int8 *)(v88 + 13);
      if ( (unsigned __int8)v89 <= 0x12u )
      {
        v90 = 294968;
        if ( _bittest64(&v90, v89) )
          break;
      }
      v112 = *((_QWORD *)v84 + 2);
      if ( v112 > 8 || (*(_BYTE *)(v88 + 9) & 1) != 0 )
      {
        if ( v202 >= -1 && src )
        {
          v186 = v84;
          v204[0] = 0;
          j__free(src);
          v84 = v186;
        }
        si128 = 0;
        v91 = nullptr;
        src = nullptr;
        *(_OWORD *)v204 = 0;
        v92 = *((void **)v84 + 2);
        v202 = 0;
        if ( v92 )
        {
LABEL_90:
          n[0] = (size_t)v84;
          v186 = v92;
          src = sub_481540((__int64)&src, nullptr, (unsigned __int64)v92, 1u);
          memset((char *)src + v204[0], 0, (size_t)v186 - v204[0]);
          v84 = (void *)n[0];
          v91 = src;
          v204[0] = (size_t)v186;
          v92 = *(void **)(n[0] + 16);
        }
LABEL_91:
        memcpy(v91, *((const void **)v84 + 1), (size_t)v92);
        goto LABEL_92;
      }
      if ( v202 >= -1 )
      {
        if ( src )
        {
          v186 = v84;
          v204[0] = 0;
          j__free(src);
          v84 = v186;
          v112 = *((_QWORD *)v186 + 2);
        }
        v202 = -2;
      }
      v113 = *((_QWORD *)v84 + 1);
      v186 = v84;
      __memcpy_chk(&src, v113, v112, 24);
      if ( *((_DWORD *)v186 + 1) )
        src = (char *)src + v40;
LABEL_92:
      v93 = v198;
      v94 = &v197;
      if ( !v198 )
        goto LABEL_99;
      do
      {
        while ( 1 )
        {
          v95 = v93[2];
          v96 = v93[3];
          if ( v85 > *((_DWORD *)v93 + 8) )
            break;
          v94 = (int *)v93;
          v93 = (_QWORD *)v93[2];
          if ( !v95 )
            goto LABEL_97;
        }
        v93 = (_QWORD *)v93[3];
      }
      while ( v96 );
LABEL_97:
      if ( v94 == &v197 || v85 < v94[8] )
      {
LABEL_99:
        n[0] = (size_t)v94;
        v97 = operator new(0x48u);
        *(_DWORD *)(v97 + 32) = v85;
        si128 = 0;
        v98 = n[0];
        *(_DWORD *)(v97 + 40) = -2;
        *(_QWORD *)(v97 + 48) = -1;
        *(_OWORD *)(v97 + 56) = 0;
        v186 = (void *)v97;
        v101 = (int *)sub_453F30(&v196, v98, (unsigned int)v85, v99, v100);
        v94 = v101;
        if ( v102 )
        {
          v103 = v101 || &v197 == v102 || v85 < v102[8];
          std::_Rb_tree_insert_and_rebalance(v103, v186, v102, &v197);
          v94 = (int *)v186;
          ++v201;
        }
        else if ( v186 )
        {
          v115 = v186;
          v186 = v101;
          operator delete(v115, 0x48u);
          v94 = (int *)v186;
        }
      }
      if ( &v202 != v94 + 10 )
      {
        v104 = v202;
        v105 = v94[10];
        if ( v202 < -1 )
        {
          if ( v105 >= -1 )
          {
            v114 = *((void **)v94 + 6);
            if ( v114 )
            {
              *((_QWORD *)v94 + 7) = 0;
              v186 = v94;
              j__free(v114);
              v104 = v202;
              v94 = (int *)v186;
            }
          }
          *((_QWORD *)v94 + 6) = src;
        }
        else
        {
          v106 = v204[0];
          if ( v105 < -1 )
          {
            si128 = 0;
            *((_QWORD *)v94 + 6) = 0;
            *(_OWORD *)(v94 + 14) = 0;
            if ( v106 )
            {
              v186 = v94;
              v116 = sub_4814F0(v106);
              v117 = v186;
              v118 = src;
              *((_QWORD *)v186 + 6) = v116;
              v117[8] = v106;
              memcpy(v116, v118, v106);
              v94 = (int *)v186;
              v104 = v202;
              *((_QWORD *)v186 + 7) = v106;
            }
          }
          else
          {
            v107 = 0;
            if ( v204[0] )
            {
              v186 = v94;
              v119 = sub_4814F0(v204[0]);
              v120 = memcpy(v119, src, v106);
              v94 = (int *)v186;
              v107 = (size_t)v120;
            }
            v108 = *((void **)v94 + 6);
            si128 = (__m128)_mm_unpacklo_epi64((__m128i)v106, (__m128i)v106);
            if ( v108 )
            {
              *((_QWORD *)v94 + 7) = 0;
              n[0] = v107;
              v186 = v94;
              *(__m128 *)v188 = si128;
              j__free(v108);
              si128 = (__m128)_mm_load_si128((const __m128i *)v188);
              v107 = n[0];
              v94 = (int *)v186;
            }
            *((_QWORD *)v94 + 6) = v107;
            v104 = v202;
            *(__m128 *)(v94 + 14) = si128;
          }
        }
        v94[10] = v104;
      }
      if ( (unsigned __int64)++v83 >= a5[1] )
        goto LABEL_114;
    }
    if ( v202 >= -1 && src )
    {
      v186 = v84;
      v204[0] = 0;
      j__free(src);
      v84 = v186;
    }
    si128 = 0;
    v91 = nullptr;
    src = nullptr;
    *(_OWORD *)v204 = 0;
    v92 = *((void **)v84 + 2);
    v202 = -1;
    if ( v92 )
      goto LABEL_90;
    goto LABEL_91;
  }
LABEL_114:
  if ( v202 >= -1 )
  {
    if ( src )
    {
      v204[0] = 0;
      j__free(src);
    }
    v202 = -2;
  }
  src = (void *)v28[3];
  v109 = (int *)v198;
  if ( v198 )
  {
    v110 = *(_DWORD *)(v18 + 780);
    v111 = &v197;
    do
    {
      if ( v110 <= v109[8] )
      {
        v111 = v109;
        v109 = *((int **)v109 + 2);
      }
      else
      {
        v109 = *((int **)v109 + 3);
      }
    }
    while ( v109 );
    if ( v111 != &v197 && v110 >= v111[8] )
      goto LABEL_165;
  }
  else
  {
    v111 = &v197;
  }
  v122 = operator new(0x48u);
  v123 = *(unsigned int *)(v18 + 780);
  si128 = 0;
  v124 = (int *)v122;
  *(_DWORD *)(v122 + 40) = -2;
  *(_DWORD *)(v122 + 32) = v123;
  *(_QWORD *)(v122 + 48) = -1;
  *(_OWORD *)(v122 + 56) = 0;
  v176 = v123;
  v126 = sub_453F30(&v196, (__int64)v111, (unsigned int)v123, v123, v125);
  v111 = (int *)v126;
  if ( v127 )
  {
    v128 = &v197 == v127 || v126 || v176 < v127[8];
    v111 = v124;
    std::_Rb_tree_insert_and_rebalance(v128, v124, v127, &v197);
    ++v201;
  }
  else if ( v124 )
  {
    operator delete(v124, 0x48u);
  }
LABEL_165:
  v186 = &v202;
  if ( &v202 != v111 + 10 )
  {
    v129 = v202;
    v130 = v111[10];
    v131 = v202;
    if ( v202 < -1 )
    {
      if ( v130 >= -1 )
      {
        v150 = *((void **)v111 + 6);
        if ( v150 )
        {
          *((_QWORD *)v111 + 7) = 0;
          j__free(v150);
          v129 = v202;
        }
        v131 = v129;
      }
      *((_QWORD *)v111 + 6) = src;
    }
    else
    {
      v132 = v204[0];
      if ( v130 < -1 )
      {
        si128 = 0;
        *((_QWORD *)v111 + 6) = 0;
        *(_OWORD *)(v111 + 14) = 0;
        if ( v132 )
        {
          v151 = sub_4814F0(v132);
          *((_QWORD *)v111 + 6) = v151;
          v152 = src;
          *((_QWORD *)v111 + 8) = v132;
          memcpy(v151, v152, v132);
          *((_QWORD *)v111 + 7) = v132;
          v131 = v202;
        }
      }
      else
      {
        v177 = nullptr;
        if ( v204[0] )
        {
          v177 = sub_4814F0(v204[0]);
          memcpy(v177, src, v132);
        }
        v133 = *((void **)v111 + 6);
        si128 = (__m128)_mm_unpacklo_epi64((__m128i)v132, (__m128i)v132);
        if ( v133 )
        {
          *((_QWORD *)v111 + 7) = 0;
          *(__m128 *)n = si128;
          j__free(v133);
          si128 = (__m128)_mm_load_si128((const __m128i *)n);
        }
        v131 = v202;
        *(__m128 *)(v111 + 14) = si128;
        *((_QWORD *)v111 + 6) = v177;
      }
    }
    v111[10] = v131;
  }
  src = (void *)v184.m128i_i64[0];
  v134 = (int *)v198;
  if ( v198 )
  {
    v135 = *(unsigned int *)(v18 + 784);
    v136 = &v197;
    do
    {
      v137 = *((_QWORD *)v134 + 3);
      if ( (int)v135 <= v134[8] )
      {
        v136 = v134;
        v134 = *((int **)v134 + 2);
      }
      else
      {
        v134 = *((int **)v134 + 3);
      }
    }
    while ( v134 );
    if ( v136 != &v197 && (int)v135 >= v136[8] )
      goto LABEL_187;
  }
  else
  {
    v136 = &v197;
  }
  v138 = operator new(0x48u);
  v139 = *(unsigned int *)(v18 + 784);
  si128 = 0;
  v140 = (int *)v138;
  *(_DWORD *)(v138 + 40) = -2;
  *(_DWORD *)(v138 + 32) = v139;
  *(_QWORD *)(v138 + 48) = -1;
  *(_OWORD *)(v138 + 56) = 0;
  v178 = v139;
  v142 = sub_453F30(&v196, (__int64)v136, (unsigned int)v139, v139, v141);
  v136 = (int *)v142;
  if ( v135 )
  {
    if ( !v142 && &v197 != (int *)v135 )
      LODWORD(v185) = v178 < *(_DWORD *)(v135 + 32);
    v136 = v140;
    std::_Rb_tree_insert_and_rebalance((unsigned int)v185, v140, v135, &v197);
    ++v201;
  }
  else if ( v140 )
  {
    operator delete(v140, 0x48u);
  }
LABEL_187:
  if ( v186 != v136 + 10 )
  {
    v143 = v202;
    v144 = v136[10];
    v135 = (unsigned int)v202;
    if ( v202 < -1 )
    {
      if ( v144 >= -1 )
      {
        v149 = *((void **)v136 + 6);
        if ( v149 )
        {
          *((_QWORD *)v136 + 7) = 0;
          j__free(v149);
          v143 = v202;
        }
        v135 = v143;
      }
      *((_QWORD *)v136 + 6) = src;
    }
    else
    {
      v145 = v204[0];
      if ( v144 < -1 )
      {
        si128 = 0;
        *((_QWORD *)v136 + 6) = 0;
        *(_OWORD *)(v136 + 14) = 0;
        if ( v145 )
        {
          v153 = sub_4814F0(v145);
          *((_QWORD *)v136 + 6) = v153;
          v154 = src;
          *((_QWORD *)v136 + 8) = v145;
          memcpy(v153, v154, v145);
          *((_QWORD *)v136 + 7) = v145;
          v135 = (unsigned int)v202;
        }
      }
      else
      {
        v179 = nullptr;
        if ( v204[0] )
        {
          v179 = sub_4814F0(v204[0]);
          memcpy(v179, src, v145);
        }
        v146 = *((void **)v136 + 6);
        si128 = (__m128)_mm_unpacklo_epi64((__m128i)v145, (__m128i)v145);
        if ( v146 )
        {
          *((_QWORD *)v136 + 7) = 0;
          v184 = (__m128i)si128;
          j__free(v146);
          si128 = (__m128)_mm_load_si128(&v184);
        }
        v135 = (unsigned int)v202;
        *(__m128 *)(v136 + 14) = si128;
        *((_QWORD *)v136 + 6) = v179;
      }
    }
    v136[10] = v135;
  }
  v147 = v199;
  if ( v199 != &v197 )
  {
    while ( (*(unsigned int (__fastcall **)(__int64, _QWORD, _QWORD, int *, _QWORD))(*(_QWORD *)v18 + 232LL))(
              v18,
              v191,
              (unsigned int)v147[8],
              v147 + 10,
              0) == 1 )
    {
      *((_BYTE *)v28 + 40) = 1;
      v147 = (int *)std::_Rb_tree_increment(v147);
      if ( v147 == &v197 )
        goto LABEL_203;
    }
    if ( v192 )
    {
      *(_QWORD *)&v193 = 0;
      j__free(v192);
    }
    v121 = 6;
LABEL_156:
    v33 = off_4C32C0[v121];
    if ( !v33 || (v32 = strlen(off_4C32C0[v121])) == 0 )
    {
      *(_QWORD *)(a16 + 8) = 0;
LABEL_27:
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v18 + 432LL))(v18, v191);
      v40 = -1;
      goto LABEL_28;
    }
LABEL_24:
    v42 = *(void **)a16;
    if ( *(_QWORD *)(a16 + 16) < v32 + 1 )
    {
      v76 = sub_481540(a16, *(void **)a16, v32 + 1, 1u);
      *(_QWORD *)a16 = v76;
      v42 = v76;
    }
    *(_QWORD *)(a16 + 8) = v32 + 1;
    memmove(v42, v33, v32);
    *(_BYTE *)(*(_QWORD *)a16 + v32) = 0;
    goto LABEL_27;
  }
LABEL_203:
  v121 = a18 & 1;
  if ( (a18 & 1) != 0 )
  {
    v148 = v192;
    if ( v192 )
      goto LABEL_205;
    goto LABEL_28;
  }
  *(_BYTE *)(v18 + 216) = 1;
  v185 = v18 + 200;
  LODWORD(v186) = (*(__int64 (__fastcall **)(__int64, __int64, unsigned __int64, __int64))(*(_QWORD *)v18 + 168LL))(
                    v18,
                    v18 + 200,
                    v135,
                    v137);
  if ( (_DWORD)v186 != 1 )
  {
    if ( v192 )
    {
      *(_QWORD *)&v193 = 0;
      j__free(v192);
    }
    v32 = 32;
    v33 = "failed to resume the application";
    goto LABEL_24;
  }
  v155 = 12;
  v205[2] = 0;
  v156 = &v206;
  v205[0] = 0xFFFFFFFFLL;
  while ( v155 )
  {
    *(_DWORD *)v156 = 0;
    v156 += 4;
    --v155;
  }
  v157 = a17;
  v205[1] = -1;
  if ( !a17 )
    v157 = v205;
  v181 = (__int64)v157;
  v158 = a18 & 4;
  if ( (a18 & 4) != 0 )
  {
    v159 = HIWORD(a18);
    if ( HIWORD(a18) )
    {
      v184.m128i_i64[0] = sub_481D90() + 1000000LL * (unsigned int)v159;
      v158 = 1;
    }
    else
    {
      v159 = 0;
      v158 = 1;
      v184.m128i_i64[0] = 0;
    }
  }
  else
  {
    v159 = 40;
    v184.m128i_i64[0] = 0;
  }
  v180 = 2 * v158;
  while ( 1 )
  {
    v160 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v18 + 136LL))(v18, v181, (unsigned int)v159);
    if ( v160 )
      break;
LABEL_251:
    if ( v180 )
    {
      if ( v159 <= 0 || (v180 = 2, v159 = (v184.m128i_i64[0] - sub_481D90()) / 1000000, v159 <= 0) )
      {
        if ( (*(int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v18 + 152LL))(v18, 0) <= 0 )
        {
          v121 = 12;
LABEL_282:
          sub_478720((__int64)v205);
          v168 = v192;
          if ( !v192 )
            goto LABEL_156;
          goto LABEL_283;
        }
        v180 = 2;
        v121 = 12;
      }
    }
  }
  if ( v160 == -1 )
  {
    v121 = 8;
    goto LABEL_282;
  }
  LODWORD(n[0]) = *(_DWORD *)(v181 + 20);
  v163 = n[0] & 0xFFFFFFF;
  if ( (n[0] & 0xFFFFFFF) == 2 )
    goto LABEL_310;
  if ( v163 == 4 )
  {
    if ( *(_DWORD *)(v181 + 4) == v191 )
    {
LABEL_310:
      sub_461BA0(v18, (unsigned int *)v181, 8u, si128, a8, a9, a10, v161, v162, a13, a14);
      v40 = -1;
      goto LABEL_259;
    }
    if ( v121 == 12 )
    {
LABEL_312:
      sub_461BA0(v18, (unsigned int *)v181, 0xAu, si128, a8, a9, a10, v161, v162, a13, a14);
      sub_4787B0(v181, 0);
      sub_4787B0(v185, 0);
      v190 = 0;
      v121 = 12;
      goto LABEL_259;
    }
    v164 = v28[4];
    v165 = *(__int64 (__fastcall **)(__int64, unsigned int, __int64, __int64))(*(_QWORD *)v18 + 464LL);
    if ( v165 == sub_453C40 )
      goto LABEL_249;
    goto LABEL_269;
  }
  if ( v121 == 12 )
    goto LABEL_312;
  v164 = v28[4];
  v165 = *(__int64 (__fastcall **)(__int64, unsigned int, __int64, __int64))(*(_QWORD *)v18 + 464LL);
  if ( v165 != sub_453C40 )
  {
LABEL_269:
    if ( (unsigned __int8)v165(v18, v191, v181, v164) )
      goto LABEL_258;
    LODWORD(n[0]) = *(_DWORD *)(v181 + 20);
    if ( (n[0] & 0xFFFFFFF) == 7 )
      goto LABEL_271;
    goto LABEL_249;
  }
  if ( v163 == 5 )
  {
    if ( v164 == *(_QWORD *)(v181 + 8) )
      goto LABEL_258;
    goto LABEL_249;
  }
  if ( v163 != 7 )
  {
LABEL_249:
    v121 = sub_461BA0(v18, (unsigned int *)v181, 0xAu, si128, a8, a9, a10, v161, v162, a13, a14);
    if ( v121 )
    {
      v121 = 7;
      goto LABEL_282;
    }
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v18 + 168LL))(v18, v181);
    sub_4787B0(v181, 0);
    goto LABEL_251;
  }
  if ( *(_QWORD *)(v181 + 32) != v164 && *(_QWORD *)(v181 + 8) != v164 )
  {
LABEL_271:
    if ( (a18 & 2) == 0 && a16 != v181 + 40 )
    {
      v166 = *(_QWORD *)(v181 + 48);
      if ( v166 > 1 )
      {
        v167 = *(const void **)(v181 + 40);
        if ( *(_QWORD *)(a16 + 16) < v166 )
          *(_QWORD *)a16 = sub_481540(a16, *(void **)a16, v166, 1u);
        *(_QWORD *)(a16 + 8) = v166;
        memmove(*(void **)a16, v167, v166 - 1);
        *(_BYTE *)(*(_QWORD *)a16 + v166 - 1) = 0;
      }
      else
      {
        *(_QWORD *)(a16 + 8) = 0;
      }
    }
    sub_4787B0(v185, 0);
    *(_BYTE *)(v18 + 216) = 1;
    sub_478720((__int64)v205);
    if ( v192 )
    {
      *(_QWORD *)&v193 = 0;
      j__free(v192);
    }
    goto LABEL_27;
  }
LABEL_258:
  sub_4787B0(v185, 0);
  v190 = 0;
LABEL_259:
  if ( v121 || v190 )
  {
    sub_478720((__int64)v205);
    v168 = v192;
    if ( !v192 )
    {
LABEL_284:
      if ( !v121 )
        goto LABEL_28;
      goto LABEL_156;
    }
LABEL_283:
    *(_QWORD *)&v193 = 0;
    j__free(v168);
    goto LABEL_284;
  }
  if ( a4 > 0
    && (a6[1] < (unsigned __int64)a4
     || a4 != (*(__int64 (__fastcall **)(__int64, unsigned __int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v18 + 296LL))(
                v18,
                v40,
                *a6,
                a4,
                0)) )
  {
    sub_478720((__int64)v205);
    if ( v192 )
    {
      v121 = 5;
      *(_QWORD *)&v193 = 0;
      j__free(v192);
      goto LABEL_156;
    }
    LODWORD(v186) = 5;
LABEL_314:
    v121 = (int)v186;
    goto LABEL_156;
  }
  if ( a15 && a15[1] )
  {
    v169 = *(_QWORD *)(v18 + 680);
    v194 = nullptr;
    v195 = 0;
    v170 = v169;
    if ( !v169 )
      v170 = *(_DWORD *)(v18 + 776);
    sub_4587A0((void **)&v194, v170);
    v171 = 0;
    if ( (*(int (__fastcall **)(__int64, _QWORD, __int64, char *, _QWORD))(*(_QWORD *)v18 + 224LL))(
           v18,
           v191,
           0xFFFFFFFFLL,
           v194,
           0) <= 0 )
    {
      sub_4584B0(&v194);
      sub_478720((__int64)v205);
      if ( v192 )
      {
        v121 = 1;
        *(_QWORD *)&v193 = 0;
        j__free(v192);
        goto LABEL_156;
      }
      goto LABEL_314;
    }
    while ( v171 < a15[1] )
    {
      v172 = (int *)(*a15 + 32 * v171);
      v173 = &v194[32 * *v172];
      v174 = v173 + 8;
      if ( *(int *)v173 >= -1 )
        v174 = *((const void **)v173 + 1);
      ++v171;
      memcpy(*((void **)v172 + 1), v174, *((_QWORD *)v172 + 2));
      v172[1] = 0;
    }
    sub_4584B0(&v194);
  }
  sub_478720((__int64)v205);
  v148 = v192;
  if ( !v192 )
    goto LABEL_28;
LABEL_205:
  *(_QWORD *)&v193 = 0;
  j__free(v148);
LABEL_28:
  sub_454620((void **)v198);
  if ( v202 >= -1 && src )
  {
    v204[0] = 0;
    j__free(src);
  }
  return v40;
}
// 4593AF: variable 'v99' is possibly undefined
// 4593AF: variable 'v100' is possibly undefined
// 4593BF: variable 'v102' is possibly undefined
// 45987A: variable 'v125' is possibly undefined
// 459885: variable 'v127' is possibly undefined
// 4599E1: variable 'v141' is possibly undefined
// 4599EC: variable 'v135' is possibly undefined
// 459C8F: variable 'v137' is possibly undefined
// 459FF8: variable 'v161' is possibly undefined
// 459FF8: variable 'v162' is possibly undefined
// 4050E0: using guessed type __int64 __fastcall std::_Rb_tree_insert_and_rebalance(_QWORD, _QWORD, _QWORD, _QWORD);
// 405450: using guessed type __int64 __fastcall std::_Rb_tree_increment(_QWORD);
// 405BD0: using guessed type __int64 __fastcall __memcpy_chk(_QWORD, _QWORD, _QWORD, _QWORD);
// 453BE0: using guessed type __int64 sub_453BE0();
// 48F510: using guessed type __int128 xmmword_48F510;
// 4C32C0: using guessed type char *off_4C32C0[13];
// 4C94E1: using guessed type char byte_4C94E1;
