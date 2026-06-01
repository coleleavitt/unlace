/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_426830
// Address: 0x0000000000426830

//----- (0000000000426830) ----------------------------------------------------
_WORD *__fastcall sub_426830(_WORD *result, unsigned __int16 *a2)
{
  int v2; // w2
  int v3; // w3
  int v4; // w1
  bool v5; // zf

  v2 = a2[198];
  result[28] = v2;
  v3 = a2[208];
  result[44] = v3;
  v4 = a2[210];
  if ( v3 )
    v5 = v2 == 0;
  else
    v5 = 1;
  result[60] = v4;
  if ( v5 || v4 == 0 )
  {
    if ( under_debugger )
      __break(0x3E8u);
    sub_492270(20037);
  }
  return result;
}
// 52451C: using guessed type char under_debugger;
