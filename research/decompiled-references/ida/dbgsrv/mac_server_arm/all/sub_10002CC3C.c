/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10002CC3C
// Address: 0x000000010002CC3C

//----- (000000010002CC3C) ----------------------------------------------------
_QWORD **__fastcall sub_10002CC3C(_QWORD *a1, __int64 a2, void *__dst, signed __int64 __n)
{
  _QWORD *v5; // x0
  __int64 v6; // x1

  if ( a1[3] - a2 >= __n )
    return (_QWORD **)memcpy(__dst, (const void *)(*a1 + a2), __n);
  if ( under_debugger == 1 )
    __break(1u);
  interr(276);
  return sub_10002CC88(v5, v6);
}
// 10002CC85: variable 'v5' is possibly undefined
// 10002CC85: variable 'v6' is possibly undefined
// 10009D90D: using guessed type char under_debugger;
