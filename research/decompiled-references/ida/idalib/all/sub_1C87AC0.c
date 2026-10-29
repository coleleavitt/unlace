unsigned __int16 *__fastcall sub_1C87AC0(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __m128 a6,
        __m128 a7)
{
  __int64 *v8; // rax
  unsigned __int64 v9; // rsi
  __int64 v10; // r12
  __int64 v11; // r13
  unsigned int v12; // eax
  __int64 v13; // r8
  __int64 v14; // r9

  v8 = *(__int64 **)(a2 + 16);
  v9 = *(_QWORD *)(a2 + 24);
  v10 = *v8;
  if ( *v8 )
  {
    v11 = *a1;
    v12 = sub_EEB7E0(v9, v9, *(double *)a6.m128_u64);
    sub_1910D40(v11, v12, v10, 1, v13, v14, a6, a7);
    v9 = *(_QWORD *)(a2 + 24);
  }
  return sub_1C7CFE0(a1, v9, a6, a7, a3, a4, a5);
}
