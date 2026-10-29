void __fastcall sub_21A4A80(const __m128i **a1, unsigned __int64 a2)
{
  const __m128i *v2; // rbx
  const __m128i *v4; // r15
  const __m128i *v5; // rax
  __m128i *v6; // rdi
  const __m128i *v7; // r14
  const __m128i *v8; // rdx
  const __m128i *i; // rcx
  __m128i v10; // xmm0

  if ( a2 > 0x3FFFFFFFFFFFFFFLL )
    std::__throw_length_error("vector::reserve");
  v2 = *a1;
  if ( ((char *)a1[2] - (char *)*a1) >> 6 < a2 )
  {
    v4 = a1[1];
    if ( a2 )
    {
      v5 = (const __m128i *)operator new(a2 << 6);
      v6 = (__m128i *)*a1;
      v7 = v5;
    }
    else
    {
      v6 = (__m128i *)*a1;
      v7 = nullptr;
    }
    v8 = v2;
    for ( i = v7; v4 != v8; i[-1] = _mm_loadu_si128(v8 - 1) )
    {
      v10 = _mm_loadu_si128(v8);
      v8 += 4;
      i += 4;
      i[-4] = v10;
      i[-3] = _mm_loadu_si128(v8 - 3);
      i[-2] = _mm_loadu_si128(v8 - 2);
    }
    if ( v6 )
      operator delete(v6);
    *a1 = v7;
    a1[1] = (const __m128i *)((char *)v7 + (char *)v4 - (char *)v2);
    a1[2] = &v7[4 * a2];
  }
}
