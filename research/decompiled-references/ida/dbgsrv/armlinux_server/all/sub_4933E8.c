/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4933E8
// Address: 0x00000000004933E8

//----- (00000000004933E8) ----------------------------------------------------
_BYTE *__fastcall sub_4933E8(_BYTE *result, unsigned __int8 *a2, __int64 a3)
{
  _BYTE *v3; // x2
  int v4; // w3
  unsigned __int8 *v5; // x1
  int v6; // t1

  if ( a3 < 0 )
    goto LABEL_11;
  v3 = &result[a3];
  if ( v3 <= result )
  {
    if ( !under_debugger )
      sub_492270(520);
    while ( 1 )
    {
      __break(0x3E8u);
LABEL_11:
      if ( !under_debugger )
        sub_492270(1225);
    }
  }
  if ( result == v3 - 1 )
    goto LABEL_8;
  v4 = *a2;
  v5 = a2 + 1;
  *result = v4;
  if ( v4 )
  {
    while ( ++result != v3 - 1 )
    {
      v6 = *v5++;
      *result = v6;
      if ( !v6 )
        return result;
    }
LABEL_8:
    *(v3 - 1) = 0;
    return v3 - 1;
  }
  return result;
}
// 52451C: using guessed type char under_debugger;
