/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000628D8
// Address: 0x00000001000628D8

//----- (00000001000628D8) ----------------------------------------------------
__int64 __fastcall sub_1000628D8(__int64 a1)
{
  __int64 result; // x0

  result = sub_10005E35C(*(_QWORD *)(a1 + 32));
  if ( (result & 1) == 0 )
    *(_QWORD *)(a1 + 64) = "irs";
  return result;
}
