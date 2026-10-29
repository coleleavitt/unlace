/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3E53C
// Address: 0x0003E53C

//----- (0003E53C) --------------------------------------------------------
_DWORD *__fastcall sub_3E53C(_DWORD *result, int a2, char a3)
{
  if ( result[1] - a2 <= 0 )
  {
    if ( under_debugger )
      __und(0xFFu);
    sub_78AFC(277);
  }
  *(_BYTE *)(*result + a2) = a3;
  return result;
}
// D5C00: using guessed type char under_debugger;
