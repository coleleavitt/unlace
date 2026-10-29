/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_450F80
// Address: 0x0000000000450F80

//----- (0000000000450F80) ----------------------------------------------------
__int64 __fastcall sub_450F80(__int64 a1)
{
  __int64 result; // x0

  for ( result = *(_QWORD *)(a1 + 64); result; result = *(_QWORD *)(a1 + 64) )
    sub_450E98(a1);
  return result;
}
