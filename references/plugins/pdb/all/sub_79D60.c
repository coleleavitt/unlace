bool __fastcall sub_79D60(__int64 a1, _DWORD *a2)
{
  _DWORD *v2; // rax
  bool result; // al
  __int64 v4; // rax

  v2 = a2;
  while ( !*v2 )
  {
    if ( a2 + 4 == ++v2 )
    {
      result = 0;
      if ( a2[5] == *(_DWORD *)(a1 + 92) )
        return a2[4] == *(_DWORD *)(a1 + 88);
      return result;
    }
  }
  if ( a2[5] == *(_DWORD *)(a1 + 92) )
  {
    v4 = 0;
    while ( a2[v4] == *(_DWORD *)(a1 + v4 * 4 + 72) )
    {
      if ( ++v4 == 4 )
        return 1;
    }
  }
  return 0;
}
