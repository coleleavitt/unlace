/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: rangeset_t_lower_bound
// Address: 0x0008355C

//----- (0008355C) --------------------------------------------------------
int __fastcall rangeset_t_lower_bound(int *a1, unsigned int a2)
{
  int result; // r0
  int v4; // r2
  unsigned int v5; // r2
  unsigned int v6; // r4
  int v7; // r3

  result = *a1;
  v4 = 8 * a1[1];
  if ( v4 )
  {
    v5 = v4 >> 3;
    do
    {
      while ( 1 )
      {
        v6 = v5 >> 1;
        v7 = result + 8 * (v5 >> 1);
        if ( *(_DWORD *)(v7 + 4) <= a2 )
          break;
        v5 >>= 1;
        if ( !v6 )
          return result;
      }
      v5 += ~v6;
      result = v7 + 8;
    }
    while ( v5 );
  }
  return result;
}
