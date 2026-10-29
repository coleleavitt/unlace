void __fastcall sub_63E210(__int64 a1, __int64 a2)
{
  const __m128i *v4; // r12
  const __m128i *v5; // rsi
  unsigned __int64 v6; // rax
  size_t v7; // r13
  int v8; // r12d
  __int64 v9; // rdx
  __m128i *v10; // rdi
  __m128i *v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rdx
  __m128i *v14; // rdi

  if ( a1 != a2 )
  {
    v4 = (const __m128i *)(a2 + 16);
    v5 = *(const __m128i **)a2;
    if ( v5 == v4 )
    {
      v6 = *(unsigned int *)(a2 + 8);
      v7 = *(unsigned int *)(a1 + 8);
      v8 = *(_DWORD *)(a2 + 8);
      if ( v7 >= v6 )
      {
        if ( *(_DWORD *)(a2 + 8) )
        {
          v14 = *(__m128i **)a1;
          if ( 56 * v6 == 56 )
          {
            *v14 = _mm_loadu_si128(v5);
            v14[1] = _mm_loadu_si128(v5 + 1);
            v14[2] = _mm_loadu_si128(v5 + 2);
            v14[3].m128i_i64[0] = v5[3].m128i_i64[0];
          }
          else
          {
            memmove(v14, v5, 56 * v6);
          }
        }
        goto LABEL_12;
      }
      if ( *(unsigned int *)(a1 + 12) < v6 )
      {
        v13 = *(unsigned int *)(a2 + 8);
        v7 = 0;
        *(_DWORD *)(a1 + 8) = 0;
        sub_25D6060(a1, a1 + 16, v13, 56);
        v5 = *(const __m128i **)a2;
        v12 = *(unsigned int *)(a2 + 8);
      }
      else
      {
        if ( !*(_DWORD *)(a1 + 8) )
        {
          v9 = 56 * v6;
LABEL_7:
          memcpy((void *)(v7 + *(_QWORD *)a1), v5, v9 - v7);
LABEL_12:
          *(_DWORD *)(a1 + 8) = v8;
          *(_DWORD *)(a2 + 8) = 0;
          return;
        }
        v11 = *(__m128i **)a1;
        v7 *= 56LL;
        if ( v7 == 56 )
        {
          *v11 = _mm_loadu_si128(v5);
          v11[1] = _mm_loadu_si128(v5 + 1);
          v11[2] = _mm_loadu_si128(v5 + 2);
          v11[3].m128i_i64[0] = v5[3].m128i_i64[0];
          v12 = *(unsigned int *)(a2 + 8);
          v5 = (const __m128i *)(*(_QWORD *)a2 + 56LL);
        }
        else
        {
          memmove(v11, v5, v7);
          v12 = *(unsigned int *)(a2 + 8);
          v5 = (const __m128i *)(v7 + *(_QWORD *)a2);
        }
      }
      v9 = 56 * v12;
      if ( 56 * v12 == v7 )
        goto LABEL_12;
      goto LABEL_7;
    }
    v10 = *(__m128i **)a1;
    if ( v10 != (__m128i *)(a1 + 16) )
    {
      free(v10);
      v5 = *(const __m128i **)a2;
    }
    *(_QWORD *)a1 = v5;
    *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 8);
    *(_DWORD *)(a1 + 12) = *(_DWORD *)(a2 + 12);
    *(_QWORD *)a2 = v4;
    *(_QWORD *)(a2 + 8) = 0;
  }
}

