/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10002DF38
// Address: 0x000000010002DF38

//----- (000000010002DF38) ----------------------------------------------------
_QWORD *__fastcall sub_10002DF38(_QWORD *result, __int64 a2, int a3)
{
  _QWORD *v3; // x0
  __int64 v4; // x1
  void *v5; // x2
  signed __int64 v6; // x3

  if ( result[1] - a2 <= 3 )
  {
    if ( under_debugger == 1 )
      __break(1u);
    interr(277);
    return sub_10002DF80(v3, v4, v5, v6);
  }
  else
  {
    *(_DWORD *)(*result + a2) = a3;
  }
  return result;
}
// 10002DF7D: variable 'v3' is possibly undefined
// 10002DF7D: variable 'v4' is possibly undefined
// 10002DF7D: variable 'v5' is possibly undefined
// 10002DF7D: variable 'v6' is possibly undefined
// 1000A590D: using guessed type char under_debugger;
