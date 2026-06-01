__int64 __fastcall sub_62FB40(double a1, __int64 a2, __int64 a3, __m128i *a4)
{
  __m128i v5; // xmm0
  __m128i v7; // [rsp+0h] [rbp-28h] BYREF
  __int64 v8; // [rsp+10h] [rbp-18h]

  if ( !a4 )
    return sub_690460(a1);
  clang_getNullRange(&v7);
  v5 = _mm_loadu_si128(&v7);
  *a4 = v5;
  a4[1].m128i_i64[0] = v8;
  return sub_690460(*(double *)v5.m128i_i64);
}

