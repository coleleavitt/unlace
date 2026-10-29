_DWORD *__fastcall sub_490FE0(__int64 a1)
{
  _DWORD *result; // rax
  int v2; // edx
  bool v3; // zf
  int v4; // eax
  __int64 v5; // rdx
  int v6; // ecx
  int v7; // eax

  result = nullptr;
  if ( *(_WORD *)(a1 + 4) )
    return result;
  while ( 1 )
  {
    v2 = *(_DWORD *)(a1 + 24);
    result = *(_DWORD **)(*(_QWORD *)(a1 + 16) + 24LL);
    if ( !v2 )
    {
      if ( !result )
        return (_DWORD *)a1;
      v3 = *result == -1;
      result = nullptr;
      if ( v3 )
        return (_DWORD *)a1;
      return result;
    }
    if ( !result )
      return result;
    if ( *result != 5 )
      return nullptr;
    v4 = result[1];
    if ( v4 != 6 )
      break;
    a1 = *(_QWORD *)(a1 + 32);
LABEL_26:
    if ( *(_WORD *)(a1 + 4) )
      return nullptr;
  }
  if ( v4 != 9 )
    return nullptr;
  if ( v2 != 2 )
    return nullptr;
  v5 = *(_QWORD *)(a1 + 40);
  if ( *(_WORD *)(v5 + 4) )
    return nullptr;
  v6 = *(_DWORD *)(v5 + 24);
  result = *(_DWORD **)(*(_QWORD *)(v5 + 16) + 24LL);
  if ( v6 )
  {
    if ( !result )
      return result;
    if ( *result != 5 )
      return nullptr;
    v7 = result[1];
    if ( v7 == 6 )
    {
      a1 = *(_QWORD *)(v5 + 32);
    }
    else
    {
      if ( v7 != 9 || v6 != 2 )
        return nullptr;
      a1 = *(_QWORD *)(v5 + 40);
    }
    goto LABEL_26;
  }
  if ( !result )
    return *(_DWORD **)(a1 + 40);
  v3 = *result == -1;
  result = nullptr;
  if ( v3 )
    return *(_DWORD **)(a1 + 40);
  return result;
}

