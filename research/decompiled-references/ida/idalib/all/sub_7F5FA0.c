void __fastcall sub_7F5FA0(__m128i *src, __m128i *a2, __m128i *a3)
{
  __int64 v4; // rsi
  const __m128i *v6; // r14
  char *v8; // r15
  char *v9; // rdi
  __int64 v10; // r15
  __int64 v11; // rcx

  v4 = (char *)a2 - (char *)src;
  v6 = (__m128i *)((char *)a3 + v4);
  if ( v4 <= 144 )
  {
    sub_7F5180(src->m128i_i8, a2->m128i_i8);
  }
  else
  {
    v8 = (char *)src;
    do
    {
      v9 = v8;
      v8 += 168;
      sub_7F5180(v9, v8);
    }
    while ( (char *)a2 - v8 > 144 );
    sub_7F5180(v8, a2->m128i_i8);
    if ( v4 > 168 )
    {
      v10 = 7;
      do
      {
        sub_7F5EF0(src, a2, a3, v10);
        v11 = 2 * v10;
        v10 *= 4;
        sub_7F5EF0(a3, v6, src, v11);
      }
      while ( (__int64)(0xAAAAAAAAAAAAAAABLL * (v4 >> 3)) > v10 );
    }
  }
}
