// Alternative name is '_ZN19CoinPostsolveMatrixC2EP10ClpSimplexiiidPdS2_PhS3_'
void __fastcall CoinPostsolveMatrix::CoinPostsolveMatrix(
        CoinPostsolveMatrix *this,
        const void **a2,
        int a3,
        int a4,
        int a5,
        double a6,
        double *a7,
        double *a8,
        unsigned __int8 *a9,
        unsigned __int8 *a10)
{
  unsigned __int64 v15; // rdi
  __int64 v16; // rax
  unsigned __int64 v17; // rdi
  int v18; // eax
  int v19; // r13d
  const void *v20; // rdi
  __int64 (*v21)(void); // rax
  __int64 v22; // r15
  signed int v23; // ebp
  char *v24; // rsi
  int v25; // edx
  int v26; // r9d
  __int64 v27; // rax
  __int64 v28; // r8
  unsigned __int64 v29; // rdi
  int v30; // edx
  int *v31; // rsi
  int v32; // edx
  __int64 v33; // r14
  unsigned __int64 v34; // rdi
  void *v35; // rax
  unsigned __int64 v36; // rdi
  void *v37; // rax
  unsigned __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // rsi
  __m128i si128; // xmm4
  __int64 v42; // r9
  __m128i v43; // xmm3
  __m128i v44; // xmm2
  int v45; // eax
  __int64 v46; // rdi
  signed int v47; // edx
  signed int v48; // eax
  __int64 v49; // r13
  __int64 v50; // rcx
  signed int v51; // r10d
  __int64 v52; // r12
  __int64 v53; // r12
  unsigned int v54; // r11d
  __int64 v55; // rcx
  unsigned int v56; // edx
  __m128i v57; // xmm0
  __m128i v58; // xmm1
  int v59; // edi
  __int64 v60; // r8
  signed int v61; // ecx
  __int64 v62; // rax
  __int64 v63; // rdx
  __int64 v64; // rdx
  unsigned int v65; // r9d
  __int64 v66; // rdx
  __m128i v67; // xmm3
  unsigned int v68; // eax
  __m128i v69; // xmm2
  __m128i v70; // xmm0
  __m128i v71; // xmm1
  unsigned __int64 v72; // r10
  __int64 v73; // rax
  int v74; // edi
  double *v75; // rsi
  unsigned int v76; // edx
  unsigned int v77; // r11d
  __int64 v78; // rax
  __int128 v79; // xmm1
  double *v80; // rax
  int v81; // edi
  __int64 v82; // rax
  int v83; // edi
  int v84; // r9d
  double *v85; // rsi
  unsigned int v86; // edx
  unsigned int v87; // r10d
  __int64 v88; // rax
  unsigned int v89; // r10d
  __int128 v90; // xmm1
  double *v91; // rax
  int v92; // edi
  int v93; // edi
  int *v94; // rax
  int v95; // edi
  __int64 v96; // rdi
  size_t v97; // r15
  int *v98; // rsi
  int v99; // edx
  int v100; // edi
  int *v101; // rax
  int v102; // edi
  __int64 v103; // rdi
  int v104; // [rsp+4h] [rbp-B4h]
  __int64 v105; // [rsp+8h] [rbp-B0h]
  __int64 n; // [rsp+18h] [rbp-A0h]
  _BYTE v107[32]; // [rsp+20h] [rbp-98h] BYREF
  void *v108; // [rsp+40h] [rbp-78h]
  void *v109; // [rsp+48h] [rbp-70h]
  void *src; // [rsp+50h] [rbp-68h]
  void *v111; // [rsp+58h] [rbp-60h]

  CoinPrePostsolveMatrix::CoinPrePostsolveMatrix(this, (const ClpSimplex *)a2, a3, a4, a5, 2.0);
  v15 = *((int *)this + 6);
  *((_DWORD *)this + 64) = 0;
  *((_DWORD *)this + 65) = v15;
  if ( v15 > 0x1FFFFFFFFFFFFFFELL )
    __cxa_throw_bad_array_new_length();
  v16 = operator new[](4 * v15);
  v17 = *((int *)this + 3);
  *((_QWORD *)this + 33) = v16;
  *((_QWORD *)this + 34) = operator new[](v17);
  *((_QWORD *)this + 35) = operator new[](a4);
  *((_DWORD *)this + 6) = *((_DWORD *)this + 65);
  v18 = *((_DWORD *)a2 + 26);
  *((_DWORD *)this + 1) = v18;
  v104 = v18;
  v19 = *((_DWORD *)a2 + 27);
  *((_QWORD *)this + 20) = a7;
  *((_QWORD *)this + 21) = 0;
  *((_QWORD *)this + 23) = 0;
  *((_QWORD *)this + 22) = a8;
  *(_DWORD *)this = v19;
  *((_QWORD *)this + 24) = a9;
  *((_QWORD *)this + 25) = a10;
  v20 = a2[24];
  if ( !v20 )
    BUG();
  v21 = **(__int64 (***)(void))v20;
  if ( (char *)v21 == (char *)ClpPackedMatrix::getPackedMatrix )
    v22 = *((_QWORD *)v20 + 11);
  else
    v22 = v21();
  v23 = *(_DWORD *)(v22 + 72);
  v24 = *(char **)(v22 + 48);
  if ( !v23 || (v25 = *(_DWORD *)(v22 + 64) - 1, v26 = *(_DWORD *)&v24[4 * v25], v27 = 4LL * v25, v23 == v26) || v25 < 0 )
  {
LABEL_12:
    v105 = v19;
    n = 4LL * v19;
    memcpy(*((void **)this + 5), v24, n);
    v31 = (int *)(n + *((_QWORD *)this + 5));
    v32 = *((_DWORD *)this + 3) - v19;
    if ( v32 )
    {
      v93 = v32 + 7;
      v94 = (int *)(n + *((_QWORD *)this + 5));
      if ( v32 >= 0 )
        v93 = *((_DWORD *)this + 3) - v19;
      v95 = v93 >> 3;
      if ( v95 > 0 )
      {
        v96 = (unsigned int)(v95 - 1);
        do
        {
          *(_OWORD *)v94 = 0;
          v94 += 8;
          *((_OWORD *)v94 - 1) = 0;
        }
        while ( v94 != &v31[8 * v96 + 8] );
        v94 = &v31[8 * (int)v96 + 8];
      }
      switch ( v32 % 8 )
      {
        case 1:
          goto LABEL_88;
        case 2:
          goto LABEL_87;
        case 3:
          goto LABEL_86;
        case 4:
          goto LABEL_85;
        case 5:
          goto LABEL_84;
        case 6:
          goto LABEL_83;
        case 7:
          v94[6] = 0;
LABEL_83:
          v94[5] = 0;
LABEL_84:
          v94[4] = 0;
LABEL_85:
          v94[3] = 0;
LABEL_86:
          v94[2] = 0;
LABEL_87:
          v94[1] = 0;
LABEL_88:
          *v94 = 0;
          break;
        default:
          break;
      }
    }
    *v31 = a5;
    v33 = v23;
    memcpy(*((void **)this + 6), *(const void **)(v22 + 56), n);
    memcpy(*((void **)this + 7), *(const void **)(v22 + 40), 4LL * v23);
    memcpy(*((void **)this + 8), *(const void **)(v22 + 32), 8LL * v23);
    goto LABEL_14;
  }
  v28 = *(_QWORD *)(v22 + 56);
  if ( *(_DWORD *)&v24[4 * v25 + 4] - v26 == *(_DWORD *)(v28 + 4LL * v25) )
  {
    v29 = 4 * (v25 - (unsigned __int64)(unsigned int)v25);
    while ( v27 != v29 )
    {
      v30 = *(_DWORD *)&v24[v27] - *(_DWORD *)&v24[v27 - 4];
      v27 -= 4;
      if ( v30 != *(_DWORD *)(v28 + v27) )
        goto LABEL_89;
    }
    goto LABEL_12;
  }
LABEL_89:
  CoinPackedMatrix::CoinPackedMatrix((CoinPackedMatrix *)v107, (const CoinPackedMatrix *)v22);
  CoinPackedMatrix::removeGaps((CoinPackedMatrix *)v107, -1.0);
  CoinPackedMatrix::setExtraGap((CoinPackedMatrix *)v107, 0.0);
  v97 = 4LL * v19;
  v105 = v19;
  memcpy(*((void **)this + 5), src, v97);
  v98 = (int *)(v97 + *((_QWORD *)this + 5));
  v99 = *((_DWORD *)this + 3) - v19;
  if ( v99 )
  {
    v100 = v99 + 7;
    v101 = (int *)(v97 + *((_QWORD *)this + 5));
    if ( v99 >= 0 )
      v100 = *((_DWORD *)this + 3) - v19;
    v102 = v100 >> 3;
    if ( v102 > 0 )
    {
      v103 = (unsigned int)(v102 - 1);
      do
      {
        *(_OWORD *)v101 = 0;
        v101 += 8;
        *((_OWORD *)v101 - 1) = 0;
      }
      while ( v101 != &v98[8 * v103 + 8] );
      v101 = &v98[8 * (int)v103 + 8];
    }
    switch ( v99 % 8 )
    {
      case 1:
        goto LABEL_105;
      case 2:
        goto LABEL_104;
      case 3:
        goto LABEL_103;
      case 4:
        goto LABEL_102;
      case 5:
        goto LABEL_101;
      case 6:
        goto LABEL_100;
      case 7:
        v101[6] = 0;
LABEL_100:
        v101[5] = 0;
LABEL_101:
        v101[4] = 0;
LABEL_102:
        v101[3] = 0;
LABEL_103:
        v101[2] = 0;
LABEL_104:
        v101[1] = 0;
LABEL_105:
        *v101 = 0;
        break;
      default:
        break;
    }
  }
  *v98 = a5;
  v33 = v23;
  memcpy(*((void **)this + 6), v111, 4LL * v19);
  memcpy(*((void **)this + 7), v109, 4LL * v23);
  memcpy(*((void **)this + 8), v108, 8LL * v23);
  CoinPackedMatrix::~CoinPackedMatrix((CoinPackedMatrix *)v107);
LABEL_14:
  memset(*((void **)this + 34), -1, *((int *)this + 3));
  memset(*((void **)this + 35), -1, *((int *)this + 4));
  v34 = *((int *)this + 4);
  if ( v34 > 0xFFFFFFFFFFFFFFFLL )
    __cxa_throw_bad_array_new_length();
  v35 = (void *)operator new[](8 * v34);
  *((_QWORD *)this + 21) = v35;
  memcpy(v35, a2[16], 8LL * v104);
  v36 = *((int *)this + 3);
  if ( v36 > 0xFFFFFFFFFFFFFFFLL )
    __cxa_throw_bad_array_new_length();
  v37 = (void *)operator new[](8 * v36);
  *((_QWORD *)this + 23) = v37;
  v38 = (unsigned __int64)memcpy(v37, a2[17], 8 * v105);
  if ( a6 < 0.0 )
  {
    if ( v104 > 0 )
    {
      v72 = *((_QWORD *)this + 21);
      v73 = (v72 >> 3) & 1;
      v74 = 0;
      if ( v104 - 1 < 2 - (unsigned int)((_DWORD)v73 == 0) )
        goto LABEL_64;
      if ( (_DWORD)v73 )
      {
        v74 = 1;
        *(double *)v72 = -*(double *)v72;
      }
      v75 = (double *)(v72 + 8 * v73);
      v76 = 0;
      v77 = v104 - v73;
      v78 = 0;
      do
      {
        ++v76;
        *(double *)&v79 = -v75[v78];
        *((double *)&v79 + 1) = -v75[v78 + 1];
        *(_OWORD *)&v75[v78] = v79;
        v78 += 2;
      }
      while ( v77 >> 1 > v76 );
      v74 += v77 & 0xFFFFFFFE;
      if ( v77 != (v77 & 0xFFFFFFFE) )
      {
LABEL_64:
        v80 = (double *)(v72 + 8LL * v74);
        v81 = v74 + 1;
        *v80 = -*v80;
        if ( v104 > v81 )
          *(double *)(v72 + 8LL * v81) = -*(double *)(v72 + 8LL * v81);
      }
    }
    if ( v19 > 0 )
    {
      v82 = (v38 >> 3) & 1;
      v83 = 0;
      if ( v19 - 1 < 2 - (unsigned int)((_DWORD)v82 == 0) )
        goto LABEL_73;
      if ( (_DWORD)v82 )
      {
        v83 = 1;
        *(double *)v38 = -*(double *)v38;
      }
      v84 = v19 - v82;
      v85 = (double *)(v38 + 8 * v82);
      v86 = 0;
      v87 = v19 - v82;
      v88 = 0;
      v89 = v87 >> 1;
      do
      {
        ++v86;
        *(double *)&v90 = -v85[v88];
        *((double *)&v90 + 1) = -v85[v88 + 1];
        *(_OWORD *)&v85[v88] = v90;
        v88 += 2;
      }
      while ( v89 > v86 );
      v83 += v84 & 0xFFFFFFFE;
      if ( v84 != (v84 & 0xFFFFFFFE) )
      {
LABEL_73:
        v91 = (double *)(v38 + 8LL * v83);
        v92 = v83 + 1;
        *v91 = -*v91;
        if ( v19 > v92 )
          *(double *)(v38 + 8LL * v92) = -*(double *)(v38 + 8LL * v92);
      }
    }
  }
  memcpy(*((void **)this + 20), a2[15], 8 * v105);
  ClpModel::setDblParam(a2, 4);
  if ( v19 > 0 )
  {
    v39 = *((_QWORD *)this + 6);
    v40 = 0;
    si128 = _mm_load_si128((const __m128i *)&xmmword_289BB0);
    v42 = 4LL * (unsigned int)(v19 - 1) + 4;
    v43 = _mm_load_si128((const __m128i *)&xmmword_289BC0);
    v44 = _mm_load_si128((const __m128i *)&xmmword_289C00);
    do
    {
      while ( 1 )
      {
        v45 = *(_DWORD *)(v39 + v40);
        if ( v45 )
          break;
        v40 += 4;
        if ( v40 == v42 )
          goto LABEL_38;
      }
      v46 = *((_QWORD *)this + 33);
      v47 = *(_DWORD *)(*((_QWORD *)this + 5) + v40);
      v48 = v47 + v45;
      if ( v47 >= v48 )
        goto LABEL_37;
      v49 = v47;
      v50 = -(int)((unsigned __int64)(v46 + 4LL * v47) >> 2) & 3;
      if ( (unsigned int)(v48 - v47 - 1) > 5 )
      {
        v51 = *(_DWORD *)(*((_QWORD *)this + 5) + v40);
        if ( (_DWORD)v50 )
        {
          v51 = v47 + 1;
          *(_DWORD *)(v46 + 4LL * v47) = v47 + 1;
          if ( (_DWORD)v50 != 1 )
          {
            v52 = v51;
            v51 = v47 + 2;
            *(_DWORD *)(v46 + 4 * v52) = v47 + 2;
            if ( (_DWORD)v50 != 2 )
            {
              v53 = v51;
              v51 = v47 + 3;
              *(_DWORD *)(v46 + 4 * v53) = v47 + 3;
            }
          }
        }
        v54 = v48 - v47 - v50;
        v55 = v46 + 4 * (v47 + v50);
        v56 = 0;
        v57 = _mm_add_epi32(_mm_shuffle_epi32(_mm_cvtsi32_si128(v51), 0), si128);
        do
        {
          v58 = v57;
          ++v56;
          v57 = _mm_add_epi32(v57, v43);
          v55 += 16;
          *(__m128i *)(v55 - 16) = _mm_add_epi32(v58, v44);
        }
        while ( v54 >> 2 > v56 );
        v47 = (v54 & 0xFFFFFFFC) + v51;
        if ( v54 == (v54 & 0xFFFFFFFC) )
          goto LABEL_37;
        v49 = v47;
      }
      *(_DWORD *)(v46 + 4 * v49) = v47 + 1;
      if ( v48 > v47 + 1 )
      {
        *(_DWORD *)(v46 + 4LL * (v47 + 1)) = v47 + 2;
        if ( v48 > v47 + 2 )
        {
          *(_DWORD *)(v46 + 4LL * (v47 + 2)) = v47 + 3;
          if ( v48 > v47 + 3 )
          {
            *(_DWORD *)(v46 + 4LL * (v47 + 3)) = v47 + 4;
            if ( v48 > v47 + 4 )
            {
              *(_DWORD *)(v46 + 4LL * (v47 + 4)) = v47 + 5;
              if ( v48 > v47 + 5 )
                *(_DWORD *)(v46 + 4LL * (v47 + 5)) = v47 + 6;
            }
          }
        }
      }
LABEL_37:
      v40 += 4;
      *(_DWORD *)(v46 + 4LL * v48 - 4) = -66666666;
    }
    while ( v40 != v42 );
  }
LABEL_38:
  v59 = *((_DWORD *)this + 65);
  if ( v59 > v23 )
  {
    v60 = *((_QWORD *)this + 33);
    v61 = v23;
    v62 = -(int)((unsigned __int64)(v60 + 4 * v33) >> 2) & 3;
    if ( (unsigned int)(v59 - 1 - v23) <= 5 )
      goto LABEL_47;
    if ( (_DWORD)v62 )
    {
      v61 = v23 + 1;
      *(_DWORD *)(v60 + 4 * v33) = v23 + 1;
      if ( (_DWORD)v62 != 1 )
      {
        v63 = v61;
        v61 = v23 + 2;
        *(_DWORD *)(v60 + 4 * v63) = v23 + 2;
        if ( (_DWORD)v62 != 2 )
        {
          v64 = v61;
          v61 = v23 + 3;
          *(_DWORD *)(v60 + 4 * v64) = v23 + 3;
        }
      }
    }
    v65 = v59 - v23 - v62;
    v66 = v60 + 4 * (v62 + v33);
    v67 = _mm_load_si128((const __m128i *)&xmmword_289BC0);
    v68 = 0;
    v69 = _mm_load_si128((const __m128i *)&xmmword_289C00);
    v70 = _mm_add_epi32(_mm_shuffle_epi32(_mm_cvtsi32_si128(v61), 0), (__m128i)xmmword_289BB0);
    do
    {
      v71 = v70;
      ++v68;
      v70 = _mm_add_epi32(v70, v67);
      v66 += 16;
      *(__m128i *)(v66 - 16) = _mm_add_epi32(v71, v69);
    }
    while ( v65 >> 2 > v68 );
    v61 += v65 & 0xFFFFFFFC;
    if ( (v65 & 0xFFFFFFFC) != v65 )
    {
LABEL_47:
      *(_DWORD *)(v60 + 4LL * v61) = v61 + 1;
      if ( v59 > v61 + 1 )
      {
        *(_DWORD *)(v60 + 4LL * (v61 + 1)) = v61 + 2;
        if ( v59 > v61 + 2 )
        {
          *(_DWORD *)(v60 + 4LL * (v61 + 2)) = v61 + 3;
          if ( v61 + 3 < v59 )
          {
            *(_DWORD *)(v60 + 4LL * (v61 + 3)) = v61 + 4;
            if ( v61 + 4 < v59 )
            {
              *(_DWORD *)(v60 + 4LL * (v61 + 4)) = v61 + 5;
              if ( v61 + 5 < v59 )
                *(_DWORD *)(v60 + 4LL * (v61 + 5)) = v61 + 6;
            }
          }
        }
      }
    }
  }
  if ( v59 )
    *(_DWORD *)(*((_QWORD *)this + 33) + 4LL * v59 - 4) = -66666666;
  *((_DWORD *)this + 64) = v23;
}

