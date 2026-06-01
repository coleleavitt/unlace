/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_85698
// Address: 0x00085698

//----- (00085698) --------------------------------------------------------
int __fastcall sub_85698(unsigned int a1, int a2, int a3)
{
  unsigned int v4; // r4
  int v5; // r0
  unsigned int v6; // r6

  v4 = 0x80000000;
  v5 = 0;
  if ( a3 < 0 )
    goto LABEL_4;
  do
  {
    do
    {
      v6 = a1 >> 1;
      if ( a1 << 31 )
        v6 = (a1 >> 1) ^ 0xEDB88320;
      v4 >>= 1;
      a1 = v6;
    }
    while ( (v4 & a3) == 0 );
LABEL_4:
    v5 ^= a1;
  }
  while ( ((v4 - 1) & a3) != 0 );
  return v5 ^ a2;
}
