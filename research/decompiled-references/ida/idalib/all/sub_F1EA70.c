__int64 __fastcall sub_F1EA70(_DWORD *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  unsigned int v4; // r13d
  __int64 v6; // rbx
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  const __m128i *v9; // rbp
  __m128i *v10; // rax
  __int8 *v11; // rbp

  *(_DWORD *)(a3 + 272) = *a1;
  *(_DWORD *)(a3 + 276) = a1[1];
  result = (unsigned int)a1[3];
  if ( (_DWORD)result )
  {
    v4 = 0;
    v6 = a3 + 16;
    result = *(unsigned int *)(a3 + 8);
    do
    {
      v7 = *(_QWORD *)a3;
      v8 = result + 1;
      v9 = (const __m128i *)(a2 + 32LL * v4);
      v10 = (__m128i *)(*(_QWORD *)a3 + 32 * result);
      if ( v8 > *(unsigned int *)(a3 + 12) )
      {
        if ( v7 > (unsigned __int64)v9 || v10 <= v9 )
        {
          sub_2237220(a3, v6, v8, 32);
          v10 = (__m128i *)(*(_QWORD *)a3 + 32LL * *(unsigned int *)(a3 + 8));
        }
        else
        {
          v11 = &v9->m128i_i8[-v7];
          sub_2237220(a3, v6, v8, 32);
          v9 = (const __m128i *)&v11[*(_QWORD *)a3];
          v10 = (__m128i *)(*(_QWORD *)a3 + 32LL * *(unsigned int *)(a3 + 8));
        }
      }
      ++v4;
      *v10 = _mm_loadu_si128(v9);
      v10[1] = _mm_loadu_si128(v9 + 1);
      result = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
      *(_DWORD *)(a3 + 8) = result;
    }
    while ( a1[3] != v4 );
  }
  return result;
}
