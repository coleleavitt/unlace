__int64 __fastcall sub_1A42940(__int64 a1, __int64 a2)
{
  if ( !a2 )
    JUMPOUT(0x1A4291F);
  if ( (*(_QWORD *)(a2 + 8) & 6LL) != 0 )
    JUMPOUT(0x1A428D0);
  return 1;
}
