__m128i *__fastcall sub_2130440(__int64 a1, const __m128i *a2)
{
  __int64 v3; // rax
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rdx
  __m128i *result; // rax
  __int64 v7; // rsi
  __int8 *v8; // rbx

  v3 = *(unsigned int *)(a1 + 8);
  v4 = *(_QWORD *)a1;
  v5 = v3 + 1;
  result = (__m128i *)(*(_QWORD *)a1 + (v3 << 7));
  if ( v5 > *(unsigned int *)(a1 + 12) )
  {
    v7 = a1 + 16;
    if ( v4 > (unsigned __int64)a2 || result <= a2 )
    {
      sub_2237220(a1, v7, v5, 128);
      result = (__m128i *)(*(_QWORD *)a1 + ((unsigned __int64)*(unsigned int *)(a1 + 8) << 7));
    }
    else
    {
      v8 = &a2->m128i_i8[-v4];
      sub_2237220(a1, v7, v5, 128);
      a2 = (const __m128i *)&v8[*(_QWORD *)a1];
      result = (__m128i *)(*(_QWORD *)a1 + ((unsigned __int64)*(unsigned int *)(a1 + 8) << 7));
    }
  }
  *result = _mm_loadu_si128(a2);
  result[1] = _mm_loadu_si128(a2 + 1);
  result[2] = _mm_loadu_si128(a2 + 2);
  result[3] = _mm_loadu_si128(a2 + 3);
  result[4] = _mm_loadu_si128(a2 + 4);
  result[5] = _mm_loadu_si128(a2 + 5);
  result[6] = _mm_loadu_si128(a2 + 6);
  result[7] = _mm_loadu_si128(a2 + 7);
  ++*(_DWORD *)(a1 + 8);
  return result;
}
