unsigned __int64 __fastcall sub_5574C0(
        __int64 a1,
        __int64 *a2,
        int *a3,
        double a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  __m128 v11; // xmm0
  __int64 *v12; // rbx
  bool v13; // zf
  __int64 v14; // rdi
  __int64 v15; // r14
  __int64 v16; // r13
  _QWORD *v17; // rbx
  __int64 v18; // rdi
  __int64 v19; // rcx
  __int64 v20; // r15
  __int64 i; // r12
  __int64 *v22; // rdx
  __int64 v23; // rdi
  __int64 v24; // rdi
  __int64 v25; // rdi
  __int64 v26; // r14
  __int64 v27; // r14
  __int64 v28; // rdi
  __int64 v29; // rdi
  __int64 *v30; // r12
  __int64 v31; // rcx
  __int64 v32; // r14
  __int64 v33; // r13
  _QWORD *v34; // rbx
  __int64 v35; // rdi
  __int64 v36; // r15
  __int64 j; // r12
  __int64 *v38; // rcx
  __int64 v39; // rdi
  __int64 v40; // rdi
  __int64 v41; // rdi
  __int64 v42; // r14
  __int64 v43; // r14
  __int64 v44; // rdi
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  char v49; // r12
  __m128 v50; // xmm4
  __m128 v51; // xmm5
  unsigned __int64 v52; // r15
  unsigned __int64 v53; // rdx
  bool v54; // r15
  int v55; // r14d
  int v56; // r9d
  int v57; // r8d
  __int64 v58; // rcx
  __int64 v59; // rax
  __int64 v60; // rbx
  bool v61; // bl
  __int64 v62; // rdx
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // r9
  __m128 v67; // xmm4
  __m128 v68; // xmm5
  const char *v69; // rsi
  unsigned __int64 v71; // rsi
  __int64 v72; // rdi
  unsigned __int64 v73; // rax
  __int64 k; // rcx
  __int64 m; // rax
  __int64 v76; // rax
  const char *v77; // rsi
  __int64 *v78; // rdi
  __int64 v79; // rax
  __int64 v80; // r8
  __int64 v81; // r9
  __m128 v82; // xmm4
  __m128 v83; // xmm5
  __int64 v84; // rcx
  __int64 v85; // r12
  unsigned int *v86; // r14
  __int64 v87; // rax
  char *v88; // rsi
  signed __int64 v89; // rdx
  char *v90; // rax
  char *v91; // r15
  unsigned __int64 v92; // r13
  size_t v93; // r8
  unsigned __int64 v94; // r13
  void *v95; // rcx
  __int64 v96; // rdi
  __m128i si128; // xmm0
  unsigned __int64 v98; // r13
  __int64 v99; // rcx
  __m128i v100; // xmm0
  const char *v101; // rsi
  const char *jj; // rbx
  __int64 v103; // rdi
  size_t v104; // rax
  unsigned __int64 v105; // r13
  const void *v106; // r14
  void *v107; // rax
  __int64 v108; // rax
  __int64 *v109; // rdi
  unsigned __int64 v110; // r12
  __int64 v111; // rsi
  unsigned __int64 v112; // r12
  unsigned __int64 v113; // r12
  __int64 v114; // rsi
  __int64 v115; // rcx
  __int64 v116; // rax
  __int64 v117; // rdx
  int v118; // r14d
  double v119; // xmm0_8
  __int64 v120; // rax
  __int64 v121; // r13
  __int64 *v122; // r8
  int v123; // r9d
  double v124; // xmm0_8
  __int64 *v125; // r8
  double v126; // xmm0_8
  int v127; // r11d
  const char *v128; // rsi
  __int64 v129; // rax
  __int64 v130; // rbx
  unsigned __int64 v131; // rsi
  __int64 v132; // rax
  const char *v133; // rsi
  __int64 v134; // r12
  __int64 v135; // r13
  __m128i v136; // xmm0
  __int64 v137; // rdi
  __int64 v138; // r13
  __m128i v139; // xmm0
  __int64 v140; // rdi
  size_t v141; // rax
  __m128i v142; // xmm0
  __int64 v143; // rdx
  __int64 v144; // r15
  __int64 *v145; // rax
  __int64 v146; // rbx
  __int64 *v147; // r13
  __int64 *v148; // rcx
  __int64 v149; // rdi
  __int64 v150; // r13
  __m128i v151; // xmm1
  __int64 v152; // rdi
  __int64 v153; // rax
  unsigned __int64 v154; // r14
  unsigned __int64 v155; // rax
  __int64 v156; // rsi
  unsigned __int64 v157; // r14
  unsigned __int64 v158; // rsi
  __int64 v159; // rdx
  __int64 v160; // rsi
  const void *v161; // r13
  void *v162; // rax
  __int64 v163; // r15
  const void *v164; // rbx
  void *v165; // rax
  __int64 v166; // r14
  const void *v167; // r13
  void *v168; // rax
  __int64 v169; // r15
  void *v170; // rax
  size_t v171; // r8
  __int64 ii; // rcx
  __int64 v173; // rdx
  __int64 v174; // rsi
  void *v175; // rax
  size_t v176; // rdx
  void *v177; // rax
  char v178; // r12
  __int64 v179; // rsi
  __int64 v180; // rax
  __int64 v181; // [rsp-10h] [rbp-160h]
  __int64 v182; // [rsp-8h] [rbp-158h]
  char v183; // [rsp+0h] [rbp-150h]
  __int64 v184; // [rsp+8h] [rbp-148h]
  __int64 *v185; // [rsp+18h] [rbp-138h]
  _QWORD *v186; // [rsp+18h] [rbp-138h]
  size_t v187[2]; // [rsp+20h] [rbp-130h] BYREF
  size_t n[2]; // [rsp+30h] [rbp-120h] BYREF
  unsigned __int64 v189; // [rsp+40h] [rbp-110h]
  unsigned __int64 v190; // [rsp+48h] [rbp-108h]
  __int64 v191; // [rsp+50h] [rbp-100h]
  __int64 *v192; // [rsp+58h] [rbp-F8h]
  __int64 *v193; // [rsp+60h] [rbp-F0h]
  int *v194; // [rsp+68h] [rbp-E8h]
  __int64 v195; // [rsp+70h] [rbp-E0h]
  __int64 v196; // [rsp+78h] [rbp-D8h]
  const char *v197; // [rsp+80h] [rbp-D0h] BYREF
  __int128 v198; // [rsp+88h] [rbp-C8h]
  unsigned __int64 v199; // [rsp+A0h] [rbp-B0h] BYREF
  __int128 v200; // [rsp+A8h] [rbp-A8h]
  __int64 v201; // [rsp+C0h] [rbp-90h] BYREF
  __int128 v202; // [rsp+C8h] [rbp-88h]
  int v203; // [rsp+DCh] [rbp-74h]
  __int16 v204; // [rsp+E0h] [rbp-70h]
  int v205; // [rsp+E2h] [rbp-6Eh]
  __int16 v206; // [rsp+E6h] [rbp-6Ah]
  int v207; // [rsp+E8h] [rbp-68h]
  __int16 v208; // [rsp+ECh] [rbp-64h]
  int v209; // [rsp+EEh] [rbp-62h]
  __int16 v210; // [rsp+F2h] [rbp-5Eh]
  int v211; // [rsp+F4h] [rbp-5Ch]
  __int16 v212; // [rsp+F8h] [rbp-58h]
  int v213; // [rsp+FAh] [rbp-56h]
  __int16 v214; // [rsp+FEh] [rbp-52h]
  int v215; // [rsp+100h] [rbp-50h] BYREF
  __int16 v216; // [rsp+104h] [rbp-4Ch]
  __int64 v217; // [rsp+108h] [rbp-48h]
  __int64 v218; // [rsp+110h] [rbp-40h]
  unsigned __int64 v219; // [rsp+118h] [rbp-38h]

  v11 = 0;
  v12 = a2;
  v196 = a1;
  v194 = a3;
  v219 = __readfsqword(0x28u);
  v13 = *((_BYTE *)a2 + 32) == 0;
  v198 = 0;
  v197 = nullptr;
  if ( v13 )
  {
    if ( (unsigned __int64)a2[6] <= 1 )
      goto LABEL_3;
  }
  else if ( (unsigned __int64)a2[1] <= 1 )
  {
    goto LABEL_3;
  }
  a2 = (__int64 *)&v197;
  if ( (unsigned int)sub_555410((__int64)v12, (__int64 *)&v197) )
  {
    v69 = &s1;
    if ( (_QWORD)v198 )
      v69 = v197;
    sub_169630(
      (int)"AUTOHIDE NONE\n%s",
      (__int64)v69,
      v63,
      v64,
      v65,
      v66,
      (__m128)0LL,
      a5,
      a6,
      a7,
      v67,
      v68,
      a10,
      a11,
      v183);
    if ( v197 )
    {
      *(_QWORD *)&v198 = 0;
      qfree(v197, v69);
    }
    return v219 - __readfsqword(0x28u);
  }
LABEL_3:
  v14 = *(_QWORD *)(v196 + 544);
  if ( v14 )
  {
    if ( *(_QWORD *)(v196 + 552) )
    {
      v195 = *(_QWORD *)(v196 + 552);
      v15 = 0;
      v16 = 0;
      v193 = v12;
      do
      {
        v17 = (_QWORD *)(v14 + v15);
        v18 = *(_QWORD *)(v14 + v15 + 128);
        if ( v18 )
        {
          v17[17] = 0;
          qfree(v18, (const char *)a2);
        }
        v19 = v17[10];
        if ( v19 )
        {
          v20 = v17[11];
          if ( v20 )
          {
            for ( i = 0; i != v20; ++i )
            {
              v22 = (__int64 *)(v19 + 24 * i);
              v23 = *v22;
              if ( *v22 )
              {
                v22[1] = 0;
                qfree(v23, (const char *)a2);
                v19 = v17[10];
              }
            }
          }
          v17[11] = 0;
          qfree(v19, (const char *)a2);
        }
        v24 = v17[7];
        if ( v24 )
        {
          v17[8] = 0;
          qfree(v24, (const char *)a2);
        }
        v25 = v17[4];
        if ( v25 )
        {
          v17[5] = 0;
          qfree(v25, (const char *)a2);
        }
        ++v16;
        v15 += 152;
        v14 = *(_QWORD *)(v196 + 544);
      }
      while ( v195 != v16 );
      v12 = v193;
    }
    v26 = v196;
    *(_QWORD *)(v196 + 552) = 0;
    *(double *)v11.m128_u64 = qfree(v14, (const char *)a2);
    *(_QWORD *)(v26 + 544) = 0;
    *(_QWORD *)(v26 + 560) = 0;
  }
  v27 = v196;
  v28 = *(_QWORD *)(v196 + 568);
  if ( v28 )
  {
    *(_QWORD *)(v196 + 576) = 0;
    *(double *)v11.m128_u64 = qfree(v28, (const char *)a2);
    *(_QWORD *)(v27 + 568) = 0;
    *(_QWORD *)(v27 + 584) = 0;
  }
  v29 = *(_QWORD *)(v196 + 816);
  v30 = (__int64 *)(v196 + 816);
  if ( v29 )
  {
    v31 = *(_QWORD *)(v196 + 824);
    if ( v31 )
    {
      v193 = (__int64 *)(v196 + 816);
      v32 = 0;
      v33 = 0;
      v195 = v31;
      v192 = v12;
      do
      {
        v34 = (_QWORD *)(v29 + v32);
        v35 = *(_QWORD *)(v29 + v32 + 128);
        if ( v35 )
        {
          v34[17] = 0;
          qfree(v35, (const char *)a2);
        }
        a2 = (__int64 *)v34[10];
        if ( a2 )
        {
          v36 = v34[11];
          if ( v36 )
          {
            for ( j = 0; j != v36; ++j )
            {
              v38 = &a2[3 * j];
              v39 = *v38;
              if ( *v38 )
              {
                v38[1] = 0;
                qfree(v39, (const char *)a2);
                a2 = (__int64 *)v34[10];
              }
            }
          }
          v34[11] = 0;
          qfree(a2, (const char *)a2);
        }
        v40 = v34[7];
        if ( v40 )
        {
          v34[8] = 0;
          qfree(v40, (const char *)a2);
        }
        v41 = v34[4];
        if ( v41 )
        {
          v34[5] = 0;
          qfree(v41, (const char *)a2);
        }
        ++v33;
        v32 += 152;
        v29 = *(_QWORD *)(v196 + 816);
      }
      while ( v195 != v33 );
      v30 = v193;
      v12 = v192;
    }
    v42 = v196;
    *(_QWORD *)(v196 + 824) = 0;
    *(double *)v11.m128_u64 = qfree(v29, (const char *)a2);
    *(_QWORD *)(v42 + 816) = 0;
    *(_QWORD *)(v42 + 832) = 0;
  }
  v43 = v196;
  v44 = *(_QWORD *)(v196 + 840);
  if ( v44 )
  {
    *(_QWORD *)(v196 + 848) = 0;
    *(double *)v11.m128_u64 = qfree(v44, (const char *)a2);
    *(_QWORD *)(v43 + 840) = 0;
    *(_QWORD *)(v43 + 856) = 0;
  }
  v215 = 0;
  v216 = 0;
  v217 = 0x100000001LL;
  v218 = 0;
  v49 = (*(__int64 (__fastcall **)(_QWORD, __int64 *, int *, __int64, const char **))(**(_QWORD **)(v196 + 256) + 56LL))(
          *(_QWORD *)(v196 + 256),
          v30,
          &v215,
          1,
          &v197);
  if ( !v49 && (unsigned __int64)v198 > 1 )
  {
    v77 = v197;
    sub_169630(
      (int)"AUTOHIDE NONE\nCould not load borrowed licenses: %s",
      (__int64)v197,
      v45,
      v46,
      v47,
      v48,
      v11,
      a5,
      a6,
      a7,
      v50,
      v51,
      a10,
      a11,
      v183);
    if ( v197 )
    {
      *(_QWORD *)&v198 = 0;
      qfree(v197, v77);
      v197 = nullptr;
      *((_QWORD *)&v198 + 1) = 0;
    }
  }
  v201 = -1;
  v52 = *(_QWORD *)(v196 + 824);
  v53 = *(_QWORD *)(v196 + 848);
  if ( v52 >= v53 )
  {
    if ( v53 >= v52 )
      goto LABEL_49;
    v71 = *(_QWORD *)(v196 + 840);
    v72 = v196 + 840;
    v73 = *(_QWORD *)(v196 + 856);
    if ( (unsigned __int64)&v201 < v71 || (unsigned __int64)&v201 >= v71 + 8 * v73 )
    {
      if ( v73 < v52 )
      {
        v71 = qvector_reserve(v72, v71, *(_QWORD *)(v196 + 824), 8);
        v53 = *(_QWORD *)(v196 + 848);
        *(_QWORD *)(v196 + 840) = v71;
        if ( v53 >= v52 )
          goto LABEL_75;
      }
      for ( k = v196; ; v71 = *(_QWORD *)(k + 840) )
      {
        *(_QWORD *)(v71 + 8 * v53++) = v201;
        m = k;
        if ( v52 == v53 )
          break;
      }
    }
    else
    {
      if ( v73 < v52 )
      {
        v71 = qvector_reserve(v72, v71, *(_QWORD *)(v196 + 824), 8);
        v53 = *(_QWORD *)(v196 + 848);
        *(_QWORD *)(v196 + 840) = v71;
        if ( v53 >= v52 )
          goto LABEL_75;
      }
      for ( m = v196; ; v71 = *(_QWORD *)(m + 840) )
      {
        *(_QWORD *)(v71 + 8 * v53++) = -1;
        if ( v52 == v53 )
          break;
      }
    }
    v196 = m;
LABEL_75:
    v76 = v196;
    *(_QWORD *)(v196 + 848) = v52;
    v52 = *(_QWORD *)(v76 + 824);
    goto LABEL_49;
  }
  *(_QWORD *)(v196 + 848) = v52;
LABEL_49:
  v54 = v52 != 0;
  *(double *)v11.m128_u64 = callui(203, 8, v196, 8, v54, v48);
  *(_BYTE *)(v196 + 1008) = v54;
  if ( *((_BYTE *)v12 + 32) )
  {
    if ( (unsigned __int64)v12[1] <= 1 )
      goto LABEL_51;
  }
  else if ( (unsigned __int64)v12[6] <= 1 )
  {
    goto LABEL_51;
  }
  v78 = *(__int64 **)(v196 + 256);
  v193 = (__int64 *)(v196 + 544);
  v79 = *v78;
  v192 = (__int64 *)(v196 + 568);
  if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, __int64, __int64, __int64 *, int *, _QWORD, double, const char **))(v79 + 64))(
          v78,
          v196 + 544,
          v196 + 568,
          v12,
          &v215,
          0,
          *(double *)v11.m128_u64,
          &v197) )
  {
    if ( (unsigned __int64)v198 > 1 )
    {
      v128 = v197;
      sub_169630(
        (int)"AUTOHIDE NONE\nCould not load licenses: %s",
        (__int64)v197,
        v181,
        v182,
        v80,
        v81,
        v11,
        a5,
        a6,
        a7,
        v82,
        v83,
        a10,
        a11,
        v183);
      if ( v197 )
      {
        *(_QWORD *)&v198 = 0;
        qfree(v197, v128);
        v197 = nullptr;
        *((_QWORD *)&v198 + 1) = 0;
      }
    }
    if ( v49 )
      goto LABEL_119;
    goto LABEL_51;
  }
  if ( !v49 )
    goto LABEL_119;
  v189 = *(_QWORD *)(v196 + 552);
  if ( !v189 )
  {
    sub_556F80(v193, 0);
    v155 = *(_QWORD *)(v196 + 576);
    goto LABEL_241;
  }
  v191 = 0;
  v195 = 0;
  v190 = 0;
  do
  {
    v84 = *(_QWORD *)(v196 + 544);
    v85 = *(_QWORD *)(v196 + 816);
    v86 = (unsigned int *)(v84 + v191);
    v87 = 152LL * *(_QWORD *)(v196 + 824);
    v88 = (char *)(v85 + v87);
    v89 = 0x86BCA1AF286BCA1BLL * (v87 >> 3);
    if ( v89 >> 2 <= 0 )
    {
      v90 = *(char **)(v196 + 816);
    }
    else
    {
      v90 = *(char **)(v196 + 816);
      v89 = v85 + 608 * (v89 >> 2);
      do
      {
        if ( *(_DWORD *)v90 == *v86 && *((_WORD *)v90 + 2) == *((_WORD *)v86 + 2) )
        {
          v91 = v90;
          goto LABEL_92;
        }
        v91 = v90 + 152;
        if ( *((_DWORD *)v90 + 38) == *v86 && *((_WORD *)v90 + 78) == *((_WORD *)v86 + 2) )
          goto LABEL_92;
        v91 = v90 + 304;
        if ( *((_DWORD *)v90 + 76) == *v86 && *((_WORD *)v90 + 154) == *((_WORD *)v86 + 2) )
          goto LABEL_92;
        v91 = v90 + 456;
        if ( *((_DWORD *)v90 + 114) == *v86 && *((_WORD *)v90 + 230) == *((_WORD *)v86 + 2) )
          goto LABEL_92;
        v90 += 608;
      }
      while ( v90 != (char *)v89 );
      v89 = 0x86BCA1AF286BCA1BLL * ((v88 - v90) >> 3);
    }
    if ( v89 == 2 )
      goto LABEL_234;
    if ( v89 != 3 )
    {
      if ( v89 != 1 )
        goto LABEL_174;
      goto LABEL_214;
    }
    if ( *(_DWORD *)v90 != *v86 || (v89 = *((unsigned __int16 *)v86 + 2), *((_WORD *)v90 + 2) != (_WORD)v89) )
    {
      v90 += 152;
LABEL_234:
      if ( *(_DWORD *)v90 != *v86 || (v89 = *((unsigned __int16 *)v86 + 2), *((_WORD *)v90 + 2) != (_WORD)v89) )
      {
        v90 += 152;
LABEL_214:
        v89 = *v86;
        if ( *(_DWORD *)v90 != (_DWORD)v89 )
          goto LABEL_174;
        v89 = *((unsigned __int16 *)v86 + 2);
        if ( *((_WORD *)v90 + 2) != (_WORD)v89 )
          goto LABEL_174;
      }
    }
    v91 = v90;
LABEL_92:
    if ( v88 != v91 )
    {
      *(_DWORD *)v91 = *v86;
      *((_WORD *)v91 + 2) = *((_WORD *)v86 + 2);
      *((_DWORD *)v91 + 2) = v86[2];
      *((_DWORD *)v91 + 3) = v86[3];
      *((_DWORD *)v91 + 4) = v86[4];
      *((_DWORD *)v91 + 5) = v86[5];
      *((_QWORD *)v91 + 3) = *((_QWORD *)v86 + 3);
      if ( v91 + 32 != (char *)(v86 + 8) )
      {
        v92 = *((_QWORD *)v86 + 5);
        if ( v92 && (v93 = v92 - 1, v92 != 1) )
        {
          n[0] = *((_QWORD *)v86 + 4);
          v170 = *((void **)v91 + 4);
          if ( *((_QWORD *)v91 + 6) < v92 )
          {
            v179 = *((_QWORD *)v91 + 4);
            v187[0] = v92 - 1;
            v170 = (void *)qvector_reserve(v91 + 32, v179, v92, 1);
            *((_QWORD *)v91 + 4) = v170;
            v93 = v187[0];
          }
          *((_QWORD *)v91 + 5) = v92;
          v88 = (char *)n[0];
          memmove(v170, (const void *)n[0], v93);
          *(_BYTE *)(*((_QWORD *)v91 + 4) + v92 - 1) = 0;
        }
        else
        {
          *((_QWORD *)v91 + 5) = 0;
        }
      }
      v94 = *((_QWORD *)v86 + 8);
      v95 = nullptr;
      if ( v94 )
      {
        n[0] = 40 * v94;
        v177 = (void *)qalloc_or_throw(40 * v94);
        v88 = *((char **)v86 + 7);
        v95 = memcpy(v177, v88, n[0]);
      }
      v96 = *((_QWORD *)v91 + 7);
      si128 = _mm_unpacklo_epi64((__m128i)v94, (__m128i)v94);
      if ( v96 )
      {
        *((_QWORD *)v91 + 8) = 0;
        n[0] = (size_t)v95;
        *(__m128i *)v187 = si128;
        qfree(v96, v88, v89);
        si128 = _mm_load_si128((const __m128i *)v187);
        v95 = (void *)n[0];
      }
      *((_QWORD *)v91 + 7) = v95;
      *((__m128i *)v91 + 4) = si128;
      v98 = *((_QWORD *)v86 + 11);
      n[0] = 0;
      if ( v98 )
      {
        n[0] = qalloc_or_throw(24 * v98);
        v171 = n[0];
        for ( ii = 0; ii != v98; ++ii )
        {
          v173 = *((_QWORD *)v86 + 10);
          *(_QWORD *)v171 = 0;
          *(_OWORD *)(v171 + 8) = 0;
          v174 = v173 + 24 * ii;
          v89 = *(_QWORD *)(v174 + 8);
          if ( v89 )
          {
            v186 = (_QWORD *)v171;
            v184 = ii;
            v187[0] = *(_QWORD *)(v174 + 8);
            v175 = (void *)qalloc_or_throw(v187[0]);
            v176 = v187[0];
            v186[2] = v187[0];
            *v186 = v175;
            memcpy(v175, *(const void **)v174, v176);
            v89 = v187[0];
            v171 = (size_t)v186;
            ii = v184;
            v186[1] = v187[0];
          }
          v171 += 24LL;
        }
      }
      v99 = *((_QWORD *)v91 + 10);
      v100 = _mm_unpacklo_epi64((__m128i)v98, (__m128i)v98);
      if ( v99 )
      {
        v101 = *((const char **)v91 + 11);
        if ( v101 )
        {
          v185 = v12;
          *(__m128i *)v187 = v100;
          for ( jj = nullptr; jj != v101; ++jj )
          {
            v89 = v99 + 24LL * (_QWORD)jj;
            v103 = *(_QWORD *)v89;
            if ( *(_QWORD *)v89 )
            {
              *(_QWORD *)(v89 + 8) = 0;
              qfree(v103, v101);
              v99 = *((_QWORD *)v91 + 10);
            }
          }
          v100 = _mm_load_si128((const __m128i *)v187);
          v12 = v185;
        }
        *((_QWORD *)v91 + 11) = 0;
        *(__m128i *)v187 = v100;
        qfree(v99, v101, v89);
        v100 = _mm_load_si128((const __m128i *)v187);
      }
      v104 = n[0];
      *(__m128i *)(v91 + 88) = v100;
      *((_QWORD *)v91 + 10) = v104;
      *((_QWORD *)v91 + 13) = *((_QWORD *)v86 + 13);
      *((_QWORD *)v91 + 14) = *((_QWORD *)v86 + 14);
      *((_QWORD *)v91 + 15) = *((_QWORD *)v86 + 15);
      if ( v91 + 128 != (char *)(v86 + 32) )
      {
        v105 = *((_QWORD *)v86 + 17);
        if ( !v105 || (n[0] = v105 - 1, v105 == 1) )
        {
          *((_QWORD *)v91 + 17) = 0;
        }
        else
        {
          v106 = *((const void **)v86 + 16);
          v107 = *((void **)v91 + 16);
          if ( *((_QWORD *)v91 + 18) < v105 )
          {
            v107 = (void *)qvector_reserve(v91 + 128, *((_QWORD *)v91 + 16), v105, 1);
            *((_QWORD *)v91 + 16) = v107;
          }
          *((_QWORD *)v91 + 17) = v105;
          memmove(v107, v106, n[0]);
          *(_BYTE *)(*((_QWORD *)v91 + 16) + v105 - 1) = 0;
        }
      }
      *(_QWORD *)(*(_QWORD *)(v196 + 840) + 0x35E50D79435E50D8LL * ((__int64)&v91[-v85] >> 3)) = *(_QWORD *)(*(_QWORD *)(v196 + 568) + 8 * v195);
      goto LABEL_191;
    }
LABEL_174:
    v133 = (const char *)v190;
    if ( v190 != v195 )
    {
      v134 = v84 + 152 * v190;
      *(_DWORD *)v134 = *v86;
      *(_WORD *)(v134 + 4) = *((_WORD *)v86 + 2);
      *(_DWORD *)(v134 + 8) = v86[2];
      *(_DWORD *)(v134 + 12) = v86[3];
      *(_DWORD *)(v134 + 16) = v86[4];
      *(_DWORD *)(v134 + 20) = v86[5];
      *(_QWORD *)(v134 + 24) = *((_QWORD *)v86 + 3);
      v135 = *((_QWORD *)v86 + 4);
      v136 = _mm_loadu_si128((const __m128i *)(v86 + 10));
      *((_QWORD *)v86 + 4) = 0;
      *(_OWORD *)(v86 + 10) = 0;
      v137 = *(_QWORD *)(v134 + 32);
      if ( v137 )
      {
        *(_QWORD *)(v134 + 40) = 0;
        *(__m128i *)n = v136;
        qfree(v137, v133, v89);
        v136 = _mm_load_si128((const __m128i *)n);
      }
      *(_QWORD *)(v134 + 32) = v135;
      *(__m128i *)(v134 + 40) = v136;
      v138 = *((_QWORD *)v86 + 7);
      v139 = _mm_loadu_si128((const __m128i *)v86 + 4);
      *((_QWORD *)v86 + 7) = 0;
      *((_OWORD *)v86 + 4) = 0;
      v140 = *(_QWORD *)(v134 + 56);
      if ( v140 )
      {
        *(_QWORD *)(v134 + 64) = 0;
        *(__m128i *)n = v139;
        qfree(v140, v133, v89);
        v139 = _mm_load_si128((const __m128i *)n);
      }
      *(_QWORD *)(v134 + 56) = v138;
      *(__m128i *)(v134 + 64) = v139;
      v141 = *((_QWORD *)v86 + 10);
      v142 = _mm_loadu_si128((const __m128i *)(v86 + 22));
      *((_QWORD *)v86 + 10) = 0;
      *(_OWORD *)(v86 + 22) = 0;
      v143 = *(_QWORD *)(v134 + 80);
      if ( v143 )
      {
        v144 = *(_QWORD *)(v134 + 88);
        if ( v144 )
        {
          n[0] = v141;
          v145 = v12;
          *(__m128i *)v187 = v142;
          v146 = 0;
          v147 = v145;
          do
          {
            v148 = (__int64 *)(v143 + 24 * v146);
            v149 = *v148;
            if ( *v148 )
            {
              v148[1] = 0;
              qfree(v149, v133);
              v143 = *(_QWORD *)(v134 + 80);
            }
            ++v146;
          }
          while ( v144 != v146 );
          v141 = n[0];
          v142 = _mm_load_si128((const __m128i *)v187);
          v12 = v147;
        }
        *(_QWORD *)(v134 + 88) = 0;
        n[0] = v141;
        *(__m128i *)v187 = v142;
        qfree(v143, v133);
        v142 = _mm_load_si128((const __m128i *)v187);
        v141 = n[0];
      }
      *(__m128i *)(v134 + 88) = v142;
      *(_QWORD *)(v134 + 80) = v141;
      *(_QWORD *)(v134 + 104) = *((_QWORD *)v86 + 13);
      *(_QWORD *)(v134 + 112) = *((_QWORD *)v86 + 14);
      *(_QWORD *)(v134 + 120) = *((_QWORD *)v86 + 15);
      v150 = *((_QWORD *)v86 + 16);
      v151 = _mm_loadu_si128((const __m128i *)(v86 + 34));
      *((_QWORD *)v86 + 16) = 0;
      *(_OWORD *)(v86 + 34) = 0;
      v152 = *(_QWORD *)(v134 + 128);
      if ( v152 )
      {
        *(_QWORD *)(v134 + 136) = 0;
        *(__m128i *)n = v151;
        qfree(v152, v133);
        v151 = _mm_load_si128((const __m128i *)n);
      }
      v153 = v196;
      *(_QWORD *)(v134 + 128) = v150;
      *(__m128i *)(v134 + 136) = v151;
      *(_QWORD *)(*(_QWORD *)(v153 + 568) + 8 * v190) = *(_QWORD *)(*(_QWORD *)(v153 + 568) + 8 * v195);
    }
    ++v190;
LABEL_191:
    ++v195;
    v191 += 152;
  }
  while ( v189 != v195 );
  v154 = v190;
  sub_556F80(v193, v190);
  v155 = *(_QWORD *)(v196 + 576);
  if ( v155 < v154 )
  {
    v156 = *(_QWORD *)(v196 + 568);
    if ( *(_QWORD *)(v196 + 584) < v154 )
    {
      v156 = qvector_reserve(v192, v156, v190, 8);
      v180 = v196;
      *(_QWORD *)(v196 + 568) = v156;
      v155 = *(_QWORD *)(v180 + 576);
    }
    v157 = v190;
    memset((void *)(v156 + 8 * v155), 0, 8 * (v190 - v155));
    *(_QWORD *)(v196 + 576) = v157;
    goto LABEL_119;
  }
  v189 = v190;
