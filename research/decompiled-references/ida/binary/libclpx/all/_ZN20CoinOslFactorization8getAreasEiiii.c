__int64 __fastcall CoinOslFactorization::getAreas(CoinOslFactorization *this, int a2, int a3, int a4, int a5)
{
  bool v6; // cc
  int v7; // eax
  int v8; // ecx
  int v9; // edx
  int v10; // r8d
  int v11; // ebp
  int v12; // edi
  int v13; // ecx
  int v14; // eax
  __int64 result; // rax
  int v16; // ecx
  int v17; // edi
  int v18; // r9d
  int v19; // r8d
  char *v20; // rax
  __m128i si128; // xmm2
  __m128i v22; // xmm0
  __m128i v23; // xmm2
  __int64 v24; // rcx
  __int64 v25; // r9
  __int64 v26; // rcx
  char *v27; // rdx
  char *v28; // rdi
  char *v29; // rdx
  char *v30; // rdx
  char *v31; // rdx
  char *v32; // rdx
  __int64 v33; // rdi
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rdx
  __int64 v37; // rdx
  void *v38; // rdi
  __m128i v39; // xmm2
  __m128i v40; // xmm0
  __m128i v41; // xmm2
  __int64 v42; // rax
  _QWORD *exception; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  _DWORD v47[34]; // [rsp-80h] [rbp-88h] BYREF

  *((_DWORD *)this + 10) = a3;
  v6 = *((_DWORD *)this + 15) <= a2 + 1000;
  *((_DWORD *)this + 9) = a2;
  v7 = (int)((double)(a5 + a4) * *((double *)this + 17));
  *((_QWORD *)this + 16) = *((_QWORD *)this + 2);
  if ( v6 )
  {
    v8 = *((_DWORD *)this + 16);
    v9 = *((_DWORD *)this + 121);
  }
  else
  {
    *(_QWORD *)((char *)this + 60) = 0;
    *((_DWORD *)this + 121) = 0;
    v9 = 0;
    v8 = 0;
  }
  if ( v7 > v8 )
    *((_DWORD *)this + 16) = v7;
  v10 = *((_DWORD *)this + 98) + *((_DWORD *)this + 97);
  v11 = v9;
  *((_DWORD *)this + 118) = v10;
  if ( v7 > v9 )
  {
    v12 = (int)((double)v7 * 1.1);
    if ( v12 < v9 )
      v12 = v9;
    v11 = v12;
  }
  v13 = *((_DWORD *)this + 24);
  *((_DWORD *)this + 120) = v11;
  v14 = v13 & 0xC;
  *((_DWORD *)this + 24) = v14;
  result = (v14 >> 2) & 1;
  v16 = v13 & 8;
  *((_DWORD *)this + 119) = result;
  if ( v16 )
  {
    v16 = *((_DWORD *)this + 111);
    *((_DWORD *)this + 119) = 0;
    *((_DWORD *)this + 94) = 1;
    if ( !v16 )
    {
      result = *((unsigned int *)this + 93);
      if ( *((_DWORD *)this + 105) > (int)result
        && a2 > 199
        && v10 >> 2 < *((_DWORD *)this + 86)
        && !*((_DWORD *)this + 113) )
      {
        *((_DWORD *)this + 111) = 2;
        v16 = 2;
      }
    }
  }
  else
  {
    result = *((unsigned int *)this + 105);
    *((_DWORD *)this + 111) = 0;
    *((_DWORD *)this + 94) = -1;
    *((_DWORD *)this + 93) = result;
  }
  v17 = *((_DWORD *)this + 12);
  *((_DWORD *)this + 86) = a2;
  v18 = *((_DWORD *)this + 87);
  v19 = *((_DWORD *)this + 90);
  if ( v11 <= v9 )
  {
    if ( *((_QWORD *)this + 36) )
    {
      if ( a2 > v18 )
        goto LABEL_14;
    }
    else if ( v16 || a2 > v18 )
    {
      goto LABEL_14;
    }
    if ( v17 <= v19 )
      goto LABEL_29;
  }
LABEL_14:
  v20 = *((char **)this + 28);
  if ( v20 )
  {
    si128 = _mm_load_si128((const __m128i *)&xmmword_298420);
    *((_QWORD *)this + 29) += 8LL;
    *((__m128i *)this + 10) = _mm_add_epi64(_mm_loadu_si128((const __m128i *)this + 10), si128);
    v22 = _mm_add_epi64(_mm_loadu_si128((const __m128i *)this + 11), si128);
    v23 = _mm_add_epi64(si128, _mm_loadu_si128((const __m128i *)this + 9));
    *((__m128i *)this + 11) = v22;
    *((__m128i *)this + 9) = v23;
  }
  v24 = *((_QWORD *)this + 34);
  if ( v24 )
  {
    *((_QWORD *)this + 33) += 4LL;
    *((_QWORD *)this + 35) += 8LL;
    *((_QWORD *)this + 34) = v24 + 4;
  }
  if ( a2 <= v18 )
  {
    if ( v17 <= v19 )
      goto LABEL_22;
    a2 = v18;
  }
  if ( v17 < v19 )
    v17 = v19;
  *((_DWORD *)this + 87) = a2;
  *((_DWORD *)this + 90) = v17;
  clp_free(v20);
  *((_QWORD *)this + 28) = 0;
  *((_QWORD *)this + 39) = 0;
  v20 = (char *)sub_20D420((__int64)this + 104, 1, v47);
  v25 = *((int *)this + 87);
  *((_QWORD *)this + 28) = v20;
  *((_QWORD *)this + 39) = v20;
  v26 = 8LL * ((int)v25 + 2);
  *((_QWORD *)this + 40) = &v20[v26];
  v27 = &v20[v26 + v26];
  v28 = v27 - 8;
  v29 = &v27[v26];
  *((_QWORD *)this + 37) = v29;
  v30 = &v29[v26];
  *((_QWORD *)this + 38) = v30;
  v31 = &v30[v26];
  *((_QWORD *)this + 41) = v28;
  *((_QWORD *)this + 29) = v31;
  v32 = &v31[24 * (int)v25 + 32];
  v33 = *((int *)this + 90);
  *((_QWORD *)this + 18) = v32;
  v34 = (__int64)&v32[8 * (int)v25 + 4 + 4 * (int)v33];
  *((_QWORD *)this + 19) = v34;
  v35 = v34 + 4LL * (2 * (int)v25 + 5) + 20 + 8LL * ((int)v25 + (int)v33 + 4);
  *((_QWORD *)this + 20) = v35;
  v36 = 4 * v25 + v35;
  *((_QWORD *)this + 21) = v36;
  v37 = 4 * v25 + v36;
  *((_QWORD *)this + 22) = v37;
  *((_QWORD *)this + 23) = v37 + 4LL * ((int)v25 + (((int)v25 + 33) >> 5) + 1);
  *((_QWORD *)this + 31) = v34 + 4 * (v33 + 2 * v25 + 9);
  v9 = *((_DWORD *)this + 121);
LABEL_22:
  v38 = *((void **)this + 36);
  if ( v11 > v9 || !v38 && *((_DWORD *)this + 111) )
  {
    *((_DWORD *)this + 121) = v11;
    clp_free(v38);
    if ( *((_DWORD *)this + 99) || !*((_DWORD *)this + 111) )
    {
      *((_QWORD *)this + 36) = 0;
      *((_DWORD *)this + 111) = 0;
    }
    else
    {
      v44 = clp_double(v11);
      *((_QWORD *)this + 36) = v44;
      if ( !v44 )
      {
        v11 = *((_DWORD *)this + 121);
        *((_DWORD *)this + 111) = 0;
        *((_DWORD *)this + 113) = 1;
        *((_DWORD *)this + 122) = v11;
        *((_DWORD *)this + 120) = v11;
      }
    }
    clp_free(*((void **)this + 34));
    v42 = clp_int(v11);
    *((_QWORD *)this + 34) = v42;
    if ( v11 )
    {
      if ( v42 )
      {
        clp_free(*((void **)this + 33));
        v45 = clp_int(v11);
        *((_QWORD *)this + 33) = v45;
        if ( v45 )
        {
          clp_free(*((void **)this + 35));
          v46 = clp_double(v11);
          *((_QWORD *)this + 35) = v46;
          if ( v46 )
          {
            v20 = *((char **)this + 28);
            goto LABEL_25;
          }
        }
      }
    }
LABEL_46:
    sprintf((char *)v47, "Unable to allocate factorization memory for %d elements", 0);
    exception = __cxa_allocate_exception(8u);
    *exception = v47;
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'char *, nullptr);
  }
  if ( !v11 )
    goto LABEL_46;
LABEL_25:
  *((_DWORD *)this + 91) = v11;
  if ( v20 )
  {
    v39 = _mm_load_si128((const __m128i *)&xmmword_298430);
    *((_QWORD *)this + 29) -= 8LL;
    *((__m128i *)this + 10) = _mm_add_epi64(_mm_loadu_si128((const __m128i *)this + 10), v39);
    v40 = _mm_add_epi64(_mm_loadu_si128((const __m128i *)this + 11), v39);
    v41 = _mm_add_epi64(v39, _mm_loadu_si128((const __m128i *)this + 9));
    *((__m128i *)this + 11) = v40;
    *((__m128i *)this + 9) = v41;
  }
  result = *((_QWORD *)this + 34);
  a2 = *((_DWORD *)this + 9);
  if ( result )
  {
    *((_QWORD *)this + 33) -= 4LL;
    *((_QWORD *)this + 35) -= 8LL;
    result -= 4;
    *((_QWORD *)this + 34) = result;
  }
LABEL_29:
  if ( *((_DWORD *)this + 15) < a2 )
    *((_DWORD *)this + 15) = a2;
  return result;
}

