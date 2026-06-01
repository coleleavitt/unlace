__m128i *__fastcall sub_876B20(unsigned int a1, const __m128i *a2)
{
  int v2; // eax
  int v3; // ebx
  __m128i *result; // rax

  v2 = 0xFFFF;
  if ( a1 <= 0xFFFF )
    v2 = a1;
  v3 = v2;
  if ( !v2 )
    v3 = 1;
  result = sub_843170(8LL * (unsigned int)(2 * v3 + 15), a2);
  if ( result )
  {
    result[6].m128i_i16[5] = v3;
    result[6].m128i_i8[9] = 0;
    result[3].m128i_i64[0] = 0;
    result[3].m128i_i64[1] = 0;
  }
  return result;
}

