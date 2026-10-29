/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46848E
// Address: 0x0046848E

//----- (0046848E) --------------------------------------------------------
char __cdecl sub_46848E(char a1, unsigned __int64 a2)
{
  if ( (a1 & 4) != 0 )
    return 1;
  if ( (a1 & 1) != 0 )
  {
    if ( (a1 & 2) != 0 )
    {
      if ( a2 > 0x8000000000000000uLL )
        return 1;
    }
    else if ( HIDWORD(a2) > 0x7FFFFFFF )
    {
      return 1;
    }
  }
  return 0;
}
