/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3E6D4
// Address: 0x0003E6D4

//----- (0003E6D4) --------------------------------------------------------
_DWORD *__fastcall sub_3E6D4(_DWORD *result, int a2, char a3)
{
  if ( result[1] - a2 <= 0 )
  {
    if ( under_debugger )
      __und(0xFFu);
    sub_78C64(277);
  }
  *(_BYTE *)(*result + a2) = a3;
  return result;
}
// D6C20: using guessed type char under_debugger;
