__int64 __fastcall sub_1963F60(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  __int64 v4; // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r12
  __int64 v10; // rax

  v4 = sub_1944E10(a1, *(unsigned __int16 **)(a2 + 16), a3, a4);
  if ( v4 == 1 )
    return 1;
  v9 = sub_1A89000(*(_QWORD *)(*a1 + 736), *(unsigned int *)(a2 + 8), v4 & 0xFFFFFFFFFFFFFFFELL);
  if ( v9 == 1 )
    return 1;
  v10 = sub_1961D20(a1, *(unsigned __int16 **)(a2 + 24), 0, a3, a4, v6, v7, v8);
  if ( v10 == 1 )
    return 1;
  else
    return sub_1A861A0(
             *(_QWORD *)(*a1 + 736),
             *(unsigned int *)(a2 + 8),
             v9 & 0xFFFFFFFFFFFFFFFELL,
             v10 & 0xFFFFFFFFFFFFFFFELL);
}
