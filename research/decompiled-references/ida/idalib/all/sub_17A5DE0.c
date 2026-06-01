__int64 __fastcall sub_17A5DE0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  if ( !a2 )
    return a2;
  v2 = sub_B8BF30(a2);
  if ( v2 )
  {
    *(_BYTE *)(v2 + 84) |= 0x20u;
    return a2;
  }
  if ( (*(_BYTE *)(a2 + 28) & 0x7F) != 0x12 )
    return a2;
  *(_BYTE *)(a2 + 60) |= 0x20u;
  return a2;
}
