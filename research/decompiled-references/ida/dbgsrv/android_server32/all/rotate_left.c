/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: rotate_left
// Address: 0x00072060

//----- (00072060) --------------------------------------------------------
unsigned int __fastcall rotate_left(unsigned int a1, int a2, unsigned int a3, unsigned int a4)
{
  int v4; // r5
  unsigned int v6; // r6
  unsigned int v7; // r0
  int v8; // r2

  v4 = a4;
  if ( a4 >= 0x20 )
    v4 = 32;
  v6 = 32 - v4;
  if ( v4 + a3 <= 0x20 )
    v6 = a3;
  if ( v6 >= 2 )
  {
    v7 = a2 + v6;
    if ( a2 >= 0 )
      v7 = a2;
    if ( v7 % v6 )
    {
      v8 = -1;
      if ( v6 != 32 )
        v8 = ~(-1 << v6);
      return a1 & ~(v8 << v4)
           | (((((~(-1 << (v6 - v7 % v6)) ^ v8) & (((v8 << v4) & a1) >> v4)) >> (v6 - v7 % v6))
             | (((((v8 << v4) & a1) >> v4) & ~(-1 << (v6 - v7 % v6))) << (v7 % v6))) << v4);
    }
  }
  return a1;
}
