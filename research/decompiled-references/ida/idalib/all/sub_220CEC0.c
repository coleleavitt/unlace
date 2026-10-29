__m128i *__fastcall sub_220CEC0(__m128i *a1, __int64 a2, unsigned int a3)
{
  unsigned __int64 v3; // r8
  unsigned __int64 v5; // rdx
  const __m128i **v6; // rax
  const __m128i *v7; // rcx
  __m128i v9; // xmm0

  v3 = *(_QWORD *)(a2 + 88);
  v5 = a3 % v3;
  v6 = *(const __m128i ***)(*(_QWORD *)(a2 + 80) + 8 * v5);
  if ( !v6 )
  {
LABEL_7:
    a1[1].m128i_i8[0] = 0;
    return a1;
  }
  v7 = *v6;
  while ( a3 != v7->m128i_i32[2] )
  {
    v7 = (const __m128i *)v7->m128i_i64[0];
    if ( !v7 || v5 != v7->m128i_u32[2] % v3 )
      goto LABEL_7;
  }
  v9 = _mm_loadu_si128(v7 + 1);
  a1[1].m128i_i8[0] = 1;
  *a1 = v9;
  return a1;
}
