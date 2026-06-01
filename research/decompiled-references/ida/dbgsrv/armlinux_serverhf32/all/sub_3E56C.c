/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3E56C
// Address: 0x0003E56C

//----- (0003E56C) --------------------------------------------------------
_DWORD *__fastcall sub_3E56C(_DWORD *result, int a2, __int16 a3)
{
  if ( result[1] - a2 <= 1 )
  {
    if ( under_debugger )
      __und(0xFFu);
    sub_78AFC(277);
  }
  *(_WORD *)(*result + a2) = a3;
  return result;
}
// D5C00: using guessed type char under_debugger;
