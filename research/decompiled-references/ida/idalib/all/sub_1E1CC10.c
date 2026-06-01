__int64 __fastcall sub_1E1CC10(
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
  __int64 v12; // r12
  __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r13
  __int64 v17; // rax
  unsigned __int64 v18; // r9
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // r8

  v7 = sub_1E11560(a1, *(unsigned __int16 **)(a2 + 24), a6, a7, a3, a4, a5);
  if ( v7 == 1 )
    return 1;
  v12 = v7;
  v16 = sub_1E11560(a1, *(unsigned __int16 **)(a2 + 32), a6, a7, v8, v9, v10);
  if ( v16 == 1 )
    return 1;
  v17 = sub_1E11560(a1, *(unsigned __int16 **)(a2 + 40), a6, a7, v13, v14, v15);
  if ( v17 == 1 )
    return 1;
  v18 = v17 & 0xFFFFFFFFFFFFFFFELL;
  v19 = v12 & 0xFFFFFFFFFFFFFFFELL;
  v20 = v16 & 0xFFFFFFFFFFFFFFFELL;
  if ( *(_DWORD *)(*a1 + 12632) )
    return sub_1923BC0(*a1, *(_DWORD *)(a2 + 16), *(unsigned int *)(a2 + 20), v19, v20, v18, a6, a7);
  if ( *(_QWORD *)(a2 + 24) != v19 )
    return sub_1923BC0(*a1, *(_DWORD *)(a2 + 16), *(unsigned int *)(a2 + 20), v19, v20, v18, a6, a7);
  if ( *(_QWORD *)(a2 + 32) != v20 )
    return sub_1923BC0(*a1, *(_DWORD *)(a2 + 16), *(unsigned int *)(a2 + 20), v19, v20, v18, a6, a7);
  result = a2;
  if ( *(_QWORD *)(a2 + 40) != v18 )
    return sub_1923BC0(*a1, *(_DWORD *)(a2 + 16), *(unsigned int *)(a2 + 20), v19, v20, v18, a6, a7);
  return result;
}
