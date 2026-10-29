__m128i *__fastcall sub_1A0B930(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  const __m128i *v6; // rbp
  unsigned __int64 v7; // rdx
  __m128i *result; // rax
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rax
  int v12; // [rsp+0h] [rbp-48h] BYREF
  __int64 v13; // [rsp+8h] [rbp-40h]

  if ( a3 == 1 )
    v12 = 11;
  else
    v12 = (a3 == 2) + 9;
  v4 = *(unsigned int *)(a1 + 16);
  v5 = *(_QWORD *)(a1 + 8);
  v13 = a2;
  v6 = (const __m128i *)&v12;
  v7 = v4 + 1;
  result = (__m128i *)(v5 + 40 * v4);
  if ( v7 > *(unsigned int *)(a1 + 20) )
  {
    v9 = a1 + 8;
    v10 = a1 + 24;
    if ( v5 > (unsigned __int64)&v12 || result <= (__m128i *)&v12 )
    {
      sub_2237220(v9, v10, v7, 40);
      result = (__m128i *)(*(_QWORD *)(a1 + 8) + 40LL * *(unsigned int *)(a1 + 16));
    }
    else
    {
      sub_2237220(v9, v10, v7, 40);
      v11 = *(_QWORD *)(a1 + 8);
      v6 = (const __m128i *)((char *)&v12 + v11 - v5);
      result = (__m128i *)(v11 + 40LL * *(unsigned int *)(a1 + 16));
    }
  }
  *result = _mm_loadu_si128(v6);
  result[1] = _mm_loadu_si128(v6 + 1);
  result[2].m128i_i64[0] = v6[2].m128i_i64[0];
  ++*(_DWORD *)(a1 + 16);
  return result;
}
