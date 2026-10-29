/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6FB86
// Address: 0x0006FB86

//----- (0006FB86) --------------------------------------------------------
FILE *__fastcall sub_6FB86(int a1)
{
  FILE *result; // r0

  result = *(FILE **)(a1 + 4);
  if ( result )
  {
    result = (FILE *)HIDWORD(result->_offset);
    if ( result )
    {
      qfclose(result);
      result = *(FILE **)(a1 + 4);
      HIDWORD(result->_offset) = 0;
    }
  }
  return result;
}
