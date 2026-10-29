__m128i *__fastcall sub_A6D760(__int64 a1, __int64 a2)
{
  unsigned int v3; // esi
  unsigned int v4; // r12d
  __int64 v5; // r13
  const __m128i *v6; // rbp
  __m128i *result; // rax
  __int64 v8; // r12
  __int64 v9; // rax
  __m128i *v10; // rdi
  __int64 v11; // rcx
  const __m128i *v12; // rdx
  __m128i v13; // xmm0

  v3 = *(_DWORD *)(a2 + 8);
  v4 = *(_DWORD *)(a2 + 12);
  v5 = *(_QWORD *)(a1 + 8);
  if ( v3 >= v4 )
  {
    v8 = 2 * v4;
    v9 = sub_186B270(16 * v8);
    v3 = *(_DWORD *)(a2 + 8);
    v10 = *(__m128i **)a2;
    v6 = (const __m128i *)v9;
    if ( v3 )
    {
      v11 = v9;
      v12 = *(const __m128i **)a2;
      do
      {
        v13 = _mm_loadu_si128(v12++);
        v11 += 16;
        *(__m128i *)(v11 - 16) = v13;
      }
      while ( &v10[v3] != v12 );
    }
    if ( v10 && v10 != (__m128i *)(a2 + 16) )
    {
      sub_186B220(v10);
      v3 = *(_DWORD *)(a2 + 8);
    }
    *(_QWORD *)a2 = v6;
    *(_DWORD *)(a2 + 12) = v8;
  }
  else
  {
    v6 = *(const __m128i **)a2;
  }
  result = (__m128i *)&v6[v3];
  result->m128i_i8[0] = 1;
  result->m128i_i64[1] = v5;
  *(_DWORD *)(a2 + 8) = v3 + 1;
  return result;
}

