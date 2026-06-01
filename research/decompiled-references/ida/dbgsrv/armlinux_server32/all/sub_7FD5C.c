/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7FD5C
// Address: 0x0007FD5C

//----- (0007FD5C) --------------------------------------------------------
int __fastcall sub_7FD5C(unsigned int a1, int a2, int a3)
{
  int v5; // r6
  unsigned int v6; // r0
  unsigned int v7; // r3
  bool v8; // zf
  unsigned int v9; // r5
  int v10; // r2

  v5 = 0;
  v6 = sub_7F9F0(a3);
  v7 = 0x80000000;
  while ( 1 )
  {
    v8 = (v6 & v7) == 0;
    v9 = v7 - 1;
    v10 = a1 & 1;
    v7 >>= 1;
    if ( !v8 )
    {
      v5 ^= a1;
      if ( (v9 & v6) == 0 )
        break;
    }
    a1 >>= 1;
    if ( v10 )
      a1 ^= 0xEDB88320;
  }
  return a2 ^ v5;
}
