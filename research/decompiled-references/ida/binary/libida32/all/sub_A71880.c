char __fastcall sub_A71880(_QWORD *a1, __int64 a2, __int64 a3)
{
  int v3; // ebp
  __int64 v5; // rbx
  char v6; // cl
  __int64 v7; // rdx
  char result; // al
  __int64 v9; // rsi

  v3 = *(_DWORD *)(a2 + 20) & 0x1FFFFFFF;
  if ( v3 != (*(_DWORD *)(a3 + 20) & 0x1FFFFFFF) )
    return 0;
  v5 = 0;
  if ( v3 )
  {
    while ( (unsigned __int8)sub_A716B0(a1, *(_QWORD *)(a2 + 8 * v5 + 24), *(_QWORD *)(a3 + 8 * v5 + 24)) )
    {
      if ( v3 == (_DWORD)++v5 )
        goto LABEL_3;
    }
    return 0;
  }
LABEL_3:
  v6 = *(_BYTE *)(a2 + 23) & 0x40;
  if ( (*(_BYTE *)(a3 + 23) & 0x40) != 0 )
  {
    v7 = *(_QWORD *)(a3 + 8LL * (*(_DWORD *)(a3 + 20) & 0x1FFFFFFF) + 24);
    result = v7 == 0;
    if ( !v6 )
      return result;
    v9 = *(_QWORD *)(a2 + 8LL * (*(_DWORD *)(a2 + 20) & 0x1FFFFFFF) + 24);
    if ( (v9 == 0) == result )
    {
      if ( v7 )
        return sub_A32C10((__int64)a1, v9, v7);
      else
        return 1;
    }
    return 0;
  }
  result = 1;
  if ( v6 && *(_QWORD *)(a2 + 8LL * (*(_DWORD *)(a2 + 20) & 0x1FFFFFFF) + 24) )
    return 0;
  return result;
}

