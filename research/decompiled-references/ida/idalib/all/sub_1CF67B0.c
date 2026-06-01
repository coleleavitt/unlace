__int64 __fastcall sub_1CF67B0(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  _QWORD *v4; // rax
  __int64 v5; // rdx
  unsigned __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r12
  __int64 v9; // rax
  __int64 v10; // r9
  _QWORD *v11; // rdx
  __int64 result; // rax

  v4 = sub_1CF6590((__int64)a1, *(_QWORD *)(a2 + 24) & 0xFFFFFFFFFFFFFFF8LL, a3, a4);
  if ( !v4 )
    return 1;
  v8 = (__int64)v4;
  v9 = sub_1CE88F0(a1, *(unsigned __int16 **)(a2 + 16), a3, a4, v5, v6, v7);
  if ( v9 == 1 )
    return 1;
  v11 = (_QWORD *)(v9 & 0xFFFFFFFFFFFFFFFELL);
  if ( *(_DWORD *)(*a1 + 12632) )
    return sub_191BDF0((__int64 *)*a1, *(unsigned int *)(a2 + 32), v11, v8, *(unsigned int *)(a2 + 36), v10, a3, a4);
  if ( v8 != (*(_QWORD *)(a2 + 24) & 0xFFFFFFFFFFFFFFF8LL) )
    return sub_191BDF0((__int64 *)*a1, *(unsigned int *)(a2 + 32), v11, v8, *(unsigned int *)(a2 + 36), v10, a3, a4);
  result = a2;
  if ( *(_QWORD **)(a2 + 16) != v11 )
    return sub_191BDF0((__int64 *)*a1, *(unsigned int *)(a2 + 32), v11, v8, *(unsigned int *)(a2 + 36), v10, a3, a4);
  return result;
}
