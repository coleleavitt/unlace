__int64 __fastcall sub_1BAED10(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        __m128 a6,
        __m128 a7)
{
  __int64 v7; // rax
  unsigned __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 result; // rax
  __int64 v12; // r12
  unsigned __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r13
  __int64 v17; // rax
  unsigned __int64 v18; // r8
  _DWORD *v19; // rdx
  unsigned __int64 v20; // rcx

  v7 = sub_1B73BE0(a1, *(_QWORD *)(a2 + 16), a3, a6, a7, a4, a5);
  if ( v7 == 1 )
    return 1;
  v12 = v7;
  v16 = sub_1B73BE0(a1, *(_QWORD *)(a2 + 24), v8, a6, a7, v9, v10);
  if ( v16 == 1 )
    return 1;
  v17 = sub_1B73BE0(a1, *(_QWORD *)(a2 + 32), v13, a6, a7, v14, v15);
  if ( v17 == 1 )
    return 1;
  v18 = v17 & 0xFFFFFFFFFFFFFFFELL;
  v19 = (_DWORD *)(v12 & 0xFFFFFFFFFFFFFFFELL);
  v20 = v16 & 0xFFFFFFFFFFFFFFFELL;
  if ( *(_DWORD *)(*a1 + 12632) )
    return sub_1915C80((__int64 *)*a1, *(_DWORD *)(a2 + 40), v19, v20, v18, *(_DWORD *)(a2 + 44), a6, a7);
  if ( *(_DWORD **)(a2 + 16) != v19 )
    return sub_1915C80((__int64 *)*a1, *(_DWORD *)(a2 + 40), v19, v20, v18, *(_DWORD *)(a2 + 44), a6, a7);
  if ( *(_QWORD *)(a2 + 24) != v20 )
    return sub_1915C80((__int64 *)*a1, *(_DWORD *)(a2 + 40), v19, v20, v18, *(_DWORD *)(a2 + 44), a6, a7);
  result = a2;
  if ( *(_QWORD *)(a2 + 32) != v18 )
    return sub_1915C80((__int64 *)*a1, *(_DWORD *)(a2 + 40), v19, v20, v18, *(_DWORD *)(a2 + 44), a6, a7);
  return result;
}