LABEL_241:
  if ( v155 != v189 )
    *(_QWORD *)(v196 + 576) = v189;
LABEL_119:
  v108 = v196;
  v109 = (__int64 *)(v196 + 1016);
  *(_BYTE *)(v196 + 1009) = 1;
  if ( v12 != v109 )
  {
    v110 = v12[1];
    if ( v110 > 1 )
    {
      v160 = v108;
      v161 = (const void *)*v12;
      v162 = *(void **)(v108 + 1016);
      if ( *(_QWORD *)(v160 + 1032) < v110 )
      {
        v162 = (void *)qvector_reserve(v109, v162, v12[1], 1);
        *(_QWORD *)(v196 + 1016) = v162;
      }
      v163 = v196;
      *(_QWORD *)(v196 + 1024) = v110;
      memmove(v162, v161, v110 - 1);
      *(_BYTE *)(*(_QWORD *)(v163 + 1016) + v110 - 1) = 0;
    }
    else
    {
      *(_QWORD *)(v196 + 1024) = 0;
    }
  }
  v111 = v196;
  *(_WORD *)(v196 + 1040) = *((_WORD *)v12 + 12);
  *(_BYTE *)(v111 + 1042) = *((_BYTE *)v12 + 26);
  *(_BYTE *)(v111 + 1048) = *((_BYTE *)v12 + 32);
  if ( (__int64 *)(v111 + 1056) != v12 + 5 )
  {
    v112 = v12[6];
    if ( v112 > 1 )
    {
      v167 = (const void *)v12[5];
      v168 = *(void **)(v111 + 1056);
      if ( *(_QWORD *)(v111 + 1072) < v112 )
      {
        v168 = (void *)qvector_reserve(v111 + 1056, *(_QWORD *)(v111 + 1056), v12[6], 1);
        *(_QWORD *)(v196 + 1056) = v168;
      }
      v169 = v196;
      *(_QWORD *)(v196 + 1064) = v112;
      memmove(v168, v167, v112 - 1);
      *(_BYTE *)(*(_QWORD *)(v169 + 1056) + v112 - 1) = 0;
    }
    else
    {
      *(_QWORD *)(v196 + 1064) = 0;
    }
  }
  if ( (__int64 *)(v196 + 1080) != v12 + 8 )
  {
    v113 = v12[9];
    if ( v113 > 1 )
    {
      v164 = (const void *)v12[8];
      v165 = *(void **)(v196 + 1080);
      if ( *(_QWORD *)(v196 + 1096) < v113 )
      {
        v165 = (void *)qvector_reserve(v196 + 1080, *(_QWORD *)(v196 + 1080), v113, 1);
        *(_QWORD *)(v196 + 1080) = v165;
      }
      v166 = v196;
      *(_QWORD *)(v196 + 1088) = v113;
      memmove(v165, v164, v113 - 1);
      *(_BYTE *)(*(_QWORD *)(v166 + 1080) + v113 - 1) = 0;
    }
    else
    {
      *(_QWORD *)(v196 + 1088) = 0;
    }
  }
