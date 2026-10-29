__int64 __fastcall CoinFactorization::factorize(
        CoinFactorization *this,
        const CoinPackedMatrix *a2,
        unsigned __int64 a3,
        int *a4,
        double a5)
{
  __int64 result; // rax
  __int64 v9; // rax
  unsigned int v10; // edx
  int v11; // esi
  int v12; // r9d
  __m128i v13; // xmm1
  int *v14; // rcx
  int v15; // r8d
  unsigned int v16; // edi
  unsigned int v17; // eax
  unsigned int v18; // edi
  __m128i v19; // xmm1
  signed int v20; // esi
  int v21; // edx
  int v22; // esi
  _DWORD *v23; // r13
  int v24; // ecx
  unsigned __int64 v25; // rax
  int *v26; // r12
  __int64 v27; // rax
  __int64 v28; // r8
  __int64 v29; // r9
  int v30; // esi
  __int64 v31; // rdi
  __int64 v32; // rax
  int *v33; // r8
  _DWORD *v34; // rdi
  int v35; // r12d
  int *v36; // r14
  int v37; // r10d
  int v38; // ecx
  __int64 v39; // r11
  __int64 v40; // r13
  __int64 v41; // r11
  __int64 v42; // rax
  __int64 v43; // xmm0_8
  int v44; // r9d
  __int64 v45; // rcx
  const __m128i *v46; // rsi
  __int64 v47; // r8
  __m128i *v48; // rdi
  __int64 v49; // rdx
  __int64 v50; // r9
  int *v51; // rdx
  __int64 v52; // r9
  __m128i *v53; // r9
  int v54; // eax
  const __m128i *v55; // r8
  int v56; // edx
  unsigned int v57; // r10d
  __m128i *v58; // rdx
  const __m128i *v59; // rcx
  __int64 v60; // r11
  __m128i v61; // xmm1
  __m128i v62; // xmm0
  __int64 v63; // rdx
  bool v64; // zf
  int v65; // edx
  unsigned int v66; // r8d
  __m128i *v67; // rdx
  const __m128i *v68; // rcx
  __int64 v69; // r9
  __m128i v70; // xmm1
  __m128i v71; // xmm0
  __int64 v72; // rdx
  __int64 v73; // rdi
  int v74; // esi
  int v75; // ecx
  __int64 v76; // rdx
  int v77; // r15d
  int v78; // r8d
  int *v79; // rax
  int v80; // r11d
  int v81; // r8d
  __m128i *v82; // rdx
  const __m128i *v83; // rcx
  __int32 v84; // r8d
  __m128i *v85; // rdx
  const __m128i *v86; // rcx
  __int32 v87; // r10d
  int v88; // [rsp+8h] [rbp-90h]
  int v89; // [rsp+1Ch] [rbp-7Ch]
  __int64 v91; // [rsp+28h] [rbp-70h]
  __int64 v92; // [rsp+30h] [rbp-68h]
  __int64 v93; // [rsp+38h] [rbp-60h]
  __int64 v94; // [rsp+40h] [rbp-58h]
  __int64 v95; // [rsp+48h] [rbp-50h]

  CoinFactorization::gutsOfDestructor(this, 1);
  CoinFactorization::gutsOfInitialize(this, 2);
  if ( a5 == 0.0 )
  {
    result = *((unsigned int *)a2 + 16);
    v88 = *((_DWORD *)a2 + 16);
    if ( *((_BYTE *)a2 + 8) )
      goto LABEL_3;
LABEL_72:
    if ( !v88 )
      return result;
    v89 = result;
    v88 = *((_DWORD *)a2 + 17);
    if ( (int)result > 0 )
      goto LABEL_5;
LABEL_108:
    v21 = 0;
    goto LABEL_21;
  }
  v64 = *((_BYTE *)a2 + 8) == 0;
  result = *((unsigned int *)a2 + 16);
  *((double *)this + 2) = a5;
  v88 = result;
  if ( v64 )
    goto LABEL_72;
LABEL_3:
  v89 = *((_DWORD *)a2 + 17);
  if ( !v89 )
    return 0;
  if ( v89 <= 0 )
    goto LABEL_108;
LABEL_5:
  v9 = -(int)(a3 >> 2) & 3;
  v10 = v9 + 3;
  if ( (unsigned int)(v9 + 3) < 5 )
    v10 = 5;
  if ( v10 > v89 - 1 )
  {
    v20 = 0;
    v21 = 0;
LABEL_15:
    v21 += *(_DWORD *)(a3 + 4LL * v20) < 0x80000000;
    if ( v20 + 1 < v89 )
    {
      v21 += *(_DWORD *)(a3 + 4LL * (v20 + 1)) < 0x80000000;
      if ( v20 + 2 < v89 )
      {
        v21 += *(_DWORD *)(a3 + 4LL * (v20 + 2)) < 0x80000000;
        if ( v20 + 3 < v89 )
        {
          v21 += *(_DWORD *)(a3 + 4LL * (v20 + 3)) < 0x80000000;
          if ( v20 + 4 < v89 )
          {
            v21 += *(_DWORD *)(a3 + 4LL * (v20 + 4)) < 0x80000000;
            v22 = v20 + 5;
            if ( v89 > v22 )
              v21 += *(_DWORD *)(a3 + 4LL * v22) < 0x80000000;
          }
        }
      }
    }
    goto LABEL_21;
  }
  if ( (_DWORD)v9 )
  {
    v11 = 1;
    v12 = *(_DWORD *)a3 >= 0;
    if ( (_DWORD)v9 != 1 )
    {
      v11 = 2;
      v12 += *(_DWORD *)(a3 + 4) < 0x80000000;
      if ( (_DWORD)v9 != 2 )
      {
        v11 = 3;
        v12 += *(_DWORD *)(a3 + 8) < 0x80000000;
      }
    }
  }
  else
  {
    v11 = 0;
    v12 = 0;
  }
  v13 = 0;
  v14 = (int *)(a3 + 4 * v9);
  v15 = v89 - v9;
  v16 = v89 - v9;
  v17 = 0;
  v18 = v16 >> 2;
  do
  {
    ++v17;
    v14 += 4;
    v13 = _mm_sub_epi32(v13, _mm_andnot_si128(_mm_cmpgt_epi32((__m128i)0LL, *((__m128i *)v14 - 1)), (__m128i)-1LL));
  }
  while ( v18 > v17 );
  v19 = _mm_add_epi32(v13, _mm_srli_si128(v13, 8));
  v20 = (v15 & 0xFFFFFFFC) + v11;
  v21 = v12 + _mm_cvtsi128_si32(_mm_add_epi32(v19, _mm_srli_si128(v19, 4)));
  if ( (v15 & 0xFFFFFFFC) != v15 )
    goto LABEL_15;
LABEL_21:
  v23 = *((_DWORD **)a2 + 7);
  if ( v88 <= 0 )
  {
    v24 = 0;
  }
  else
  {
    v24 = 0;
    v25 = 0;
    do
    {
      if ( a4[v25 / 4] >= 0 )
      {
        v24 += v23[v25 / 4];
        ++v21;
      }
      v25 += 4LL;
    }
    while ( v25 != 4LL * (unsigned int)(v88 - 1) + 4 );
  }
  if ( v21 > v89 )
    return 4294967294LL;
  v26 = *((int **)a2 + 6);
  v95 = *((_QWORD *)a2 + 5);
  v94 = *((_QWORD *)a2 + 4);
  CoinFactorization::getAreas(this, v89, v21, 3 * (v21 + v24) + 20000, 2 * (3 * (v21 + v24) + 20000));
  v27 = 0;
  v28 = *((_QWORD *)this + 63);
  v29 = *((_QWORD *)this + 78);
  if ( *((int *)this + 128) <= -2 )
    v28 = 0;
  v92 = v28;
  if ( *((int *)this + 158) <= -2 )
    v29 = 0;
  v93 = v29;
  if ( *((int *)this + 152) > -2 )
    v27 = *((_QWORD *)this + 75);
  v30 = 0;
  v31 = v27;
  v91 = v27;
  v32 = 0;
  do
  {
    if ( *(int *)(a3 + 4 * v32) >= 0 )
    {
      *(_DWORD *)(v29 + 4LL * v30) = v32;
      *(_DWORD *)(v28 + 4LL * v30) = v30;
      *(_QWORD *)(v31 + 8LL * v30++) = 0xBFF0000000000000LL;
    }
    ++v32;
  }
  while ( v89 > (int)v32 );
  if ( v88 > 0 )
  {
    v33 = v26;
    v34 = v23;
    v35 = v30;
    v36 = a4;
    do
    {
      if ( *v36 >= 0 )
      {
        v37 = *v33;
        if ( *v33 + *v34 <= *v33 )
        {
          v38 = v30;
        }
        else
        {
          v38 = v30;
          v39 = 4LL * v30;
          v40 = v93 + v39;
          v41 = v92 + v39;
          v42 = 0;
          do
          {
            ++v38;
            v43 = *(_QWORD *)(v94 + 8LL * v37 + 2 * v42);
            *(_DWORD *)(v40 + v42) = *(_DWORD *)(v95 + 4LL * v37 + v42);
            *(_DWORD *)(v41 + v42) = v35;
            v44 = *v33 + *v34;
            *(_QWORD *)(v91 + 8LL * v30 + 2 * v42) = v43;
            v42 += 4;
          }
          while ( v44 > v37 + v38 - v30 );
        }
        ++v35;
        v30 = v38;
      }
      ++v36;
      ++v33;
      ++v34;
    }
    while ( v36 != &a4[v88 - 1 + 1] );
  }
  *((_DWORD *)this + 147) = v30;
  *((_DWORD *)this + 146) = v30;
  CoinFactorization::preProcess(this, 0, -1);
  CoinFactorization::factor(this);
  result = *((unsigned int *)this + 44);
  if ( (_DWORD)result )
  {
    if ( (_DWORD)result != -1 )
      return result;
    v73 = *((_QWORD *)this + 10);
    v74 = *((_DWORD *)this + 8);
    if ( *((int *)this + 22) <= -2 )
      v73 = 0;
    v75 = 0;
    v76 = 1;
    if ( v74 > 0 )
    {
      do
      {
        while ( *(int *)(a3 + 4 * v76 - 4) < 0 )
        {
          v81 = v76++;
          if ( v81 >= v74 )
            goto LABEL_100;
        }
        v77 = -1;
        v78 = v76;
        if ( *(int *)(v73 + 4LL * v75) >= 0 )
          v77 = *(_DWORD *)(v73 + 4LL * v75);
        ++v75;
        *(_DWORD *)(a3 + 4 * v76 - 4) = v77;
        v74 = *((_DWORD *)this + 8);
        ++v76;
      }
      while ( v74 > v78 );
    }
LABEL_100:
    if ( v88 > 0 )
    {
      v79 = a4;
      do
      {
        if ( *v79 >= 0 )
        {
          v80 = -1;
          if ( *(int *)(v73 + 4LL * v75) >= 0 )
            v80 = *(_DWORD *)(v73 + 4LL * v75);
          ++v75;
          *v79 = v80;
        }
        ++v79;
      }
      while ( v79 != &a4[v88 - 1 + 1] );
    }
    return *((unsigned int *)this + 44);
  }
  v45 = 0;
  v46 = *((const __m128i **)this + 16);
  v47 = 0;
  v48 = *((__m128i **)this + 19);
  if ( *((int *)this + 34) > -2 )
    v47 = *((_QWORD *)this + 16);
  if ( *((int *)this + 40) > -2 )
    v45 = *((_QWORD *)this + 19);
  v49 = 0;
  do
  {
    if ( *(int *)(a3 + 4 * v49) >= 0 )
    {
      v50 = (int)result;
      LODWORD(result) = result + 1;
      *(_DWORD *)(a3 + 4 * v49) = *(_DWORD *)(v47 + 4LL * *(int *)(v45 + 4 * v50));
    }
    ++v49;
  }
  while ( v89 > (int)v49 );
  if ( v88 > 0 )
  {
    v51 = a4;
    do
    {
      if ( *v51 >= 0 )
      {
        v52 = (int)result;
        LODWORD(result) = result + 1;
        *v51 = *(_DWORD *)(v47 + 4LL * *(int *)(v45 + 4 * v52));
      }
      ++v51;
    }
    while ( v51 != &a4[v88 - 1 + 1] );
  }
  v53 = *((__m128i **)this + 10);
  v54 = *((_DWORD *)this + 8);
  v55 = *((const __m128i **)this + 13);
  v56 = *((_DWORD *)this + 28);
  if ( *((int *)this + 22) < -1 )
  {
    v53 = nullptr;
    if ( v56 < -1 )
      goto LABEL_81;
  }
  else if ( v56 <= -2 )
  {
    v55 = nullptr;
  }
  if ( v54 && v55 != v53 )
  {
    v57 = v54 >> 3;
    if ( v54 >> 3 > 0 )
    {
      if ( (v53 >= &v55[2] || v55 >= &v53[2]) && v57 > 1 )
      {
        v58 = v53;
        v59 = v55;
        v60 = v57 - 1;
        do
        {
          v61 = _mm_loadu_si128(v59);
          v58 += 2;
          v59 += 2;
          v62 = _mm_loadu_si128(v59 - 1);
          v58[-2] = v61;
          v58[-1] = v62;
        }
        while ( v58 != &v53[2 * v60 + 2] );
      }
      else
      {
        v85 = v53;
        v86 = v55;
        v60 = v57 - 1;
        do
        {
          v87 = v86->m128i_i32[0];
          v85 += 2;
          v86 += 2;
          v85[-2].m128i_i32[0] = v87;
          v85[-2].m128i_i32[1] = v86[-2].m128i_i32[1];
          v85[-2].m128i_i32[2] = v86[-2].m128i_i32[2];
          v85[-2].m128i_i32[3] = v86[-2].m128i_i32[3];
          v85[-1].m128i_i32[0] = v86[-1].m128i_i32[0];
          v85[-1].m128i_i32[1] = v86[-1].m128i_i32[1];
          v85[-1].m128i_i32[2] = v86[-1].m128i_i32[2];
          v85[-1].m128i_i32[3] = v86[-1].m128i_i32[3];
        }
        while ( v85 != &v53[2 * v60 + 2] );
      }
      v63 = 32 * ((int)v60 + 1LL);
      v55 = (const __m128i *)((char *)v55 + v63);
      v53 = (__m128i *)((char *)v53 + v63);
    }
    switch ( v54 % 8 )
    {
      case 1:
        goto LABEL_122;
      case 2:
        goto LABEL_121;
      case 3:
        goto LABEL_120;
      case 4:
        goto LABEL_119;
      case 5:
        goto LABEL_118;
      case 6:
        goto LABEL_117;
      case 7:
        v53[1].m128i_i32[2] = v55[1].m128i_i32[2];
LABEL_117:
        v53[1].m128i_i32[1] = v55[1].m128i_i32[1];
LABEL_118:
        v53[1].m128i_i32[0] = v55[1].m128i_i32[0];
LABEL_119:
        v53->m128i_i32[3] = v55->m128i_i32[3];
LABEL_120:
        v53->m128i_i32[2] = v55->m128i_i32[2];
LABEL_121:
        v53->m128i_i32[1] = v55->m128i_i32[1];
LABEL_122:
        v53->m128i_i32[0] = v55->m128i_i32[0];
        break;
      default:
        break;
    }
    v54 = *((_DWORD *)this + 8);
  }
LABEL_81:
  v65 = *((_DWORD *)this + 34);
  if ( *((int *)this + 40) < -1 )
  {
    v48 = nullptr;
    if ( v65 >= -1 )
      goto LABEL_84;
    return *((unsigned int *)this + 44);
  }
  if ( v65 <= -2 )
    v46 = nullptr;
LABEL_84:
  if ( !v54 || v46 == v48 )
    return *((unsigned int *)this + 44);
  v66 = v54 >> 3;
  if ( v54 >> 3 > 0 )
  {
    if ( (v48 >= &v46[2] || v46 >= &v48[2]) && v66 > 1 )
    {
      v67 = v48;
      v68 = v46;
      v69 = v66 - 1;
      do
      {
        v70 = _mm_loadu_si128(v68);
        v67 += 2;
        v68 += 2;
        v71 = _mm_loadu_si128(v68 - 1);
        v67[-2] = v70;
        v67[-1] = v71;
      }
      while ( v67 != &v48[2 * v69 + 2] );
    }
    else
    {
      v82 = v48;
      v83 = v46;
      v69 = v66 - 1;
      do
      {
        v84 = v83->m128i_i32[0];
        v82 += 2;
        v83 += 2;
        v82[-2].m128i_i32[0] = v84;
        v82[-2].m128i_i32[1] = v83[-2].m128i_i32[1];
        v82[-2].m128i_i32[2] = v83[-2].m128i_i32[2];
        v82[-2].m128i_i32[3] = v83[-2].m128i_i32[3];
        v82[-1].m128i_i32[0] = v83[-1].m128i_i32[0];
        v82[-1].m128i_i32[1] = v83[-1].m128i_i32[1];
        v82[-1].m128i_i32[2] = v83[-1].m128i_i32[2];
        v82[-1].m128i_i32[3] = v83[-1].m128i_i32[3];
      }
      while ( v82 != &v48[2 * v69 + 2] );
    }
    v72 = 32 * ((int)v69 + 1LL);
    v46 = (const __m128i *)((char *)v46 + v72);
    v48 = (__m128i *)((char *)v48 + v72);
  }
  switch ( v54 % 8 )
  {
    case 1:
      goto LABEL_115;
    case 2:
      goto LABEL_114;
    case 3:
      goto LABEL_113;
    case 4:
      goto LABEL_112;
    case 5:
      goto LABEL_111;
    case 6:
      goto LABEL_110;
    case 7:
      v48[1].m128i_i32[2] = v46[1].m128i_i32[2];
LABEL_110:
      v48[1].m128i_i32[1] = v46[1].m128i_i32[1];
LABEL_111:
      v48[1].m128i_i32[0] = v46[1].m128i_i32[0];
LABEL_112:
      v48->m128i_i32[3] = v46->m128i_i32[3];
LABEL_113:
      v48->m128i_i32[2] = v46->m128i_i32[2];
LABEL_114:
      v48->m128i_i32[1] = v46->m128i_i32[1];
LABEL_115:
      v48->m128i_i32[0] = v46->m128i_i32[0];
      result = *((unsigned int *)this + 44);
      break;
    default:
      return *((unsigned int *)this + 44);
  }
  return result;
}

