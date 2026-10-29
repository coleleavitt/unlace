// Alternative name is '_ZN16ClpPackedMatrix3C1EP10ClpSimplexPK16CoinPackedMatrix'
void __fastcall ClpPackedMatrix3::ClpPackedMatrix3(ClpPackedMatrix3 *this, ClpSimplex *a2, const CoinPackedMatrix *a3)
{
  ClpPackedMatrix3 *v4; // rbx
  bool v5; // zf
  signed int v6; // eax
  int v7; // r12d
  __int64 v8; // rax
  _DWORD *v9; // r14
  __int64 v10; // rax
  __int64 v11; // rbp
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 v14; // r9
  __m128i si128; // xmm4
  int v16; // esi
  int v17; // edi
  int v18; // r11d
  __int64 v19; // rdx
  unsigned __int64 v20; // rax
  int v21; // ebx
  __m128i v22; // xmm2
  unsigned int v23; // r12d
  __int64 v24; // rax
  unsigned int v25; // edx
  __m128d *v26; // rax
  __m128d v27; // xmm0
  __m128i v28; // xmm2
  int v29; // esi
  char v30; // dl
  _DWORD *v31; // rax
  int v32; // r15d
  __int64 v33; // rsi
  int v34; // ecx
  __int64 v35; // rdi
  int v36; // eax
  int v37; // eax
  unsigned int v38; // r12d
  int v39; // esi
  __int64 v40; // rdx
  int v41; // eax
  unsigned int v42; // eax
  unsigned __int64 v43; // r13
  unsigned __int64 v44; // r13
  unsigned __int64 v45; // r12
  unsigned __int64 v46; // r12
  unsigned __int64 v47; // rdi
  __int64 v48; // rax
  int v49; // ecx
  unsigned int v50; // edi
  unsigned __int64 v51; // rdi
  __int64 v52; // rax
  void *v53; // rdi
  __int64 v54; // r13
  unsigned __int64 v55; // rax
  __int64 v56; // rsi
  _DWORD *v57; // r11
  int v58; // r9d
  unsigned int v59; // edx
  unsigned int v60; // r12d
  __int64 v61; // rdx
  __int64 v62; // rdi
  _DWORD *v63; // r10
  __int64 v64; // rdx
  unsigned int v65; // esi
  char *v66; // rdi
  signed int v67; // r9d
  int v68; // edx
  int v69; // edx
  int v70; // edx
  int v71; // edx
  signed int v72; // r9d
  __int64 v73; // rdx
  unsigned int v74; // edi
  unsigned int v75; // r11d
  _DWORD *v76; // r9
  __m128i v77; // xmm2
  unsigned int v78; // r12d
  _DWORD *v79; // r10
  unsigned int v80; // r11d
  __int64 v81; // rdx
  unsigned int v82; // esi
  __m128i v83; // xmm3
  __m128i v84; // xmm0
  unsigned int v85; // edi
  unsigned int v86; // edx
  unsigned int v87; // edx
  unsigned int v88; // edx
  unsigned int v89; // edx
  int v90; // edi
  __int64 v91; // rdx
  __int64 v92; // rsi
  _DWORD *v93; // rax
  _DWORD *v94; // rsi
  int v95; // ecx
  int v96; // eax
  unsigned __int64 v97; // rdi
  void *v98; // rax
  _DWORD *v99; // rax
  __int64 v100; // r12
  _DWORD *v101; // r9
  unsigned __int64 v102; // rcx
  __int64 v103; // rcx
  __int64 v104; // rdx
  int v105; // esi
  int v106; // eax
  __int64 v107; // r10
  unsigned int v108; // eax
  _DWORD *v109; // r10
  __int64 v110; // rax
  _DWORD *v111; // r9
  __int64 v112; // r13
  __int64 v113; // rsi
  int v114; // r15d
  __m128i v115; // xmm4
  __int64 v116; // rcx
  int v117; // r8d
  int v118; // r9d
  unsigned __int64 v119; // rax
  _BOOL4 v120; // r14d
  int v121; // edi
  __m128i v122; // xmm2
  unsigned int v123; // r11d
  unsigned int v124; // edx
  __m128d *v125; // rax
  __m128d v126; // xmm0
  __m128i v127; // xmm2
  int v128; // r14d
  int v129; // edi
  int v130; // edi
  int v131; // edi
  __int64 v132; // rax
  _DWORD *v133; // rdx
  int v134; // eax
  signed int v135; // eax
  __int64 v136; // rdi
  __int64 v137; // r8
  __int64 v138; // rdi
  __int64 v139; // r10
  __int64 v140; // rdx
  double v141; // xmm0_8
  int v142; // r11d
  __int64 v143; // rcx
  __int64 v144; // r9
  CoinArrayWithLength *v145; // rbp
  double v146; // xmm0_8
  int v147; // r11d
  __int64 v148; // r9
  __int64 v149; // rcx
  __int64 v150; // rdi
  __int64 v151; // r8
  __int64 v152; // rdi
  __int64 v153; // r9
  __int64 v154; // rax
  double v155; // xmm0_8
  int v156; // r10d
  __int64 v157; // rdx
  __int64 v158; // rcx
  __int64 v159; // rax
  double v160; // xmm0_8
  int v161; // r10d
  __int64 v162; // rcx
  __int64 v163; // rdx
  int v164; // edx
  int v165; // edx
  __int64 v166; // rdx
  __int64 v167; // rcx
  _DWORD *v168; // rdx
  __int64 v169; // rsi
  unsigned __int64 v170; // rdx
  __int64 v171; // [rsp+8h] [rbp-90h]
  __int64 v172; // [rsp+10h] [rbp-88h]
  int v173; // [rsp+1Ch] [rbp-7Ch]
  _DWORD *v175; // [rsp+20h] [rbp-78h]
  signed int v176; // [rsp+28h] [rbp-70h]
  int *v177; // [rsp+28h] [rbp-70h]
  __int64 v178; // [rsp+30h] [rbp-68h]
  int v179; // [rsp+38h] [rbp-60h]
  __int64 v180; // [rsp+38h] [rbp-60h]
  __int64 v182; // [rsp+40h] [rbp-58h]
  __int64 v183; // [rsp+48h] [rbp-50h]
  int v184; // [rsp+50h] [rbp-48h]
  _DWORD *v185; // [rsp+50h] [rbp-48h]
  int v186; // [rsp+58h] [rbp-40h]
  int v187; // [rsp+58h] [rbp-40h]
  signed int v188; // [rsp+5Ch] [rbp-3Ch]

  v4 = this;
  *((_QWORD *)this + 1) = 0;
  *((_QWORD *)this + 2) = 0;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 20) = 0;
  *((_QWORD *)this + 4) = 0;
  *((_QWORD *)this + 5) = 0;
  *((_QWORD *)this + 6) = 0;
  *(_QWORD *)this = off_4D0E50;
  *((_QWORD *)this + 7) = 0;
  *((_QWORD *)this + 8) = 0;
  *((_QWORD *)this + 9) = 0;
  v5 = *((_BYTE *)a3 + 8) == 0;
  *((_DWORD *)this + 3) = *((_DWORD *)a2 + 27);
  v6 = *((_DWORD *)a3 + 16);
  v176 = v6;
  if ( v5 )
  {
    v173 = *((_DWORD *)a3 + 16);
    v176 = *((_DWORD *)a3 + 17);
  }
  else
  {
    v6 = *((_DWORD *)a3 + 17);
    v173 = v6;
  }
  v7 = v6 + 1;
  if ( (unsigned __int64)(v6 + 1) > 0x1FFFFFFFFFFFFFFELL )
