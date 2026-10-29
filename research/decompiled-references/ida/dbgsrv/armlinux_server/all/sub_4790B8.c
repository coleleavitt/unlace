/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4790B8
// Address: 0x00000000004790B8

//----- (00000000004790B8) ----------------------------------------------------
__int64 __fastcall sub_4790B8(__int64 result)
{
  __int64 v1; // x1

  v1 = *(_QWORD *)(result + 40);
  if ( v1 )
    *(_QWORD *)(result + 40) = v1 - 1;
  return result;
}
