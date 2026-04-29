__m128i *__fastcall sub_3C3130(const __m128i *a1, int a2)
{
  __m128i *result; // rax
  int v3; // edx
  int v4; // ecx
  int v5; // r8d
  int v6; // r9d

  result = (__m128i *)qalloc();
  if ( !result )
    sub_3839B0((unsigned int)"microplace", a2, v3, v4, v5, v6);
  *result = _mm_loadu_si128(a1);
  result[1].m128i_i64[0] = a1[1].m128i_i64[0];
  return result;
}
