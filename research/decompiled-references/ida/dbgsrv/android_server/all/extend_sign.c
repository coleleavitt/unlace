/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: extend_sign
// Address: 0x00000000000AD424

//----- (00000000000AD424) ----------------------------------------------------
unsigned __int64 __fastcall extend_sign(unsigned __int64 result, int a2, unsigned __int64 a3, unsigned __int64 a4)
{
  __int64 v4; // x8
  bool v5; // w10
  __int64 v6; // x9
  __int64 v7; // x8

  if ( a2 <= 0 )
  {
    if ( !under_debugger )
      result = (unsigned __int64)interr(1112);
    __break(1u);
    return rotate_left(result, a2, a3, a4);
  }
  else if ( a2 <= 7 )
  {
    v4 = 1LL << (8 * (unsigned __int8)a2 - 1);
    v5 = (v4 & result) == 0;
    v6 = (-2 * v4) | result;
    v7 = (2 * v4 - 1) & result;
    if ( v5 || (a3 & 1) == 0 )
      return v7;
    else
      return v6;
  }
  return result;
}
// AD48D: variable 'a2' is possibly undefined
// AD48D: variable 'a3' is possibly undefined
// AD48D: variable 'a4' is possibly undefined
// 168DF0: using guessed type char under_debugger;
