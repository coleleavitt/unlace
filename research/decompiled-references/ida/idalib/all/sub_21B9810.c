__int64 __fastcall sub_21B9810(_QWORD *a1, unsigned int a2)
{
  __m128i v2; // rax
  __int64 result; // rax
  __m128i v4; // rax
  __m128i v5; // [rsp+0h] [rbp-48h] BYREF
  __m128i v6; // [rsp+10h] [rbp-38h] BYREF
  __m128i v7[2]; // [rsp+20h] [rbp-28h] BYREF

  v2.m128i_i64[0] = sub_21BB380(a1[1], *(unsigned __int16 *)(*a1 + 58LL));
  v5 = v2;
  v6 = _mm_load_si128(&v5);
  if ( v6.m128i_i64[0] )
    return sub_21B9810(&v6, a2);
  result = 1;
  if ( a2 != *(_DWORD *)(*a1 + 40LL) )
  {
    v4.m128i_i64[0] = sub_21BB380(a1[1], *(unsigned __int16 *)(*a1 + 56LL));
    v5 = v4;
    result = 0;
    v7[0] = _mm_load_si128(&v5);
    if ( v7[0].m128i_i64[0] )
      return sub_21B9810(v7, a2);
  }
  return result;
}
