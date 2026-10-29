__int64 __fastcall sub_FE21F0(__int64 a1, __int64 a2)
{
  if ( a2 != 6 )
  {
    if ( a2 == 7 )
    {
      if ( *(_DWORD *)a1 == 1953396082 && *(_WORD *)(a1 + 4) == 28009 && *(_BYTE *)(a1 + 6) == 101 )
        return 1;
    }
    else if ( a2 == 5 && *(_DWORD *)a1 == 1702258030 && *(_BYTE *)(a1 + 4) == 114 )
    {
      return 0;
    }
    return 3;
  }
  if ( *(_DWORD *)a1 != 1635216481 || *(_WORD *)(a1 + 4) != 29561 )
    return 3;
  return 2;
}

