__int64 __fastcall sub_1976060(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  __int64 v5; // rax
  _WORD *v7; // rsi
  __int64 v8; // r12
  unsigned __int64 v9; // rax

  v5 = sub_1975FB0(a1, *(unsigned int **)(a2 + 16), a3, a4);
  if ( v5 == 1 )
    return 1;
  v7 = *(_WORD **)(a2 + 24);
  v8 = v5;
  v9 = (*v7 & 0x1FF) == 0x89 ? sub_1975FC0(a1, (__int64)v7, a3, a4) : sub_1976000(a1, (__int64)v7, a3, a4);
  if ( v9 == 1 )
    return 1;
  else
    return sub_1C3CD10(
             *a1,
             *(unsigned __int8 *)(a2 + 8),
             *(unsigned int *)(a2 + 12),
             v8 & 0xFFFFFFFFFFFFFFFELL,
             v9 & 0xFFFFFFFFFFFFFFFELL);
}