LABEL_195:
    __cxa_throw_bad_array_new_length();
  v8 = operator new[](4LL * v7);
  v9 = (_DWORD *)v8;
  if ( v7 )
  {
    v164 = v173 + 8;
    if ( v7 >= 0 )
      v164 = v7;
    v165 = v164 >> 3;
    if ( v165 > 0 )
    {
      v166 = (unsigned int)(v165 - 1);
      v167 = v8 + 32 * v166 + 32;
      do
      {
        *(_OWORD *)v8 = 0;
        v8 += 32;
        *(_OWORD *)(v8 - 16) = 0;
      }
      while ( v8 != v167 );
      v8 = (__int64)&v9[8 * (int)v166 + 8];
    }
    switch ( v7 % 8 )
    {
      case 1:
        goto LABEL_184;
      case 2:
        goto LABEL_183;
      case 3:
        goto LABEL_182;
      case 4:
        goto LABEL_181;
      case 5:
        goto LABEL_180;
      case 6:
        goto LABEL_179;
      case 7:
        *(_DWORD *)(v8 + 24) = 0;
LABEL_179:
        *(_DWORD *)(v8 + 20) = 0;
LABEL_180:
        *(_DWORD *)(v8 + 16) = 0;
LABEL_181:
        *(_DWORD *)(v8 + 12) = 0;
LABEL_182:
        *(_DWORD *)(v8 + 8) = 0;
LABEL_183:
        *(_DWORD *)(v8 + 4) = 0;
LABEL_184:
        *(_DWORD *)v8 = 0;
        break;
      default:
        break;
    }
  }
  v183 = *((_QWORD *)a3 + 5);
  v171 = *((_QWORD *)a3 + 6);
  v10 = *((_QWORD *)a3 + 7);
  v11 = *((_QWORD *)a3 + 4);
  v172 = v10;
  v12 = *((_QWORD *)a2 + 22);
  v178 = *((_QWORD *)a2 + 33);
  v13 = *((_QWORD *)a2 + 23);
  if ( v176 > 0 )
  {
    v14 = 0;
    si128 = _mm_load_si128((const __m128i *)&xmmword_28D790);
    v179 = 0;
    while ( 1 )
    {
      v16 = *(_DWORD *)(v171 + 4 * v14);
      v17 = *(_DWORD *)(v172 + 4 * v14);
      v18 = v16 + v17;
      if ( v16 >= v16 + v17 )
        goto LABEL_33;
      v19 = v16;
      v20 = ((unsigned __int64)(v11 + 8LL * v16) >> 3) & 1;
      v21 = 0;
      if ( (unsigned int)(v17 - 1) > 5 )
      {
        if ( (_DWORD)v20 )
          v21 = *(double *)(v11 + 8LL * v16++) == 0.0;
        v22 = 0;
        v23 = v17 - v20;
        v24 = v19 + v20;
        v25 = 0;
        v26 = (__m128d *)(v11 + 8 * v24);
        do
        {
          v27 = *v26;
          ++v25;
          v26 += 2;
          v22 = _mm_add_epi32(
                  v22,
                  (__m128i)_mm_shuffle_ps(
                             (__m128)_mm_and_si128((__m128i)_mm_cmpeq_pd(v27, (__m128d)0LL), si128),
                             (__m128)_mm_and_si128((__m128i)_mm_cmpeq_pd(v26[-1], (__m128d)0LL), si128),
                             136));
        }
        while ( v23 >> 2 > v25 );
        v28 = _mm_add_epi32(v22, _mm_srli_si128(v22, 8));
        v21 += _mm_cvtsi128_si32(_mm_add_epi32(v28, _mm_srli_si128(v28, 4)));
        v16 += v23 & 0xFFFFFFFC;
        if ( v23 == (v23 & 0xFFFFFFFC) )
          goto LABEL_32;
        v19 = v16;
      }
      if ( *(double *)(v11 + 8 * v19) == 0.0 )
        ++v21;
      if ( v18 > v16 + 1 )
      {
        if ( *(double *)(v11 + 8LL * (v16 + 1)) == 0.0 )
          ++v21;
        if ( v18 > v16 + 2 )
        {
          if ( *(double *)(v11 + 8LL * (v16 + 2)) == 0.0 )
            ++v21;
          if ( v18 > v16 + 3 )
          {
            if ( *(double *)(v11 + 8LL * (v16 + 3)) == 0.0 )
              ++v21;
            if ( v18 > v16 + 4 )
            {
              if ( *(double *)(v11 + 8LL * (v16 + 4)) == 0.0 )
                ++v21;
              v29 = v16 + 5;
              if ( v18 > v29 && *(double *)(v11 + 8LL * v29) == 0.0 )
                ++v21;
            }
          }
        }
      }
LABEL_32:
      v17 -= v21;
LABEL_33:
      v30 = *(_BYTE *)(v178 + v14) & 3;
      if ( *(double *)(v12 + 8 * v14) == -1.797693134862316e308 && *(double *)(v13 + 8 * v14) == 1.797693134862316e308 )
      {
        v179 += v17;
        if ( v30 )
          *(_BYTE *)(v178 + v14) = *(_BYTE *)(v178 + v14) & 0xF8 | 4;
        v31 = v9;
      }
      else if ( v30 )
      {
        v31 = &v9[v17];
      }
      else
      {
        v179 += v17;
        v31 = v9;
      }
      ++v14;
      ++*v31;
      if ( v14 == (unsigned int)(v176 - 1) + 1LL )
      {
        v4 = this;
        goto LABEL_40;
      }
    }
  }
  v179 = 0;
