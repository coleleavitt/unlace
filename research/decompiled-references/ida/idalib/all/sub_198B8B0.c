__int64 __fastcall sub_198B8B0(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  unsigned __int64 v5; // rbx
  __int64 *v6; // rax
  __int64 *v7; // r13
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdi
  unsigned __int16 *v11; // r14
  int v12; // eax

  v5 = *(_QWORD *)(a2 + 24) & 0xFFFFFFFFFFFFFFF8LL;
  v6 = sub_1988430(a1, v5, a3, a4);
  if ( !v6 )
    return 1;
  v7 = v6;
  v8 = sub_190CCA0(a1, *(unsigned __int16 **)(a2 + 32), *(double *)a3.m128_u64, a4);
  if ( v8 == 1 )
    return 1;
  v9 = v8 & 0xFFFFFFFFFFFFFFFELL;
  v10 = *(_QWORD *)(a2 + 32);
  v11 = (unsigned __int16 *)v9;
  if ( v7 == (__int64 *)v5 && v9 == v10 )
    return sub_19A3E40(*a1, a2);
  v12 = sub_EEC140(v10);
  return sub_18D9980(*a1, *(unsigned int *)(a2 + 16), v7, v12, v11, *(double *)a3.m128_u64);
}
