__int64 __fastcall sub_1D368A0(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 result; // rax
  unsigned int v4; // ebp
  __int64 v5; // r12
  unsigned int v6; // ebx
  bool v7; // cl
  char v8; // r13
  char v9; // al

  v2 = a1 + 8 * (3LL * *(unsigned int *)(a1 + 20) + 3);
  if ( (*(_DWORD *)v2 & 0x7FFFFFFF) != 9 )
    return 0;
  v4 = *(_DWORD *)(v2 + 4);
  v5 = a2 + 8 * (3LL * *(unsigned int *)(a2 + 20) + 3);
  v6 = *(_DWORD *)(v5 + 4);
  if ( !v4 )
  {
    if ( !v6 )
      return 0;
    v7 = sub_F1D570(*(_QWORD *)(v5 + 8) + 24LL * v6 - 24);
    return v7 & (unsigned __int8)(v4 < v6);
  }
  v8 = sub_F1D570(*(_QWORD *)(v2 + 8) + 24LL * v4 - 24);
  if ( v6 )
  {
    v9 = sub_F1D570(*(_QWORD *)(v5 + 8) + 24LL * *(unsigned int *)(v5 + 4) - 24);
    v7 = v9;
    if ( v4 == v6 && v8 == v9 )
      return 0;
  }
  else
  {
    v7 = 0;
  }
  if ( v4 <= v6 )
    return v7 & (unsigned __int8)(v4 < v6);
  result = 2;
  if ( !v8 )
    return v7 & (unsigned __int8)(v4 < v6);
  return result;
}
