/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9A5C4
// Address: 0x0009A5C4

//----- (0009A5C4) --------------------------------------------------------
int __fastcall sub_9A5C4(unsigned int a1, unsigned int a2)
{
  unsigned int v2; // r3
  int v3; // r2

  v2 = 1;
  v3 = 0;
  if ( a1 >= a2 )
  {
    while ( a2 < 0x10000000 && a2 < a1 )
    {
      a2 *= 16;
      v2 *= 16;
    }
    while ( a2 < 0x80000000 && a2 < a1 )
    {
      a2 *= 2;
      v2 *= 2;
    }
    while ( 1 )
    {
      if ( a1 >= a2 )
      {
        a1 -= a2;
        v3 |= v2;
      }
      if ( a1 >= a2 >> 1 )
      {
        a1 -= a2 >> 1;
        v3 |= v2 >> 1;
      }
      if ( a1 >= a2 >> 2 )
      {
        a1 -= a2 >> 2;
        v3 |= v2 >> 2;
      }
      if ( a1 >= a2 >> 3 )
      {
        a1 -= a2 >> 3;
        v3 |= v2 >> 3;
      }
      if ( !a1 )
        break;
      v2 >>= 4;
      if ( !v2 )
        break;
      a2 >>= 4;
    }
  }
  return v3;
}
