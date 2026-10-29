/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43D1C0
// Address: 0x000000000043D1C0

//----- (000000000043D1C0) ----------------------------------------------------
__int64 __fastcall sub_43D1C0(__int64 *a1, __int64 a2, __int16 a3)
{
  __int64 result; // x0

  if ( a1[1] - a2 <= 1 )
  {
    if ( under_debugger )
      __break(0x3E8u);
    sub_492270(277);
  }
  *(_BYTE *)(*a1 + a2) = a3;
  result = *a1;
  *(_BYTE *)(result + a2 + 1) = HIBYTE(a3);
  return result;
}
// 52451C: using guessed type char under_debugger;
