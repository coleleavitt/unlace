__m128i *__fastcall sub_14667F0(__m128i *a1, __int64 a2)
{
  __m128i *result; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __m128i v6; // xmm0
  __int64 v7; // rdx

  result = a1;
  v3 = *(unsigned int *)(a2 + 36);
  if ( *(_DWORD *)(a2 + 32) == (_DWORD)v3 )
  {
    a1[1].m128i_i8[8] = 0;
  }
  else
  {
    v4 = 3 * v3;
    v5 = *(_QWORD *)(a2 + 24);
    a1[1].m128i_i8[8] = 1;
    v6 = _mm_loadu_si128((const __m128i *)(v5 + 8 * v4));
    v7 = *(_QWORD *)(v5 + 8 * v4 + 16);
    *a1 = v6;
    a1[1].m128i_i64[0] = v7;
  }
  return result;
}
