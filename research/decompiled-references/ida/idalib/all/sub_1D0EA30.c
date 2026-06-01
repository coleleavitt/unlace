__int64 __fastcall sub_1D0EA30(
        __int64 *a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v8; // rax
  __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  __int64 v11; // r8
  __int64 result; // rax
  __int64 v13; // r12
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r13
  __int64 v18; // rax
  unsigned __int64 v19; // r12
  unsigned __int64 v20; // r14
  _QWORD *v21; // rcx

  v8 = sub_1CE7590(a1, *(_WORD **)(a2 + 8), 1, a3, a4, a6, a7, a8);
  if ( v8 == 1 )
    return 1;
  v13 = v8;
  v17 = sub_1CE88F0(a1, *(unsigned __int16 **)(a2 + 16), a3, a4, v9, v10, v11);
  if ( v17 == 1 )
    return 1;
  v18 = sub_1CE7590(a1, *(_WORD **)(a2 + 24), 0, a3, a4, v14, v15, v16);
  if ( v18 == 1 )
    return 1;
  v19 = v13 & 0xFFFFFFFFFFFFFFFELL;
  v20 = v18 & 0xFFFFFFFFFFFFFFFELL;
  v21 = (_QWORD *)(v17 & 0xFFFFFFFFFFFFFFFELL);
  if ( *(_DWORD *)(*a1 + 12632)
    || *(_QWORD *)(a2 + 8) != v19
    || *(_QWORD **)(a2 + 16) != v21
    || (result = a2, *(_QWORD *)(a2 + 24) != v20) )
  {
    result = sub_1A89A90(*(__int64 **)(*a1 + 736), *(unsigned int *)(a2 + 32), v19, v21, *(_DWORD *)(a2 + 36), a3, a4);
    if ( result != 1 )
      return sub_1A86060(*(_QWORD *)(*a1 + 736), result & 0xFFFFFFFFFFFFFFFELL, v20);
  }
  return result;
}
