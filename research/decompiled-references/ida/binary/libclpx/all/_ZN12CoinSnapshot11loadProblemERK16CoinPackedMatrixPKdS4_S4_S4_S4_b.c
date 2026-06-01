__int64 __fastcall CoinSnapshot::loadProblem(
        CoinSnapshot *this,
        const CoinPackedMatrix *a2,
        const double *a3,
        const double *a4,
        const double *a5,
        const double *a6,
        const double *a7,
        bool a8)
{
  int v11; // eax
  int v12; // eax
  CoinPackedMatrix *v13; // r12
  CoinPackedMatrix *v14; // r12
  unsigned __int64 v15; // rdx
  int v16; // r12d
  size_t v17; // rbp
  void *v18; // rax
  void *v19; // rcx
  unsigned __int64 v20; // rbp
  unsigned __int64 v21; // xmm0_8
  int v22; // r12d
  unsigned __int64 v23; // rbp
  unsigned __int64 v24; // rax
  _QWORD *v25; // rcx
  __int64 v26; // rdx
  int v27; // r8d
  unsigned int v28; // eax
  unsigned int v29; // edi
  __m128d *v30; // rdx
  __m128d v31; // xmm1
  signed int v32; // eax
  int v33; // edx
  int v34; // eax
  unsigned __int64 v35; // rdx
  int v36; // r12d
  size_t v37; // rbp
  void *v38; // rax
  void *v39; // rcx
  unsigned __int64 v40; // rdx
  unsigned __int64 v41; // xmm2_8
  int v42; // r12d
  size_t v43; // rbp
  unsigned __int64 v44; // rax
  _QWORD *v45; // rcx
  __int64 v46; // rax
  __m128d v47; // xmm1
  int v48; // esi
  __m128d *v49; // rdx
  unsigned int v50; // r8d
  unsigned int v51; // eax
  __m128d v52; // xmm0
  __m128d v53; // xmm0
  unsigned int v54; // eax
  __int64 v55; // xmm0_8
  unsigned int v56; // edx
  int v57; // eax
  unsigned __int64 v58; // rdx
  unsigned __int64 v59; // xmm0_8
  int v60; // r12d
  size_t v61; // rbp
  unsigned __int64 v62; // rax
  _QWORD *v63; // rcx
  __int64 v64; // rax
  int v65; // esi
  __m128d *v66; // rdx
  unsigned int v67; // r8d
  unsigned int v68; // eax
  __m128d v69; // xmm1
  unsigned int v70; // eax
  unsigned int v71; // edx
  int v72; // eax

  CoinSnapshot::gutsOfDestructor(this, 11);
  if ( *((_BYTE *)a2 + 8) )
  {
    *((_DWORD *)this + 53) = *((_DWORD *)a2 + 17);
    v11 = *((_DWORD *)a2 + 16);
  }
  else
  {
    *((_DWORD *)this + 53) = *((_DWORD *)a2 + 16);
    v11 = *((_DWORD *)a2 + 17);
  }
  *((_DWORD *)this + 52) = v11;
  v12 = *((_DWORD *)a2 + 18);
  *((_BYTE *)this + 225) |= 1u;
  *((_DWORD *)this + 54) = v12;
  v13 = (CoinPackedMatrix *)operator new(0x58u);
  CoinPackedMatrix::CoinPackedMatrix(v13, a2);
  *((_QWORD *)this + 18) = v13;
  if ( a8 )
  {
    *((_BYTE *)this + 224) |= 0x80u;
    v14 = (CoinPackedMatrix *)operator new(0x58u);
    CoinPackedMatrix::CoinPackedMatrix(v14, a2);
    CoinPackedMatrix::reverseOrdering(v14);
    *((_QWORD *)this + 17) = v14;
  }
  v15 = *((int *)this + 52);
  v16 = *((_DWORD *)this + 52);
  if ( v15 > 0xFFFFFFFFFFFFFFFLL )
    goto LABEL_64;
  v17 = 8 * v15;
  v18 = (void *)operator new[](8 * v15);
  v19 = v18;
  if ( a3 )
  {
    v19 = memcpy(v18, a3, v17);
  }
  else if ( v16 > 0 )
  {
    v19 = memset(v18, 0, 8LL * (unsigned int)(v16 - 1) + 8);
  }
  v20 = *((int *)this + 52);
  v21 = *((_QWORD *)this + 2);
  *((_QWORD *)this + 10) = v19;
  v22 = v20;
  if ( v20 > 0xFFFFFFFFFFFFFFFLL )
LABEL_64:
    __cxa_throw_bad_array_new_length();
  v23 = 8 * v20;
  v24 = operator new[](v23);
  v25 = (_QWORD *)v24;
  if ( a4 )
  {
    v25 = memcpy((void *)v24, a4, v23);
    goto LABEL_23;
  }
  if ( v22 > 0 )
  {
    v26 = (v24 >> 3) & 1;
    if ( (unsigned int)(v22 - 1) <= 4 )
    {
      v32 = 0;
LABEL_18:
      v25[v32] = v21;
      if ( v22 > v32 + 1 )
      {
        v25[v32 + 1] = v21;
        if ( v22 > v32 + 2 )
        {
          v25[v32 + 2] = v21;
          v33 = v32 + 3;
          if ( v22 > v32 + 3 )
          {
            v34 = v32 + 4;
            v25[v33] = v21;
            if ( v22 > v34 )
              v25[v34] = v21;
          }
        }
      }
      goto LABEL_23;
    }
    v27 = 0;
    if ( (_DWORD)v26 )
    {
      *(_QWORD *)v24 = v21;
      v27 = 1;
    }
    v28 = 0;
    v29 = v22 - v26;
    v30 = (__m128d *)&v25[v26];
    v31 = _mm_unpacklo_pd((__m128d)v21, (__m128d)v21);
    do
    {
      ++v28;
      ++v30;
      v30[-1] = v31;
    }
    while ( v29 >> 1 > v28 );
    v32 = (v29 & 0xFFFFFFFE) + v27;
    if ( v29 != (v29 & 0xFFFFFFFE) )
      goto LABEL_18;
  }
LABEL_23:
  v35 = *((int *)this + 52);
  *((_QWORD *)this + 11) = v25;
  v36 = v35;
  if ( v35 > 0xFFFFFFFFFFFFFFFLL )
    goto LABEL_64;
  v37 = 8 * v35;
  v38 = (void *)operator new[](8 * v35);
  v39 = v38;
  if ( a5 )
  {
    v39 = memcpy(v38, a5, v37);
  }
  else if ( v36 > 0 )
  {
    v39 = memset(v38, 0, 8LL * (unsigned int)(v36 - 1) + 8);
  }
  v40 = *((int *)this + 53);
  v41 = *((_QWORD *)this + 2);
  *((_QWORD *)this + 15) = v39;
  v42 = v40;
  if ( v40 > 0xFFFFFFFFFFFFFFFLL )
    goto LABEL_64;
  v43 = 8 * v40;
  v44 = operator new[](8 * v40);
  v45 = (_QWORD *)v44;
  if ( a6 )
  {
    v45 = memcpy((void *)v44, a6, v43);
    goto LABEL_39;
  }
  if ( v42 <= 0 )
    goto LABEL_39;
  v46 = (v44 >> 3) & 1;
  if ( (unsigned int)(v42 - 1) <= 2 )
  {
    v54 = 0;
    v47.m128d_f64[0] = -0.0;
  }
  else
  {
    if ( (_DWORD)v46 )
    {
      v47 = (__m128d)_mm_loadl_epi64((const __m128i *)&xmmword_289BF0);
      v48 = 1;
      *v45 = v41 ^ *(_QWORD *)&v47.m128d_f64[0];
    }
    else
    {
      v48 = 0;
      v47 = (__m128d)_mm_loadl_epi64((const __m128i *)&xmmword_289BF0);
    }
    v49 = (__m128d *)&v45[v46];
    v50 = v42 - v46;
    v51 = 0;
    v52 = _mm_xor_pd((__m128d)v41, v47);
    v53 = _mm_unpacklo_pd(v52, v52);
    do
    {
      ++v51;
      ++v49;
      v49[-1] = v53;
    }
    while ( v50 >> 1 > v51 );
    v54 = (v50 & 0xFFFFFFFE) + v48;
    if ( v50 == (v50 & 0xFFFFFFFE) )
      goto LABEL_39;
  }
  v55 = v41 ^ *(_QWORD *)&v47.m128d_f64[0];
  v45[v54] = v41 ^ *(_QWORD *)&v47.m128d_f64[0];
  v56 = v54 + 1;
  if ( v42 > (int)(v54 + 1) )
  {
    v57 = v54 + 2;
    v45[v56] = v55;
    if ( v42 > v57 )
      v45[v57] = v55;
  }
LABEL_39:
  v58 = *((int *)this + 53);
  v59 = *((_QWORD *)this + 2);
  *((_QWORD *)this + 12) = v45;
  v60 = v58;
  if ( v58 > 0xFFFFFFFFFFFFFFFLL )
    goto LABEL_64;
  v61 = 8 * v58;
  v62 = operator new[](8 * v58);
  v63 = (_QWORD *)v62;
  if ( a7 )
  {
    v63 = memcpy((void *)v62, a7, v61);
    goto LABEL_53;
  }
  if ( v60 > 0 )
  {
    v64 = (v62 >> 3) & 1;
    if ( (unsigned int)(v60 - 1) <= 4 )
    {
      v70 = 0;
LABEL_48:
      v63[v70] = v59;
      if ( v60 > (int)(v70 + 1) )
      {
        v63[v70 + 1] = v59;
        if ( v60 > (int)(v70 + 2) )
        {
          v63[v70 + 2] = v59;
          v71 = v70 + 3;
          if ( v60 > (int)(v70 + 3) )
          {
            v72 = v70 + 4;
            v63[v71] = v59;
            if ( v60 > v72 )
              v63[v72] = v59;
          }
        }
      }
      goto LABEL_53;
    }
    v65 = 0;
    if ( (_DWORD)v64 )
    {
      *v63 = v59;
      v65 = 1;
    }
    v66 = (__m128d *)&v63[v64];
    v67 = v60 - v64;
    v68 = 0;
    v69 = _mm_unpacklo_pd((__m128d)v59, (__m128d)v59);
    do
    {
      ++v68;
      ++v66;
      v66[-1] = v69;
    }
    while ( v67 >> 1 > v68 );
    v70 = (v67 & 0xFFFFFFFE) + v65;
    if ( v67 != (v67 & 0xFFFFFFFE) )
      goto LABEL_48;
  }
LABEL_53:
  *((_QWORD *)this + 13) = v63;
  return CoinSnapshot::createRightHandSide(this);
}

