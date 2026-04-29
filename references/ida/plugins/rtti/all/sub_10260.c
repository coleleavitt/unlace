void __fastcall sub_10260(__int64 a1, _BYTE *a2)
{
  __int16 flags; // ax

  if ( a1 != -1 )
  {
    if ( a2 )
    {
      if ( *a2 )
      {
        flags = get_flags_ex();
        if ( (flags & 0x4000) == 0 || (flags & 0xC000) != 0x4000 )
          set_name();
      }
    }
  }
}