LABEL_40:
  v32 = *v9 + *((_DWORD *)v4 + 3) - v176;
  *((_DWORD *)v4 + 6) = 0;
  *v9 = -1;
  if ( v173 <= 0 )
  {
    *((_DWORD *)v4 + 4) = v32;
    v38 = (v179 + 3) & 0xFFFFFFFC;
    if ( v173 )
    {
      v186 = v173;
      goto LABEL_57;
    }
    v186 = 0;
    v39 = 0;
  }
  else
  {
    v33 = 1;
    v34 = v179;
    v35 = (unsigned int)(v173 - 1) + 2LL;
    do
    {
      while ( 1 )
      {
        v36 = v9[v33];
        if ( v36 )
          break;
        v9[v33++] = -1;
        if ( v33 == v35 )
          goto LABEL_50;
      }
      if ( v36 <= 5 || (int)v33 > 100 )
      {
        v32 += v36;
        v9[v33] = -1;
        v34 += v33 * v36;
      }
      else
      {
        ++*((_DWORD *)v4 + 2);
        if ( *((_DWORD *)v4 + 6) >= v36 )
          v36 = *((_DWORD *)v4 + 6);
        *((_DWORD *)v4 + 6) = v36;
      }
      ++v33;
    }
    while ( v33 != v35 );
LABEL_50:
    v179 = v34;
    v37 = 100;
    *((_DWORD *)v4 + 4) = v32;
    v38 = (v34 + 3) & 0xFFFFFFFC;
    if ( v173 <= 100 )
      v37 = v173;
    v186 = v37;
    v39 = v37;
  }
  v40 = 0;
  do
  {
    v41 = v9[v40];
    if ( v41 > 0 )
    {
      v42 = (v41 + 3) & 0xFFFFFFFC;
      *((_DWORD *)v4 + 4) += v42;
      v38 += v40 * v42;
    }
    ++v40;
  }
  while ( v39 >= (int)v40 );
