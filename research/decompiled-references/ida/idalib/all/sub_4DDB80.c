__int64 __fastcall sub_4DDB80(__m128i *a1, unsigned int *a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v5; // r14
  __int64 v8; // rax
  __int64 v9; // rbp
  __int8 *v10; // rbx
  unsigned int *v11; // r10
  __int64 v12; // rdx
  __int64 v13; // rdi
  unsigned int *v14; // rax
  __m128i v15; // xmm0
  unsigned __int64 v16; // r9
  __int64 v17; // r11
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // xmm1_8
  unsigned int v20; // ecx
  unsigned __int64 v21; // rdx
  __int64 v22; // r8
  unsigned int *v23; // r10
  __int64 v24; // rdx
  unsigned __int64 v25; // rdi
  unsigned int *v26; // rax
  __int64 v27; // r9
  unsigned int *v28; // rbp
  unsigned int *v29; // rax
  __int64 v30; // r9
  __int64 v31; // r8
  __int64 i; // rbx
  unsigned int *v33; // rbx
  unsigned int v34; // ecx
  __int64 v35; // rbp

  result = (char *)a2 - (char *)a1;
  if ( (char *)a2 - (char *)a1 <= 64 )
    return result;
  v5 = a3;
  v8 = result >> 3;
  v9 = ((char *)a2 - (char *)a1) >> 2;
  v10 = &a1->m128i_i8[4];
  if ( !a3 )
    goto LABEL_22;
  do
  {
    v11 = (unsigned int *)a1 + v8;
    v12 = *(_QWORD *)(a4 + 104);
    v13 = a1->m128i_u32[1];
    v14 = (unsigned int *)v10;
    v15 = _mm_loadl_epi64(a1);
    --v5;
    v16 = *(_QWORD *)(v12 + 8 * v13);
    v17 = *v11;
    v18 = *(_QWORD *)(v12 + 8 * v17);
    v19 = _mm_shuffle_epi32(v15, 225).m128i_u64[0];
    v20 = _mm_cvtsi128_si32(v15);
    v21 = *(_QWORD *)(v12 + 8LL * *(a2 - 1));
    if ( v16 >= v18 )
    {
      if ( v16 >= v21 )
      {
        if ( v18 >= v21 )
        {
LABEL_29:
          a1->m128i_i32[0] = v17;
          *v11 = v20;
          v20 = a1->m128i_u32[1];
          v22 = *(a2 - 1);
          v13 = a1->m128i_u32[0];
          goto LABEL_7;
        }
LABEL_18:
        a1->m128i_i32[0] = *(a2 - 1);
        v22 = v20;
        *(a2 - 1) = v20;
        v20 = a1->m128i_u32[1];
        v13 = a1->m128i_u32[0];
        goto LABEL_7;
      }
    }
    else
    {
      if ( v18 < v21 )
        goto LABEL_29;
      if ( v16 < v21 )
        goto LABEL_18;
    }
    a1->m128i_i64[0] = v19;
    v22 = *(a2 - 1);
LABEL_7:
    v23 = a2;
    while ( 1 )
    {
      v24 = *(_QWORD *)(a4 + 104);
      v25 = *(_QWORD *)(v24 + 8 * v13);
      if ( *(_QWORD *)(v24 + 8LL * v20) >= v25 )
      {
        v28 = v14;
      }
      else
      {
        v26 = v14 + 1;
        do
        {
          v27 = *v26;
          v28 = v26++;
          v20 = v27;
        }
        while ( *(_QWORD *)(v24 + 8 * v27) < v25 );
      }
      if ( v25 < *(_QWORD *)(v24 + 8LL * (unsigned int)v22) )
        break;
      if ( v28 >= --v23 )
        goto LABEL_20;
LABEL_15:
      *v28 = v22;
      v14 = v28 + 1;
      v22 = *(v23 - 1);
      *v23 = v20;
      v20 = v28[1];
      v13 = a1->m128i_u32[0];
    }
    v29 = v23 - 2;
    do
    {
      v30 = *v29;
      v23 = v29--;
      v22 = v30;
    }
    while ( v25 < *(_QWORD *)(v24 + 8 * v30) );
    if ( v28 < v23 )
      goto LABEL_15;
LABEL_20:
    sub_4DDB80(v28, a2, v5, a4, v22);
    result = (char *)v28 - (char *)a1;
    if ( (char *)v28 - (char *)a1 <= 64 )
      return result;
    a2 = v28;
    v8 = result >> 3;
    v9 = ((char *)v28 - (char *)a1) >> 2;
  }
  while ( v5 );
LABEL_22:
  v31 = a4;
  for ( i = v8 - 1; ; --i )
  {
    sub_4DDA00((__int64)a1, i, v9, a1->m128i_u32[i], v31);
    if ( !i )
      break;
  }
  v33 = a2 - 1;
  result = (char *)a2 - (char *)a1;
  if ( (char *)a2 - (char *)a1 > 4 )
  {
    do
    {
      v34 = *v33;
      v35 = (char *)v33-- - (char *)a1;
      v33[1] = a1->m128i_i32[0];
      result = sub_4DDA00((__int64)a1, 0, v35 >> 2, v34, v31);
    }
    while ( v35 > 4 );
  }
  return result;
}
