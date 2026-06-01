/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10002E06C
// Address: 0x000000010002E06C

//----- (000000010002E06C) ----------------------------------------------------
_QWORD **__fastcall sub_10002E06C(_QWORD *a1, __int64 a2)
{
  _QWORD *v3; // x0
  __int64 v4; // x1

  if ( a1[3] - a2 > 3 )
    return (_QWORD **)*(unsigned int *)(*a1 + a2);
  if ( under_debugger == 1 )
    __break(1u);
  interr(276);
  return sub_10002E0B4(v3, v4);
}
// 10002E0B1: variable 'v3' is possibly undefined
// 10002E0B1: variable 'v4' is possibly undefined
// 1000A590D: using guessed type char under_debugger;
