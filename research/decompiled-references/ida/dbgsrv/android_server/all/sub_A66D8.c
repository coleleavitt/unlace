/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A66D8
// Address: 0x00000000000A66D8

//----- (00000000000A66D8) ----------------------------------------------------
__int64 __fastcall sub_A66D8(__int64 result, __int64 a2)
{
  if ( *(_QWORD *)(result + 40) )
    *(_QWORD *)(*(_QWORD *)(result + 32) + 8LL) += a2;
  return result;
}
