const __m128i *__fastcall sub_2B45E0(__int64 a1, const __m128i *a2, __int64 a3)
{
  const __m128i *result; // rax
  __int64 v4; // rcx
  __m128i v5; // xmm0
  __int32 v6; // esi

  result = a2;
  if ( !a2 )
    result = (const __m128i *)&byte_8CCA80;
  v4 = *(unsigned __int8 *)(a1 + 24);
  if ( (_BYTE)v4 != result->m128i_i8[0] )
    goto LABEL_4;
  if ( (_BYTE)v4 )
  {
    if ( *(_DWORD *)(a1 + 28) == result->m128i_i32[1] )
      return result;
LABEL_4:
    v5 = _mm_loadu_si128(result);
    *(__m128i *)(a1 + 24) = v5;
    *(_DWORD *)(a1 + 40) = result[1].m128i_i32[0];
    return (const __m128i *)sub_2B4560(a1, a3, *(double *)v5.m128i_i64, a3, v4);
  }
  if ( *(_DWORD *)(a1 + 36) != result->m128i_i32[3] )
    goto LABEL_4;
  v6 = result[1].m128i_i32[0];
  if ( *(_DWORD *)(a1 + 40) < v6 || *(_DWORD *)(a1 + 40) > v6 || *(_DWORD *)(a1 + 32) != result->m128i_i32[2] )
    goto LABEL_4;
  return result;
}
