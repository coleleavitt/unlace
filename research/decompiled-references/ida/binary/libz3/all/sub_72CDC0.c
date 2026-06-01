__int64 __fastcall sub_72CDC0(const __m128i *a1, const __m128i *a2)
{
  void (__fastcall *v2)(__m128i *, const __m128i *, __int64); // rax
  __m128i v3; // xmm1
  __m128i v4; // xmm2
  __m128i v5; // xmm0
  __int64 result; // rax
  __m128i v7; // [rsp+0h] [rbp-38h] BYREF
  __m128i v8; // [rsp+10h] [rbp-28h]

  v2 = (void (__fastcall *)(__m128i *, const __m128i *, __int64))a2[1].m128i_i64[0];
  v8 = 0u;
  v7 = 0;
  if ( v2 )
  {
    v2(&v7, a2, 2);
    v3 = _mm_loadu_si128(a2 + 1);
  }
  else
  {
    v3 = 0;
  }
  v4 = _mm_loadu_si128(a1 + 63);
  a1[63] = _mm_load_si128(&v7);
  v5 = _mm_loadu_si128(a1 + 64);
  v7 = v4;
  result = v5.m128i_i64[0];
  v8 = v5;
  a1[64] = v3;
  if ( v5.m128i_i64[0] )
    return ((__int64 (__fastcall *)(__m128i *, __m128i *, __int64))v5.m128i_i64[0])(&v7, &v7, 3);
  return result;
}

