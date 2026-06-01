__int64 __fastcall CoinIndexedVector::append(CoinIndexedVector *this, const CoinIndexedVector *a2)
{
  int v3; // ecx
  int *v4; // r13
  __int64 v5; // r12
  __int64 v6; // r14
  int *v7; // rbx
  __int64 v8; // rdx
  int v9; // edi
  int v10; // eax
  unsigned int v11; // eax
  unsigned int v12; // r8d
  const __m128i *v13; // rdx
  __m128i v14; // xmm0
  __m128i si128; // xmm2
  __m128i v16; // xmm1
  __m128i v17; // xmm2
  unsigned int v18; // eax
  __m128i v19; // xmm1
  __m128i v20; // xmm0
  __m128i v21; // xmm2
  __m128i v22; // xmm1
  int v23; // esi
  int v24; // eax
  int v25; // eax
  __int64 v26; // rsi
  __int64 v27; // r9
  int v28; // r8d
  char v29; // di
  double v30; // xmm0_8
  __int64 result; // rax
  double *v32; // rdx
  int v33; // ecx
  double v34; // xmm1_8
  __int64 v35; // rdx
  int v36; // edx
  __int64 v37; // r10
  __int64 v38; // rdi
  __int64 v39; // rdx
  __int64 v40; // rcx
  double *v41; // rdx
  void *exception; // r13
  unsigned int v43; // [rsp+Ch] [rbp-6Ch]
  __int64 v44; // [rsp+20h] [rbp-58h]
  __int64 v45; // [rsp+28h] [rbp-50h]
  __int64 v46; // [rsp+30h] [rbp-48h]

  v3 = *((_DWORD *)a2 + 4);
  v4 = *(int **)a2;
  v5 = *((_QWORD *)a2 + 1);
  if ( v3 <= 0 )
    return CoinIndexedVector::reserve(this, 0);
  v6 = (unsigned int)(v3 - 1);
  v7 = *(int **)a2;
  v8 = -(int)((unsigned __int64)v4 >> 2) & 3;
  if ( (unsigned int)v6 <= 6 )
  {
    v18 = 0;
    v23 = -1;
  }
  else
  {
    if ( (_DWORD)v8 )
    {
      v9 = 1;
      v10 = -1;
      if ( *v4 >= 0 )
        v10 = *v4;
      if ( (_DWORD)v8 != 1 )
      {
        v9 = 2;
        if ( v10 < v4[1] )
          v10 = v4[1];
        if ( (_DWORD)v8 != 2 )
        {
          v9 = 3;
          if ( v10 < v4[2] )
            v10 = v4[2];
        }
      }
    }
    else
    {
      v9 = 0;
      v10 = -1;
    }
    v43 = v10;
    v11 = 0;
    v12 = v3 - v8;
    v13 = (const __m128i *)&v4[v8];
    v14 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v43), 0);
    do
    {
      si128 = _mm_load_si128(v13);
      ++v11;
      ++v13;
      v16 = _mm_cmpgt_epi32(v14, si128);
      v14 = _mm_or_si128(_mm_and_si128(v14, v16), _mm_andnot_si128(v16, si128));
    }
    while ( v12 >> 2 > v11 );
    v17 = _mm_srli_si128(v14, 8);
    v18 = (v12 & 0xFFFFFFFC) + v9;
    v19 = _mm_cmpgt_epi32(v17, v14);
    v20 = _mm_or_si128(_mm_andnot_si128(v19, v14), _mm_and_si128(v17, v19));
    v21 = _mm_srli_si128(v20, 4);
    v22 = _mm_cmpgt_epi32(v21, v20);
    v23 = _mm_cvtsi128_si32(_mm_or_si128(_mm_andnot_si128(v22, v20), _mm_and_si128(v21, v22)));
    if ( (v12 & 0xFFFFFFFC) == v12 )
      goto LABEL_35;
  }
  if ( v23 < v4[v18] )
    v23 = v4[v18];
  if ( (int)(v18 + 1) < v3 )
  {
    if ( v23 < v4[v18 + 1] )
      v23 = v4[v18 + 1];
    if ( (int)(v18 + 2) < v3 )
    {
      if ( v23 < v4[v18 + 2] )
        v23 = v4[v18 + 2];
      if ( v3 > (int)(v18 + 3) )
      {
        if ( v23 < v4[v18 + 3] )
          v23 = v4[v18 + 3];
        if ( (int)(v18 + 4) < v3 )
        {
          if ( v23 < v4[v18 + 4] )
            v23 = v4[v18 + 4];
          if ( v3 > (int)(v18 + 5) )
          {
            if ( v23 < v4[v18 + 5] )
              v23 = v4[v18 + 5];
            v24 = v18 + 6;
            if ( v3 > v24 )
            {
              v25 = v4[v24];
              if ( v23 < v25 )
                v23 = v25;
            }
          }
        }
      }
    }
  }
