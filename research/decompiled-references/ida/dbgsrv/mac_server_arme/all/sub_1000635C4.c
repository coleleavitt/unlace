/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000635C4
// Address: 0x00000001000635C4

//----- (00000001000635C4) ----------------------------------------------------
__int64 __fastcall sub_1000635C4(__int64 result)
{
  __int64 v1; // x8

  v1 = *(_QWORD *)(result + 40);
  if ( v1 )
    *(_QWORD *)(result + 40) = v1 - 1;
  return result;
}
