void *__fastcall sub_22702C0(__int64 a1, size_t a2, __int64 *a3)
{
  __int64 v3; // rax
  size_t v4; // rax
  void *v5; // r13
  __int64 (__fastcall *v7)(__int64, __int64 *, _QWORD *); // [rsp+8h] [rbp-40h] BYREF
  _BYTE v8[16]; // [rsp+10h] [rbp-38h] BYREF
  __m128 v9; // [rsp+20h] [rbp-28h]

  v3 = 0;
  if ( a2 )
  {
    v4 = a2 - 2;
    if ( v4 <= --a2 )
      a2 = v4;
    v3 = 1;
  }
  v7 = sub_226E210;
  v9 = _mm_loadh_ps((const double *)&v7);
  v5 = sub_226FD50((void *)(v3 + a1), a2, a3, "'\r\n", 3, (__int64)v8);
  if ( v9.m128_u64[0] )
    ((void (__fastcall *)(_BYTE *, _BYTE *, __int64))v9.m128_u64[0])(v8, v8, 3);
  return v5;
}
