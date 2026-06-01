__m128i *__fastcall sub_1088B10(__m128i *a1, __int64 a2, unsigned __int8 a3)
{
  unsigned __int8 v3; // si
  __m128i v4; // xmm0
  __m128i *result; // rax
  __m128i v6; // [rsp+0h] [rbp-18h] BYREF

  v3 = a3;
  switch ( a3 )
  {
    case '#':
    case '.':
      goto LABEL_3;
    case '$':
      v3 = 115;
      goto LABEL_3;
    case '&':
      v3 = 100;
      goto LABEL_3;
    case '/':
      v3 = 37;
LABEL_3:
      v6.m128i_i16[0] = v3;
      v4 = _mm_load_si128(&v6);
      a1->m128i_i64[0] = (__int64)a1[1].m128i_i64;
      a1[1] = v4;
      a1->m128i_i64[1] = 1;
      a1[2].m128i_i8[0] = 1;
      result = a1;
      break;
    default:
      a1[2].m128i_i8[0] = 0;
      result = a1;
      break;
  }
  return result;
}