LABEL_51:
  v205 = 0;
  v206 = 0;
  v55 = v194[2];
  v203 = 0;
  v204 = 0;
  if ( v55 )
  {
    if ( v194[3] )
    {
      v127 = *v194;
      v207 = 0;
      v208 = 0;
      if ( v127 || *((_WORD *)v194 + 2) )
      {
        v203 = *v194;
        v204 = *((_WORD *)v194 + 2);
      }
    }
  }
  v56 = v203;
  v57 = 0;
  v211 = 0;
  v199 = 0;
  v212 = 0;
  v213 = 0;
  v214 = 0;
  v209 = 0;
  v210 = 0;
  v200 = 0;
  if ( !v203 && !v204 )
  {
    v114 = *(_QWORD *)(v196 + 824);
    goto LABEL_130;
  }
  v58 = *(_QWORD *)(v196 + 552);
  if ( v58 )
  {
    v59 = *(_QWORD *)(v196 + 544);
    v60 = 0;
    while ( v203 != *(_DWORD *)v59 || v204 != *(_WORD *)(v59 + 4) )
    {
      ++v60;
      v59 += 152;
      if ( v60 == v58 )
        goto LABEL_164;
    }
    v199 = qvector_reserve(&v199, 0, 1, 8);
    *(_QWORD *)(v199 + 8 * v200) = v60;
    *(_QWORD *)&v200 = v200 + 1;
    if ( (_QWORD)v200 )
    {
      v61 = 0;
      v62 = *(_QWORD *)(v196 + 552);
      goto LABEL_132;
    }
  }
