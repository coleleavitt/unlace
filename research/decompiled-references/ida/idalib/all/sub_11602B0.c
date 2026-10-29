const void *__fastcall sub_11602B0(__int64 a1, __int64 a2, __int64 a3, const void *a4, size_t a5)
{
  size_t v5; // r15
  __int64 v6; // r12
  __int64 v7; // r12
  __int64 v8; // rbx
  __int64 v9; // rbp
  size_t v10; // r10
  __int64 v11; // r14
  size_t v12; // rcx
  size_t v13; // rdx
  int v14; // eax
  __int64 v15; // r13
  __int64 v16; // r14
  size_t v17; // rdx
  size_t v18; // r12
  int v19; // eax
  size_t v21; // [rsp+0h] [rbp-78h]
  size_t v22; // [rsp+8h] [rbp-70h]
  __int64 v23; // [rsp+18h] [rbp-60h]
  __int64 v25; // [rsp+28h] [rbp-50h]

  v5 = a5;
  v6 = a1;
  v23 = (a3 - 1) / 2;
  v25 = a3 & 1;
  if ( a2 >= v23 )
  {
    v8 = a1 + 16 * a2;
    if ( (a3 & 1) != 0 )
      goto LABEL_24;
    v9 = a2;
    goto LABEL_30;
  }
  v7 = a2;
  do
  {
    v9 = 2 * (v7 + 1);
    v8 = a1 + 32 * (v7 + 1);
    v10 = *(_QWORD *)(v8 + 8);
    v11 = a1 + 16 * (v9 - 1);
    v12 = *(_QWORD *)(v11 + 8);
    v13 = v12;
    if ( v10 <= v12 )
      v13 = *(_QWORD *)(v8 + 8);
    if ( v13
      && (v22 = *(_QWORD *)(v11 + 8),
          v21 = *(_QWORD *)(v8 + 8),
          v14 = memcmp(*(const void **)v8, *(const void **)v11, v13),
          v10 = v21,
          v12 = v22,
          v14) )
    {
      if ( v14 < 0 )
        v8 = a1 + 16 * --v9;
    }
    else if ( v10 != v12 && v10 < v12 )
    {
      v8 = a1 + 16 * --v9;
    }
    *(__m128i *)(a1 + 16 * v7) = _mm_loadu_si128((const __m128i *)v8);
    v7 = v9;
  }
  while ( v9 < v23 );
  v6 = a1;
  v5 = a5;
  if ( !v25 )
  {
LABEL_30:
    if ( (a3 - 2) / 2 == v9 )
    {
      v9 = 2 * v9 + 1;
      *(__m128i *)v8 = _mm_loadu_si128((const __m128i *)(v6 + 16 * v9));
      v8 = v6 + 16 * v9;
    }
  }
  v15 = (v9 - 1) / 2;
  if ( v9 > a2 )
  {
    v16 = v6;
    while ( 1 )
    {
      v17 = v5;
      v8 = v16 + 16 * v15;
      v18 = *(_QWORD *)(v8 + 8);
      if ( v18 <= v5 )
        v17 = *(_QWORD *)(v8 + 8);
      if ( v17 && (v19 = memcmp(*(const void **)v8, a4, v17)) != 0 )
      {
        if ( v19 >= 0 )
          goto LABEL_23;
      }
      else if ( v18 == v5 || v18 >= v5 )
      {
LABEL_23:
        v8 = v16 + 16 * v9;
        break;
      }
      *(__m128i *)(v16 + 16 * v9) = _mm_loadu_si128((const __m128i *)v8);
      v9 = v15;
      if ( a2 >= v15 )
        break;
      v15 = (v15 - 1) / 2;
    }
  }
LABEL_24:
  *(_QWORD *)(v8 + 8) = v5;
  *(_QWORD *)v8 = a4;
  return a4;
}
