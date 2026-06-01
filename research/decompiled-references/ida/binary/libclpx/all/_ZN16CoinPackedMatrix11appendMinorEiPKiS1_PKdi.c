__int64 __fastcall CoinPackedMatrix::appendMinor(
        CoinPackedMatrix *this,
        int a2,
        const int *a3,
        const int *a4,
        const double *a5,
        int a6)
{
  unsigned __int64 v8; // r11
  _DWORD *v9; // rax
  int v10; // r13d
  _DWORD *v11; // r12
  void *v12; // rax
  _BYTE *v13; // rax
  _BYTE *v14; // r8
  unsigned int v15; // r14d
  const int *v16; // r15
  const int *v17; // rdi
  int v18; // esi
  int v19; // eax
  const int *v20; // rcx
  const int *v21; // rsi
  const int *v22; // rdx
  _BYTE *v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  int v26; // ecx
  __int64 v27; // rsi
  __int64 v28; // rdi
  __int64 v29; // rax
  int v30; // edx
  const int *v31; // r9
  int v32; // r15d
  __int64 v33; // rdx
  __int64 v34; // r13
  __int64 v35; // r12
  __int64 v36; // r11
  __int64 v37; // r10
  __int64 v38; // rax
  const double *v39; // rdi
  const int *v40; // r8
  __int64 v41; // rdx
  int *v42; // rsi
  int v43; // ebp
  int v44; // ecx
  signed int v46; // eax
  const int *v47; // r8
  const int *v48; // r13
  int v49; // edx
  int v50; // esi
  __int64 v51; // r12
  __int64 v52; // rcx
  int v53; // edi
  int v54; // edi
  int v55; // edi
  unsigned int v56; // r9d
  __m128i v57; // xmm3
  const __m128i *v58; // rdx
  unsigned int v59; // eax
  __m128i v60; // xmm0
  __m128i si128; // xmm2
  __m128i v62; // xmm1
  __m128i v63; // xmm2
  __m128i v64; // xmm1
  __m128i v65; // xmm0
  __m128i v66; // xmm2
  __m128i v67; // xmm1
  int v68; // edx
  int v69; // edx
  _DWORD *v70; // rax
  int v71; // esi
  const int *v72; // rdi
  int v73; // esi
  int v74; // edx
  const int *v75; // rax
  const int *v76; // rsi
  __int64 v77; // rdx
  int v78; // esi
  const int *v79; // [rsp+0h] [rbp-58h]

  v8 = *((int *)this + 16);
  if ( a6 <= 0 )
  {
    v46 = v8 - 1;
    if ( a2 > 0 )
    {
      v47 = a3;
      v48 = &a3[a2 - 1 + 1];
      do
      {
        v49 = *v47;
        v50 = v47[1];
        if ( *v47 < v50 )
        {
          v51 = v49;
          v52 = -(int)((unsigned __int64)&a4[v49] >> 2) & 3;
          if ( (unsigned int)(v50 - 1 - v49) > 6 )
          {
            v53 = *v47;
            if ( (_DWORD)v52 )
            {
              if ( v46 < a4[v49] )
                v46 = a4[v49];
              v53 = v49 + 1;
              if ( (_DWORD)v52 != 1 )
              {
                v54 = a4[v53];
                if ( v46 < v54 )
                  v46 = v54;
                v53 = v49 + 2;
                if ( (_DWORD)v52 != 2 )
                {
                  v55 = a4[v53];
                  if ( v46 < v55 )
                    v46 = v55;
                  v53 = v49 + 3;
                }
              }
            }
            v56 = v50 - v49 - v52;
            v57 = _mm_cvtsi32_si128(v46);
            v58 = (const __m128i *)&a4[v49 + v52];
            v59 = 0;
            v60 = _mm_shuffle_epi32(v57, 0);
            do
            {
              si128 = _mm_load_si128(v58);
              ++v59;
              ++v58;
              v62 = _mm_cmpgt_epi32(v60, si128);
              v60 = _mm_or_si128(_mm_and_si128(v60, v62), _mm_andnot_si128(v62, si128));
            }
            while ( v59 < v56 >> 2 );
            v63 = _mm_srli_si128(v60, 8);
            v49 = (v56 & 0xFFFFFFFC) + v53;
            v64 = _mm_cmpgt_epi32(v63, v60);
            v65 = _mm_or_si128(_mm_andnot_si128(v64, v60), _mm_and_si128(v63, v64));
            v66 = _mm_srli_si128(v65, 4);
            v67 = _mm_cmpgt_epi32(v66, v65);
            v46 = _mm_cvtsi128_si32(_mm_or_si128(_mm_andnot_si128(v67, v65), _mm_and_si128(v66, v67)));
            if ( (v56 & 0xFFFFFFFC) == v56 )
              goto LABEL_72;
            v51 = v49;
          }
          if ( v46 < a4[v51] )
            v46 = a4[v51];
          if ( v49 + 1 < v50 )
          {
            if ( v46 < a4[v49 + 1] )
              v46 = a4[v49 + 1];
            if ( v50 > v49 + 2 )
            {
              if ( v46 < a4[v49 + 2] )
                v46 = a4[v49 + 2];
              if ( v50 > v49 + 3 )
              {
                if ( v46 < a4[v49 + 3] )
                  v46 = a4[v49 + 3];
                if ( v50 > v49 + 4 )
                {
                  if ( v46 < a4[v49 + 4] )
                    v46 = a4[v49 + 4];
                  if ( v50 > v49 + 5 )
                  {
                    if ( v46 < a4[v49 + 5] )
                      v46 = a4[v49 + 5];
                    v68 = v49 + 6;
                    if ( v50 > v68 )
                    {
                      v69 = a4[v68];
                      if ( v46 < v69 )
                        v46 = v69;
                    }
                  }
                }
              }
            }
          }
        }
LABEL_72:
        ++v47;
      }
      while ( v48 != v47 );
    }
    if ( v46 >= (int)v8 )
    {
      v78 = v46 + 1;
      if ( *((_BYTE *)this + 8) )
        CoinPackedMatrix::setDimensions(this, -1, v78);
      else
        CoinPackedMatrix::setDimensions(this, v78, -1);
      v8 = *((int *)this + 16);
    }
    if ( v8 > 0x1FFFFFFFFFFFFFFELL )
LABEL_95:
      __cxa_throw_bad_array_new_length();
    v70 = (_DWORD *)operator new[](4 * v8);
    v71 = *((_DWORD *)this + 16);
    v11 = v70;
    if ( v71 )
    {
      sub_223D80(v70, v71);
      v26 = *((_DWORD *)this + 16) - 1;
      if ( a2 > 0 )
        goto LABEL_78;
      if ( v26 >= 0 )
        goto LABEL_84;
    }
    else if ( a2 > 0 )
    {
      v26 = -1;
LABEL_78:
      v16 = a3 + 1;
      v72 = a3;
      do
      {
        v73 = *v72;
        v74 = v72[1];
        if ( *v72 < v74 )
        {
          v75 = &a4[v73];
          v76 = &a4[v73 + 1 + (unsigned __int64)(unsigned int)(v74 - 1 - v73)];
          do
          {
            v77 = *v75++;
            ++v11[v77];
          }
          while ( v76 != v75 );
        }
        ++v72;
      }
      while ( &a3[a2 - 1 + 1] != v72 );
      if ( v26 < 0 )
      {
        v15 = 0;
        operator delete[](v11);
        goto LABEL_26;
      }
      goto LABEL_84;
    }
LABEL_90:
    v15 = 0;
    operator delete[](v11);
    goto LABEL_32;
  }
  if ( v8 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_95;
  v9 = (_DWORD *)operator new[](4 * v8);
  v10 = *((_DWORD *)this + 16);
  v11 = v9;
  if ( v10 )
  {
    sub_223D80(v9, v10);
    v10 = *((_DWORD *)this + 16);
  }
  v12 = (void *)operator new[](v10);
  v13 = memset(v12, 0, v10);
  v14 = v13;
  if ( a2 <= 0 )
  {
    operator delete[](v13);
    v26 = *((_DWORD *)this + 16) - 1;
    if ( v26 < 0 )
      goto LABEL_90;
LABEL_84:
    v15 = 0;
    goto LABEL_20;
  }
  v15 = 0;
  v16 = a3 + 1;
  v17 = a3;
  do
  {
    v18 = *v17;
    v19 = v17[1];
    if ( *v17 < v19 )
    {
      v20 = &a4[v18];
      v21 = &a4[v18 + 1 + (unsigned __int64)(unsigned int)(v19 - 1 - v18)];
      v22 = v20;
      do
      {
        while ( 1 )
        {
          v24 = *v22;
          if ( (int)v24 < 0 )
            break;
          if ( (int)v24 >= v10 )
            break;
          ++v11[v24];
          v23 = &v14[v24];
          if ( *v23 )
            break;
          ++v22;
          *v23 = 1;
          if ( v21 == v22 )
            goto LABEL_14;
        }
        ++v22;
        ++v15;
      }
      while ( v21 != v22 );
      do
      {
LABEL_14:
        v25 = *v20;
        if ( (int)v25 >= 0 && (int)v25 < v10 )
          v14[v25] = 0;
        ++v20;
      }
      while ( v22 != v20 );
    }
    ++v17;
  }
  while ( &a3[a2 - 1 + 1] != v17 );
  operator delete[](v14);
  v26 = *((_DWORD *)this + 16) - 1;
  if ( v26 < 0 )
  {
    operator delete[](v11);
LABEL_26:
    v31 = v16;
    v32 = 0;
    do
    {
      v33 = *(v31 - 1);
      if ( (int)v33 < *v31 )
      {
        v34 = *((_QWORD *)this + 4);
        v35 = *((_QWORD *)this + 6);
        v36 = *((_QWORD *)this + 7);
        v37 = *((_QWORD *)this + 5);
        v38 = (int)v33 + 1;
        v79 = a4;
        v39 = &a5[v33 - v38];
        v40 = &a4[v33 - v38];
        do
        {
          v41 = v40[v38];
          v42 = (int *)(v36 + 4 * v41);
          v43 = *v42 + *(_DWORD *)(v35 + 4 * v41);
          v44 = *v42 + 1;
          *(double *)(v34 + 8LL * v43) = v39[v38];
          *v42 = v44;
          *(_DWORD *)(v37 + 4LL * v43) = *((_DWORD *)this + 17);
          LODWORD(v41) = v38++;
        }
        while ( *v31 > (int)v41 );
        a4 = v79;
      }
      ++*((_DWORD *)this + 17);
      ++v32;
      ++v31;
    }
    while ( a2 > v32 );
    goto LABEL_32;
  }
LABEL_20:
  v27 = *((_QWORD *)this + 6);
  v28 = *((_QWORD *)this + 7);
  if ( *(_DWORD *)(v27 + 4LL * v26 + 4) < v11[v26] + *(_DWORD *)(v27 + 4LL * v26) + *(_DWORD *)(v28 + 4LL * v26) )
  {
LABEL_33:
    CoinPackedMatrix::resizeForAddingMinorVectors(this, v11);
  }
  else
  {
    v29 = 4LL * v26 - 4;
    while ( --v26 != -1 )
    {
      v30 = *(_DWORD *)((char *)v11 + v29) + *(_DWORD *)(v27 + v29) + *(_DWORD *)(v28 + v29);
      v29 -= 4;
      if ( v30 > *(_DWORD *)(v27 + v29 + 8) )
        goto LABEL_33;
    }
  }
  operator delete[](v11);
  if ( a2 > 0 )
  {
    v16 = a3 + 1;
    goto LABEL_26;
  }
LABEL_32:
  *((_DWORD *)this + 18) += a3[a2];
  return v15;
}

