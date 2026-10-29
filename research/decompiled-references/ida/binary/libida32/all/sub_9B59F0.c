char **__fastcall sub_9B59F0(char **a1, char **a2)
{
  char *v3; // rax
  char **v5; // rdi
  __m128i v6; // xmm1
  size_t v8; // r13
  size_t v9; // r14
  char **v10; // rdi
  size_t v11; // rdx
  char *v12; // rsi
  __int64 v13; // rdx

  if ( a1 == a2 )
    return a1;
  v3 = *a2;
  if ( a2 + 3 != (char **)*a2 )
  {
    v5 = (char **)*a1;
    if ( v5 != a1 + 3 )
    {
      free(v5);
      v3 = *a2;
    }
    v6 = _mm_loadu_si128((const __m128i *)(a2 + 1));
    *a1 = v3;
    *(__m128i *)(a1 + 1) = v6;
    *a2 = (char *)(a2 + 3);
    *(_OWORD *)(a2 + 1) = 0;
    return a1;
  }
  v8 = (size_t)a2[1];
  v9 = (size_t)a1[1];
  if ( v8 <= v9 )
  {
    if ( v8 && 2 * v8 )
      memmove(*a1, a2 + 3, 2 * v8);
  }
  else
  {
    if ( v8 > (unsigned __int64)a1[2] )
    {
      v9 = 0;
      a1[1] = nullptr;
      sub_22130D0(a1, a1 + 3, v8, 2);
      v3 = *a2;
      v10 = (char **)*a1;
      v11 = (size_t)a2[1];
      v12 = *a2;
    }
    else
    {
      v10 = (char **)*a1;
      if ( v9 && (v9 *= 2LL) != 0 )
      {
        memmove(v10, *a2, v9);
        v3 = *a2;
        v10 = (char **)*a1;
        v11 = (size_t)a2[1];
        v12 = &(*a2)[v9];
      }
      else
      {
        v12 = *a2;
        v11 = v8;
      }
    }
    v13 = 2 * v11;
    if ( v12 != &v3[v13] )
      memcpy((char *)v10 + v9, v12, v13 - v9);
  }
  a1[1] = (char *)v8;
  a2[1] = nullptr;
  return a1;
}

