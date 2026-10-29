__m128i *__fastcall sub_10DAB00(__m128i **a1)
{
  __m128i *result; // rax
  _BYTE *v2; // rcx
  __int64 v3; // rcx
  __m128i v4; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+30h] [rbp-18h]

  result = *a1;
  v4 = 0;
  v2 = (_BYTE *)result[110].m128i_i64[0];
  v5 = 0;
  result[110].m128i_i64[1] = 0;
  *v2 = 0;
  v3 = v5;
  result[112] = _mm_load_si128(&v4);
  result[113].m128i_i64[0] = v3;
  return result;
}
