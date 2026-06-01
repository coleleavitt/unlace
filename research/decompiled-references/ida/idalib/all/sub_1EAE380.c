__int64 __fastcall sub_1EAE380(__int64 a1, const __m128i *a2)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __m128i v4; // xmm0
  __m128i v5; // [rsp+0h] [rbp-18h] BYREF

  result = *(unsigned int *)(a1 + 8);
  if ( !(_DWORD)result
    || (v3 = *(_QWORD *)a1 + 16 * result - 16, *(_DWORD *)v3 != a2->m128i_i32[0])
    || *(_QWORD *)(v3 + 8) != a2->m128i_i64[1] )
  {
    v4 = _mm_loadu_si128(a2);
    if ( result + 1 > (unsigned __int64)*(unsigned int *)(a1 + 12) )
    {
      v5 = v4;
      sub_2237220(a1, a1 + 16, result + 1, 16);
      result = *(unsigned int *)(a1 + 8);
      v4 = _mm_load_si128(&v5);
    }
    result = *(_QWORD *)a1 + 16 * result;
    *(__m128i *)result = v4;
    ++*(_DWORD *)(a1 + 8);
  }
  return result;
}
