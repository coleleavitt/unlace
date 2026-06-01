__int64 __fastcall sub_1BA5280(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  unsigned int *v5; // rax
  unsigned __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 result; // rax
  _WORD *v10; // rsi
  unsigned int *v11; // rbp
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // rcx

  v5 = sub_1B72420(a1, *(unsigned int **)(a2 + 16), a3, a4);
  if ( v5 == (unsigned int *)((char *)&dword_0 + 1) )
    return 1;
  v10 = *(_WORD **)(a2 + 24);
  v11 = v5;
  v12 = (*v10 & 0x1FF) == 0x89
      ? sub_1B72430(a1, (__int64)v10, a3, a4)
      : sub_1BA5220(a1, (__int64)v10, v6, v7, v8, a3, a4);
  if ( v12 == 1 )
    return 1;
  v13 = v12 & 0xFFFFFFFFFFFFFFFELL;
  v14 = (unsigned __int64)v11 & 0xFFFFFFFFFFFFFFFELL;
  if ( *(_DWORD *)(*a1 + 12632) )
    return sub_1C3CD10(*a1, *(unsigned __int8 *)(a2 + 8), *(unsigned int *)(a2 + 12), v14, v13);
  if ( *(_QWORD *)(a2 + 16) != v14 )
    return sub_1C3CD10(*a1, *(unsigned __int8 *)(a2 + 8), *(unsigned int *)(a2 + 12), v14, v13);
  result = a2;
  if ( *(_QWORD *)(a2 + 24) != v13 )
    return sub_1C3CD10(*a1, *(unsigned __int8 *)(a2 + 8), *(unsigned int *)(a2 + 12), v14, v13);
  return result;
}
