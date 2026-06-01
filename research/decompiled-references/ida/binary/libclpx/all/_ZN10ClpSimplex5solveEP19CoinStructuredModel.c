__int64 __fastcall ClpSimplex::solve(ClpSimplex *this, CoinStructuredModel *a2)
{
  int v3; // r13d
  int v4; // r14d
  __int64 v5; // rax
  __int64 v6; // rdx
  int *v7; // r15
  __int64 v8; // rbx
  int *v9; // rsi
  CoinModel *v10; // rax
  __int64 v11; // rax
  const void *v12; // rbp
  void *v13; // rax
  char *v14; // rbp
  __int64 v15; // rax
  unsigned __int64 v16; // rbx
  __int64 v17; // rax
  unsigned __int64 v18; // rbp
  int *v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rcx
  unsigned int v22; // ecx
  unsigned int v23; // eax
  unsigned int v24; // ebp
  __int64 v26; // rdx
  unsigned int v27; // eax
  int v28; // esi
  int v29; // r8d
  __m128i v30; // xmm1
  int v31; // edi
  __m128i v32; // xmm2
  unsigned int v33; // eax
  const __m128i *v34; // rcx
  unsigned int v35; // edx
  unsigned int v36; // eax
  __m128i v37; // xmm0
  __m128i v38; // xmm1
  unsigned int v39; // esi
  int v40; // eax
  int v41; // esi
  __int64 v42; // rdx
  unsigned int v43; // eax
  int v44; // esi
  int v45; // r8d
  int v46; // edi
  __m128i v47; // xmm1
  __m128i si128; // xmm2
  const __m128i *v49; // rcx
  unsigned int v50; // eax
  unsigned int v51; // edx
  __m128i v52; // xmm0
  __m128i v53; // xmm1
  unsigned int v54; // esi
  int v55; // eax
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // rdx
  __int64 v59; // rcx
  int v60; // [rsp+Ch] [rbp-ACh]
  __int64 v61; // [rsp+10h] [rbp-A8h]
  int IsSet; // [rsp+18h] [rbp-A0h]
  int v63; // [rsp+1Ch] [rbp-9Ch]
  int *v64; // [rsp+20h] [rbp-98h]
  _BYTE v66[76]; // [rsp+30h] [rbp-88h] BYREF
  int v67; // [rsp+7Ch] [rbp-3Ch]

  v3 = *((_DWORD *)a2 + 25);
  v4 = *((_DWORD *)a2 + 26);
  v63 = *((_DWORD *)a2 + 27);
  if ( v63 == 1 )
  {
    ClpSimplex::loadProblem(this, a2, 0, 0);
    return (unsigned int)ClpSimplex::dual(this, 0, 0);
  }
  if ( (unsigned __int64)v63 > 0x7FFFFFFFFFFFFFFLL )
    goto LABEL_134;
  v5 = operator new[](16LL * v63);
  v6 = 0;
  v64 = (int *)v5;
  if ( v63 )
  {
    do
    {
      ++v6;
      *(_DWORD *)v5 = 0;
      *(_DWORD *)(v5 + 4) = 0;
      *(_BYTE *)(v5 + 8) = 0;
      *(_BYTE *)(v5 + 9) = 0;
      v5 += 16;
      *(_BYTE *)(v5 - 6) = 0;
      *(_BYTE *)(v5 - 5) = 0;
      *(_BYTE *)(v5 - 4) = 0;
      *(_BYTE *)(v5 - 3) = 0;
    }
    while ( v63 != v6 );
  }
  if ( v63 > 0 )
  {
    v7 = v64;
    v8 = 0;
    v61 = (unsigned int)(v63 - 1) + 1LL;
    while ( 1 )
    {
      v11 = *((_QWORD *)a2 + 21);
      v12 = *(const void **)(v11 + 8 * v8);
      if ( !v12 )
        break;
      v13 = __dynamic_cast(
              *(const void **)(v11 + 8 * v8),
              (const struct __class_type_info *)&`typeinfo for'CoinBaseModel,
              (const struct __class_type_info *)&`typeinfo for'CoinStructuredModel,
              0);
      if ( v13 )
      {
        v9 = v7;
        v7 += 4;
        v10 = (CoinModel *)CoinStructuredModel::coinModelBlock(v13, v9);
        CoinStructuredModel::setCoinModel(a2, v10, v8++);
        if ( v8 == v61 )
          goto LABEL_12;
      }
      else
      {
        v14 = (char *)__dynamic_cast(
                        v12,
                        (const struct __class_type_info *)&`typeinfo for'CoinBaseModel,
                        (const struct __class_type_info *)&`typeinfo for'CoinModel,
                        0);
LABEL_11:
        ++v8;
        v7 += 4;
        IsSet = CoinModel::whatIsSet((CoinModel *)v14);
        v60 = CoinStructuredModel::rowBlock(a2, (const std::string *)(v14 + 40));
        *(v7 - 3) = CoinStructuredModel::columnBlock(a2, (const std::string *)(v14 + 48));
        *(v7 - 4) = v60;
        *((_BYTE *)v7 - 8) = IsSet & 1;
        *((_BYTE *)v7 - 7) = (IsSet >> 1) & 1;
        *((_BYTE *)v7 - 6) = (IsSet >> 2) & 1;
        *((_BYTE *)v7 - 5) = (IsSet >> 5) & 1;
        *((_BYTE *)v7 - 3) = (IsSet >> 4) & 1;
        *((_BYTE *)v7 - 4) = (IsSet >> 3) & 1;
        if ( v8 == v61 )
          goto LABEL_12;
      }
    }
    v14 = nullptr;
    goto LABEL_11;
  }
LABEL_12:
  if ( (unsigned __int64)v3 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_134;
  v15 = operator new[](4LL * v3);
  v16 = v15;
  if ( v3 )
  {
    if ( v3 / 8 > 0 )
    {
      v58 = (unsigned int)(v3 / 8 - 1);
      v59 = v15 + 32 * v58 + 32;
      do
      {
        *(_OWORD *)v15 = 0;
        v15 += 32;
        *(_OWORD *)(v15 - 16) = 0;
      }
      while ( v15 != v59 );
      v15 = v16 + 32 * ((int)v58 + 1LL);
    }
    switch ( v3 % 8 )
    {
      case 1:
        goto LABEL_113;
      case 2:
        goto LABEL_112;
      case 3:
        goto LABEL_111;
      case 4:
        goto LABEL_110;
      case 5:
        goto LABEL_109;
      case 6:
        goto LABEL_108;
      case 7:
        *(_DWORD *)(v15 + 24) = 0;
LABEL_108:
        *(_DWORD *)(v15 + 20) = 0;
LABEL_109:
        *(_DWORD *)(v15 + 16) = 0;
LABEL_110:
        *(_DWORD *)(v15 + 12) = 0;
LABEL_111:
        *(_DWORD *)(v15 + 8) = 0;
LABEL_112:
        *(_DWORD *)(v15 + 4) = 0;
LABEL_113:
        *(_DWORD *)v15 = 0;
        break;
      default:
        break;
    }
  }
  if ( (unsigned __int64)(v4 + 1) > 0x1FFFFFFFFFFFFFFELL )
LABEL_134:
    __cxa_throw_bad_array_new_length();
  v17 = operator new[](4LL * (v4 + 1));
  v18 = v17;
  if ( v4 )
  {
    if ( v4 / 8 > 0 )
    {
      v56 = (unsigned int)(v4 / 8 - 1);
      v57 = v17 + 32 * v56 + 32;
      do
      {
        *(_OWORD *)v17 = 0;
        v17 += 32;
        *(_OWORD *)(v17 - 16) = 0;
      }
      while ( v17 != v57 );
      v17 = v18 + 32 * ((int)v56 + 1LL);
    }
    switch ( v4 % 8 )
    {
      case 1:
        goto LABEL_101;
      case 2:
        goto LABEL_100;
      case 3:
        goto LABEL_99;
      case 4:
        goto LABEL_98;
      case 5:
        goto LABEL_97;
      case 6:
        goto LABEL_96;
      case 7:
        *(_DWORD *)(v17 + 24) = 0;
LABEL_96:
        *(_DWORD *)(v17 + 20) = 0;
LABEL_97:
        *(_DWORD *)(v17 + 16) = 0;
LABEL_98:
        *(_DWORD *)(v17 + 12) = 0;
LABEL_99:
        *(_DWORD *)(v17 + 8) = 0;
LABEL_100:
        *(_DWORD *)(v17 + 4) = 0;
LABEL_101:
        *(_DWORD *)v17 = 0;
        break;
      default:
        break;
    }
  }
  if ( v63 > 0 )
  {
    v19 = v64;
    do
    {
      v20 = *v19;
      v21 = v19[1];
      v19 += 4;
      ++*(_DWORD *)(v16 + 4 * v20);
      ++*(_DWORD *)(v18 + 4 * v21);
    }
    while ( v19 != &v64[4 * (v63 - 1) + 4] );
  }
  if ( v3 == v4 || v4 + 1 == v3 )
  {
    if ( v3 <= 0 )
    {
      if ( v3 != v4 )
      {
        if ( v63 != 2 * v3 )
          goto LABEL_21;
        goto LABEL_57;
      }
      if ( v63 == 2 * v3 - 1 )
        goto LABEL_57;
LABEL_116:
      v22 = v4 - 1;
      if ( v4 <= 0 )
      {
        if ( 2 * v4 - 1 != v63 )
          goto LABEL_22;
        goto LABEL_89;
      }
LABEL_59:
      v42 = -(int)(v18 >> 2) & 3;
      v43 = v42 + 3;
      if ( (unsigned int)(v42 + 3) < 5 )
        v43 = 5;
      if ( v43 > v22 )
      {
        v54 = 0;
        v55 = 0;
      }
      else
      {
        if ( (_DWORD)v42 )
        {
          v44 = 1;
          v45 = *(_DWORD *)v18 > 1;
          if ( (_DWORD)v42 != 1 )
          {
            v44 = 2;
            v45 += *(_DWORD *)(v18 + 4) > 1;
            if ( (_DWORD)v42 != 2 )
            {
              v44 = 3;
              v45 += *(_DWORD *)(v18 + 8) > 1;
            }
          }
        }
        else
        {
          v44 = 0;
          v45 = 0;
        }
        v46 = v4 - v42;
        v47 = 0;
        si128 = _mm_load_si128((const __m128i *)&xmmword_289C00);
        v49 = (const __m128i *)(v18 + 4 * v42);
        v50 = (unsigned int)(v4 - v42) >> 2;
        v51 = 0;
        do
        {
          v52 = _mm_load_si128(v49);
          ++v51;
          ++v49;
          v47 = _mm_sub_epi32(v47, _mm_cmpgt_epi32(v52, si128));
        }
        while ( v51 < v50 );
        v53 = _mm_add_epi32(v47, _mm_srli_si128(v47, 8));
        v54 = (v46 & 0xFFFFFFFC) + v44;
        v55 = v45 + _mm_cvtsi128_si32(_mm_add_epi32(v53, _mm_srli_si128(v53, 4)));
        if ( v46 == (v46 & 0xFFFFFFFC) )
          goto LABEL_86;
      }
      if ( *(int *)(v18 + 4LL * (int)v54) > 1 )
        ++v55;
      if ( v4 > (int)(v54 + 1) )
      {
        if ( *(int *)(v18 + 4LL * (int)(v54 + 1)) > 1 )
          ++v55;
        if ( (int)(v54 + 2) < v4 )
        {
          if ( *(int *)(v18 + 4LL * (int)(v54 + 2)) > 1 )
            ++v55;
          if ( (int)(v54 + 3) < v4 )
          {
            if ( *(int *)(v18 + 4LL * (int)(v54 + 3)) > 1 )
              ++v55;
            if ( v4 > (int)(v54 + 4) )
            {
              if ( *(int *)(v18 + 4LL * (int)(v54 + 4)) > 1 )
                ++v55;
              if ( v4 > (int)(v54 + 5) && *(int *)(v18 + 4LL * (int)(v54 + 5)) > 1 )
                ++v55;
            }
          }
        }
      }
LABEL_86:
      if ( v3 == v4 )
      {
        if ( 2 * v3 - 1 != v63 )
          goto LABEL_22;
      }
      else if ( 2 * v4 != v63 )
      {
        goto LABEL_22;
      }
      if ( v55 > 1 )
        goto LABEL_22;
LABEL_89:
      operator delete[]((void *)v16);
      operator delete[]((void *)v18);
      operator delete[](v64);
      ClpSolve::ClpSolve((ClpSolve *)v66);
      v67 = 100;
      v23 = ClpSimplex::solveBenders(this, a2, (ClpSolve *)v66);
      goto LABEL_23;
    }
    v26 = -(int)(v16 >> 2) & 3;
    v27 = v26 + 3;
    if ( (unsigned int)(v26 + 3) < 5 )
      v27 = 5;
    if ( v3 - 1 < v27 )
    {
      v39 = 0;
      v40 = 0;
    }
    else
    {
      if ( (_DWORD)v26 )
      {
        v28 = 1;
        v29 = *(_DWORD *)v16 > 1;
        if ( (_DWORD)v26 != 1 )
        {
          v28 = 2;
          v29 += *(_DWORD *)(v16 + 4) > 1;
          if ( (_DWORD)v26 != 2 )
          {
            v28 = 3;
            v29 += *(_DWORD *)(v16 + 8) > 1;
          }
        }
      }
      else
      {
        v28 = 0;
        v29 = 0;
      }
      v30 = 0;
      v31 = v3 - v26;
      v32 = _mm_load_si128((const __m128i *)&xmmword_289C00);
      v33 = v3 - v26;
      v34 = (const __m128i *)(v16 + 4 * v26);
      v35 = 0;
      v36 = v33 >> 2;
      do
      {
        v37 = _mm_load_si128(v34);
        ++v35;
        ++v34;
        v30 = _mm_sub_epi32(v30, _mm_cmpgt_epi32(v37, v32));
      }
      while ( v36 > v35 );
      v38 = _mm_add_epi32(v30, _mm_srli_si128(v30, 8));
      v39 = (v31 & 0xFFFFFFFC) + v28;
      v40 = v29 + _mm_cvtsi128_si32(_mm_add_epi32(v38, _mm_srli_si128(v38, 4)));
      if ( v31 == (v31 & 0xFFFFFFFC) )
        goto LABEL_54;
    }
    if ( *(int *)(v16 + 4LL * (int)v39) > 1 )
      ++v40;
    if ( v3 > (int)(v39 + 1) )
    {
      if ( *(int *)(v16 + 4LL * (int)(v39 + 1)) > 1 )
        ++v40;
      if ( v3 > (int)(v39 + 2) )
      {
        if ( *(int *)(v16 + 4LL * (int)(v39 + 2)) > 1 )
          ++v40;
        if ( v3 > (int)(v39 + 3) )
        {
          if ( *(int *)(v16 + 4LL * (int)(v39 + 3)) > 1 )
            ++v40;
          if ( v3 > (int)(v39 + 4) )
          {
            if ( *(int *)(v16 + 4LL * (int)(v39 + 4)) > 1 )
              ++v40;
            v41 = v39 + 5;
            if ( v3 > v41 && *(int *)(v16 + 4LL * v41) > 1 )
              ++v40;
          }
        }
      }
    }
LABEL_54:
    if ( v3 != v4 )
    {
      if ( 2 * v3 != v63 || v40 > 1 )
        goto LABEL_21;
LABEL_57:
      operator delete[]((void *)v16);
      operator delete[]((void *)v18);
      operator delete[](v64);
      ClpSolve::ClpSolve((ClpSolve *)v66);
      v67 = 100;
      v23 = ClpSimplex::solveDW(this, a2, (ClpSolve *)v66);
      goto LABEL_23;
    }
    if ( 2 * v3 - 1 == v63 && v40 <= 1 )
      goto LABEL_57;
    goto LABEL_116;
  }
LABEL_21:
  v22 = v4 - 1;
  if ( v4 - 1 == v3 )
  {
    if ( v4 <= 0 )
    {
      if ( 2 * v4 != v63 )
        goto LABEL_22;
      goto LABEL_89;
    }
    goto LABEL_59;
  }
LABEL_22:
  operator delete[]((void *)v16);
  operator delete[]((void *)v18);
  operator delete[](v64);
  ClpSolve::ClpSolve((ClpSolve *)v66);
  v67 = 100;
  ClpSimplex::loadProblem(this, a2, 0, 0);
  v23 = ClpSimplex::dual(this, 0, 0);
LABEL_23:
  v24 = v23;
  ClpSolve::~ClpSolve((ClpSolve *)v66);
  return v24;
}

