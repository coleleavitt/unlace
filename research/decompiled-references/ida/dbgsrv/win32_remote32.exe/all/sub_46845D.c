/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46845D
// Address: 0x0046845D

//----- (0046845D) --------------------------------------------------------
char __cdecl sub_46845D(char a1, unsigned int a2)
{
  if ( (a1 & 4) != 0 )
    return 1;
  if ( (a1 & 1) != 0 )
  {
    if ( (a1 & 2) != 0 )
    {
      if ( a2 > 0x80000000 )
        return 1;
    }
    else if ( a2 > 0x7FFFFFFF )
    {
      return 1;
    }
  }
  return 0;
}
