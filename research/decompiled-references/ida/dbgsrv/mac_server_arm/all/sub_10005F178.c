/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005F178
// Address: 0x000000010005F178

//----- (000000010005F178) ----------------------------------------------------
__int64 __fastcall sub_10005F178(__int64 result)
{
  __int64 v1; // x8

  v1 = *(_QWORD *)(result + 40);
  if ( v1 )
    *(_QWORD *)(result + 40) = v1 - 1;
  return result;
}