LABEL_35:
  CoinIndexedVector::reserve(this, v23 + 1);
  v26 = *((_QWORD *)this + 1);
  v27 = (__int64)&v4[v6 + 1];
  v28 = 0;
  v29 = 0;
  do
  {
    while ( 1 )
    {
      result = *v7;
      v32 = (double *)(v26 + 8 * result);
      v33 = *v7;
      v34 = *(double *)(v5 + 8 * result);
      if ( *v32 != 0.0 )
      {
        v30 = *v32 + v34;
        ++v28;
        *v32 = v30;
        if ( fabs(v30) < 1.0e-50 )
          v29 = 1;
        goto LABEL_38;
      }
      if ( fabs(v34) >= 1.0e-50 )
        break;
LABEL_38:
      if ( ++v7 == (int *)v27 )
        goto LABEL_42;
    }
    result = *((int *)this + 4);
    *v32 = v34;
    v35 = *(_QWORD *)this;
    ++v7;
    *((_DWORD *)this + 4) = result + 1;
    *(_DWORD *)(v35 + 4 * result) = v33;
  }
  while ( v7 != (int *)v27 );
LABEL_42:
  if ( v29 )
  {
    v36 = *((_DWORD *)this + 4);
    *((_DWORD *)this + 4) = 0;
    if ( v36 > 0 )
    {
      v37 = *(_QWORD *)this;
      result = *(_QWORD *)this;
      v38 = *(_QWORD *)this + 4LL * (unsigned int)(v36 - 1) + 4;
      do
      {
        while ( 1 )
        {
          v40 = *(int *)result;
          v41 = (double *)(v26 + 8 * v40);
          if ( fabs(*v41) < 1.0e-50 )
            break;
          v39 = *((int *)this + 4);
          result += 4;
          *((_DWORD *)this + 4) = v39 + 1;
          *(_DWORD *)(v37 + 4 * v39) = v40;
          if ( result == v38 )
            goto LABEL_48;
        }
        result += 4;
        *v41 = 0.0;
      }
      while ( result != v38 );
    }
  }
LABEL_48:
  if ( v28 )
  {
    exception = __cxa_allocate_exception(0x30u);
    std::string::string();
    std::string::string();
    std::string::string();
    CoinError::CoinError();
    if ( (_UNKNOWN *)(v44 - 24) != &std::string::_Rep::_S_empty_rep_storage )
      sub_1CD0E0(v44 - 24);
    if ( (_UNKNOWN *)(v45 - 24) != &std::string::_Rep::_S_empty_rep_storage )
      sub_1CD0E0(v45 - 24);
    if ( (_UNKNOWN *)(v46 - 24) != &std::string::_Rep::_S_empty_rep_storage )
      sub_1CD0E0(v46 - 24);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'CoinError, (void (*)(void *))CoinError::~CoinError);
  }
  return result;
}

