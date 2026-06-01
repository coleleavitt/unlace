__int64 __fastcall sub_11BAC70(_QWORD *a1)
{
  __int64 v1; // rsi
  __m128i v2; // rax
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __m128i v7; // [rsp+0h] [rbp-28h] BYREF
  __m128i v8; // [rsp+10h] [rbp-18h] BYREF

  v1 = *(unsigned __int16 *)(*a1 + 58LL);
  v2.m128i_i64[0] = sub_21BB380(a1[1], v1);
  v7 = v2;
  v8 = _mm_load_si128(&v7);
  if ( v8.m128i_i64[0] )
    return ((__int64 (__fastcall *)(__m128i *, __int64, __int64, __int64, __int64, __int64, __int64, __int64))sub_11BAC70)(
             &v8,
             v1,
             v2.m128i_i64[1],
             v3,
             v4,
             v5,
             v7.m128i_i64[0],
             v7.m128i_i64[1]);
  else
    return *a1;
}
