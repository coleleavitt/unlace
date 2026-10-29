void *__fastcall sub_2270210(__int64 a1, __int64 a2, size_t a3, __int64 *a4)
{
  __int64 v6; // rcx
  size_t v7; // rcx
  void *v8; // r13
  char *(__fastcall *v10)(__int64 *, __int64, _QWORD *); // [rsp+8h] [rbp-40h] BYREF
  _QWORD v11[2]; // [rsp+10h] [rbp-38h] BYREF
  __m128 v12; // [rsp+20h] [rbp-28h]

  v6 = 0;
  if ( a3 )
  {
    v7 = a3 - 2;
    if ( v7 <= --a3 )
      a3 = v7;
    v6 = 1;
  }
  v11[0] = a1;
  v10 = sub_226F620;
  v12 = _mm_loadh_ps((const double *)&v10);
  v8 = sub_226FD50((void *)(v6 + a2), a3, a4, "\\\r\n", 3, (__int64)v11);
  if ( v12.m128_u64[0] )
    ((void (__fastcall *)(_QWORD *, _QWORD *, __int64))v12.m128_u64[0])(v11, v11, 3);
  return v8;
}
