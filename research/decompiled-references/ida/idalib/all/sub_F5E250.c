char __fastcall sub_F5E250(__int64 a1)
{
  unsigned __int16 v1; // ax

  v1 = *(_WORD *)(a1 + 18) >> 3;
  if ( v1 <= 0x28u )
  {
    if ( v1 < 0x26u && v1 )
      return ((v1 + 8168) & 0x1FFFu) < 2;
  }
  else if ( v1 != 72 && v1 != 89 )
  {
    return v1 == 67;
  }
  return 1;
}
