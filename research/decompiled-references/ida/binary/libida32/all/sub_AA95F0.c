__m128i *__fastcall sub_AA95F0(__int64 a1, __m128i *a2)
{
  __int64 v3; // rax
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rsi
  __m128i *result; // rax
  __m128i v7; // xmm0
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int8 *v12; // rbx

  v3 = *(unsigned int *)(a1 + 8);
  v4 = *(_QWORD *)a1;
  v5 = v3 + 1;
  result = (__m128i *)(*(_QWORD *)a1 + 32 * v3);
  if ( v5 > *(unsigned int *)(a1 + 12) )
  {
    if ( v4 > (unsigned __int64)a2 || result <= a2 )
    {
      sub_AA94F0(a1, v5);
      result = (__m128i *)(*(_QWORD *)a1 + 32LL * *(unsigned int *)(a1 + 8));
    }
    else
    {
      v12 = &a2->m128i_i8[-v4];
      sub_AA94F0(a1, v5);
      a2 = (__m128i *)&v12[*(_QWORD *)a1];
      result = (__m128i *)(*(_QWORD *)a1 + 32LL * *(unsigned int *)(a1 + 8));
    }
  }
  result[1].m128i_i64[0] = 0;
  v7 = _mm_loadu_si128(a2);
  *a2 = _mm_loadu_si128(result);
  v8 = result[1].m128i_i64[0];
  *result = v7;
  v9 = a2[1].m128i_i64[0];
  a2[1].m128i_i64[0] = v8;
  v10 = result[1].m128i_i64[1];
  result[1].m128i_i64[0] = v9;
  v11 = a2[1].m128i_i64[1];
  a2[1].m128i_i64[1] = v10;
  result[1].m128i_i64[1] = v11;
  ++*(_DWORD *)(a1 + 8);
  return result;
}

