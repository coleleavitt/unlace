__int64 __fastcall sub_788810(__int64 a1, __int64 a2)
{
  if ( *(_BYTE *)(a1 + 265) )
    return set_qerrno(2012, a2);
  if ( *(_DWORD *)a1 )
    return set_qerrno(2015, a2);
  *(_DWORD *)a1 = 6;
  return 0;
}

