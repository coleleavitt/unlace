/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_493350
// Address: 0x0000000000493350

//----- (0000000000493350) ----------------------------------------------------
unsigned __int64 __fastcall sub_493350(unsigned __int64 result, unsigned __int8 *a2, __int64 a3)
{
  _BYTE *v3; // x2
  int v4; // w3
  __int64 v5; // x3
  int v6; // w4

  if ( a3 < 0 )
    goto LABEL_12;
  v3 = (_BYTE *)(result + a3);
  if ( (unsigned __int64)v3 <= result )
  {
    if ( !under_debugger )
      sub_492270(520);
    while ( 1 )
    {
      __break(0x3E8u);
LABEL_12:
      if ( !under_debugger )
        sub_492270(1225);
    }
  }
  if ( (_BYTE *)result != v3 - 1 )
  {
    v4 = *a2;
    *(_BYTE *)result = v4;
    if ( !v4 )
      return result;
    v5 = 1;
    while ( &v3[~result] != (_BYTE *)v5 )
    {
      v6 = a2[v5];
      *(_BYTE *)(result + v5++) = v6;
      if ( !v6 )
        return result;
    }
  }
  *(v3 - 1) = 0;
  return result;
}
// 52451C: using guessed type char under_debugger;
