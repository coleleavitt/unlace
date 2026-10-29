/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9A658
// Address: 0x0009A658

//----- (0009A658) --------------------------------------------------------
int __fastcall sub_9A658(unsigned int a1, unsigned int a2)
{
  int v2; // r12
  unsigned int v3; // r3
  int v4; // r2
  int result; // r0

  v2 = a1 ^ a2;
  v3 = 1;
  v4 = 0;
  if ( (a2 & 0x80000000) != 0 )
    a2 = -a2;
  if ( (a1 & 0x80000000) != 0 )
    a1 = -a1;
  if ( a1 >= a2 )
  {
    while ( a2 < 0x10000000 && a2 < a1 )
    {
      a2 *= 16;
      v3 *= 16;
    }
    while ( a2 < 0x80000000 && a2 < a1 )
    {
      a2 *= 2;
      v3 *= 2;
    }
    while ( 1 )
    {
      if ( a1 >= a2 )
      {
        a1 -= a2;
        v4 |= v3;
      }
      if ( a1 >= a2 >> 1 )
      {
        a1 -= a2 >> 1;
        v4 |= v3 >> 1;
      }
      if ( a1 >= a2 >> 2 )
      {
        a1 -= a2 >> 2;
        v4 |= v3 >> 2;
      }
      if ( a1 >= a2 >> 3 )
      {
        a1 -= a2 >> 3;
        v4 |= v3 >> 3;
      }
      if ( !a1 )
        break;
      v3 >>= 4;
      if ( !v3 )
        break;
      a2 >>= 4;
    }
  }
  result = v4;
  if ( v2 < 0 )
    return -v4;
  return result;
}
