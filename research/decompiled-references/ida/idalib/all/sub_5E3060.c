__int64 __fastcall sub_5E3060(__int64 a1)
{
  if ( *(_DWORD *)(a1 + 216) )
    return set_qerrno(66);
  *(_DWORD *)(a1 + 216) = 4;
  return 0;
}
