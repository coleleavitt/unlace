__int64 __fastcall sub_4DE320(__int64 *a1, __int64 *a2)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  __int64 *v4; // rsi
  __int64 *v5; // rdi
  __m128i v6; // xmm0

  v2 = *a2;
  v3 = *a1;
  v4 = a2 + 3;
  v5 = a1 + 3;
  v6 = _mm_loadu_si128((const __m128i *)v5 - 1);
  *(v5 - 3) = v2;
  *(v5 - 2) = *(v4 - 2);
  *(v5 - 1) = *(v4 - 1);
  *(v4 - 3) = v3;
  *((__m128i *)v4 - 1) = v6;
  return sub_4DE2E0(v5, v4);
}
