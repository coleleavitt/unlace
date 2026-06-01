/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_855B8
// Address: 0x000855B8

//----- (000855B8) --------------------------------------------------------
unsigned int __fastcall sub_855B8(int a1)
{
  int v1; // r4
  unsigned int v2; // r3
  char v3; // r1
  int v4; // r6
  unsigned int v5; // r2
  unsigned int v6; // r7
  unsigned int v7; // r0

  v1 = a1;
  v2 = 0x80000000;
  if ( a1 )
  {
    v3 = 3;
    while ( !(v1 << 31) )
    {
LABEL_10:
      ++v3;
      v1 >>= 1;
      if ( !v1 )
        return v2;
    }
    v4 = dword_C7D7C[v3 & 0x1F];
    v5 = v2;
    v6 = 0x80000000;
    v2 = 0;
    if ( v4 < 0 )
      goto LABEL_7;
    while ( 1 )
    {
      do
      {
        v7 = v5 >> 1;
        if ( v5 << 31 )
          v7 = (v5 >> 1) ^ 0xEDB88320;
        v6 >>= 1;
        v5 = v7;
      }
      while ( (v6 & v4) == 0 );
LABEL_7:
      v2 ^= v5;
      if ( ((v6 - 1) & v4) == 0 )
        goto LABEL_10;
    }
  }
  return v2;
}
// C7D7C: using guessed type int dword_C7D7C[32];
