unsigned __int64 __fastcall sub_1985350(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  __int64 *v5; // rax
  unsigned __int16 *v6; // rsi
  __int64 v7; // r12
  __int64 v8; // r13
  unsigned int v9; // eax
  __int64 v10; // r8
  __int64 v11; // r9

  v5 = *(__int64 **)(a2 + 16);
  v6 = *(unsigned __int16 **)(a2 + 24);
  v7 = *v5;
  if ( *v5 )
  {
    v8 = *a1;
    v9 = sub_EEB7E0((unsigned __int64)v6, (__int64)v6, *(double *)a3.m128_u64);
    sub_1910D40(v8, v9, v7, 1, v10, v11, a3, a4);
    v6 = *(unsigned __int16 **)(a2 + 24);
  }
  return sub_190CCA0(a1, v6, *(double *)a3.m128_u64, a4);
}
