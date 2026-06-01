void __fastcall CoinPackedMatrix::appendRows(CoinPackedMatrix *this, int a2, const CoinPackedVectorBase *const *a3)
{
  int v5; // eax
  __int64 v6; // rdx
  const CoinPackedVectorBase *const *v7; // r9
  const CoinPackedVectorBase *const *v8; // r13
  signed int v9; // ebx
  const CoinPackedVectorBase *const *v10; // r12
  const CoinPackedVectorBase *v11; // rdi
  __int64 (**v12)(void); // rax
  int v13; // r10d
  __int64 (*v14)(void); // rax
  __int64 v15; // rax
  signed int v16; // esi
  __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  signed int v19; // esi
  signed int v20; // esi
  signed int v21; // esi
  unsigned int v22; // edi
  __int64 v23; // rdx
  unsigned int v24; // ecx
  __m128i v25; // xmm2
  __m128i *v26; // rdx
  __m128i v27; // xmm0
  __m128i v28; // xmm1
  __m128i v29; // xmm3
  __m128i v30; // xmm0
  __m128i v31; // xmm1
  __m128i v32; // xmm2
  __m128i v33; // xmm0
  int v34; // esi
  signed int v35; // eax
  int v36; // edx
  int v37; // eax
  int v38; // [rsp+0h] [rbp-48h]

  if ( *((_BYTE *)this + 8) )
  {
    if ( a2 )
    {
      v5 = a2 - 1;
      if ( a2 - 1 < 0 )
      {
        v36 = 0;
      }
      else
      {
        v6 = v5;
        v7 = &a3[v6 - 1];
        v8 = &a3[v6];
        v9 = -1;
        v10 = &v7[-v5];
        do
        {
          v11 = *v8;
          v12 = **(__int64 (****)(void))v8;
          if ( (char *)*v12 == (char *)CoinShallowPackedVector::getNumElements )
          {
            v13 = *((_DWORD *)v11 + 12);
          }
          else
          {
            v37 = (*v12)();
            v11 = *v8;
            v13 = v37;
            v12 = **(__int64 (****)(void))v8;
          }
          v14 = v12[1];
          if ( (char *)v14 == (char *)CoinShallowPackedVector::getIndices )
          {
            v15 = *((_QWORD *)v11 + 4);
          }
          else
          {
            v38 = v13;
            v15 = v14();
            v13 = v38;
          }
          v16 = v13 - 1;
          if ( v13 - 1 >= 0 )
          {
            v17 = 4LL * v13;
            v18 = ((unsigned __int64)(v15 + v17 - 16) >> 2) & 3;
            if ( (unsigned int)v16 <= 6 )
              goto LABEL_24;
            if ( (_DWORD)v18 )
            {
              v19 = *(_DWORD *)(v15 + 4LL * v16);
              if ( v9 < v19 )
                v9 = v19;
              v16 = v13 - 2;
              if ( (_DWORD)v18 != 1 )
              {
                v20 = *(_DWORD *)(v15 + 4LL * v16);
                if ( v9 < v20 )
                  v9 = v20;
                v16 = v13 - 3;
                if ( (_DWORD)v18 != 2 )
                {
                  v21 = *(_DWORD *)(v15 + 4LL * v16);
                  if ( v9 < v21 )
                    v9 = v21;
                  v16 = v13 - 4;
                }
              }
            }
            v22 = v13 - v18;
            v23 = v17 + 4 * ~v18 - 12;
            v24 = 0;
            v25 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v9), 0);
            v26 = (__m128i *)(v15 + v23);
            do
            {
              v27 = _mm_shuffle_epi32(*v26, 27);
              ++v24;
              --v26;
              v28 = _mm_cmpgt_epi32(v27, v25);
              v25 = _mm_or_si128(_mm_andnot_si128(v28, v25), _mm_and_si128(v27, v28));
            }
            while ( v24 < v22 >> 2 );
            v29 = _mm_srli_si128(v25, 8);
            v16 -= v22 & 0xFFFFFFFC;
            v30 = _mm_cmpgt_epi32(v25, v29);
            v31 = _mm_or_si128(_mm_and_si128(v25, v30), _mm_andnot_si128(v30, v29));
            v32 = _mm_srli_si128(v31, 4);
            v33 = _mm_cmpgt_epi32(v31, v32);
            v9 = _mm_cvtsi128_si32(_mm_or_si128(_mm_and_si128(v31, v33), _mm_andnot_si128(v33, v32)));
            if ( v22 != (v22 & 0xFFFFFFFC) )
            {
LABEL_24:
              if ( v9 < *(_DWORD *)(v15 + 4LL * v16) )
                v9 = *(_DWORD *)(v15 + 4LL * v16);
              if ( v16 )
              {
                if ( v9 < *(_DWORD *)(v15 + 4LL * (v16 - 1)) )
                  v9 = *(_DWORD *)(v15 + 4LL * (v16 - 1));
                if ( v16 != 1 )
                {
                  if ( v9 < *(_DWORD *)(v15 + 4LL * (v16 - 2)) )
                    v9 = *(_DWORD *)(v15 + 4LL * (v16 - 2));
                  if ( v16 != 2 )
                  {
                    if ( v9 < *(_DWORD *)(v15 + 4LL * (v16 - 3)) )
                      v9 = *(_DWORD *)(v15 + 4LL * (v16 - 3));
                    if ( v16 != 3 )
                    {
                      if ( v9 < *(_DWORD *)(v15 + 4LL * (v16 - 4)) )
                        v9 = *(_DWORD *)(v15 + 4LL * (v16 - 4));
                      if ( v16 != 4 )
                      {
                        if ( v9 < *(_DWORD *)(v15 + 4LL * (v16 - 5)) )
                          v9 = *(_DWORD *)(v15 + 4LL * (v16 - 5));
                        v34 = v16 - 6;
                        if ( v34 != -1 )
                        {
                          v35 = *(_DWORD *)(v15 + 4LL * v34);
                          if ( v9 < v35 )
                            v9 = v35;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          --v8;
        }
        while ( v8 != v10 );
        v36 = v9 + 1;
      }
      if ( *((_DWORD *)this + 16) < v36 )
        CoinPackedMatrix::setDimensions(this, *((_DWORD *)this + 17), v36);
      CoinPackedMatrix::appendMinorVectors(this, a2, a3);
    }
  }
  else
  {
    CoinPackedMatrix::appendMajorVectors(this, a2, a3);
  }
}

