/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000635D8
// Address: 0x00000001000635D8

//----- (00000001000635D8) ----------------------------------------------------
__int64 __fastcall sub_1000635D8(__int64 result, __int64 a2)
{
  if ( *(_QWORD *)(result + 40) )
    *(_QWORD *)(*(_QWORD *)(result + 32) + 8LL) += a2;
  return result;
}
