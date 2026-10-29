__int64 __fastcall sub_198BB70(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  __int64 *v4; // rax
  __int64 *v5; // r12
  unsigned __int16 *v6; // rax
  unsigned __int64 v7; // rax
  _WORD *v8; // r8
  __int64 result; // rax

  v4 = sub_1988430(a1, *(_QWORD *)(a2 + 24), a3, a4);
  if ( !v4 )
    return 1;
  v5 = v4;
  v6 = (unsigned __int16 *)sub_BFA3B0(a2);
  v7 = sub_190CCA0(a1, v6, *(double *)a3.m128_u64, a4);
  if ( v7 == 1 )
    return 1;
  v8 = (_WORD *)(v7 & 0xFFFFFFFFFFFFFFFELL);
  if ( v5 != *(__int64 **)(a2 + 24) )
    return sub_16B2590(*a1, *(_DWORD *)(a2 + 32), v5, *(_DWORD *)(a2 + 36), v8, a3, *(double *)a4.m128_u64);
  result = a2;
  if ( *(_WORD **)(a2 + 16) != v8 )
    return sub_16B2590(*a1, *(_DWORD *)(a2 + 32), v5, *(_DWORD *)(a2 + 36), v8, a3, *(double *)a4.m128_u64);
  return result;
}
