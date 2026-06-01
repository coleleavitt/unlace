__int64 __fastcall sub_1D9DF20(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  __int64 *v4; // rax
  __int64 v5; // rdx
  unsigned __int64 v6; // rcx
  __int64 v7; // r8
  __int64 *v8; // r12
  __int64 v9; // rax
  _QWORD *v10; // r9
  __int64 result; // rax

  v4 = sub_1D99A60(a1, *(_QWORD *)(a2 + 24), a3, a4);
  if ( !v4 )
    return 1;
  v8 = v4;
  v9 = sub_1D8B300(a1, *(unsigned __int16 **)(a2 + 16), a3, a4, v5, v6, v7);
  if ( v9 == 1 )
    return 1;
  v10 = (_QWORD *)(v9 & 0xFFFFFFFFFFFFFFFELL);
  if ( *(_DWORD *)(*a1 + 12632) )
    return sub_19DD340(
             *(__int64 **)(*a1 + 736),
             *(_DWORD *)(a2 + 32),
             *(_BYTE *)(a2 + 40) & 3,
             *(_DWORD *)(a2 + 36),
             v8,
             v10,
             a3,
             a4);
  if ( v8 != *(__int64 **)(a2 + 24) )
    return sub_19DD340(
             *(__int64 **)(*a1 + 736),
             *(_DWORD *)(a2 + 32),
             *(_BYTE *)(a2 + 40) & 3,
             *(_DWORD *)(a2 + 36),
             v8,
             v10,
             a3,
             a4);
  result = a2;
  if ( *(_QWORD **)(a2 + 16) != v10 )
    return sub_19DD340(
             *(__int64 **)(*a1 + 736),
             *(_DWORD *)(a2 + 32),
             *(_BYTE *)(a2 + 40) & 3,
             *(_DWORD *)(a2 + 36),
             v8,
             v10,
             a3,
             a4);
  return result;
}
