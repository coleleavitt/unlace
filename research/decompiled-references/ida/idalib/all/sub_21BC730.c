__int64 *__fastcall sub_21BC730(__int64 *a1, __int64 a2, __int64 (__fastcall ***a3)(_QWORD), int *a4, int a5)
{
  bool (__fastcall *v6)(_DWORD *, __int64); // [rsp+8h] [rbp-40h] BYREF
  _DWORD v7[4]; // [rsp+10h] [rbp-38h] BYREF
  __m128 v8; // [rsp+20h] [rbp-28h]

  v6 = sub_21BA6A0;
  v7[0] = a5;
  v8 = _mm_loadh_ps((const double *)&v6);
  sub_21BC320(a1, a2, a3, a4, (__int64)v7);
  if ( v8.m128_u64[0] )
    ((void (__fastcall *)(_DWORD *, _DWORD *, __int64))v8.m128_u64[0])(v7, v7, 3);
  return a1;
}
