__int64 __fastcall sub_21BBC30(__int64 a1, void *a2, size_t a3, __int64 a4, int a5, unsigned int a6, int a7)
{
  unsigned int v7; // ebp
  bool (__fastcall *v9)(_DWORD *, __int64); // [rsp+10h] [rbp-40h] BYREF
  _DWORD v10[4]; // [rsp+18h] [rbp-38h] BYREF
  __m128 v11; // [rsp+28h] [rbp-28h]

  v10[0] = a5;
  v9 = sub_21BA670;
  v11 = _mm_loadh_ps((const double *)&v9);
  v7 = sub_21BB3D0(a1, a2, a3, a4, a6, a7, (__int64)v10);
  if ( v11.m128_u64[0] )
    ((void (__fastcall *)(_DWORD *, _DWORD *, __int64))v11.m128_u64[0])(v10, v10, 3);
  return v7;
}
