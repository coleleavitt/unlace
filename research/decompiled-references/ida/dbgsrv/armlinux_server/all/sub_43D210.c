/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43D210
// Address: 0x000000000043D210

//----- (000000000043D210) ----------------------------------------------------
_DWORD *__fastcall sub_43D210(unsigned __int64 a1, __int64 a2, int a3)
{
  _DWORD *result; // x0

  if ( *(_QWORD *)(a1 + 8) - a2 <= 3 )
  {
    a1 = (unsigned __int8)under_debugger;
    if ( !under_debugger )
      sub_492270(277);
    __break(0x3E8u);
  }
  result = (_DWORD *)(*(_QWORD *)a1 + a2);
  *result = a3;
  return result;
}
// 52451C: using guessed type char under_debugger;
