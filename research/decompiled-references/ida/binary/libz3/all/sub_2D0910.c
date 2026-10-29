__int64 __fastcall sub_2D0910(const __m128i *a1, __int64 a2, const __m128i *a3)
{
  void (__fastcall *v3)(__m128i *, const __m128i *, __int64); // rax
  __m128i v5; // xmm0
  __m128i v6; // xmm2
  __m128i v7; // xmm1
  __int64 result; // rax
  __m128i v9; // [rsp+0h] [rbp-38h] BYREF
  __m128i v10; // [rsp+10h] [rbp-28h]

  a1[9].m128i_i64[0] = a2;
  v3 = (void (__fastcall *)(__m128i *, const __m128i *, __int64))a3[1].m128i_i64[0];
  v10 = 0u;
  v9 = 0;
  if ( v3 )
  {
    v3(&v9, a3, 2);
    v5 = _mm_loadu_si128(a3 + 1);
  }
  else
  {
    v5 = 0;
  }
  v6 = _mm_loadu_si128(a1 + 7);
  a1[7] = _mm_load_si128(&v9);
  v7 = _mm_loadu_si128(a1 + 8);
  v9 = v6;
  v10 = v7;
  a1[8] = v5;
  if ( v7.m128i_i64[0] )
  {
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v7.m128i_i64[0])(&v9, &v9, 3);
    result = a1[8].m128i_i64[0];
  }
  else
  {
    result = v5.m128i_i64[0];
  }
  if ( result )
    a1[5].m128i_i8[0] = 0;
  return result;
}

