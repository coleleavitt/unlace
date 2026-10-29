__int64 __fastcall sub_1CF9F60(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  __int64 *v4; // rax
  __int64 *v5; // r12
  unsigned __int16 *v6; // rax
  __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rax
  _WORD *v11; // r8
  __int64 result; // rax

  v4 = sub_1CF6590((__int64)a1, *(_QWORD *)(a2 + 24), a3, a4);
  if ( !v4 )
    return 1;
  v5 = v4;
  v6 = (unsigned __int16 *)sub_BFA3B0(a2);
  v10 = sub_1CE88F0(a1, v6, a3, a4, v7, v8, v9);
  if ( v10 == 1 )
    return 1;
  v11 = (_WORD *)(v10 & 0xFFFFFFFFFFFFFFFELL);
  if ( *(_DWORD *)(*a1 + 12632) )
    return sub_16B2590(*a1, *(_DWORD *)(a2 + 32), v5, *(_DWORD *)(a2 + 36), v11, a3, *(double *)a4.m128_u64);
  if ( v5 != *(__int64 **)(a2 + 24) )
    return sub_16B2590(*a1, *(_DWORD *)(a2 + 32), v5, *(_DWORD *)(a2 + 36), v11, a3, *(double *)a4.m128_u64);
  result = a2;
  if ( *(_WORD **)(a2 + 16) != v11 )
    return sub_16B2590(*a1, *(_DWORD *)(a2 + 32), v5, *(_DWORD *)(a2 + 36), v11, a3, *(double *)a4.m128_u64);
  return result;
}
