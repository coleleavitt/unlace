__int64 __fastcall sub_199A980(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  unsigned __int64 v4; // rax
  __int64 result; // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r12
  __int64 v10; // rax
  unsigned __int64 v11; // rcx

  v4 = sub_190CCA0(a1, *(unsigned __int16 **)(a2 + 16), *(double *)a3.m128_u64, a4);
  if ( v4 == 1 )
    return 1;
  v9 = sub_1A89000(*(_QWORD *)(*a1 + 736), *(unsigned int *)(a2 + 8), v4 & 0xFFFFFFFFFFFFFFFELL);
  if ( v9 == 1 )
    return 1;
  v10 = sub_1998500(a1, *(unsigned __int16 **)(a2 + 24), 0, a3, a4, v6, v7, v8);
  if ( v10 == 1 )
    return 1;
  v11 = v10 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v9 & 0xFFFFFFFFFFFFFFFELL) != *(_QWORD *)(a2 + 16) )
    return sub_1A861A0(*(_QWORD *)(*a1 + 736), *(unsigned int *)(a2 + 8), v9 & 0xFFFFFFFFFFFFFFFELL, v11);
  result = a2;
  if ( *(_QWORD *)(a2 + 24) != v11 )
    return sub_1A861A0(*(_QWORD *)(*a1 + 736), *(unsigned int *)(a2 + 8), v9 & 0xFFFFFFFFFFFFFFFELL, v11);
  return result;
}
