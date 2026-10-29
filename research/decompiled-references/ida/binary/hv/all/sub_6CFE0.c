__int64 __fastcall sub_6CFE0(
        void *src,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __m128 a11,
        __m128 a12,
        __m128 a13,
        __m128 a14,
        char a15)
{
  size_t v17; // rax
  size_t v18; // r12
  void *v19; // rdi
  size_t v20; // r13
  __int64 v21; // rax

  if ( (unsigned __int64)a2[1] <= 1 )
  {
    if ( src && (v17 = strlen((const char *)src), (v18 = v17) != 0) )
    {
      v19 = (void *)*a2;
      v20 = v17 + 1;
      if ( a2[2] < v17 + 1 )
      {
        v21 = sub_96080(a2, *a2, v17 + 1, 1);
        *a2 = v21;
        v19 = (void *)v21;
      }
      a2[1] = v20;
      memmove(v19, src, v18);
      *(_BYTE *)(*a2 + v18) = 0;
    }
    else
    {
      a2[1] = 0;
    }
  }
  return sub_16B60((int)"%s\n", (__int64)src, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15);
}

