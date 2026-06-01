__int64 __fastcall sub_7A8A30(__int64 a1, int a2)
{
  if ( a2 == -1 )
    return set_qerrno(2003);
  if ( *(_BYTE *)(a1 + 265) )
    return set_qerrno(2012);
  if ( *(_DWORD *)a1 )
  {
    if ( *(_DWORD *)a1 == 2 )
    {
      *(_DWORD *)(a1 + 8) = a2 + 1;
      return 0;
    }
    else
    {
      return set_qerrno(2005);
    }
  }
  else
  {
    *(_DWORD *)a1 = 1;
    *(_DWORD *)(a1 + 4) = a2;
    return 0;
  }
}
