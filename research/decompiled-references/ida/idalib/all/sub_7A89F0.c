__int64 __fastcall sub_7A89F0(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 265) || *(_DWORD *)a1 == 2 )
    return set_qerrno(2001);
  if ( *(_DWORD *)a1 != 1 )
    return set_qerrno(2002);
  *(_DWORD *)a1 = 2;
  return 0;
}
