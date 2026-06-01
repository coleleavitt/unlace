char *__fastcall sub_463310(__int64 a1, __int64 a2, __int64 a3, char *a4)
{
  __int64 i; // r15
  const char *v7; // rsi
  const char *v8; // rdi
  __int64 v9; // r12
  __int64 v10; // r13
  __int64 v11; // rsi
  __int64 v12; // r15
  __m128i v13; // xmm0
  void *v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rbp
  char *v19; // rax
  __m128i v20; // xmm2
  char *v21; // rcx
  __int64 v22; // r15
  const char *v23; // rax
  char *v24; // rsi
  const char *v25; // rdi
  __int64 v26; // r12
  __int64 v27; // rcx
  __m128i v28; // xmm0
  void *v29; // rdi
  __int64 v30; // rbp
  __int64 v31; // rbp
  __int64 v32; // rax
  __int64 v33; // r12
  __m128i v34; // xmm0
  char *v35; // rdi
  char *v36; // rdi
  char *result; // rax
  __m128i si128; // xmm3
  char *v39; // rax
  char *v40; // rbx
  __m128i v41; // xmm4
  __m128i v42; // [rsp+0h] [rbp-88h] BYREF
  __m128i v43; // [rsp+10h] [rbp-78h] BYREF
  __m128i v44; // [rsp+20h] [rbp-68h] BYREF
  char *s2; // [rsp+30h] [rbp-58h]
  char *v46; // [rsp+38h] [rbp-50h]
  __m128i v47[4]; // [rsp+40h] [rbp-48h] BYREF

  v47[0].m128i_i64[0] = a3;
  v46 = a4;
  v42.m128i_i64[0] = (a3 - 1) / 2;
  s2 = (char *)(a3 & 1);
  if ( a2 < v42.m128i_i64[0] )
  {
    for ( i = a2; ; i = v9 )
    {
      v9 = 2 * (i + 1);
      v16 = 48 * (i + 1);
      v17 = a1 + v16 - 24;
      v10 = a1 + v16;
      v18 = *(_QWORD *)(a1 + v16 + 8);
      if ( *(_QWORD *)(v17 + 8) )
      {
        v7 = *(const char **)v17;
        v8 = haystack;
        if ( !v18 )
          goto LABEL_5;
      }
      else
      {
        v7 = haystack;
        if ( !v18 )
          goto LABEL_7;
      }
      v8 = *(const char **)v10;
LABEL_5:
      if ( strcmp(v8, v7) < 0 )
      {
        --v9;
        v10 = a1 + 24 * v9;
      }
LABEL_7:
      v11 = *(_QWORD *)v10;
      v12 = a1 + 24 * i;
      *(_QWORD *)v10 = 0;
      v13 = (__m128i)_mm_loadh_ps((const double *)(v10 + 16));
      *(_OWORD *)(v10 + 8) = 0;
      v14 = *(void **)v12;
      if ( *(_QWORD *)v12 )
      {
        *(_QWORD *)(v12 + 8) = 0;
        v43.m128i_i64[0] = v11;
        v44 = v13;
        qfree(v14);
        v13 = _mm_load_si128(&v44);
      }
      v15 = v42.m128i_i64[0];
      *(_QWORD *)v12 = v11;
      *(__m128i *)(v12 + 8) = v13;
      if ( v9 >= v15 )
      {
        if ( s2 )
          goto LABEL_15;
        goto LABEL_30;
      }
    }
  }
  v10 = a1 + 24 * a2;
  if ( s2 )
  {
    v39 = v46;
    v40 = *(char **)v46;
    v41 = _mm_loadu_si128((const __m128i *)(v46 + 8));
    *(_QWORD *)v46 = 0;
    *(_OWORD *)(v39 + 8) = 0;
    s2 = v40;
    v47[0] = v41;
    goto LABEL_35;
  }
  v9 = a2;
LABEL_30:
  if ( (v47[0].m128i_i64[0] - 2) / 2 == v9 )
  {
    v31 = 2 * (v9 + 1);
    v32 = a1 + 48 * (v9 + 1) - 24;
    v33 = *(_QWORD *)v32;
    v34 = _mm_loadu_si128((const __m128i *)(v32 + 8));
    *(_QWORD *)v32 = 0;
    *(_OWORD *)(v32 + 8) = 0;
    v35 = *(char **)v10;
    if ( *(_QWORD *)v10 )
    {
      *(_QWORD *)(v10 + 8) = 0;
      v42 = v34;
      qfree(v35);
      v34 = _mm_load_si128(&v42);
    }
    *(_QWORD *)v10 = v33;
    v9 = v31 - 1;
    *(__m128i *)(v10 + 8) = v34;
    v10 = a1 + 24 * (v31 - 1);
  }
LABEL_15:
  v19 = v46;
  v20 = _mm_loadu_si128((const __m128i *)(v46 + 8));
  v21 = *(char **)v46;
  *(_OWORD *)(v46 + 8) = 0;
  *(_QWORD *)v19 = 0;
  s2 = v21;
  v47[0] = v20;
  v42.m128i_i64[0] = v20.m128i_i64[0];
  v22 = (v9 - 1) / 2;
  if ( v9 <= a2 )
    goto LABEL_35;
  v23 = haystack;
  if ( v20.m128i_i64[0] )
    v23 = v21;
  v46 = (char *)v23;
  while ( 1 )
  {
    v10 = a1 + 24 * v22;
    v30 = *(_QWORD *)(v10 + 8);
    if ( v42.m128i_i64[0] )
    {
      v24 = s2;
      v25 = haystack;
      if ( !v30 )
        goto LABEL_20;
    }
    else if ( !v30 )
    {
      v10 = a1 + 24 * v9;
      goto LABEL_35;
    }
    v25 = *(const char **)v10;
    v24 = v46;
LABEL_20:
    v26 = a1 + 24 * v9;
    if ( strcmp(v25, v24) >= 0 )
      break;
    v27 = *(_QWORD *)v10;
    *(_QWORD *)v10 = 0;
    v28 = (__m128i)_mm_loadh_ps((const double *)(v10 + 16));
    *(_OWORD *)(v10 + 8) = 0;
    v29 = *(void **)v26;
    if ( *(_QWORD *)v26 )
    {
      *(_QWORD *)(v26 + 8) = 0;
      v44.m128i_i64[0] = v27;
      v43 = v28;
      qfree(v29);
      v27 = v44.m128i_i64[0];
      v28 = _mm_load_si128(&v43);
    }
    *(_QWORD *)v26 = v27;
    *(__m128i *)(v26 + 8) = v28;
    v9 = v22;
    if ( v22 <= a2 )
      goto LABEL_35;
    v22 = (v22 - 1) / 2;
  }
  v10 = v26;
LABEL_35:
  v36 = *(char **)v10;
  if ( *(_QWORD *)v10 )
  {
    *(_QWORD *)(v10 + 8) = 0;
    qfree(v36);
  }
  result = s2;
  si128 = _mm_load_si128(v47);
  *(_QWORD *)v10 = s2;
  *(__m128i *)(v10 + 8) = si128;
  return result;
}
