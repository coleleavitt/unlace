/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10002DFDC
// Address: 0x000000010002DFDC

//----- (000000010002DFDC) ----------------------------------------------------
_QWORD **__fastcall sub_10002DFDC(_QWORD *a1, __int64 a2)
{
  _QWORD *v3; // x0
  __int64 v4; // x1

  if ( a1[3] - a2 > 0 )
    return (_QWORD **)*(unsigned __int8 *)(*a1 + a2);
  if ( under_debugger == 1 )
    __break(1u);
  interr(276);
  return sub_10002E024(v3, v4);
}
// 10002E021: variable 'v3' is possibly undefined
// 10002E021: variable 'v4' is possibly undefined
// 1000A590D: using guessed type char under_debugger;
