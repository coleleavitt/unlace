__int64 __fastcall sub_1DD2110(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  _QWORD *v4; // rax
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r12
  unsigned __int16 *v10; // rax
  __int64 v11; // r9
  _QWORD *v12; // rdx
  __int64 result; // rax

  v4 = sub_1DD1930((__int64)a1, *(_QWORD *)(a2 + 24) & 0xFFFFFFFFFFFFFFF8LL, a3, a4);
  if ( !v4 )
    return 1;
  v9 = (__int64)v4;
  v10 = sub_1DC71F0(a1, *(_QWORD *)(a2 + 16), v5, v6, v7, v8, a3, a4);
  if ( v10 == (unsigned __int16 *)((char *)&dword_0 + 1) )
    return 1;
  v12 = (_QWORD *)((unsigned __int64)v10 & 0xFFFFFFFFFFFFFFFELL);
  if ( *(_DWORD *)(*a1 + 12632) )
    return sub_191BDF0((__int64 *)*a1, *(unsigned int *)(a2 + 32), v12, v9, *(unsigned int *)(a2 + 36), v11, a3, a4);
  if ( v9 != (*(_QWORD *)(a2 + 24) & 0xFFFFFFFFFFFFFFF8LL) )
    return sub_191BDF0((__int64 *)*a1, *(unsigned int *)(a2 + 32), v12, v9, *(unsigned int *)(a2 + 36), v11, a3, a4);
  result = a2;
  if ( *(_QWORD **)(a2 + 16) != v12 )
    return sub_191BDF0((__int64 *)*a1, *(unsigned int *)(a2 + 32), v12, v9, *(unsigned int *)(a2 + 36), v11, a3, a4);
  return result;
}
