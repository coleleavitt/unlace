unsigned __int64 __fastcall sub_C03E00(__int64 a1, unsigned int a2, const __m128i *a3)
{
  unsigned __int64 result; // rax
  __m128i *v4; // rsi

  result = (a1
          + 4LL * (unsigned int)(3 * *(_DWORD *)(a1 + 28))
          + 32
          + 8 * ((unsigned int)(3 * *(_DWORD *)(a1 + 28)) + (unsigned __int64)*(unsigned int *)(a1 + 28))
          + 7)
         & 0xFFFFFFFFFFFFFFF8LL;
  v4 = (__m128i *)(result + 32LL * a2);
  *v4 = _mm_loadu_si128(a3);
  v4[1] = _mm_loadu_si128(a3 + 1);
  return result;
}
