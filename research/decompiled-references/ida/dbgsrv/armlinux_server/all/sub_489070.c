/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_489070
// Address: 0x0000000000489070

//----- (0000000000489070) ----------------------------------------------------
__int64 __fastcall sub_489070(__int64 a1)
{
  __int64 v1; // x2
  unsigned int v2; // w1
  __int64 v4; // x1
  int v5; // t1

  v1 = *(unsigned __int16 *)(a1 + 14);
  if ( (~v1 & 0x7FFF) != 0 )
  {
    return 1;
  }
  else
  {
    v2 = 2;
    if ( (*(_WORD *)(a1 + 12) & 0x7FFF) == 0 )
    {
      v4 = a1 + 12;
      while ( 1 )
      {
        v5 = *(unsigned __int16 *)(v4 - 2);
        v4 -= 2;
        if ( v5 )
          break;
        if ( a1 == v4 )
          return ((unsigned int)v1 >> 15) + 3;
      }
      return 2;
    }
  }
  return v2;
}
