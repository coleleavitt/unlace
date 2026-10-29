__int64 __fastcall sub_BBF6F0(__int64 a1, const __m128i *a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // rdi
  const __m128i *i; // rdx
  __m128i v6; // xmm0

  result = 3 * a3;
  v4 = a1 + 40;
  for ( i = (const __m128i *)((char *)a2 + 24 * a3); i != a2; *(_QWORD *)(v4 - 8) = result )
  {
    v6 = _mm_loadu_si128(a2);
    a2 = (const __m128i *)((char *)a2 + 24);
    v4 += 24;
    *(__m128i *)(v4 - 24) = v6;
    result = a2[-1].m128i_i64[1];
  }
  return result;
}
