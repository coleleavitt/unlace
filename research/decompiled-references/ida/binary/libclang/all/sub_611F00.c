__m128i *__fastcall sub_611F00(__int64 a1, const __m128i *a2)
{
  __int64 v4; // rdx
  unsigned __int64 v5; // rax
  __int64 v6; // rsi
  __m128i *result; // rax
  __int64 v8; // rdi
  __int8 *v9; // rbp

  v4 = *(unsigned int *)(a1 + 8);
  v5 = *(_QWORD *)a1;
  v6 = v4 + 1;
  if ( *(unsigned int *)(a1 + 12) < (unsigned __int64)(v4 + 1) )
  {
    v8 = a1 + 16;
    if ( (unsigned __int64)a2 < v5 || (unsigned __int64)a2 >= v5 + (v4 << 6) )
    {
      sub_25D6060(a1, v8, v6, 64);
      v5 = *(_QWORD *)a1;
      v4 = *(unsigned int *)(a1 + 8);
    }
    else
    {
      v9 = &a2->m128i_i8[-v5];
      sub_25D6060(a1, v8, v6, 64);
      v5 = *(_QWORD *)a1;
      v4 = *(unsigned int *)(a1 + 8);
      a2 = (const __m128i *)&v9[*(_QWORD *)a1];
    }
  }
  result = (__m128i *)((v4 << 6) + v5);
  *result = _mm_loadu_si128(a2);
  result[1] = _mm_loadu_si128(a2 + 1);
  result[2] = _mm_loadu_si128(a2 + 2);
  result[3] = _mm_loadu_si128(a2 + 3);
  ++*(_DWORD *)(a1 + 8);
  return result;
}

