__m128i *__fastcall sub_21BCF70(
        __m128i *a1,
        __int64 a2,
        _BYTE *a3,
        __int64 a4,
        unsigned int *a5,
        _DWORD *a6,
        __int32 a7)
{
  bool (__fastcall *v8)(_DWORD *, __int64); // [rsp+10h] [rbp-40h] BYREF
  __m128i v9; // [rsp+18h] [rbp-38h] BYREF
  __m128 v10; // [rsp+28h] [rbp-28h]

  v9.m128i_i32[0] = a7;
  v8 = sub_21BA770;
  v10 = _mm_loadh_ps((const double *)&v8);
  sub_21BC7A0(a1, a2, a3, a4, a5, a6, &v9);
  if ( v10.m128_u64[0] )
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v10.m128_u64[0])(&v9, &v9, 3);
  return a1;
}
