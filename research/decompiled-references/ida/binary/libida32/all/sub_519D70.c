__int64 __fastcall sub_519D70(__int64 *a1, const __m128i **a2, int a3)
{
  void *v4; // rdi
  const __m128i *v5; // rbp
  __int64 v6; // rax
  __m128i v7; // xmm0

  switch ( a3 )
  {
    case 1:
      *a1 = (__int64)*a2;
      break;
    case 2:
      v5 = *a2;
      v6 = operator new(0x20u);
      *(__m128i *)v6 = _mm_loadu_si128(v5);
      v7 = _mm_loadu_si128(v5 + 1);
      *a1 = v6;
      *(__m128i *)(v6 + 16) = v7;
      break;
    case 3:
      v4 = (void *)*a1;
      if ( v4 )
        operator delete(v4, 0x20u);
      break;
    case 0:
      *a1 = 0;
      break;
  }
  return 0;
}

