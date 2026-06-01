bool __fastcall sub_98A840(__int64 a1, __int64 a2, __int64 a3)
{
  bool result; // al
  __int64 v4; // rcx
  _DWORD *v5; // rax
  _DWORD *v6; // rdx
  int v7; // esi

  result = 0;
  if ( !*(_WORD *)(a3 + 4) )
  {
    while ( 1 )
    {
      v4 = *(_QWORD *)(a3 + 16);
      v5 = *(_DWORD **)(v4 + 24);
      if ( !v5 )
        break;
      if ( *v5 != 5 )
        break;
      v7 = v5[1];
      if ( v7 != 8 && v7 != 18 && v7 != 19 )
        break;
      a3 = *(_QWORD *)(a3 + 32);
      if ( *(_WORD *)(a3 + 4) )
        return 0;
    }
    v6 = *(_DWORD **)(v4 + 24);
    result = 0;
    if ( v6 )
    {
      if ( *v6 == 5 )
        return v6[1] == 0;
    }
  }
  return result;
}

