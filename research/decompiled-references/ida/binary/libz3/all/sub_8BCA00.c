__int64 __fastcall sub_8BCA00(__int64 a1, unsigned int a2, unsigned int a3)
{
  const __m128i *v5; // rdx
  unsigned int *v7; // r8
  unsigned int v8; // esi
  __int64 v9; // rax
  __int32 *v10; // r9
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdi
  const __m128i *v13; // rax
  __m128i v14; // xmm1
  __m128i v15; // xmm0
  const __m128i *v16; // rax
  __int64 result; // rax
  unsigned int v18; // eax
  unsigned int v19; // eax
  __int64 v20; // rax
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rdi
  const __m128i *v23; // rax
  __m128i v24; // xmm1
  __m128i v25; // xmm0

  v5 = *(const __m128i **)(a1 + 24);
  v7 = (unsigned int *)v5 + a2;
  v8 = *v7;
  if ( *v7 )
  {
    if ( !v5 )
      goto LABEL_14;
    v9 = 4LL * v5[-1].m128i_u32[3];
    v10 = &v5->m128i_i32[(unsigned __int64)v9 / 4];
    if ( v5 == (const __m128i *)&v5->m128i_i8[v9] )
      goto LABEL_14;
    v11 = v9 - 4;
    v12 = (v11 >> 2) + 1;
    if ( v11 > 8 )
    {
      v13 = v5;
      v14 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v8), 0);
      do
      {
        v15 = _mm_loadu_si128(v13++);
        v13[-1] = _mm_sub_epi32(v15, v14);
      }
      while ( v13 != &v5[v12 >> 2] );
      if ( (v12 & 3) == 0 )
        goto LABEL_12;
      v16 = (const __m128i *)((char *)v5 + 4 * (v12 & 0xFFFFFFFFFFFFFFFCLL));
      goto LABEL_9;
    }
  }
  else
  {
    result = a3;
    v8 = v5->m128i_u32[a3];
    if ( !v8 )
      return result;
    if ( !v5 )
      goto LABEL_14;
    v20 = 4LL * v5[-1].m128i_u32[3];
    v10 = &v5->m128i_i32[(unsigned __int64)v20 / 4];
    if ( v5 == (const __m128i *)&v5->m128i_i8[v20] )
      goto LABEL_14;
    v21 = v20 - 4;
    v22 = (v21 >> 2) + 1;
    if ( v21 > 8 )
    {
      v23 = v5;
      v24 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v8), 0);
      do
      {
        v25 = _mm_loadu_si128(v23++);
        v23[-1] = _mm_sub_epi32(v25, v24);
      }
      while ( &v5[v22 >> 2] != v23 );
      v16 = (const __m128i *)((char *)v5 + 4 * (v22 & 0xFFFFFFFFFFFFFFFCLL));
      if ( (v22 & 3) == 0 )
        goto LABEL_12;
      goto LABEL_9;
    }
  }
  v16 = v5;
LABEL_9:
  v16->m128i_i32[0] -= v8;
  if ( v10 != (__int32 *)((char *)v16->m128i_i64 + 4) )
  {
    v16->m128i_i32[1] -= v8;
    if ( v10 != (__int32 *)&v16->m128i_u64[1] )
      v16->m128i_i32[2] -= v8;
  }
LABEL_12:
  if ( *v7 || (result = v5->m128i_u32[a3], (_DWORD)result) )
  {
LABEL_14:
    v18 = sub_893C10(a1, a2, a3, 0, 0xFFFFFFFE);
    sub_8BC970(a1, v18);
    v19 = sub_893C10(a1, a3, a2, 0, 0xFFFFFFFE);
    return sub_8BC970(a1, v19);
  }
  return result;
}

