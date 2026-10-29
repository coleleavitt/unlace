/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4237C
// Address: 0x0004237C

//----- (0004237C) --------------------------------------------------------
int __fastcall sub_4237C(_BYTE *a1)
{
  int v1; // r2
  int v2; // r3
  int v3; // t1
  unsigned int v4; // r2

  v1 = (unsigned __int8)*a1;
  if ( !*a1 )
    return 1;
  if ( (v1 & 0xFFFFFF80) == 0 && (unsigned int)(v1 - 48) <= 9 )
  {
    while ( 1 )
    {
      v3 = (unsigned __int8)*++a1;
      v2 = v3;
      v4 = v3 - 48;
      if ( !v3 )
        break;
      if ( (v2 & 0xFFFFFF80) != 0 || v4 > 9 )
        return 0;
    }
    return 1;
  }
  return 0;
}
