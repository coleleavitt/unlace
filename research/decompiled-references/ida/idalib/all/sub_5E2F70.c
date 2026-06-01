__int64 __fastcall sub_5E2F70(__int64 a1)
{
  if ( *(_DWORD *)(a1 + 220) == 2 )
  {
    if ( (unsigned int)set_qerrno(63) )
      return 0xFFFFFFFFLL;
  }
  else
  {
    *(_DWORD *)(a1 + 220) = 1;
  }
  if ( *(_DWORD *)(a1 + 216) )
    return set_qerrno(66);
  *(_DWORD *)(a1 + 216) = 2;
  return 0;
}
