__int64 __fastcall sub_6B540(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v5; // r12
  int dword; // eax

  v5 = 0;
  while ( 1 )
  {
    dword = get_dword(a1);
    if ( *(_DWORD *)(a2 + 4 * v5) != dword )
      break;
LABEL_10:
    ++v5;
    a1 += 4;
    if ( v5 == a3 )
      return 1;
  }
  if ( a4 != -1 )
  {
    while ( 1 )
    {
      if ( (_DWORD)v5 == 2 )
      {
        if ( *(_DWORD *)(a2 + 12) != dword )
          return 0;
      }
      else if ( (_DWORD)v5 != 3 || *(_DWORD *)(a2 + 8) != dword )
      {
        return 0;
      }
      a1 += 4;
      ++v5;
      dword = get_dword(a1);
      if ( dword == *(_DWORD *)(a2 + 4 * v5) )
        goto LABEL_10;
    }
  }
  return 0;
}
