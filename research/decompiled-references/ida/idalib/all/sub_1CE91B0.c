__int64 __fastcall sub_1CE91B0(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  unsigned int *v5; // rax
  __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  __int64 v8; // r8
  __int64 result; // rax
  _WORD *v10; // rsi
  unsigned int *v11; // rbp
  unsigned __int64 v12; // rax
  __int64 v13; // r9
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // rcx

  v5 = sub_1CE7EE0(a1, *(unsigned int **)(a2 + 16), a3, a4);
  if ( v5 == (unsigned int *)((char *)&dword_0 + 1) )
    return 1;
  v10 = *(_WORD **)(a2 + 24);
  v11 = v5;
  v12 = (*v10 & 0x1FF) == 0x89
      ? sub_1CE7EF0(a1, (__int64)v10, a3, a4)
      : sub_1CE9150(a1, (__int64)v10, v6, v7, v8, a3, a4);
  if ( v12 == 1 )
    return 1;
  v14 = v12 & 0xFFFFFFFFFFFFFFFELL;
  v15 = (unsigned __int64)v11 & 0xFFFFFFFFFFFFFFFELL;
  if ( *(_DWORD *)(*a1 + 12632) )
    return sub_1C3CD10(*a1, *(_BYTE *)(a2 + 8), *(_DWORD *)(a2 + 12), v15, v14, v13);
  if ( *(_QWORD *)(a2 + 16) != v15 )
    return sub_1C3CD10(*a1, *(_BYTE *)(a2 + 8), *(_DWORD *)(a2 + 12), v15, v14, v13);
  result = a2;
  if ( *(_QWORD *)(a2 + 24) != v14 )
    return sub_1C3CD10(*a1, *(_BYTE *)(a2 + 8), *(_DWORD *)(a2 + 12), v15, v14, v13);
  return result;
}
