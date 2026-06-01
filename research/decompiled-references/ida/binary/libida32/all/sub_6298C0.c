__m128i *__fastcall sub_6298C0(__int64 a1, __int32 a2, __int32 a3, __int64 *a4)
{
  __int64 v8; // rax
  unsigned __int64 v9; // r15
  __m128i *v10; // rbx
  __m128i *result; // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  __m128i v14; // xmm0
  __int64 v15; // rax
  __int64 v16; // rsi
  __m128i *v17; // rdi
  __int64 v18; // rax
  __m128i *v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __m128i v22; // xmm0

  v8 = *(_QWORD *)(a1 + 8);
  v9 = *(_QWORD *)(a1 + 16);
  if ( v9 < v8 + 1 )
  {
    v15 = qvector_reserve(a1, 0, v8 + 1, 32);
    v16 = *(_QWORD *)(a1 + 16);
    v17 = *(__m128i **)a1;
    *(_QWORD *)(a1 + 16) = v9;
    v10 = (__m128i *)v15;
    v18 = *(_QWORD *)(a1 + 8) - 1LL;
    if ( v18 >= 0 )
    {
      v19 = v10;
      do
      {
        v20 = v17->m128i_i64[0];
        v19 += 2;
        v17 += 2;
        v19[-2].m128i_i64[0] = v20;
        v21 = v17[-2].m128i_i64[1];
        v22 = _mm_loadu_si128(v17 - 1);
        v17[-2].m128i_i64[1] = 0;
        v19[-2].m128i_i64[1] = v21;
        v19[-1] = v22;
        v17[-1].m128i_i64[1] = 0;
      }
      while ( v18-- != 0 );
      v17 = *(__m128i **)a1;
    }
    qfree(v17);
    *(_QWORD *)a1 = v10;
    v8 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)(a1 + 16) = v16;
  }
  else
  {
    v10 = *(__m128i **)a1;
  }
  result = &v10[2 * v8];
  result[1] = 0;
  result->m128i_i64[1] = 0;
  ++*(_QWORD *)(a1 + 8);
  v12 = result->m128i_i64[1];
  result->m128i_i32[0] = a2;
  result->m128i_i32[1] = a3;
  v13 = *a4;
  *a4 = v12;
  v14 = _mm_loadu_si128((const __m128i *)(a4 + 1));
  a4[1] = result[1].m128i_i64[0];
  a4[2] = result[1].m128i_i64[1];
  result->m128i_i64[1] = v13;
  result[1] = v14;
  return result;
}

