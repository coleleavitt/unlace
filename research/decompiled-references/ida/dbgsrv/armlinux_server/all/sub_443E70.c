/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_443E70
// Address: 0x0000000000443E70

//----- (0000000000443E70) ----------------------------------------------------
__int64 __fastcall sub_443E70(_BYTE *a1)
{
  int v1; // w1
  char v2; // w1
  int v3; // t1
  unsigned int v4; // w2

  v1 = (unsigned __int8)*a1;
  if ( !*a1 )
    return 1;
  if ( (v1 & 0x80) == 0 && (unsigned int)(v1 - 48) <= 9 )
  {
    while ( 1 )
    {
      v3 = (unsigned __int8)*++a1;
      v2 = v3;
      v4 = v3 - 48;
      if ( !v3 )
        break;
      if ( v2 < 0 || v4 > 9 )
        return 0;
    }
    return 1;
  }
  return 0;
}
