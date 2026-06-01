/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_79588
// Address: 0x00079588

//----- (00079588) --------------------------------------------------------
_BYTE *__fastcall sub_79588(_BYTE *result, unsigned __int8 *a2, int a3)
{
  _BYTE *v3; // r2
  int v4; // r3
  _BYTE *v5; // r3
  int v6; // t1

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
    *result = v4;
    if ( !v4 )
      return result;
    v5 = result + 1;
    while ( 1 )
    {
      result = v5;
      if ( v5 == v3 - 1 )
        break;
      v6 = *++a2;
      *v5++ = v6;
      if ( !v6 )
        return result;
    }
  }
  result = v3 - 1;
  *(v3 - 1) = 0;
  return result;
}
// D5C00: using guessed type char under_debugger;
