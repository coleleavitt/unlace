void __fastcall sub_1FFABF0(__m128i *a1, __m128i *a2)
{
  const __m128i *v2; // r12
  int v3; // eax
  const void *v4; // r9
  size_t v5; // r8
  int v6; // eax
  __m128i si128; // xmm2
  unsigned __int64 v8; // r14
  __m128i v9; // xmm1
  __m128i *v10; // rbx
  unsigned __int64 v11; // r15
  __m128i v12; // xmm0
  __int64 v13; // rax
  void *v14; // [rsp+0h] [rbp-70h]
  size_t n; // [rsp+8h] [rbp-68h]
  void *s1[2]; // [rsp+18h] [rbp-58h] BYREF
  unsigned __int64 v17; // [rsp+28h] [rbp-48h]

  if ( (char *)a2 - (char *)a1 <= 384 )
  {
    sub_1FFA910((__int64)a1, a2);
    return;
  }
  v2 = a1 + 24;
  sub_1FFA910((__int64)a1, a1 + 24);
  if ( a2 != &a1[24] )
  {
LABEL_11:
    v8 = v2[1].m128i_u64[0];
    v9 = _mm_loadu_si128(v2);
    v10 = (__m128i *)v2;
    v17 = v8;
    *(__m128i *)s1 = v9;
    while ( 1 )
    {
      v11 = v10[-1].m128i_u64[0];
      v5 = v9.m128i_u64[1];
      v4 = (const void *)v10[-2].m128i_i64[1];
      if ( v11 <= v9.m128i_i64[1] )
        v5 = v10[-1].m128i_u64[0];
      if ( !v5 )
        break;
      n = v5;
      v14 = (void *)v10[-2].m128i_i64[1];
      v3 = memcmp((const void *)v9.m128i_i64[0], v14, v5);
      v4 = v14;
      v5 = n;
      if ( v3 )
      {
        if ( v3 < 0 )
          goto LABEL_17;
        v6 = memcmp(v14, (const void *)v9.m128i_i64[0], n);
        if ( v6 )
        {
LABEL_23:
          if ( v6 < 0 )
          {
LABEL_10:
            si128 = _mm_load_si128((const __m128i *)s1);
            v10[1].m128i_i64[0] = v8;
            v2 = (const __m128i *)((char *)v2 + 24);
            *v10 = si128;
            if ( a2 == v2 )
              return;
            goto LABEL_11;
          }
          goto LABEL_16;
        }
        if ( v11 != v9.m128i_i64[1] )
          goto LABEL_9;
      }
      else
      {
        if ( v11 != v9.m128i_i64[1] )
          goto LABEL_6;
        v6 = memcmp(v14, (const void *)v9.m128i_i64[0], n);
        if ( v6 )
          goto LABEL_23;
      }
LABEL_16:
      if ( v10[-1].m128i_i64[1] <= v8 )
        goto LABEL_10;
LABEL_17:
      v12 = _mm_loadu_si128((__m128i *)((char *)v10 - 24));
      v13 = v10[-1].m128i_i64[1];
      v10 = (__m128i *)((char *)v10 - 24);
      *(__m128i *)((char *)v10 + 24) = v12;
      v10[2].m128i_i64[1] = v13;
    }
    if ( v11 == v9.m128i_i64[1] )
      goto LABEL_16;
LABEL_6:
    if ( v11 > v9.m128i_i64[1] )
      goto LABEL_17;
    if ( v5 )
    {
      v6 = memcmp(v4, (const void *)v9.m128i_i64[0], v5);
      if ( v6 )
        goto LABEL_23;
    }
LABEL_9:
    if ( v11 < v9.m128i_i64[1] )
      goto LABEL_10;
    goto LABEL_16;
  }
}
