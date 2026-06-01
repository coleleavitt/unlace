char ***__fastcall sub_1AE6B10(char ***a1, char ***a2)
{
  char **v3; // rax
  char **v5; // rdi
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // r8
  int v9; // r12d
  char **v10; // rdi
  unsigned __int64 v11; // rcx
  __int64 v12; // rsi
  __int64 v13; // r9
  char *v14; // rsi
  __int64 v15; // rdx
  char **v16; // rcx
  __int64 v17; // rdi
  unsigned __int64 v18; // rdx
  __int64 v19; // rdi

  if ( a1 == a2 )
    return a1;
  v3 = *a2;
  if ( a2 + 2 != (char ***)*a2 )
  {
    v5 = *a1;
    if ( v5 != (char **)(a1 + 2) )
    {
      free(v5);
      v3 = *a2;
    }
    *a1 = v3;
    *((_DWORD *)a1 + 2) = *((_DWORD *)a2 + 2);
    *((_DWORD *)a1 + 3) = *((_DWORD *)a2 + 3);
    *a2 = (char **)(a2 + 2);
    a2[1] = nullptr;
    return a1;
  }
  v7 = *((unsigned int *)a2 + 2);
  v8 = *((unsigned int *)a1 + 2);
  v9 = *((_DWORD *)a2 + 2);
  if ( v7 <= v8 )
  {
    if ( *((_DWORD *)a2 + 2) )
    {
      v16 = *a1;
      v17 = 3 * v7;
      v18 = 0;
      v19 = 8 * v17;
      do
      {
        *(__m128i *)&v16[v18 / 8] = _mm_loadu_si128((const __m128i *)&v3[v18 / 8]);
        v16[v18 / 8 + 2] = v3[v18 / 8 + 2];
        v18 += 24LL;
      }
      while ( v18 != v19 );
    }
  }
  else
  {
    if ( v7 > *((unsigned int *)a1 + 3) )
    {
      *((_DWORD *)a1 + 2) = 0;
      sub_2237220(a1, a1 + 2, v7, 24);
      v3 = *a2;
      v7 = *((unsigned int *)a2 + 2);
      v13 = 0;
      v10 = *a1;
      v8 = 0;
      v14 = (char *)*a2;
    }
    else
    {
      v10 = *a1;
      if ( v8 )
      {
        v11 = 0;
        v12 = 24 * v8;
        v8 = v12;
        v13 = v12;
        do
        {
          *(__m128i *)&v10[v11 / 8] = _mm_loadu_si128((const __m128i *)&v3[v11 / 8]);
          v10[v11 / 8 + 2] = v3[v11 / 8 + 2];
          v11 += 24LL;
        }
        while ( v12 != v11 );
        v3 = *a2;
        v10 = *a1;
        v14 = (char *)&(*a2)[(unsigned __int64)v12 / 8];
      }
      else
      {
        v14 = (char *)*a2;
        v13 = 0;
      }
    }
    v15 = 3 * v7;
    if ( v14 != (char *)&v3[v15] )
      memcpy((char *)v10 + v8, v14, v15 * 8 - v13);
  }
  *((_DWORD *)a1 + 2) = v9;
  *((_DWORD *)a2 + 2) = 0;
  return a1;
}
