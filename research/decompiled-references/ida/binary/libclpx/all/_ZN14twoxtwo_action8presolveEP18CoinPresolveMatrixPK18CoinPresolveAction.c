CoinPresolveMatrix *__fastcall twoxtwo_action::presolve(
        twoxtwo_action *this,
        CoinPresolveMatrix *a2,
        const CoinPresolveAction *a3)
{
  int v4; // eax
  int v5; // r15d
  unsigned __int64 v6; // rdi
  int *v7; // r13
  __int64 v8; // rbp
  __int64 v9; // rcx
  __int64 v10; // r12
  __int64 v11; // r8
  unsigned int v12; // r14d
  __int64 v13; // rax
  __int64 v14; // rdx
  double v15; // xmm10_8
  double v16; // xmm13_8
  __int64 v17; // r11
  __int64 v18; // r9
  __int64 v19; // r10
  double v20; // xmm3_8
  double v21; // xmm1_8
  double v22; // xmm4_8
  double v23; // xmm5_8
  double v24; // xmm6_8
  __int64 v25; // r10
  __int64 v26; // r9
  __int64 v27; // r9
  int v28; // r11d
  int v29; // r10d
  char v30; // r9
  bool v31; // r9
  bool v32; // di
  double v33; // xmm2_8
  double v34; // xmm4_8
  double v35; // xmm5_8
  int v36; // r10d
  int v37; // r9d
  double v38; // xmm5_8
  bool v39; // r11
  bool v40; // di
  double v41; // xmm4_8
  double v42; // xmm2_8
  bool v43; // r11
  bool v44; // di
  __m128d v45; // xmm5
  unsigned __int64 v46; // xmm4_8
  __m128d v47; // xmm2
  __m128d v48; // xmm4
  double v49; // xmm5_8
  __m128d v50; // xmm5
  double v51; // xmm5_8
  __m128d v52; // xmm5
  __m128d v53; // xmm5
  double *v54; // r10
  double v55; // xmm4_8
  double v56; // xmm5_8
  __int64 v57; // rdi
  char *v58; // rdi
  double v59; // xmm0_8
  double v60; // xmm5_8
  double v61; // xmm4_8
  double v62; // xmm0_8
  double v63; // xmm5_8
  double v64; // xmm1_8
  double v65; // xmm5_8
  double v66; // xmm3_8
  void *v67; // r12
  __int64 v68; // rax
  const CoinPresolveAction *v69; // r8
  CoinPresolveMatrix *v70; // rsi
  int *v71; // rdx
  CoinPresolveMatrix *v72; // rdi
  int v73; // ecx
  CoinPresolveMatrix *v74; // rbp
  int v76; // edi
  unsigned __int64 v77; // rcx
  __int64 v78; // rax
  unsigned int v79; // edx
  int v80; // r10d
  int v81; // r11d
  __m128i v82; // xmm2
  const __m128i *v83; // rdx
  unsigned int v84; // r9d
  unsigned int v85; // eax
  __m128i v86; // xmm0
  __m128i v87; // xmm2
  unsigned int v88; // eax
  int v89; // esi
  int v90; // eax
  signed int v91; // r8d
  int v92; // esi
  unsigned __int64 v93; // rdi
  __int64 v94; // rax
  unsigned int v95; // edx
  int v96; // r11d
  int v97; // r12d
  __m128i v98; // xmm2
  const __m128i *v99; // rcx
  unsigned int v100; // r10d
  unsigned int v101; // eax
  __m128i v102; // xmm0
  __m128i v103; // xmm2
  unsigned int v104; // eax
  int v105; // edx
  signed int v106; // eax
  unsigned __int64 v107; // rsi
  __int64 v108; // rdx
  unsigned int v109; // ecx
  int v110; // r10d
  int v111; // r9d
  __m128i v112; // xmm1
  const __m128i *v113; // rcx
  unsigned int v114; // r8d
  unsigned int v115; // edx
  __m128i si128; // xmm0
  __m128i v117; // xmm1
  unsigned int v118; // edx
  int v119; // edi
  int v120; // edi
  int v121; // edi
  int v122; // ecx
  int v123; // edx
  signed int v124; // r8d
  unsigned __int64 v125; // rdi
  __int64 v126; // rdx
  unsigned int v127; // ecx
  int v128; // esi
  int v129; // r11d
  __m128i v130; // xmm1
  const __m128i *v131; // rcx
  unsigned int v132; // r10d
  unsigned int v133; // edx
  __m128i v134; // xmm0
  __m128i v135; // xmm1
  unsigned int v136; // esi
  signed int v137; // esi
  double v138; // xmm5_8
  double v139; // xmm4_8
  int v140; // [rsp+4h] [rbp-1E4h]
  __int64 v142; // [rsp+10h] [rbp-1D8h]
  __int64 v143; // [rsp+18h] [rbp-1D0h]
  __int64 v144; // [rsp+20h] [rbp-1C8h]
  double v145; // [rsp+28h] [rbp-1C0h]
  double v146; // [rsp+38h] [rbp-1B0h]
  __int64 v147; // [rsp+40h] [rbp-1A8h]
  __int64 v148; // [rsp+48h] [rbp-1A0h]
  __int64 v149; // [rsp+50h] [rbp-198h]
  __int64 v150; // [rsp+58h] [rbp-190h]
  __int64 v151; // [rsp+60h] [rbp-188h]
  __int64 v152; // [rsp+68h] [rbp-180h]
  __int64 v153; // [rsp+70h] [rbp-178h]
  double v154; // [rsp+78h] [rbp-170h]
  int v155; // [rsp+80h] [rbp-168h]
  int v156; // [rsp+84h] [rbp-164h]
  double v157; // [rsp+88h] [rbp-160h]
  char v158; // [rsp+90h] [rbp-158h]
  _QWORD *v159; // [rsp+98h] [rbp-150h]
  char v160; // [rsp+A8h] [rbp-140h]
  double v161; // [rsp+A8h] [rbp-140h]
  double v162; // [rsp+B0h] [rbp-138h]
  double v163; // [rsp+B0h] [rbp-138h]
  double v164; // [rsp+B0h] [rbp-138h]
  double v165; // [rsp+B0h] [rbp-138h]
  double v166; // [rsp+B0h] [rbp-138h]
  double v167; // [rsp+B8h] [rbp-130h]
  double v168; // [rsp+B8h] [rbp-130h]
  double v169; // [rsp+B8h] [rbp-130h]
  double v170; // [rsp+B8h] [rbp-130h]
  double v171; // [rsp+B8h] [rbp-130h]
  double v172; // [rsp+C0h] [rbp-128h]
  double v173; // [rsp+C0h] [rbp-128h]
  double v174; // [rsp+C0h] [rbp-128h]
  double v175; // [rsp+C8h] [rbp-120h]
  double v176; // [rsp+C8h] [rbp-120h]
  double v177; // [rsp+C8h] [rbp-120h]
  double v178; // [rsp+D8h] [rbp-110h]
  double v179; // [rsp+E0h] [rbp-108h]
  double v180; // [rsp+E0h] [rbp-108h]
  double v181; // [rsp+E0h] [rbp-108h]
  double v182; // [rsp+E8h] [rbp-100h]
  double v183; // [rsp+F0h] [rbp-F8h]
  double v184; // [rsp+F0h] [rbp-F8h]
  double v185; // [rsp+F8h] [rbp-F0h]
  double v186; // [rsp+F8h] [rbp-F0h]
  double v187; // [rsp+100h] [rbp-E8h]
  double v188; // [rsp+100h] [rbp-E8h]
  double v189; // [rsp+108h] [rbp-E0h]
  double v190; // [rsp+108h] [rbp-E0h]
  double v191; // [rsp+110h] [rbp-D8h]
  struct rusage usage; // [rsp+120h] [rbp-C8h] BYREF

  if ( !*((_BYTE *)this + 321) )
  {
    v4 = *((_DWORD *)this + 1);
    v5 = 0;
    v140 = 0;
    v146 = 0.0;
    goto LABEL_3;
  }
  getrusage(RUSAGE_SELF, &usage);
  v4 = *((_DWORD *)this + 1);
  v146 = (double)SLODWORD(usage.ru_utime.tv_usec) * 0.000001 + (double)SLODWORD(usage.ru_utime.tv_sec);
  if ( v4 <= 0 )
  {
    v140 = 0;
    goto LABEL_151;
  }
  v107 = *((_QWORD *)this + 36);
  v108 = -(int)(v107 >> 2) & 3;
  v109 = v108 + 3;
  if ( (unsigned int)(v108 + 3) < 5 )
    v109 = 5;
  if ( v4 - 1 < v109 )
  {
    v118 = 0;
    v140 = 0;
LABEL_145:
    v140 += *(_DWORD *)(v107 + 4LL * (int)v118) == 0;
    if ( v4 > (int)(v118 + 1) )
    {
      v119 = (*(_DWORD *)(v107 + 4LL * (int)(v118 + 1)) == 0) + v140;
      v140 = v119;
      if ( v4 > (int)(v118 + 2) )
      {
        v120 = (*(_DWORD *)(v107 + 4LL * (int)(v118 + 2)) == 0) + v119;
        v140 = v120;
        if ( v4 > (int)(v118 + 3) )
        {
          v121 = (*(_DWORD *)(v107 + 4LL * (int)(v118 + 3)) == 0) + v120;
          v140 = v121;
          if ( v4 > (int)(v118 + 4) )
          {
            v122 = (*(_DWORD *)(v107 + 4LL * (int)(v118 + 4)) == 0) + v121;
            v123 = v118 + 5;
            v140 = v122;
            if ( v4 > v123 )
              v140 = (*(_DWORD *)(v107 + 4LL * v123) == 0) + v122;
          }
        }
      }
    }
    goto LABEL_151;
  }
  if ( (_DWORD)v108 )
  {
    v110 = 1;
    v111 = *(_DWORD *)v107 == 0;
    if ( (_DWORD)v108 != 1 )
    {
      v110 = 2;
      v111 += *(_DWORD *)(v107 + 4) == 0;
      if ( (_DWORD)v108 != 2 )
      {
        v110 = 3;
        v111 += *(_DWORD *)(v107 + 8) == 0;
      }
    }
  }
  else
  {
    v110 = 0;
    v111 = 0;
  }
  v112 = 0;
  v113 = (const __m128i *)(v107 + 4 * v108);
  v114 = v4 - v108;
  v115 = 0;
  do
  {
    si128 = _mm_load_si128(v113);
    ++v115;
    ++v113;
    v112 = _mm_sub_epi32(v112, _mm_cmpeq_epi32(si128, (__m128i)0LL));
  }
  while ( v114 >> 2 > v115 );
  v117 = _mm_add_epi32(v112, _mm_srli_si128(v112, 8));
  v140 = _mm_cvtsi128_si32(_mm_add_epi32(v117, _mm_srli_si128(v117, 4))) + v111;
  v118 = (v114 & 0xFFFFFFFC) + v110;
  if ( v114 != (v114 & 0xFFFFFFFC) )
    goto LABEL_145;
LABEL_151:
  v124 = *(_DWORD *)this;
  if ( *(int *)this <= 0 )
  {
    v5 = 0;
  }
  else
  {
    v125 = *((_QWORD *)this + 6);
    v126 = -(int)(v125 >> 2) & 3;
    v127 = v126 + 3;
    if ( (unsigned int)(v126 + 3) < 5 )
      v127 = 5;
    if ( v127 > v124 - 1 )
    {
      v136 = 0;
      v5 = 0;
    }
    else
    {
      if ( (_DWORD)v126 )
      {
        v128 = 1;
        v129 = *(_DWORD *)v125 == 0;
        if ( (_DWORD)v126 != 1 )
        {
          v128 = 2;
          v129 += *(_DWORD *)(v125 + 4) == 0;
          if ( (_DWORD)v126 != 2 )
          {
            v128 = 3;
            v129 += *(_DWORD *)(v125 + 8) == 0;
          }
        }
      }
      else
      {
        v128 = 0;
        v129 = 0;
      }
      v130 = 0;
      v131 = (const __m128i *)(v125 + 4 * v126);
      v132 = v124 - v126;
      v133 = 0;
      do
      {
        v134 = _mm_load_si128(v131);
        ++v133;
        ++v131;
        v130 = _mm_sub_epi32(v130, _mm_cmpeq_epi32(v134, (__m128i)0LL));
      }
      while ( v132 >> 2 > v133 );
      v135 = _mm_add_epi32(v130, _mm_srli_si128(v130, 8));
      v5 = _mm_cvtsi128_si32(_mm_add_epi32(v135, _mm_srli_si128(v135, 4))) + v129;
      v136 = (v132 & 0xFFFFFFFC) + v128;
      if ( v132 == (v132 & 0xFFFFFFFC) )
        goto LABEL_3;
    }
    v5 += *(_DWORD *)(v125 + 4LL * (int)v136) == 0;
    if ( v124 > (int)(v136 + 1) )
    {
      v5 += *(_DWORD *)(v125 + 4LL * (int)(v136 + 1)) == 0;
      if ( v124 > (int)(v136 + 2) )
      {
        v5 += *(_DWORD *)(v125 + 4LL * (int)(v136 + 2)) == 0;
        if ( v124 > (int)(v136 + 3) )
        {
          v5 += *(_DWORD *)(v125 + 4LL * (int)(v136 + 3)) == 0;
          if ( v124 > (int)(v136 + 4) )
          {
            v5 += *(_DWORD *)(v125 + 4LL * (int)(v136 + 4)) == 0;
            v137 = v136 + 5;
            if ( v124 > v137 )
              v5 += *(_DWORD *)(v125 + 4LL * v137) == 0;
          }
        }
      }
    }
  }
LABEL_3:
  v6 = (v4 + 1) >> 1;
  if ( v6 > 0x1FFFFFFFFFFFFFFLL )
    __cxa_throw_bad_array_new_length();
  v7 = (int *)operator new[](v6 << 6);
  v8 = *((_QWORD *)this + 5);
  v9 = *((_QWORD *)this + 6);
  v10 = *((_QWORD *)this + 7);
  v11 = *((_QWORD *)this + 36);
  v142 = *((_QWORD *)this + 8);
  v150 = *((_QWORD *)this + 9);
  v153 = *((_QWORD *)this + 39);
  v151 = *((_QWORD *)this + 11);
  v152 = *((_QWORD *)this + 12);
  v147 = *((_QWORD *)this + 35);
  v148 = *((_QWORD *)this + 38);
  v149 = *((_QWORD *)this + 37);
  v143 = *((_QWORD *)this + 13);
  v144 = *((_QWORD *)this + 14);
  if ( *(int *)this <= 0 )
    goto LABEL_168;
  v12 = 0;
  v13 = 0;
  v14 = (unsigned int)(*(_DWORD *)this - 1) + 1LL;
  v15 = 0.0;
  v145 = 0.0;
  v16 = 0.0;
  do
  {
    if ( *(_DWORD *)(v9 + 4 * v13) != 2 )
      goto LABEL_6;
    v17 = *(int *)(v8 + 4 * v13);
    v18 = *(int *)(v10 + 4 * v17);
    if ( *(_DWORD *)(v11 + 4 * v18) != 2 )
      goto LABEL_6;
    v155 = *(_DWORD *)(v10 + 4 * v17 + 4);
    if ( *(_DWORD *)(v11 + 4LL * v155) != 2 )
      goto LABEL_6;
    v19 = 8 * v17;
    v20 = *(double *)(v142 + 8 * v17);
    v21 = *(double *)(v144 + 8 * v18);
    v22 = *(double *)(v143 + 8 * v18);
    if ( v22 <= -1.0e30 )
    {
      if ( v21 > 1.0e30 )
        goto LABEL_6;
      v158 = 0;
    }
    else
    {
      if ( v21 <= 1.0e30 )
        goto LABEL_6;
      v158 = 1;
      v20 = -v20;
      v21 = -v22;
    }
    v157 = *(double *)(v142 + v19 + 8);
    v23 = *(double *)(8LL * v155 + v144);
    v159 = (_QWORD *)(8LL * v155 + v144);
    v154 = v23;
    v24 = *(double *)(v143 + 8LL * v155);
    if ( v24 <= -1.0e30 )
    {
      if ( v23 > 1.0e30 )
        goto LABEL_6;
      v160 = 0;
    }
    else
    {
      if ( v23 <= 1.0e30 )
        goto LABEL_6;
      v160 = 1;
      v157 = -*(double *)(v142 + v19 + 8);
      v154 = -v24;
    }
    v25 = *(int *)(v147 + 4 * v18);
    v26 = *(_DWORD *)(v147 + 4 * v18) + 1;
    v156 = *(_DWORD *)(v148 + 4 * v25 + 4);
    if ( (_DWORD)v13 == *(_DWORD *)(v148 + 4 * v25) )
    {
      if ( (_DWORD)v13 != v156 )
      {
        if ( !v158 )
        {
LABEL_19:
          v15 = *(double *)(v149 + 8 * v26);
          goto LABEL_20;
        }
LABEL_181:
        v15 = -*(double *)(v149 + 8 * v26);
        goto LABEL_20;
      }
      v156 = -1;
    }
    else
    {
      v15 = *(double *)(v149 + 8 * v25);
      if ( v158 )
      {
        if ( (_DWORD)v13 != v156 )
          goto LABEL_181;
        v15 = -v15;
      }
      else if ( (_DWORD)v13 != *(_DWORD *)(v148 + 4 * v25 + 4) )
      {
        goto LABEL_19;
      }
      v156 = *(_DWORD *)(v148 + 4 * v25);
    }
LABEL_20:
    v27 = *(int *)(v147 + 4LL * v155);
    v28 = *(_DWORD *)(v148 + 4 * v27);
    v29 = *(_DWORD *)(v148 + 4 * v27 + 4);
    if ( (_DWORD)v13 != v28 )
    {
      if ( v28 != v156 )
      {
        v30 = 0;
        if ( (_DWORD)v13 == v29 )
          goto LABEL_6;
        goto LABEL_23;
      }
      v16 = *(double *)(v149 + 8 * v27);
      if ( v160 )
        v16 = -v16;
    }
    v30 = 1;
    if ( (_DWORD)v13 == v29 )
      goto LABEL_27;
LABEL_23:
    if ( v156 == v29 )
    {
      v16 = *(double *)(v149 + 8LL * (*(_DWORD *)(v147 + 4LL * v155) + 1));
      if ( v160 )
        v16 = -v16;
      if ( v30 )
      {
LABEL_27:
        v161 = *(double *)(v150 + 8 * v13);
        if ( v161 == 0.0 || v161 < 0.0 )
          goto LABEL_6;
        v182 = *(double *)(v151 + 8LL * v156);
        v178 = *(double *)(v152 + 8LL * v156);
        if ( fabs(v182) < 1.0e30 )
        {
          v33 = v182 * v16 + 0.0;
          v172 = (v21 - (v182 * v15 + 0.0)) / v20;
          if ( v20 <= 0.0 )
          {
            v175 = (v21 - (v182 * v15 + 0.0)) / v20;
            v172 = 1.797693134862316e308;
            if ( v157 > 0.0 )
              goto LABEL_208;
          }
          else
          {
            v175 = -1.797693134862316e308;
            if ( v157 > 0.0 )
              goto LABEL_208;
          }
          goto LABEL_229;
        }
        if ( v15 > 0.0 )
        {
          v31 = v182 < 0.0;
          goto LABEL_32;
        }
        if ( v15 < 0.0 )
        {
          v31 = v182 > 0.0;
LABEL_32:
          if ( v16 <= 0.0 )
          {
            v32 = 0;
            if ( v16 < 0.0 )
              v32 = v182 > 0.0;
          }
          else
          {
            v32 = v182 < 0.0;
          }
          if ( v20 <= 0.0 )
          {
            if ( !v31 )
              goto LABEL_231;
          }
          else if ( !v31 )
          {
            goto LABEL_216;
          }
          v172 = 1.797693134862316e308;
          v175 = -1.797693134862316e308;
          goto LABEL_37;
        }
        if ( v16 > 0.0 )
        {
          v32 = v182 < 0.0;
          if ( v20 > 0.0 )
            goto LABEL_216;
LABEL_231:
          v175 = v21 / v20;
          v172 = 1.797693134862316e308;
          goto LABEL_37;
        }
        if ( v16 < 0.0 )
        {
          v32 = v182 > 0.0;
          if ( v20 <= 0.0 )
            goto LABEL_231;
LABEL_216:
          v172 = v21 / v20;
          v175 = -1.797693134862316e308;
LABEL_37:
          if ( v157 <= 0.0 )
          {
            if ( !v32 )
              goto LABEL_228;
          }
          else
          {
            v33 = 0.0;
            if ( !v32 )
              goto LABEL_208;
          }
          v34 = -1.797693134862316e308;
          v179 = 1.797693134862316e308;
          v162 = 1.797693134862316e308;
          v167 = -1.797693134862316e308;
        }
        else if ( v20 <= 0.0 )
        {
          v175 = v21 / v20;
          v172 = 1.797693134862316e308;
          if ( v157 <= 0.0 )
            goto LABEL_228;
          v33 = 0.0;
LABEL_208:
          v162 = (v154 - v33) / v157;
          v34 = -1.797693134862316e308;
          v167 = -1.797693134862316e308;
          v179 = v162 - 1.0e-12;
        }
        else
        {
          v172 = v21 / v20;
          v175 = -1.797693134862316e308;
          if ( v157 > 0.0 )
          {
            v33 = 0.0;
            goto LABEL_208;
          }
LABEL_228:
          v33 = 0.0;
LABEL_229:
          v34 = (v154 - v33) / v157;
          v167 = v34 + 1.0e-12;
          v179 = 1.797693134862316e308;
          v162 = 1.797693134862316e308;
        }
        v35 = *(double *)(v151 + 8 * v13);
        v185 = v35;
        if ( v175 > v167 )
        {
          v37 = v175 > v35 + 1.0e-12;
          v36 = 0;
        }
        else
        {
          if ( v34 <= v175 + 1.0e-12 )
          {
            v36 = 0;
          }
          else
          {
            v175 = v34;
            v36 = v34 > v35 + 1.0e-12;
          }
          v37 = 0;
        }
        v38 = *(double *)(v152 + 8 * v13);
        v187 = v38;
        if ( v179 > v172 )
        {
          if ( v38 - 1.0e-12 > v172 )
            v37 = 1;
        }
        else if ( v172 - 1.0e-12 > v162 )
        {
          v172 = v162;
          if ( v38 - 1.0e-12 > v162 )
            v36 = 1;
        }
        v183 = fmin(1.797693134862316e308, v175);
        v176 = fmax(-1.797693134862316e308, v175);
        v180 = fmax(-1.797693134862316e308, v172);
        v173 = fmin(1.797693134862316e308, v172);
        if ( fabs(v178) < 1.0e30 )
        {
          v138 = v178 * v15 + 0.0;
          v139 = v178 * v16 + 0.0;
          v168 = (v21 - v138) / v20;
          if ( v20 <= 0.0 )
          {
            v163 = (v21 - v138) / v20;
            v168 = 1.797693134862316e308;
            if ( v157 > 0.0 )
              goto LABEL_196;
          }
          else
          {
            v163 = -1.797693134862316e308;
            if ( v157 > 0.0 )
              goto LABEL_196;
          }
          goto LABEL_224;
        }
        if ( v15 > 0.0 )
        {
          v39 = v178 < 0.0;
          goto LABEL_51;
        }
        if ( v15 < 0.0 )
        {
          v39 = v178 > 0.0;
LABEL_51:
          if ( v16 <= 0.0 )
          {
            v40 = 0;
            if ( v16 < 0.0 )
              v40 = v178 > 0.0;
          }
          else
          {
            v40 = v178 < 0.0;
          }
          if ( v20 <= 0.0 )
          {
            if ( !v39 )
              goto LABEL_233;
          }
          else if ( !v39 )
          {
            goto LABEL_237;
          }
          v168 = 1.797693134862316e308;
          v163 = -1.797693134862316e308;
          goto LABEL_56;
        }
        if ( v16 > 0.0 )
        {
          v40 = v178 < 0.0;
          if ( v20 > 0.0 )
            goto LABEL_237;
LABEL_233:
          v163 = v21 / v20;
          v168 = 1.797693134862316e308;
          goto LABEL_56;
        }
        if ( v16 >= 0.0 )
        {
          if ( v20 <= 0.0 )
          {
            v40 = 0;
            goto LABEL_233;
          }
          v168 = v21 / v20;
          if ( v157 > 0.0 )
          {
            v163 = -1.797693134862316e308;
LABEL_250:
            v139 = 0.0;
LABEL_196:
            v189 = (v154 - v139) / v157;
            v191 = v189 - 1.0e-12;
            v41 = -1.797693134862316e308;
            v42 = -1.797693134862316e308;
LABEL_59:
            if ( v163 > v42 )
            {
              if ( v163 > v185 + 1.0e-12 )
                v37 |= 2u;
            }
            else if ( v41 > v163 + 1.0e-12 )
            {
              v163 = v41;
              if ( v41 > v185 + 1.0e-12 )
                v36 |= 2u;
            }
            if ( v191 > v168 )
            {
              v44 = v36 == 0;
              if ( v187 - 1.0e-12 > v168 )
              {
                v37 |= 2u;
                v43 = 0;
              }
              else
              {
                v43 = v37 == 0;
              }
            }
            else
            {
              v43 = v37 == 0;
              if ( v168 - 1.0e-12 > v189 )
              {
                v168 = v189;
                v44 = v187 - 1.0e-12 <= v189 && v36 == 0;
              }
              else
              {
                v44 = v36 == 0;
              }
            }
            v45 = (__m128d)*(unsigned __int64 *)&v183;
            v45.m128d_f64[0] = fmin(v183, v163);
            v181 = fmax(v180, v168);
            v184 = v45.m128d_f64[0];
            v169 = fmin(v173, v168);
            v164 = fmax(v176, v163);
            if ( !v43 && !v44 )
            {
              if ( *(_BYTE *)(v153 + v13) )
              {
                v45.m128d_f64[0] = v45.m128d_f64[0] - 0.00001;
                v46 = *(unsigned __int64 *)&v45.m128d_f64[0];
                if ( fabs(v45.m128d_f64[0]) < 4.503599627370496e15 )
                {
                  v47.m128d_f64[0] = (double)(int)v45.m128d_f64[0];
                  v46 = COERCE_UNSIGNED_INT64(
                          COERCE_DOUBLE(*(_QWORD *)&_mm_cmpgt_sd(v45, v47).m128d_f64[0] & 0x3FF0000000000000LL)
                        + v47.m128d_f64[0])
                      | *(_QWORD *)&v45.m128d_f64[0] & 0x8000000000000000LL;
                }
                v184 = *(double *)&v46;
                v48 = (__m128d)*(unsigned __int64 *)&v164;
                v48.m128d_f64[0] = v164 - 0.00001;
                v49 = fabs(v164 - 0.00001);
                v165 = v164 - 0.00001;
                if ( v49 < 4.503599627370496e15 )
                {
                  v50.m128d_f64[0] = (double)(int)v48.m128d_f64[0];
                  *(_QWORD *)&v48.m128d_f64[0] = COERCE_UNSIGNED_INT64(
                                                   COERCE_DOUBLE(
                                                     *(_QWORD *)&_mm_cmpgt_sd(v48, v50).m128d_f64[0]
                                                   & 0x3FF0000000000000LL)
                                                 + v50.m128d_f64[0])
                                               | *(_QWORD *)&v165 & 0x8000000000000000LL;
                }
                v164 = v48.m128d_f64[0];
                v48.m128d_f64[0] = v169 + 0.00001;
                v51 = fabs(v169 + 0.00001);
                v170 = v169 + 0.00001;
                if ( v51 < 4.503599627370496e15 )
                {
                  v52 = 0;
                  v52.m128d_f64[0] = (double)(int)v48.m128d_f64[0];
                  *(_QWORD *)&v48.m128d_f64[0] = COERCE_UNSIGNED_INT64(
                                                   v52.m128d_f64[0]
                                                 - COERCE_DOUBLE(
                                                     COERCE_UNSIGNED_INT64(COERCE_DOUBLE(*(_QWORD *)&_mm_cmpgt_sd(v52, v48).m128d_f64[0]))
                                                   & 0x3FF0000000000000LL))
                                               | *(_QWORD *)&v170 & 0x8000000000000000LL;
                }
                v169 = v48.m128d_f64[0];
                v48.m128d_f64[0] = v181 + 0.00001;
                if ( fabs(v181 + 0.00001) < 4.503599627370496e15 )
                {
                  v53 = 0;
                  v53.m128d_f64[0] = (double)(int)v48.m128d_f64[0];
                  *(_QWORD *)&v48.m128d_f64[0] = COERCE_UNSIGNED_INT64(
                                                   v53.m128d_f64[0]
                                                 - COERCE_DOUBLE(
                                                     COERCE_UNSIGNED_INT64(COERCE_DOUBLE(*(_QWORD *)&_mm_cmpgt_sd(v53, v48).m128d_f64[0]))
                                                   & 0x3FF0000000000000LL))
                                               | COERCE_UNSIGNED_INT64(v181 + 0.00001) & 0x8000000000000000LL;
                }
                v181 = v48.m128d_f64[0];
              }
              if ( v161 >= 0.0 && v187 > v164 && v164 >= v185 && v181 < 1.0e30 )
                v181 = fmin(v181, v164);
              if ( v161 <= 0.0 && v169 > v185 && v187 >= v169 && v169 > -1.0e30 )
                v184 = fmax(v184, v169);
              if ( v184 <= v185 + 0.00000001 )
                v184 = *(double *)(v151 + 8 * v13);
              if ( v187 - 0.00000001 <= v181 )
                v181 = *(double *)(v152 + 8 * v13);
              v54 = (double *)(v150 + 8LL * v156);
              v55 = (v157 * v21 - v154 * v20) / (v157 * v15 - v16 * v20);
              v171 = v55;
              v186 = (v21 - v55 * v15) / v20;
              v56 = fmax(v186, (v154 - v55 * v16) / v157);
              v190 = fmin(1.797693134862316e308, v56);
              v166 = *v54;
              v188 = fmax(-1.797693134862316e308, v56);
              v177 = *v54 * v55 + v161 * v186;
              if ( v37 == 1 )
                v174 = (v55 + 1.0) * v166 + (v154 - v16 * (v55 + 1.0)) / v20 * v161 - v177;
              else
                v174 = v177 - ((v55 - 1.0) * v166 + (v154 - v16 * (v55 - 1.0)) / v20 * v161);
              v57 = (__int64)(int)v12++ << 6;
              v58 = (char *)v7 + v57;
              *((_DWORD *)v58 + 13) = v13;
              *(double *)v58 = v24;
              *((_DWORD *)v58 + 12) = v155;
              *((_DWORD *)v58 + 14) = v156;
              v59 = fmax((v21 - v182 * v15) / v20, (v154 - v182 * v16) / v157);
              v60 = fmin(v190, v59);
              v61 = fmax(v188, v59);
              v62 = fmax((v21 - v178 * v15) / v20, (v154 - v178 * v16) / v157);
              v63 = fmin(v60, v62);
              v64 = fmax(v61, v62);
              v65 = fmax(v184, v63 - COERCE_DOUBLE(*(_QWORD *)&v63 & 0x7FFFFFFFFFFFFFFFLL) * 1.0e-12);
              v66 = v161 + v20 / v15 * v174;
              v145 = v145 + v177 - (v171 * (v166 + v174) + fmax(v186, v65) * v66);
              *((_QWORD *)v58 + 1) = *v159;
              *((_QWORD *)v58 + 2) = *(_QWORD *)(v151 + 8 * v13);
              *((_QWORD *)v58 + 3) = *(_QWORD *)(v152 + 8 * v13);
              *((_QWORD *)v58 + 4) = *(_QWORD *)(v150 + 8 * v13);
              *((double *)v58 + 5) = *v54;
              *v54 = v166 + v174;
              *(double *)(v150 + 8 * v13) = v66;
              *(double *)(v151 + 8 * v13) = v65;
              *(double *)(v152 + 8 * v13) = fmin(
                                              v181,
                                              v64 + COERCE_DOUBLE(*(_QWORD *)&v64 & 0x7FFFFFFFFFFFFFFFLL) * 1.0e-12);
              *(_QWORD *)(v143 + 8LL * v155) = 0xFFEFFFFFFFFFFFFFLL;
              *v159 = 0x7FEFFFFFFFFFFFFFLL;
            }
            goto LABEL_6;
          }
          v139 = 0.0;
          v163 = -1.797693134862316e308;
LABEL_224:
          v41 = (v154 - v139) / v157;
          v42 = v41 + 1.0e-12;
          v191 = 1.797693134862316e308;
          v189 = 1.797693134862316e308;
          goto LABEL_59;
        }
        v40 = v178 > 0.0;
        if ( v20 <= 0.0 )
          goto LABEL_233;
LABEL_237:
        v168 = v21 / v20;
        v163 = -1.797693134862316e308;
LABEL_56:
        if ( v157 <= 0.0 )
        {
          if ( !v40 )
          {
            v139 = 0.0;
            goto LABEL_224;
          }
        }
        else if ( !v40 )
        {
          goto LABEL_250;
        }
        v41 = -1.797693134862316e308;
        v191 = 1.797693134862316e308;
        v42 = -1.797693134862316e308;
        v189 = 1.797693134862316e308;
        goto LABEL_59;
      }
    }
LABEL_6:
    ++v13;
  }
  while ( v13 != v14 );
  if ( !v12 )
  {
LABEL_168:
    v74 = a2;
    goto LABEL_95;
  }
  v67 = (void *)operator new[]((__int64)(int)v12 << 6);
  memcpy(v67, v7, (__int64)(int)v12 << 6);
  v68 = operator new(0x20u);
  v70 = *((CoinPresolveMatrix **)this + 58);
  *(_DWORD *)(v68 + 16) = v12;
  *(_QWORD *)(v68 + 24) = v67;
  *(_QWORD *)(v68 + 8) = a2;
  *(_QWORD *)v68 = &off_4D1D28;
  v71 = v7 + 12;
  v72 = v70;
  do
  {
    v73 = *v71;
    v71 += 16;
    v72 = (CoinPresolveMatrix *)((char *)v72 + 4);
    *((_DWORD *)v72 - 1) = v73;
  }
  while ( v71 != &v7[16 * (unsigned __int64)(v12 - 1) + 28] );
  v74 = (CoinPresolveMatrix *)useless_constraint_action::presolve(this, v70, (const int *)v12, v68, v69);
  *((double *)this + 34) = v145 + *((double *)this + 34);
LABEL_95:
  operator delete[](v7);
  if ( *((_BYTE *)this + 321) )
  {
    getrusage(RUSAGE_SELF, &usage);
    v76 = *((_DWORD *)this + 1);
    if ( v76 <= 0 )
    {
      v89 = 0;
      goto LABEL_116;
    }
    v77 = *((_QWORD *)this + 36);
    v78 = -(int)(v77 >> 2) & 3;
    v79 = v78 + 3;
    if ( (unsigned int)(v78 + 3) < 5 )
      v79 = 5;
    if ( v79 > v76 - 1 )
    {
      v89 = 0;
      v88 = 0;
    }
    else
    {
      if ( (_DWORD)v78 )
      {
        v80 = 1;
        v81 = *(_DWORD *)v77 == 0;
        if ( (_DWORD)v78 != 1 )
        {
          v80 = 2;
          v81 += *(_DWORD *)(v77 + 4) == 0;
          if ( (_DWORD)v78 != 2 )
          {
            v80 = 3;
            v81 += *(_DWORD *)(v77 + 8) == 0;
          }
        }
      }
      else
      {
        v81 = 0;
        v80 = 0;
      }
      v82 = 0;
      v83 = (const __m128i *)(v77 + 4 * v78);
      v84 = v76 - v78;
      v85 = 0;
      do
      {
        v86 = _mm_load_si128(v83);
        ++v85;
        ++v83;
        v82 = _mm_sub_epi32(v82, _mm_cmpeq_epi32(v86, (__m128i)0LL));
      }
      while ( v84 >> 2 > v85 );
      v87 = _mm_add_epi32(v82, _mm_srli_si128(v82, 8));
      v88 = (v84 & 0xFFFFFFFC) + v80;
      v89 = v81 + _mm_cvtsi128_si32(_mm_add_epi32(v87, _mm_srli_si128(v87, 4)));
      if ( (v84 & 0xFFFFFFFC) == v84 )
      {
LABEL_116:
        v91 = *(_DWORD *)this;
        v92 = v89 - v140;
        if ( *(int *)this <= 0 )
        {
          v105 = 0;
        }
        else
        {
          v93 = *((_QWORD *)this + 6);
          v94 = -(int)(v93 >> 2) & 3;
          v95 = v94 + 3;
          if ( (unsigned int)(v94 + 3) < 5 )
            v95 = 5;
          if ( v95 > v91 - 1 )
          {
            v105 = 0;
            v104 = 0;
          }
          else
          {
            if ( (_DWORD)v94 )
            {
              v96 = 1;
              v97 = *(_DWORD *)v93 == 0;
              if ( (_DWORD)v94 != 1 )
              {
                v96 = 2;
                v97 += *(_DWORD *)(v93 + 4) == 0;
                if ( (_DWORD)v94 != 2 )
                {
                  v96 = 3;
                  v97 += *(_DWORD *)(v93 + 8) == 0;
                }
              }
            }
            else
            {
              v97 = 0;
              v96 = 0;
            }
            v98 = 0;
            v99 = (const __m128i *)(v93 + 4 * v94);
            v100 = v91 - v94;
            v101 = 0;
            do
            {
              v102 = _mm_load_si128(v99);
              ++v101;
              ++v99;
              v98 = _mm_sub_epi32(v98, _mm_cmpeq_epi32(v102, (__m128i)0LL));
            }
            while ( v100 >> 2 > v101 );
            v103 = _mm_add_epi32(v98, _mm_srli_si128(v98, 8));
            v104 = (v100 & 0xFFFFFFFC) + v96;
            v105 = v97 + _mm_cvtsi128_si32(_mm_add_epi32(v103, _mm_srli_si128(v103, 4)));
            if ( (v100 & 0xFFFFFFFC) == v100 )
              goto LABEL_133;
          }
          v105 += *(_DWORD *)(v93 + 4LL * (int)v104) == 0;
          if ( (int)(v104 + 1) < v91 )
          {
            v105 += *(_DWORD *)(v93 + 4LL * (int)(v104 + 1)) == 0;
            if ( (int)(v104 + 2) < v91 )
            {
              v105 += *(_DWORD *)(v93 + 4LL * (int)(v104 + 2)) == 0;
              if ( (int)(v104 + 3) < v91 )
              {
                v105 += *(_DWORD *)(v93 + 4LL * (int)(v104 + 3)) == 0;
                if ( v91 > (int)(v104 + 4) )
                {
                  v105 += *(_DWORD *)(v93 + 4LL * (int)(v104 + 4)) == 0;
                  v106 = v104 + 5;
                  if ( v91 > v106 )
                    v105 += *(_DWORD *)(v93 + 4LL * v106) == 0;
                }
              }
            }
          }
        }
LABEL_133:
        printf(
          "CoinPresolveTwoxtwo(2048) - %d rows, %d columns dropped in time %g, total %g\n",
          v92,
          v105 - v5,
          (double)SLODWORD(usage.ru_utime.tv_usec) * 0.000001 + (double)SLODWORD(usage.ru_utime.tv_sec) - v146,
          (double)SLODWORD(usage.ru_utime.tv_usec) * 0.000001
        + (double)SLODWORD(usage.ru_utime.tv_sec)
        - *((double *)this + 41));
        return v74;
      }
    }
    v89 += *(_DWORD *)(v77 + 4LL * (int)v88) == 0;
    if ( v76 > (int)(v88 + 1) )
    {
      v89 += *(_DWORD *)(v77 + 4LL * (int)(v88 + 1)) == 0;
      if ( (int)(v88 + 2) < v76 )
      {
        v89 += *(_DWORD *)(v77 + 4LL * (int)(v88 + 2)) == 0;
        if ( v76 > (int)(v88 + 3) )
        {
          v89 += *(_DWORD *)(v77 + 4LL * (int)(v88 + 3)) == 0;
          if ( v76 > (int)(v88 + 4) )
          {
            v89 += *(_DWORD *)(v77 + 4LL * (int)(v88 + 4)) == 0;
            v90 = v88 + 5;
            if ( v76 > v90 )
              v89 += *(_DWORD *)(v77 + 4LL * v90) == 0;
          }
        }
      }
    }
    goto LABEL_116;
  }
  return v74;
}

