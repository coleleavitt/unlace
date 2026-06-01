void __fastcall sub_76D690(__int64 a1, __int64 a2)
{
  const __m128i *v4; // rbp
  const __m128i *v5; // rsi
  unsigned __int64 v6; // rdx
  size_t v7; // rbp
  int v8; // r13d
  __int64 v9; // rdx
  __m128i *v10; // rdi
  __int64 v11; // rax
  __m128i *v12; // rdi
  size_t v13; // rdx
  __m128i *v14; // rdi
  __int64 v15; // rax

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
          v11 = 3 * v6;
          v12 = *(__m128i **)a1;
          v13 = 24 * v6;
          if ( v11 == 3 )
          {
            *v12 = _mm_loadu_si128(v5);
            v12[1].m128i_i64[0] = v5[1].m128i_i64[0];
          }
          else
          {
            memmove(v12, v5, v13);
          }
        }
        goto LABEL_14;
      }
      if ( *(unsigned int *)(a1 + 12) < v6 )
      {
        *(_DWORD *)(a1 + 8) = 0;
        v7 = 0;
        sub_25D6060(a1, a1 + 16, v6, 24);
        v5 = *(const __m128i **)a2;
        v15 = *(unsigned int *)(a2 + 8);
      }
      else
      {
        if ( !*(_DWORD *)(a1 + 8) )
        {
          v9 = 24 * v6;
LABEL_7:
          memcpy((void *)(v7 + *(_QWORD *)a1), v5, v9 - v7);
LABEL_14:
          *(_DWORD *)(a1 + 8) = v8;
          *(_DWORD *)(a2 + 8) = 0;
          return;
        }
        v14 = *(__m128i **)a1;
        v7 *= 24LL;
        if ( v7 == 24 )
        {
          *v14 = _mm_loadu_si128(v5);
          v14[1].m128i_i64[0] = v5[1].m128i_i64[0];
          v15 = *(unsigned int *)(a2 + 8);
          v5 = (const __m128i *)(*(_QWORD *)a2 + 24LL);
        }
        else
        {
          memmove(v14, v5, v7);
          v15 = *(unsigned int *)(a2 + 8);
          v5 = (const __m128i *)(v7 + *(_QWORD *)a2);
        }
      }
      v9 = 24 * v15;
      if ( 24 * v15 == v7 )
        goto LABEL_14;
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

