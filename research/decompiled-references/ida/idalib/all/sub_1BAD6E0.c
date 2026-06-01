__int64 __fastcall sub_1BAD6E0(
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
  __int64 v12; // rbp
  __int64 v13; // rax
  _QWORD *v14; // rcx
  _QWORD *v15; // rdx

  v7 = sub_1B73BE0(a1, *(_QWORD *)(a2 + 24), a3, a6, a7, a4, a5);
  if ( v7 == 1 )
    return 1;
  v12 = v7;
  v13 = sub_1B73BE0(a1, *(_QWORD *)(a2 + 32), v8, a6, a7, v9, v10);
  if ( v13 == 1 )
    return 1;
  v14 = (_QWORD *)(v13 & 0xFFFFFFFFFFFFFFFELL);
  v15 = (_QWORD *)(v12 & 0xFFFFFFFFFFFFFFFELL);
  if ( *(_DWORD *)(*a1 + 12632) )
    return sub_19CFAC0(
             *(__int64 **)(*a1 + 736),
             *(_DWORD *)(a2 + 16),
             v15,
             v14,
             *(_QWORD *)(a2 + 40),
             *(_QWORD *)(a2 + 48),
             a6,
             a7);
  if ( *(_QWORD **)(a2 + 32) != v14 )
    return sub_19CFAC0(
             *(__int64 **)(*a1 + 736),
             *(_DWORD *)(a2 + 16),
             v15,
             v14,
             *(_QWORD *)(a2 + 40),
             *(_QWORD *)(a2 + 48),
             a6,
             a7);
  result = a2;
  if ( *(_QWORD **)(a2 + 24) != v15 )
    return sub_19CFAC0(
             *(__int64 **)(*a1 + 736),
             *(_DWORD *)(a2 + 16),
             v15,
             v14,
             *(_QWORD *)(a2 + 40),
             *(_QWORD *)(a2 + 48),
             a6,
             a7);
  return result;
}
