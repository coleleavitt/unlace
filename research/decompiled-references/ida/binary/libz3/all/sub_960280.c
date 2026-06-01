void __fastcall sub_960280(const __m128i *a1, unsigned int a2, __m128i *a3, unsigned int a4)
{
  __int64 v4; // rsi
  __int64 v5; // r13
  const __m128i *v6; // r12
  __m128i *v7; // rbp
  const __m128i *v8; // rbx
  __int64 v10; // rax
  __m128i *v11; // rdx
  __m128i *v12; // rax
  __m128i v13; // xmm0

  v4 = 2LL * a2;
  v5 = 32LL * a4;
  v6 = &a1[v4];
  v7 = &a3[(unsigned __int64)v5 / 0x10];
  if ( a1 != &a1[v4] )
  {
    v8 = a1;
    do
    {
      while ( v8->m128i_i64[1] <= 1uLL )
      {
        v8 += 2;
        if ( v6 == v8 )
          return;
      }
      v10 = 32LL * (v8->m128i_i32[0] & (a4 - 1));
      v11 = &a3[(unsigned __int64)v10 / 0x10];
      if ( v5 == v10 )
      {
LABEL_11:
        if ( a3 == v11 )
        {
LABEL_16:
          sub_1872CE0("");
          sub_1873130(114, 213);
        }
        v12 = a3;
        while ( v12->m128i_i64[1] )
        {
          v12 += 2;
          if ( v11 == v12 )
            goto LABEL_16;
        }
      }
      else
      {
        v12 = &a3[(unsigned __int64)v10 / 0x10];
        while ( v12->m128i_i64[1] )
        {
          v12 += 2;
          if ( v7 == v12 )
            goto LABEL_11;
        }
      }
      v13 = _mm_loadu_si128(v8);
      v8 += 2;
      *v12 = v13;
      v12[1] = _mm_loadu_si128(v8 - 1);
    }
    while ( v6 != v8 );
  }
}