LABEL_164:
  v114 = *(_QWORD *)(v196 + 824);
  if ( v114 )
  {
    v129 = *(_QWORD *)(v196 + 816);
    v130 = 0;
    while ( v203 != *(_DWORD *)v129 || v204 != *(_WORD *)(v129 + 4) )
    {
      ++v130;
      v129 += 152;
      if ( v130 == v114 )
      {
        v132 = v200;
        v61 = 0;
        goto LABEL_172;
      }
    }
    v131 = v199;
    if ( !*((_QWORD *)&v200 + 1) )
    {
      v199 = qvector_reserve(&v199, v199, 1, 8);
      v131 = v199;
    }
    *(_QWORD *)(v131 + 8 * v200) = v130;
    v61 = 1;
    v132 = v200 + 1;
    *(_QWORD *)&v200 = v200 + 1;
LABEL_172:
    v115 = *(_QWORD *)(v196 + 552);
    v62 = v115;
    if ( !v132 )
    {
      v114 = *(_QWORD *)(v196 + 824);
      goto LABEL_131;
    }
  }
  else
  {
LABEL_130:
    v61 = 0;
    v115 = *(_QWORD *)(v196 + 552);
LABEL_131:
    v62 = v115;
    if ( v115 + v114 == 1 )
    {
      v158 = v199;
      v201 = 0;
      if ( (unsigned __int64)&v201 < v199 || (unsigned __int64)&v201 >= v199 + 8LL * *((_QWORD *)&v200 + 1) )
      {
        v159 = 0;
        if ( !*((_QWORD *)&v200 + 1) )
        {
          v199 = qvector_reserve(&v199, v199, 1, 8);
          v159 = v201;
          v158 = v199;
        }
        *(_QWORD *)(v158 + 8 * v200) = v159;
      }
      else
      {
        if ( !*((_QWORD *)&v200 + 1) )
        {
          v199 = qvector_reserve(&v199, v199, 1, 8);
          v158 = v199;
        }
        *(_QWORD *)(v158 + 8 * v200) = 0;
      }
      *(_QWORD *)&v200 = v200 + 1;
      v62 = *(_QWORD *)(v196 + 552);
      v61 = v62 == 0;
    }
  }
