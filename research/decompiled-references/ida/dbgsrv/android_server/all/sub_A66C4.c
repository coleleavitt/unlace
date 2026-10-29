/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A66C4
// Address: 0x00000000000A66C4

//----- (00000000000A66C4) ----------------------------------------------------
__int64 __fastcall sub_A66C4(__int64 result)
{
  __int64 v1; // x8

  v1 = *(_QWORD *)(result + 40);
  if ( v1 )
    *(_QWORD *)(result + 40) = v1 - 1;
  return result;
}
