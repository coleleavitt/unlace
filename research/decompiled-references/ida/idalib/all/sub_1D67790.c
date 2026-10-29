__int64 __fastcall sub_1D67790(__int64 a1, char **a2)
{
  char *v3; // rax
  char *v5; // rdi
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  int v9; // r12d
  char *v10; // rdi
  __int64 v11; // rdx
  unsigned __int64 v12; // r8
  char *v13; // rsi
  __int64 v14; // rdx
  char *v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx

  if ( (char **)a1 == a2 )
    return a1;
  v3 = *a2;
  if ( a2 + 2 != (char **)*a2 )
  {
    v5 = *(char **)a1;
    if ( v5 != (char *)(a1 + 16) )
    {
      free(v5);
      v3 = *a2;
    }
    *(_QWORD *)a1 = v3;
    *(_DWORD *)(a1 + 8) = *((_DWORD *)a2 + 2);
    *(_DWORD *)(a1 + 12) = *((_DWORD *)a2 + 3);
    *a2 = (char *)(a2 + 2);
    a2[1] = nullptr;
    return a1;
  }
  v7 = *((unsigned int *)a2 + 2);
  v8 = *(unsigned int *)(a1 + 8);
  v9 = *((_DWORD *)a2 + 2);
  if ( v7 <= v8 )
  {
    if ( *((_DWORD *)a2 + 2) )
    {
      v15 = *(char **)a1;
      v16 = 32 * v7;
      v17 = 0;
      do
      {
        *(__m128i *)&v15[v17] = _mm_loadu_si128((const __m128i *)&v3[v17]);
        *(_QWORD *)&v15[v17 + 16] = *(_QWORD *)&v3[v17 + 16];
        v15[v17 + 24] = v3[v17 + 24];
        v17 += 32;
      }
      while ( v17 != v16 );
    }
  }
  else
  {
    if ( v7 > *(unsigned int *)(a1 + 12) )
    {
      *(_DWORD *)(a1 + 8) = 0;
      sub_2237220(a1, a1 + 16, v7, 32);
      v3 = *a2;
      v7 = *((unsigned int *)a2 + 2);
      v12 = 0;
      v10 = *(char **)a1;
      v8 = 0;
      v13 = *a2;
    }
    else
    {
      v10 = *(char **)a1;
      if ( v8 )
      {
        v8 *= 32LL;
        v11 = 0;
        v12 = v8;
        do
        {
          *(__m128i *)&v10[v11] = _mm_loadu_si128((const __m128i *)&v3[v11]);
          *(_QWORD *)&v10[v11 + 16] = *(_QWORD *)&v3[v11 + 16];
          v10[v11 + 24] = v3[v11 + 24];
          v11 += 32;
        }
        while ( v8 != v11 );
        v3 = *a2;
        v7 = *((unsigned int *)a2 + 2);
        v10 = *(char **)a1;
        v13 = &(*a2)[v8];
      }
      else
      {
        v13 = *a2;
        v12 = 0;
      }
    }
    v14 = 32 * v7;
    if ( v13 != &v3[v14] )
      memcpy(&v10[v8], v13, v14 - v12);
  }
  *(_DWORD *)(a1 + 8) = v9;
  *((_DWORD *)a2 + 2) = 0;
  return a1;
}
