void __fastcall sub_4E8CA0(__int64 a1, __m128i *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int *v7; // rax
  __m128i *v8; // r13
  __m128i *v9; // r12
  unsigned __int64 v10; // rax
  __int64 v11; // rdx
  __m128i *v12; // rbx
  const __m128i *v13; // rdi

  v7 = (int *)a2->m128i_i64[0];
  if ( !a2->m128i_i64[0] || *v7 > 1 )
  {
    sub_3FB980(a2, 0, 0, 0, a5, a6);
    v7 = (int *)a2->m128i_i64[0];
  }
  v8 = (__m128i *)a2->m128i_i64[1];
  v9 = (__m128i *)((char *)v8 + 24 * a2[1].m128i_i64[0]);
  if ( !v7 || *v7 > 1 )
  {
    sub_3FB980(a2, 0, 0, 0, a5, a6);
    v8 = (__m128i *)a2->m128i_i64[1];
  }
  if ( v8 != v9 )
  {
    v10 = 0xAAAAAAAAAAAAAAABLL * (((char *)v9 - (char *)v8) >> 3);
    v11 = -2;
    if ( v10 )
    {
      _BitScanReverse64(&v10, v10);
      v11 = 2LL * (int)v10;
    }
    sub_4DDC20((__int64)v8, v9, v11, a1, a5, a6);
    if ( (char *)v9 - (char *)v8 <= 384 )
    {
      sub_4DD1D0(v8->m128i_i8, v9, a1);
    }
    else
    {
      v12 = v8 + 24;
      sub_4DD1D0(v8->m128i_i8, v8 + 24, a1);
      if ( v9 != &v8[24] )
      {
        do
        {
          v13 = v12;
          v12 = (__m128i *)((char *)v12 + 24);
          sub_4DCF10(v13, a1);
        }
        while ( v9 != v12 );
      }
    }
  }
}
