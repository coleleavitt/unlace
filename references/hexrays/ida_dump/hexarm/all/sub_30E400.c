__int64 (*__fastcall sub_30E400(__m128i *a1, __int64 a2))()
{
  __int64 v3; // rdi
  __int64 (*result)(); // rax
  __m128i v5; // xmm0

  v3 = *(_QWORD *)(a2 + 112);
  result = *(__int64 (**)())(*(_QWORD *)v3 + 392LL);
  if ( result != sub_30DF20 )
  {
    result = (__int64 (*)())((__int64 (__fastcall *)(__int64, __m128i *))result)(v3, &a1[2]);
    if ( (_BYTE)result )
    {
      v5 = _mm_loadu_si128(a1 + 3);
      return (__int64 (*)())sub_30E250(a1, "runtime.duffzero", _mm_add_epi64(v5, _mm_srli_si128(v5, 8)).m128i_i64[0]);
    }
  }
  return result;
}
