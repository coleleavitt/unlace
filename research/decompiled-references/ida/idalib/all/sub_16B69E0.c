__m128i *__fastcall sub_16B69E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // r10
  unsigned __int64 v7; // rdx
  __m128i *result; // rax
  __m128 v9; // xmm0
  unsigned __int64 v10; // rdx
  const __m128i *v12; // r12
  __m128 v13; // xmm0
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // [rsp+0h] [rbp-48h] BYREF
  __int64 v18; // [rsp+8h] [rbp-40h]
  __m128 v19; // [rsp+10h] [rbp-38h] BYREF
  __int64 v20; // [rsp+20h] [rbp-28h]
  __int64 v21; // [rsp+28h] [rbp-20h]

  v5 = *(_QWORD *)(a1 + 2456);
  v6 = *(unsigned int *)(a1 + 2468);
  v17 = a3;
  v7 = *(unsigned int *)(a1 + 2464);
  result = (__m128i *)(v5 + 32 * v7);
  if ( v7 >= v6 )
  {
    v18 = a2;
    v10 = v7 + 1;
    v20 = a4;
    v12 = (const __m128i *)&v19;
    v13 = _mm_loadh_ps((const double *)&v17);
    v21 = a5;
    v19 = v13;
    if ( v6 < v10 )
    {
      v14 = a1 + 2456;
      v15 = a1 + 2472;
      if ( v5 > (unsigned __int64)&v19 || result <= (__m128i *)&v19 )
      {
        sub_2237220(v14, v15, v10, 32);
        result = (__m128i *)(*(_QWORD *)(a1 + 2456) + 32LL * *(unsigned int *)(a1 + 2464));
      }
      else
      {
        sub_2237220(v14, v15, v10, 32);
        v16 = *(_QWORD *)(a1 + 2456);
        v12 = (const __m128i *)((char *)&v19 + v16 - v5);
        result = (__m128i *)(v16 + 32LL * *(unsigned int *)(a1 + 2464));
      }
    }
    *result = _mm_loadu_si128(v12);
    result[1] = _mm_loadu_si128(v12 + 1);
    ++*(_DWORD *)(a1 + 2464);
  }
  else
  {
    v18 = a2;
    result[1].m128i_i64[0] = a4;
    v9 = _mm_loadh_ps((const double *)&v17);
    result[1].m128i_i64[1] = a5;
    *result = (__m128i)v9;
    *(_DWORD *)(a1 + 2464) = v7 + 1;
  }
  return result;
}
