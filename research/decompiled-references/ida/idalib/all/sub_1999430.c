__int64 __fastcall sub_1999430(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  __int64 v5; // rax
  __int64 result; // rax
  _WORD *v7; // rsi
  __int64 v8; // rbp
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // r8

  v5 = sub_1999380(a1, *(_QWORD *)(a2 + 16), a3, a4);
  if ( v5 == 1 )
    return 1;
  v7 = *(_WORD **)(a2 + 24);
  v8 = v5;
  v9 = (*v7 & 0x1FF) == 0x89 ? sub_1999390(a1, (__int64)v7, a3, a4) : sub_19993D0(a1, (__int64)v7, a3, a4);
  if ( v9 == 1 )
    return 1;
  v10 = v9 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v8 & 0xFFFFFFFFFFFFFFFELL) != *(_QWORD *)(a2 + 16) )
    return sub_1C3CD10(*a1, *(unsigned __int8 *)(a2 + 8), *(unsigned int *)(a2 + 12), v8 & 0xFFFFFFFFFFFFFFFELL, v10);
  result = a2;
  if ( *(_QWORD *)(a2 + 24) != v10 )
    return sub_1C3CD10(*a1, *(unsigned __int8 *)(a2 + 8), *(unsigned int *)(a2 + 12), v8 & 0xFFFFFFFFFFFFFFFELL, v10);
  return result;
}
