__int64 __fastcall sub_1B13100(__int64 a1, _WORD *a2, __m128 a3)
{
  unsigned __int16 v3; // ax

  v3 = *a2 & 0x1FF;
  if ( v3 <= 0x75u )
  {
    if ( v3 == 4 )
      return sub_1B13160();
  }
  else if ( v3 <= 0x77u )
  {
    return sub_1B13160();
  }
  if ( v3 != 71 )
  {
    if ( v3 > 0x47u )
    {
      if ( v3 <= 0x100u )
        return sub_1B13160();
    }
    else if ( v3 )
    {
      return sub_1B13160();
    }
    BUG();
  }
  return sub_1B12F10(a1, (unsigned __int64)a2, a3);
}
