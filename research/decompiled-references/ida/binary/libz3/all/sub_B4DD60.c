unsigned int *__fastcall sub_B4DD60(__int64 a1, unsigned int *a2, int a3, int a4, int a5, int a6)
{
  char **exception; // rbp
  char **v7; // r14
  __int16 v10; // dx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rbp
  unsigned int v16; // edx
  unsigned int v17; // eax
  unsigned int v18; // ebp
  __int64 v19; // rax
  unsigned int v20; // edi
  __int64 *v21; // rcx
  int v22; // edx
  __int64 *v23; // rsi
  __int64 v24; // rdx
  unsigned int *v25; // r8
  __int64 *i; // rax
  unsigned int *v27; // r15
  __int64 v28; // r13
  unsigned int v29; // eax
  __int64 v30; // rax
  unsigned int v31; // eax
  __int64 v32; // rdi
  __int64 v33; // r12
  __int64 v34; // r15
  char *v35; // r8
  __int64 v36; // rax
  __int64 v37; // rdx
  _QWORD *v38; // rsi
  __int64 v39; // r12
  _QWORD *v40; // rdx
  unsigned int v41; // eax
  __int64 v42; // rcx
  int v43; // eax
  __int64 *v44; // rcx
  __int64 v45; // rsi
  __int64 v46; // rdi
  bool v47; // zf
  _QWORD *v48; // rdx
  unsigned int v49; // eax
  __int64 v50; // rcx
  int v51; // eax
  __int64 *v52; // rcx
  unsigned int v53; // edx
  __m128i *v54; // r13
  unsigned int v55; // r8d
  __int64 v56; // rcx
  __m128i *v57; // r9
  unsigned int v58; // esi
  __m128i v59; // xmm0
  __int64 v60; // r8
  __m128i *v61; // rdi
  __m128i *v62; // rax
  __m128i *v63; // rcx
  unsigned int *v64; // rdx
  unsigned int *v65; // rax
  unsigned int *v66; // rax
  __int64 v67; // r12
  _QWORD *v68; // rdi
  unsigned __int64 v69; // rsi
  __int64 v70; // r10
  unsigned int v71; // ecx
  size_t v72; // rsi
  __int64 v73; // rax
  int v74; // ecx
  __int64 v75; // r12
  _QWORD *v76; // rdi
  unsigned __int64 v77; // rsi
  __int64 v78; // r10
  __int64 v79; // rax
  __int64 v80; // r15
  unsigned int v81; // edx
  __m128i *v82; // rbp
  unsigned int v83; // r10d
  __int64 v84; // r9
  unsigned int **v85; // r12
  unsigned int v86; // esi
  __m128i v87; // xmm0
  __int64 v88; // r10
  __m128i *v89; // rdi
  unsigned int **v90; // rax
  unsigned int **v91; // rcx
  unsigned int *v92; // rdx
  unsigned int *v93; // rax
  unsigned int v94; // r15d
  unsigned int v95; // ecx
  unsigned int *v96; // rax
  __int64 v97; // rcx
  __int64 v98; // rax
  int v99; // r10d
  __m128i *v100; // rdx
  __m128i *v101; // rax
  __m128i *v102; // rdi
  const __m128i *v103; // r15
  __int64 m128i_i64; // r11
  __int64 v105; // rdx
  __m128i *v106; // rsi
  __m128i *v107; // rdx
  unsigned __int64 v108; // rsi
  __int64 v109; // r10
  _QWORD *v110; // rdx
  unsigned __int64 v111; // rsi
  __int64 v112; // r10
  _QWORD *v113; // rdx
  __int64 v114; // rax
  int v115; // ecx
  __m128i *v116; // rdx
  __m128i *v117; // rax
  __m128i *v118; // rdi
  const __m128i *v119; // r13
  __int64 v120; // r8
  __int64 v121; // rdx
  __m128i *v122; // rsi
  __m128i *v123; // rdx
  __int64 v124; // [rsp+0h] [rbp-1D8h] BYREF
  __int64 v125; // [rsp+8h] [rbp-1D0h]
  __int64 v126; // [rsp+10h] [rbp-1C8h]
  int v127[2]; // [rsp+18h] [rbp-1C0h]
  __int64 *v128; // [rsp+20h] [rbp-1B8h]
  __int64 v129; // [rsp+28h] [rbp-1B0h]
  int v130; // [rsp+30h] [rbp-1A8h]
  int v131; // [rsp+34h] [rbp-1A4h]
  __m128i *v132; // [rsp+38h] [rbp-1A0h]
  int v133; // [rsp+40h] [rbp-198h]
  __int64 v134; // [rsp+48h] [rbp-190h]
  __int64 v135; // [rsp+50h] [rbp-188h] BYREF
  __int64 v136; // [rsp+58h] [rbp-180h]
  __int64 v137; // [rsp+60h] [rbp-178h] BYREF
  int v138; // [rsp+68h] [rbp-170h]
  int v139; // [rsp+70h] [rbp-168h]
  void *v140; // [rsp+78h] [rbp-160h]
  void *v141; // [rsp+80h] [rbp-158h]
  int v142[2]; // [rsp+88h] [rbp-150h]
  __int64 v143; // [rsp+90h] [rbp-148h] BYREF
  int v144; // [rsp+98h] [rbp-140h]
  int v145; // [rsp+A0h] [rbp-138h]
  int v146; // [rsp+A8h] [rbp-130h]
  int v147; // [rsp+B0h] [rbp-128h]
  int v148; // [rsp+B8h] [rbp-120h]
  int v149; // [rsp+C0h] [rbp-118h]
  int v150; // [rsp+C8h] [rbp-110h]
  int v151; // [rsp+D0h] [rbp-108h]
  int v152; // [rsp+D8h] [rbp-100h]
  int v153; // [rsp+E0h] [rbp-F8h]
  int v154; // [rsp+E8h] [rbp-F0h]
  int v155; // [rsp+F0h] [rbp-E8h]
  int v156; // [rsp+F8h] [rbp-E0h]
  int v157; // [rsp+100h] [rbp-D8h]
  void *v158; // [rsp+108h] [rbp-D0h]
  void *v159; // [rsp+110h] [rbp-C8h]
  __int64 v160; // [rsp+118h] [rbp-C0h]
  int v161[46]; // [rsp+120h] [rbp-B8h] BYREF

  v10 = *((_WORD *)a2 + 2);
  if ( v10 == 1 )
  {
    v16 = a2[4];
    v17 = *(_DWORD *)(a1 + 168);
    v14 = (__int64)a2;
    if ( v16 < v17 )
      return **(unsigned int ***)(*(_QWORD *)(*(_QWORD *)(a1 + 176) + 8LL * (v17 - 1 - v16)) + 8LL);
    return (unsigned int *)v14;
  }
  v11 = *(_QWORD *)(*(_QWORD *)a1 + 8656LL);
  if ( v11 )
  {
    v12 = *a2;
    if ( (unsigned int)v12 < *(_DWORD *)(v11 - 4) )
    {
      v13 = *(_QWORD *)(v11 + 8 * v12);
      if ( v13 )
        return **(unsigned int ***)(v13 + 8);
    }
  }
  if ( v10 )
    return a2;
  v18 = a2[6];
  if ( !v18 )
    return a2;
  v19 = *(unsigned int *)(a1 + 152);
  v20 = a2[3];
  v21 = *(__int64 **)(a1 + 144);
  v22 = v19 - 1;
  v19 *= 16;
  v23 = (__int64 *)((char *)v21 + v19);
  v24 = 16LL * (v20 & v22);
  v25 = (unsigned int *)((char *)v21 + v24);
  if ( v24 != v19 )
  {
    for ( i = (__int64 *)((char *)v21 + v24); v23 != i; i += 2 )
    {
      v24 = *i;
      if ( (unsigned __int64)*i > 1 )
      {
        if ( *(_DWORD *)(v24 + 12) == v20 && a2 == (unsigned int *)v24 )
          return (unsigned int *)i[1];
      }
      else if ( !v24 )
      {
        goto LABEL_18;
      }
    }
  }
  for ( ; v25 != (unsigned int *)v21; v21 += 2 )
  {
    v65 = (unsigned int *)*v21;
    if ( (unsigned __int64)*v21 > 1 )
    {
      if ( v65[3] == v20 && a2 == v65 )
      {
        i = v21;
        return (unsigned int *)i[1];
      }
    }
    else if ( !v65 )
    {
      break;
    }
  }
LABEL_18:
  LOBYTE(v125) = 1;
  v27 = a2;
  v126 = (__int64)&v143;
  v28 = 8LL * v18;
  v141 = &v143;
  *(_QWORD *)v127 = v161;
  *(_QWORD *)v142 = 0x1000000000LL;
  v160 = 0x1000000000LL;
  v159 = v161;
  v124 = (__int64)&a2[(unsigned __int64)v28 / 4];
  do
  {
    v21 = (__int64 *)sub_B4DD60(
                       a1,
                       *((_QWORD *)v27 + 4),
                       v24,
                       (int)v21,
                       (int)v25,
                       a6,
                       v124,
                       v125,
                       v126,
                       v127[0],
                       (int)v128,
                       v129,
                       v130,
                       (int)v132,
                       v133,
                       v134,
                       v135,
                       v136,
                       v137,
                       v138,
                       v139,
                       v140,
                       (int)v141,
                       v142[0],
                       v143,
                       v144,
                       v145,
                       v146,
                       v147,
                       v148,
                       v149,
                       v150,
                       v151,
                       v152,
                       v153,
                       v154,
                       v155,
                       v156,
                       v157,
                       v158);
    v29 = v142[0];
    if ( v142[0] >= (unsigned int)v142[1] )
    {
      v128 = v21;
      v67 = (unsigned int)(2 * v142[1]);
      v24 = sub_186B270(8 * v67);
      v29 = v142[0];
      v68 = v141;
      v21 = v128;
      if ( v142[0] )
      {
        if ( (unsigned int)(v142[0] - 1) <= 2 || (void *)v24 == (char *)v141 + 8 )
        {
          v108 = 0;
          v109 = 8LL * (unsigned int)v142[0];
          do
          {
            v25 = (unsigned int *)v68[v108 / 8];
            *(_QWORD *)(v24 + v108) = v25;
            v108 += 8LL;
          }
          while ( v109 != v108 );
        }
        else
        {
          v69 = 0;
          v70 = 16LL * ((unsigned int)v142[0] >> 1);
          do
          {
            *(__m128i *)(v24 + v69) = _mm_loadu_si128((const __m128i *)&v68[v69 / 8]);
            v69 += 16LL;
          }
          while ( v70 != v69 );
          if ( (v29 & 1) != 0 )
            *(_QWORD *)(v24 + 8LL * (v29 & 0xFFFFFFFE)) = v68[v29 & 0xFFFFFFFE];
        }
      }
      if ( v68 != (_QWORD *)v126 && v68 )
      {
        v129 = v24;
        v128 = v21;
        sub_186B220(v68);
        v29 = v142[0];
        v24 = v129;
        v21 = v128;
      }
      v141 = (void *)v24;
      v142[1] = v67;
    }
    else
    {
      v24 = (__int64)v141;
    }
    *(_QWORD *)(v24 + 8LL * v29) = v21;
    v142[0] = v29 + 1;
    v30 = *(_QWORD *)(*(_QWORD *)a1 + 8656LL);
    if ( v30
      && (v24 = *(unsigned int *)v21, (unsigned int)v24 < *(_DWORD *)(v30 - 4))
      && (v21 = *(__int64 **)(v30 + 8 * v24)) != nullptr )
    {
      v31 = v160;
      if ( (unsigned int)v160 >= HIDWORD(v160) )
      {
        v128 = v21;
        v75 = (unsigned int)(2 * HIDWORD(v160));
        v24 = sub_186B270(8 * v75);
        v31 = v160;
        v76 = v159;
        v21 = v128;
        if ( (_DWORD)v160 )
        {
          if ( (unsigned int)(v160 - 1) <= 2 || (void *)v24 == (char *)v159 + 8 )
          {
            v111 = 0;
            v112 = 8LL * (unsigned int)v160;
            do
            {
              v25 = (unsigned int *)v76[v111 / 8];
              *(_QWORD *)(v24 + v111) = v25;
              v111 += 8LL;
            }
            while ( v111 != v112 );
          }
          else
          {
            v77 = 0;
            v78 = 16LL * ((unsigned int)v160 >> 1);
            do
            {
              *(__m128i *)(v24 + v77) = _mm_loadu_si128((const __m128i *)&v76[v77 / 8]);
              v77 += 16LL;
            }
            while ( v77 != v78 );
            if ( (v31 & 1) != 0 )
              *(_QWORD *)(v24 + 8LL * (v31 & 0xFFFFFFFE)) = v76[v31 & 0xFFFFFFFE];
          }
        }
        if ( v76 != *(_QWORD **)v127 && v76 )
        {
          v129 = v24;
          v128 = v21;
          sub_186B220(v76);
          v31 = v160;
          v24 = v129;
          v21 = v128;
        }
        v159 = (void *)v24;
        HIDWORD(v160) = v75;
      }
      else
      {
        v24 = (__int64)v159;
      }
      *(_QWORD *)(v24 + 8LL * v31) = v21;
      LODWORD(v160) = v31 + 1;
    }
    else
    {
      LOBYTE(v125) = 0;
    }
    v27 += 2;
  }
  while ( (unsigned int *)v124 != v27 );
  if ( !(_BYTE)v125 || (v79 = sub_8E7DB0(*(_QWORD *)a1), (v80 = v79) == 0) )
  {
    v32 = *(_QWORD *)a1;
    v33 = *(_QWORD *)(a1 + 8);
    v34 = 0;
    v124 = (__int64)&v135;
    v35 = (char *)v141;
    do
    {
      v36 = *(_QWORD *)(v32 + 8656);
      if ( v36 )
      {
        v37 = **(unsigned int **)&v35[v34];
        if ( (unsigned int)v37 < *(_DWORD *)(v36 - 4) )
        {
          v38 = *(_QWORD **)(v36 + 8 * v37);
          if ( v38 )
          {
            v136 = v33;
            v135 = 0;
            if ( (unsigned __int8)sub_8EB880(v32, v38, v124) )
            {
              v39 = v135;
              *(_QWORD *)((char *)v141 + v34) = v135;
              if ( v39 )
                ++*(_DWORD *)(v39 + 8);
              v40 = *(_QWORD **)(a1 + 96);
              if ( v40 )
              {
                v41 = *((_DWORD *)v40 - 1);
                if ( v41 == *((_DWORD *)v40 - 2) )
                {
                  v71 = (3 * v41 + 1) >> 1;
                  v72 = 8 * v71 + 8;
                  if ( 8 * v41 + 8 >= (unsigned int)v72 || v41 >= v71 )
                  {
                    exception = (char **)__cxa_allocate_exception(0x28u);
                    sub_24ABB0(&v137, "Overflow encountered when expanding vector");
                    *exception = (char *)off_1C63128;
                    sub_2333C0(exception + 1, &v137);
                    sub_233E40((__int64)&v137);
                    __cxa_throw(
                      exception,
                      (struct type_info *)&`typeinfo for'default_exception,
                      (void (*)(void *))sub_230E50);
                  }
                  LODWORD(v125) = (3 * v41 + 1) >> 1;
                  v73 = sub_186B300(v40 - 1, v72);
                  v74 = v125;
                  v40 = (_QWORD *)(v73 + 8);
                  *(_QWORD *)(a1 + 96) = v73 + 8;
                  *(_DWORD *)v73 = v74;
                  LODWORD(v73) = *(_DWORD *)(v73 + 4);
                  v44 = &v40[(unsigned int)v73];
                  v43 = v73 + 1;
                }
                else
                {
                  v42 = v41;
                  v43 = v41 + 1;
                  v44 = &v40[v42];
                }
              }
              else
              {
                v110 = (_QWORD *)sub_186B270(0x18u);
                *v110 = 2;
                v43 = 1;
                v40 = v110 + 1;
                *(_QWORD *)(a1 + 96) = v40;
                v44 = v40;
              }
              *v44 = v39;
              *((_DWORD *)v40 - 1) = v43;
            }
            v45 = v135;
            if ( v135 )
            {
              v46 = v136;
              v47 = (*(_DWORD *)(v135 + 8))-- == 1;
              if ( v47 )
                sub_15D7BC0(v46, v45);
            }
            v32 = *(_QWORD *)a1;
            v35 = (char *)v141;
            v33 = *(_QWORD *)(a1 + 8);
          }
        }
      }
      v34 += 8;
    }
    while ( v28 != v34 );
    sub_14B6590((__int64)&v137, v124, v125, v126);
    v14 = v137;
    if ( v137 )
      ++*(_DWORD *)(v137 + 8);
    v48 = *(_QWORD **)(a1 + 96);
    if ( v48 )
    {
      v49 = *((_DWORD *)v48 - 1);
      if ( v49 == *((_DWORD *)v48 - 2) )
      {
        v94 = (3 * v49 + 1) >> 1;
        v95 = 8 * v94 + 8;
        if ( 8 * v49 + 8 >= v95 || v49 >= v94 )
        {
          v7 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(&v137, "Overflow encountered when expanding vector");
          *v7 = (char *)off_1C63128;
          sub_2333C0(v7 + 1, &v137);
          sub_233E40((__int64)&v137);
          __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v96 = (unsigned int *)sub_186B300(v48 - 1, v95);
        v97 = v96[1];
        v48 = v96 + 2;
        *v96 = v94;
        *(_QWORD *)(a1 + 96) = v96 + 2;
        LODWORD(v96) = v97;
        v52 = &v48[v97];
        v51 = (_DWORD)v96 + 1;
      }
      else
      {
        v50 = v49;
        v51 = v49 + 1;
        v52 = &v48[v50];
      }
    }
    else
    {
      v113 = (_QWORD *)sub_186B270(0x18u);
      *v113 = 2;
      v51 = 1;
      v48 = v113 + 1;
      *(_QWORD *)(a1 + 96) = v48;
      v52 = v48;
    }
    *v52 = v14;
    *((_DWORD *)v48 - 1) = v51;
    v53 = *(_DWORD *)(a1 + 152);
    if ( 3 * v53 < 4 * (*(_DWORD *)(a1 + 156) + *(_DWORD *)(a1 + 160)) )
    {
      LODWORD(v125) = 2 * v53;
      v124 = 32LL * v53;
      v98 = sub_186B270(v124);
      v56 = v124;
      v99 = v125;
      v54 = (__m128i *)v98;
      v100 = (__m128i *)v98;
      v101 = (__m128i *)(v124 + v98);
      if ( (_DWORD)v125 )
      {
        if ( (((_BYTE)v101 - (_BYTE)v54) & 0x10) == 0 || (v100 = v54 + 1, *v54 = 0, &v54[1] != v101) )
        {
          do
          {
            *v100 = 0;
            v100 += 2;
            v100[-1] = 0;
          }
          while ( v100 != v101 );
        }
      }
      v102 = *(__m128i **)(a1 + 144);
      v55 = v99 - 1;
      v57 = v101;
      v103 = v102;
      m128i_i64 = (__int64)v102[*(unsigned int *)(a1 + 152)].m128i_i64;
      if ( v102 != (__m128i *)m128i_i64 )
      {
        do
        {
          if ( v103->m128i_i64[0] > 1uLL )
          {
            v105 = 16LL * (*(_DWORD *)(v103->m128i_i64[0] + 12) & v55);
            v106 = &v54[(unsigned __int64)v105 / 0x10];
            if ( v56 == v105 )
            {
LABEL_148:
              if ( v54 == v106 )
              {
LABEL_164:
                v132 = v101;
                v131 = v99;
                v129 = (__int64)v101;
                v128 = (__int64 *)v56;
                LODWORD(v125) = v99 - 1;
                v124 = m128i_i64;
                sub_1872CE0("");
                sub_1873130(114, 213);
              }
              v107 = v54;
              while ( v107->m128i_i64[0] )
              {
                if ( v106 == ++v107 )
                  goto LABEL_164;
              }
            }
            else
            {
              v107 = &v54[(unsigned __int64)v105 / 0x10];
              while ( v107->m128i_i64[0] )
              {
                if ( v101 == ++v107 )
                  goto LABEL_148;
              }
            }
            *v107 = _mm_loadu_si128(v103);
          }
          ++v103;
        }
        while ( (const __m128i *)m128i_i64 != v103 );
        v102 = *(__m128i **)(a1 + 144);
      }
      if ( v102 )
      {
        LODWORD(v129) = v99;
        v128 = (__int64 *)v101;
        v125 = v56;
        LODWORD(v124) = v99 - 1;
        sub_186B220(v102);
        v99 = v129;
        v57 = (__m128i *)v128;
        v56 = v125;
        v55 = v124;
      }
      *(_QWORD *)(a1 + 144) = v54;
      *(_DWORD *)(a1 + 152) = v99;
      *(_DWORD *)(a1 + 160) = 0;
    }
    else
    {
      v54 = *(__m128i **)(a1 + 144);
      v55 = v53 - 1;
      v56 = 16LL * v53;
      v57 = (__m128i *)((char *)v54 + v56);
    }
    v58 = a2[3];
    v59 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a2, (__m128i)(unsigned __int64)v14);
    v60 = 16LL * (v58 & v55);
    v61 = &v54[(unsigned __int64)v60 / 0x10];
    if ( v60 != v56 )
    {
      v62 = &v54[(unsigned __int64)v60 / 0x10];
      v63 = nullptr;
      while ( 1 )
      {
        v64 = (unsigned int *)v62->m128i_i64[0];
        if ( v62->m128i_i64[0] > 1uLL )
        {
          if ( v64[3] == v58 && a2 == v64 )
          {
            *v62 = v59;
            goto LABEL_126;
          }
        }
        else
        {
          if ( !v64 )
          {
            if ( v63 )
              goto LABEL_158;
            v63 = v62;
            goto LABEL_159;
          }
          v63 = v62;
        }
        if ( ++v62 == v57 )
          goto LABEL_74;
      }
    }
    v63 = nullptr;
    while ( 1 )
    {
LABEL_74:
      if ( v61 == v54 )
      {
        sub_1872CE0("");
        sub_1873130(114, 405);
      }
      v66 = (unsigned int *)v54->m128i_i64[0];
      if ( v54->m128i_i64[0] > 1uLL )
      {
        if ( v66[3] == v58 && a2 == v66 )
        {
          *v54 = v59;
          goto LABEL_126;
        }
      }
      else
      {
        if ( !v66 )
        {
          if ( v63 )
LABEL_158:
            --*(_DWORD *)(a1 + 160);
          else
            v63 = v54;
LABEL_159:
          *v63 = v59;
          ++*(_DWORD *)(a1 + 156);
LABEL_126:
          if ( v14 )
          {
            v47 = (*(_DWORD *)(v14 + 8))-- == 1;
            if ( v47 )
              sub_15D7BC0(v33, v14);
          }
          goto LABEL_129;
        }
        v63 = v54;
      }
      ++v54;
    }
  }
  v81 = *(_DWORD *)(a1 + 152);
  v124 = **(_QWORD **)(v79 + 8);
  if ( 3 * v81 < 4 * (*(_DWORD *)(a1 + 156) + *(_DWORD *)(a1 + 160)) )
  {
    LODWORD(v128) = 2 * v81;
    v125 = 32LL * v81;
    v114 = sub_186B270(v125);
    v84 = v125;
    v115 = (int)v128;
    v82 = (__m128i *)v114;
    v116 = (__m128i *)v114;
    v117 = (__m128i *)(v125 + v114);
    if ( (_DWORD)v128 )
    {
      if ( (((_BYTE)v117 - (_BYTE)v82) & 0x10) == 0 || (v116 = v82 + 1, *v82 = 0, v117 != &v82[1]) )
      {
        do
        {
          *v116 = 0;
          v116 += 2;
          v116[-1] = 0;
        }
        while ( v117 != v116 );
      }
    }
    v118 = *(__m128i **)(a1 + 144);
    v83 = v115 - 1;
    v85 = (unsigned int **)v117;
    v119 = v118;
    v120 = (__int64)v118[*(unsigned int *)(a1 + 152)].m128i_i64;
    if ( v118 != (__m128i *)v120 )
    {
      do
      {
        if ( v119->m128i_i64[0] > 1uLL )
        {
          v121 = 16LL * (*(_DWORD *)(v119->m128i_i64[0] + 12) & v83);
          v122 = &v82[(unsigned __int64)v121 / 0x10];
          if ( v84 == v121 )
          {
LABEL_188:
            if ( v82 == v122 )
            {
LABEL_204:
              v132 = v117;
              v131 = v115;
              v129 = v84;
              LODWORD(v128) = v115 - 1;
              v125 = v120;
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v123 = v82;
            while ( v123->m128i_i64[0] )
            {
              if ( v122 == ++v123 )
                goto LABEL_204;
            }
          }
          else
          {
            v123 = &v82[(unsigned __int64)v121 / 0x10];
            while ( v123->m128i_i64[0] )
            {
              if ( v117 == ++v123 )
                goto LABEL_188;
            }
          }
          *v123 = _mm_loadu_si128(v119);
        }
        ++v119;
      }
      while ( (const __m128i *)v120 != v119 );
      v118 = *(__m128i **)(a1 + 144);
    }
    if ( v118 )
    {
      LODWORD(v129) = v115;
      v128 = (__int64 *)v84;
      LODWORD(v125) = v115 - 1;
      sub_186B220(v118);
      v115 = v129;
      v84 = (__int64)v128;
      v83 = v125;
    }
    *(_QWORD *)(a1 + 144) = v82;
    *(_DWORD *)(a1 + 152) = v115;
    *(_DWORD *)(a1 + 160) = 0;
  }
  else
  {
    v82 = *(__m128i **)(a1 + 144);
    v83 = v81 - 1;
    v84 = 16LL * v81;
    v85 = (unsigned int **)((char *)v82->m128i_i64 + v84);
  }
  v86 = a2[3];
  v87 = (__m128i)_mm_loadh_ps((const double *)&v124);
  v88 = 16LL * (v86 & v83);
  v89 = &v82[(unsigned __int64)v88 / 0x10];
  if ( v88 == v84 )
  {
    v91 = nullptr;
    while ( 1 )
    {
LABEL_118:
      if ( v89 == v82 )
      {
        sub_1872CE0("");
        sub_1873130(114, 405);
      }
      v93 = (unsigned int *)v82->m128i_i64[0];
      if ( v82->m128i_i64[0] > 1uLL )
      {
        if ( v93[3] == v86 && a2 == v93 )
        {
          *v82 = v87;
          goto LABEL_173;
        }
      }
      else
      {
        if ( !v93 )
        {
          if ( v91 )
          {
            --*(_DWORD *)(a1 + 160);
            v82 = (__m128i *)v91;
          }
          *v82 = v87;
          ++*(_DWORD *)(a1 + 156);
          goto LABEL_173;
        }
        v91 = (unsigned int **)v82;
      }
      ++v82;
    }
  }
  v90 = (unsigned int **)&v82[(unsigned __int64)v88 / 0x10];
  v91 = nullptr;
  while ( 1 )
  {
    v92 = *v90;
    if ( (unsigned __int64)*v90 <= 1 )
      break;
    if ( v92[3] == v86 && a2 == v92 )
    {
      *(__m128i *)v90 = v87;
      goto LABEL_173;
    }
LABEL_111:
    v90 += 2;
    if ( v90 == v85 )
      goto LABEL_118;
  }
  if ( v92 )
  {
    v91 = v90;
    goto LABEL_111;
  }
  if ( v91 )
  {
    --*(_DWORD *)(a1 + 160);
    v90 = v91;
  }
  *(__m128i *)v90 = v87;
  ++*(_DWORD *)(a1 + 156);
LABEL_173:
  v14 = **(_QWORD **)(v80 + 8);
LABEL_129:
  if ( v159 != *(void **)v127 && v159 )
    sub_186B220(v159);
  if ( v141 && v141 != (void *)v126 )
    sub_186B220(v141);
  return (unsigned int *)v14;
}

