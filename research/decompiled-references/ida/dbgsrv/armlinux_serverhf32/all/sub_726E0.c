/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_726E0
// Address: 0x000726E0

//----- (000726E0) --------------------------------------------------------
int __fastcall sub_726E0(int a1)
{
  int v2; // r2
  int v3; // t1

  if ( (*(_WORD *)(a1 + 14) & 0x7FFF) != 0x7FFF )
    return 1;
  if ( (*(_WORD *)(a1 + 12) & 0x7FFF) == 0 )
  {
    v2 = a1 + 12;
    while ( 1 )
    {
      v3 = *(unsigned __int16 *)(v2 - 2);
      v2 -= 2;
      if ( v3 )
        break;
      if ( a1 == v2 )
      {
        if ( (*(_WORD *)(a1 + 14) & 0x8000) != 0 )
          return 4;
        else
          return 3;
      }
    }
  }
  return 2;
}
