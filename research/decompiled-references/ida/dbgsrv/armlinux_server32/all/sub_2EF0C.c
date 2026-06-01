/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2EF0C
// Address: 0x0002EF0C

//----- (0002EF0C) --------------------------------------------------------
_WORD *__fastcall sub_2EF0C(_WORD *result, unsigned __int16 *a2)
{
  int v2; // r3
  _BOOL4 v3; // r3

  v2 = a2[154];
  result[28] = v2;
  v3 = v2 == 0;
  if ( !a2[164] )
    v3 = 1;
  result[44] = a2[164];
  if ( !a2[166] )
    v3 = 1;
  result[60] = a2[166];
  if ( v3 )
  {
    if ( under_debugger )
      __und(0xFFu);
    sub_78C64(20037);
  }
  return result;
}
// D6C20: using guessed type char under_debugger;
