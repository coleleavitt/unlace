__int64 __fastcall clr_lzero(void *a1, char a2)
{
  int v2; // esi

  v2 = a2 & 0xF;
  if ( v2 )
  {
    if ( v2 == 15 )
      clr_abits(a1, (int)&stru_10000);
    clr_abits(a1, (int)&stru_20000);
    return 1;
  }
  else
  {
    clr_abits(a1, (int)&stru_10000);
    return 1;
  }
}
