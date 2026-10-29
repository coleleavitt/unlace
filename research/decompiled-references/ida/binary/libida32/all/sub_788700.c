__int64 __fastcall sub_788700(__int64 a1, __int64 a2)
{
  if ( (_DWORD)a2 == -1 )
    return set_qerrno(2003, a2);
  if ( *(_BYTE *)(a1 + 265) )
    return set_qerrno(2012, a2);
  if ( *(_DWORD *)a1 )
  {
    if ( *(_DWORD *)a1 == 2 )
    {
      *(_DWORD *)(a1 + 8) = a2 + 1;
      return 0;
    }
    else
    {
      return set_qerrno(2005, a2);
    }
  }
  else
  {
    *(_DWORD *)a1 = 1;
    *(_DWORD *)(a1 + 4) = a2;
    return 0;
  }
}

