/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80CA2F0
// Address: 0x080CA2F0

//----- (080CA2F0) --------------------------------------------------------
unsigned int __cdecl sub_80CA2F0(_WORD *a1)
{
  unsigned int result; // eax
  _WORD *v2; // edx

  result = 1;
  if ( (~a1[7] & 0x7FFF) == 0 )
  {
    v2 = a1 + 6;
    result = 2;
    if ( (a1[6] & 0x7FFF) == 0 )
    {
      while ( !*--v2 )
      {
        if ( a1 == v2 )
          return ((unsigned int)(__int16)a1[7] >> 31) + 3;
      }
      return 2;
    }
  }
  return result;
}
