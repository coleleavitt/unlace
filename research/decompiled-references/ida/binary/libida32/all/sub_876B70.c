__m128i *__fastcall sub_876B70(const __m128i *a1, const __m128i *a2)
{
  unsigned int v2; // ebx
  __m128i *result; // rax

  if ( !a1 )
    return nullptr;
  if ( !a2 )
    a2 = a1;
  v2 = a1[8].m128i_u16[4] + 1;
  if ( v2 > 0xFFFF )
    v2 = 0xFFFF;
  result = sub_843170(8LL * (2 * v2 + 15), a2);
  if ( result )
  {
    result[6].m128i_i16[5] = v2;
    result[6].m128i_i8[9] = 0;
    result[3].m128i_i64[0] = 0;
    result[3].m128i_i64[1] = 0;
  }
  return result;
}

