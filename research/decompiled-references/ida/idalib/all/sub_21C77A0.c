_QWORD *__fastcall sub_21C77A0(_QWORD *a1, __int64 a2, char *a3, __int64 a4)
{
  __int64 (__fastcall *v5)(); // [rsp+8h] [rbp-40h] BYREF
  _QWORD v6[2]; // [rsp+10h] [rbp-38h] BYREF
  __m128 v7; // [rsp+20h] [rbp-28h]

  v5 = sub_21C7CA0;
  v6[0] = a2;
  v7 = _mm_loadh_ps((const double *)&v5);
  sub_21C7350(a1, a3, a4, (__int64)v6);
  if ( v7.m128_u64[0] )
    ((void (__fastcall *)(_QWORD *, _QWORD *, __int64))v7.m128_u64[0])(v6, v6, 3);
  return a1;
}
