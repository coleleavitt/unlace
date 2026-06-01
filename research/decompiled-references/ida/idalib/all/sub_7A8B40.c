__int64 __fastcall sub_7A8B40(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 265) )
    return set_qerrno(2012);
  if ( *(_DWORD *)a1 )
    return set_qerrno(2015);
  *(_DWORD *)a1 = 6;
  return 0;
}
