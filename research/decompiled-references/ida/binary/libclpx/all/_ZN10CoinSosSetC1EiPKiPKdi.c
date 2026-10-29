// Alternative name is '_ZN10CoinSosSetC2EiPKiPKdi'
void __fastcall CoinSosSet::CoinSosSet(CoinSosSet *this, int a2, const int *a3, const double *a4, int a5)
{
  unsigned __int64 v8; // rdi
  void *v9; // rax
  __int64 v10; // rdx
  int v11; // ebp
  double *v12; // rax
  double *v13; // rcx
  double v14; // xmm0_8
  double *v15; // rax
  __int64 v16; // rax
  unsigned int v17; // edx
  int v18; // edi
  __m128i si128; // xmm2
  unsigned int v20; // esi
  __m128d *v21; // rax
  unsigned int v22; // esi
  __m128i v23; // xmm0
  __m128i v24; // xmm1
  int v25; // eax
  int v26; // edx
  __int64 v27; // rsi
  double v28; // xmm0_8
  int v29; // edx
  __int64 v30; // rsi
  double v31; // xmm0_8
  int v32; // edx
  int v33; // eax
  unsigned int v34; // [rsp+Ch] [rbp-2Ch]

  CoinSet::CoinSet(this, a2, a3);
  v8 = *((int *)this + 2);
  *(_QWORD *)this = off_4D1928;
  if ( v8 > 0xFFFFFFFFFFFFFFFLL )
    __cxa_throw_bad_array_new_length();
  v9 = (void *)operator new[](8 * v8);
  v10 = *((int *)this + 2);
  *((_QWORD *)this + 3) = v9;
  v11 = v10;
  v12 = (double *)memcpy(v9, a4, 8 * v10);
  v13 = v12;
  *((_DWORD *)this + 3) = a5;
  v14 = *v12;
  if ( v11 <= 1 )
  {
    if ( v11 <= 0 )
      return;
  }
  else
  {
    if ( v14 != v12[1] )
      return;
    v15 = v12 + 2;
    while ( v15 != &v13[(unsigned int)(v11 - 2) + 2] )
    {
      if ( v14 != *v15++ )
        return;
    }
  }
  v16 = ((unsigned __int64)v13 >> 3) & 1;
  if ( (unsigned int)(v11 - 1) <= 4 )
  {
    v25 = 0;
LABEL_13:
    v13[v25] = (double)v25;
    v26 = v25 + 1;
    if ( v11 > v25 + 1 )
    {
      v27 = v26;
      v28 = (double)v26;
      v29 = v25 + 2;
      v13[v27] = v28;
      if ( v11 > v25 + 2 )
      {
        v30 = v29;
        v31 = (double)v29;
        v32 = v25 + 3;
        v13[v30] = v31;
        if ( v11 > v25 + 3 )
        {
          v33 = v25 + 4;
          v13[v32] = (double)v32;
          if ( v11 > v33 )
            v13[v33] = (double)v33;
        }
      }
    }
    return;
  }
  v34 = 0;
  if ( (_DWORD)v16 )
  {
    *v13 = 0.0;
    v34 = 1;
  }
  v17 = 0;
  v18 = v11 - v16;
  si128 = _mm_load_si128((const __m128i *)&xmmword_289BC0);
  v20 = v11 - v16;
  v21 = (__m128d *)&v13[v16];
  v22 = v20 >> 2;
  v23 = _mm_add_epi32(_mm_shuffle_epi32(_mm_cvtsi32_si128(v34), 0), (__m128i)xmmword_289BB0);
  do
  {
    *v21 = _mm_cvtepi32_pd(v23);
    v24 = _mm_shuffle_epi32(v23, 238);
    ++v17;
    v23 = _mm_add_epi32(v23, si128);
    v21 += 2;
    v21[-1] = _mm_cvtepi32_pd(v24);
  }
  while ( v17 < v22 );
  v25 = (v18 & 0xFFFFFFFC) + v34;
  if ( v18 != (v18 & 0xFFFFFFFC) )
    goto LABEL_13;
}

