void __fastcall sub_7B5160(__m128i *src, __m128i *a2, const __m128i *a3)
{
  __int64 v4; // rbx
  const __m128i *v5; // r14
  __m128i *v6; // rbp
  __m128i *v7; // rdi
  __int64 v8; // rbx
  __int64 v9; // rbp
  __m128i *v10; // r8
  const __m128i *v11; // r12
  const __m128i *v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rsi
  __m128i *v15; // r8
  const __m128i *v16; // r12
  const __m128i *v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // rsi
  __int64 v20; // rsi
  __int64 v21; // [rsp+8h] [rbp-50h]

  v4 = (char *)a2 - (char *)src;
  v5 = (const __m128i *)((char *)a3 + (char *)a2 - (char *)src);
  v21 = a2 - src;
  if ( (char *)a2 - (char *)src <= 96 )
  {
    sub_7B5000(src, a2);
  }
  else
  {
    v6 = src;
    do
    {
      v7 = v6;
      v6 += 7;
      sub_7B5000(v7, v6);
    }
    while ( (char *)a2 - (char *)v6 > 96 );
    sub_7B5000(v6, a2);
    if ( v4 > 112 )
    {
      v8 = 7;
      while ( 1 )
      {
        v9 = 2 * v8;
        if ( v21 < 2 * v8 )
        {
          v13 = v21;
          v10 = (__m128i *)a3;
          v11 = src;
        }
        else
        {
          v10 = (__m128i *)a3;
          v11 = src;
          do
          {
            v12 = v11;
            v11 += 2 * v8;
            v10 = (__m128i *)sub_7B4B70(v12, &v11[-v8], &v11[-v8], v11, v10);
            v13 = a2 - v11;
          }
          while ( v9 <= v13 );
        }
        v14 = v13;
        if ( v8 <= v13 )
          v14 = v8;
        v8 *= 4;
        sub_7B4B70(v11, &v11[v14], &v11[v14], a2, v10);
        if ( v21 < v8 )
          break;
        v15 = src;
        v16 = a3;
        do
        {
          v17 = v16;
          v16 += v8;
          v15 = (__m128i *)sub_7B4B70(
                             v17,
                             (const __m128i *)((char *)v16 + 16 * v9 - 16 * v8),
                             (const __m128i *)((char *)v16 + 16 * v9 - 16 * v8),
                             v16,
                             v15);
          v18 = v5 - v16;
        }
        while ( v8 <= v18 );
        v19 = v9;
        if ( v18 <= v9 )
          v19 = v5 - v16;
        sub_7B4B70(v16, &v16[v19], &v16[v19], v5, v15);
        if ( v21 <= v8 )
          return;
      }
      v20 = v21;
      if ( v21 > v9 )
        v20 = v9;
      sub_7B4B70(a3, &a3[v20], &a3[v20], v5, src);
    }
  }
}

