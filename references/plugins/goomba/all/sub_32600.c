__int64 __fastcall sub_32600(__int64 *a1, unsigned __int64 *a2)
{
  const __m128i *v4; // rdi
  unsigned __int64 v5; // r14
  __int64 v6; // rdx
  __int64 v7; // r13
  int v8; // r12d
  __int64 v9; // rax
  __int64 v10; // rcx
  const __m128i *v11; // rdi
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rdx
  __m128i v15; // xmm0
  bool v16; // cf
  __int64 v17; // rax
  __int64 v18; // rbx
  __int64 result; // rax
  unsigned int v20; // ebx
  __int64 v21; // rax
  __int64 v22; // r14
  __int32 v23; // r13d
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rdx
  const __m128i *v27; // rax
  __m128i *v28; // rax
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rsi
  const __m128i *v32; // rdi
  __int64 v33; // rdx
  __int64 v34; // rcx
  __m128i v35; // xmm0
  __int64 v36; // rax
  const __m128i *v37; // rdi
  __int64 v38; // rax
  __int64 v39; // rdx
  __m128i v40; // xmm0
  __int64 v41; // [rsp+0h] [rbp-48h]
  __int64 v42; // [rsp+0h] [rbp-48h]
  __int64 v43; // [rsp+8h] [rbp-40h]

  v4 = (const __m128i *)*a1;
  if ( v4 )
  {
    a1[1] = 0;
    qfree(v4);
  }
  *a1 = 0;
  *(_OWORD *)(a1 + 1) = 0;
  v5 = a2[1];
  if ( !v5 )
  {
    v6 = 1;
    v7 = *(_QWORD *)*a2;
    v8 = *(_DWORD *)(*a2 + 8);
LABEL_5:
    v9 = qvector_reserve(a1, 0, v6, 16);
    v10 = a1[2];
    v11 = (const __m128i *)*a1;
    a1[2] = v5;
    v12 = v9;
    v13 = a1[1] - 1;
    if ( v13 >= 0 )
    {
      v14 = v12;
      do
      {
        v15 = _mm_loadu_si128(v11);
        v14 += 16;
        ++v11;
        *(__m128i *)(v14 - 16) = v15;
        v16 = v13-- == 0;
      }
      while ( !v16 );
      v11 = (const __m128i *)*a1;
    }
    v41 = v10;
    qfree(v11);
    *a1 = v12;
    v17 = a1[1];
    a1[2] = v41;
    goto LABEL_10;
  }
  v36 = qvector_reserve(a1, 0, a2[1], 16);
  v5 = a1[2];
  v37 = (const __m128i *)*a1;
  a1[2] = 0;
  v12 = v36;
  v38 = a1[1] - 1;
  if ( v38 >= 0 )
  {
    v39 = v12;
    do
    {
      v40 = _mm_loadu_si128(v37);
      v39 += 16;
      ++v37;
      *(__m128i *)(v39 - 16) = v40;
      v16 = v38-- == 0;
    }
    while ( !v16 );
    v37 = (const __m128i *)*a1;
  }
  qfree(v37);
  *a1 = v12;
  a1[2] = v5;
  v7 = *(_QWORD *)*a2;
  v8 = *(_DWORD *)(*a2 + 8);
  v17 = a1[1];
  v6 = v17 + 1;
  if ( v5 < v17 + 1 )
    goto LABEL_5;
LABEL_10:
  v18 = 16 * v17 + v12;
  result = 1;
  *(_DWORD *)(v18 + 8) = v8;
  *(_QWORD *)v18 = v7;
  v20 = 1;
  ++a1[1];
  if ( a2[1] <= 1 )
    return result;
  do
  {
    v21 = *a2 + 16 * result;
    v22 = *(_QWORD *)v21;
    v23 = *(_DWORD *)(v21 + 8);
    if ( !v20 )
      goto LABEL_20;
    v24 = 0;
    while ( 1 )
    {
      if ( ((unsigned int)v24 & ~v20) == 0 )
      {
        v25 = *a1 + 16 * v24;
        if ( v23 != *(_DWORD *)(v25 + 8) )
        {
          if ( !under_debugger )
          {
            interr(52905);
            return sub_32910((char *)&loc_CEA6 + 3);
          }
LABEL_38:
          BUG();
        }
        v22 -= *(_QWORD *)v25;
        if ( v23 == 4 || (unsigned int)(v23 - 1) <= 1 )
        {
          v22 &= ~(-1LL << (8 * (unsigned __int8)v23));
          goto LABEL_13;
        }
        if ( v23 != 8 )
          break;
      }
LABEL_13:
      if ( v20 == ++v24 )
        goto LABEL_20;
    }
    if ( under_debugger )
      goto LABEL_38;
    interr(52904);
LABEL_20:
    v26 = a1[1];
    if ( a1[2] < (unsigned __int64)(v26 + 1) )
    {
      v42 = a1[2];
      v29 = qvector_reserve(a1, 0, v26 + 1, 16);
      v30 = a1[1];
      v31 = a1[2];
      v32 = (const __m128i *)*a1;
      a1[2] = v42;
      v33 = v30 - 1;
      if ( v33 >= 0 )
      {
        v34 = v29;
        do
        {
          v35 = _mm_loadu_si128(v32);
          v34 += 16;
          ++v32;
          *(__m128i *)(v34 - 16) = v35;
          v16 = v33-- == 0;
        }
        while ( !v16 );
        v32 = (const __m128i *)*a1;
      }
      v43 = v29;
      qfree(v32);
      v27 = (const __m128i *)v43;
      v26 = a1[1];
      *a1 = v43;
      a1[2] = v31;
    }
    else
    {
      v27 = (const __m128i *)*a1;
    }
    v28 = (__m128i *)&v27[v26];
    v28->m128i_i64[0] = v22;
    v28->m128i_i32[2] = v23;
    ++a1[1];
    result = ++v20;
  }
  while ( v20 < a2[1] );
  return result;
}
