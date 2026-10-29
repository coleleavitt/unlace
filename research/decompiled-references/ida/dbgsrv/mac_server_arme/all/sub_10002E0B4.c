/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10002E0B4
// Address: 0x000000010002E0B4

//----- (000000010002E0B4) ----------------------------------------------------
_QWORD **__fastcall sub_10002E0B4(_QWORD *a1, __int64 a2)
{
  __int64 v2; // x9
  _QWORD **v4; // x0

  v2 = a1[3];
  if ( v2 - a2 > 3 && v2 - (a2 + 4) > 3 )
    return (_QWORD **)(*(unsigned int *)(*a1 + a2) | ((unsigned __int64)*(unsigned int *)(*a1 + a2 + 4) << 32));
  if ( under_debugger == 1 )
    __break(1u);
  interr(276);
  return sub_10002E118(v4);
}
// 10002E115: variable 'v4' is possibly undefined
// 1000A590D: using guessed type char under_debugger;
