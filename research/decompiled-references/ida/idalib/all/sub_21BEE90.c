__int64 __fastcall sub_21BEE90(_QWORD *a1, _QWORD *a2, const char *a3, const __m128i *a4, char a5, char a6, int a7)
{
  __int64 result; // rax
  bool (__fastcall *v8)(_DWORD *, __int64); // [rsp+8h] [rbp-30h] BYREF
  _DWORD v9[4]; // [rsp+10h] [rbp-28h] BYREF
  __m128 v10; // [rsp+20h] [rbp-18h]

  v8 = sub_21BA760;
  v9[0] = a7;
  v10 = _mm_loadh_ps((const double *)&v8);
  sub_21BD5D0(a1, a2, a3, a4, a5, a6, (__int64)v9, a7);
  result = v10.m128_u64[0];
  if ( v10.m128_u64[0] )
    return ((__int64 (__fastcall *)(_DWORD *, _DWORD *, __int64))v10.m128_u64[0])(v9, v9, 3);
  return result;
}
