__int64 __fastcall sub_2009EE0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  const __m128i *v5; // rsi
  const __m128i *v6; // rsi
  __int64 result; // rax
  __m128i v8; // [rsp+0h] [rbp-28h] BYREF
  __m128i v9; // [rsp+10h] [rbp-18h] BYREF

  v8.m128i_i64[0] = a2;
  v5 = *(const __m128i **)(a1 + 80);
  v8.m128i_i64[1] = a3;
  v9.m128i_i64[0] = a4;
  v9.m128i_i64[1] = a5;
  if ( v5 == *(const __m128i **)(a1 + 88) )
    return sub_9C4BB0(a1 + 72, v5, &v8);
  v6 = v5 + 2;
  v6[-2] = _mm_load_si128(&v8);
  v6[-1] = _mm_load_si128(&v9);
  *(_QWORD *)(a1 + 80) = v6;
  return result;
}
