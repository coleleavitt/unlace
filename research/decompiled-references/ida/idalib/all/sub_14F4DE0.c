__int64 __fastcall sub_14F4DE0(__int64 a1, double a2, __m128 a3)
{
  __int64 v3; // rax
  __int64 v4; // rbp
  unsigned int v6; // [rsp+8h] [rbp-60h] BYREF
  int v7; // [rsp+Ch] [rbp-5Ch] BYREF
  __m128 v8; // [rsp+10h] [rbp-58h] BYREF
  __int64 v9; // [rsp+20h] [rbp-48h]
  void *ptr[2]; // [rsp+30h] [rbp-38h] BYREF
  _BYTE v11[40]; // [rsp+40h] [rbp-28h] BYREF

  v6 = 0;
  v7 = 0;
  ptr[0] = v11;
  ptr[1] = (void *)0x100000000LL;
  v3 = *(_QWORD *)(a1 + 96);
  v9 = 0;
  v8 = _mm_loadh_ps((const double *)(v3 + 608));
  v4 = sub_14F4830(a1, (__int64)&v8, &v6, (__int64)ptr, &v7, 0, *(double *)v8.m128_u64, a3);
  if ( v9 )
    sub_1894E40(*(_QWORD *)(v8.m128_u64[0] + 736), v8.m128_u64[1]);
  if ( ptr[0] != v11 )
    free(ptr[0]);
  return v4;
}
