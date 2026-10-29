/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10002DEE0
// Address: 0x000000010002DEE0

//----- (000000010002DEE0) ----------------------------------------------------
_QWORD *__fastcall sub_10002DEE0(_QWORD *result, __int64 a2, __int16 a3)
{
  _QWORD *v3; // x0
  __int64 v4; // x1
  int v5; // w2

  if ( result[1] - a2 <= 1 )
  {
    if ( under_debugger == 1 )
      __break(1u);
    interr(277);
    return sub_10002DF38(v3, v4, v5);
  }
  else
  {
    *(_WORD *)(*result + a2) = a3;
  }
  return result;
}
// 10002DF35: variable 'v3' is possibly undefined
// 10002DF35: variable 'v4' is possibly undefined
// 10002DF35: variable 'v5' is possibly undefined
// 1000A590D: using guessed type char under_debugger;
