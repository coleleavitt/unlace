/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6C4D0
// Address: 0x0006C4D0

//----- (0006C4D0) --------------------------------------------------------
unsigned int __fastcall sub_6C4D0(int a1, int a2, unsigned int a3, unsigned int a4)
{
  unsigned int v5; // r4
  unsigned int v6; // r0
  int v7; // r1
  bool v8; // zf
  int v9; // r0
  char v10; // r4

  if ( a4 >= 0x20 )
    a4 = 32;
  if ( a3 + a4 <= 0x20 )
    v5 = a3;
  else
    v5 = 32 - a4;
  if ( v5 > 1 )
  {
    v6 = a2;
    if ( a2 < 0 )
      v6 = a2 + v5;
    v7 = v6 % v5;
    if ( v6 % v5 )
    {
      v8 = v5 == 32;
      if ( v5 == 32 )
        v9 = -1;
      else
        v9 = 1;
      if ( v5 != 32 )
        v9 <<= v5;
      v10 = v5 - v7;
      if ( !v8 )
        --v9;
      return a1 & ~(v9 << a4)
           | ((((((a1 & (unsigned int)(v9 << a4)) >> a4) & ((1 << v10) - 1)) << v7)
             | (((v9 ^ ((1 << v10) - 1)) & ((a1 & (unsigned int)(v9 << a4)) >> a4)) >> v10)) << a4);
    }
  }
  return a1;
}
