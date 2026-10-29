bool __fastcall sub_E63E60(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  _DWORD *v4; // rax

  if ( *(_WORD *)(a2 + 4) )
    return 1;
  v3 = a2;
  v4 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
  if ( !v4 )
    return 1;
  if ( *v4 )
    return *v4 != 0;
  if ( v4[1] == 8 && *(_DWORD *)(a2 + 24) == 1 )
  {
    v3 = *(_QWORD *)(a2 + 32);
    if ( *(_WORD *)(v3 + 4) )
      return 1;
    v4 = *(_DWORD **)(*(_QWORD *)(v3 + 16) + 24LL);
    if ( !v4 )
      return 1;
    if ( *v4 )
      return *v4 != 0;
  }
  if ( v4[1] != 2 )
    return *v4 != 0;
  if ( (unsigned __int8)sub_15D2CB0(*(_QWORD *)(a1 + 8), *(_QWORD *)(v3 + 32)) )
  {
    if ( !*(_WORD *)(v3 + 4) )
    {
      v4 = *(_DWORD **)(*(_QWORD *)(v3 + 16) + 24LL);
      if ( v4 )
        return *v4 != 0;
    }
  }
  return 1;
}

