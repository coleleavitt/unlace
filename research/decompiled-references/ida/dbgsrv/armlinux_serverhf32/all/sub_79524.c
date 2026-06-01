/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_79524
// Address: 0x00079524

//----- (00079524) --------------------------------------------------------
_BYTE *__fastcall sub_79524(_BYTE *result, unsigned __int8 *a2, int a3)
{
  _BYTE *v3; // r2
  int v4; // r3
  unsigned __int8 *v5; // r1
  _BYTE *v6; // r3
  int v7; // t1

  if ( a3 < 0 )
  {
    if ( !under_debugger )
      sub_78AFC(1225);
LABEL_11:
    __und(0xFFu);
  }
  v3 = &result[a3];
  if ( v3 <= result )
  {
    if ( !under_debugger )
      sub_78AFC(520);
    goto LABEL_11;
  }
  if ( result != v3 - 1 )
  {
    v4 = *a2;
    v5 = a2 + 1;
    *result = v4;
    if ( !v4 )
      return result;
    v6 = result + 1;
    while ( v3 - 1 != v6 )
    {
      v7 = *v5++;
      *v6++ = v7;
      if ( !v7 )
        return result;
    }
  }
  *(v3 - 1) = 0;
  return result;
}
// D5C00: using guessed type char under_debugger;
