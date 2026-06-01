__int64 __fastcall set_lzero(__int64 a1, char a2)
{
  int v2; // esi

  v2 = a2 & 0xF;
  if ( v2 )
  {
    if ( v2 == 15 )
    {
      set_abits(a1, 0x10000);
      a1 = (unsigned int)a1;
    }
    set_abits(a1, 0x20000);
    return 1;
  }
  else
  {
    set_abits(a1, 0x10000);
    return 1;
  }
}

