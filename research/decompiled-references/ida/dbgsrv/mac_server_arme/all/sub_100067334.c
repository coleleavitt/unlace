/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100067334
// Address: 0x0000000100067334

//----- (0000000100067334) ----------------------------------------------------
__int64 __fastcall sub_100067334(__int64 a1)
{
  __int64 result; // x0

  result = sub_1000625AC(*(_QWORD *)(a1 + 32));
  if ( (result & 1) == 0 )
    *(_QWORD *)(a1 + 64) = "irs";
  return result;
}
