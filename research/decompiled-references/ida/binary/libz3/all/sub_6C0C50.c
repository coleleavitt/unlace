__int64 __fastcall sub_6C0C50(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rdx
  int v3; // eax
  unsigned int v4; // ecx
  __int64 v6; // rax
  _DWORD *v7; // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  _DWORD *v10; // rax

  v2 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
  if ( !v2 )
    return 1;
  v3 = v2[1];
  if ( v3 == 9 )
  {
    v4 = 1;
    if ( *(_WORD *)(a2 + 4) )
      return v4;
    if ( *v2 != 5 )
      return v4;
    if ( *(_DWORD *)(a2 + 24) != 2 )
      return v4;
    v8 = *(_QWORD *)(a2 + 32);
    v9 = *(_QWORD *)(a2 + 40);
    if ( !*(_WORD *)(v8 + 4) )
    {
      v10 = *(_DWORD **)(*(_QWORD *)(v8 + 16) + 24LL);
      if ( v10 )
      {
        if ( *v10 == 5 )
        {
          v4 = 0;
          if ( !v10[1] )
            return v4;
        }
      }
    }
    v4 = 1;
    if ( *(_WORD *)(v9 + 4) )
      return v4;
    v7 = *(_DWORD **)(*(_QWORD *)(v9 + 16) + 24LL);
    if ( !v7 )
      return v4;
  }
  else
  {
    if ( v3 <= 9 )
    {
      v4 = 0;
      if ( v3 )
        LOBYTE(v4) = (unsigned int)(v3 - 2) > 6;
      return v4;
    }
    v4 = 1;
    if ( v3 != 16 )
      return v4;
    v6 = *(_QWORD *)(a2 + 40);
    if ( *(_WORD *)(v6 + 4) )
      return v4;
    v7 = *(_DWORD **)(*(_QWORD *)(v6 + 16) + 24LL);
    if ( !v7 )
      return v4;
  }
  if ( *v7 == 5 )
    LOBYTE(v4) = v7[1] != 0;
  return v4;
}

