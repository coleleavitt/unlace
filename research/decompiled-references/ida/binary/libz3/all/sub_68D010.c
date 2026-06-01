bool __fastcall sub_68D010(__int64 a1)
{
  bool result; // al
  int v2; // ecx
  _DWORD *v3; // rdx
  __int64 v4; // rdx
  _DWORD *v5; // rax

  result = 0;
  if ( !*(_WORD *)(a1 + 4) )
  {
    v2 = *(_DWORD *)(a1 + 24);
    v3 = *(_DWORD **)(*(_QWORD *)(a1 + 16) + 24LL);
    if ( !v2 )
    {
      if ( v3 )
        return *v3 == -1;
      return 1;
    }
    if ( v3 )
    {
      if ( !*v3 && v3[1] == 8 && v2 == 1 )
      {
        v4 = *(_QWORD *)(a1 + 32);
        if ( !*(_WORD *)(v4 + 4) && !*(_DWORD *)(v4 + 24) )
        {
          v5 = *(_DWORD **)(*(_QWORD *)(v4 + 16) + 24LL);
          if ( v5 )
            return *v5 == -1;
          return 1;
        }
      }
    }
  }
  return result;
}

