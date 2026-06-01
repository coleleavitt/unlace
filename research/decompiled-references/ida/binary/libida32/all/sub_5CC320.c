__int64 __fastcall sub_5CC320(__int64 a1, __int64 a2)
{
  if ( (*(_BYTE *)(a1 + 730) & 0x20) == 0 )
    return set_qerrno(47, a2);
  sub_5CC290(a1);
  return 0;
}

