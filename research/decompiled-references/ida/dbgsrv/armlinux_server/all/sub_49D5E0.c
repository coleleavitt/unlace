/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_49D5E0
// Address: 0x000000000049D5E0

//----- (000000000049D5E0) ----------------------------------------------------
__int64 __fastcall sub_49D5E0(unsigned int a1, unsigned int a2, int a3)
{
  int v3; // w6
  unsigned int i; // w3

  v3 = 0;
  for ( i = 0x80000000; ; i >>= 1 )
  {
    if ( (a3 & i) != 0 )
    {
      v3 ^= a1;
      if ( ((i - 1) & a3) == 0 )
        break;
    }
    a1 = ((int)(a1 << 31) >> 31) & 0xEDB88320 ^ (a1 >> 1);
  }
  return v3 ^ a2;
}
