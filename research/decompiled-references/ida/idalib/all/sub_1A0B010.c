__int64 __fastcall sub_1A0B010(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  __int64 v10; // rdi
  _QWORD *v11; // rax
  __int64 v12; // rbp
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int v16; // [rsp+Ch] [rbp-4Ch] BYREF
  unsigned __int8 *v17; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v18; // [rsp+18h] [rbp-40h]

  v10 = *(_QWORD *)(a1 & 0xFFFFFFFFFFFFFFF0LL);
  v16 = a2;
  v11 = sub_F63270(v10, a2, (__int64)a3, a4, a5, a6);
  if ( !v11 )
    return 0;
  v12 = sub_1A69EF0(a3, v11);
  if ( !v12 )
    return 0;
  sub_168B9B0((__int64)&v17, (__int64)(a3 + 1), 2950);
  sub_AE9DF0(&v17, a1, 8u);
  sub_16602B0(a3, v16, v12, (__int64)&v17, 0);
  if ( v17 )
  {
    if ( v18 )
      sub_1580C40(v18, (unsigned __int64)v17);
  }
  sub_1910D40((__int64)a3, v16, v12, 1, v13, v14, a7, a8);
  return sub_18F5260((__int64)a3, v12, (int *)&v16, 1u, 0, 0, (__m128i)a7, *(double *)a8.m128_u64, 0, 0, 0);
}
