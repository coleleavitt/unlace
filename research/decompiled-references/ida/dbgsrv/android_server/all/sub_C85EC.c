/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_C85EC
// Address: 0x00000000000C85EC

//----- (00000000000C85EC) ----------------------------------------------------
unsigned __int64 __fastcall sub_C85EC(unsigned int a1, unsigned int a2, int a3)
{
  unsigned int v3; // w8
  unsigned int v4; // w9

  v3 = 0;
  v4 = 0x80000000;
  if ( a3 < 0 )
    goto LABEL_6;
  do
  {
    do
    {
      v4 >>= 1;
      if ( (a1 & 1) != 0 )
        a1 = (a1 >> 1) ^ 0xEDB88320;
      else
        a1 >>= 1;
    }
    while ( (v4 & a3) == 0 );
LABEL_6:
    v3 ^= a1;
  }
  while ( ((v4 - 1) & a3) != 0 );
  return a2 ^ (unsigned __int64)v3;
}
