__int64 __fastcall sub_2100A30(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 (__fastcall *v4)(); // [rsp+0h] [rbp-38h] BYREF
  __int64 v5; // [rsp+8h] [rbp-30h] BYREF
  _QWORD v6[2]; // [rsp+10h] [rbp-28h] BYREF
  __m128 v7; // [rsp+20h] [rbp-18h]

  *(_BYTE *)(a1 + 2352) = 1;
  v6[1] = a3;
  v6[0] = &v5;
  v4 = sub_2107210;
  v5 = a2;
  v7 = _mm_loadh_ps((const double *)&v4);
  sub_2100720(a1, a2, (__int64)v6);
  result = v7.m128_u64[0];
  if ( v7.m128_u64[0] )
    return ((__int64 (__fastcall *)(_QWORD *, _QWORD *, __int64))v7.m128_u64[0])(v6, v6, 3);
  return result;
}
