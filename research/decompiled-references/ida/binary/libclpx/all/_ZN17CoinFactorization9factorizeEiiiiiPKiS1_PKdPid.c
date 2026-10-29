__int64 __fastcall CoinFactorization::factorize(
        CoinFactorization *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        double a7,
        const __m128i *a8,
        const __m128i *a9,
        double *a10,
        int *a11)
{
  const int *m128i_i32; // r12
  const int *v15; // r15
  unsigned __int64 v16; // rsi
  unsigned int v17; // edi
  const __m128i *v18; // rdx
  unsigned __int64 v19; // rcx
  __int64 v20; // rdi
  __m128i v21; // xmm1
  __m128i v22; // xmm0
  __int64 v23; // rdi
  unsigned __int64 v24; // rcx
  unsigned int v25; // edi
  const __m128i *v26; // rax
  unsigned __int64 v27; // rdx
  __int64 v28; // rdi
  __m128i v29; // xmm1
  __m128i v30; // xmm0
  __int64 v31; // rax
  double *v32; // rsi
  int v33; // edi
  __int64 v34; // rax
  unsigned int v35; // edx
  unsigned int v36; // r8d
  unsigned __int64 v37; // rcx
  const double *v38; // r10
  double *v39; // rcx
  signed int v40; // edi
  __int64 v41; // rax
  int v42; // edi
  __int64 result; // rax
  __int64 v44; // rcx
  const __m128i *v45; // rsi
  __int64 v46; // r8
  __m128i *v47; // rdi
  unsigned __int64 v48; // rax
  __m128i *v49; // r9
  int v50; // eax
  const __m128i *v51; // r8
  int v52; // edx
  unsigned int v53; // r10d
  const __m128i *v54; // rdx
  __m128i *v55; // rcx
  __int64 v56; // rbp
  __m128i v57; // xmm1
  __m128i v58; // xmm0
  __int64 v59; // rdx
  int v60; // edx
  unsigned int v61; // r8d
  const __m128i *v62; // rdx
  __m128i *v63; // rcx
  __int64 v64; // r10
  __m128i v65; // xmm1
  __m128i v66; // xmm0
  __int64 v67; // rdx
  int *v68; // rsi
  unsigned int v69; // edx
  int v70; // r10d
  int v71; // ecx
  int v72; // ecx
  __int64 v73; // rax
  __int64 v74; // rcx
  unsigned int v75; // r9d
  unsigned int v76; // edx
  int *v77; // rdi
  int *v78; // rcx
  __m128i v79; // xmm1
  unsigned int v80; // eax
  int v81; // edx
  unsigned int v82; // edx
  int v83; // edi
  unsigned int v84; // edx
  int v85; // edi
  unsigned int v86; // edx
  int v87; // edi
  unsigned int v88; // edx
  int v89; // edi
  int v90; // eax
  int v91; // edx
  unsigned __int64 v92; // rax
  unsigned __int64 v93; // rcx
  const int *v94; // rdx
  int v95; // r11d
  unsigned __int64 v96; // rdx
  const int *v97; // rax
  int v98; // r8d
  __m128i *v99; // rcx
  const __m128i *v100; // rdx
  __int32 v101; // r10d
  __m128i *v102; // rdx
  const __m128i *v103; // rcx
  __int32 v104; // r8d
  unsigned __int64 v105; // rax
  int v106; // edx

  m128i_i32 = (const int *)a8;
  v15 = (const int *)a9;
  CoinFactorization::gutsOfDestructor(this, 1);
  CoinFactorization::gutsOfInitialize(this, 2);
  if ( a7 != 0.0 )
    *((double *)this + 2) = a7;
  CoinFactorization::getAreas(this, a2, a3, a5, a6);
  v16 = *((_QWORD *)this + 78);
  if ( *((int *)this + 158) <= -2 )
    v16 = 0;
  if ( a8 != (const __m128i *)v16 && a4 )
  {
    v17 = a4 >> 3;
    if ( a4 >> 3 > 0 )
    {
      if ( (v16 >= (unsigned __int64)&a8[2] || (unsigned __int64)a8 >= v16 + 32) && v17 > 1 )
      {
        v18 = a8;
        v19 = v16;
        v20 = v17 - 1;
        do
        {
          v21 = _mm_loadu_si128(v18);
          v18 += 2;
          v19 += 32LL;
          v22 = _mm_loadu_si128(v18 - 1);
          *(__m128i *)(v19 - 32) = v21;
          *(__m128i *)(v19 - 16) = v22;
        }
        while ( v18 != &a8[2 * v20 + 2] );
      }
      else
      {
        v93 = v16;
        v94 = (const int *)a8;
        v20 = v17 - 1;
        do
        {
          v95 = *v94;
          v94 += 8;
          v93 += 32LL;
          *(_DWORD *)(v93 - 32) = v95;
          *(_DWORD *)(v93 - 28) = *(v94 - 7);
          *(_DWORD *)(v93 - 24) = *(v94 - 6);
          *(_DWORD *)(v93 - 20) = *(v94 - 5);
          *(_DWORD *)(v93 - 16) = *(v94 - 4);
          *(_DWORD *)(v93 - 12) = *(v94 - 3);
          *(_DWORD *)(v93 - 8) = *(v94 - 2);
          *(_DWORD *)(v93 - 4) = *(v94 - 1);
        }
        while ( v94 != (const int *)&a8[2 * v20 + 2] );
      }
      v23 = 2 * ((int)v20 + 1LL);
      m128i_i32 = a8[v23].m128i_i32;
      v16 += v23 * 16;
    }
    switch ( a4 % 8 )
    {
      case 1:
        goto LABEL_20;
      case 2:
        goto LABEL_19;
      case 3:
        goto LABEL_18;
      case 4:
        goto LABEL_17;
      case 5:
        goto LABEL_16;
      case 6:
        goto LABEL_15;
      case 7:
        *(_DWORD *)(v16 + 24) = m128i_i32[6];
LABEL_15:
        *(_DWORD *)(v16 + 20) = m128i_i32[5];
LABEL_16:
        *(_DWORD *)(v16 + 16) = m128i_i32[4];
LABEL_17:
        *(_DWORD *)(v16 + 12) = m128i_i32[3];
LABEL_18:
        *(_DWORD *)(v16 + 8) = m128i_i32[2];
LABEL_19:
        *(_DWORD *)(v16 + 4) = m128i_i32[1];
LABEL_20:
        *(_DWORD *)v16 = *m128i_i32;
        break;
      default:
        break;
    }
  }
  v24 = *((_QWORD *)this + 63);
  if ( *((int *)this + 128) <= -2 )
    v24 = 0;
  if ( a9 != (const __m128i *)v24 && a4 )
  {
    v25 = a4 >> 3;
    if ( a4 >> 3 > 0 )
    {
      if ( (v24 >= (unsigned __int64)&a9[2] || (unsigned __int64)a9 >= v24 + 32) && v25 > 1 )
      {
        v26 = a9;
        v27 = v24;
        v28 = v25 - 1;
        do
        {
          v29 = _mm_loadu_si128(v26);
          v26 += 2;
          v27 += 32LL;
          v30 = _mm_loadu_si128(v26 - 1);
          *(__m128i *)(v27 - 32) = v29;
          *(__m128i *)(v27 - 16) = v30;
        }
        while ( v26 != &a9[2 * v28 + 2] );
      }
      else
      {
        v96 = v24;
        v97 = (const int *)a9;
        v28 = v25 - 1;
        do
        {
          v98 = *v97;
          v97 += 8;
          v96 += 32LL;
          *(_DWORD *)(v96 - 32) = v98;
          *(_DWORD *)(v96 - 28) = *(v97 - 7);
          *(_DWORD *)(v96 - 24) = *(v97 - 6);
          *(_DWORD *)(v96 - 20) = *(v97 - 5);
          *(_DWORD *)(v96 - 16) = *(v97 - 4);
          *(_DWORD *)(v96 - 12) = *(v97 - 3);
          *(_DWORD *)(v96 - 8) = *(v97 - 2);
          *(_DWORD *)(v96 - 4) = *(v97 - 1);
        }
        while ( v97 != (const int *)&a9[2 * v28 + 2] );
      }
      v31 = 2 * ((int)v28 + 1LL);
      v15 = a9[v31].m128i_i32;
      v24 += v31 * 16;
    }
    switch ( a4 % 8 )
    {
      case 1:
        goto LABEL_38;
      case 2:
        goto LABEL_37;
      case 3:
        goto LABEL_36;
      case 4:
        goto LABEL_35;
      case 5:
        goto LABEL_34;
      case 6:
        goto LABEL_33;
      case 7:
        *(_DWORD *)(v24 + 24) = v15[6];
LABEL_33:
        *(_DWORD *)(v24 + 20) = v15[5];
LABEL_34:
        *(_DWORD *)(v24 + 16) = v15[4];
LABEL_35:
        *(_DWORD *)(v24 + 12) = v15[3];
LABEL_36:
        *(_DWORD *)(v24 + 8) = v15[2];
LABEL_37:
        *(_DWORD *)(v24 + 4) = v15[1];
LABEL_38:
        *(_DWORD *)v24 = *v15;
        break;
      default:
        break;
    }
  }
  v32 = *((double **)this + 75);
  if ( *((int *)this + 152) <= -2 )
    v32 = nullptr;
  if ( a4 > 0 )
  {
    if ( (v32 >= a10 + 2 || a10 >= v32 + 2) && (unsigned int)a4 > 0x18 )
    {
      v33 = 0;
      if ( (((unsigned __int64)a10 >> 3) & 1) != 0 )
      {
        v33 = 1;
        *v32 = *a10;
      }
      v34 = 0;
      v35 = 0;
      v36 = a4 - (((unsigned __int64)a10 >> 3) & 1);
      v37 = ((unsigned __int64)a10 >> 3) & 1;
      v38 = &a10[v37];
      v39 = &v32[v37];
      do
      {
        ++v35;
        *(_OWORD *)&v39[v34] = *(_OWORD *)&v38[v34];
        v34 += 2;
      }
      while ( v36 >> 1 > v35 );
      v40 = (v36 & 0xFFFFFFFE) + v33;
      if ( v36 != (v36 & 0xFFFFFFFE) )
      {
        v41 = v40;
        v42 = v40 + 1;
        v32[v41] = a10[v41];
        if ( v42 < a4 )
          v32[v42] = a10[v42];
      }
    }
    else
    {
      v92 = 0;
      do
      {
        v32[v92 / 8] = a10[v92 / 8];
        v92 += 8LL;
      }
      while ( v92 != 8LL * (unsigned int)(a4 - 1) + 8 );
    }
  }
  *((_DWORD *)this + 147) = a4;
  *((_DWORD *)this + 146) = a4;
  CoinFactorization::preProcess(this, 0, -1);
  CoinFactorization::factor(this);
  result = *((unsigned int *)this + 44);
  if ( !(_DWORD)result )
  {
    v44 = 0;
    v45 = *((const __m128i **)this + 16);
    v46 = 0;
    v47 = *((__m128i **)this + 19);
    if ( *((int *)this + 34) > -2 )
      v46 = *((_QWORD *)this + 16);
    if ( *((int *)this + 40) > -2 )
      v44 = *((_QWORD *)this + 19);
    if ( a3 > 0 )
    {
      v48 = 0;
      do
      {
        a11[v48 / 4] = *(_DWORD *)(v46 + 4LL * *(int *)(v44 + v48));
        v48 += 4LL;
      }
      while ( v48 != 4LL * (unsigned int)(a3 - 1) + 4 );
    }
    v49 = *((__m128i **)this + 10);
    v50 = *((_DWORD *)this + 8);
    v51 = *((const __m128i **)this + 13);
    v52 = *((_DWORD *)this + 28);
    if ( *((int *)this + 22) < -1 )
    {
      v49 = nullptr;
      if ( v52 < -1 )
      {
LABEL_81:
        v60 = *((_DWORD *)this + 34);
        if ( *((int *)this + 40) < -1 )
        {
          v47 = nullptr;
          if ( v60 < -1 )
            return *((unsigned int *)this + 44);
        }
        else if ( v60 <= -2 )
        {
          v45 = nullptr;
        }
        if ( v50 && v45 != v47 )
        {
          v61 = v50 >> 3;
          if ( v50 >> 3 > 0 )
          {
            if ( (v47 >= &v45[2] || v45 >= &v47[2]) && v61 > 1 )
            {
              v62 = v45;
              v63 = v47;
              v64 = v61 - 1;
              do
              {
                v65 = _mm_loadu_si128(v62);
                v62 += 2;
                v63 += 2;
                v66 = _mm_loadu_si128(v62 - 1);
                v63[-2] = v65;
                v63[-1] = v66;
              }
              while ( &v45[2 * v64 + 2] != v62 );
            }
            else
            {
              v102 = v47;
              v103 = v45;
              v64 = v61 - 1;
              do
              {
                v104 = v103->m128i_i32[0];
                v102 += 2;
                v103 += 2;
                v102[-2].m128i_i32[0] = v104;
                v102[-2].m128i_i32[1] = v103[-2].m128i_i32[1];
                v102[-2].m128i_i32[2] = v103[-2].m128i_i32[2];
                v102[-2].m128i_i32[3] = v103[-2].m128i_i32[3];
                v102[-1].m128i_i32[0] = v103[-1].m128i_i32[0];
                v102[-1].m128i_i32[1] = v103[-1].m128i_i32[1];
                v102[-1].m128i_i32[2] = v103[-1].m128i_i32[2];
                v102[-1].m128i_i32[3] = v103[-1].m128i_i32[3];
              }
              while ( &v47[2 * v64 + 2] != v102 );
            }
            v67 = 32 * ((int)v64 + 1LL);
            v45 = (const __m128i *)((char *)v45 + v67);
            v47 = (__m128i *)((char *)v47 + v67);
          }
          switch ( v50 % 8 )
          {
            case 1:
              goto LABEL_137;
            case 2:
              goto LABEL_136;
            case 3:
              goto LABEL_135;
            case 4:
              goto LABEL_134;
            case 5:
              goto LABEL_133;
            case 6:
              goto LABEL_132;
            case 7:
              v47[1].m128i_i32[2] = v45[1].m128i_i32[2];
LABEL_132:
              v47[1].m128i_i32[1] = v45[1].m128i_i32[1];
LABEL_133:
              v47[1].m128i_i32[0] = v45[1].m128i_i32[0];
LABEL_134:
              v47->m128i_i32[3] = v45->m128i_i32[3];
LABEL_135:
              v47->m128i_i32[2] = v45->m128i_i32[2];
LABEL_136:
              v47->m128i_i32[1] = v45->m128i_i32[1];
LABEL_137:
              v47->m128i_i32[0] = v45->m128i_i32[0];
              result = *((unsigned int *)this + 44);
              break;
            default:
              return *((unsigned int *)this + 44);
          }
          return result;
        }
        return *((unsigned int *)this + 44);
      }
    }
    else if ( v52 <= -2 )
    {
      v51 = nullptr;
    }
    if ( v50 && v51 != v49 )
    {
      v53 = v50 >> 3;
      if ( v50 >> 3 > 0 )
      {
        if ( (v51 >= &v49[2] || v49 >= &v51[2]) && v53 > 1 )
        {
          v54 = v51;
          v55 = v49;
          v56 = v53 - 1;
          do
          {
            v57 = _mm_loadu_si128(v54);
            v54 += 2;
            v55 += 2;
            v58 = _mm_loadu_si128(v54 - 1);
            v55[-2] = v57;
            v55[-1] = v58;
          }
          while ( v54 != &v51[2 * v56 + 2] );
        }
        else
        {
          v99 = v49;
          v100 = v51;
          v56 = v53 - 1;
          do
          {
            v101 = v100->m128i_i32[0];
            v100 += 2;
            v99 += 2;
            v99[-2].m128i_i32[0] = v101;
            v99[-2].m128i_i32[1] = v100[-2].m128i_i32[1];
            v99[-2].m128i_i32[2] = v100[-2].m128i_i32[2];
            v99[-2].m128i_i32[3] = v100[-2].m128i_i32[3];
            v99[-1].m128i_i32[0] = v100[-1].m128i_i32[0];
            v99[-1].m128i_i32[1] = v100[-1].m128i_i32[1];
            v99[-1].m128i_i32[2] = v100[-1].m128i_i32[2];
            v99[-1].m128i_i32[3] = v100[-1].m128i_i32[3];
          }
          while ( &v51[2 * v56 + 2] != v100 );
        }
        v59 = 32 * ((int)v56 + 1LL);
        v51 = (const __m128i *)((char *)v51 + v59);
        v49 = (__m128i *)((char *)v49 + v59);
      }
      switch ( v50 % 8 )
      {
        case 1:
          goto LABEL_79;
        case 2:
          goto LABEL_78;
        case 3:
          goto LABEL_77;
        case 4:
          goto LABEL_76;
        case 5:
          goto LABEL_75;
        case 6:
          goto LABEL_74;
        case 7:
          v49[1].m128i_i32[2] = v51[1].m128i_i32[2];
LABEL_74:
          v49[1].m128i_i32[1] = v51[1].m128i_i32[1];
LABEL_75:
          v49[1].m128i_i32[0] = v51[1].m128i_i32[0];
LABEL_76:
          v49->m128i_i32[3] = v51->m128i_i32[3];
LABEL_77:
          v49->m128i_i32[2] = v51->m128i_i32[2];
LABEL_78:
          v49->m128i_i32[1] = v51->m128i_i32[1];
LABEL_79:
          v49->m128i_i32[0] = v51->m128i_i32[0];
          break;
        default:
          break;
      }
      v50 = *((_DWORD *)this + 8);
    }
    goto LABEL_81;
  }
  if ( (_DWORD)result == -1 )
  {
    v68 = *((int **)this + 10);
    if ( *((int *)this + 22) <= -2 )
      v68 = nullptr;
    if ( a3 > 0 )
    {
      if ( v68 < a11 + 4 && a11 < v68 + 4 || (unsigned int)a3 <= 5 )
      {
        v105 = 0;
        do
        {
          v106 = v68[v105 / 4];
          if ( v106 < 0 )
            v106 = -1;
          a11[v105 / 4] = v106;
          v105 += 4LL;
        }
        while ( v105 != 4LL * (unsigned int)(a3 - 1) + 4 );
        return *((unsigned int *)this + 44);
      }
      v69 = -(int)((unsigned __int64)a11 >> 2) & 3;
      if ( a3 - 1 < v69 + 3 )
      {
        v80 = 0;
      }
      else
      {
        v70 = 0;
        if ( v69 )
        {
          v71 = *v68;
          v70 = 1;
          if ( *v68 < 0 )
            v71 = -1;
          *a11 = v71;
          if ( v69 != 1 )
          {
            v72 = v68[1];
            v70 = 2;
            if ( v72 < 0 )
              v72 = -1;
            a11[1] = v72;
            if ( v69 != 2 )
            {
              v70 = 3;
              if ( v68[2] >= 0 )
                LODWORD(result) = v68[2];
              a11[2] = result;
            }
          }
        }
        v73 = 0;
        v74 = v69;
        v75 = a3 - v69;
        v76 = 0;
        v77 = &v68[v74];
        v78 = &a11[v74];
        do
        {
          v79 = _mm_loadu_si128((const __m128i *)&v77[v73]);
          ++v76;
          *(__m128i *)&v78[v73] = _mm_or_si128(_mm_cmpgt_epi32((__m128i)0LL, v79), v79);
          v73 += 4;
        }
        while ( v75 >> 2 > v76 );
        v80 = (v75 & 0xFFFFFFFC) + v70;
        if ( v75 == (v75 & 0xFFFFFFFC) )
          return *((unsigned int *)this + 44);
      }
      v81 = v68[v80];
      if ( v81 < 0 )
        v81 = -1;
      a11[v80] = v81;
      v82 = v80 + 1;
      if ( a3 > (int)(v80 + 1) )
      {
        v83 = v68[v82];
        if ( v83 < 0 )
          v83 = -1;
        a11[v82] = v83;
        v84 = v80 + 2;
        if ( a3 > (int)(v80 + 2) )
        {
          v85 = v68[v84];
          if ( v85 < 0 )
            v85 = -1;
          a11[v84] = v85;
          v86 = v80 + 3;
          if ( a3 > (int)(v80 + 3) )
          {
            v87 = v68[v86];
            if ( v87 < 0 )
              v87 = -1;
            a11[v86] = v87;
            v88 = v80 + 4;
            if ( (int)(v80 + 4) < a3 )
            {
              v89 = v68[v88];
              if ( v89 < 0 )
                v89 = -1;
              v90 = v80 + 5;
              a11[v88] = v89;
              if ( a3 > v90 )
              {
                v91 = v68[v90];
                if ( v91 < 0 )
                  v91 = -1;
                a11[v90] = v91;
              }
            }
          }
        }
      }
      return *((unsigned int *)this + 44);
    }
  }
  return result;
}

