unsigned __int64 __fastcall sub_198B840(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  unsigned __int64 v5; // rax
  unsigned __int64 v7; // rbp
  __int64 *v8; // rax
  unsigned __int64 v9; // rsi

  v5 = sub_190CCA0(a1, *(unsigned __int16 **)(a2 + 16), *(double *)a3.m128_u64, a4);
  if ( v5 == 1 )
    return 1;
  v7 = v5;
  v8 = sub_1988430(a1, *(_QWORD *)(a2 + 24), a3, a4);
  if ( !v8 )
    return 1;
  v9 = v7 & 0xFFFFFFFFFFFFFFFELL;
  if ( v8 == *(__int64 **)(a2 + 24) && *(_QWORD *)(a2 + 16) == v9 )
    return a2;
  else
    return sub_16CEEA0(*a1, v9, v8, *(_DWORD *)(a2 + 32), *(_DWORD *)(a2 + 36), *(double *)a3.m128_u64);
}
