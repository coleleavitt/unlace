__int64 __fastcall sub_532410(void **a1, const __m128i **a2, int a3)
{
  void *v4; // rdi
  const __m128i *v5; // rbp
  __m128i *v6; // rax
  __m128i v7; // xmm0

  switch ( a3 )
  {
    case 1:
      *a1 = (void *)*a2;
      break;
    case 2:
      v5 = *a2;
      v6 = (__m128i *)operator new(0x30u);
      *v6 = _mm_loadu_si128(v5);
      v6[1] = _mm_loadu_si128(v5 + 1);
      v7 = _mm_loadu_si128(v5 + 2);
      *a1 = v6;
      v6[2] = v7;
      break;
    case 3:
      v4 = *a1;
      if ( v4 )
        operator delete(v4, 0x30u);
      break;
    case 0:
      *a1 = nullptr;
      break;
  }
  return 0;
}
