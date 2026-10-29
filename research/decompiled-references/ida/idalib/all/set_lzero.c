__int64 __fastcall set_lzero(__int64 a1, char a2)
{
  int v2; // esi

  v2 = a2 & 0xF;
  if ( v2 )
  {
    if ( v2 == 15 )
      set_abits(a1, &stru_10000);
    set_abits(a1, &stru_20000);
    return 1;
  }
  else
  {
    set_abits(a1, &stru_10000);
    return 1;
  }
}
