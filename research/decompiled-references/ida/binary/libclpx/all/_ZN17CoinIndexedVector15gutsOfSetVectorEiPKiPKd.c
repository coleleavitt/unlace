__int64 __fastcall CoinIndexedVector::gutsOfSetVector(
        CoinIndexedVector *this,
        int a2,
        signed int *a3,
        const double *a4)
{
  __int64 v6; // r12
  __int64 v8; // rdx
  int v9; // r9d
  signed int v10; // eax
  const __m128i *v11; // rdi
  __m128i v12; // xmm5
  int v13; // r8d
  unsigned int v14; // eax
  __m128i v15; // xmm0
  __m128i si128; // xmm2
  __m128i v17; // xmm1
  __m128i v18; // xmm2
  unsigned int v19; // edx
  __m128i v20; // xmm1
  __m128i v21; // xmm0
  __m128i v22; // xmm2
  __m128i v23; // xmm1
  int v24; // eax
  int v25; // edx
  int v26; // edx
  __int64 v27; // r12
  __int64 v28; // rcx
  __int64 result; // rax
  int v30; // edi
  char v31; // r9
  __int64 v32; // rdx
  __int64 v33; // r11
  double v34; // xmm1_8
  double *v35; // rsi
  int v36; // r8d
  double v37; // xmm0_8
  int v38; // edx
  __int64 v39; // r10
  __int64 v40; // r8
  __int64 v41; // rdx
  __int64 v42; // rsi
  double *v43; // rdx
  void *exception; // r13
  __int64 v45; // [rsp+20h] [rbp-58h]
  __int64 v46; // [rsp+28h] [rbp-50h]
  __int64 v47; // [rsp+30h] [rbp-48h]

  if ( a2 <= 0 )
  {
    result = CoinIndexedVector::reserve(this, 0);
    *((_DWORD *)this + 4) = 0;
    return result;
  }
  v6 = (unsigned int)(a2 - 1);
  v8 = -(int)((unsigned __int64)a3 >> 2) & 3;
  if ( (unsigned int)v6 <= 6 )
  {
    v24 = -1;
    v19 = 0;
LABEL_15:
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
          if ( (int)(v19 + 4) < a2 )
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
    goto LABEL_35;
  }
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
  v20 = _mm_cmpgt_epi32(v18, v15);
  v21 = _mm_or_si128(_mm_andnot_si128(v20, v15), _mm_and_si128(v18, v20));
  v22 = _mm_srli_si128(v21, 4);
  v23 = _mm_cmpgt_epi32(v22, v21);
  v24 = _mm_cvtsi128_si32(_mm_or_si128(_mm_andnot_si128(v23, v21), _mm_and_si128(v22, v23)));
  if ( (v13 & 0xFFFFFFFC) != v13 )
    goto LABEL_15;
LABEL_35:
  v27 = v6 + 1;
  CoinIndexedVector::reserve(this, v24 + 1);
  *((_DWORD *)this + 4) = 0;
  v28 = *((_QWORD *)this + 1);
  result = 0;
  v30 = 0;
  v31 = 0;
  do
  {
    while ( 1 )
    {
      v34 = a4[result];
      v35 = (double *)(v28 + 8LL * a3[result]);
      v36 = a3[result];
      if ( *v35 == 0.0 )
        break;
      v37 = *v35 + v34;
      ++v30;
      *v35 = v37;
      if ( fabs(v37) < 1.0e-50 )
        v31 = 1;
      if ( ++result == v27 )
        goto LABEL_43;
    }
    if ( fabs(v34) >= 1.0e-50 )
    {
      v32 = *((int *)this + 4);
      v33 = *(_QWORD *)this;
      *((_DWORD *)this + 4) = v32 + 1;
      *(_DWORD *)(v33 + 4 * v32) = v36;
      *v35 = v34;
    }
    ++result;
  }
  while ( result != v27 );
LABEL_43:
  if ( v31 )
  {
    v38 = *((_DWORD *)this + 4);
    *((_DWORD *)this + 4) = 0;
    if ( v38 > 0 )
    {
      v39 = *(_QWORD *)this;
      result = *(_QWORD *)this;
      v40 = *(_QWORD *)this + 4LL * (unsigned int)(v38 - 1) + 4;
      do
      {
        while ( 1 )
        {
          v42 = *(int *)result;
          v43 = (double *)(v28 + 8 * v42);
          if ( fabs(*v43) < 1.0e-50 )
            break;
          v41 = *((int *)this + 4);
          result += 4;
          *((_DWORD *)this + 4) = v41 + 1;
          *(_DWORD *)(v39 + 4 * v41) = v42;
          if ( result == v40 )
            goto LABEL_49;
        }
        result += 4;
        *v43 = 0.0;
      }
      while ( result != v40 );
    }
  }
LABEL_49:
  if ( v30 )
  {
    exception = __cxa_allocate_exception(0x30u);
    std::string::string();
    std::string::string();
    std::string::string();
    CoinError::CoinError();
    if ( (_UNKNOWN *)(v45 - 24) != &std::string::_Rep::_S_empty_rep_storage )
      sub_1CD0E0(v45 - 24);
    if ( (_UNKNOWN *)(v46 - 24) != &std::string::_Rep::_S_empty_rep_storage )
      sub_1CD0E0(v46 - 24);
    if ( (_UNKNOWN *)(v47 - 24) != &std::string::_Rep::_S_empty_rep_storage )
      sub_1CD0E0(v47 - 24);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'CoinError, (void (*)(void *))CoinError::~CoinError);
  }
  return result;
}

