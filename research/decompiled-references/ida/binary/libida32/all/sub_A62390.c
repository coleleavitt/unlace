__int64 __fastcall sub_A62390(__int64 a1, char **a2)
{
  char *v3; // rax
  char *v5; // rdi
  __m128i v6; // xmm1
  __int64 v8; // r12
  __int64 v9; // rdi
  char *v10; // r8
  __int64 v11; // r9
  char *v12; // rsi
  __int64 j; // rdx
  __int64 v14; // rdx
  char *v15; // rsi
  __int64 i; // rdx

  if ( (char **)a1 == a2 )
    return a1;
  v3 = *a2;
  if ( a2 + 3 != (char **)*a2 )
  {
    v5 = *(char **)a1;
    if ( v5 != (char *)(a1 + 24) )
    {
      free(v5);
      v3 = *a2;
    }
    v6 = _mm_loadu_si128((const __m128i *)(a2 + 1));
    *(_QWORD *)a1 = v3;
    *(__m128i *)(a1 + 8) = v6;
    *a2 = (char *)(a2 + 3);
    *(_OWORD *)(a2 + 1) = 0;
    return a1;
  }
  v8 = (__int64)a2[1];
  v9 = *(_QWORD *)(a1 + 8);
  if ( v8 <= (unsigned __int64)v9 )
  {
    if ( v8 > 0 )
    {
      v15 = *(char **)a1;
      for ( i = 0; i != v8; ++i )
        v15[i] = v3[i];
    }
  }
  else
  {
    if ( (unsigned __int64)v8 > *(_QWORD *)(a1 + 16) )
    {
      *(_QWORD *)(a1 + 8) = 0;
      sub_22130D0(a1, a1 + 24, v8, 1);
      v3 = *a2;
      v10 = *(char **)a1;
      v11 = 0;
      v14 = (__int64)a2[1];
      v9 = 0;
      v12 = *a2;
    }
    else
    {
      v10 = *(char **)a1;
      if ( v9 )
      {
        v11 = v9;
        v12 = &v3[v9];
        if ( v9 > 0 )
        {
          for ( j = 0; j != v9; ++j )
            v10[j] = v3[j];
        }
        v14 = v8;
      }
      else
      {
        v12 = *a2;
        v14 = v8;
        v11 = 0;
      }
    }
    if ( v12 != &v3[v14] )
      memcpy(&v10[v9], v12, v14 - v11);
  }
  *(_QWORD *)(a1 + 8) = v8;
  a2[1] = nullptr;
  return a1;
}

