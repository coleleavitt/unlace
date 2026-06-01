size_t __fastcall sub_977760(
        unsigned __int64 a1,
        __int64 a2,
        const __m128i **a3,
        __int64 a4,
        const __m128i *a5,
        __int64 a6,
        unsigned __int64 a7,
        size_t n,
        unsigned __int64 a9,
        unsigned __int64 a10)
{
  __int64 v10; // r15
  size_t v11; // rbp
  const __m128i *v12; // r12
  char *v13; // r13
  __int8 *v14; // rbx
  __int64 v16; // r11
  const __m128i *v17; // r10
  signed __int64 v18; // r12
  const void *v19; // rsi

  v10 = n;
  v11 = n + a7;
  if ( a2 - a1 < n + a7 )
    return -70;
  v12 = *a3;
  if ( a4 - (__int64)*a3 < a7 )
    return -20;
  v13 = (char *)(a1 + a7);
  v14 = (__int8 *)(a2 - 32);
  sub_9773C0(a1, (__int8 *)(a2 - 32), v12, a7, 0);
  v17 = (const __m128i *)(a1 + a7 - a9);
  *a3 = (const __m128i *)((char *)v12 + v16);
  if ( a1 + a7 - (unsigned __int64)a5 < a9 )
  {
    if ( (unsigned __int64)&v13[-a6] >= a9 )
    {
      v18 = (char *)a5 - (char *)v17;
      v19 = (const void *)(a10 - ((char *)a5 - (char *)v17));
      if ( a10 >= (unsigned __int64)v19 + n )
      {
        memmove(v13, v19, n);
        return v11;
      }
      v13 += v18;
      v10 = n - v18;
      memmove((void *)(a1 + a7), v19, (char *)a5 - (char *)v17);
      v17 = a5;
      goto LABEL_7;
    }
    return -20;
  }
LABEL_7:
  sub_9773C0((unsigned __int64)v13, v14, v17, v10, 1);
  return v11;
}
