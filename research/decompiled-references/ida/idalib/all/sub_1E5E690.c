__int64 *__fastcall sub_1E5E690(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128i a7,
        double a8)
{
  __int64 *v8; // rsi
  __int64 v9; // rax
  _QWORD *v10; // rsi
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 *result; // rax
  __int64 v14; // rdi
  unsigned __int64 v15; // rax
  __int64 v16; // rdx
  int v17[7]; // [rsp+Ch] [rbp-1Ch] BYREF

  v8 = (__int64 *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  v9 = *v8;
  v17[0] = a3;
  v10 = sub_F60F10(*(_QWORD *)(*(_QWORD *)(v9 + 8) & 0xFFFFFFFFFFFFFFF0LL), (__int64)v8, a3, a4, a5, a6);
  sub_18F5260(a1, (__int64)v10, v17, 1u, 0, 0, a7, a8, 0, 0, 0);
  v12 = v10[16];
  result = (__int64 *)(v12 & 0xFFFFFFFFFFFFFFF8LL);
  if ( (v12 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
  {
    if ( (v12 & 4) != 0 )
    {
      v14 = *result;
      v15 = *(_QWORD *)(*result & 0xFFFFFFFFFFFFFFF0LL);
      v16 = *(_QWORD *)(v15 + 8) & 7LL;
      if ( v16 | (*(__int64 *)(v15 + 8) >> 3) & 1 )
        v15 = sub_F64F00(v14, (__int64)v10, v16, v16 | (*(__int64 *)(v15 + 8) >> 3) & 1, v11);
      return (__int64 *)(v15 & 0xFFFFFFFFFFFFFFF0LL);
    }
    else
    {
      return (__int64 *)(v12 & 0xFFFFFFFFFFFFFFF0LL);
    }
  }
  return result;
}
