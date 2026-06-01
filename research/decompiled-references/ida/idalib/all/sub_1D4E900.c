__int64 __fastcall sub_1D4E900(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __m128 a6,
        __m128 a7)
{
  __int64 v7; // rax
  __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  __int64 v10; // r8
  __int64 result; // rax
  __int64 v12; // rbp
  __int64 v13; // rax
  unsigned __int64 v14; // r9
  unsigned __int64 v15; // rcx

  v7 = sub_1D434A0(a1, *(unsigned __int16 **)(a2 + 24), a6, a7, a3, a4, a5);
  if ( v7 == 1 )
    return 1;
  v12 = v7;
  v13 = sub_1D434A0(a1, *(unsigned __int16 **)(a2 + 48), a6, a7, v8, v9, v10);
  if ( v13 == 1 )
    return 1;
  v14 = v13 & 0xFFFFFFFFFFFFFFFELL;
  v15 = v12 & 0xFFFFFFFFFFFFFFFELL;
  if ( *(_DWORD *)(*a1 + 12632) )
    return sub_1923BC0(*a1, *(_DWORD *)(a2 + 16), *(unsigned int *)(a2 + 20), v15, 0, v14, a6, a7);
  if ( *(_QWORD *)(a2 + 24) != v15 )
    return sub_1923BC0(*a1, *(_DWORD *)(a2 + 16), *(unsigned int *)(a2 + 20), v15, 0, v14, a6, a7);
  result = a2;
  if ( *(_QWORD *)(a2 + 48) != v14 )
    return sub_1923BC0(*a1, *(_DWORD *)(a2 + 16), *(unsigned int *)(a2 + 20), v15, 0, v14, a6, a7);
  return result;
}
