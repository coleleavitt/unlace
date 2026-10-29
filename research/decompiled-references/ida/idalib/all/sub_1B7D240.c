__int64 __fastcall sub_1B7D240(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  __int64 v8; // r8
  _WORD *v10; // rsi
  __int64 v11; // r12
  unsigned __int64 v12; // rax

  v5 = sub_1B7B360(a1, *(unsigned int **)(a2 + 16), a3, a4);
  if ( v5 == 1 )
    return 1;
  v10 = *(_WORD **)(a2 + 24);
  v11 = v5;
  v12 = (*v10 & 0x1FF) == 0x89
      ? sub_1B7B370(a1, (__int64)v10, a3, a4)
      : sub_1B7D1E0(a1, (__int64)v10, v6, v7, v8, a3, a4);
  if ( v12 == 1 )
    return 1;
  else
    return sub_1C3CD10(
             *a1,
             *(unsigned __int8 *)(a2 + 8),
             *(unsigned int *)(a2 + 12),
             v11 & 0xFFFFFFFFFFFFFFFELL,
             v12 & 0xFFFFFFFFFFFFFFFELL);
}
