__int64 __fastcall sub_7F66C0(const __m128i *src, const __m128i *a2, __m128i *a3, __int64 a4)
{
  __int64 v5; // r14
  __int64 v6; // rax
  const __m128i *v7; // r12
  __int64 v8; // r13
  __int64 v9; // rbp
  const __m128i *v10; // rdi

  v5 = 2 * a4;
  v6 = 0xCCCCCCCCCCCCCCCDLL * (((char *)a2 - (char *)src) >> 3);
  v7 = src;
  if ( 2 * a4 <= v6 )
  {
    v8 = 80 * a4;
    v9 = -40 * a4;
    do
    {
      v10 = v7;
      v7 = (const __m128i *)((char *)v7 + v8);
      a3 = (__m128i *)sub_7F65B0(v10, (const __m128i *)((char *)v7 + v9), (const __m128i *)((char *)v7 + v9), v7, a3);
      v6 = 0xCCCCCCCCCCCCCCCDLL * (((char *)a2 - (char *)v7) >> 3);
    }
    while ( v5 <= v6 );
  }
  if ( a4 <= v6 )
    v6 = a4;
  return sub_7F65B0(v7, (const __m128i *)((char *)v7 + 40 * v6), (const __m128i *)((char *)v7 + 40 * v6), a2, a3);
}
