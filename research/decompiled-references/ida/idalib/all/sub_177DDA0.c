__int64 __fastcall sub_177DDA0(__int64 *a1, __int64 a2, double a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
  __int64 v7; // rax
  __int64 result; // rax
  __int64 v9; // r12
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r13
  __int64 v14; // rax
  unsigned __int64 v15; // r12
  unsigned __int64 v16; // r14
  unsigned __int64 v17; // rcx

  v7 = sub_177B9C0(a1, *(unsigned __int16 **)(a2 + 8), 1, a3, a5, a6, a7);
  if ( v7 == 1 )
    return 1;
  v9 = v7;
  v13 = sub_175B800(a1, *(unsigned __int16 **)(a2 + 16));
  if ( v13 == 1 )
    return 1;
  v14 = sub_177B9C0(a1, *(unsigned __int16 **)(a2 + 24), 0, a3, v10, v11, v12);
  if ( v14 == 1 )
    return 1;
  v15 = v9 & 0xFFFFFFFFFFFFFFFELL;
  v16 = v14 & 0xFFFFFFFFFFFFFFFELL;
  v17 = v13 & 0xFFFFFFFFFFFFFFFELL;
  if ( *(_DWORD *)(*a1 + 12632)
    || *(_QWORD *)(a2 + 8) != v15
    || *(_QWORD *)(a2 + 16) != v17
    || (result = a2, *(_QWORD *)(a2 + 24) != v16) )
  {
    result = sub_1A89A90(*(_QWORD *)(*a1 + 736), *(unsigned int *)(a2 + 32), v15, v17, *(unsigned int *)(a2 + 36));
    if ( result != 1 )
      return sub_1A86060(*(_QWORD *)(*a1 + 736), result & 0xFFFFFFFFFFFFFFFELL, v16);
  }
  return result;
}
