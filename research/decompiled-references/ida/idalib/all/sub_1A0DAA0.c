__int64 __fastcall sub_1A0DAA0(__int64 a1, __m128i *a2, const __m128i *a3)
{
  __int64 v5; // rdx
  unsigned __int64 v6; // rcx
  __int64 v7; // rax
  __m128i *v8; // rdi
  __m128i *v9; // rbx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // r8
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rcx
  __int8 *v16; // rbx
  __int64 v17; // rsi
  __int8 *v18; // r12

  v5 = *(unsigned int *)(a1 + 8);
  v6 = *(_QWORD *)a1;
  v7 = 40 * v5;
  v8 = (__m128i *)(*(_QWORD *)a1 + 40 * v5);
  if ( a2 == v8 )
  {
    sub_1A0C040(a1, a3);
    return *(_QWORD *)a1 + 40LL * *(unsigned int *)(a1 + 8) - 40;
  }
  else
  {
    v9 = a2;
    v10 = v5 + 1;
    if ( v10 > *(unsigned int *)(a1 + 12) )
    {
      v16 = &a2->m128i_i8[-v6];
      v17 = a1 + 16;
      if ( v6 > (unsigned __int64)a3 || v8 <= a3 )
      {
        sub_2237220(a1, v17, v10, 40);
        v6 = *(_QWORD *)a1;
        v9 = (__m128i *)&v16[*(_QWORD *)a1];
        v7 = 40LL * *(unsigned int *)(a1 + 8);
        v8 = (__m128i *)(*(_QWORD *)a1 + v7);
      }
      else
      {
        v18 = &a3->m128i_i8[-v6];
        sub_2237220(a1, v17, v10, 40);
        v6 = *(_QWORD *)a1;
        a3 = (const __m128i *)&v18[*(_QWORD *)a1];
        v9 = (__m128i *)&v16[*(_QWORD *)a1];
        v7 = 40LL * *(unsigned int *)(a1 + 8);
        v8 = (__m128i *)(*(_QWORD *)a1 + v7);
      }
    }
    *v8 = _mm_loadu_si128((const __m128i *)(v6 + v7 - 40));
    v8[1] = _mm_loadu_si128((const __m128i *)(v6 + v7 - 24));
    v8[2].m128i_i64[0] = *(_QWORD *)(v6 + v7 - 8);
    v11 = *(_QWORD *)a1;
    v12 = *(unsigned int *)(a1 + 8);
    if ( *(_QWORD *)a1 + 40 * v12 - 40 - (__int64)v9 > 0 )
    {
      v13 = -8 * ((*(_QWORD *)a1 + 40 * v12 - 40 - (__int64)v9) >> 3);
      memmove(
        (void *)(v11 + v13 + 40 * v12),
        (const void *)(v13 + *(_QWORD *)a1 + 40 * v12 - 40),
        *(_QWORD *)a1 + 40 * v12 - 40 - (_QWORD)v9);
      LODWORD(v12) = *(_DWORD *)(a1 + 8);
      v11 = *(_QWORD *)a1;
    }
    v14 = (unsigned int)(v12 + 1);
    *(_DWORD *)(a1 + 8) = v14;
    if ( v9 <= a3 && (unsigned __int64)a3 < v11 + 40 * v14 )
      a3 = (const __m128i *)((char *)a3 + 40);
    *v9 = _mm_loadu_si128(a3);
    v9[1] = _mm_loadu_si128(a3 + 1);
    v9[2].m128i_i64[0] = a3[2].m128i_i64[0];
    return (__int64)v9;
  }
}
