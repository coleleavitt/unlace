__int64 __fastcall sub_5E8100(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 746) & 0x20) == 0 )
    return set_qerrno(47);
  sub_5E8070(a1);
  return 0;
}
