/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43D180
// Address: 0x000000000043D180

//----- (000000000043D180) ----------------------------------------------------
__int64 __fastcall sub_43D180(__int64 *a1, __int64 a2, char a3)
{
  __int64 result; // x0

  if ( a1[1] - a2 <= 0 )
  {
    if ( under_debugger )
      __break(0x3E8u);
    sub_492270(277);
  }
  result = *a1;
  *(_BYTE *)(result + a2) = a3;
  return result;
}
// 52451C: using guessed type char under_debugger;
