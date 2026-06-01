__int64 __fastcall sub_177C9F0(__int64 *a1, __int64 a2, double a3)
{
  unsigned int *v4; // rax
  __int64 result; // rax
  _WORD *v6; // rsi
  unsigned int *v7; // rbp
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // rcx

  v4 = sub_177C940(a1, *(unsigned int **)(a2 + 16), a3);
  if ( v4 == (unsigned int *)((char *)&dword_0 + 1) )
    return 1;
  v6 = *(_WORD **)(a2 + 24);
  v7 = v4;
  v8 = (*v6 & 0x1FF) == 0x89 ? sub_177C950(a1, (__int64)v6, a3) : sub_177C990(a1, (__int64)v6, a3);
  if ( v8 == 1 )
    return 1;
  v9 = v8 & 0xFFFFFFFFFFFFFFFELL;
  v10 = (unsigned __int64)v7 & 0xFFFFFFFFFFFFFFFELL;
  if ( *(_DWORD *)(*a1 + 12632) )
    return sub_1C3CD10(*a1, *(unsigned __int8 *)(a2 + 8), *(unsigned int *)(a2 + 12), v10, v9);
  if ( *(_QWORD *)(a2 + 16) != v10 )
    return sub_1C3CD10(*a1, *(unsigned __int8 *)(a2 + 8), *(unsigned int *)(a2 + 12), v10, v9);
  result = a2;
  if ( *(_QWORD *)(a2 + 24) != v9 )
    return sub_1C3CD10(*a1, *(unsigned __int8 *)(a2 + 8), *(unsigned int *)(a2 + 12), v10, v9);
  return result;
}
