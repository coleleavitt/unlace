/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43D138
// Address: 0x000000000043D138

//----- (000000000043D138) ----------------------------------------------------
void *__fastcall sub_43D138(_QWORD *a1, __int64 a2, const void *a3, signed __int64 a4)
{
  if ( a1[1] - a2 < a4 )
  {
    if ( under_debugger )
      __break(0x3E8u);
    sub_492270(277);
  }
  return memcpy((void *)(*a1 + a2), a3, a4);
}
// 52451C: using guessed type char under_debugger;
