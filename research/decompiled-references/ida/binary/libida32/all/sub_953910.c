size_t __fastcall sub_953910(
        __m128i *a1,
        __int64 a2,
        __int8 *a3,
        const __m128i **a4,
        __int64 a5,
        const __m128i *a6,
        unsigned __int64 a7,
        size_t n,
        unsigned __int64 a9,
        __int64 a10,
        unsigned __int64 a11)
{
  __int64 v11; // r13
  size_t v12; // rbx
  const __m128i *v13; // rsi
  __int8 *v14; // r14
  const __m128i *v17; // r10
  _QWORD *v18; // r9
  __int64 v19; // r11
  signed __int64 v20; // r15
  const void *v21; // rsi

  v11 = n;
  v12 = n + a7;
  if ( a2 - (__int64)a1 < n + a7 )
    return -70;
  v13 = *a4;
  if ( a5 - (__int64)*a4 < a7 )
    return -20;
  if ( v13 < a1 && a1 < (__m128i *)&v13->m128i_i8[a7] )
    return -70;
  v14 = &a1->m128i_i8[a7];
  sub_953850(a1, v13, a7);
  *v18 = v19;
  if ( &a1->m128i_i8[a7] - (__int8 *)a6 < a9 )
  {
    if ( (unsigned __int64)&v14[-a10] >= a9 )
    {
      v20 = (char *)a6 - (char *)v17;
      v21 = (const void *)(a11 - ((char *)a6 - (char *)v17));
      if ( a11 >= (unsigned __int64)v21 + n )
      {
        memmove(v14, v21, n);
        return v12;
      }
      v14 += v20;
      v11 = n - v20;
      memmove(&a1->m128i_i8[a7], v21, (char *)a6 - (char *)v17);
      v17 = a6;
      goto LABEL_9;
    }
    return -20;
  }
LABEL_9:
  sub_953680((unsigned __int64)v14, a3, v17, v11, 1);
  return v12;
}

