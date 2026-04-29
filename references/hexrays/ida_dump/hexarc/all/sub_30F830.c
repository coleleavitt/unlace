__int64 __fastcall sub_30F830(__int64 *a1, __m128i *a2, double a3, __m128 a4)
{
  __int64 v4; // rcx
  __int64 result; // rax
  __m128 si128; // xmm0
  __m128i *v8; // rsi
  __int64 v9; // rax
  __m128 v10; // [rsp+10h] [rbp-28h] BYREF
  __m128i *v11[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = a1[1];
  v11[1] = (__m128i *)__readfsqword(0x28u);
  result = 0;
  if ( v4 == 1 )
  {
    v8 = (__m128i *)*a1;
    if ( *(_QWORD *)*a1 || (result = 0, v8->m128i_i64[1]) )
    {
      if ( (unsigned __int64)(a2->m128i_i64[0] + a2->m128i_i64[1] - 1) >= a2->m128i_i64[0] )
      {
LABEL_4:
        v11[0] = v8;
        return sub_30F570(a1, v11, a2->m128i_i64);
      }
    }
  }
  else
  {
    si128 = (__m128)_mm_loadu_si128(a2);
    result = 0;
    if ( si128.m128_u64[0] + _mm_movehl_ps(a4, si128).m128_u64[0] - 1 < si128.m128_u64[0] )
      return result;
    v8 = (__m128i *)*a1;
    if ( v4 )
      goto LABEL_4;
    if ( !a1[2] )
    {
      v10 = si128;
      v9 = qvector_reserve(a1, v8, 1, 16);
      si128 = (__m128)_mm_load_si128((const __m128i *)&v10);
      v8 = (__m128i *)v9;
      *a1 = v9;
      v4 = a1[1];
    }
    v8[v4] = (__m128i)si128;
    ++a1[1];
    return 1;
  }
  return result;
}
