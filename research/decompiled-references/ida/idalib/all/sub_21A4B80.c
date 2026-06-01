void __fastcall sub_21A4B80(const __m128i **a1, unsigned __int64 a2)
{
  const __m128i *v2; // rbx
  const __m128i *v4; // r15
  const __m128i *v5; // rax
  __m128i *v6; // rdi
  const __m128i *v7; // r14
  const __m128i *v8; // rdx
  const __m128i *i; // rcx
  __m128i v10; // xmm0

  if ( a2 > 0x38E38E38E38E38ELL )
    std::__throw_length_error("vector::reserve");
  v2 = *a1;
  if ( 0x8E38E38E38E38E39LL * (((char *)a1[2] - (char *)*a1) >> 3) < a2 )
  {
    v4 = a1[1];
    if ( a2 )
    {
      v5 = (const __m128i *)operator new(72 * a2);
      v6 = (__m128i *)*a1;
      v7 = v5;
    }
    else
    {
      v6 = (__m128i *)*a1;
      v7 = nullptr;
    }
    v8 = v2;
    for ( i = v7; v4 != v8; i[-1].m128i_i64[1] = v8[-1].m128i_i64[1] )
    {
      v10 = _mm_loadu_si128(v8);
      v8 = (const __m128i *)((char *)v8 + 72);
      i = (const __m128i *)((char *)i + 72);
      *(__m128i *)((char *)i - 72) = v10;
      *(const __m128i *)((char *)&i[-4] + 8) = _mm_loadu_si128((const __m128i *)((char *)v8 - 56));
      *(const __m128i *)((char *)&i[-3] + 8) = _mm_loadu_si128((const __m128i *)((char *)v8 - 40));
      *(const __m128i *)((char *)&i[-2] + 8) = _mm_loadu_si128((const __m128i *)((char *)v8 - 24));
    }
    if ( v6 )
      operator delete(v6);
    *a1 = v7;
    a1[1] = (const __m128i *)((char *)v7 + (char *)v4 - (char *)v2);
    a1[2] = (const __m128i *)((char *)v7 + 72 * a2);
  }
}