LABEL_132:
  v116 = *(_QWORD *)(v196 + 544);
  v117 = v116 + 152 * v62;
  if ( v117 == v116 )
  {
    v178 = 0;
  }
  else
  {
    do
    {
      if ( *(_DWORD *)(v116 + 8) == 3 )
      {
        v178 = 1;
        goto LABEL_137;
      }
      v116 += 152;
    }
    while ( v116 != v117 );
    v178 = 0;
  }
LABEL_137:
  v118 = v196;
  v119 = callui(203, 14, v196, 6, v57, v56);
  v121 = v120;
  sub_49FE90(v120, 5, v178, v119);
  sub_49FE90(v121, 4, 0, v119);
  v122 = (__int64 *)&v199;
  v201 = 0;
  if ( v61 )
    v122 = &v201;
  v202 = 0;
  v124 = callui(203, 2, v118, 6, (_DWORD)v122, (unsigned int)&callui);
  v125 = &v201;
  if ( v61 )
    v125 = (__int64 *)&v199;
  v126 = callui(203, 2, v118, 8, (_DWORD)v125, v123, v124);
  if ( v201 )
  {
    *(_QWORD *)&v202 = 0;
    v126 = qfree(v201, (_BYTE *)&dword_0 + 2, v126);
  }
  if ( v199 )
  {
    *(_QWORD *)&v200 = 0;
    v126 = qfree(v199, (_BYTE *)&dword_0 + 2, v126);
  }
  if ( v197 )
  {
    *(_QWORD *)&v198 = 0;
    qfree(v197, (_BYTE *)&dword_0 + 2, v126);
  }
  return v219 - __readfsqword(0x28u);
}
