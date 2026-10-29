char **__fastcall sub_9C3C90(char **a1, char **a2)
{
  char *v3; // rax
  char **v4; // rdi
  __m128i v5; // xmm1
  size_t v7; // r13
  size_t v8; // r14
  char **v9; // rdi
  char *v10; // rdx

  if ( a1 == a2 )
    return a1;
  v3 = *a2;
  if ( a2 + 3 != (char **)*a2 )
  {
    v4 = (char **)*a1;
    if ( v4 != a1 + 3 )
    {
      free(v4);
      v3 = *a2;
    }
    v5 = _mm_loadu_si128((const __m128i *)(a2 + 1));
    *a1 = v3;
    *(__m128i *)(a1 + 1) = v5;
    *a2 = (char *)(a2 + 3);
    *(_OWORD *)(a2 + 1) = 0;
    return a1;
  }
  v7 = (size_t)a2[1];
  v8 = (size_t)a1[1];
  if ( v7 <= v8 )
  {
    if ( v7 )
      memmove(*a1, a2 + 3, (size_t)a2[1]);
  }
  else
  {
    if ( v7 > (unsigned __int64)a1[2] )
    {
      v8 = 0;
      a1[1] = nullptr;
      sub_2236E10(a1, a1 + 3, v7, 1);
      v3 = *a2;
      v10 = a2[1];
      v9 = (char **)*a1;
    }
    else
    {
      v9 = (char **)*a1;
      v10 = a2[1];
      if ( v8 )
      {
        memmove(v9, *a2, v8);
        v3 = *a2;
        v10 = a2[1];
        v9 = (char **)*a1;
      }
    }
    if ( &v3[v8] != &v3[(_QWORD)v10] )
      memcpy((char *)v9 + v8, &v3[v8], (size_t)&v10[-v8]);
  }
  a1[1] = (char *)v7;
  a2[1] = nullptr;
  return a1;
}
