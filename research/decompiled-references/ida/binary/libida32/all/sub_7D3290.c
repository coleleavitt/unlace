__int64 __fastcall sub_7D3290(const __m128i *src, const __m128i *a2, __m128i *a3, __int64 a4)
{
  const __m128i *v5; // r14
  __int64 v6; // rax
  __int64 v7; // r12
  __int64 v8; // r13
  __int64 v9; // rbp
  const __m128i *v10; // rdi

  v5 = src;
  v6 = 0xAAAAAAAAAAAAAAABLL * (((char *)a2 - (char *)src) >> 3);
  v7 = 2 * a4;
  if ( 2 * a4 <= v6 )
  {
    v8 = 48 * a4;
    v9 = -24 * a4;
    do
    {
      v10 = v5;
      v5 = (const __m128i *)((char *)v5 + v8);
      a3 = (__m128i *)sub_7D31A0(v10, (const __m128i *)((char *)v5 + v9), (const __m128i *)((char *)v5 + v9), v5, a3);
      v6 = 0xAAAAAAAAAAAAAAABLL * (((char *)a2 - (char *)v5) >> 3);
    }
    while ( v7 <= v6 );
  }
  if ( a4 <= v6 )
    v6 = a4;
  return sub_7D31A0(v5, (const __m128i *)((char *)v5 + 24 * v6), (const __m128i *)((char *)v5 + 24 * v6), a2, a3);
}

