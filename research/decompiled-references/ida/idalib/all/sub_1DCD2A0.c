unsigned __int16 *__fastcall sub_1DCD2A0(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  __int64 *v9; // rax
  unsigned __int64 v10; // rsi
  __int64 v11; // r12
  __int64 v12; // r13
  unsigned int v13; // eax
  __int64 v14; // r8
  __int64 v15; // r9

  v9 = *(__int64 **)(a2 + 16);
  v10 = *(_QWORD *)(a2 + 24);
  v11 = *v9;
  if ( *v9 )
  {
    v12 = *a1;
    v13 = sub_EEB7E0(v10, v10, *(double *)a7.m128_u64);
    sub_1910D40(v12, v13, v11, 1, v14, v15, a7, a8);
    v10 = *(_QWORD *)(a2 + 24);
  }
  return sub_1DC71F0(a1, v10, a3, a4, a5, a6, a7, a8);
}
