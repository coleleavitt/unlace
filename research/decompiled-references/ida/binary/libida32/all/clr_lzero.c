__int64 __fastcall clr_lzero(__int64 a1, char a2)
{
  int v2; // esi

  v2 = a2 & 0xF;
  if ( v2 )
  {
    if ( v2 == 15 )
    {
      clr_abits(a1, 0x10000);
      a1 = (unsigned int)a1;
    }
    clr_abits(a1, 0x20000);
    return 1;
  }
  else
  {
    clr_abits(a1, 0x10000);
    return 1;
  }
}

