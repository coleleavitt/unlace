__int64 __fastcall CoinIndexedVector::gutsOfSetConstant(CoinIndexedVector *this, int a2, signed int *a3, double a4)
{
  const int *v6; // rbx
  __int64 v7; // r13
  __int64 v8; // rdx
  int v9; // r9d
  signed int v10; // eax
  const __m128i *v11; // rcx
  __m128i v12; // xmm5
  int v13; // r8d
  unsigned int v14; // eax
  __m128i v15; // xmm1
  __m128i si128; // xmm3
  __m128i v17; // xmm2
  __m128i v18; // xmm3
  unsigned int v19; // edx
  __m128i v20; // xmm2
  __m128i v21; // xmm1
  __m128i v22; // xmm3
  __m128i v23; // xmm2
  int v24; // eax
  int v25; // edx
  int v26; // edx
  __int64 v27; // rcx
  const int *v28; // r8
  char v29; // si
  int v30; // edx
  __int64 v31; // r10
  __int64 result; // rax
  __int64 v33; // rdi
  double v34; // xmm1_8
  int v35; // esi
  __int64 v36; // r10
  __int64 v37; // r8
  __int64 v38; // rsi
  __int64 v39; // rdi
  double *v40; // rsi
  double v41; // xmm1_8
  void *exception; // r13
  __int64 v43; // [rsp+20h] [rbp-58h]
  __int64 v44; // [rsp+28h] [rbp-50h]
  __int64 v45; // [rsp+30h] [rbp-48h]

  if ( a2 <= 0 )
  {
    result = CoinIndexedVector::reserve(this, 0);
    *((_DWORD *)this + 4) = 0;
    return result;
  }
  v6 = a3;
  v7 = (unsigned int)(a2 - 1);
  v8 = -(int)((unsigned __int64)a3 >> 2) & 3;
  if ( (unsigned int)v7 <= 6 )
  {
    v24 = -1;
    v19 = 0;
  }
  else
  {
    if ( (_DWORD)v8 )
    {
      v9 = 1;
      v10 = -1;
      if ( *a3 >= 0 )
        v10 = *a3;
      if ( (_DWORD)v8 != 1 )
      {
        v9 = 2;
        if ( v10 < a3[1] )
          v10 = a3[1];
        if ( (_DWORD)v8 != 2 )
        {
          v9 = 3;
          if ( v10 < a3[2] )
            v10 = a3[2];
        }
      }
    }
    else
    {
      v10 = -1;
      v9 = 0;
    }
    v11 = (const __m128i *)&a3[v8];
    v12 = _mm_cvtsi32_si128(v10);
    v13 = a2 - v8;
    v14 = 0;
    v15 = _mm_shuffle_epi32(v12, 0);
    do
    {
      si128 = _mm_load_si128(v11);
      ++v14;
      ++v11;
      v17 = _mm_cmpgt_epi32(v15, si128);
      v15 = _mm_or_si128(_mm_and_si128(v15, v17), _mm_andnot_si128(v17, si128));
    }
    while ( (unsigned int)(a2 - v8) >> 2 > v14 );
    v18 = _mm_srli_si128(v15, 8);
    v19 = (v13 & 0xFFFFFFFC) + v9;
    v20 = _mm_cmpgt_epi32(v15, v18);
    v21 = _mm_or_si128(_mm_and_si128(v15, v20), _mm_andnot_si128(v20, v18));
    v22 = _mm_srli_si128(v21, 4);
    v23 = _mm_cmpgt_epi32(v21, v22);
    v24 = _mm_cvtsi128_si32(_mm_or_si128(_mm_and_si128(v21, v23), _mm_andnot_si128(v23, v22)));
    if ( v13 == (v13 & 0xFFFFFFFC) )
      goto LABEL_35;
  }
  if ( v24 < a3[v19] )
    v24 = a3[v19];
  if ( (int)(v19 + 1) < a2 )
  {
    if ( v24 < a3[v19 + 1] )
      v24 = a3[v19 + 1];
    if ( a2 > (int)(v19 + 2) )
    {
      if ( v24 < a3[v19 + 2] )
        v24 = a3[v19 + 2];
      if ( a2 > (int)(v19 + 3) )
      {
        if ( v24 < a3[v19 + 3] )
          v24 = a3[v19 + 3];
        if ( a2 > (int)(v19 + 4) )
        {
          if ( v24 < a3[v19 + 4] )
            v24 = a3[v19 + 4];
          if ( a2 > (int)(v19 + 5) )
          {
            if ( v24 < a3[v19 + 5] )
              v24 = a3[v19 + 5];
            v25 = v19 + 6;
            if ( a2 > v25 )
            {
              v26 = a3[v25];
              if ( v24 < v26 )
                v24 = v26;
            }
          }
        }
      }
    }
  }
LABEL_35:
  CoinIndexedVector::reserve(this, v24 + 1);
  *((_DWORD *)this + 4) = 0;
  v27 = *((_QWORD *)this + 1);
  if ( COERCE_DOUBLE(*(_QWORD *)&a4 & 0x7FFFFFFFFFFFFFFFLL) < 1.0e-50 )
  {
    v29 = 0;
    v30 = 0;
    do
    {
      result = v27 + 8LL * *v6;
      if ( *(double *)result != 0.0 )
      {
        v41 = *(double *)result + a4;
        ++v30;
        *(double *)result = v41;
        if ( fabs(v41) < 1.0e-50 )
          v29 = 1;
      }
      ++v6;
    }
    while ( v6 != &a3[v7 + 1] );
  }
  else
  {
    v28 = &a3[v7 + 1];
    v29 = 0;
    v30 = 0;
    do
    {
      while ( 1 )
      {
        v33 = *v6;
        result = v27 + 8 * v33;
        if ( *(double *)result != 0.0 )
          break;
        v31 = *(_QWORD *)this;
        ++v6;
        *(double *)result = a4 + 0.0;
        result = *((int *)this + 4);
        *((_DWORD *)this + 4) = result + 1;
        *(_DWORD *)(v31 + 4 * result) = v33;
        if ( v6 == v28 )
          goto LABEL_42;
      }
      v34 = *(double *)result + a4;
      ++v30;
      *(double *)result = v34;
      if ( fabs(v34) < 1.0e-50 )
        v29 = 1;
      ++v6;
    }
    while ( v6 != v28 );
  }
LABEL_42:
  if ( v29 )
  {
    v35 = *((_DWORD *)this + 4);
    *((_DWORD *)this + 4) = 0;
    if ( v35 > 0 )
    {
      v36 = *(_QWORD *)this;
      result = *(_QWORD *)this;
      v37 = *(_QWORD *)this + 4LL * (unsigned int)(v35 - 1) + 4;
      do
      {
        while ( 1 )
        {
          v39 = *(int *)result;
          v40 = (double *)(v27 + 8 * v39);
          if ( fabs(*v40) < 1.0e-50 )
            break;
          v38 = *((int *)this + 4);
          result += 4;
          *((_DWORD *)this + 4) = v38 + 1;
          *(_DWORD *)(v36 + 4 * v38) = v39;
          if ( result == v37 )
            goto LABEL_48;
        }
        result += 4;
        *v40 = 0.0;
      }
      while ( result != v37 );
    }
  }
LABEL_48:
  if ( v30 )
  {
    exception = __cxa_allocate_exception(0x30u);
    std::string::string();
    std::string::string();
    std::string::string();
    CoinError::CoinError();
    if ( (_UNKNOWN *)(v43 - 24) != &std::string::_Rep::_S_empty_rep_storage )
      sub_1CD0E0(v43 - 24);
    if ( (_UNKNOWN *)(v44 - 24) != &std::string::_Rep::_S_empty_rep_storage )
      sub_1CD0E0(v44 - 24);
    if ( (_UNKNOWN *)(v45 - 24) != &std::string::_Rep::_S_empty_rep_storage )
      sub_1CD0E0(v45 - 24);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'CoinError, (void (*)(void *))CoinError::~CoinError);
  }
  return result;
}

