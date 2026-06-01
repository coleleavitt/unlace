__int64 __fastcall sub_177E0C0(__int64 *a1, __int64 a2, double a3)
{
  __int64 v3; // rax
  __int64 result; // rax
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r12
  __int64 v9; // rax
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx

  v3 = sub_175B800(a1, *(unsigned __int16 **)(a2 + 16));
  if ( v3 == 1 )
    return 1;
  v8 = sub_1A89000(*(_QWORD *)(*a1 + 736), *(unsigned int *)(a2 + 8), v3 & 0xFFFFFFFFFFFFFFFELL);
  if ( v8 == 1 )
    return 1;
  v9 = sub_177B9C0(a1, *(unsigned __int16 **)(a2 + 24), 0, a3, v5, v6, v7);
  if ( v9 == 1 )
    return 1;
  v10 = v9 & 0xFFFFFFFFFFFFFFFELL;
  v11 = v8 & 0xFFFFFFFFFFFFFFFELL;
  if ( *(_DWORD *)(*a1 + 12632) )
    return sub_1A861A0(*(_QWORD *)(*a1 + 736), *(unsigned int *)(a2 + 8), v11, v10);
  if ( *(_QWORD *)(a2 + 16) != v11 )
    return sub_1A861A0(*(_QWORD *)(*a1 + 736), *(unsigned int *)(a2 + 8), v11, v10);
  result = a2;
  if ( *(_QWORD *)(a2 + 24) != v10 )
    return sub_1A861A0(*(_QWORD *)(*a1 + 736), *(unsigned int *)(a2 + 8), v11, v10);
  return result;
}
