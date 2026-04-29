__int64 __fastcall sub_52A0(__int64 a1, char a2)
{
  int v2; // esi

  v2 = a2 & 0x1F;
  if ( v2 > 26 )
    return 0;
  if ( LOBYTE((&off_278E0)[3 * v2 + 2]) == 48 )
    return 0;
  if ( v2 == 1 )
    getinf();
  return create_tinfo();
}
