/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10002DF80
// Address: 0x000000010002DF80

//----- (000000010002DF80) ----------------------------------------------------
_QWORD **__fastcall sub_10002DF80(_QWORD *a1, __int64 a2, void *__dst, signed __int64 __n)
{
  __int64 v4; // x30
  const void *v5; // x1
  _QWORD *v7; // x0
  __int64 v8; // x1

  if ( a1[3] - a2 < __n )
  {
    if ( under_debugger == 1 )
      __break(1u);
    interr(276);
    return sub_10002DFDC(v7, v8);
  }
  else
  {
    v5 = (const void *)(*a1 + a2);
    if ( ((v4 ^ (2 * v4)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return (_QWORD **)memcpy(__dst, v5, __n);
  }
}
// 10002DFA0: variable 'v4' is possibly undefined
// 10002DFD9: variable 'v7' is possibly undefined
// 10002DFD9: variable 'v8' is possibly undefined
// 1000A590D: using guessed type char under_debugger;