LABEL_57:
  v43 = (int)(v38 + 15);
  if ( v43 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_195;
  v44 = 4 * v43;
  v45 = (int)(v38 + 31);
  *((_QWORD *)v4 + 6) = operator new[](v44);
  if ( v45 > 0xFFFFFFFFFFFFFFFLL )
    goto LABEL_195;
  v46 = 8 * v45;
  *((_QWORD *)v4 + 7) = operator new[](v46);
  v47 = v32 + 1;
  if ( v47 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_195;
  v48 = operator new[](4 * v47);
  v49 = *((_DWORD *)v4 + 4);
  *((_QWORD *)v4 + 5) = v48;
  v188 = (v49 + 3) & 0xFFFFFFFC;
  v184 = v188 + v173;
  v50 = (v188 + v173 + 3) & 0xFFFFFFFC;
  *((_DWORD *)v4 + 4) = v50;
  v51 = (int)(2 * v50);
  if ( v51 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_195;
  v52 = operator new[](4 * v51);
  v53 = *((void **)v4 + 6);
  *((_QWORD *)v4 + 4) = v52;
  memset(v53, 0, v44 - 60);
  memset(*((void **)v4 + 7), 0, v46 - 248);
  v54 = *((int *)v4 + 4);
  v55 = *((_QWORD *)v4 + 4);
  v56 = 4 * v54;
  v175 = (_DWORD *)(v55 + 4 * v54);
  if ( v188 > 0 )
  {
    v57 = (_DWORD *)(v55 + v56);
    if ( (v55 + v56 >= v55 + 16 || v56 + 16 <= 0) && (unsigned int)v188 > 0xE )
    {
      v58 = 0;
      v59 = -(int)(v55 >> 2) & 3;
      if ( v59 )
      {
        *(_DWORD *)v55 = -1;
        v58 = 1;
        *v57 = -1;
        if ( v59 != 1 )
        {
          *(_DWORD *)(v55 + 4) = -1;
          v58 = 2;
          v57[1] = -1;
          if ( v59 != 2 )
          {
            *(_DWORD *)(v55 + 8) = -1;
            v58 = 3;
            v57[2] = -1;
          }
        }
      }
      v60 = v188 - v59;
      v61 = 4LL * v59;
      v62 = v56 + v61;
      v63 = (_DWORD *)(v55 + v61);
      v64 = 0;
      v65 = 0;
      v66 = (char *)(v55 + v62);
      do
      {
        ++v65;
        *(_OWORD *)&v63[v64] = -1;
        *(_OWORD *)&v66[v64 * 4] = -1;
        v64 += 4;
      }
      while ( v60 >> 2 > v65 );
      v67 = (v60 & 0xFFFFFFFC) + v58;
      if ( v60 != (v60 & 0xFFFFFFFC) )
      {
        *(_DWORD *)(v55 + 4LL * v67) = -1;
        v175[v67] = -1;
        v68 = v67 + 1;
        if ( v188 > v67 + 1 )
        {
          *(_DWORD *)(v55 + 4LL * v68) = -1;
          v175[v68] = -1;
          v69 = v67 + 2;
          if ( v188 > v67 + 2 )
          {
            *(_DWORD *)(v55 + 4LL * v69) = -1;
            v175[v69] = -1;
            v70 = v67 + 3;
            if ( v188 > v67 + 3 )
            {
              *(_DWORD *)(v55 + 4LL * v70) = -1;
              v175[v70] = -1;
              v71 = v67 + 4;
              if ( v188 > v67 + 4 )
              {
                v72 = v67 + 5;
                *(_DWORD *)(v55 + 4LL * v71) = -1;
                v175[v71] = -1;
                if ( v188 > v72 )
                {
                  *(_DWORD *)(v55 + 4LL * v72) = -1;
                  v175[v72] = -1;
                }
              }
            }
          }
        }
      }
    }
    else
    {
      v170 = 0;
      do
      {
        *(_DWORD *)(v55 + v170) = -1;
        v175[v170 / 4] = -1;
        v170 += 4LL;
      }
      while ( v170 != 4LL * (unsigned int)(v188 - 1) + 4 );
    }
  }
  if ( v173 > 0 )
  {
    v73 = 4LL * v188;
    if ( (4 * (v54 + v176) >= v73 + 16 || v73 >= 4 * (v54 + v176 + 4)) && (unsigned int)v173 > 0xA )
    {
      v74 = 0;
      v75 = -(int)((v55 + v73) >> 2) & 3;
      if ( v75 )
      {
        v74 = 1;
        *(_DWORD *)(v55 + 4LL * v188) = v176;
        v175[v176] = 0;
        if ( v75 != 1 )
        {
          *(_DWORD *)(v55 + 4LL * (v188 + 1)) = v176 + 1;
          v74 = 2;
          v175[v176 + 1] = 1;
          if ( v75 != 2 )
          {
            *(_DWORD *)(v55 + 4LL * (v188 + 2)) = v176 + 2;
            v74 = 3;
            v175[v176 + 2] = 2;
          }
        }
      }
      v76 = (_DWORD *)(v55 + 4 * (v75 + v54 + v176));
      v77 = _mm_load_si128((const __m128i *)&xmmword_289BC0);
      v78 = v173 - v75;
      v79 = (_DWORD *)(v55 + 4 * (v75 + (__int64)v188));
      v80 = (v173 - v75) >> 2;
      v81 = 0;
      v82 = 0;
      v83 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v176), 0);
      v84 = _mm_add_epi32(_mm_shuffle_epi32(_mm_cvtsi32_si128(v74), 0), (__m128i)xmmword_289BB0);
      do
      {
        ++v82;
        *(__m128i *)&v79[v81] = _mm_add_epi32(v83, v84);
        *(__m128i *)&v76[v81] = v84;
        v84 = _mm_add_epi32(v84, v77);
        v81 += 4;
      }
      while ( v80 > v82 );
      v85 = (v78 & 0xFFFFFFFC) + v74;
      if ( v78 != (v78 & 0xFFFFFFFC) )
      {
        *(_DWORD *)(v55 + 4LL * (int)(v188 + v85)) = v176 + v85;
        v175[v176 + v85] = v85;
        v86 = v85 + 1;
        if ( v173 > (int)(v85 + 1) )
        {
          *(_DWORD *)(v55 + 4LL * (int)(v188 + v86)) = v176 + v86;
          v175[v176 + v86] = v86;
          v87 = v85 + 2;
          if ( v173 > (int)(v85 + 2) )
          {
            *(_DWORD *)(v55 + 4LL * (int)(v188 + v87)) = v176 + v87;
            v175[v176 + v87] = v87;
            v88 = v85 + 3;
            if ( v173 > (int)(v85 + 3) )
            {
              *(_DWORD *)(v55 + 4LL * (int)(v188 + v88)) = v88 + v176;
              v175[v88 + v176] = v88;
              v89 = v85 + 4;
              if ( v173 > (int)(v85 + 4) )
              {
                v90 = v85 + 5;
                *(_DWORD *)(v55 + 4LL * (int)(v188 + v89)) = v176 + v89;
                v175[v176 + v89] = v89;
                if ( v173 > v90 )
                {
                  *(_DWORD *)(v55 + 4LL * (v188 + v90)) = v176 + v90;
                  v175[v176 + v90] = v90;
                }
              }
            }
          }
        }
      }
    }
    else
    {
      v168 = (_DWORD *)(v55 + v73);
      v169 = 0;
      do
      {
        v168[v169] = v176 + v169;
        v175[v176 + v169] = v169;
        ++v169;
      }
      while ( v169 != (unsigned int)(v173 - 1) + 1LL );
    }
  }
  if ( v184 < *((_DWORD *)v4 + 4) )
  {
    v91 = v184 + 1;
    v92 = v184 - v91;
    v93 = (_DWORD *)(v92 * 4 + v55);
    v94 = &v175[v92];
    do
    {
      v93[v91] = -1;
      v95 = v91;
      v94[v91++] = -1;
    }
    while ( *((_DWORD *)v4 + 4) > v95 );
  }
  v96 = *((_DWORD *)v4 + 2);
  if ( v96 <= 1 )
  {
    *((_DWORD *)v4 + 2) = 1;
    v97 = 80;
  }
  else
  {
    v97 = 40LL * (v96 + 1);
  }
  v98 = (void *)operator new[](v97);
  *((_QWORD *)v4 + 9) = v98;
  v99 = memset(v98, 0, 40LL * (*((_DWORD *)v4 + 2) + 1));
  v100 = *((_QWORD *)v4 + 7);
  v101 = v99;
  v99[2] = v32;
  v102 = v100 + 8LL * v179;
  if ( (((_BYTE)v100 + 8 * (_BYTE)v179) & 0x1F) != 0 )
    v102 = (v102 & 0xFFFFFFFFFFFFFFE0LL) + 32;
  v103 = (__int64)(v102 - v100) >> 3;
  if ( v173 < 0 )
  {
    v110 = 10;
  }
  else
  {
    v104 = 0;
    v105 = 0;
    do
    {
      v106 = v9[v104];
      if ( v106 > 0 )
      {
        v9[v104] = v105;
        v107 = 5LL * v105;
        v108 = (v106 + 3) & 0xFFFFFFFC;
        ++v105;
        v109 = &v101[2 * v107];
        v109[2] = v32;
        v32 += v108;
        *v109 = v103;
        v109[8] = v104;
        LODWORD(v103) = v104 * v108 + v103;
      }
      ++v104;
    }
    while ( v186 >= (int)v104 );
    if ( v105 <= 0 )
      v105 = 1;
    v110 = 10LL * v105;
  }
  v111 = &v101[v110];
  *((_DWORD *)v4 + 5) = v103;
  v111[8] = 0;
  v111[2] = v188;
  v111[3] = v173;
  v185 = *((_DWORD **)v4 + 5);
  *v185 = 0;
  v112 = *((_QWORD *)a2 + 29);
  if ( v176 > 0 )
  {
    v113 = 0;
    v180 = (unsigned int)(v176 - 1) + 1LL;
    v182 = *((_QWORD *)v4 + 4);
    v114 = 0;
    v187 = 0;
    v177 = v9;
    v115 = _mm_load_si128((const __m128i *)&xmmword_28D790);
    while ( 1 )
    {
      v116 = *(int *)(v171 + 4 * v113);
      v117 = *(_DWORD *)(v172 + 4 * v113);
      v118 = v116 + v117;
      if ( (int)v116 >= (int)v116 + v117 )
      {
        v131 = *(_DWORD *)(v172 + 4 * v113);
        goto LABEL_135;
      }
      v119 = ((unsigned __int64)(v11 + 8LL * (int)v116) >> 3) & 1;
      if ( (unsigned int)(v117 - 1) <= 5 )
        break;
      if ( (_DWORD)v119 )
      {
        v120 = *(double *)(v11 + 8LL * (int)v116) == 0.0;
        v121 = v116 + 1;
      }
      else
      {
        v121 = *(_DWORD *)(v171 + 4 * v113);
        v120 = 0;
      }
      v122 = 0;
      v123 = v117 - v119;
      v124 = 0;
      v125 = (__m128d *)(v11 + 8 * ((int)v116 + v119));
      do
      {
        v126 = *v125;
        ++v124;
        v125 += 2;
        v122 = _mm_add_epi32(
                 v122,
                 (__m128i)_mm_shuffle_ps(
                            (__m128)_mm_and_si128((__m128i)_mm_cmpeq_pd(v126, (__m128d)0LL), v115),
                            (__m128)_mm_and_si128((__m128i)_mm_cmpeq_pd(v125[-1], (__m128d)0LL), v115),
                            136));
      }
      while ( v123 >> 2 > v124 );
      v127 = _mm_add_epi32(v122, _mm_srli_si128(v122, 8));
      v128 = _mm_cvtsi128_si32(_mm_add_epi32(v127, _mm_srli_si128(v127, 4))) + v120;
      v129 = (v123 & 0xFFFFFFFC) + v121;
      if ( (v123 & 0xFFFFFFFC) != v123 )
        goto LABEL_117;
LABEL_134:
      v131 = v117 - v128;
LABEL_135:
      if ( (*(_BYTE *)(v178 + v113) & 3) != 0 )
      {
        v132 = v177[v131];
        if ( (int)v132 < 0 )
          goto LABEL_155;
LABEL_137:
        v133 = (_DWORD *)(*((_QWORD *)v4 + 9) + 40 * v132);
        v134 = v133[3];
        v133[3] = v134 + 1;
        *(_DWORD *)(v182 + 4LL * (v134 + v133[2])) = v113;
        v175[v113] = v134;
        v135 = *v133 + (v134 & 0xFFFFFFFC) * v131 + (v134 & 3);
        if ( (int)v116 >= v118 )
        {
LABEL_142:
          if ( ++v113 == v180 )
            goto LABEL_143;
        }
        else
        {
          v136 = (unsigned int)(v117 - 1);
          v137 = v11 + 8 * v116;
          v138 = v136 + 1;
          v139 = v183 + 4 * v116;
          v140 = 0;
          if ( v112 )
          {
            do
            {
              v141 = *(double *)(v137 + 8 * v140);
              if ( v141 != 0.0 )
              {
                v142 = *(_DWORD *)(v139 + 4 * v140);
                v143 = v135;
                v144 = *((_QWORD *)v4 + 6);
                v135 += 4;
                *(double *)(v100 + 8 * v143) = v141 * *(double *)(v112 + 8 * v113);
                *(_DWORD *)(v144 + 4 * v143) = v142;
              }
              ++v140;
            }
            while ( v140 != v138 );
            goto LABEL_142;
          }
          do
          {
            v146 = *(double *)(v137 + 8 * v140);
            if ( v146 != 0.0 )
            {
              v147 = *(_DWORD *)(v139 + 4 * v140);
              v148 = *((_QWORD *)v4 + 6);
              v149 = v135;
              *(double *)(v100 + 8LL * v135) = v146;
              v135 += 4;
              *(_DWORD *)(v148 + 4 * v149) = v147;
            }
            ++v140;
          }
          while ( v140 != v138 );
          if ( ++v113 == v180 )
            goto LABEL_143;
        }
      }
      else
      {
        v131 = 0;
        v132 = *v177;
        if ( (int)v132 >= 0 )
          goto LABEL_137;
LABEL_155:
        if ( (int)v116 < v118 )
        {
          v150 = (unsigned int)(v117 - 1);
          v151 = v11 + 8 * v116;
          v152 = v150 + 1;
          v153 = v183 + 4 * v116;
          v154 = 0;
          if ( v112 )
          {
            do
            {
              v155 = *(double *)(v151 + 8 * v154);
              if ( v155 != 0.0 )
              {
                v156 = *(_DWORD *)(v153 + 4 * v154);
                v157 = v114;
                v158 = *((_QWORD *)v4 + 6);
                ++v114;
                *(double *)(v100 + 8 * v157) = v155 * *(double *)(v112 + 8 * v113);
                *(_DWORD *)(v158 + 4 * v157) = v156;
              }
              ++v154;
            }
            while ( v154 != v152 );
          }
          else
          {
            do
            {
              v160 = *(double *)(v151 + 8 * v154);
              if ( v160 != 0.0 )
              {
                v161 = *(_DWORD *)(v153 + 4 * v154);
                v162 = *((_QWORD *)v4 + 6);
                v163 = v114;
                *(double *)(v100 + 8LL * v114++) = v160;
                *(_DWORD *)(v162 + 4 * v163) = v161;
              }
              ++v154;
            }
            while ( v154 != v152 );
          }
        }
        v159 = v187;
        *(_DWORD *)(v182 + 4LL * v187++) = v113;
        v175[v113++] = -1;
        v185[v159 + 1] = v114;
        if ( v113 == v180 )
        {
LABEL_143:
          v9 = v177;
          goto LABEL_144;
        }
      }
    }
    v129 = *(_DWORD *)(v171 + 4 * v113);
    v128 = 0;
LABEL_117:
    if ( *(double *)(v11 + 8LL * v129) == 0.0 )
      ++v128;
    if ( v118 > v129 + 1 )
    {
      if ( *(double *)(v11 + 8LL * (v129 + 1)) == 0.0 )
        ++v128;
      if ( v129 + 2 < v118 )
      {
        if ( *(double *)(v11 + 8LL * (v129 + 2)) == 0.0 )
          ++v128;
        if ( v129 + 3 < v118 )
        {
          if ( *(double *)(v11 + 8LL * (v129 + 3)) == 0.0 )
            ++v128;
          if ( v129 + 4 < v118 )
          {
            if ( *(double *)(v11 + 8LL * (v129 + 4)) == 0.0 )
              ++v128;
            v130 = v129 + 5;
            if ( v130 < v118 && *(double *)(v11 + 8LL * v130) == 0.0 )
              ++v128;
          }
        }
      }
    }
    goto LABEL_134;
  }
LABEL_144:
  v145 = (CoinArrayWithLength *)operator new(0x18u);
  CoinArrayWithLength::CoinArrayWithLength(v145, 2048, -6);
  *((_QWORD *)v4 + 8) = v145;
  operator delete[](v9);
}

